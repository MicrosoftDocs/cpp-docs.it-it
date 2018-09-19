---
title: Semplice, layout standard, POD e tipi di valore letterali | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.topic: language-reference
ms.assetid: 2b23a7be-9bad-49fc-8298-31a9a7c556b0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c9bb4a84b42cadeb2e076548a220725f1e867fe9
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46099715"
---
# <a name="trivial-standard-layout-pod-and-literal-types"></a>Semplici, tipi di valori letterali, di POD e di layout standard

Il termine *layout* fa riferimento a disposizione i membri di un oggetto di tipo classe, struct o unione in memoria. In alcuni casi, il layout è ben definito dalla specifica del linguaggio. Ma quando una classe o struct contiene alcune funzionalità del linguaggio C++, ad esempio le classi base virtuali, le funzioni virtuali, i membri con controllo di accesso diverso, il compilatore è libero di scegliere un layout. Layout in questione può variare a seconda di quali ottimizzazioni vengono eseguite e in molti casi oggetto occupate eventualmente da non ancora un'area contigua di memoria. Ad esempio, se una classe ha funzioni virtuali, tutte le istanze di tale classe potrebbero condividere una tabella a singola funzione virtuale. Tali tipi sono ovviamente molto utili, ma dispongono anche di limitazioni. Poiché non è definito il layout non possono essere passate per i programmi scritti in altri linguaggi, ad esempio C, e poiché potrebbero essere non contigui non eseguirne in modo affidabile la copia con funzioni di basso livello fast, ad esempio `memcopy` o serializzato in una rete.

Per abilitare i compilatori, nonché i programmi C++ e metaprograms prendere in considerazione l'idoneità di un determinato tipo per le operazioni che dipendono da un layout di memoria specifico, c++14 introdotte tre categorie di semplici classi e struct: *semplici*, *layout standard*, e *POD* o dati non aggiornati. La libreria Standard include i modelli di funzione `is_trivial<T>`, `is_standard_layout<T>` e `is_pod<T>` che determinano se un determinato tipo appartiene a una categoria specificata.

## <a name="trivial-types"></a>Tipi semplici

Quando una classe o struct c++ ha fornito dal compilatore o in modo esplicito impostate come predefinite speciali funzioni membro, quindi è un tipo semplice. Occupa un'area di memoria contigue. Può avere membri con gli identificatori di accesso diverso. In C++, il compilatore è libero di scegliere come ordinare i membri in questa situazione. Pertanto, è possibile memcopy tali oggetti ma è possibile usare in modo affidabile da un programma C. Un tipo trivial T può essere copiato in una matrice di char o unsigned char e in modo sicuro copiato nuovamente in una variabile T. Si noti che a causa dei requisiti di allineamento, potrebbero essere presenti byte di spaziatura interna tra i membri dei tipi.

I tipi Trivial hanno un costruttore predefinito semplice, costruttore di copia semplice, l'operatore di assegnazione di copia semplice e distruttore semplice. In ogni caso *trivial* significa che il costruttore/operatore/distruttore non è fornito dall'utente e a cui appartiene una classe con

- Nessun funzioni virtuali o le classi base virtuali,

- Nessuna classe base con un corrispondente non è semplice costruttore/operatore/distruttore

- Nessun membro dei dati del tipo di classe con un corrispondente non è semplice costruttore/operatore/distruttore

Gli esempi seguenti illustrano i tipi semplici. In Trivial2, la presenza del `Trivial2(int a, int b)` costruttore richiede di specificare un costruttore predefinito. Per il tipo per qualificarsi come semplice, è necessario in modo esplicito che un costruttore predefinito.

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

## <a name="standard-layout-types"></a>Tipi layout standard

Quando una classe o struct non contiene alcune funzionalità del linguaggio C++, ad esempio le funzioni virtuali che non sono disponibili nel linguaggio C e tutti i membri hanno lo stesso controllo di accesso, è un tipo di layout standard. È in grado di memcopy e il layout è sufficientemente definito che può essere utilizzato dai programmi C. I tipi layout standard possono avere funzioni membro speciali definite dall'utente. Inoltre, i tipi layout standard presentano queste caratteristiche:

- Nessun funzioni virtuali o le classi base virtuali

- tutti i membri dati non statici hanno lo stesso controllo di accesso

- tutti i membri non statici del tipo di classe sono layout standard

- classi di base sono layout standard

- non dispone di alcun classi di base dello stesso tipo del primo membro di dati non statici.

- soddisfa una delle seguenti condizioni:

  - Nessun membro dati non statici nella classe più derivata e non più di una classe di base con membri dati non statici, o

  - non dispone di alcun classi di base con membri dati non statici

Il codice seguente illustra un esempio di un tipo di layout standard:

```cpp
struct SL
{
   // All members have same access:
   int i;
   int j;
   SL(int a, int b) : i(a), j(b) {} // User-defined constructor OK
};
```

Le ultime due requisiti probabilmente possono essere illustrati meglio con il codice. Nell'esempio successivo, anche se Base è layout standard, `Derived` non è un layout standard perché questa applicazione (la classe più derivata) e `Base` dispongono di membri dati non statici:

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

In questo esempio `Derived` è layout standard poiché `Base` non ha membri dati non statici:

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

Derivata sarà ugualmente layout standard se `Base` aveva i membri dati e `Derived` aveva solo le funzioni membro.

## <a name="pod-types"></a>Tipi POD

Quando una classe o struct è semplice sia layout standard, è un tipo POD (dati non aggiornati). Il layout di memoria dei tipi POD è pertanto contiguo e ogni membro dispone di un indirizzo superiore rispetto al membro che è stato dichiarato prima di esso, in modo che la copia dei byte per byte e i/o binari possono essere eseguiti su questi tipi.  Tipi scalari, ad esempio int sono anche tipi POD. I tipi POD che sono classi possono avere solo tipi POD come membri dati non statici.

## <a name="example"></a>Esempio

L'esempio seguente mostra le distinzioni tra layout standard banale, e tipi POD:

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

## <a name="literal_types"></a> Tipi letterali

Un tipo letterale è un tipo il cui layout può essere determinato in fase di compilazione. Gli elementi seguenti sono tipi letterali:

- void
- tipi scalari
- riferimenti
- Matrici di void, tipi scalari o riferimenti
- Una classe che ha un distruttore semplice e uno o più costruttori constexpr che non sono costruttori di copia o spostamento. In aggiunta, tutti i relativi membri dati non statici e le classi di base devono essere tipi letterali e non volatili.

## <a name="see-also"></a>Vedere anche

[Concetti di base](../cpp/basic-concepts-cpp.md)