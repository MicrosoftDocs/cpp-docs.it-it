---
title: "&#200; stato specificato un nome non valido per il log eventi | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: b1b158bd-f13f-4371-a8af-31c0e86ae6be
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; stato specificato un nome non valido per il log eventi
È stato specificato un nome non valido per il log eventi. Generalmente è l'effetto della presenza di caratteri non validi nel nome, di un nome file vuoto o di un nome file troppo lungo.  
  
### Per correggere l'errore  
  
-   Se la lunghezza del nome specificato supera otto caratteri, accertarsi che non vi sia un conflitto con i nomi di altri log eventi. Quando si determina se il nome è univoco vengono presi in considerazione solo i primi otto caratteri.  
  
-   Se si fornisce un percorso, accertarsi che venga analizzato correttamente.  
  
-   Verificare che il nome non contenga caratteri non validi. I caratteri che non è possibile usare in un nome file comprendono `<`, `>`, `:`, `"`, `/`, `\` e `|`.  
  
## Vedere anche  
 [Procedura: analizzare percorsi di file](../Topic/How%20to:%20Parse%20File%20Paths%20in%20Visual%20Basic.md)   
 [How to: Rename a File](../Topic/How%20to:%20Rename%20a%20File%20in%20Visual%20Basic.md)   
 [How to: Create and Remove Custom Event Logs](http://msdn.microsoft.com/it-it/af9b7da0-80c7-46ac-b7f7-897063ddd503)