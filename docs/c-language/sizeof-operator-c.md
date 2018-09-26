---
title: Operatore sizeof (C) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- sizeof
dev_langs:
- C++
helpviewer_keywords:
- sizeof operator
ms.assetid: 70826d03-3451-41e4-bebb-a820ae66d53f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fa3c959e4a839521dddc78d97fbf77db2e1c4b99
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46080662"
---
# <a name="sizeof-operator-c"></a>Operatore sizeof (C)

L'operatore `sizeof` indica la quantità di spazio di archiviazione in byte necessaria per archiviare un oggetto del tipo dell'operando. Tale operatore consente di evitare di specificare le dimensioni dei dati dipendenti dal computer nei programmi.

## <a name="syntax"></a>Sintassi

```
sizeof unary-expression
sizeof ( type-name )
```

## <a name="remarks"></a>Note

L'operando è un identificatore che rappresenta un elemento *unary-expression* o un'espressione cast di tipo, ovvero un identificatore di tipo racchiuso tra parentesi. L'elemento *unary-expression* non può rappresentare un oggetto del campo di bit, un tipo incompleto o un indicatore di funzione. Il risultato è una costante integrale senza segno. Nell'intestazione standard STDDEF.H questo tipo viene definito come **size_t**.

Quando si applica l'operatore `sizeof` a un identificatore di matrice, il risultato è la dimensione dell'intera matrice anziché la dimensione del puntatore rappresentato dall'identificatore di matrice.

Quando si applica l'operatore `sizeof` al nome di un tipo di struttura o di unione o a un identificatore del tipo di struttura o di unione, il risultato è il numero di byte nella struttura o nell'unione, incluse la spaziatura interna e finale. Questa dimensione può includere la spaziatura interna e finale utilizzate per allineare i membri della struttura o dell'unione ai limiti della memoria. Pertanto, il risultato potrebbe non corrispondere alla dimensione calcolata aggiungendo i requisiti di archiviazione dei singoli membri.

Se una matrice non dimensionata è l'ultimo elemento di una struttura, l'operatore `sizeof` restituisce le dimensioni della struttura senza la matrice.

```
buffer = calloc(100, sizeof (int) );
```

In questo esempio viene utilizzato l'operatore `sizeof` per passare la dimensione a un `int`, che varia a seconda del computer, come argomento di una funzione di runtime `calloc`. Il valore restituito dalla funzione viene archiviato in `buffer`.

```
static char *strings[] = {
      "this is string one",
      "this is string two",
      "this is string three",
   };
const int string_no = ( sizeof strings ) / ( sizeof strings[0] );
```

In questo esempio, `strings` è una matrice di puntatori a `char`. Il numero dei puntatori è il numero di elementi nella matrice, ma non è specificato. Il numero dei puntatori può essere facilmente determinato utilizzando l'operatore `sizeof` per calcolare il numero di elementi nella matrice. Il valore **const** Integer `string_no` viene inizializzato su questo numero. Poiché si tratta di un valore **const**, `string_no` non può essere modificato.

## <a name="see-also"></a>Vedere anche

[Operatori C](c-operators.md)<br/>
[Operatori C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
