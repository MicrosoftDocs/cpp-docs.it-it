---
title: Errore del compilatore C2870 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2870
dev_langs:
- C++
helpviewer_keywords:
- C2870
ms.assetid: 80523ee9-1fd3-4dc4-8a77-5083deb99066
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 75b9189795c7351745e9624cfb9cc11259834b76
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2870"></a>Errore del compilatore C2870
'name': la definizione dello spazio dei nomi deve comparire in ambito file o immediatamente all'interno di un'altra definizione di spazio dei nomi  
  
 Spazio dei nomi definito `name` in modo non corretto. Spazi dei nomi deve essere definito nell'ambito del file (all'esterno di tutti i blocchi e le classi) oppure direttamente all'interno di un altro spazio dei nomi.  
  
 L'esempio seguente genera l'errore C2870:  
  
```  
// C2870.cpp  
// compile with: /c  
int main() {  
   namespace A { int i; };   // C2870  
}  
```
