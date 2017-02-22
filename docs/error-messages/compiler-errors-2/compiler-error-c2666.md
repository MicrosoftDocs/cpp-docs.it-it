---
title: "Errore del compilatore C2666 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2666"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2666"
ms.assetid: 78364d15-c6eb-439a-9088-e04a0176692b
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Errore del compilatore C2666
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': numero overload presentano conversioni simili  
  
 Un operatore o una funzione in overload è ambigua.   È possibile che gli elenchi di parametri formali siano troppo simili perché il compilatore risolva l'ambiguità.  Per correggere questo errore, eseguire il cast esplicito di uno o più parametri effettivi.  
  
 Il seguente codice di esempio genera l'errore C2666:  
  
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
  
 Questo errore viene anche generato come risultato delle operazioni di conformità eseguite per Visual Studio .NET 2003.  
  
-   Operatori binari e conversioni definite dall'utente a tipi puntatore  
  
-   Conversione di qualificazione diversa da conversione di identità  
  
 Per gli operatori binari \<, \>, \<\= e \>\=, un parametro passato è ora implicitamente convertito nel tipo dell'operando se il tipo del parametro definisce un operatore di conversione definito dall'utente per la conversione al tipo dell'operando.  Attualmente possono verificarsi ambiguità.  
  
 Affinché il codice sia valido in entrambe le versioni Visual Studio .NET 2003 e Visual Studio .NET di Visual C\+\+, chiamare esplicitamente l'operatore di classe mediante la sintassi di funzione.  
  
## Esempio  
  
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
  
    // Error – Ambiguous call to operator<()  
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
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C2666:  
  
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