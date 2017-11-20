---
title: Matrici unidimensionali | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- brackets [ ]
- brackets [ ], arrays
- one-dimensional arrays
- arrays [C++], one-dimensional
- square brackets [ ]
- square brackets [ ], arrays
- subscript expressions
ms.assetid: e28536e5-3b77-46b5-97fd-9b938c771816
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: ea3d4c2461579fcafc4f9ff7ba5071572229c640
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="one-dimensional-arrays"></a>Matrici unidimensionali
Un'espressione di suffisso seguita da un'espressione tra parentesi quadre (**[ ]**) è una rappresentazione con indice di un elemento di un oggetto matrice. Un'espressione di indice rappresenta il valore all'indirizzo che si trova a un numero di posizioni corrispondente a *expression* oltre *postfix-expression*, se espressa come  
  
```  
  
postfix-expression  
[  
expression  
]  
  
```  
  
 In genere, il valore rappresentato da *postfix-expression* è un valore puntatore, quale un identificatore di matrice, ed *expression* è un valore integrale. Tuttavia, l'unica condizione da soddisfare dal punto di vista sintattico è che una delle espressioni sia di tipo puntatore e l'altra di tipo integrale. Pertanto, il valore integrale può trovarsi nella posizione *postfix-expression* e il valore puntatore può essere racchiuso tra parentesi quadre nella posizione di *expression*, ovvero dell'indice. Ad esempio, questo codice è valido:  
  
```  
// one_dimensional_arrays.c  
int sum, *ptr, a[10];  
int main() {  
   ptr = a;  
   sum = 4[ptr];  
}  
```  
  
 Le espressioni di indice sono in genere utilizzate per fare riferimento agli elementi di matrice, ma è possibile applicare un indice a un puntatore. Qualsiasi sia l'ordine di valori, *expression* deve essere racchiusa tra parentesi (**[ ]**).  
  
 L'espressione di indice viene valutata aggiungendo il valore integrale al valore puntatore e quindi applicando l'operatore di riferimento indiretto (**\***) al risultato. Per informazioni sull'operatore di riferimento indiretto, vedere [Operatori address-of e di riferimento indiretto](../c-language/indirection-and-address-of-operators.md). In effetti, per una matrice unidimensionale, le quattro espressioni seguenti sono equivalenti, supponendo che `a` è un puntatore e `b` è un Integer:  
  
```  
a[b]  
*(a + b)  
*(b + a)  
b[a]  
```  
  
 In base alle regole di conversione per l'operatore di addizione, descritte in [Operatori di addizione](../c-language/c-additive-operators.md), il valore integrale viene convertito in un offset di indirizzo moltiplicandolo per la lunghezza del tipo a cui il puntatore fa riferimento.  
  
 Ad esempio, si supponga che l'identificatore `line` faccia riferimento a una matrice di valori `int`. La procedura riportata di seguito viene utilizzata per valutare l'espressione di indice `line[ i ]`:  
  
1.  L'Integer `i` viene moltiplicato per il numero di byte definito come la lunghezza di un elemento `int`. Il valore convertito di `i` rappresenta le posizioni `i` `int`.  
  
2.  Questo valore convertito viene aggiunto al valore di puntatore originale (`line`) per produrre un indirizzo con un offset di `i` `int` posizioni da `line`.  
  
3.  L'operatore di riferimento indiretto viene applicato al nuovo indirizzo. Il risultato è il valore dell'elemento della matrice in tale posizione (intuitivamente, `line [ i ]`).  
  
 L'espressione di indice `line[0]` rappresenta il valore del primo elemento della riga, poiché l'offset dall'indirizzo rappresentato da `line` è 0. Analogamente, un'espressione come `line[5]` fa riferimento all'offset dell'elemento cinque posizioni dalla riga o al sesto elemento della matrice.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatore di indice inferiore:](../cpp/subscript-operator.md)