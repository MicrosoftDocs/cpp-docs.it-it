---
title: "Alias definition is recursive. | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.0x800A00DA"
  - "vs.message.VS_E_RECURSIVEALIAS"
ms.assetid: e48a2908-9b94-4c6a-9807-beeeba71531c
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Alias definition is recursive.
Generalmente questo errore si verifica quando si definisce un alias che direttamente o indirettamente fa riferimento a se stesso.  
  
### Per correggere l'errore  
  
1.  Modificare la definizione dell'alias, quindi riprovare.  
  
     \-oppure\-  
  
2.  Esaminare l'elenco corrente di alias e le relative definizioni immettendo `>alias` nella finestra di comando, quindi riprovare.  
  
## Vedere anche  
 [Comando Alias](../Topic/Alias%20Command.md)   
 [Alias di comandi di Visual Studio](../Topic/Visual%20Studio%20Command%20Aliases.md)