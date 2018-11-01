---
title: 'Operatore AND bit per bit: &amp;'
ms.date: 11/04/2016
f1_keywords:
- bitand
helpviewer_keywords:
- AND operator
- bitwise operators [C++], AND operator
- '& operator [C++], bitwise operators'
ms.assetid: 76f40de3-c417-47b9-8a77-532f3fc990a5
ms.openlocfilehash: b7d0d73802a5af7ab71e980d73eaff5c5b3c4bb8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50575357"
---
# <a name="bitwise-and-operator-amp"></a>Operatore AND bit per bit: &amp;

## <a name="syntax"></a>Sintassi

```
expression & expression
```

## <a name="remarks"></a>Note

Le espressioni possono essere altre espressioni And o (in base alle restrizioni dei tipi menzionate di seguito) espressioni di uguaglianza, espressioni relazionali, espressioni additive, espressioni moltiplicative, espressioni puntatore a membro, espressioni cast, espressioni unarie, espressioni di suffisso o espressioni primarie.

L'operatore AND bit per bit (**&**) confronta ogni bit del primo operando con il bit corrispondente del secondo operando. Se entrambi i bit sono 1, il bit del risultato corrispondente viene impostato su 1. In caso contrario, il bit di risultato corrispondente viene impostato su 0.

Entrambi gli operandi all'operatore AND bit per bit devono essere tipi integrali. Le conversioni aritmetiche consuete analizzate [conversioni Standard](standard-conversions.md), vengono applicate agli operandi.

## <a name="operator-keyword-for-"></a>Parola chiave operator per &

Il **bitand** operatore è l'equivalente testuale di **&**. Esistono due modi per accedere la **bitand** operatore nei programmi: includere il file di intestazione `iso646.h`, o eseguire la compilazione con il [/Za](../build/reference/za-ze-disable-language-extensions.md) l'opzione del compilatore (Disabilita estensioni linguaggio).

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