---
title: "Le direttive di &#39;#ExternalSource&#39; non possono essere annidate | Microsoft Docs"
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
  - "bc30580"
  - "vbc30580"
helpviewer_keywords: 
  - "BC30580"
ms.assetid: 56c6ef4b-28b1-4a62-8afa-d83a7742b507
caps.latest.revision: 13
caps.handback.revision: 13
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le direttive di &#39;#ExternalSource&#39; non possono essere annidate
Si è provato a posizionare una direttiva `#ExternalSource` all'interno di un altro blocco `#ExternalSource`. La direttiva `#ExternalSource` fa riferimento al codice esterno, permettendo al compilatore di segnalare con precisione le eccezioni che si verificano all'interno di tale codice.  
  
 I blocchi `#ExternalSource` non possono essere annidati all'interno di altri blocchi `#ExternalSource`.  
  
 **ID errore:** BC30580  
  
### Per correggere l'errore  
  
-   Spostare la direttiva `#ExternalSource` interna al di fuori del blocco `#ExternalSource` di inclusione.  
  
## Vedere anche  
 [\#ExternalSource Directive](../Topic/%23ExternalSource%20Directive.md)   
 [NOTINBUILD Compilazione condizionale \(Visual Basic\)](http://msdn.microsoft.com/it-it/ad1e35e0-935e-4a35-a2ae-738bcf2a9240)