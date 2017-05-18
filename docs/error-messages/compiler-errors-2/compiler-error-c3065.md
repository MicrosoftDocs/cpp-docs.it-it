---
title: Errore del compilatore C3065 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3065
dev_langs:
- C++
helpviewer_keywords:
- C3065
ms.assetid: e7a0bc69-1c68-459e-a7c4-93c65609ff7c
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
ms.openlocfilehash: fcfe6d244f24fd1f77f8d73fe6edee271636c262
ms.contentlocale: it-it
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3065"></a>Errore del compilatore C3065
la dichiarazione di proprietà in ambito non di classe non è consentita  
  
 Il [proprietà](../../cpp/property-cpp.md) modificatore declspec è stata utilizzata all'esterno di una classe.  Una proprietà può essere dichiarata solo all'interno di una classe.  
  
 L'esempio seguente genera l'errore C3065:  
  
```  
// C3065.cpp  
// compile with: /c  
__declspec(property(get=get_i)) int i;   // C3065  
  
class x {  
public:  
   __declspec(property(get=get_i)) int i;   // OK  
};  
```
