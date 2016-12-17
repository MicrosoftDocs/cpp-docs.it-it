---
title: "MSBuild Error MSB3123 | Microsoft Docs"
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
  - "GenerateManifest.FileAssociationsCountExceedsMaximum"
helpviewer_keywords: 
  - "MSB3123"
ms.assetid: 343aa8a8-9ab9-4dd5-be59-8eccf1f3c012
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# MSBuild Error MSB3123
**MSB3123: il numero di associazioni di file supera il limite di \<limite\>.**  
  
 A ogni file è consentito solo un un numero fisso di estensioni di nome file associate.  Questo errore si verifica quando si tenta di associare più estensioni di file di quante consentite dal sistema operativo di destinazione.  
  
### Per correggere l'errore  
  
-   Limitare il numero di associazioni di file al numero specificato.  
  
## Vedere anche  
 [Pagina Pubblica, Progettazione progetti](../Topic/Publish%20Page,%20Project%20Designer.md)   
 [ClickOnce Application Manifest](../Topic/ClickOnce%20Application%20Manifest.md)