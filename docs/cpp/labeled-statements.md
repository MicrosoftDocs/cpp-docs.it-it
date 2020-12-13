---
description: 'Altre informazioni su: istruzioni con etichetta'
title: Istruzioni con etichetta
ms.date: 11/04/2016
helpviewer_keywords:
- labeled statement
- statements, labeled
ms.assetid: 456a26d5-0fcc-4d1a-b71f-fa9ff3d73b91
ms.openlocfilehash: dcedce1e67c712102be2d8ebb697c1839f3f53c8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333979"
---
# <a name="labeled-statements"></a>Istruzioni con etichetta

Le etichette vengono usate per trasferire il controllo del programma direttamente all'istruzione specificata.

```
identifier :  statement
case constant-expression :  statement
default :  statement
```

L'ambito di un'etichetta è l'intera funzione in cui è dichiarata.

## <a name="remarks"></a>Commenti

Esistono tre tipi di istruzioni etichettate. Tutti usano i due punti per separare alcuni tipi di etichette dall'istruzione. Le etichette default e case sono specifiche delle istruzioni case:

```cpp
#include <iostream>
using namespace std;

void test_label(int x) {

    if (x == 1){
        goto label1;
    }
    goto label2;

label1:
    cout << "in label1" << endl;
    return;

label2:
    cout << "in label2" << endl;
    return;
}

int main() {
    test_label(1);  // in label1
    test_label(2);  // in label2
}
```

**Istruzione GoTo**

L'aspetto di un'etichetta *identificatore* nel programma di origine dichiara un'etichetta. Solo un'istruzione [goto](../cpp/goto-statement-cpp.md) può trasferire il controllo a un'etichetta dell' *identificatore* . Nel frammento di codice seguente viene illustrato l'utilizzo dell' **`goto`** istruzione e di un'etichetta *Identifier* :

Un'etichetta non può apparire da sola ma deve essere sempre associata a un'istruzione. Se è necessario che un'etichetta appaia da sola, inserire un'istruzione null dopo di essa.

L'etichetta ha l'ambito della funzione e non può essere ridichiarata all'interno di essa. Tuttavia, lo stesso nome può essere utilizzato come etichetta in funzioni differenti.

```cpp
// labels_with_goto.cpp
// compile with: /EHsc
#include <iostream>
int main() {
   using namespace std;
   goto Test2;

   cout << "testing" << endl;

   Test2:
      cerr << "At Test2 label." << endl;
}

//Output: At Test2 label.
```

**Istruzione case**

Le etichette visualizzate dopo la **`case`** parola chiave non possono essere visualizzate anche all'esterno di un' **`switch`** istruzione. Questa restrizione si applica anche alla **`default`** parola chiave. Nel frammento di codice seguente viene illustrato l'utilizzo corretto delle **`case`** Etichette:

```cpp
// Sample Microsoft Windows message processing loop.
switch( msg )
{
   case WM_TIMER:    // Process timer event.
      SetClassWord( hWnd, GCW_HICON, ahIcon[nIcon++] );
      ShowWindow( hWnd, SW_SHOWNA );
      nIcon %= 14;
      Yield();
      break;

   case WM_PAINT:
      memset( &ps, 0x00, sizeof(PAINTSTRUCT) );
      hDC = BeginPaint( hWnd, &ps );
      EndPaint( hWnd, &ps );
      break;

   default:
      // This choice is taken for all messages not specifically
      //  covered by a case statement.

      return DefWindowProc( hWnd, Message, wParam, lParam );
      break;
}
```

## <a name="labels-in-the-case-statement"></a>Etichette nell'istruzione case

Le etichette visualizzate dopo la **`case`** parola chiave non possono essere visualizzate anche all'esterno di un' **`switch`** istruzione. Questa restrizione si applica anche alla **`default`** parola chiave. Nel frammento di codice seguente viene illustrato l'utilizzo corretto delle **`case`** Etichette:

```cpp
// Sample Microsoft Windows message processing loop.
switch( msg )
{
   case WM_TIMER:    // Process timer event.
      SetClassWord( hWnd, GCW_HICON, ahIcon[nIcon++] );
      ShowWindow( hWnd, SW_SHOWNA );
      nIcon %= 14;
      Yield();
      break;

   case WM_PAINT:
      // Obtain a handle to the device context.
      // BeginPaint will send WM_ERASEBKGND if appropriate.

      memset( &ps, 0x00, sizeof(PAINTSTRUCT) );
      hDC = BeginPaint( hWnd, &ps );

      // Inform Windows that painting is complete.

      EndPaint( hWnd, &ps );
      break;

   case WM_CLOSE:
      // Close this window and all child windows.

      KillTimer( hWnd, TIMER1 );
      DestroyWindow( hWnd );
      if ( hWnd == hWndMain )
         PostQuitMessage( 0 );  // Quit the application.
      break;

   default:
      // This choice is taken for all messages not specifically
      //  covered by a case statement.

      return DefWindowProc( hWnd, Message, wParam, lParam );
      break;
}
```

## <a name="labels-in-the-goto-statement"></a>Etichette nell'istruzione goto

L'aspetto di un'etichetta *identificatore* nel programma di origine dichiara un'etichetta. Solo un'istruzione [goto](../cpp/goto-statement-cpp.md) può trasferire il controllo a un'etichetta dell' *identificatore* . Nel frammento di codice seguente viene illustrato l'utilizzo dell' **`goto`** istruzione e di un'etichetta *Identifier* :

Un'etichetta non può apparire da sola ma deve essere sempre associata a un'istruzione. Se è necessario che un'etichetta appaia da sola, inserire un'istruzione null dopo di essa.

L'etichetta ha l'ambito della funzione e non può essere ridichiarata all'interno di essa. Tuttavia, lo stesso nome può essere utilizzato come etichetta in funzioni differenti.

```cpp
// labels_with_goto.cpp
// compile with: /EHsc
#include <iostream>
int main() {
   using namespace std;
   goto Test2;

   cout << "testing" << endl;

   Test2:
      cerr << "At Test2 label." << endl;
// At Test2 label.
}
```

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle istruzioni C++](../cpp/overview-of-cpp-statements.md)<br/>
[Istruzione switch (C++)](../cpp/switch-statement-cpp.md)
