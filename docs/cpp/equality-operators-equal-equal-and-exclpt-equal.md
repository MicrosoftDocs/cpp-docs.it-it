---
title: 'Operatori di uguaglianza: == e !='
description: La sintassi e l'utilizzo dell'operatore C++ standard e non-equal-to del linguaggio C++.
ms.date: 07/23/2020
f1_keywords:
- '!='
- ==
- not_eq_cpp
helpviewer_keywords:
- '!= operator'
- equality operator
- not equal to comparison operator
- equality operator [C++], syntax
- == operator
- not_eq operator
- equal to operator
ms.assetid: ba4e9659-2392-4fb4-be5a-910a2a6df45a
ms.openlocfilehash: 567b83e99dce0354626f08a4788f1343314493b1
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87227543"
---
# <a name="equality-operators--and-"></a>Operatori di uguaglianza: == e !=

## <a name="syntax"></a>Sintassi

> *espressione* **`==`** *espressione*\
> *espressione* **`!=`** *espressione*

## <a name="remarks"></a>Osservazioni

Gli operatori di uguaglianza binari confrontano i propri operandi per verificare identità o disuguaglianza.

Gli operatori di uguaglianza, uguali a ( **`==`** ) e non uguali a ( **`!=`** ), hanno precedenza più bassa rispetto agli operatori relazionali, ma si comportano in modo analogo. Il tipo di risultato per questi operatori è **`bool`** .

L'operatore di uguaglianza ( **`==`** ) restituisce **`true`** se entrambi gli operandi hanno lo stesso valore; in caso contrario, restituisce **`false`** . L'operatore not-equal-to ( **`!=`** ) restituisce **`true`** se gli operandi non hanno lo stesso valore; in caso contrario, restituisce **`false`** .

## <a name="operator-keyword-for-"></a>Parola chiave operator per! =

C++ specifica **`not_eq`** come ortografia alternativa per **`!=`** . Non esiste alcuna ortografia alternativa per **`==`** . In C, l'ortografia alternativa viene fornita come una macro nell' \<iso646.h> intestazione. In C++, l'ortografia alternativa è una parola chiave. l'utilizzo di \<iso646.h> o dell'equivalente C++ \<ciso646> è deprecato. In Microsoft C++, l' [`/permissive-`](../build/reference/permissive-standards-conformance.md) [`/Za`](../build/reference/za-ze-disable-language-extensions.md) opzione del compilatore o è necessaria per abilitare l'ortografia alternativa.

## <a name="example"></a>Esempio

```cpp
// expre_Equality_Operators.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;

int main() {
   cout  << boolalpha
         << "The true expression 3 != 2 yields: "
         << (3 != 2) << endl
         << "The false expression 20 == 10 yields: "
         << (20 == 10) << endl;
}
```

Gli operatori di uguaglianza possono confrontare i puntatori ai membri dello stesso tipo. In questo confronto vengono eseguite le conversioni da puntatore a membro. I puntatori ai membri possono essere confrontati a un'espressione costante che restituisce 0.

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)<br/>
[Operatori predefiniti C++, precedenza; e associatività](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori relazionali e operatori di uguaglianza C](../c-language/c-relational-and-equality-operators.md)
