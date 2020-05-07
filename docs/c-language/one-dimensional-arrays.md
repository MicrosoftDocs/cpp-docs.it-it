---
title: Matrici unidimensionali
ms.date: 11/04/2016
helpviewer_keywords:
- brackets [ ]
- brackets [ ], arrays
- one-dimensional arrays
- arrays [C++], one-dimensional
- square brackets [ ]
- square brackets [ ], arrays
- subscript expressions
ms.assetid: e28536e5-3b77-46b5-97fd-9b938c771816
ms.openlocfilehash: 7ac57a65d575ba6a9134f3c4474103735411847d
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75299104"
---
# <a name="one-dimensional-arrays"></a>Matrici unidimensionali

Un'espressione di suffisso seguita da un'espressione tra parentesi quadre (**[ ]**) è una rappresentazione con indice di un elemento di un oggetto matrice. Un'espressione di indice rappresenta il valore all'indirizzo che si trova a un numero di posizioni corrispondente a *expression* oltre *postfix-expression*, se espressa come

```
postfix-expression [ expression ]
```

In genere, il valore rappresentato da *postfix-expression* è un valore puntatore, quale un identificatore di matrice, ed *expression* è un valore integrale. Tuttavia, l'unica condizione da soddisfare dal punto di vista sintattico è che una delle espressioni sia di tipo puntatore e l'altra di tipo integrale. Pertanto, il valore integrale può trovarsi nella posizione *postfix-expression* e il valore puntatore può essere racchiuso tra parentesi quadre nella posizione di *expression*, ovvero dell'indice. Ad esempio, questo codice è valido:

```c
// one_dimensional_arrays.c
int sum, *ptr, a[10];
int main() {
   ptr = a;
   sum = 4[ptr];
}
```

Le espressioni di indice sono in genere utilizzate per fare riferimento agli elementi di matrice, ma è possibile applicare un indice a un puntatore. Qualsiasi sia l'ordine di valori, *expression* deve essere racchiusa tra parentesi (**[ ]**).

L'espressione di indice viene valutata aggiungendo il valore integrale al valore del puntatore, quindi applicando l'operatore di riferimento indiretto (<strong>\*</strong>) al risultato. Per una descrizione dell'operatore di riferimento indiretto [, vedere operatori di riferimento indiretto e address-of](../c-language/indirection-and-address-of-operators.md) . In effetti, per una matrice unidimensionale, le quattro espressioni seguenti sono equivalenti, supponendo `a` che sia un puntatore `b` ed è un numero intero:

```
a[b]
*(a + b)
*(b + a)
b[a]
```

In base alle regole di conversione per l'operatore di addizione, descritte in [Operatori di addizione](../c-language/c-additive-operators.md), il valore integrale viene convertito in un offset di indirizzo moltiplicandolo per la lunghezza del tipo a cui il puntatore fa riferimento.

Ad esempio, si supponga che l'identificatore `line` faccia riferimento a una matrice di valori `int`. La procedura riportata di seguito viene utilizzata per valutare l'espressione di indice `line[ i ]`:

1. L'Integer `i` viene moltiplicato per il numero di byte definito come la lunghezza di un elemento `int`. Il valore convertito di `i` rappresenta `i` `int` le posizioni.

1. Questo valore convertito viene aggiunto al valore del puntatore originale (`line`) per restituire un indirizzo che rappresenta le `i` `int` posizioni di `line`offset da.

1. L'operatore di riferimento indiretto viene applicato al nuovo indirizzo. Il risultato è il valore dell'elemento della matrice in tale posizione (intuitivamente, `line [ i ]`).

L'espressione di indice `line[0]` rappresenta il valore del primo elemento della riga, poiché l'offset dall'indirizzo rappresentato da `line` è 0. Analogamente, un'espressione come `line[5]` fa riferimento all'offset dell'elemento cinque posizioni dalla riga o al sesto elemento della matrice.

## <a name="see-also"></a>Vedere anche

[Operatore di indice inferiore:](../cpp/subscript-operator.md)
