---
title: "Cenni preliminari sulle funzioni | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "flusso di controllo, chiamate di funzione"
  - "funzioni [C++]"
ms.assetid: b6f4637f-02b9-49d8-8601-1f886bd2cfb9
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Cenni preliminari sulle funzioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le funzioni devono disporre di una definizione e devono disporre di una dichiarazione, sebbene una definizione possa servire come dichiarazione se questa viene riportata prima che venga chiamata la funzione.  La definizione di una funzione include il corpo della funzione \(il codice eseguito quando viene chiamata la funzione\).  
  
 Una dichiarazione di funzione stabilisce il nome, il tipo restituito e gli attributi di una funzione definita altrove nel programma.  Una dichiarazione di funzione deve precedere la chiamata alla funzione.  Per questo motivo i file di intestazione contenenti le dichiarazioni per le funzioni di runtime vengono inclusi nel codice prima di una chiamata a una funzione di runtime.  Se la dichiarazione dispone di informazioni sui tipi e sul numero di parametri, la dichiarazione è un prototipo.  Per ulteriori informazioni, vedere [Prototipi di funzione](../c-language/function-prototypes.md).  
  
 Il compilatore utilizza il prototipo per confrontare i tipi di argomenti nelle successive chiamate alla funzione con parametri della funzione e per convertire i tipi degli argomenti nei tipi dei parametri ogni qualvolta è necessario.  
  
 Una chiamata di funzione passa il controllo di esecuzione dalla funzione chiamante alla funzione chiamata.  Gli argomenti, se presenti, vengono passati in base al valore della funzione chiamata.  L'esecuzione di un'istruzione `return` nella funzione chiamata restituisce il controllo ed eventualmente un valore alla funzione chiamante.  
  
## Vedere anche  
 [Funzioni](../c-language/functions-c.md)