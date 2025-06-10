#include "Libray.h"

int main()
{
  
  BookManager bookManager;

  /* 도서관에 책 추가 */
  bookManager.addBook("어린 왕자", "앙투안 드 생텍쥐페리", false);
  bookManager.addBook("돈 키호테", "미겔 데 세르반테스", false);

  /* 도서관의 모든 책 리스트 */
  std::cout << "\n" << std::endl;
  bookManager.displayAllBook();

  /* 제목으로 책 검색 */
  std::cout << "\n" << std::endl;
  bookManager.searchByBook("어린 왕자");

  /* 작가로 책 검색 */
  std::cout << "\n" << std::endl;
  bookManager.searchByAuthor("앙투안 드 생텍쥐페리");

  /* 책 이름으로 책 대여 */
  std::cout << "\n" << std::endl;
  bookManager.RentalBookByTitle("어린 왕자");
  bookManager.RentalBookByTitle("돈 키호테");

  /* 작가 이름으로 책 대여 */
  std::cout << "\n" << std::endl;
  bookManager.RentalBookByAuthor("앙투안 드 생텍쥐페리");
  bookManager.RentalBookByAuthor("미겔 데 세르반테스");

  /* 책 이름으로 반납 */
  std::cout << "\n" << std::endl;
  bookManager.ReturnBook("돈 키호테");
  bookManager.ReturnBook("어린 왕자");


  return 1;
}