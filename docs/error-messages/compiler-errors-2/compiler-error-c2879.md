---
title: Errore del compilatore C2879 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2879
dev_langs:
- C++
helpviewer_keywords:
- C2879
ms.assetid: ac92b645-2394-49de-8632-43d44e0553ed
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 65e7a7bd56096fbeec61b651ab494d82edef9c90
ms.openlocfilehash: b09a83e77e906a4a65efa12cf51a067361fad95a
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2879"></a>Errore del compilatore C2879
'simbolo': solo uno spazio dei nomi può essere attribuito un nome alternativo per una definizione di alias dello spazio dei nomi  
  
 Non è possibile creare un [alias dello spazio dei nomi](../../cpp/namespaces-cpp.md#namespace_aliases) a un simbolo diverso da uno spazio dei nomi.  
  
 Nell'esempio seguente viene generato l'errore C2879:  
  
```  
// C2879.cpp  
int main() {  
   int i;  
   namespace A = i;   // C2879 i is not a namespace  
}  
```
