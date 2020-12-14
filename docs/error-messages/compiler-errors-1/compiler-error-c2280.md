---
description: 'Altre informazioni su: errore del compilatore C2280'
title: Errore del compilatore C2280
ms.date: 04/25/2017
f1_keywords:
- C2280
helpviewer_keywords:
- C2280
ms.assetid: e6c5b1fb-2b9b-4554-8ff9-775eeb37161b
ms.openlocfilehash: 74ed554006faa20046571971e080e0c0a2054b72
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97295055"
---
# <a name="compiler-error-c2280"></a>Errore del compilatore C2280

'*Declaration*': tentativo di fare riferimento a una funzione eliminata

Il compilatore ha rilevato un tentativo di fare riferimento a una `deleted` funzione. Questo errore può essere causato da una chiamata a una funzione membro che è stata contrassegnata in modo esplicito come `= deleted` nel codice sorgente. Questo errore può essere causato anche da una chiamata a una funzione membro speciale implicita di uno struct o di una classe che viene automaticamente dichiarata e contrassegnata come `deleted` dal compilatore. Per ulteriori informazioni sul momento in cui il compilatore genera automaticamente **`default`** o `deleted` funzioni membro speciali, vedere [funzioni membro speciali](../../cpp/special-member-functions.md).

## <a name="example-explicitly-deleted-functions"></a>Esempio: funzioni eliminate in modo esplicito

Una chiamata a una funzione in modo esplicito `deleted` causa questo errore. Una `deleted` funzione membro in modo esplicito implica che la classe o lo struct è intenzionalmente progettato per impedirne l'utilizzo. Pertanto, per risolvere il problema, è necessario modificare il codice per evitarlo.

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

## <a name="example-uninitialized-data-members"></a>Esempio: membri dati non inizializzati

Un membro dati o un membro dati di tipo riferimento non inizializzato **`const`** induce il compilatore a dichiarare in modo implicito un `deleted` costruttore predefinito. Per risolvere questo problema, inizializzare il membro dati quando viene dichiarato.

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

## <a name="example-reference-and-const-data-members"></a>Esempio: riferimenti e membri dati const

Un **`const`** membro dati di tipo riferimento o fa in modo che il compilatore dichiari un `deleted` operatore di assegnazione di copia. Una volta inizializzati, questi membri non possono essere assegnati a, quindi una semplice copia o spostamento non funziona. Per risolvere questo problema, è consigliabile modificare la logica per rimuovere le operazioni di assegnazione che causano l'errore.

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

## <a name="example-movable-deletes-implicit-copy"></a>Esempio: eliminazione di una copia implicita

Se una classe dichiara un costruttore di spostamento o un operatore di assegnazione di spostamento, ma non dichiara in modo esplicito un costruttore di copia, il compilatore dichiara in modo implicito un costruttore di copia e lo definisce come `deleted` . Analogamente, se una classe dichiara un costruttore di spostamento o un operatore di assegnazione di spostamento, ma non dichiara esplicitamente un operatore di assegnazione di copia, il compilatore dichiara in modo implicito un operatore di assegnazione di copia e lo definisce come `deleted` . Per risolvere questo problema, è necessario dichiarare in modo esplicito questi membri.

Quando viene visualizzato l'errore C2280 in relazione a un `unique_ptr` , è quasi certamente perché si sta tentando di richiamare il relativo costruttore di copia, che è una `deleted` funzione. Per impostazione predefinita, `unique_ptr` non è possibile copiare un oggetto. Usare invece un costruttore di spostamento per trasferire la proprietà.

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

## <a name="example-variant-and-volatile-members"></a>Esempio: Variant e membri volatili

Le versioni del compilatore precedenti a Visual Studio 2015 Update 2 non erano conformi e generavano costruttori e distruttori predefiniti per le unioni anonime. Questi sono ora dichiarati in modo implicito come `deleted` . Tali versioni consentivano inoltre una definizione implicita non conforme dei **`default`** costruttori di copia e spostamento e **`default`** degli operatori di assegnazione di copia e spostamento nelle classi e negli struct che dispongono di **`volatile`** variabili membro. Il compilatore ora considera i costruttori e gli operatori di assegnazione non semplici e non genera **`default`** implementazioni. Quando tale classe è un membro di un'Unione o un'unione anonima all'interno di una classe, i costruttori di copia e spostamento e gli operatori di assegnazione di copia e spostamento dell'Unione o della classe sono definiti in modo implicito come `deleted` . Per risolvere questo problema, è necessario dichiarare in modo esplicito le funzioni membro speciali obbligatorie.

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

## <a name="example-indirect-base-members-deleted"></a>Esempio: membri di base indiretti eliminati

Le versioni del compilatore precedenti a Visual Studio 2015 Update 2 non erano conformi e consentivano a una classe derivata di chiamare funzioni membro speciali di classi base indirettamente derivate `private virtual` . Il compilatore genera ora un errore del compilatore C2280 quando viene effettuata una chiamata di questo tipo.

In questo esempio, la classe `top` deriva indirettamente da Virtual privato `base` . Nel codice conforme, ciò rende i membri di `base` inaccessibili a `top` ; un oggetto di tipo `top` non può essere costruito o eliminato in modo predefinito. Per risolvere il problema nel codice basato sul comportamento precedente del compilatore, modificare la classe intermedia per usare la `protected virtual` derivazione o modificare la `top` classe per usare la derivazione diretta:

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
