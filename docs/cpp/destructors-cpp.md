---
description: 'Altre informazioni su: distruttori (C++)'
title: Distruttori (C++)
ms.date: 07/20/2019
helpviewer_keywords:
- objects [C++], destroying
- destructors, C++
ms.assetid: afa859b0-f3bc-4c4d-b250-c68b335b6004
ms.openlocfilehash: 121df368fc79f7dbabe4ccac6fe93c36788c5e51
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97195567"
---
# <a name="destructors-c"></a>Distruttori (C++)

Un distruttore è una funzione membro che viene richiamata automaticamente quando l'oggetto esce dall'ambito o viene eliminato in modo esplicito da una chiamata a **`delete`** . Un distruttore ha lo stesso nome della classe, preceduto da una tilde ( `~` ). Ad esempio, il distruttore per la classe `String` viene dichiarato con `~String()`.

Se non si definisce un distruttore, il compilatore ne fornirà uno predefinito; per molte classi è sufficiente. È sufficiente definire un distruttore personalizzato quando la classe archivia gli handle per le risorse di sistema che devono essere rilasciate o puntatori che possiedono la memoria a cui puntano.

Si consideri la dichiarazione seguente di una classe `String`:

```cpp
// spec1_destructors.cpp
#include <string>

class String {
public:
   String( char *ch );  // Declare constructor
   ~String();           //  and destructor.
private:
   char    *_text;
   size_t  sizeOfText;
};

// Define the constructor.
String::String( char *ch ) {
   sizeOfText = strlen( ch ) + 1;

   // Dynamically allocate the correct amount of memory.
   _text = new char[ sizeOfText ];

   // If the allocation succeeds, copy the initialization string.
   if( _text )
      strcpy_s( _text, sizeOfText, ch );
}

// Define the destructor.
String::~String() {
   // Deallocate the memory that was previously reserved
   //  for this string.
   delete[] _text;
}

int main() {
   String str("The piper in the glen...");
}
```

Nell'esempio precedente, il distruttore `String::~String` Usa l' **`delete`** operatore per deallocare lo spazio allocato in modo dinamico per l'archiviazione di testo.

## <a name="declaring-destructors"></a>Dichiarazione di distruttori

I distruttori sono funzioni con lo stesso nome della classe ma preceduti da un carattere tilde (`~`).

Diverse regole controllano la dichiarazione di distruttori. I distruttori:

- Non accettano argomenti.

- Non restituire un valore (o **`void`** ).

- Non può essere dichiarato come **`const`** , **`volatile`** o **`static`** . Tuttavia, possono essere richiamati per la distruzione di oggetti dichiarati come **`const`** , **`volatile`** o **`static`** .

- Può essere dichiarato come **`virtual`** . Usando i distruttori virtuali, è possibile eliminare definitivamente gli oggetti senza conoscerne il tipo; il distruttore corretto per l'oggetto viene richiamato usando il meccanismo di funzione virtuale. Si noti che i distruttori possono essere dichiarati come funzioni virtuali pure per classi astratte.

## <a name="using-destructors"></a>Uso di distruttori

I distruttori vengono chiamati quando si verifica uno degli eventi seguenti:

- Un oggetto (automatico) locale con ambito del blocco diventa esterno all'ambito.

- Un oggetto allocato tramite l' **`new`** operatore viene deallocato in modo esplicito tramite **`delete`** .

- La durata di un oggetto temporaneo termina.

- Un programma termina e gli oggetti globali o statici sono presenti.

- Il distruttore viene chiamato in modo esplicito utilizzando il nome completo della funzione distruttore.

I distruttori possono chiamare liberamente le funzioni membro di classe e accedere ai dati membro di classe.

L'uso dei distruttori è costituito da due limitazioni:

- Non è possibile accettarne l'indirizzo.

- Le classi derivate non ereditano il distruttore della relativa classe di base.

## <a name="order-of-destruction"></a>Ordine di distruzione

Quando un oggetto esce dall'ambito o viene eliminato, la sequenza di eventi nella relativa distruzione completa è la seguente:

