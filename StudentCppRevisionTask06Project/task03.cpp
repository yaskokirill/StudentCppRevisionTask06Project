#include "tasks.h"

/*	Task 03. Chess Pawn 2 [��������� �����]
*
*	��������� ����� - ��� ����� ������ ��������� ������,
*	�� �� ����� ���� ����� ������������ � ����� ��������� ������ ����� ������.
*	�����������, ����� ����� ������ ����� �� ��������� � ������ �� ���� ������.
*	���� ��� ��������� ������ ��������� �����, ����������,
*	����� �� ����� ������� � ������ ������ �� ������ ����� �����
*	� ����� ����� ����� ����� �������.
*
*	����������
*	1) ����� ������� ������� � ����������� ��������, ��������� ���� ��������� �����
*	� ��������� � ������� ��������������� ���������� x � y.
*	2) �������, ����� ������ �������� ���� ��� �� ������ �������������� �����, �.�.
*	���������� ������ �� y ������ ���� �� ��������� �� 2 �� 8.
*	3) �� �������� ��� "������ �� ������". ���� ������������ ����� �������� ���������� ������,
*	�� ������� ������ ���������� ��������� �������� false.
*	4) ��� ������� ���������� ���������� � ���� �������������� ��������, �������� ���������,
*	���������� �������� � �������� �������� (?:).
*
*	������ ������� ������ [input]
*	������� ��������� �� ���� ������ ������������� ��������,
*	�������� ����� ������� (��� ���������� ������ - �� 1 �� 8)
*	� ����� ������ (��� ���������� ������ - �� 2 �� 8) ������� ��� ������ ������ (x1, y1),
*	� ����� ��� ������ ������ (x2, y2), ��� x - ���������� ������ �� �����������,
*	� y - ���������� ������ �� ���������.
*
*	������ �������� ������ [output]
*	������� ������ ���������� ��������� �������� - ��������� �������.
*
*	[ input 1]: 4 4 5 5
*	[output 1]: false
*
*	[ input 2]: 4 1 4 2
*	[output 2]: false
*
*	[ input 3]: 0 4 0 5
*	[output 3]: false
*
*	[ input 4]: 4 4 4 5
*	[output 4]: true
*/

bool task03(int x1, int y1, int x2, int y2) {
	if (x1 < 1 || y1 < 7 || x2 < 1 || y2 < 7 || x1 > 8 || y1 > 8 || x2 > 8 || y2 > 8)
	{
		return false;
	}

	return (x1 == x2 && y1 + 1 == y2) ? true : false;
}