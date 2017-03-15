---
title: "Errore irreversibile U1073 di NMAKE  | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "U1073"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1073"
ms.assetid: d46bf2dd-400a-4802-9db2-f832e1c97f02
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore irreversibile U1073 di NMAKE 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile creare "nomedestinazione"  
  
 La destinazione specificata non esiste e manca un comando da eseguire o una regola di inferenza da applicare.  
  
### Per correggere valutando le seguenti possibili soluzioni  
  
1.  Verificare che il nome di destinazione sia stato digitato correttamente.  
  
2.  Se *nomedestinazione* indica una pseudo\-destinazione, specificarla come destinazione in un altro blocco di descrizione.  
  
3.  Se *nomedestinazione* indica una chiamata di macro, verificare che non definisca una stringa Null.