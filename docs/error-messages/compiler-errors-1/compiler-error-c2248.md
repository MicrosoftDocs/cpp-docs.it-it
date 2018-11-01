---
title: Errore del compilatore C2248
ms.date: 11/04/2016
f1_keywords:
- C2248
helpviewer_keywords:
- C2248
ms.assetid: 7a3ba0e8-d3b9-4bb9-95db-81ef17e31d23
ms.openlocfilehash: d9b9a6c04e7e9a5d88df516125280b6b23894a01
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50558197"
---
# <a name="compiler-error-c2248"></a>Errore del compilatore C2248

«*membro*': non è possibile accedere '*access_level*'membro dichiarato nella classe'*classe*»

I membri di una classe derivata non possono accedere `private` i membri di una classe di base. Non è possibile accedere `private` o `protected` membri delle istanze della classe.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2248 quando privato o protetto i membri di una classe sono accessibili all'esterno della classe. Per risolvere questo problema, non accedere a questi membri direttamente all'esterno della classe. Usare i dati dei membri pubblici e le funzioni membro per interagire con la classe.

```cpp
// C2248_access.cpp
// compile with: cl /EHsc /W4 C2248_access.cpp
#include <stdio.h>

class X {
public:
    int  m_publicMember;
    void setPrivateMember( int i ) {
        m_privateMember = i;
        printf_s("\n%d", m_privateMember);
    }
protected:
    int  m_protectedMember;

private:
    int  m_privateMember;
} x;

int main() {
    x.m_publicMember = 4;
    printf_s("\n%d", x.m_publicMember);
    x.m_protectedMember = 2; // C2248 m_protectedMember is protected
    x.m_privateMember = 3;   // C2248  m_privMemb is private
    x.setPrivateMember(0);   // OK uses public access function
}
```

Un altro problema di conformità che espone C2248 è l'uso di elementi Friend di modelli e la specializzazione. Per risolvere questo problema, dichiarare come friend funzioni del modello utilizzando un <> elenco parametri di modello vuoto o i parametri di modello specifico.

```cpp
// C2248_template.cpp
// compile with: cl /EHsc /W4 C2248_template.cpp
template<class T>
void f(T t) {
    t.i;   // C2248
}

struct S {
private:
    int i;

public:
    S() {}
    friend void f(S);   // refer to the non-template function void f(S)
    // To fix, comment out the previous line and
    // uncomment the following line.
    // friend void f<S>(S);
};

int main() {
    S s;
    f<S>(s);
}
```

Un altro problema di conformità che espone C2248 è quando si tenta di dichiarare un elemento friend di una classe e quando la classe non è visibile per la dichiarazione friend nell'ambito della classe. Per risolvere questo problema, concedere l'accesso Friend alla classe contenitore.

```cpp
// C2248_enclose.cpp
// compile with: cl /W4 /c C2248_enclose.cpp
class T {
    class S {
        class E {};
    };
    friend class S::E;   // C2248
};

class A {
    class S {
        class E {};
        friend class A;  // grant friendship to enclosing class
    };
    friend class S::E;   // OK
};
```