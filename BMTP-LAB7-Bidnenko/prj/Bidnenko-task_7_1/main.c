#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#include <wchar.h>
#include <ctype.h>
#include <fcntl.h>
#include <io.h>

wchar_t inputSentence[255], cuttedSentence[255];

void setLocalization()
{
    _setmode(_fileno(stdout),_O_U16TEXT);
    _setmode(_fileno(stdin),_O_U16TEXT);
}

void info()
{
    wprintf(L"╔════════════════════╦════════════════════════════════════════════════════╗\n");
    wprintf(L"║   Виконавець:      ║  Бідненко Павло Максимович                         ║\n");
    wprintf(L"║   Рік розробки:    ║  2022                                              ║\n");
    wprintf(L"║   ВНЗ:             ║  Центральний Національний Технічний Університет    ║\n");
    wprintf(L"║   Мова інтерфейсу: ║  Українська                                        ║\n");
    wprintf(L"║   Призначення:     ║  Введення речення до '.', '!' або '?'. Виведення:  ║\n");
    wprintf(L"║                    ║  чи є у введеному тексті слово \"девелопер\"         ║\n");
    wprintf(L"╚════════════════════╩════════════════════════════════════════════════════╝\n");
}

void inputWithInfoAndSerch()
{
    wprintf(L"Введіть речення, яке закінчується сиволами . або ! або ? \n");
    fgetws(inputSentence, 255, stdin);
    for(int i = 0; i < 255; i++)
    {
        if(inputSentence[i] == L'.' || inputSentence[i] == L'!' || inputSentence[i] == L'?' ||
                (inputSentence[i-1] == L')' && inputSentence[i] == L')'))
        {
            break;
        }
        cuttedSentence[i] = inputSentence[i];
    }
    for(int i = 0; i < 255; i++)
    {
        inputSentence[i] = cuttedSentence[i];
    }
}

wchar_t *removeSpaces(wchar_t *str)
{
	int i = 0, j = 0;
	while (str[i])
	{
		if (str[i] != L' ')
          str[j++] = str[i];
		i++;
	}
	str[j] = L'\0';
	return str;
}

void founder()
{
    wchar_t *lowerMainString;
    lowerMainString = removeSpaces(inputSentence);

    wchar_t *developer = L"девелопер";
    wchar_t *findWord = strstr(lowerMainString, developer);

    if (findWord) {
        wprintf(L"Строка є\n");
    }
    else {
        wprintf(L"Строки немає\n");
    }
}

void output()
{
    for (unsigned int i = 0; i < 255; i++) {
        wprintf(L"%c", cuttedSentence[i]);
    }
}

int main()
{
    setLocalization();
    info();
    inputWithInfoAndSerch();
    founder();
    output();
    return 0;
}
