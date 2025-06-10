#pragma once


#include <string>

class Book {
public:
  std::string title;
  std::string author;
  bool isRental;

  // 렌탈이 true이면 대여한상태 false이면 대여 안한상태
  Book(const std::string& title, const std::string& author, bool& isRental)
      : title(title), author(author), isRental(isRental) {}
};

