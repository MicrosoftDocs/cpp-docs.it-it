---
title: "2.7 Data Environment | Microsoft Docs"
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
ms.assetid: 74e44b3c-e18c-4773-8e78-cd6c4413ae57
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.7 Data Environment
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questa sezione viene presentata una direttiva e più clausole per il controllo dell'ambiente di dati durante l'esecuzione delle aree parallele, come segue:  
  
-   In **threadprivate** la direttiva \(vedere la sezione\) viene fornita per rendere l'ambito file, l'spazio di nomi\-ambito, o le variabili statiche di ambito blocco locali del thread.  
  
-   Le clausole che possono essere specificate sulle direttive per controllare gli attributi la condivisione delle variabili per l'intera durata di parallelo o costrutti di suddivisione del lavoro sono descritte in [parte 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) nella pagina 25.