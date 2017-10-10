---
title: Errore del compilatore C2619 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2619
dev_langs:
- C++
helpviewer_keywords:
- C2619
ms.assetid: c826f8ab-d66a-4b79-a0b2-93b0af8c41ac
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: a4ef72e986aae1746444b434997755a260d715ed
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2619"></a>Errore del compilatore C2619
'identifier': membro dati statico non consentito in una struct o unione anonima  
  
 Un membro di una struct o unione anonima è dichiarato come `static`.  
  
 L'esempio seguente genera l'errore C2619 e illustra come risolverlo rimuovendo la parola chiave static.  
  
```  
// C2619.cpp  
int main() {  
   union { static int j; };  // C2619  
   union { int j; };  // OK  
}  
```
