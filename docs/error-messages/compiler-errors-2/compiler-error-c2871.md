---
title: Errore del compilatore C2871 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2871
dev_langs: C++
helpviewer_keywords: C2871
ms.assetid: 44aeb84d-61f0-45e0-8dad-22a3cd46b7f8
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: bc5c4b4d0cdb90e550a0685795d89ef18c18c376
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2871"></a>Errore del compilatore C2871
'name': non esiste uno spazio dei nomi con questo nome  
  
Questo errore si verifica quando viene passato un identificatore che non è uno spazio dei nomi per un [utilizzando](../../cpp/namespaces-cpp.md#using_directives) direttiva.  
  
## <a name="example"></a>Esempio  
L'esempio seguente genera l'errore C2871:  
  
```cpp  
// C2871.cpp  
// compile with: /c
namespace a {
   int fn(int i) { return i; }
} 
namespace b { 
   using namespace d;   // C2871 because d is not a namespace  
   using namespace a;   // OK
}  
```