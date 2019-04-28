---
title: Errore BK1513 di BSCMAKE
ms.date: 11/04/2016
f1_keywords:
- BK1513
helpviewer_keywords:
- BK1513
ms.assetid: 9ba87c09-8d82-4c80-b0cf-a8de63dcf9da
ms.openlocfilehash: c02e9b47b3d32e4d21914188b96913d6dff03127
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62279301"
---
# <a name="bscmake-error-bk1513"></a>Errore BK1513 di BSCMAKE

l'aggiornamento non incrementale richiede tutti i file SBR

Non è possibile usare BSCMAKE per generare un nuovo file di informazioni (BSC) di visualizzazione poiché uno o più file SBR sono troncati. Per trovare i nomi dei file SBR troncati, leggere il [BK4502](../../error-messages/tool-errors/bscmake-warning-bk4502.md) avvisi che accompagnano l'errore.

BSCMAKE consente di aggiornare un file BSC con un file SBR troncato ma non di compilarne uno nuovo. BSCMAKE potrebbe creare un nuovo file BSC per i seguenti motivi:

- File BSC mancante.

- Nome file errato specificato per il file BSC.

- File BSC danneggiato.

Per risolvere il problema, eliminare i file SBR troncati, ricostruire o pulire la soluzione, quindi ricompilare. (Nell'IDE, scegliere **compilare**, **Pulisci soluzione**, quindi scegliere **compilare**, **Ricompila soluzione**.)