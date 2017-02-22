---
title: "Errore irreversibile C1853 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1853"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1853"
ms.assetid: ceb9b4a5-92bf-4573-8a9f-3109cc7743ce
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore irreversibile C1853
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il file di intestazione precompilata 'nomefile' appartiene a una precedente versione del compilatore oppure l'intestazione precompilata è C\+\+ e si sta utilizzando C \(o viceversa\)  
  
 Possibili cause:  
  
-   L'intestazione precompilata è stata creata con una versione precedente del compilatore.  Provare a compilare nuovamente l'intestazione con il compilatore corrente.  
  
-   L'intestazione precompilata è C\+\+ e viene utilizzata da C.  Provare a compilare nuovamente l'intestazione in modo da poter utilizzarla in C specificando una delle opzioni del compilatore [\/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) o impostando il suffisso del file di origine su "c".  Per ulteriori informazioni, vedere [Precompilazione del codice automatica e manuale](../../build/reference/two-choices-for-precompiling-code.md).