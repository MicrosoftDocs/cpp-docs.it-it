---
title: "Avviso degli strumenti del linker LNK4102 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4102"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4102"
ms.assetid: bfd1b17e-05c7-4bc2-80d6-2888b1a425b2
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4102
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

esportazione del distruttore di eliminazione 'nome'; l'immagine potrebbe non essere eseguita correttamente  
  
 Si è tentato di esportare un distruttore di eliminazione.  L'eliminazione risultante potrebbe avere luogo oltre i limiti di una DLL e far sì che un processo liberi memoria di cui non è proprietario.  Assicurarsi che il simbolo specificato non sia incluso nel file def e che non sia elencato come argomento dell'opzione **\/IMPORT** o **\/EXPORT** nella riga di comando del linker.  
  
 Se si ricompila la libreria di runtime del linguaggio C, è possibile ignorare questo messaggio.