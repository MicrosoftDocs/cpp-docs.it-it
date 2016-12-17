---
title: "L&#39;identificatore di attributi non &#232; un&#39;istruzione completa | Microsoft Docs"
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
  - "vbc32035"
  - "bc32035"
helpviewer_keywords: 
  - "BC32035"
ms.assetid: a0ddd673-4170-4bea-9c22-777d7bf21dfd
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;identificatore di attributi non &#232; un&#39;istruzione completa
L'identificatore di attributi non è un'istruzione completa. Utilizzare una continuazione di riga per applicare l'attributo alla seguente istruzione.  
  
 Un blocco di attributi viene visualizzato da solo su una riga di codice sorgente. Gli attributi devono essere applicati all'inizio di un'istruzione di dichiarazione e devono fare parte di tale istruzione.  
  
 **ID errore:** BC32035  
  
### Per correggere l'errore  
  
-   Se l'istruzione di dichiarazione si trova nella riga successiva, aggiungere uno spazio e un carattere di sottolineatura \(`_`\) dopo il blocco di attributi per combinare le righe di codice sorgente.  
  
-   Se nessuna istruzione di dichiarazione è associata al blocco di attributi, specificarne uno o rimuovere il blocco di attributi.  
  
-   Se l'attributo deve essere applicato all'intero assembly o al modulo dell'assembly corrente, il blocco di attributi rimane su una riga separata del codice sorgente. Anteporre al nome di attributo all'interno delle parentesi acute \(`< >`\) `Assembly:` o `Module:` e non aggiungere uno spazio o un carattere di sottolineatura dopo il blocco di attributi. Verificare anche che il blocco attributi si trovi all'inizio del file di origine.  
  
## Vedere anche  
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)   
 [Procedura: Interrompere e combinare istruzioni nel codice](../Topic/How%20to:%20Break%20and%20Combine%20Statements%20in%20Code%20\(Visual%20Basic\).md)