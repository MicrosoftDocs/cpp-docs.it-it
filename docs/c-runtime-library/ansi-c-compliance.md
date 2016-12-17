---
title: "Conformit&#224; ANSI C | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "Ansi"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "ANSI [C++], C standard"
  - "compatibilità [C++], ANSI C"
  - "conformità con ANSI C"
  - "convenzioni [C++], estensioni Microsoft"
  - "convenzioni di denominazione delle estensioni Microsoft"
  - "convenzioni di denominazione [C++], libreria Microsoft"
  - "sottolineature"
  - "sottolineature, iniziali"
ms.assetid: 6be271bf-eecf-491a-a928-0ee2dd60e3b9
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Conformit&#224; ANSI C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La convenzione di denominazione per tutti gli identificatori specifici Microsoft nel sistema in fase di esecuzione \(ad esempio funzioni, macro, costanti, variabili e definizioni di tipo\) è conforme con lo standard ANSI.  In questa documentazione, qualsiasi funzione di runtime che segue gli standard ANSI\/ISO C è nota come ANSI compatibile.  Le applicazioni conformi allo standard ANSI devono utilizzare solo queste funzioni compatibili con lo standard ANSI.  
  
 I nomi di funzioni specifiche Microsoft e le variabili globali iniziano con un carattere di sottolineatura.  Questi nomi possono essere sottoposti ad override solo localmente, all'interno dell'ambito del codice.  Ad esempio, quando si includono i file di intestazione di runtime di Microsoft, è ancora possibile eseguire localmente l'override della funzione Microsoft specifica denominata `_open` dichiarando una variabile locale con lo stesso nome.  Tuttavia, non è possibile utilizzare questo nome per una funzione globale o una variabile globale.  
  
 I nomi delle macro specifiche Microsoft e le costanti manifesto iniziano con due caratteri di sottolineatura, o con una singola sottolineatura iniziale immediatamente seguita da una lettera maiuscola.  L'ambito di questi identificatori è assoluto.  Ad esempio, non è possibile utilizzare l'identificatore specifico Microsoft **\_UPPER** per questo motivo.  
  
## Vedere anche  
 [Compatibilità](../c-runtime-library/compatibility.md)