---
title: Modalità di generazione BSCMAKE una. File BSC | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- browse information files (.bsc), building
ms.assetid: 8512b33e-c856-44a2-87bd-01ab10b52a95
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0cdc8a2840e3beb1272b33b2794f70a979684f46
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="how-bscmake-builds-a-bsc-file"></a>Modalità di compilazione di un file bsc in BSCMAKE
BSCMAKE viene compilato o ricompilato un file BSC in modo più efficiente che possibile. Per evitare potenziali problemi, è importante comprendere il processo di compilazione.  
  
 Quando BSCMAKE compila un file di informazioni, tronca i file sbr per lunghezza zero. Durante una compilazione successive dello stesso file, un file SBR di lunghezza zero (o vuoto) non indica a BSCMAKE che nel file SBR era apportano nuovi contributi. Consente che non è necessario un aggiornamento della parte del file e una compilazione incrementale sarà sufficiente BSCMAKE. Durante ogni compilazione (a meno che non è specificata l'opzione /n), BSCMAKE tenta prima di aggiornare il file in modo incrementale utilizzando solo i file sbr che sono stati modificati.  
  
 Ricerca un file BSC con il nome specificato con l'opzione /o BSCMAKE. Se /o non è specificato, viene cercato un file con il nome base del primo file sbr e l'estensione bsc. Se il file esiste, viene eseguita una compilazione incrementale del file di informazioni di visualizzazione con i soli file SBR. Se il file non esiste, viene eseguita una compilazione completa con tutti i file SBR. Come indicato di seguito sono riportate le regole di compilazione:  
  
-   Per una compilazione completa abbia esito positivo, tutti i file SBR specificati devono essere presenti e non devono essere troncati. Se un file SBR è troncato, è necessario ricompilare (per la ricompilazione o l'assemblaggio) prima di eseguire BSCMAKE.  
  
-   Per una compilazione incrementale abbia esito positivo, il file BSC deve esistere. Tutti i file utilizzati, anche se vuoti, deve esistere e deve essere specificato nella riga di comando BSCMAKE. Se si omette un file SBR dalla riga di comando, il suo contributo BSCMAKE rimuove il file.  
  
## <a name="see-also"></a>Vedere anche  
 [Compilazione di un file BSC](../../build/reference/building-a-dot-bsc-file.md)