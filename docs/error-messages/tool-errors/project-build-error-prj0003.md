---
title: "Errore di compilazione progetto PRJ0003 | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "PRJ0003"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PRJ0003"
ms.assetid: fc5a84bb-c6d3-41d6-8dd6-475455820778
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore di compilazione progetto PRJ0003
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Errore durante la generazione di "riga di comando".  
  
 Il comando ***riga di comando***, creato dall'input dell'utente nella finestra di dialogo **Pagine delle proprietà**, ha restituito un codice di errore, ma nella finestra di output non verranno visualizzate informazioni.  
  
 Di seguito sono indicate alcune delle possibili cause dell'errore:  
  
-   Il progetto dipende da ATL Server.  A partire da [!INCLUDE[vs_orcas_long](../../atl/reference/includes/vs_orcas_long_md.md)], ATL Server non è più incluso come parte di Visual Studio, ma è stato rilasciato come un progetto sorgente condiviso in CodePlex.  Per scaricare il codice sorgente e gli strumenti ATL Server, passare da .  
  
-   Risorse di sistema insufficienti.  Per risolvere il problema, chiudere alcune applicazioni.  
  
-   Privilegi di sicurezza insufficienti.  Verificare la disponibilità di privilegi di sicurezza sufficienti.  
  
-   I percorsi eseguibili specificati in [Directory di VC\+\+](http://msdn.microsoft.com/it-it/e027448b-c811-4c3d-8531-4325ad3f6e02) non includono il percorso per lo strumento che si tenta di eseguire.  
  
-   Per i progetti makefile, manca un comando da eseguire su **Riga di comando per la compilazione** o **Riga di comando per la ricompilazione**.  
  
## Vedere anche  
 [Errori e avvisi relativi alla compilazione di progetti \(PRJxxxx\)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)