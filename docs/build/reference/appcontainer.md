---
title: "/APPCONTAINER | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/APPCONTAINER"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/APPCONTAINER (opzione editbin)"
  - "APPCONTAINER (opzione editbin)"
  - "-APPCONTAINER (opzione editbin)"
ms.assetid: 0ca4f1ec-c8de-4a37-b3e2-deda7af0bb88
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /APPCONTAINER
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Contrassegna un eseguibile che deve essere eseguito in un contenitore di app, ad esempio, un'app di [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] o un'app di Windows universale.  
  
```  
  
/APPCONTAINER[:NO]  
```  
  
## Note  
 Un file eseguibile per cui è impostata l'opzione **\/APPCONTAINER** può essere eseguito solo in un contenitore di app, l'ambiente di isolamento dei processi introdotto in Windows 8. Questa opzione deve essere impostata per le app di [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] e le app di Windows universale.  
  
## Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)   
 [Informazioni sulle app di Windows universale](http://go.microsoft.com/fwlink/p/?LinkID=522074)