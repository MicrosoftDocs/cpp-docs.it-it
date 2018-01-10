---
title: Progetto PRJ0003 errore di compilazione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: PRJ0003
dev_langs: C++
helpviewer_keywords: PRJ0003
ms.assetid: fc5a84bb-c6d3-41d6-8dd6-475455820778
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: bcf80eb4d45fe1ae163772b96339c123996ae377
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="project-build-error-prj0003"></a>Errore di compilazione progetto PRJ0003  
  
> Errore durante la generazione '*riga di comando*'.  
  
Il *riga di comando* comando creato dall'input nella **pagine delle proprietà** la finestra di dialogo ha restituito un codice di errore, ma cui viene visualizzata alcuna informazione di **Output** finestra.  

Le possibili cause di questo errore sono:  
  
-   Il progetto dipende dal Server ATL. A partire da Visual Studio 2008, ATL Server non è più incluso come parte di Visual Studio, ma è stata rilasciata come progetto di origine condiviso in CodePlex. Per scaricare il codice sorgente ATL Server e gli strumenti, visitare [libreria Server ATL e gli strumenti](http://go.microsoft.com/fwlink/p/?linkid=81979).  
  
-   Risorse di sistema insufficienti. Chiudere alcune applicazioni per risolvere il problema.  
  
-   Privilegi insufficienti. Verificare di disporre di privilegi di sicurezza.  
  
-   I percorsi eseguibili specificati **directory di VC + +** non includono il percorso per lo strumento che si sta tentando di eseguire. Per informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md)  
  
-   Per i progetti makefile, manca un comando da eseguire su una **della riga di comando di compilazione** o **ricompilare della riga di comando**.  
  
## <a name="see-also"></a>Vedere anche  
 [Errori e avvisi relativi alla compilazione di progetti (PRJxxxx)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)