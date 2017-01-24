---
title: "Configuration name is not valid. | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.VS_E_INVALID_CFG_NAME"
  - "vs.message.0x800A00B7"
ms.assetid: aa439582-0863-41d3-825c-7c45b1773cde
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Configuration name is not valid.
Generalmente questo errore si verifica quando il nome immesso per la configurazione della build include caratteri non validi, ad esempio \<, \>, &#124; e \*.  
  
### Per correggere l'errore  
  
1.  Verificare che il nome della configurazione non contenga i seguenti caratteri: \<, \>, \*, &#124;, :, \\, \/, &, %, ", ., \#, ? oppure uno spazio iniziale o finale.  Il nome della configurazione, inoltre, non può contenere nomi riservati per Windows o DOS, come "nul", "aux", "con', "com\#", "lpt\#" e così via.  
  
2.  Digitare di nuovo il nome.  
  
## Vedere anche  
 [Compilazione di applicazioni in Visual Studio](../Topic/Compiling%20and%20Building%20in%20Visual%20Studio.md)