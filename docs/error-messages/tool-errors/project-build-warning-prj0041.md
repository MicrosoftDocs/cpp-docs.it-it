---
title: "Avviso di compilazione progetto PRJ0041 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PRJ0041"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0041"
ms.assetid: dc9f4cf9-6bd5-4222-89e8-7802a59bb96b
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso di compilazione progetto PRJ0041
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impossibile trovare la dipendenza mancante "dipendenza" per il file "file".Il progetto può ancora essere compilato, ma risulterà non aggiornato finché non verrà trovato questo file.  
  
 Un file, ad esempio un file di risorse o un file IDL o ODL, contiene un'istruzione include che non è possibile risolvere.  
  
 Poiché le istruzioni del preprocessore, ad esempio \#if, non vengono elaborate dal sistema del progetto, l'istruzione che causa il problema non può fare parte della compilazione.  
  
 Per risolvere il problema, eliminare tutto il codice non necessario nei file RC o aggiungere file segnaposto del nome appropriato.