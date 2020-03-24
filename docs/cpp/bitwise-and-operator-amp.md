---
title: 'Operatore AND bit per bit: &amp;'
ms.date: 11/04/2016
helpviewer_keywords:
- AND operator
- bitwise operators [C++], AND operator
- '& operator [C++], bitwise operators'
ms.assetid: 76f40de3-c417-47b9-8a77-532f3fc990a5
ms.openlocfilehash: b5c99d19be3461b10a1126dea3a45d308c0fc558
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80181291"
---
# <a name="bitwise-and-operator-amp"></a>Operatore AND bit per bit: &amp;

## <a name="syntax"></a>Sintassi

```
expression & expression
```

## <a name="remarks"></a>Osservazioni

Le espressioni possono essere altre espressioni And o (in base alle restrizioni dei tipi menzionate di seguito) espressioni di uguaglianza, espressioni relazionali, espressioni additive, espressioni moltiplicative, espressioni puntatore a membro, espressioni cast, espressioni unarie, espressioni di suffisso o espressioni primarie.

L'operatore AND bit per bit ( **&** ) confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se entrambi i bit hanno valore 1, il bit del risultato verrà impostato su 1, altrimenti verrà impostato su 0.

Entrambi gli operandi all'operatore AND bit per bit devono essere tipi integrali. Le conversioni aritmetiche consuete analizzate in [conversioni standard](standard-conversions.md)vengono applicate agli operandi.

## <a name="operator-keyword-for-"></a>Parola chiave operator per &

L'operatore **BITAND** è il testo equivalente di **&** . Esistono due modi per accedere all'operatore **BITAND** nei programmi: includere il file di intestazione `iso646.h`o compilare con l'opzione del compilatore [/za](../build/reference/za-ze-disable-language-extensions.md) (Disable Language Extensions).

## <a name="example"></a>Esempio

```cpp
// expre_Bitwise_AND_Operator.cpp
// compile with: /EHsc
// Demonstrate bitwise AND
#include <iostream>
using namespace std;
int main() {
   unsigned short a = 0xFFFF;      // pattern 1111 ...
   unsigned short b = 0xAAAA;      // pattern 1010 ...

   cout  << hex << ( a & b ) << endl;   // prints "aaaa", pattern 1010 ...
}
```

## <a name="see-also"></a>Vedere anche

[Operatori predefiniti C++, precedenza e associazione](cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori bit per bit C](../c-language/c-bitwise-operators.md)
