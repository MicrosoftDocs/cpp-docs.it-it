---
title: "Nessuno dei metodi &#39;Main&#39; accessibili con le firme appropriate trovate in &#39;&lt;nometipo&gt;&#39; pu&#242; essere il metodo di avvio dato che sono generici o annidati in tipi generici | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30796"
  - "BC30796"
helpviewer_keywords: 
  - "BC30796"
ms.assetid: 606b3629-5a92-4c79-ace2-a530cab8c978
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Nessuno dei metodi &#39;Main&#39; accessibili con le firme appropriate trovate in &#39;&lt;nometipo&gt;&#39; pu&#242; essere il metodo di avvio dato che sono generici o annidati in tipi generici
Una classe, un modulo o una struttura non comprende alcuna routine `Main` che abbia le caratteristiche della routine di avvio del progetto.  
  
 Visual Basic richiede che la routine di avvio di un progetto non dipenda da argomenti di tipo. Esso deve quindi poter accedere ad almeno una routine `Main` che non sia né generica né contenuta in alcun tipo generico.  
  
 **ID errore:** BC30796  
  
### Per correggere l'errore  
  
-   Definire almeno una delle routine `Main` in modo tale che non sia generica e non sia contenuta in un tipo generico.  
  
     \-oppure\-  
  
-   Nella pagina **Proprietà** del progetto, specificare un form o un modulo diverso per **Form di avvio** o **Oggetto di avvio**.  
  
## Vedere anche  
 [NIB Procedura: Modificare le proprietà e le impostazioni di configurazione dei progetti](http://msdn.microsoft.com/it-it/e7184bc5-2f2b-4b4f-aa9a-3ecfcbc48b67)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [NIB: Versione di Hello, World per Visual Basic](http://msdn.microsoft.com/it-it/9d030b60-e148-4366-a462-69532f02294c)