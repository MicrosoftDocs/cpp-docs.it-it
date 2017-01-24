---
title: "Errore irreversibile U1087 di NMAKE  | Microsoft Docs"
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
  - "U1087"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1087"
ms.assetid: 5236ab54-e117-484d-99c3-852b061fd3d0
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile U1087 di NMAKE 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile utilizzare i dipendenti : e :: per la stessa destinazione  
  
 Una destinazione non può essere specificata contemporaneamente in una dipendenza con i due punti singoli \(**:**\) e in una con i due punti doppi \(`::`\).  
  
 Per specificare una destinazione in più blocchi di descrizione, utilizzare `::` in ciascuna riga di dipendenza.