1. Il distruttore della classe viene chiamato e il corpo della funzione distruttore viene eseguito.

1. I distruttori per gli oggetti membri non statici vengono chiamati in ordine inverso in cui appaiono nella dichiarazione di classe. L'elenco di inizializzazione dei membri facoltativo usato nella costruzione di questi membri non influisce sull'ordine di costruzione o distruzione.

1. I distruttori per le classi base non virtuali vengono chiamati in ordine inverso rispetto alla dichiarazione.

1. I distruttori per le classi base virtuali vengono chiamati in ordine inverso di dichiarazione.

```cpp
// order_of_destruction.cpp
#include <cstdio>

struct A1      { virtual ~A1() { printf("A1 dtor\n"); } };
struct A2 : A1 { virtual ~A2() { printf("A2 dtor\n"); } };
struct A3 : A2 { virtual ~A3() { printf("A3 dtor\n"); } };

struct B1      { ~B1() { printf("B1 dtor\n"); } };
struct B2 : B1 { ~B2() { printf("B2 dtor\n"); } };
struct B3 : B2 { ~B3() { printf("B3 dtor\n"); } };

int main() {
   A1 * a = new A3;
   delete a;
   printf("\n");

   B1 * b = new B3;
   delete b;
   printf("\n");

   B3 * b2 = new B3;
   delete b2;
}

Output: A3 dtor
A2 dtor
A1 dtor

B1 dtor

B3 dtor
B2 dtor
B1 dtor
```

### <a name="virtual-base-classes"></a>Classi di base virtuali

I distruttori delle classi base virtuali vengono chiamati in ordine inverso, rispetto a come appaiono in un grafico aciclico diretto (prima quelli che si trovano in profondità, da sinistra a destra, attraversamento post-ordine). La figura seguente rappresenta un grafico di ereditarietà.

