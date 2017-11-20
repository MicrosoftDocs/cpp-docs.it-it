---
title: -APPCONTAINER | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /APPCONTAINER
dev_langs: C++
helpviewer_keywords:
- APPCONTAINER editbin option
- -APPCONTAINER editbin option
- /APPCONTAINER editbin option
ms.assetid: 0ca4f1ec-c8de-4a37-b3e2-deda7af0bb88
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 62b23ed04783971bf37442237e4db770b7427a8d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="appcontainer"></a>/APPCONTAINER
Contrassegna un eseguibile che deve essere eseguito in un contenitore di app, ad esempio, un'app di [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] o un'app di Windows universale.  
  
```  
  
/APPCONTAINER[:NO]  
```  
  
## <a name="remarks"></a>Note  
 Un file eseguibile per cui è impostata l'opzione **/APPCONTAINER** può essere eseguito solo in un contenitore di app, l'ambiente di isolamento dei processi introdotto in Windows 8. Questa opzione deve essere impostata per le app di [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] e le app di Windows universale.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)   
 [Che cos'è un'App di Windows universale?](http://go.microsoft.com/fwlink/p/?LinkID=522074)