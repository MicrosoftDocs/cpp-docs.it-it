---
title: Errore del compilatore C2666 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2666
dev_langs:
- C++
helpviewer_keywords:
- C2666
ms.assetid: 78364d15-c6eb-439a-9088-e04a0176692b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 17c33f188dbf90e0e7c19ad55e0d14599541ec0d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46072732"
---
# <a name="compiler-error-c2666"></a>Errore del compilatore C2666

'identifier': numero overload presentano conversioni simili

Una funzione in overload o un operatore è ambiguo.   Gli elenchi di parametri formali potrebbero essere troppo simili per il compilatore risolvere l'ambiguità.  Per risolvere questo errore, eseguire il cast esplicito uno o più parametri effettivi.

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

Questo errore può essere generato anche in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003:

- gli operatori binari e le conversioni definite dall'utente in tipi di puntatore

- conversione di qualificazione non è quello utilizzato per la conversione di identità

Per gli operatori binari \<, >, \<= e > =, passato un parametro è ora implicitamente convertito nel tipo dell'operando se il tipo di parametro definisce un operatore di conversione definita dall'utente in cui convertire il tipo dell'operando. È ora disponibile per ambiguità potenziali.

Per il codice sia valido in entrambe le Visual Studio .NET 2003 e versioni di Visual Studio .NET di Visual C++, chiamare l'operatore di classe in modo esplicito tramite sintassi della funzione.

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