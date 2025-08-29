/*
 * This file is part of wordfinder.
 *
 * Copyright (C) 2024-2025 InspiringFamily.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program. If not, see http://www.gnu.org/licenses/.
 */

#ifndef WordFinder_H
#define WordFinder_H

#include <QApplication>
#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui {
class WordFinder;
}
QT_END_NAMESPACE

class WordFinder : public QMainWindow
{
    Q_OBJECT

public:
    WordFinder(QWidget *parent = nullptr);
    ~WordFinder();

private:
    Ui::WordFinder *ui;
};
#endif // WordFinder_H
