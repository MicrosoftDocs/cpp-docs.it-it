---
title: -APPCONTAINER | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /APPCONTAINER
dev_langs:
- C++
helpviewer_keywords:
- APPCONTAINER editbin option
- -APPCONTAINER editbin option
- /APPCONTAINER editbin option
ms.assetid: 0ca4f1ec-c8de-4a37-b3e2-deda7af0bb88
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 08966cd2b9da434c45750edb57644c182a14baf2
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="appcontainer"></a>/APPCONTAINER
Contrassegna un eseguibile che deve essere eseguito in un contenitore di app, ad esempio, un'app di Microsoft Store o di Windows universale.  
  
```  
  
/APPCONTAINER[:NO]  
```  
  
## <a name="remarks"></a>Note  
 Un file eseguibile per cui è impostata l'opzione **/APPCONTAINER** può essere eseguito solo in un contenitore di app, l'ambiente di isolamento dei processi introdotto in Windows 8. Per le app di Microsoft Store e universali di Windows, è necessario impostare questa opzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)   
 [Che cos'è un'App di Windows universale?](http://go.microsoft.com/fwlink/p/?LinkID=522074)