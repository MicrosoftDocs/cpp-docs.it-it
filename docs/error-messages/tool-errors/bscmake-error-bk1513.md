---
description: 'Altre informazioni su: BSCMAKE Error BK1513'
title: Errore BK1513 di BSCMAKE
ms.date: 11/04/2016
f1_keywords:
- BK1513
helpviewer_keywords:
- BK1513
ms.assetid: 9ba87c09-8d82-4c80-b0cf-a8de63dcf9da
ms.openlocfilehash: bdf26e3268f98e5ab41ef27bbeaa3734a001671a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97238089"
---
# <a name="bscmake-error-bk1513"></a>Errore BK1513 di BSCMAKE

l'aggiornamento non incrementale richiede tutti i file SBR

Non è possibile usare BSCMAKE per generare un nuovo file di informazioni (BSC) di visualizzazione poiché uno o più file SBR sono troncati. Per trovare i nomi dei file SBR troncati, leggere gli avvisi [BK4502](../../error-messages/tool-errors/bscmake-warning-bk4502.md) che accompagnano questo errore.

BSCMAKE consente di aggiornare un file BSC con un file SBR troncato ma non di compilarne uno nuovo. BSCMAKE potrebbe creare un nuovo file BSC per i seguenti motivi:

- File BSC mancante.

- Nome file errato specificato per il file BSC.

- File BSC danneggiato.

Per risolvere il problema, eliminare i file SBR troncati, ricostruire o pulire la soluzione, quindi ricompilare. Nell'IDE scegliere **Compila**, **Pulisci soluzione**, quindi scegliere **Compila**, **Ricompila soluzione**.
