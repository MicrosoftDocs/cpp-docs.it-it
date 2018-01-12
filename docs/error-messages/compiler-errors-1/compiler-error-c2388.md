---
title: Errore del compilatore C2388 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C2388
dev_langs: C++
helpviewer_keywords: C2388
ms.assetid: 764ad2d7-cb04-425f-ba30-70989488c4a4
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: fa9f970d71be7b19551ef5029df49b696eb353e6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2388"></a>Errore del compilatore C2388
'symbol': Impossibile dichiarare un simbolo con entrambi __declspec(appdomain) e \__declspec(process)  
  
 Non è possibile usare i modificatori `appdomain` e `process` `__declspec` sullo stesso simbolo. L'archiviazione per una variabile è disponibile per processo o per dominio applicazione.  
  
 Per altre informazioni, vedere [appdomain](../../cpp/appdomain.md) e [process](../../cpp/process.md).  
  
 L'esempio seguente genera l'errore C2388:  
  
```  
// C2388.cpp  
// compile with: /clr /c  
__declspec(process) __declspec(appdomain) int i;   // C2388  
__declspec(appdomain) int i;   // OK  
```