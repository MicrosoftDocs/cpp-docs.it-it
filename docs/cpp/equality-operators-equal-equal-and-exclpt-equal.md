---
title: 'Operatori di uguaglianza: = = e! = | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
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
- equality operator, syntax
- == operator
- not_eq operator
- equal to operator
ms.assetid: ba4e9659-2392-4fb4-be5a-910a2a6df45a
caps.latest.revision: 7
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 5412869204f088e321d2a41da407026f9447eb82
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="equality-operators--and-"></a>Operatori di uguaglianza: == e !=
## <a name="syntax"></a>Sintassi  
  
```  
expression == expression  
expression != expression  
```  
  
## <a name="remarks"></a>Note  
 Gli operatori di uguaglianza binari confrontano i propri operandi per verificare identità o disuguaglianza.  
  
 Gli operatori di uguaglianza, uguale a (`==`) e non uguale a (`!=`), hanno precedenza inferiore rispetto agli operatori relazionali, ma si comportano in modo analogo. Il tipo di risultato per questi operatori è `bool`.  
  
 L'operatore uguale a (`==`) restituisce **true** (1) se entrambi gli operandi hanno lo stesso valore; in caso contrario, restituisce **false** (0). L'operatore non uguale a (`!=`) restituisce **true** se gli operandi non hanno lo stesso valore; in caso contrario, restituisce **false**.  
  
## <a name="operator-keyword-for-"></a>Parola chiave operator per !=  
 L'operatore `not_eq` è il testo equivalente di `!=`. Esistono due modi per accedere il `not_eq` operatore nei programmi: includere il file di intestazione `iso646.h`, o compilare il [/Za](../build/reference/za-ze-disable-language-extensions.md) l'opzione del compilatore (Disabilita estensioni linguaggio).  
  
## <a name="example"></a>Esempio  
  
```  
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
  
 Gli operatori di uguaglianza possono confrontare i puntatori ai membri dello stesso tipo. In tale confronto, vengono eseguite conversioni puntatore a membro. I puntatori ai membri possono essere confrontati a un'espressione costante che restituisce 0.  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)   
 [Operatori C++ predefiniti, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Operatori relazionali e operatori di uguaglianza C](../c-language/c-relational-and-equality-operators.md)
