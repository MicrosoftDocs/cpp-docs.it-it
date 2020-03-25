---
title: Istruzioni con etichetta
ms.date: 11/04/2016
helpviewer_keywords:
- labeled statement
- statements, labeled
ms.assetid: 456a26d5-0fcc-4d1a-b71f-fa9ff3d73b91
ms.openlocfilehash: d971a0e9864aeada1db5f004ef70577512e78c76
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80179692"
---
# <a name="labeled-statements"></a>Istruzioni con etichetta

Le etichette vengono usate per trasferire il controllo del programma direttamente all'istruzione specificata.

```
identifier :  statement
case constant-expression :  statement
default :  statement
```

L'ambito di un'etichetta è l'intera funzione in cui è dichiarata.

## <a name="remarks"></a>Osservazioni

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

**Istruzione goto**

L'aspetto di un'etichetta *identificatore* nel programma di origine dichiara un'etichetta. Solo un'istruzione [goto](../cpp/goto-statement-cpp.md) può trasferire il controllo a un'etichetta dell' *identificatore* . Nel frammento di codice seguente viene illustrato l'utilizzo dell'istruzione **goto** e di un'etichetta *Identifier* :

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

Le etichette visualizzate dopo la parola chiave **case** non possono essere visualizzate anche al di fuori di un'istruzione **Switch** . Questa restrizione si applica anche alla parola chiave **default** . Nel frammento di codice seguente viene illustrato l'utilizzo corretto delle etichette **case** :

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

Le etichette visualizzate dopo la parola chiave **case** non possono essere visualizzate anche al di fuori di un'istruzione **Switch** . Questa restrizione si applica anche alla parola chiave **default** . Nel frammento di codice seguente viene illustrato l'utilizzo corretto delle etichette **case** :

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

L'aspetto di un'etichetta *identificatore* nel programma di origine dichiara un'etichetta. Solo un'istruzione [goto](../cpp/goto-statement-cpp.md) può trasferire il controllo a un'etichetta dell' *identificatore* . Nel frammento di codice seguente viene illustrato l'utilizzo dell'istruzione **goto** e di un'etichetta *Identifier* :

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

## <a name="see-also"></a>Vedere anche

[Panoramica delle istruzioni C++](../cpp/overview-of-cpp-statements.md)<br/>
[Istruzione switch (C++)](../cpp/switch-statement-cpp.md)
