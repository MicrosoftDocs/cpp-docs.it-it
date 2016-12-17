---
title: "impossibile inviare automaticamente la segnalazione errori | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc2027"
  - "vbc2027"
helpviewer_keywords: 
  - "BC2027"
ms.assetid: 84ba8580-2234-46d1-b4a5-94b03f64c0c7
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# impossibile inviare automaticamente la segnalazione errori
impossibile inviare automaticamente la segnalazione errori. Visitare 'http:\/\/go.microsoft.com\/fwlink\/?LinkId\=42039' per configurare le impostazioni di invio della segnalazione errori.  
  
 È stata specificata l'opzione del compilatore `/errorreport:send`, ma il computer non è configurato per l'invio automatico delle segnalazioni di errori. Non verrà inviata alcuna informazione sugli errori interni nel compilatore di Visual Basic.  
  
 **ID errore:** BC2027  
  
### Per correggere l'errore  
  
-   Rimuovere l'opzione del compilatore `/errorreport:send` oppure sostituirla con `/errorreport:queue`, `/errorreport:prompt` o `/errorreport:none`.  
  
     oppure  
  
-   Abilitare la segnalazione automatica degli errori seguendo le istruzioni fornite in [http:\/\/go.microsoft.com\/fwlink\/?LinkId\=42039](http://go.microsoft.com/fwlink/?LinkId=42039).  
  
## Vedere anche  
 [\/errorreport](../Topic/-errorreport.md)   
 [http:\/\/go.microsoft.com\/fwlink\/?LinkId\=42039](http://go.microsoft.com/fwlink/?LinkId=42039)