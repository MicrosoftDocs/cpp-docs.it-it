---
title: "&lt;name&gt; is not a valid solution name. | Microsoft Docs"
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
  - "vs.message.VS_E_INVALIDSOLUTIONNAME"
  - "vs.message.0x800A00D3"
ms.assetid: 79b7870d-16bd-4527-8ce6-ffb015e7e330
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# &lt;name&gt; is not a valid solution name.
Generalmente questo errore si verifica quando il comando `File.NewProject` è stato immesso nella finestra **Comando** o nella casella **Trova\/Comando** con un valore formattato non correttamente per l'argomento \/sln:*nomesoluzione*.  
  
### Per correggere l'errore  
  
1.  Digitare di nuovo la sintassi del comando e omettere l'argomento facoltativo \/sln:*nomesoluzione*.  Verrà generato automaticamente un nome di soluzione univoco.  
  
     \-oppure\-  
  
     Verificare che il nome di soluzione non contenga spazi iniziali o finali e che non sia una parola riservata,  ad esempio NUL, CON, AUX, COM*x* e LPT*x*, dove *x* è una cifra compresa tra 1 e 9.  
  
## Vedere anche  
 [Finestra di comando](../Topic/Command%20Window.md)