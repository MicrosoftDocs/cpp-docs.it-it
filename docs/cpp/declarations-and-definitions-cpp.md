---
title: Dichiarazioni e definizioni (C++)
ms.date: 12/12/2019
ms.assetid: 678f1424-e12f-45e0-a957-8169e5fef6cb
ms.openlocfilehash: 688c1960e37fe74edecabebc4cb8090af9d0dd58
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228960"
---
# <a name="declarations-and-definitions-c"></a>Dichiarazioni e definizioni (C++)

Un programma C++ è costituito da varie entità, ad esempio variabili, funzioni, tipi e spazi dei nomi. Ognuna di queste entità deve essere *dichiarata* prima di poter essere utilizzata. Una dichiarazione specifica un nome univoco per l'entità, insieme alle informazioni sul tipo e su altre caratteristiche. In C++ il punto in cui viene dichiarato un nome è il punto in cui diventa visibile al compilatore. Non è possibile fare riferimento a una funzione o a una classe dichiarata in un secondo momento nell'unità di compilazione. Le variabili devono essere dichiarate il più vicino possibile prima del punto in cui vengono usate.

Nell'esempio seguente vengono illustrate alcune dichiarazioni:

```cpp
#include <string>

void f(); // forward declaration

int main()
{
    const double pi = 3.14; //OK
    int i = f(2); //OK. f is forward-declared
    std::string str; // OK std::string is declared in <string> header
    C obj; // error! C not yet declared.
    j = 0; // error! No type specified.
    auto k = 0; // OK. type inferred as int by compiler.
}

int f(int i)
{
    return i + 42;
}

namespace N {
   class C{/*...*/};
}
```

Alla riga 5, la `main` funzione è dichiarata. Alla riga 7, una **`const`** variabile denominata `pi` viene dichiarata e *inizializzata*. Alla riga 8, un numero intero `i` viene dichiarato e inizializzato con il valore prodotto dalla funzione `f` . Il nome `f` è visibile al compilatore a causa della *dichiarazione in avanti* nella riga 3.

Nella riga 9 `obj` viene dichiarata una variabile denominata di tipo `C` . Tuttavia, questa dichiarazione genera un errore perché non `C` è dichiarata fino a un momento successivo nel programma e non viene dichiarata in avanti. Per correggere l'errore, è possibile spostare l'intera *definizione* di `C` prima `main` o aggiungere una dichiarazione di tipo "Avanti". Questo comportamento è diverso da altri linguaggi, ad esempio C#, in cui le funzioni e le classi possono essere utilizzate prima del relativo punto di dichiarazione in un file di origine.

Nella riga 10 `str` viene dichiarata una variabile denominata di tipo `std::string` . Il nome `std::string` è visibile perché è stato introdotto nel `string` [file di intestazione](header-files-cpp.md) che viene unito al file di origine nella riga 1. `std`spazio dei nomi in cui `string` viene dichiarata la classe.

Nella riga 11, viene generato un errore perché il nome `j` non è stato dichiarato. Una dichiarazione deve fornire un tipo, a differenza di altri linguaggi, ad esempio javaScript. Nella riga 12 **`auto`** viene utilizzata la parola chiave, che indica al compilatore di dedurre il tipo di in `k` base al valore con cui viene inizializzato. Il compilatore in questo caso sceglie **`int`** il tipo.  

## <a name="declaration-scope"></a>Ambito della dichiarazione

Il nome introdotto da una dichiarazione è valido all'interno dell' *ambito* in cui si verifica la dichiarazione. Nell'esempio precedente, le variabili dichiarate all'interno della `main` funzione sono *variabili locali*. È possibile dichiarare un'altra variabile denominata `i` all'esterno di Main, in *ambito globale*, ed è un'entità completamente separata. Tuttavia, la duplicazione dei nomi può compromettere confusione ed errori del programmatore e deve essere evitata. Nella riga 21 la classe `C` viene dichiarata nell'ambito dello spazio dei nomi `N` . L'uso degli spazi dei nomi consente di evitare *conflitti di nomi*. La maggior parte dei nomi delle librerie standard C++ è dichiarata nello `std` spazio dei nomi. Per ulteriori informazioni sul modo in cui le regole di ambito interagiscono con le dichiarazioni, vedere [ambito](../cpp/scope-visual-cpp.md).

