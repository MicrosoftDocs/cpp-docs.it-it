---
title: "Il nome del parametro di tipo non pu&#242; essere uguale a quello della funzione che lo definisce | Microsoft Docs"
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
  - "vbc32090"
  - "bc32090"
helpviewer_keywords: 
  - "BC32090"
ms.assetid: 02f4d82c-dcd7-44cc-b725-81e235f680f6
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il nome del parametro di tipo non pu&#242; essere uguale a quello della funzione che lo definisce
Un parametro di tipo di un tipo generico viene dichiarato con lo stesso nome del tipo generico.  
  
 Nell'elenco di parametri di tipo di un tipo generico ogni parametro di tipo deve avere un nome diverso da quello di tutti i nomi seguenti:  
  
-   Ogni altro parametro di tipo nell'elenco di parametri dello stesso tipo,  
  
-   Ogni parametro di tipo nell'elenco dei parametri di tipo di qualsiasi tipo generico contenitore e  
  
-   Il nome del tipo generico stesso.  
  
 **ID errore:** BC32090  
  
### Per correggere l'errore  
  
-   Rinominare il parametro di tipo in modo che sia diverso da qualsiasi altro nome presente nell'elenco in questa pagina della Guida.  
  
## Vedere anche  
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)