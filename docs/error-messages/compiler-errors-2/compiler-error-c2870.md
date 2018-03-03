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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: daf7a6d7598b8f341a2b1c413d8284ec6e56a3cb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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