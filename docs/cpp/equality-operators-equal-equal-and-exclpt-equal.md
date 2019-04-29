---
title: 'Operatori di uguaglianza: == e !='
ms.date: 11/04/2016
f1_keywords:
- not_eq
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
ms.openlocfilehash: d6248d4a31c478b62e5fbe304d9bde9b51b7cb06
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62392169"
---
# <a name="equality-operators--and-"></a>Operatori di uguaglianza: == e !=

## <a name="syntax"></a>Sintassi

```
expression == expression
expression != expression
```

## <a name="remarks"></a>Note

Gli operatori di uguaglianza binari confrontano i propri operandi per verificare identità o disuguaglianza.

Gli operatori di uguaglianza, uguale a (`==`) e non uguale a (`!=`), hanno precedenza inferiore rispetto agli operatori relazionali, ma si comportano in modo analogo. Il tipo di risultato per questi operatori **bool**.

L'operatore uguale a (`==`) restituisce **true** (1) se entrambi gli operandi hanno lo stesso valore; in caso contrario, restituisce **false** (0). L'operatore non uguale a (`!=`) restituisce **true** se gli operandi non è lo stesso valore; in caso contrario, restituisce **false**.

## <a name="operator-keyword-for-"></a>Parola chiave operator per !=

L'operatore `not_eq` è il testo equivalente di `!=`. Esistono due modi per accedere la `not_eq` operatore nei programmi: includere il file di intestazione `iso646.h`, o eseguire la compilazione con il [/Za](../build/reference/za-ze-disable-language-extensions.md) l'opzione del compilatore (Disabilita estensioni linguaggio).

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

Gli operatori di uguaglianza possono confrontare i puntatori ai membri dello stesso tipo. In tale confronto, vengono eseguite le conversioni puntatore a membro. I puntatori ai membri possono essere confrontati a un'espressione costante che restituisce 0.

## <a name="see-also"></a>Vedere anche

[Espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)<br/>
[Operatori predefiniti C++, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Operatori relazionali e operatori di uguaglianza C](../c-language/c-relational-and-equality-operators.md)