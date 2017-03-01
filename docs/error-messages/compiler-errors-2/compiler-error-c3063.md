---
title: Errore del compilatore C3063 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3063
dev_langs:
- C++
helpviewer_keywords:
- C3063
ms.assetid: 0ecf6f1f-e4a7-487a-9fd5-79d8ac470001
caps.latest.revision: 9
author: corob-msft
ms.author: corob
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
translationtype: Machine Translation
ms.sourcegitcommit: 65e7a7bd56096fbeec61b651ab494d82edef9c90
ms.openlocfilehash: ce6a597e0246cee5c62dd6612d48fe4946505e77
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3063"></a>Errore del compilatore C3063
' operatore ': tutti gli operandi devono avere lo stesso tipo di enumerazione  
  
Quando si utilizzano gli operatori sugli enumeratori, entrambi gli operandi devono essere del tipo di enumerazione. Per ulteriori informazioni, vedere [procedura: definire e utilizzare enumerazioni in C + + CLI](../../dotnet/how-to-define-and-consume-enums-in-cpp-cli.md).  
  
## <a name="example"></a>Esempio  
Nell'esempio seguente viene generato l'errore C3063 e viene illustrato come risolvere il problema:  
  
```  
// C3063.cpp  
// compile with: /clr  
enum class E { a, b } e, mask;  
int main() {  
   if ( ( e & mask ) != 0 ) ;   // C3063 no operator!= (E, int)  
  
   if ( ( e & mask ) != E() )   // OK  
      ;  
}  
```
