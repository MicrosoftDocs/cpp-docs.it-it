---
title: Errore del compilatore C3161 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3161
dev_langs:
- C++
helpviewer_keywords:
- C3161
ms.assetid: 1fe2be85-a343-487b-8476-bf9e257eb29d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f2d7aff3eb41c03f5be774704922340ac54126fc
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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