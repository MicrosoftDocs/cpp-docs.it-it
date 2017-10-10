---
title: Errore del compilatore C2666 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2666
dev_langs:
- C++
helpviewer_keywords:
- C2666
ms.assetid: 78364d15-c6eb-439a-9088-e04a0176692b
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: fb6c45ad153a428d090d05c8fa24c05eef024607
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2666"></a>Errore del compilatore C2666
'identifier': numero overload presentano conversioni simili  
  
 Un operatore o la funzione in overload è ambiguo.   Elenchi di parametri formali potrebbero essere troppo simili per il compilatore risolvere l'ambiguità.  Per correggere l'errore, eseguire il cast esplicito uno o più parametri effettivi.  
  
 L'esempio seguente genera l'errore C2666:  
  
```  
// C2666.cpp  
struct complex {  
   complex(double);  
};  
  
void h(int,complex);  
void h(double, double);  
  
int main() {  
   h(3,4);   // C2666  
}  
```  
  
 Questo errore può anche essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003:  
  
-   gli operatori binari e le conversioni definite dall'utente per i tipi di puntatori  
  
-   conversione di qualificazione non corrisponde la conversione di identità  
  
 Per gli operatori binari \<, >, \<= e > =, un oggetto passato parametro è ora implicitamente convertito nel tipo dell'operando se il tipo del parametro definisce un operatore di conversione definita dall'utente in cui convertire il tipo dell'operando. È ora disponibile potenziale ambiguità.  
  
 Per il codice è valido in Visual Studio .NET 2003 sia le versioni di Visual Studio .NET di Visual C++, chiamare l'operatore di classe in modo esplicito utilizzando la sintassi di funzione.  
  
## <a name="example"></a>Esempio  
  
```  
// C2666b.cpp  
#include <string.h>  
#include <stdio.h>  
  
struct T   
{  
    T( const T& copy )   
    {  
        m_str = copy.m_str;  
    }  
  
    T( const char* str )   
    {  
        int iSize = (strlen( str )+ 1);  
        m_str = new char[ iSize ];  
        if (m_str)  
            strcpy_s( m_str, iSize, str );  
    }  
  
    bool operator<( const T& RHS )   
    {  
        return m_str < RHS.m_str;  
    }  
  
    operator char*() const   
    {  
        return m_str;  
    }  
  
    char* m_str;  
};  
  
int main()   
{  
    T str1( "ABCD" );  
    const char* str2 = "DEFG";  
  
    // Error - Ambiguous call to operator<()  
    // Trying to convert str1 to char* and then call   
    // operator<( const char*, const char* )?  
    //  OR  
    // trying to convert str2 to T and then call  
    // T::operator<( const T& )?  
  
    if( str1 < str2 )   // C2666  
  
    if ( str1.operator < ( str2 ) )   // Treat str2 as type T  
        printf_s("str1.operator < ( str2 )\n");  
  
    if ( str1.operator char*() < str2 )   // Treat str1 as type char*  
        printf_s("str1.operator char*() < str2\n");  
}  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2666  
  
```  
// C2666c.cpp  
// compile with: /c  
  
enum E   
{  
    E_A,   E_B  
};  
  
class A   
{  
    int h(const E e) const {return 0; }  
    int h(const int i) { return 1; }  
    // Uncomment the following line to resolve.  
    // int h(const E e) { return 0; }  
  
    void Test()   
    {  
        h(E_A);   // C2666  
        h((const int) E_A);  
        h((int) E_A);  
    }  
};  
```
