---
title: 'Operatori di uguaglianza: = = e! = | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- not_eq
- '!='
- ==
dev_langs:
- C++
helpviewer_keywords:
- '!= operator'
- equality operator
- not equal to comparison operator
- equality operator [C++], syntax
- == operator
- not_eq operator
- equal to operator
ms.assetid: ba4e9659-2392-4fb4-be5a-910a2a6df45a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 073e642b99dea4eb6f77fd1e79731713748f1f61
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39403115"
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
 [Espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)   
 [Operatori C++ predefiniti, precedenza e associatività degli operatori](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori relazionali e operatori di uguaglianza C](../c-language/c-relational-and-equality-operators.md)