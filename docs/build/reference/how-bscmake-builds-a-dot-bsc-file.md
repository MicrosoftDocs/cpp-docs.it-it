---
title: Modalità di compilazione di un file bsc in BSCMAKE
ms.date: 11/04/2016
helpviewer_keywords:
- browse information files (.bsc), building
ms.assetid: 8512b33e-c856-44a2-87bd-01ab10b52a95
ms.openlocfilehash: 6f721641e021396f112bfe4c075ca0f524100d1f
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57821235"
---
# <a name="how-bscmake-builds-a-bsc-file"></a>Modalità di compilazione di un file bsc in BSCMAKE

BSCMAKE compila o ricompila un file BSC in modo più efficiente che possibile. Per evitare potenziali problemi, è importante comprendere il processo di compilazione.

Quando BSCMAKE compila un file di informazioni, ma verrà troncato i file SBR lunghezza zero. Durante una compilazione successive dello stesso file, un file SBR a lunghezza zero (o vuoto) non indica a BSCMAKE che il file SBR apportano contributi nuovo. Si indica BSCMAKE che non è richiesto un aggiornamento di tale parte del file e una compilazione incrementale sarà sufficiente. Durante ogni compilazione (a meno che non è specificata l'opzione /n), BSCMAKE innanzitutto tenta di aggiornare il file in modo incrementale usando solo i file sbr che sono stati modificati.

Ricerca un file BSC con il nome specificato con l'opzione /o BSCMAKE. Se non viene specificato /o, BSCMAKE Cerca un file con il nome base del primo file sbr e un'estensione bsc. Se il file esiste, viene eseguita una compilazione incrementale del file di informazioni di visualizzazione con i soli file SBR. Se il file non esiste, viene eseguita una compilazione completa usando tutti i file SBR. Le regole per le compilazioni sono come segue:

- Per una compilazione completa abbia esito positivo, tutti i file SBR specificati devono essere presente e non devono essere troncati. Se un file SBR troncati, è necessario ricompilare (per la ricompilazione o l'assemblaggio) prima di eseguire BSCMAKE.

- Per una compilazione incrementale abbia esito positivo, il file con estensione bsc deve esistere. Tutti i file SBR partecipanti, anche i file vuoti, deve esistere e deve essere specificato nella riga di comando BSCMAKE. Se si omette un file SBR dalla riga di comando, il suo contributo BSCMAKE rimuove dal file.

## <a name="see-also"></a>Vedere anche

[Compilazione di un file BSC](building-a-dot-bsc-file.md)
