---
title: "Command requires one argument. | Microsoft Docs"
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
  - "vs.message.VS_E_INCORRECTPARAMCOUNT1"
  - "vs.message.0x800A00C3"
ms.assetid: b4d98e6d-6970-42fb-b1de-43f2e952fb9d
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Command requires one argument.
Generalmente questo errore si verifica quando non si immettono informazioni sufficienti per il comando o perché si utilizza una combinazione di argomenti errata.  
  
 Ad esempio, se si immette `alias` `/delete sample1 sample2` per il comando `alias`, viene visualizzato questo errore perché il comando alias con opzione `/delete` può avere solo un nome alias e non due.  Poiché i nomi alias non contengono spazi, la casella **Trova\/Comando** e la finestra di comando interpretano `sample1 sample2` come due nomi alias distinti.  
  
### Per correggere l'errore  
  
1.  Controllare la sintassi corretta del comando nella documentazione, quindi riprovare.  
  
## Vedere anche  
 [Comandi di Visual Studio](../Topic/Visual%20Studio%20Commands.md)