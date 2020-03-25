---
title: Tipi semplici, layout standard, POD e letterali
ms.date: 04/05/2018
ms.assetid: 2b23a7be-9bad-49fc-8298-31a9a7c556b0
ms.openlocfilehash: b31fefd31b32a5fc4aa3f655b90d39f60a524ca4
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80188064"
---
# <a name="trivial-standard-layout-pod-and-literal-types"></a>Tipi semplici, layout standard, POD e letterali

Il termine *layout* fa riferimento alla disposizione in memoria dei membri di un oggetto di tipo class, struct o union. In alcuni casi il layout è definito completamente dalla specifica del linguaggio. Tuttavia quando un oggetto class o struct contiene determinate funzionalità del linguaggio C++ quali classi di base virtuali, funzioni virtuali o membri con controlli dell'accesso diversi, il compilatore è libero di scegliere un layout. Il layout in questione può variare a seconda delle ottimizzazioni eseguite e in molti casi è possibile che l'oggetto non occupi nemmeno un'area di memoria contigua. Se ad esempio una classe ha funzioni virtuali, tutte le istanze di tale classe possono condividere una singola tabella di funzioni virtuali. Questi tipi sono molto utili ma presentano anche limitazioni. Poiché il layout non è definito, non possono essere passati a programmi scritti in altri linguaggi, ad esempio C. Inoltre dato che potrebbero essere non contigui non possono essere copiati in modo affidabile con funzioni rapide di basso livello, ad esempio `memcopy`, né serializzati in una rete.

Per consentire ai compilatori e ai programmi e metaprogrammi C++ di valutare se un determinato tipo è adatto a operazioni che dipendono da un layout di memoria particolare, C++14 ha introdotto tre categorie di classi e struct intuitivi: *semplici*, *layout standard* e *POD* (Plain Old Data). La libreria Standard include i modelli di funzione `is_trivial<T>`, `is_standard_layout<T>` e `is_pod<T>`, che determinano se un certo tipo appartiene a una categoria specifica.

## <a name="trivial-types"></a>Tipi semplici

Quando una classe o uno struct in C++ ha funzioni membro speciali fornite dal compilatore o impostate come predefinite in modo esplicito, si tratta di un tipo semplice. Il tipo occupa un'area di memoria contigua. Può avere membri con identificatori di accesso diversi. In C++ il compilatore è libero di scegliere come ordinare i membri in questa situazione. Pertanto è possibile eseguire memcpy con tali oggetti, ma non è possibile usarli in modo affidabile da un programma C. Un tipo semplice T può essere copiato in una matrice char o unsigned char e copiato nuovamente in una variabile T in modo sicuro. Si noti che a causa dei requisiti di allineamento potrebbero essere presenti byte di riempimento tra i membri dei tipi.

I tipi semplici hanno un costruttore predefinito semplice, un costruttore di copia semplice, un operatore di assegnazione di copia semplice e un distruttore semplice. In ognuno di questi casi *semplice* significa che il costruttore/operatore/distruttore non è specificato dall'utente e appartiene a una classe che

- non ha funzioni virtuali o classi base virtuali,

- non ha classi base con un costruttore/operatore/distruttore corrispondente non semplice

- non ha membri di dati di tipo classe con un costruttore/operatore/distruttore corrispondente non semplice

Negli esempi riportati di seguito vengono illustrati i tipi semplici. In Trivial2 la presenza del costruttore `Trivial2(int a, int b)` richiede di specificare un costruttore predefinito. Perché il tipo sia qualificabile come semplice, è necessario assegnare in modo esplicito come impostazione predefinita il costruttore corrispondente.

```cpp
struct Trivial
{
      int i;
private:
   int j;
   };

struct Trivial2
{
   int i;
   Trivial2(int a, int b) : i(a), j(b) {}
   Trivial2() = default;
   private:
   int j;   // Different access control
};
```

## <a name="standard-layout-types"></a>Tipi di layout standard

Quando una classe o uno struct non contiene alcune funzionalità del linguaggio C++ come le funzioni virtuali (che non sono disponibili nel linguaggio C) e tutti i membri hanno lo stesso controllo di accesso, si tratta di un tipo layout standard. Questo tipo supporta memcpy e il layout è abbastanza definito da poter essere usato dai programmi C. I tipi layout standard possono avere funzioni membro speciali definite dall'utente. I tipi layout standard presentano anche queste caratteristiche:

