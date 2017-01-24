---
title: "&#39;#End ExternalSource&#39; deve essere preceduto da un oggetto &#39;#ExternalSource&#39; corrispondente | Microsoft Docs"
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
  - "bc30578"
  - "vbc30578"
helpviewer_keywords: 
  - "BC30578"
ms.assetid: f011673d-eced-46a7-a08e-d54d86c8a76b
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;#End ExternalSource&#39; deve essere preceduto da un oggetto &#39;#ExternalSource&#39; corrispondente
La direttiva `#ExternalSource` fa riferimento al codice esterno, permettendo al compilatore di segnalare con precisione le eccezioni che si verificano all'interno di tale codice. Un blocco `#ExternalSource` deve iniziare con `#ExternalSource` e terminare con `#End ExternalSource`.  
  
 **ID errore:** BC30578  
  
### Per correggere l'errore  
  
1.  Aggiungere `#ExternalSource` nella posizione appropriata nel codice.  
  
2.  Rimuovere `#End ExternalSource` se non è necessario.  
  
## Vedere anche  
 [\#ExternalSource Directive](../Topic/%23ExternalSource%20Directive.md)   
 [NOTINBUILD Compilazione condizionale \(Visual Basic\)](http://msdn.microsoft.com/it-it/ad1e35e0-935e-4a35-a2ae-738bcf2a9240)