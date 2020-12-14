---
description: 'Ulteriori informazioni su: operatori relazionali: &lt; , &gt; , &lt; = e &gt;='
title: 'Operatori relazionali: &lt; , &gt; , &lt; = e &gt;='
ms.date: 11/04/2016
f1_keywords:
- <
- '>'
helpviewer_keywords:
- '> operator'
- less than operator
- relational operators [C++], syntax
- '>= operator'
- greater than or equal to operators [C++]
- greater than operators [C++]
- < operator
- less than or equal to operator
- <= operator
ms.assetid: d346b53d-f14d-4962-984f-89d39a17ca0f
ms.openlocfilehash: dee784c5d93610b27a01ba4ecc36638b84a66885
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97252415"
---
# <a name="relational-operators-lt-gt-lt-and-gt"></a>Operatori relazionali: &lt; , &gt; , &lt; = e &gt;=

## <a name="syntax"></a>Sintassi

```
expression < expression
expression > expression
expression <= expression
expression >= expression
```

## <a name="remarks"></a>Osservazioni

Gli operatori relazionali binari determinano le relazioni seguenti:

- Minore di ( **\<** )

- Maggiore di ( **>** )

- Minore o uguale a ( **\<=** )

- Maggiore o uguale a ( **>=** )

Gli operatori relazionali hanno un'associatività da sinistra a destra. Entrambi gli operandi degli operatori relazionali devono essere di tipo aritmetico o di tipo puntatore. Producono valori di tipo **`bool`** . Il valore restituito è **`false`** (0) se la relazione nell'espressione è false; in caso contrario, il valore restituito è **`true`** (1).

## <a name="example"></a>Esempio

```cpp
// expre_Relational_Operators.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;

int main() {
   cout  << "The true expression 3 > 2 yields: "
         << (3 > 2) << endl
         << "The false expression 20 < 10 yields: "
         << (20 < 10) << endl;
}
```

Le espressioni nell'esempio precedente devono essere racchiuse tra parentesi perché l'operatore di inserimento del flusso ( **<<** ) ha precedenza maggiore rispetto agli operatori relazionali. Di conseguenza, la prima espressione senza le parentesi verrebbe valutata come:

```cpp
(cout << "The true expression 3 > 2 yields: " << 3) < (2 << "\n");
```

Le conversioni aritmetiche consuete analizzate in [conversioni standard](standard-conversions.md) vengono applicate agli operandi di tipi aritmetici.

## <a name="comparing-pointers"></a>Confronto tra puntatori

Quando vengono confrontati due puntatori a oggetti dello stesso tipo, il risultato è determinato dalla posizione degli oggetti puntati nello spazio degli indirizzi del programma. I puntatori possono anche essere confrontati con un'espressione costante che restituisce 0 o a un puntatore di tipo `void *` . Se viene eseguito un confronto tra un puntatore e un puntatore di tipo `void *` , l'altro puntatore viene convertito in modo implicito nel tipo `void *` . A questo punto, viene eseguito il confronto.

Non è possibile eseguire il confronto di due puntatori di tipo diverso, tranne nei seguenti casi:

- Un tipo è un tipo di classe derivato dall'altro tipo.

- Almeno uno dei puntatori viene convertito in modo esplicito (cast) nel tipo `void *` . (L'altro puntatore viene convertito in modo implicito nel tipo `void *` per la conversione).

Due puntatori dello stesso tipo che puntano allo stesso oggetto risultano sicuramente uguali. Se due puntatori a membri non statici di un oggetto vengono confrontati, è necessario rispettare le seguenti regole:

- Se il tipo di classe non è un oggetto **`union`** e se i due membri non sono separati da un *identificatore di accesso*, ad esempio **`public`** , **`protected`** o **`private`** , il puntatore al membro dichiarato per ultimo confronterà un valore maggiore del puntatore al membro dichiarato in precedenza.

- Se i due membri sono separati da un *identificatore di accesso*, i risultati non sono definiti.

- Se il tipo di classe è **`union`** , puntatori a membri dati diversi in che risultano **`union`** uguali.

Se due puntatori puntano a elementi della stessa matrice o all'elemento uno oltre la fine della matrice, il puntatore all'oggetto con indice maggiore risulta maggiore. Il confronto tra puntatori è sicuramente valido solo quando i puntatori fanno riferimento a oggetti nella stessa matrice o alla posizione uno oltre la fine della matrice.

## <a name="see-also"></a>Vedi anche

[Espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)<br/>
[Operatori C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori relazionali e di uguaglianza C](../c-language/c-relational-and-equality-operators.md)
