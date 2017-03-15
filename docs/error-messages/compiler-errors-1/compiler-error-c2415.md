---
title: "Errore del compilatore C2415 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2415"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2415"
ms.assetid: f225c913-2bea-46b1-b096-3d358ac94a15
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2415
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

tipo di operando improprio  
  
 Il codice operativo non utilizza operandi di questo tipo.  
  
### Possibili cause  
  
1.  Il codice operativo non supporta il numero di operandi utilizzati.  Consultare un manuale di riferimento del linguaggio assembly per determinare il numero corretto di operandi.  
  
2.  Un processore più recente supporta l'istruzione con tipi aggiuntivi.  Impostare l'opzione [\/arch \(Architettura minima della CPU\)](../../build/reference/arch-minimum-cpu-architecture.md) in modo che utilizzi il processore più aggiornato.