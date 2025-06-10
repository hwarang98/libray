#pragma once

#include <string>
#include <vector>
#include <iostream>

#include "Book.h"

/**
  * 기존 도서관 관리 프로그램에 검색 기능을 추가해주세요
  - 책 제목으로 검색이 가능해야 합니다.
  - 작가로 검색이 가능해야 합니다.
  - 책 제목이 동일한 경우는 없다고 가정 합니다.
  */
class BookManager {
private:
  std::vector<Book> books;

public:
  void addBook(std::string title, std::string author, bool isRental)
  {
    // TODO: 책 추가 기능 구현
    books.push_back(Book(title, author, isRental));
    std::cout << "completed Adding book! "
    << "\nTitle: " << title
    << "\nAuthor: " << author
    << "\nIsRental: " << (isRental ? "true" : "false")
    << "\n"
    << std::endl;
  }
  
  void displayAllBook()
  {
    // TODO: 모든 책 리스트 노출
    std::cout << "=== All Library List ===" << std::endl;
    if (books.empty()) {
      std::cout << "Empty Library" << std::endl;
      return;
    }
    
    for (const auto& book : books) {
      std::cout << "Title: " << book.title
      << "\nAuthor: " << book.author
      << "\nPossible Rental: "
      << (book.isRental ? "No" : "Yes")
      << "\n"
      << std::endl;
    }
    std::cout << "=== All Library List ===" << std::endl;
  }

  void searchByBook(std::string title)
  {
    // TODO: 책 검색 기능 구현
    std::cout << "Searching Book By " << title << "..." << std::endl;
    for (const auto& book : books)
    {
      if (title == book.title)
      {
        std::cout << "Book found By Title" <<
          "\nTitle: "<< book.title <<
          "\nAuthor: " << book.author <<
          "\nIsRental: " << book.isRental <<
          std::endl;
      }
    }
  }

  void searchByAuthor(std::string author)
  {
    // TODO: 책 작가 이름으로 검색 구현
    std::cout << "Searching Book By " << author << "..." << std::endl;
    for (const auto& book : books)
    {
      if (author == book.author)
      {
        std::cout << "Book found By Author" <<
          "\nTitle: "<< book.title <<
          "\nAuthor: " << book.author <<
          "\nIsRental: " << book.isRental <<
          std::endl;
      }
    }
  }

  void RentalBookByTitle(std::string title)
  {
    // TODO: 책 대여 기능
    for (auto& book : books)
    {
      if (title == book.title && !book.isRental)
      {
        book.isRental = true;
        std::cout << "Completed Rental Book By Title!" <<
          "\nTitle: "<< book.title <<
          "\nAuthor: " << book.author <<
          "\nIsRental: " << (book.isRental ? "true" : "false") <<
          std::endl;
      }
      else if (title == book.title && book.isRental)
      {
        std::cout << "Failed Rental Book!" <<
        "\nTitle: "<< book.title <<
        " is Already Rental " <<
        std::endl;
      }
    }
  }

  void RentalBookByAuthor(std::string author)
  {
    // TODO: 책 대여 기능
    for (auto& book : books)
    {
      if (author == book.author && !book.isRental)
      {
        book.isRental = true;
        std::cout << "Completed Rental Book By Author!" <<
          "\nTitle: "<< book.title <<
          "\nAuthor: " << book.author <<
          "\nIsRental: " << (book.isRental ? "true" : "false") <<
          std::endl;
        // book.isRental = true;
      }
      else if (author == book.author && book.isRental)
      {
        std::cout << "Failed Rental Book!" <<
        "\nTitle: "<< book.title <<
        " is Already Rental " <<
        std::endl;
      }
    }
  }

  void ReturnBook(std::string title)
  {
    // TODO: 책 대여 기능
    for (auto& book : books)
    {
      if (title == book.title  && book.isRental)
      {
        book.isRental = true;
        std::cout << "Completed Return Book By Author!" <<
          "\nTitle: "<< book.title <<
          "\nAuthor: " << book.author <<
          "\nIsRental: " << (book.isRental ? "true" : "false") <<
          std::endl;
        // book.isRental = true;
      }
    }
  }
};