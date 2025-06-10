#include "Libray.h"

int main()
{
  
  BookManager bookManager;

  /* �������� å �߰� */
  bookManager.addBook("� ����", "������ �� �������丮", false);
  bookManager.addBook("�� Űȣ��", "�̰� �� �������׽�", false);

  /* �������� ��� å ����Ʈ */
  std::cout << "\n" << std::endl;
  bookManager.displayAllBook();

  /* �������� å �˻� */
  std::cout << "\n" << std::endl;
  bookManager.searchByBook("� ����");

  /* �۰��� å �˻� */
  std::cout << "\n" << std::endl;
  bookManager.searchByAuthor("������ �� �������丮");

  /* å �̸����� å �뿩 */
  std::cout << "\n" << std::endl;
  bookManager.RentalBookByTitle("� ����");
  bookManager.RentalBookByTitle("�� Űȣ��");

  /* �۰� �̸����� å �뿩 */
  std::cout << "\n" << std::endl;
  bookManager.RentalBookByAuthor("������ �� �������丮");
  bookManager.RentalBookByAuthor("�̰� �� �������׽�");

  /* å �̸����� �ݳ� */
  std::cout << "\n" << std::endl;
  bookManager.ReturnBook("�� Űȣ��");
  bookManager.ReturnBook("� ����");


  return 1;
}