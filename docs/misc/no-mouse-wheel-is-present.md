---
title: "Rotellina del mouse non presente | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbrMouse_NoWheelIsPresent"
ms.assetid: e924ffba-4af1-4247-9a6f-d19a03738f62
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Rotellina del mouse non presente
È stata chiamata la proprietà `My.Computer.Mouse.WheelScrollLines`, ma la rotellina del mouse non è presente.  
  
### Per correggere l'errore  
  
-   Controllare la proprietà `My.Computer.Mouse.WheelExists` per verificare che la rotellina del mouse sia presente prima di chiamare la proprietà `My.Computer.Mouse.WheelScrollLines`.  
  
     \-oppure\-  
  
-   Installare un mouse con rotellina nel computer.  
  
## Vedere anche  
 [Proprietà My.Computer.Mouse.WheelScrollLines](http://msdn.microsoft.com/it-it/67600f96-25d7-4dd9-946a-b46e1fc6a57f)   
 [Proprietà My.Computer.Mouse.WheelExists](http://msdn.microsoft.com/it-it/332d44f7-0b66-4eaa-b4ce-d7f161bfbd07)   
 [Gestione di eccezioni ed errori in Visual Basic](http://msdn.microsoft.com/it-it/3e351e73-cf23-40ab-8b60-05794160529e)