---
title: 'Operatori di uguaglianza: == e !='
ms.date: 11/04/2016
f1_keywords:
- '!='
- ==
helpviewer_keywords:
- '!= operator'
- equality operator
- not equal to comparison operator
- equality operator [C++], syntax
- == operator
- not_eq operator
- equal to operator
ms.assetid: ba4e9659-2392-4fb4-be5a-910a2a6df45a
ms.openlocfilehash: 7e42b66438579bc9be6274863366762b8b4ffbe9
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79444406"
---
# <a name="equality-operators--and-"></a>Operatori di uguaglianza: == e !=

## <a name="syntax"></a>Sintassi

```
expression == expression
expression != expression
```

## <a name="remarks"></a>Osservazioni

Gli operatori di uguaglianza binari confrontano i propri operandi per verificare identità o disuguaglianza.

Gli operatori di uguaglianza, uguale a (`==`) e non uguale a (`!=`), hanno precedenza inferiore rispetto agli operatori relazionali, ma si comportano in modo analogo. Il tipo di risultato per questi operatori è **bool**.

L'operatore di uguaglianza (`==`) restituisce **true** (1) se entrambi gli operandi hanno lo stesso valore. in caso contrario, restituisce **false** (0). L'operatore not-equal-to (`!=`) restituisce **true** se gli operandi non hanno lo stesso valore. in caso contrario, restituisce **false**.

## <a name="operator-keyword-for-"></a>Parola chiave operator per !=

L'operatore `not_eq` è il testo equivalente di `!=`. Esistono due modi per accedere all'operatore `not_eq` nei programmi: includere il file di intestazione `iso646.h`o compilare con l'opzione del compilatore [/za](../build/reference/za-ze-disable-language-extensions.md) (Disable Language Extensions).

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
[Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori relazionali e operatori di uguaglianza C](../c-language/c-relational-and-equality-operators.md)