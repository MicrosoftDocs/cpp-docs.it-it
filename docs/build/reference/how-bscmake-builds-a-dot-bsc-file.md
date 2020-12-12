---
description: 'Altre informazioni su: come BSCMAKE compila un. File BSC'
title: Modalità di compilazione di un file bsc in BSCMAKE
ms.date: 11/04/2016
helpviewer_keywords:
- browse information files (.bsc), building
ms.assetid: 8512b33e-c856-44a2-87bd-01ab10b52a95
ms.openlocfilehash: 6d468f365f7f42be2eb393e53d72053b682ec65a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97191381"
---
# <a name="how-bscmake-builds-a-bsc-file"></a>Modalità di compilazione di un file bsc in BSCMAKE

BSCMAKE compila o ricompila un file BSC nel modo più efficiente possibile. Per evitare potenziali problemi, è importante comprendere il processo di compilazione.

Quando BSCMAKE compila un file di informazioni di visualizzazione, tronca i file SBR a lunghezza zero. Durante una compilazione successiva dello stesso file, un file SBR di lunghezza zero (o vuoto) indica a BSCMAKE che il file SBR non ha alcun nuovo contributo da apportare. Consente a BSCMAKE di tenere presente che non è necessario un aggiornamento della parte del file e che sarà sufficiente una compilazione incrementale. Durante ogni compilazione (a meno che non venga specificata l'opzione/n), BSCMAKE tenta prima di tutto di aggiornare il file in modo incrementale usando solo i file SBR che sono stati modificati.

BSCMAKE Cerca un file BSC con il nome specificato con l'opzione/o. Se/o non è specificato, BSCMAKE Cerca un file con il nome di base del primo file SBR e un'estensione BSC. Se il file esiste, BSCMAKE esegue una compilazione incrementale del file di informazioni di visualizzazione utilizzando solo i file SBR che contribuiscono. Se il file non esiste, BSCMAKE esegue una compilazione completa usando tutti i file SBR. Di seguito sono riportate le regole per le compilazioni:

- Affinché una compilazione completa abbia esito positivo, tutti i file sbr specificati devono esistere e non devono essere troncati. Se un file SBR viene troncato, è necessario ricompilarlo (ricompilando o assemblando) prima di eseguire BSCMAKE.

- Affinché una compilazione incrementale abbia esito positivo, è necessario che sia presente il file BSC. Tutti i file SBR che contribuiscono, anche file vuoti, devono esistere e devono essere specificati nella riga di comando di BSCMAKE. Se si omette un file SBR dalla riga di comando, BSCMAKE rimuove il proprio contributo dal file.

## <a name="see-also"></a>Vedi anche

[Compilazione di un oggetto. File BSC](building-a-dot-bsc-file.md)