## <a name="definitions"></a>Definizioni

È necessario definire alcune entità, incluse le funzioni, le classi, le enumerazioni e le variabili costanti, oltre a essere dichiarate. Una *definizione* fornisce al compilatore tutte le informazioni necessarie per generare il codice del computer quando l'entità viene usata in un secondo momento nel programma. Nell'esempio precedente, la riga 3 contiene una dichiarazione per la funzione, `f` ma la *definizione* per la funzione viene fornita nelle righe da 15 a 18. Alla riga 21 la classe `C` è dichiarata e definita (anche se, come definito dalla classe, non esegue alcuna operazione). È necessario definire una variabile costante, in altre parole assegnata un valore, nella stessa istruzione in cui è dichiarata. Una dichiarazione di un tipo incorporato, ad esempio, **`int`** è automaticamente una definizione perché il compilatore riconosce la quantità di spazio da allocare.

Nell'esempio seguente vengono illustrate le dichiarazioni che sono anche definizioni:

```cpp
// Declare and define int variables i and j.
int i;
int j = 10;

// Declare enumeration suits.
enum suits { Spades = 1, Clubs, Hearts, Diamonds };

// Declare class CheckBox.
class CheckBox : public Control
{
public:
    Boolean IsChecked();
    virtual int     ChangeState() = 0;
};
```

Di seguito sono riportate alcune dichiarazioni che non sono definizioni:

```cpp
extern int i;
char *strchr( const char *Str, const char Target );
```

## <a name="typedefs-and-using-statements"></a>Typedef e istruzioni using

Nelle versioni precedenti di C++, la [`typedef`](aliases-and-typedefs-cpp.md) parola chiave viene usata per dichiarare un nuovo nome che è un *alias* per un altro nome. Ad esempio, il tipo `std::string` è un altro nome per `std::basic_string<char>` . Dovrebbe essere ovvio perché i programmatori usano il nome typedef e non il nome effettivo. Nel linguaggio C++ moderno, la [`using`](aliases-and-typedefs-cpp.md) parola chiave è preferibile rispetto a **`typedef`** , ma l'idea è la stessa: viene dichiarato un nuovo nome per un'entità che è già dichiarata e definita.

## <a name="static-class-members"></a>Membri di classi statiche

Poiché i membri dati della classe statica sono variabili discrete condivise da tutti gli oggetti della classe, è necessario che siano definiti e inizializzati all'esterno della definizione della classe. Per ulteriori informazioni, vedere [classi](../cpp/classes-and-structs-cpp.md).

## <a name="extern-declarations"></a>dichiarazioni extern

Un programma C++ potrebbe contenere più di un' [unità di compilazione](header-files-cpp.md). Per dichiarare un'entità definita in un'unità di compilazione separata, usare la [`extern`](extern-cpp.md) parola chiave. Le informazioni nella dichiarazione sono sufficienti per il compilatore, ma se non è possibile trovare la definizione dell'entità nel passaggio di collegamento, il linker genererà un errore.

## <a name="in-this-section"></a>Contenuto della sezione

[Classi di archiviazione](storage-classes-cpp.md)<br/>
[`const`](const-cpp.md)<br/>
[`constexpr`](constexpr-cpp.md)<br/>
[`extern`](extern-cpp.md)<br/>
[Inizializzatori](initializers.md)<br/>
[Alias e typedef](aliases-and-typedefs-cpp.md)<br/>
[`using`Dichiarazione](using-declaration.md)<br/>
[`volatile`](volatile-cpp.md)<br/>
[`decltype`](decltype-cpp.md)<br/>
[Attributi in C++](attributes.md)<br/>

## <a name="see-also"></a>Vedere anche

[Concetti di base](../cpp/basic-concepts-cpp.md)<br/>
