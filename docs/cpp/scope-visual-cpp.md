---
title: Ambito (C++) | Microsoft Docs
ms.custom: ''
ms.date: 04/08/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- classes [C++], scope
- scope [C++]
- function prototypes [C++], scope
- class scope
- prototype scope
- functions [C++], scope
- scope, C++ names
ms.assetid: 81fecbb0-338b-4325-8332-49f33e716352
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 733d090073fe2ed08a0499ea205c2377b4bdb289
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43679697"
---
# <a name="scope-c"></a>Ambito (C++)

Quando si dichiara un elemento del programma, ad esempio una classe, funzione o variabile, il nome può solo essere "visto" e utilizzato in determinate parti del programma. Viene chiamato il contesto in cui è visibile un nome relativo *ambito*. Ad esempio, se si dichiara una variabile `x` all'interno di una funzione, `x` solo è visibile all'interno di tale corpo della funzione. Dispone *ambito locale*. È possibile altre variabili con lo stesso nome nel programma; fino a quando sono in ambiti diversi, non violino una regola di definizione e viene generato alcun errore.

Per variabili automatiche non statici, ambito determina anche quando vengono creati e distrutti in memoria programma. 

Sono disponibili sei tipi di ambito:

- **Ambito globale** un nome globale è una variabile dichiarata all'esterno di qualsiasi classe, funzione o lo spazio dei nomi. In C++, tuttavia, anche questi nomi esistono con uno spazio dei nomi globale implicito. L'ambito dei nomi globali si estende dal punto di dichiarazione alla fine del file in cui sono dichiarate. Per i nomi globali, la visibilità è regolata anche dalle regole di [collegamento](program-and-linkage-cpp.md) che determinano se il nome è visibile in altri file del programma.

- **Ambito Namespace** un nome dichiarato all'interno di un [dello spazio dei nomi](namespaces-cpp.md), di fuori di qualsiasi definizione di classe o un'enumerazione o blocco della funzione, è visibile dal suo punto di dichiarazione alla fine dello spazio dei nomi. Uno spazio dei nomi può essere definita in più blocchi in file diversi.

- **Ambito locale** un nome dichiarato all'interno di una funzione o espressione lambda, inclusi i nomi dei parametri, hanno ambito locale. Essi sono spesso detto "variabili locali". Sono visibili solo dal relativo punto di dichiarazione alla fine del corpo della funzione o espressione lambda. Ambito locale è un tipo di ambito del blocco, che è descritti più avanti in questo articolo.

- **Ambito di classe** i nomi dei membri della classe hanno un ambito di classe, che estende in tutta la definizione della classe indipendentemente dal punto di dichiarazione. Accessibilità del membro classe è controllato dall'ulteriore il **pubblici**, **privato**, e **protetti** parole chiave. I membri pubblici o protetti sono accessibili solo tramite gli operatori di selezione dei membri (**.** oppure **->**) o gli operatori puntatore a membro (**.** <strong>\*</strong> oppure **->** <strong>\*</strong>).

- **Ambito dell'istruzione** i nomi dichiarati un **per**, **se**, **mentre**, o **passare** istruzione sono visibili fino alla fine del blocco di istruzioni.

- **Ambito funzione** un' [etichetta](labeled-statements.md) ha l'ambito della funzione, ovvero è visibile in tutto il corpo di una funzione anche prima che il punto di dichiarazione. Ambito della funzione rende possibile la scrittura di istruzioni come `goto cleanup` prima di `cleanup` l'etichetta viene dichiarata.

## <a name="hiding-names"></a>Nascondere nomi

È possibile nascondere un nome dichiarandolo in un blocco chiuso. Nella figura seguente `i` viene ridichiarato nel blocco interno, quindi nascondendo la variabile associata a `i` nell'ambito blocco esterno.

 ![Blocco&#45;nascondere il nome di ambito](../cpp/media/vc38sf1.png "vc38SF1") ambito del blocco e nascondere nome

 L'output del programma illustrato nella figura è:

```cpp
i = 0
i = 7
j = 9
i = 0
```

> [!NOTE]
> L'argomento `szWhat` viene considerato nell'ambito della funzione. Di conseguenza, viene considerato come se fosse stato dichiarato nel blocco più esterno della funzione.

## <a name="hiding-class-names"></a>Nascondere nomi di classi

 È possibile nascondere i nomi della classe mediante la dichiarazione di una funzione, un oggetto o una variabile o un enumeratore nello stesso ambito. Tuttavia, il nome della classe è ancora accessibile quando è preceduto dalla parola chiave **classe**.

```cpp
// hiding_class_names.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

// Declare class Account at global scope.
class Account
{
public:
    Account( double InitialBalance )
        { balance = InitialBalance; }
    double GetBalance()
        { return balance; }
private:
    double balance;
};

double Account = 15.37;            // Hides class name Account

int main()
{
    class Account Checking( Account ); // Qualifies Account as 
                                       //  class name

    cout << "Opening account with balance of: "
         << Checking.GetBalance() << "\n";
}
//Output: Opening account with balance of: 15.37
```

> [!NOTE]
> In qualsiasi luogo il nome della classe (`Account`) viene chiamato per, la parola chiave class deve essere usata per distinguerlo dall'Account di variabili con ambito globale. Questa regola non viene applicata quando il nome della classe si trova a sinistra dell'operatore di risoluzione dell'ambito (::). I nomi a sinistra dell'operatore di risoluzione dell'ambito vengono sempre considerati nomi classe.

 Nell'esempio seguente viene illustrato come dichiarare un puntatore a un oggetto di tipo `Account` usando il **classe** (parola chiave):

```cpp
class Account *Checking = new class Account( Account );
```

 Il `Account` nell'inizializzatore (tra parentesi) nell'istruzione precedente ha ambito globale, è di tipo **doppie**.

> [!NOTE]
> Il riutilizzo dei nomi degli identificatori come illustrato in questo esempio viene considerato uno stile di programmazione di qualità insufficiente.

Per informazioni sulla dichiarazione e inizializzazione di oggetti di classe, vedere [classi, strutture e unioni](../cpp/classes-and-structs-cpp.md). Per informazioni sull'utilizzo il **nuove** e **eliminare** operatori free-store, vedere [nuova ed eliminare operatori](new-and-delete-operators.md).

## <a name="hiding-names-with-global-scope"></a>Nascondere nomi con ambito globale

 È possibile nascondere i nomi con ambito globale dichiarando in modo esplicito lo stesso nome nell'ambito del blocco. Tuttavia, i nomi di ambito globale è possibile accedere tramite l'operatore di risoluzione dell'ambito (`::`).

```cpp
#include <iostream>

int i = 7;   // i has global scope, outside all blocks
using namespace std;

int main( int argc, char *argv[] ) {
   int i = 5;   // i has block scope, hides i at global scope
   cout << "Block-scoped i has the value: " << i << "\n";
   cout << "Global-scoped i has the value: " << ::i << "\n";
}
```

```Output
Block-scoped i has the value: 5
Global-scoped i has the value: 7
```

## <a name="see-also"></a>Vedere anche
 [Concetti di base](../cpp/basic-concepts-cpp.md)