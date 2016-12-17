---
title: "Avviso U4004 di NMAKE  | Microsoft Docs"
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
  - "U4004"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U4004"
ms.assetid: 5086bbcb-42d7-4677-a877-1a02202a86a2
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso U4004 di NMAKE 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

troppe regole per la destinazione "nomedestinazione"  
  
 Sono stati specificati più blocchi di descrizione per la destinazione utilizzando come separatore un singolo segno di due punti \(**:**\).  I comandi presenti nel primo blocco di descrizione sono stati eseguiti da NMAKE ma sono stati ignorati i blocchi successivi.  
  
 Per specificare una medesima destinazione in più dipendenze, utilizzare due punti doppi \(`::`\) come separatore in ogni riga di dipendenza.