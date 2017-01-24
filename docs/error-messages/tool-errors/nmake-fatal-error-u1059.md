---
title: "Errore irreversibile U1059 di NMAKE  | Microsoft Docs"
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
  - "U1059"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1059"
ms.assetid: b21d9198-9c63-40d0-b589-80e17294ce24
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile U1059 di NMAKE 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

errore di sintassi: manca il segno '}' nel dipendente  
  
 Il percorso di ricerca di un dipendente è stato specificato in modo non corretto.  Nel percorso è presente uno spazio oppure è stata omessa la parentesi graffa di chiusura \(**}**\).  
  
 La sintassi corretta per la specifica della directory di un dipendente è  
  
 **dipendente dalle{**   
 ***directory* }**  
  
 dove `directories` specifica uno o più percorsi, ciascuno separato da un segno di punto e virgola \(**;**\).  Non sono consentiti spazi.  
  
 Se tutto o parte del percorso di ricerca è sostituito da una macro, verificare che l'espansione della macro non contenga spazi.