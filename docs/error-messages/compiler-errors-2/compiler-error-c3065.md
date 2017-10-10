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
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 059493df3a2c805e829bb50311b2fadebbbc575b
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3065"></a>Errore del compilatore C3065
la dichiarazione di proprietà in ambito non di classe non è consentita  
  
 Il modificatore __declspec della [proprietà](../../cpp/property-cpp.md) è stato usato al di fuori di una classe.  Una proprietà può essere dichiarata solo all'interno di una classe.  
  
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
