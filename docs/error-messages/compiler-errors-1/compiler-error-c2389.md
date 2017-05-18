---
title: Errore del compilatore C2389 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C2389
dev_langs:
- C++
helpviewer_keywords:
- C2389
ms.assetid: 6122dc81-4ee3-49a5-a67d-d867808c9bac
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: f0e3815ef1631d905946ba8285d68ac5344f3ca6
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c2389"></a>Errore del compilatore C2389
'operator': operando 'nullptr' non valido  
  
 `nullptr`non può essere un operando.  
  
 L'esempio seguente genera l'errore C2389:  
  
```  
// C2389.cpp  
// compile with: /clr  
int main() {  
   throw nullptr;   // C2389  
}  
```
