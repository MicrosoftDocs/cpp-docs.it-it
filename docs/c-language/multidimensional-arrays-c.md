---
title: Matrici multidimensionali (C) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- arrays [C], multidimensional
- multidimensional arrays
- subscript expressions
ms.assetid: 4ba5c360-1f17-4575-b370-45f62e1f2bc2
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7b3b067db3812fbe7e5db1d367635eedc5362527
ms.sourcegitcommit: 9239c52c05e5cd19b6a72005372179587a47a8e4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2018
---
# <a name="multidimensional-arrays-c"></a>Matrici multidimensionali (C)
Un'espressione di indice può inoltre avere più indici, come nel modo seguente:  
  
```  
  
expression1  
[  
expression2  
] [  
expression3  
]...  
```  
  
 Le espressioni di indice sono associate da sinistra a destra. L'espressione di indice più a sinistra, * expression1***[***expression2 ***]**, viene valutato per primo. L'indirizzo risultante dall'aggiunta di *expression1* ed *expression2* forma un'espressione puntatore; quindi *expression3* viene aggiunta a quest'espressione puntatore per formare una nuova espressione puntatore e così via finché non è stata aggiunta l'ultima espressione di indice. L'operatore di riferimento indiretto (**\***) viene applicato dopo la valutazione dell'ultima espressione di indice, a meno che il valore del puntatore finale non indirizzi un tipo di matrice (vedere gli esempi riportati di seguito).  
  
 Le espressioni con più indici fanno riferimento agli elementi di "matrici multidimensionali". Una matrice multidimensionale è una matrice i cui elementi sono matrici. Ad esempio, il primo elemento di una matrice tridimensionale è una matrice con due dimensioni.  
  
## <a name="examples"></a>Esempi  
 Per gli esempi seguenti, una matrice denominata `prop` viene dichiarata con tre elementi, ognuno dei quali rappresenta una matrice 4x6 di valori `int`.  
  
```  
int prop[3][4][6];  
int i, *ip, (*ipp)[6];  
```  
  
 Un riferimento alla matrice `prop` è analogo al seguente:  
  
```  
i = prop[0][0][1];  
```  
  
 Nell'esempio su riportato viene mostrato come fare riferimento al secondo elemento `int` singolo di `prop`. Le matrici sono archiviate per riga, pertanto l'ultimo indice varia più rapidamente; l'espressione `prop[0][0][2]` fa riferimento al successivo (terzo) elemento della matrice e così via.  
  
```  
i = prop[2][1][3];  
```  
  
 Questa istruzione è un riferimento più complesso a un singolo elemento di `prop`. L'espressione viene valutata nel modo seguente:  
  
1.  Il primo indice, `2`, viene moltiplicato per la dimensione di una matrice `int` 4x6 e viene aggiunto al valore del puntatore `prop`. I risultato punta alla terza matrice 4x6 di `prop`.  
  
2.  Il secondo indice, `1`, viene moltiplicato per la dimensione della matrice `int` a 6 elementi e viene aggiunto all'indirizzo rappresentato da `prop[2]`.  
  
3.  Ogni elemento della matrice a 6 elementi è un valore `int`, pertanto l'indice finale, `3`, viene moltiplicato per la dimensione di `int` prima di essere aggiunto a `prop[2][1]`. Il puntatore risultante indirizza il quarto elemento della matrice a 6 elementi.  
  
4.  L'operatore di riferimento indiretto è stato applicato al valore del puntatore. Il risultato è l'elemento `int` a tale indirizzo.  
  
 Queste due esempi successivi mostrano casi in cui l'operatore di riferimento indiretto non viene applicato.  
  
```  
ip = prop[2][1];  
  
ipp = prop[2];  
```  
  
 Nella prima di queste istruzioni, l'espressione `prop[2][1]` è un riferimento valido alla matrice tridimensionale `prop`; fa riferimento a una matrice a 6 elementi (dichiarata in precedenza). Poiché il valore del puntatore indirizza una matrice, l'operatore di riferimento indiretto non viene applicato.  
  
 Analogamente, il risultato dell'espressione `prop[2]` nella seconda istruzione `ipp = prop[2];` è un valore del puntatore che indirizza una matrice bidimensionale.  
  
## <a name="see-also"></a>Vedere anche  
 [Operatore di indice inferiore:](../cpp/subscript-operator.md)