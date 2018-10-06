---
title: Errore del compilatore C2280 | Microsoft Docs
ms.custom: ''
ms.date: 04/25/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2280
helpviewer_keywords:
- C2280
dev_langs:
- C++
ms.assetid: e6c5b1fb-2b9b-4554-8ff9-775eeb37161b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e71d801f2abaaf83ae1064551b40a5a5a6ba8964
ms.sourcegitcommit: a738519aa491a493a8f213971354356c0e6a5f3a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/05/2018
ms.locfileid: "48820607"
---
# <a name="compiler-error-c2280"></a>Errore del compilatore C2280

«*dichiarazione*': tentativo di fare riferimento a una funzione eliminata

Il compilatore ha rilevato un tentativo di fare riferimento a un `deleted` (funzione). Questo errore può essere causato da una chiamata a una funzione membro che è stata contrassegnata in modo esplicito come `= deleted` nel codice sorgente. Questo errore può essere causato anche da una chiamata a una funzione membro speciale implicito di uno struct o una classe che viene dichiarato e automaticamente contrassegnati come `deleted` dal compilatore. Per altre informazioni su quando il compilatore genera automaticamente `default` oppure `deleted` speciali funzioni membro, vedere [funzioni membro speciali](../../cpp/special-member-functions.md).

## <a name="example-explicitly-deleted-functions"></a>Esempio: Eliminati in modo esplicito le funzioni

Una chiamata a un'in modo esplicito `deleted` funzione causa questo errore. Un modo esplicito `deleted` funzione membro implica che la classe o struct è progettato specificamente per impedirne l'uso, quindi, per risolvere questo problema, è necessario modificare il codice per evitare tale situazione.

```cpp
// C2280_explicit.cpp
// compile with: cl /c /W4 C2280_explicit.cpp
struct A {
    A();
    A(int) = delete;
};

struct B {
    A a1;
    A a2 = A(3); // C2280, calls deleted A::A(int)
    // To fix, remove the call to A(int)
};

void f() {
    B b;    // calls implicit B::B(void)
}
```

## <a name="example-uninitialized-data-members"></a>Esempio: I membri dati non inizializzati

Un membro dati di tipo riferimento non inizializzato oppure `const` membro dati indica al compilatore di dichiarare in modo implicito un `deleted` costruttore predefinito. Per risolvere questo problema, inizializzare il membro dei dati quando viene dichiarata.

```cpp
// C2280_uninit.cpp
// compile with: cl /c C2280_uninit.cpp
struct A {
    const int i; // uninitialized const-qualified data
    // members or reference type data members cause
    // the implicit default constructor to be deleted.
    // To fix, initialize the value in the declaration:
    // const int i = 42;
} a;    // C2280
```

## <a name="example-reference-and-const-data-members"></a>Esempio: Riferimento e i membri dati const

Oggetto `const` o membro dati di tipo riferimento indica al compilatore di dichiarare un `deleted` operatore di assegnazione di copia. Una volta inizializzato, non è possibile assegnare questi membri, in modo che non è possibile usare una semplice copia o spostamento. Per risolvere questo problema, si consiglia di che modificare la logica per rimuovere le operazioni di assegnazione che causa l'errore.

```cpp
// C2280_ref.cpp
// compile with: cl /c C2280_ref.cpp
extern int k;
struct A {
    A();
    int& ri = k; // a const or reference data member causes
    // implicit copy assignment operator to be deleted.
};

void f() {
    A a1, a2;
    // To fix, consider removing this assignment.
    a2 = a1;    // C2280
}
```

## <a name="example-movable-deletes-implicit-copy"></a>Esempio: Movable Elimina copia implicita

