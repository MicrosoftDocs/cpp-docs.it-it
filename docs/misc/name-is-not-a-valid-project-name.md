---
title: "&lt;name&gt; is not a valid project name. | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.VS_E_INVALIDPROJECTNAME"
  - "vs.message.0x800A00D2"
ms.assetid: 2e8f3e58-f5f0-4f12-bae9-3acc58c0dca6
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# &lt;name&gt; is not a valid project name.
Generalmente questo errore si verifica quando il comando `File.NewProject` viene emesso dalla finestra **Comando** o dalla casella **Trova\/Comando** e viene immesso un nome di progetto non corretto come *nomeprogetto*.  
  
### Per correggere l'errore  
  
1.  Verificare che il nome di progetto non contenga spazi iniziali o finali e che non sia una parola riservata, ad esempio NUL, CON o AUX.  
  
     \-oppure\-  
  
     Digitare di nuovo il comando, omettendo il nome di progetto.  
  
## Vedere anche  
 [Finestra di comando](../Topic/Command%20Window.md)