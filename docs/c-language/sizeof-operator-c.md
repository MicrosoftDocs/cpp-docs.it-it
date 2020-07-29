---
title: Operatore sizeof (C)
ms.date: 11/04/2016
f1_keywords:
- sizeof
helpviewer_keywords:
- sizeof operator
ms.assetid: 70826d03-3451-41e4-bebb-a820ae66d53f
ms.openlocfilehash: 1d06fc8b541cbce3771a485c8f71953be8f7d552
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87229519"
---
# <a name="sizeof-operator-c"></a>Operatore sizeof (C)

L' **`sizeof`** operatore indica la quantità di spazio di archiviazione, in byte, necessaria per archiviare un oggetto del tipo dell'operando. Tale operatore consente di evitare di specificare le dimensioni dei dati dipendenti dal computer nei programmi.

## <a name="syntax"></a>Sintassi

```
sizeof unary-expression
sizeof ( type-name )
```

## <a name="remarks"></a>Osservazioni

L'operando è un identificatore che rappresenta un elemento *unary-expression* o un'espressione cast di tipo, ovvero un identificatore di tipo racchiuso tra parentesi. L'elemento *unary-expression* non può rappresentare un oggetto del campo di bit, un tipo incompleto o un indicatore di funzione. Il risultato è una costante integrale senza segno. Nell'intestazione standard STDDEF.H questo tipo viene definito come **size_t**.

Quando si applica l' **`sizeof`** operatore a un identificatore di matrice, il risultato è la dimensione dell'intera matrice anziché la dimensione del puntatore rappresentato dall'identificatore di matrice.

Quando si applica l' **`sizeof`** operatore a un nome di tipo di struttura o di Unione o a un identificatore di tipo di struttura o di Unione, il risultato è il numero di byte nella struttura o nell'Unione, inclusa la spaziatura interna e finale. Questa dimensione può includere la spaziatura interna e finale utilizzate per allineare i membri della struttura o dell'unione ai limiti della memoria. Pertanto, il risultato potrebbe non corrispondere alla dimensione calcolata aggiungendo i requisiti di archiviazione dei singoli membri.

Se una matrice non dimensionata è l'ultimo elemento di una struttura, l' **`sizeof`** operatore restituisce le dimensioni della struttura senza la matrice.

```
buffer = calloc(100, sizeof (int) );
```

In questo esempio viene utilizzato l' **`sizeof`** operatore per passare la dimensione di un **`int`** , che varia tra i computer, come argomento di una funzione di runtime denominata `calloc` . Il valore restituito dalla funzione viene archiviato in `buffer`.

```
static char *strings[] = {
      "this is string one",
      "this is string two",
      "this is string three",
   };
const int string_no = ( sizeof strings ) / ( sizeof strings[0] );
```

In questo esempio, `strings` è una matrice di puntatori a **`char`** . Il numero dei puntatori è il numero di elementi nella matrice, ma non è specificato. È facile determinare il numero di puntatori utilizzando l' **`sizeof`** operatore per calcolare il numero di elementi nella matrice. Il **`const`** valore integer `string_no` viene inizializzato su questo numero. Poiché è un **`const`** valore, `string_no` non può essere modificato.

## <a name="see-also"></a>Vedere anche

[Operatori C](c-operators.md)<br/>
[Operatori C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