- non hanno funzioni virtuali o classi base virtuali

- tutti i membri dati non statici hanno lo stesso controllo di accesso

- tutti i membri non statici del tipo di classe sono layout standard

- le eventuali classi di base sono layout standard

- non hanno nessuna classe di base dello stesso tipo del primo membro dati non statici.

- soddisfano una delle seguenti condizioni:

  - nessun membro dati non statici nella classe più derivata e non più di una classe di base con membri dati non statici, o

  - nessuna classe di base con membri di dati non statici

Il codice seguente illustra un esempio di tipo di layout standard:

```cpp
struct SL
{
   // All members have same access:
   int i;
   int j;
   SL(int a, int b) : i(a), j(b) {} // User-defined constructor OK
};
```

È probabile che gli ultimi due requisiti siano più facili da illustrare con il codice. Nell'esempio successivo, anche se Base è layout standard, `Derived` non è layout standard perché sia tale classe (la classe più derivata) sia `Base` hanno membri dati non statici:

```cpp
struct Base
{
   int i;
   int j;
};

// std::is_standard_layout<<Derived> == false!
struct Derived : public Base
{
   int x;
   int y;
};
```

In questo esempio `Derived` è layout standard perché `Base` non ha membri dati non statici:

```cpp
struct Base
{
   void Foo() {}
};

// std::is_standard_layout<<Derived> == true
struct Derived : public Base
{
   int x;
   int y;
};
```

Anche Derived sarebbe layout standard se `Base` avesse i membri dati e `Derived` avesse solo funzioni membro.

## <a name="pod-types"></a>Tipi POD

Quando una classe o struct è sia semplice sia layout standard, è un tipo POD (Plain Old Data). Il layout di memoria dei tipi POD è pertanto contiguo e ogni membro dispone di un indirizzo superiore rispetto al membro dichiarato prima di esso, in modo che su questi tipi è possibile eseguire operazioni di copia byte per byte e I/O binario.  Anche i tipi scalari come int sono tipi POD. I tipi POD che sono classi possono avere come membri dati non statici solo tipi POD.

## <a name="example"></a>Esempio

L'esempio seguente visualizza le distinzioni tra i tipi semplice, layout standard e POD:

```cpp
#include <type_traits>
#include <iostream>

using namespace std;

struct B
{
protected:
   virtual void Foo() {}
};

// Neither trivial nor standard-layout
struct A : B
{
      int a;
   int b;
   void Foo() override {} // Virtual function
};

// Trivial but not standard-layout
struct C
   {
      int a;
private:
   int b;   // Different access control
};

// Standard-layout but not trivial
struct D
{
   int a;
   int b;
   D() {} //User-defined constructor
};

struct POD
{
   int a;
   int b;
};

int main()
{
   cout << boolalpha;
   cout << "A is trivial is " << is_trivial<A>() << endl; // false
   cout << "A is standard-layout is " << is_standard_layout<A>() << endl;  // false

   cout << "C is trivial is " << is_trivial<C>() << endl; // true
   cout << "C is standard-layout is " << is_standard_layout<C>() << endl;  // false

   cout << "D is trivial is " << is_trivial<D>() << endl;  // false
   cout << "D is standard-layout is " << is_standard_layout<D>() << endl; // true

   cout << "POD is trivial is " << is_trivial<POD>() << endl; // true
   cout << "POD is standard-layout is " << is_standard_layout<POD>() << endl; // true

   return 0;
}
```

## <a name="literal-types"></a><a name="literal_types"></a> Tipi letterali

Un tipo letterale è un tipo il cui layout può essere determinato in fase di compilazione. Gli elementi seguenti sono tipi letterali:

- void
- tipi scalari
- riferimenti
- Matrici di void, tipi scalari o riferimenti
- Una classe che ha un distruttore semplice e uno o più costruttori constexpr che non sono costruttori di copia o spostamento. In aggiunta, tutti i relativi membri dati non statici e le classi di base devono essere tipi letterali e non volatili.

## <a name="see-also"></a>Vedere anche

[Concetti di base](../cpp/basic-concepts-cpp.md)
