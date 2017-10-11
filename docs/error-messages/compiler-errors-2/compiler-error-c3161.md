---
title: Errore del compilatore C3161 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3161
dev_langs:
- C++
helpviewer_keywords:
- C3161
ms.assetid: 1fe2be85-a343-487b-8476-bf9e257eb29d
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 4be981b2af166d85a3a83209a901f3e3e51b6246
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3161"></a>Errore del compilatore C3161
'interface': Impossibile nidificare una classe, unione, struct o interfaccia in un'interfaccia non è valida; Impossibile nidificare un'interfaccia in una classe, struct o unione non è valida  
  
 Un [Interface](../../cpp/interface.md) può apparire solo in ambito globale o all'interno di uno spazio dei nomi. Una classe, struct o unione non può trovarsi in un'interfaccia.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3161.  
  
```  
// C3161.cpp  
// compile with: /c  
__interface X {  
   __interface Y {};   // C3161 A nested interface  
};  
```
