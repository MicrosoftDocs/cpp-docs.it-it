---
title: 'Operatore AND logico: &amp; &amp; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- '&&'
dev_langs:
- C++
helpviewer_keywords:
- logical AND operator
- AND operator
- '&& operator'
ms.assetid: 50cfa664-a8c4-4b31-9bab-2f80d7cd2d1f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: af091c30bddcac2a283a9040e38a62ae53c30601
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46117660"
---
# <a name="logical-and-operator-ampamp"></a>Operatore AND logico: &amp;&amp;

## <a name="syntax"></a>Sintassi

```
expression && expression
```

## <a name="remarks"></a>Note

L'operatore AND logico (**&&**) restituisce il valore booleano TRUE se entrambi gli operandi sono TRUE e FALSE in caso contrario. Gli operandi verranno convertiti in modo implicito nel tipo **bool** prima della valutazione e il risultato è di tipo **bool**. L'operatore logico AND presenta un'associatività da sinistra verso destra.

Gli operandi dell'operatore logico AND non devono essere dello stesso tipo, ma devono essere di tipo integrale o puntatore. Gli operandi sono in genere espressioni di uguaglianza o relazionali.

Il primo operando viene valutato completamente e tutti gli effetti collaterali vengono completati prima di continuare la valutazione dell'espressione logica AND.

Il secondo operando viene valutato solo se il primo operando restituisce true (ossia non un valore zero). Questa valutazione elimina la necessità di valutare il secondo operando quando l'espressione logica AND restituisce false. È possibile utilizzare questa valutazione di corto circuito per impedire la deferenziazione del puntatore NULL, come illustrato nell'esempio seguente:

```cpp
char *pch = 0;
...
(pch) && (*pch = 'a');
```

Se `pch` è null (0), il lato destro dell'espressione non viene mai valutato. Di conseguenza, l'assegnazione mediante un puntatore null non è possibile.

## <a name="operator-keyword-for-"></a>Parola chiave operator per &&

Il **e** operatore è l'equivalente testuale di **&&**. Esistono due modi per accedere la **e** operatore nei programmi: includere il file di intestazione `iso646.h`, o eseguire la compilazione con il [/Za](../build/reference/za-ze-disable-language-extensions.md) l'opzione del compilatore (Disabilita estensioni linguaggio).

## <a name="example"></a>Esempio

```cpp
// expre_Logical_AND_Operator.cpp
// compile with: /EHsc
// Demonstrate logical AND
#include <iostream>

using namespace std;

int main() {
   int a = 5, b = 10, c = 15;
   cout  << boolalpha
         << "The true expression "
         << "a < b && b < c yields "
         << (a < b && b < c) << endl
         << "The false expression "
         << "a > b && b < c yields "
         << (a > b && b < c) << endl;
}
```

## <a name="see-also"></a>Vedere anche

[Operatori predefiniti C++ la precedenza e associatività degli operatori](cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori logici C](../c-language/c-logical-operators.md)