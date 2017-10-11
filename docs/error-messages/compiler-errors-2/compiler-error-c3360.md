---
title: Errore del compilatore C3360 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3360
dev_langs:
- C++
helpviewer_keywords:
- C3360
ms.assetid: 6acf983a-dbb6-422b-b045-a34bb4ba6761
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: a3ec2752ae3b2f03fc34ad2aaa09dbb80c8b2a8f
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3360"></a>Errore del compilatore C3360
'string': non è possibile creare un nome  
  
 Il valore passato all'attributo [uuid](../../windows/uuid-cpp-attributes.md) non è valido.  
  
 L'esempio seguente genera l'errore C3360:  
  
```  
// C3360.cpp  
[ uuid("1") ]  
// try this line instead  
// [ uuid("12341234-1234-1234-1234-123412341234") ]  
struct A   // C3360  
{  
};  
  
int main()  
{  
}  
```
