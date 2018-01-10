---
title: Errore del compilatore C2793 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2793
dev_langs: C++
helpviewer_keywords: C2793
ms.assetid: ce35f4e8-c357-40ca-95c4-15ff001ad69d
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4ff82a5f07616d060e86cd05b32463dcdee40236
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2793"></a>Errore del compilatore C2793
'token': token imprevisto dopo ':: ', identificatore o la parola chiave 'operator' previsto  
  
 Gli unici token che possono seguire `__super::` sono un identificatore o la parola chiave `operator`.  
  
 L'esempio seguente genera l'errore C2793  
  
```  
// C2793.cpp  
struct B {  
   void mf();  
};  
  
struct D : B {  
   void mf() {  
      __super::(); // C2793  
   }  
};  
```