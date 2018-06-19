---
title: Errore del compilatore C3116 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3116
dev_langs:
- C++
helpviewer_keywords:
- C3116
ms.assetid: 597463e1-a5cc-4ed3-a917-eae9a61d3312
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fde589df31e6e3b75f9a0153d7383ab1e85ed180
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33250343"
---
# <a name="compiler-error-c3116"></a>Errore del compilatore C3116
'identificatore di archiviazione': classe di archiviazione non valido per il metodo di interfaccia  
  
 È stato utilizzato `typedef`, `register`, o `static` come classe di archiviazione per un metodo di interfaccia. Queste classi di archiviazione non sono consentite nei membri di interfaccia.  
  
 L'esempio seguente genera l'errore C3116:  
  
```  
// C3116.cpp  
__interface ImyInterface  
{  
   static void myFunc();   // C3116  
};  
```