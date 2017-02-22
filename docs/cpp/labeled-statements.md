---
title: "Istruzioni con etichetta | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "goto"
  - "case"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "labeled (istruzione)"
  - "istruzioni, labeled"
ms.assetid: 456a26d5-0fcc-4d1a-b71f-fa9ff3d73b91
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Istruzioni con etichetta
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le etichette vengono usate per trasferire il controllo del programma direttamente all'istruzione specificata.  
  
```  
identifier :  statement  
case constant-expression :  statement  
default :  statement  
```  
  
 L'ambito di un'etichetta è l'intera funzione in cui è dichiarata.  
  
## Note  
 Esistono tre tipi di istruzioni etichettate.  Tutti usano i due punti per separare alcuni tipi di etichette dall'istruzione.  Le etichette default e case sono specifiche delle istruzioni case:  
  
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
  
 La presenza di un'etichetta *identifier* nel programma di origine dichiara un'etichetta.  Solo un'istruzione [goto](../cpp/goto-statement-cpp.md) consente di trasferire il controllo a un'etichetta *identifier*.  Il frammento di codice seguente illustra l'uso dell'istruzione `goto` e di un'etichetta *identifier*:  
  
 Un'etichetta non può apparire da sola ma deve essere sempre associata a un'istruzione.  Se è necessario che un'etichetta appaia da sola, inserire un'istruzione null dopo di essa.  
  
 L'etichetta ha l'ambito della funzione e non può essere ridichiarata all'interno di essa.  Tuttavia, lo stesso nome può essere usato come etichetta in funzioni differenti.  
  
```  
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
  
 Le etichette che vengono visualizzate dopo la parola chiave **case** non possono essere visualizzate anche all'esterno di un'istruzione `switch`.  Questa limitazione si applica anche alla parola chiave **default**. Il seguente frammento di codice illustra l'utilizzo corretto delle etichette **case**:  
  
```  
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
  
## Etichette nell'istruzione case  
 Le etichette che vengono visualizzate dopo la parola chiave **case** non possono essere visualizzate anche all'esterno di un'istruzione `switch`.  Questa limitazione si applica anche alla parola chiave **default**. Il seguente frammento di codice illustra l'utilizzo corretto delle etichette **case**:  
  
```  
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
  
## Etichette nell'istruzione goto  
 La presenza di un'etichetta *identifier* nel programma di origine dichiara un'etichetta.  Solo un'istruzione [goto](../cpp/goto-statement-cpp.md) consente di trasferire il controllo a un'etichetta *identifier*.  Il frammento di codice seguente illustra l'uso dell'istruzione `goto` e di un'etichetta *identifier*:  
  
 Un'etichetta non può apparire da sola ma deve essere sempre associata a un'istruzione.  Se è necessario che un'etichetta appaia da sola, inserire un'istruzione null dopo di essa.  
  
 L'etichetta ha l'ambito della funzione e non può essere ridichiarata all'interno di essa.  Tuttavia, lo stesso nome può essere usato come etichetta in funzioni differenti.  
  
```  
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
  
## Vedere anche  
 [Cenni preliminari sulle istruzioni C\+\+](../cpp/overview-of-cpp-statements.md)   
 [Istruzione switch \(C\+\+\)](../cpp/switch-statement-cpp.md)