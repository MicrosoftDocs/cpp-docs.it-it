---
title: "Errore irreversibile U1056 di NMAKE  | Microsoft Docs"
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
  - "U1056"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "U1056"
ms.assetid: da855728-b69e-413c-83ed-df912126215e
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile U1056 di NMAKE 
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile trovare il processore dei comandi  
  
 Il processore dei comandi non si trova nel percorso specificato nella variabile di ambiente **COMSPEC** o **PATH**.  
  
 Quando si eseguono comandi con NMAKE, COMMAND.COM o CMD.EXE viene utilizzato come processore dei comandi,  cercando innanzitutto il preprocessore dei comandi nel percorso impostato in **COMSPEC**.  Se **COMSPEC** non esiste, la ricerca viene eseguita nelle directory specificate in **PATH**.