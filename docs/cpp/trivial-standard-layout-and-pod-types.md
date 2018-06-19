---
title: Semplice, layout standard, POD e tipi di valori letterali | Documenti Microsoft
ms.custom: ''
ms.date: 04/05/2018
ms.topic: language-reference
ms.assetid: 2b23a7be-9bad-49fc-8298-31a9a7c556b0
ms.openlocfilehash: 7a80db109df1d9aa25f471312a9ff7103b90df7b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32424851"
---
# <a name="trivial-standard-layout-pod-and-literal-types"></a>Semplice, layout standard, POD e tipi di valori letterali

Il termine *layout* fa riferimento a disposizione i membri di un oggetto di tipo classe, struct o unione in memoria. In alcuni casi, il layout è ben definito dalla specifica del linguaggio. Tuttavia, quando una classe o struct contiene alcune funzionalità del linguaggio C++, ad esempio le classi base virtuali, le funzioni virtuali, i membri con controllo di accesso diverso, il compilatore è libero di scegliere un layout. Tale layout possono variare a seconda di quali ottimizzazioni vengono eseguite e in molti casi oggetto occupate eventualmente non anche da un'area contigua di memoria. Se, ad esempio, una classe ha funzioni virtuali, tutte le istanze di tale classe potrebbero condividere una tabella singola funzione virtuale. Tali tipi sono ovviamente molto utili, ma dispongono anche di limitazioni. Perché non è definito il layout non può essere passati di programmi scritti negli altri linguaggi, ad esempio C, e poiché potrebbero essere non contiguo può essere in modo affidabile copiate con funzioni di rapida di basso livello, ad esempio `memcopy` o serializzato in una rete.

 Per abilitare i compilatori di programmi C++ e metaprograms prendere in considerazione l'idoneità di un tipo specificato per le operazioni che dipendono da un layout di memoria specifico, C++ 14 introdotti tre categorie di semplici classi e struct: *semplice*, *layout standard*, e *POD* o dati non aggiornati. La libreria Standard include i modelli di funzione `is_trivial<T>`, `is_standard_layout<T>` e `is_pod<T>` che determinano se un determinato tipo appartiene a una categoria specificata.

## <a name="trivial-types"></a>Tipi semplici

 Quando una classe o struct in C++ è fornito dal compilatore o specificata in modo esplicito le funzioni membro speciali, è un tipo semplice. Un'area di memoria contigua occupa. Ciò può avere membri con gli identificatori di accesso diverso. In C++, il compilatore è libero di scegliere come ordinare i membri in questa situazione. Pertanto, è possibile memcopy tali oggetti, ma è Impossibile utilizzare in modo affidabile da un programma C. Un tipo trivial T può essere copiato in una matrice di char o char senza segno. copiato in modo sicuro in una variabile di tipo T Si noti che a causa dei requisiti di allineamento, potrebbero essere presenti i byte di spaziatura interna tra i membri dei tipi.

 Semplici tipi hanno un costruttore predefinito semplice, costruttore di copia semplice, l'operatore di assegnazione di copia semplice e distruttore semplice. In ogni caso, *semplice* significa che il costruttore, operatore/distruttore non è fornito dall'utente e appartiene a una classe che ha

- Nessun funzioni virtuali o le classi base virtuali,

- Nessuna classe di base con un corrispondente non semplice costruttore/operatore/distruttore

- Nessun membro di dati del tipo di classe con un corrispondente non semplice costruttore/operatore/distruttore

Gli esempi seguenti mostrano i tipi semplici. In Trivial2, la presenza del `Trivial2(int a, int b)` costruttore è necessario fornire un costruttore predefinito. Per il tipo essere qualificata come semplice, è necessario in modo esplicito che un costruttore predefinito.

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

 Quando una classe o struct non contiene alcune funzionalità del linguaggio C++, ad esempio le funzioni virtuali che non si trovano nel linguaggio C e tutti i membri hanno lo stesso controllo di accesso, è un tipo di layout standard. È in grado di memcopy e il layout è sufficientemente definito che può essere utilizzato da programmi C. I tipi layout standard possono avere funzioni membro speciali definite dall'utente. Inoltre, i tipi layout standard hanno queste caratteristiche:

- Nessun funzioni virtuali o le classi base virtuali

- tutti i membri di dati non statici hanno lo stesso controllo di accesso

- tutti i membri non statici del tipo di classe sono layout standard

- classi base sono layout standard

- non ha classi di base dello stesso tipo del primo membro dati non statici.

- soddisfa una delle seguenti condizioni:

  - non sono presenti membri dati non statici della classe più derivata e non più di una classe di base con membri dati non statici, o

  - non ha classi di base con membri dati non statici

Il codice seguente viene illustrato un esempio di un tipo di layout standard:

```cpp
struct SL
{
   // All members have same access:
   int i;
   int j;
   SL(int a, int b) : i(a), j(b) {} // User-defined constructor OK
};

```

 Le ultime due requisiti eventualmente possono essere illustrati meglio con il codice. Nell'esempio seguente, anche se Base è layout standard, `Derived` non è un layout standard perché entrambi it (la classe più derivata) e `Base` dispone di membri dati non statici:

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

 Derivato sarebbe nemmeno layout standard se `Base` aveva i membri di dati e `Derived` ha solo le funzioni membro.

## <a name="pod-types"></a>Tipi POD

 Quando una classe o struct è semplice sia layout standard, è un tipo POD (dati non aggiornati). Il layout di memoria di tipi POD è pertanto contiguo e ogni membro dispone di un indirizzo superiore rispetto al membro che è stato dichiarato prima di esso, in modo che la copia dei byte per byte e i/o binaria può essere eseguita su questi tipi.  Tipi scalari, ad esempio int sono anche tipi POD. I tipi POD che sono classi possono avere solo tipi POD come membri di dati non statici.

## <a name="example"></a>Esempio

L'esempio seguente illustra le differenze tra layout standard semplice, e i tipi POD:

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

## <a name="literal_types"></a> Tipi di valori letterali

Un tipo letterale è un tipo il cui layout può essere determinato in fase di compilazione. Gli elementi seguenti sono tipi letterali:

- void
- tipi scalari
- riferimenti
- Matrici di void, tipi scalari o riferimenti
- Una classe che ha un distruttore semplice e uno o più costruttori constexpr che non sono costruttori di copia o spostamento. In aggiunta, tutti i relativi membri dati non statici e le classi di base devono essere tipi letterali e non volatili.

## <a name="see-also"></a>Vedere anche

 [Concetti di base](../cpp/basic-concepts-cpp.md)