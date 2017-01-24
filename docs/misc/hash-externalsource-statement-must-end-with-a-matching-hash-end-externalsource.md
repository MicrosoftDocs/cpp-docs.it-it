---
title: "L&#39;istruzione &#39;#ExternalSource&#39; deve terminare con un &#39;#End ExternalSource&#39; corrispondente | Microsoft Docs"
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
  - "vbc30579"
  - "bc30579"
helpviewer_keywords: 
  - "BC30579"
ms.assetid: 8d658008-eddc-4b7d-a8d4-036da42957bf
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;istruzione &#39;#ExternalSource&#39; deve terminare con un &#39;#End ExternalSource&#39; corrispondente
La direttiva `#ExternalSource` fa riferimento al codice esterno, permettendo al compilatore di segnalare con precisione le eccezioni che si verificano all'interno di tale codice. Un blocco `#ExternalSource` deve iniziare con `#ExternalSource` e terminare con `#End ExternalSource`.  
  
 **ID errore:** BC30579  
  
### Per correggere l'errore  
  
1.  Aggiungere `#End ExternalSource` nella posizione appropriata nel codice.  
  
2.  Rimuovere l'elemento `#ExternalSource` iniziale se non è necessario.  
  
## Vedere anche  
 [\#ExternalSource Directive](../Topic/%23ExternalSource%20Directive.md)   
 [NOTINBUILD Compilazione condizionale \(Visual Basic\)](http://msdn.microsoft.com/it-it/ad1e35e0-935e-4a35-a2ae-738bcf2a9240)