Se una classe dichiara un costruttore di spostamento o l'operatore di assegnazione di spostamento, ma non dichiara in modo esplicito un costruttore di copia, il compilatore in modo implicito dichiara un costruttore di copia e la definisce come `deleted`. Analogamente, se una classe dichiara un costruttore di spostamento o l'operatore di assegnazione di spostamento, ma non dichiara in modo esplicito un operatore di assegnazione di copia, il compilatore in modo implicito dichiara un operatore di assegnazione di copia e lo definisce come `deleted`. Per risolvere questo problema, è necessario dichiarare in modo esplicito questi membri.

Quando viene visualizzato l'errore C2280 in relazione a un `unique_ptr`, si tratta quasi certamente perché si sta provando a richiamare il costruttore di copia, ovvero un `deleted` (funzione). Per impostazione predefinita, un `unique_ptr` non può essere copiato. Usare un costruttore di spostamento per trasferire la proprietà invece.

```cpp
// C2280_move.cpp
// compile with: cl /c C2280_move.cpp
class base
{
public:
    base();
    ~base();
    base(base&&);
    // Move constructor causes copy constructor to be
    // implicitly declared as deleted. To fix this
    // issue, you can explicitly declare a copy constructor:
    // base(base&);
    // If you want the compiler default version, do this:
    // base(base&) = default;
};

void copy(base *p)
{
    base b{*p};  // C2280
}
```

## <a name="example-variant-and-volatile-members"></a>Esempio: I membri di Variant e volatili

Versioni del compilatore prima di Visual Studio 2015 Update 2 sono stati generati e non conformi per impostazione predefinita di costruttori e distruttori per le unioni anonime. Questi ora vengono dichiarati in modo implicito come `deleted`. Tali versioni è consentito anche non conforme con la definizione implicita del `default` copiare e spostare i costruttori e `default` copiare e spostare gli operatori di assegnazione in classi e struct con `volatile` variabili membro. Il compilatore ora prende in considerazione questi dispongano di costruttori non semplici e gli operatori di assegnazione e non genera `default` implementazioni. Quando questa classe è un membro di un'unione o un'unione anonima all'interno di una classe, i costruttori di copia e spostamento e operatori di assegnazione di copia e spostamento dell'unione o classe sono definiti in modo implicito come `deleted`. Per risolvere questo problema, è necessario dichiarare in modo esplicito le funzioni membro speciali necessarie.

```cpp
// C2280_variant.cpp
// compile with: cl /c C2280_variant.cpp
struct A {
    A() = default;
    A(const A&);
};

struct B {
    union {
        A a;
        int i;
    };
    // To fix this issue, declare the required
    // special member functions:
    // B();
    // B(const B& b);
};

int main() {
    B b1;
    B b2(b1);  // C2280
}
```

## <a name="example-indirect-base-members-deleted"></a>Esempio: Indiretti membri di base eliminati

Versioni del compilatore prima di Visual Studio 2015 Update 2 sono stati non conforme e consentivano a una classe derivata di chiamare funzioni membro speciale di indirettamente derivate `private virtual` le classi di base. Il compilatore genera ora l'errore del compilatore C2280 quando viene effettuata una chiamata di questo tipo.

In questo esempio classe `top` deriva indirettamente dal cloud privato virtuale `base`. Nel codice conforme, in questo modo i membri del `base` inaccessibile agli `top`; un oggetto di tipo `top` non può essere predefinito creato o eliminato definitivamente. Per risolvere il problema nel codice che si basava sul comportamento del compilatore precedente, modificare la classe intermedia da utilizzare `protected virtual` derivazione o modifica il `top` classe Usa la derivazione diretta:

```cpp
// C2280_indirect.cpp
// compile with: cl /c C2280_indirect.cpp
class base
{
protected:
    base();
    ~base();
};

class middle : private virtual base {};
// Possible fix: Replace line above with:
// class middle : protected virtual base {};
class top : public virtual middle {};    // C4594, C4624
// Another possible fix: use direct derivation:
// class top : public virtual middle, private virtual base {};

void destroy(top *p)
{
    delete p;  // C2280
}
```
