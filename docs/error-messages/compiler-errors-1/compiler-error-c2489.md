---
title: Errore del compilatore C2489 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2489
dev_langs:
- C++
helpviewer_keywords:
- C2489
ms.assetid: 67d8cd98-db7e-4f7f-86b4-4af7bc89ec8b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 44672cbfc519b37b1d7c1e42ab2cf0137f93394f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33196451"
---
# <a name="compiler-error-c2489"></a>Errore del compilatore C2489
'identifier': auto o register variabile inizializzata non consentita nell'ambito della funzione nella funzione 'naked'  
  
 Per ulteriori informazioni, vedere [naked](../../cpp/naked-cpp.md).  
  
 L'esempio seguente genera l'errore C2489:  
  
```  
// C2489.cpp  
// processor: x86  
__declspec( naked ) int func() {  
   int i = 1;   // C2489  
   register int j = 1;   // C2489  
}  
```