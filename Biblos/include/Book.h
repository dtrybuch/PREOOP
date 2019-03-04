#pragma once
#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::vector;

class Page{
    public:
        Page(string header,string data);
    protected:
        //zmienna zawierajaca naglowek
        string m_header;
        //zmienna zawierajaca dane
        string m_data;
};

class B5Page:public Page{
    public:
        friend class Book;
        B5Page();
        void Print(); 
        void SetHeader(string header);
        B5Page* Copy();
        int operator==(B5Page  next);
    protected:
};

class Book:public Page{
    protected:
        string m_author;
        vector<B5Page> m_pages;
        string m_title;
    public:
        Book() = default;
        Book(string title);
        static int PageCounter;
        void AddPage(B5Page* NextPage);
        void Print();
        void SetHeader(string header);
        ~Book();
};