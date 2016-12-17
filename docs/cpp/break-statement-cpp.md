---
title: "Istruzione break (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "break_cpp"
  - "break"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "break (parola chiave) [C++]"
ms.assetid: 63739928-8985-4b05-93ce-016322e6da3d
caps.latest.revision: 13
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Istruzione break (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'istruzione `break` termina l'esecuzione del ciclo di inclusione più vicino o dell'istruzione condizionale in cui appare.  Il controllo passa all'istruzione che segue la fine dell'istruzione, se presente.  
  
## Sintassi  
  
```  
break;  
```  
  
## Note  
 L'istruzione `break` viene utilizzata con l'istruzione [switch](../cpp/switch-statement-cpp.md) condizionale e con le istruzioni del ciclo [do](../cpp/do-while-statement-cpp.md), [for](../cpp/for-statement-cpp.md) e [while](../cpp/while-statement-cpp.md).  
  
 In un'istruzione `switch` l'istruzione `break` fa sì che il programma esegua l'istruzione successiva all'esterno dell'istruzione `switch`.  Senza un'istruzione `break`, viene eseguita ogni istruzione corrispondente all'etichetta `case` fino alla fine dell'istruzione `switch`, inclusa la clausola `default`.  
  
 Nei cicli l'istruzione `break` termina l'esecuzione dell'istruzione `do`, `for`o `while` di inclusione più vicina.  Il controllo passa all'istruzione che segue l'istruzione terminata, se presente.  
  
 Nelle istruzioni annidate l'istruzione `break` termina solo l'istruzione `do`, `for`, `switch` o `while` che la include.  È possibile utilizzare un'istruzione `goto` o `return` per trasferire il controllo da strutture maggiormente annidate.  
  
## Esempio  
 Nel codice seguente viene illustrato come utilizzare l'istruzione `break` in un ciclo `for`.  
  
```cpp  
#include <iostream>  
using namespace std;  
  
int main()  
{  
    // An example of a standard for loop  
    for (int i = 1; i < 10; i++)  
    {  
        cout << i << '\n';  
        if (i == 4)  
            break;  
    }  
  
    // An example of a range-based for loop  
int nums []{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  
  
    for (int i : nums) {  
        if (i == 4) {  
            break;  
        }  
        cout << i << '\n';  
    }  
}  
```  
  
  **In ogni caso:**   
**1**  
**2**  
**3** Nel codice seguente viene illustrato come utilizzare `break` in un ciclo `while` e un ciclo `do`.  
  
```cpp  
  
#include <iostream>  
using namespace std;  
  
int main() {  
    int i = 0;  
  
    while (i < 10) {  
        if (i == 4) {  
            break;  
        }  
        cout << i << '\n';  
        i++;  
    }  
  
    i = 0;  
    do {  
        if (i == 4) {  
            break;  
        }  
        cout << i << '\n';  
        i++;  
    } while (i < 10);  
}  
```  
  
  **In ogni caso:**  
**0**  
**1**  
**2**  
**3** Nel codice seguente viene illustrato come utilizzare `break` in un'istruzione switch.  È necessario utilizzare `break` in ogni caso se si desidera gestire separatamente ogni caso. Se non si utilizza `break`, l'esecuzione del codice passa al caso successivo.  
  
```cpp  
#include <iostream>  
using namespace std;  
  
enum Suit{ Diamonds, Hearts, Clubs, Spades };  
  
int main() {  
  
    Suit hand;  
    . . .  
    // Assume that some enum value is set for hand  
    // In this example, each case is handled separately  
    switch (hand)  
    {  
    case Diamonds:  
        cout << "got Diamonds \n";  
        break;  
    case Hearts:  
        cout << "got Hearts \n";  
        break;  
    case Clubs:  
        cout << "got Clubs \n";  
        break;  
    case Spades:  
        cout << "got Spades \n";  
        break;  
    default:   
          cout << "didn't get card \n";  
    }  
    // In this example, Diamonds and Hearts are handled one way, and  
    // Clubs, Spades, and the default value are handled another way  
    switch (hand)  
    {  
    case Diamonds:  
    case Hearts:  
        cout << "got a red card \n";  
        break;  
    case Clubs:  
    case Spades:   
    default:  
        cout << "didn't get a red card \n";  
    }  
}  
```  
  
## Vedere anche  
 [Istruzioni di spostamento](../cpp/jump-statements-cpp.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Istruzione continue](../cpp/continue-statement-cpp.md)