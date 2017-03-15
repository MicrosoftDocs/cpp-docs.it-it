---
title: "Errore del compilatore C2439 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2439"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2439"
ms.assetid: 3c5dbe5c-b7d3-4bb0-8619-92f6e280461e
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C2439
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': impossibile inizializzare il membro  
  
 Non è possibile inizializzare il membro di una classe, una struttura o un'unione.  
  
### Possibili cause  
  
1.  Tentativo di inizializzare una struttura o una classe base indiretta.  
  
2.  Tentativo di inizializzare un membro ereditato di una classe o struttura.  Un membro ereditato deve essere inizializzato dal costruttore della classe o della struttura.