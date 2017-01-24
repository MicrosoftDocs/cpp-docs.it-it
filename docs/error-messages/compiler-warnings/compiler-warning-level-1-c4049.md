---
title: "Avviso del compilatore (livello 1) C4049 | Microsoft Docs"
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
  - "C4049"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4049"
ms.assetid: d11c1870-bcfc-4d71-8945-b87ec6ec3514
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4049
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

limite del compilatore: termine emissione numeri di riga  
  
 Il file contiene più di 16.777.215 \(2<sup>24</sup>\-1\) righe di codice sorgente.  La numerazione viene interrotta a 16.777.215.  
  
 Per il codice successivo alla riga 16.777.215:  
  
-   Nell'immagine non saranno presenti informazioni di debug per i numeri di riga.  
  
-   È possibile che alcuni messaggi di diagnostica vengano visualizzati con numeri di riga errati.  
  
-   È possibile che nei file di listato asm \(\/FAs\) i numeri di riga siano errati.