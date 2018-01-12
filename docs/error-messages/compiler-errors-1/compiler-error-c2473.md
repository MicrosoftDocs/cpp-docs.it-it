---
title: Errore del compilatore C2473 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C2473
dev_langs: C++
helpviewer_keywords: C2473
ms.assetid: 6bb7dbf5-b198-490f-860e-fd64d0c2a284
caps.latest.revision: "4"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: da31fbedf94691a3d9b379c8794ea25f1e16de7d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2473"></a>Errore del compilatore C2473
'identifier': sembra una definizione di funzione, ma manca un elenco di parametri.  
  
 Il compilatore ha rilevato un elemento simile a una funzione senza elenco di parametri.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2473.  
  
```  
// C2473.cpp  
// compile with: /clr /c  
class A {  
   int i {}   // C2473  
};  
  
class B {  
   int i() {}   // OK  
};  
```