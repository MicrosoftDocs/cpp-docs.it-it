---
title: 'Operatore condizionale: &quest;:'
ms.date: 11/04/2016
f1_keywords:
- '?:'
- '?'
helpviewer_keywords:
- conditional operators [C++]
- '? : operator'
ms.assetid: 88643ee8-7100-4f86-880a-705ec22b6271
ms.openlocfilehash: 0a66b82682f90345518a2d520945e3aff1f78f89
ms.sourcegitcommit: 170f5de63b0fec8e38c252b6afdc08343f4243a6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/11/2019
ms.locfileid: "72276814"
---
# <a name="conditional-operator-quest-"></a>Operatore condizionale: &quest;:

## <a name="syntax"></a>Sintassi

```
expression ? expression : expression
```

## <a name="remarks"></a>Note

L'operatore condizionale ( **?:** ) è un operatore ternario (accetta tre operandi). L'operatore condizionale funziona nel modo seguente:

- Il primo operando viene convertito in modo implicito in **bool**. Viene valutato e tutti gli effetti collaterali vengono completati prima di continuare.

- Se il primo operando restituisce **true** (1), viene valutato il secondo operando.

- Se il primo operando restituisce **false** (0), il terzo operando viene valutato.

Il risultato dell'operatore condizionale è il risultato di qualunque operando venga valutato: il secondo o il terzo. Solo uno degli ultimi due operandi viene valutato in un'espressione condizionale.

Le espressioni condizionali presentano un'associatività da destra a sinistra. Il primo operando deve essere di tipo integrale o puntatore. Le regole seguenti si applicano al secondo e terzo operando:

- Se entrambi gli operandi sono dello stesso tipo, il risultato è di quel tipo.

- Se entrambi gli operandi sono di tipo aritmetico o di enumerazione, vengono eseguite le conversioni aritmetiche consuete (descritte in [conversioni standard](standard-conversions.md)) per convertirle in un tipo comune.

- Se entrambi gli operandi sono di tipo puntatore o se uno è un tipo puntatore e l'altro è un'espressione costante che restituisce 0, vengono eseguite le conversioni del puntatore per convertire tali operandi in un tipo comune.

- Se entrambi gli operandi sono di tipo riferimento, vengono eseguite le conversioni dei riferimenti per convertirli in un tipo comune.

- Se entrambi gli operandi sono di tipo void, il tipo comune è il tipo void.

- Se entrambi gli operandi sono dello stesso tipo definito dall'utente, il tipo comune è di quel tipo.

- Se gli operandi sono di tipi diversi e almeno un operando è di un tipo definito dall'utente, per determinare il tipo comune vengono usate le regole del linguaggio. Vedere l'avviso di seguito.

Tutte le combinazioni del secondo e del terzo operando che non si trovano nell'elenco precedente non sono valide. Il tipo del risultato è il tipo comune e si tratta di un l-value se sia il secondo che il terzo operando sono dello stesso tipo e sono entrambi l-value.

> [!WARNING]
>  Se i tipi del secondo e terzo operando non sono identici, vengono richiamate regole di conversione di tipo complesso, come specificato nello standard C++. Queste conversioni possono causare un comportamento imprevisto, ad esempio la costruzione e l'eliminazione di oggetti temporanei. Per questo motivo, è consigliabile (1) evitare di usare tipi definiti dall'utente come operandi con l'operatore condizionale oppure (2), se si usano tipi definiti dall'utente, eseguire il cast in modo esplicito di ogni operando a un tipo comune.

## <a name="example"></a>Esempio

```cpp
// expre_Expressions_with_the_Conditional_Operator.cpp
// compile with: /EHsc
// Demonstrate conditional operator
#include <iostream>
using namespace std;
int main() {
   int i = 1, j = 2;
   cout << ( i > j ? i : j ) << " is greater." << endl;
}
```

## <a name="see-also"></a>Vedere anche

[Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatore di espressione condizionale](../c-language/conditional-expression-operator.md)