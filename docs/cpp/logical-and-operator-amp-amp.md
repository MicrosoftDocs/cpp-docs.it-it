---
title: Operatore AND logico:&amp;&amp;
description: Sintassi e uso della sintassi dell'operatore and logico del linguaggio standard C++.
ms.date: 07/23/2020
f1_keywords:
- '&&'
- and_cpp
helpviewer_keywords:
- logical AND operator
- AND operator
- '&& operator'
ms.assetid: 50cfa664-a8c4-4b31-9bab-2f80d7cd2d1f
ms.openlocfilehash: 431e76a2943c2373d6191f1fbe9f14c54cfaa6c1
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223694"
---
# <a name="logical-and-operator-ampamp"></a>Operatore AND logico:&amp;&amp;

## <a name="syntax"></a>Sintassi

> *espressione* **`&&`** *espressione*

## <a name="remarks"></a>Osservazioni

L'operatore AND logico ( **&&** ) restituisce **`true`** se entrambi gli operandi sono **`true`** e restituisce **`false`** in caso contrario. Gli operandi vengono convertiti in modo implicito nel tipo **`bool`** prima della valutazione e il risultato è di tipo **`bool`** . L'operatore logico AND presenta un'associatività da sinistra verso destra.

Gli operandi all'operatore logico AND non devono avere lo stesso tipo, ma devono avere un tipo booleano, integrale o puntatore. Gli operandi sono in genere espressioni di uguaglianza o relazionali.

Il primo operando viene valutato completamente e tutti gli effetti collaterali vengono completati prima di continuare la valutazione dell'espressione AND logica.

Il secondo operando viene valutato solo se il primo operando restituisce **`true`** (diverso da zero). Questa valutazione elimina la valutazione superflua del secondo operando quando l'espressione logica AND è **`false`** . È possibile utilizzare questa valutazione di corto circuito per impedire la deferenziazione del puntatore NULL, come illustrato nell'esempio seguente:

```cpp
char *pch = 0;
// ...
(pch) && (*pch = 'a');
```

Se `pch` è null (0), il lato destro dell'espressione non viene mai valutato. Questa valutazione a corto circuito rende impossibile l'assegnazione tramite un puntatore null.

## <a name="operator-keyword-for-"></a>Parola chiave operator per &&

C++ specifica **`and`** come ortografia alternativa per **`&&`** . In C, l'ortografia alternativa viene fornita come una macro nell' \<iso646.h> intestazione. In C++, l'ortografia alternativa è una parola chiave. l'utilizzo di \<iso646.h> o dell'equivalente C++ \<ciso646> è deprecato. In Microsoft C++, l' [`/permissive-`](../build/reference/permissive-standards-conformance.md) [`/Za`](../build/reference/za-ze-disable-language-extensions.md) opzione del compilatore o è necessaria per abilitare l'ortografia alternativa.

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

[Operatori, precedenza e associatività predefiniti di C++](cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori logici C](../c-language/c-logical-operators.md)
