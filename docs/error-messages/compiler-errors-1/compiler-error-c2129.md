---
title: "Errore del compilatore C2129 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2129"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2129"
ms.assetid: 21a8223e-1d22-4baa-9ca1-922b7f751dd0
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2129
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

funzione static 'funzione' dichiarata ma non definita  
  
 È stato fatto riferimento in avanti a una funzione `static` che non viene mai definita.  
  
 Una funzione `static` deve essere definita entro l'ambito del file.  Se la funzione è definita in un altro file, deve essere dichiarata `extern`.