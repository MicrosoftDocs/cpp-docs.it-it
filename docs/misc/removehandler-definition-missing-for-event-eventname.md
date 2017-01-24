---
title: "Manca la definizione di &#39;RemoveHandler&#39; per l&#39;evento &#39;&lt;nomeevento&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc31131"
  - "vbc31131"
helpviewer_keywords: 
  - "BC31131"
ms.assetid: 0ef68daf-b66e-4ecf-bf2c-dcacabd8aa3d
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Manca la definizione di &#39;RemoveHandler&#39; per l&#39;evento &#39;&lt;nomeevento&gt;&#39;
Se un evento viene dichiarato come `Custom`, deve fornire una routine per la rimozione di un gestore eventi.  
  
 **ID errore:** BC31131  
  
### Per correggere l'errore  
  
1.  Includere una dichiarazione `RemoveHandler` tra l'istruzione `Custom Event` e l'istruzione `End Event`.  
  
2.  Verificare che le altre routine all'interno della dichiarazione di evento vengano terminate correttamente.  
  
## Vedere anche  
 [RemoveHandler Statement](../Topic/RemoveHandler%20Statement.md)   
 [Event Statement](../Topic/Event%20Statement.md)