#include"Book.h"
using std::cout; using std::endl;

int Book::PageCounter = 0;

Page::Page(string header,string data):m_header(header),m_data(data){}

B5Page::B5Page():Page("empty","empty"){}

void B5Page::Print()
{
    cout<<"[Page::header]  "<<m_header<<endl;
    cout<<"[Page::text]  "<<m_data<<endl;
}

void B5Page::SetHeader(string header)
{
    m_header = header;
}

B5Page* B5Page::Copy()
{
    B5Page * copy = new B5Page;
    copy->m_header = m_header + " (copy)";
    copy->m_data = m_data;
    return copy;
}

int B5Page::operator==(B5Page next)
{
    if(m_header == next.m_header && m_data == next.m_data) return 1;
    else return 0;
}

Book::Book(string title):Page("empty","empty")
{
    m_title=title;
    m_author = "Anonym";
}

void Book::AddPage(B5Page* NextPage)
{
    for(int i = 0; i<PageCounter;i++)
    {
        if(*NextPage == m_pages[i])
        {
        cout<<"[WARNING]:: Trying to add already existing page!"<<endl;
        }
    }
    m_pages.push_back(*NextPage);
    PageCounter++;
}

void Book::Print()
{
    cout<<endl<<"[Book::autor]       "<<m_author<<endl;
    cout<<"[Page(0)::text]     "<<m_title<<endl;
    for(int i = 1;i<PageCounter-1;i++)
    {
        cout<<"[Page("<<i<<")::header]   "<<m_pages[i].m_header<<endl;
        cout<<"[Page("<<i<<")::text]     "<<m_pages[i].m_data<<endl;
    }
}

void Book::SetHeader(string header)
{
    for(int i = 1 ; i<PageCounter; i++)
    {
        m_pages[i].SetHeader(header);
    }
}

Book::~Book()
{
    // delete [] m_pages;
}
