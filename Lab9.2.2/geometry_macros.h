#pragma once
// geometry_macros.h
#ifndef GEOMETRY_MACROS_H
#define GEOMETRY_MACROS_H

// ������ ��� ���������� ����� ���������� �� ������ ��������� (������� ������)
#define AREA_TRIANGLE(a, b, c) (sqrt((a + b + c) / 2.0 * (((a + b + c) / 2.0) - a) * (((a + b + c) / 2.0) - b) * (((a + b + c) / 2.0) - c)))

// ������ ��� ���������� ����� ��������
#define AREA_TRAPEZOID(base1, base2, height) (((base1) + (base2)) / 2.0 * (height))

// ������ ��� �������� ��������� ����������
#define IS_TRIANGLE(a, b, c) (((a) + (b) > (c)) && ((a) + (c) > (b)) && ((b) + (c) > (a)))

// ������ ��� �������� ��������� �������� (������: ���� ������� ����� ����)
#define IS_TRAPEZOID(base1, base2, height) ((base1) > 0 && (base2) > 0 && (height) > 0)

#endif // GEOMETRY_MACROS_H
