---
title: Errore del compilatore C2005 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2005
dev_langs:
- C++
helpviewer_keywords:
- C2005
ms.assetid: 090530ed-e0ec-4358-833a-ca24260e7ffe
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: f3fdca572b0ee94d97272db445a35e78b1ce37ea
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2005"></a>Errore del compilatore C2005
\#riga è previsto un numero di riga, trovato 'token'  
  
 Il `#line` direttiva deve essere seguita da un numero di riga.  
  
 L'esempio seguente genera l'errore C2005:  
  
```  
// C2005.cpp  
int main() {  
   int i = 0;  
   #line i   // C2005  
}  
```  
  
 Possibile soluzione:  
  
```  
// C2005b.cpp  
int main() {  
   int i = 0;  
   #line 0  
}  
```
