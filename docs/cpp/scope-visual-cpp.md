---
title: Ambito (C++) | Documenti Microsoft
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
ms.openlocfilehash: e79ae7f861553ce2bcd7bee6cbb14a3c2965d4ce
ms.sourcegitcommit: d06966efce25c0e66286c8047726ffe743ea6be0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/19/2018
ms.locfileid: "36261086"
---
# <a name="scope-c"></a>Ambito (C++)

Quando si dichiara un elemento del programma, ad esempio una classe, funzione o variabile, il nome può solo essere "visualizzato" e usato in determinate parti del programma. Viene chiamato il contesto in cui è visibile un nome relativo *ambito*. Ad esempio, se si dichiara una variabile `x` all'interno di una funzione, `x` è disponibile solo all'interno di tale corpo della funzione. Ha *ambito locale*. È possibile altre variabili con lo stesso nome nel programma; fino a quando sono in diversi ambiti, essi non violino una regola di definizione e viene generato alcun errore.

Per le variabili statiche automatiche, ambito determina anche quando vengono creati e distrutti in memoria programma. 

Esistono sei tipi di ambito:

- **Ambito globale** un nome globale è una variabile dichiarata all'esterno di qualsiasi classe, funzione o lo spazio dei nomi. In C++, tuttavia, anche questi nomi presenti con uno spazio dei nomi globale implicito. L'ambito dei nomi globali compreso tra il punto di dichiarazione e la fine del file in cui sono dichiarati. Per i nomi globali, la visibilità è disciplinata anche in base alle regole [collegamento](program-and-linkage-cpp.md) che determinano se il nome è visibile in altri file del programma.

- **Ambito Namespace** un nome dichiarato all'interno di un [dello spazio dei nomi](namespaces-cpp.md), di fuori di qualsiasi definizione di classe o enum o blocco di funzioni, è visibile dal momento della dichiarazione alla fine dello spazio dei nomi. Uno spazio dei nomi può essere definita in più blocchi in file diversi.

- **Ambito locale** un nome dichiarato all'interno di una funzione o una funzione lambda, inclusi i nomi di parametro, hanno ambito locale. Questi sono spesso detto "variabili locali". Sono visibili solo dal relativo punto di dichiarazione alla fine del corpo della funzione o l'espressione lambda. Ambito locale è un tipo di ambito del blocco, come illustrato più avanti in questo articolo.

- **Ambito di classe** nomi dei membri della classe hanno ambito di classe, che estende in tutta la definizione della classe indipendentemente dal punto di dichiarazione. Accessibilità del membro classe è controllato dall'ulteriore il **pubblico**, **privato**, e **protetto** parole chiave. Membri pubblici o protetti sono accessibili solo tramite gli operatori di selezione dei membri (**.** o **->**) o gli operatori puntatore a membro (**.\***  oppure **-> \***).

- **Ambito dell'istruzione** i nomi dichiarati un **per**, **se**, **mentre**, o **passare** istruzione sono visibili fino alla fine del blocco di istruzioni.

- **Ambito funzione** A [etichetta](labeled-statements.md) ha l'ambito della funzione, ovvero è visibile in tutto il corpo di una funzione anche prima che il punto di dichiarazione. Ambito della funzione consente di scrivere istruzioni come `goto cleanup` prima di `cleanup` l'etichetta viene dichiarata.

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

 È possibile nascondere i nomi della classe mediante la dichiarazione di una funzione, un oggetto o una variabile o un enumeratore nello stesso ambito. Tuttavia, il nome della classe può comunque accedere quando è preceduto dalla parola chiave **classe**.

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
> Qualsiasi inserisca il nome della classe (`Account`) viene chiamato per, la parola chiave class deve essere utilizzata per distinguerlo dall'Account di variabili con ambito globale. Questa regola non viene applicata quando il nome della classe si trova a sinistra dell'operatore di risoluzione dell'ambito (::). I nomi a sinistra dell'operatore di risoluzione dell'ambito vengono sempre considerati nomi classe.

 Nell'esempio riportato di seguito viene illustrato come dichiarare un puntatore a un oggetto di tipo `Account` utilizzando il **classe** (parola chiave):

```cpp
class Account *Checking = new class Account( Account );
```

 Il `Account` nell'inizializzatore (tra parentesi) nell'istruzione precedente ha ambito globale, è di tipo **doppie**.

> [!NOTE]
> Il riutilizzo dei nomi degli identificatori come illustrato in questo esempio viene considerato uno stile di programmazione di qualità insufficiente.

 Per ulteriori informazioni sui puntatori, vedere [tipi derivati](http://msdn.microsoft.com/en-us/aa14183c-02fe-4d81-95fe-beddb0c01c7c). Per informazioni sulla dichiarazione e inizializzazione di oggetti di classe, vedere [classi, strutture e unioni](../cpp/classes-and-structs-cpp.md). Per informazioni sull'utilizzo di **nuova** e **eliminare** operatori free-store, vedere [nuovo ed eliminare operatori](new-and-delete-operators.md).

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