![Rappresentazione grafica dell'ereditarietà con classi di base virtuali](../cpp/media/vc392j1.gif "Rappresentazione grafica dell'ereditarietà con classi di base virtuali") <br/>
Rappresentazione grafica dell'ereditarietà con classi di base virtuali

Di seguito vengono elencate le intestazioni di classe per le classi raffigurate nell'immagine.

```cpp
class A
class B
class C : virtual public A, virtual public B
class D : virtual public A, virtual public B
class E : public C, public D, virtual public B
```

Per determinare l'ordine di distruzione delle classi base virtuali di un oggetto di tipo `E`, il compilatore genera un elenco applicando l'algoritmo seguente:

1. Attraversare il grafico a sinistra, a partire dal punto più profondo nel grafico, in questo caso, `E`.

1. Eseguire attraversamenti verso sinistra, fino a che non siano stati visti tutti i nodi. Annotare il nome del nodo corrente.

1. Rivedere il nodo precedente (in basso a destra) per determinare se il nodo memorizzato è una classe base virtuale.

1. Se il nodo memorizzato è una classe base virtuale, analizzare l'elenco per verificare se sia già stata inserita. Se non è una classe base virtuale, ignorarlo.

1. Se il nodo memorizzato non è ancora nell'elenco, aggiungerlo alla fine dell'elenco.

1. Attraversare il grafico verso l'alto e lungo il successivo percorso a destra.

1. Andare al passaggio 2.

1. Quando viene esaurito l'ultimo percorso verso l'alto, annotare il nome del nodo corrente.

1. Andare al passaggio 3.

1. Continuare questo processo finché l'ultimo nodo non sia nuovamente il nodo corrente.

Di conseguenza, per la classe `E`, l'ordine di distruzione è:

1. Classe base non virtuale `E` .

1. Classe base non virtuale `D` .

1. Classe base non virtuale `C` .

1. Classe base virtuale `B`.

1. Classe base virtuale `A`.

Questo processo genera un elenco ordinato di voci univoche. Nessun nome di classe viene visualizzato due volte. Una volta costruito l'elenco, viene esaminato in ordine inverso, quindi viene chiamato il distruttore per ogni classe presente nell'elenco, dall'ultima alla prima.

L'ordine di costruzione o di distruzione è particolarmente importante quando i costruttori o i distruttori di una classe si basano sul presupposto che l'altro componente venga creato prima o persista più a lungo. Ad esempio, potrebbe accadere che il distruttore di `A` (nella figura riportata in precedenza) si basi sul presupposto che `B` sia ancora presente, quando il codice viene eseguito, o viceversa.

Tali interdipendenze tra le classi in un grafico di ereditarietà sono di per sé rischiose, perché le classi derivate in seguito possono modificare la nozione di percorso più a sinistra, alterando, in questo modo, l'ordine di costruzione e distruzione.

### <a name="non-virtual-base-classes"></a>Classi base non virtuali

I distruttori per le classi base non virtuali vengono chiamati in ordine inverso in cui vengono dichiarati i nomi delle classi di base. Si consideri la seguente dichiarazione di classe:

```cpp
class MultInherit : public Base1, public Base2
...
```

Nell'esempio precedente, il distruttore di `Base2` viene chiamato prima del distruttore di `Base1`.

## <a name="explicit-destructor-calls"></a>Chiamate del distruttore esplicite

La chiamata di un distruttore in modo esplicito è raramente necessaria. Tuttavia, può essere utile eseguire la pulizia di oggetti inseriti in corrispondenza di indirizzi assoluti. Questi oggetti vengono comunemente allocati utilizzando un operatore definito dall'utente **`new`** che accetta un argomento di posizione. L' **`delete`** operatore non può deallocare la memoria perché non è allocata dall'archivio gratuito. per ulteriori informazioni, vedere [gli operatori new e Delete](../cpp/new-and-delete-operators.md). Una chiamata al distruttore è tuttavia in grado di eseguire una pulizia appropriata. Per chiamare in modo esplicito il distruttore di un oggetto, `s`, di classe `String`, utilizzare una delle seguenti istruzioni:

```cpp
s.String::~String();     // non-virtual call
ps->String::~String();   // non-virtual call

s.~String();       // Virtual call
ps->~String();     // Virtual call
```

La notazione per le chiamate esplicite ai distruttori, illustrata nel passaggio precedente, può essere usata indipendentemente dal fatto che il tipo definisca un distruttore. Ciò consente di effettuare tali chiamate esplicite senza sapere se per tale tipo venga definito un distruttore. Una chiamata esplicita a un distruttore in cui non viene definito alcun distruttore non produce alcun effetto.

## <a name="robust-programming"></a>Programmazione efficiente

Una classe richiede un distruttore se acquisisce una risorsa e per gestire la risorsa in modo sicuro è probabile che debba implementare un costruttore di copia e un'assegnazione di copia.

Se queste funzioni speciali non sono definite dall'utente, vengono definite in modo implicito dal compilatore. I costruttori e gli operatori di assegnazione generati in modo implicito eseguono una copia superficiale, membro per membro, che è quasi certamente errata se un oggetto gestisce una risorsa.

Nell'esempio seguente, il costruttore di copia generato in modo implicito renderà i puntatori `str1.text` e farà `str2.text` riferimento alla stessa memoria e, quando viene restituito da `copy_strings()` , tale memoria verrà eliminata due volte, che è un comportamento non definito:

```cpp
void copy_strings()
{
   String str1("I have a sense of impending disaster...");
   String str2 = str1; // str1.text and str2.text now refer to the same object
} // delete[] _text; deallocates the same memory twice
  // undefined behavior
```

La definizione esplicita di un distruttore, un costruttore di copia o un operatore di assegnazione di copia impedisce la definizione implicita del costruttore di spostamento e dell'operatore di assegnazione di spostamento. In questo caso, la mancata esecuzione delle operazioni di spostamento è in genere, se la copia è costosa, un'opportunità di ottimizzazione mancante.

## <a name="see-also"></a>Vedi anche

[Costruttori di copia e operatori di assegnazione di copia](../cpp/copy-constructors-and-copy-assignment-operators-cpp.md)</br>
[Costruttori di spostamento e operatori di assegnazione di spostamento](../cpp/move-constructors-and-move-assignment-operators-cpp.md)
