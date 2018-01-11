---
title: Errore del compilatore C2646 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2646
dev_langs: C++
helpviewer_keywords: C2646
ms.assetid: 92ff1f02-5eaf-40a5-8b7a-a682f149e967
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0d9572f7d8e0b3eb01288d7dff414def8be2b203
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2646"></a>Errore del compilatore C2646
nell'ambito globale o dello spazio dei nomi una struct o unione anonima deve essere dichiarata come statica  
  
 Una struct o unione anonima dispone dell'ambito globale o dello spazio dei nomi, ma non è dichiarata come `static`.  
  
 L'esempio seguente genera l'errore C2646 e mostra come risolverlo:  
  
```  
// C2646.cpp  
// compile with: /c  
union { int i; };   // C2646 not static  
  
// OK  
static union { int j; };  
union U { int i; };  
```