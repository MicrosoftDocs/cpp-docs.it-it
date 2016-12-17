---
title: "Errore irreversibile U1035 di NMAKE  | Microsoft Docs"
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
  - "U1035"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1035"
ms.assetid: 68f0cc59-007e-4109-ac30-7ac4ac447e6d
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile U1035 di NMAKE 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Errore di sintassi: è previsto il separatore ":" o "\=".  
  
 È prevista la presenza di un segno di due punti \(**:**\) o di uguale \(**\=**\).  
  
### Possibili cause  
  
1.  Una destinazione non è seguita da un segno di due punti.  
  
2.  Una destinazione di una sola lettera è seguita da un segno di due punti non preceduto da uno spazio, ad esempio a:,  e viene interpretata come una lettera di unità da NMAKE.  
  
3.  Una regola di inferenza non è seguita da un segno di due punti.  
  
4.  Una definizione di macro non è seguita da un segno di uguale.  
  
5.  Un carattere segue una barra rovesciata \(**\\**\) che dovrebbe far continuare un comando alla riga successiva.  
  
6.  È presente una stringa che non segue alcuna regola di sintassi di NMAKE.  
  
7.  Il makefile è stato formattato da un elaboratore di testi.