---
title: "Errore irreversibile U1100 di NMAKE  | Microsoft Docs"
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
  - "U1100"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1100"
ms.assetid: c71910a7-c581-4d9c-a38c-d2d557d56289
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile U1100 di NMAKE 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la macro "nomemacro" non è valida nel contesto della regola batch "regola"  
  
 NMAKE genera questo errore quando il blocco di comandi di una regola in modalità batch fa riferimento, direttamente o indirettamente, a una macro di file speciale diversa da $\<.  
  
 $\< è l'unica macro valida per le regole in modalità batch.