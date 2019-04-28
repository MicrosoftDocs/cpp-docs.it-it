---
title: 'Tempo trascorso: Classi di automazione'
ms.date: 11/04/2016
helpviewer_keywords:
- adding dates
- calculating dates and times
- dates, calculating intervals
- elapsed time, calculating in Automation
- Automation classes, elapsed time
- time, elapsed
- intervals, date and time
- calculations, date and time
ms.assetid: 26b34b37-c10e-4b91-82c3-1dc5ffb5361f
ms.openlocfilehash: d6a77d57a88166354fcb222c0da09690426108e9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62235795"
---
# <a name="elapsed-time-automation-classes"></a>Tempo trascorso: Classi di automazione

Questa procedura viene illustrato come calcolare la differenza tra due `CTime` gli oggetti e ottenere un `CTimeSpan` risultato.

## <a name="to-calculate-elapsed-time"></a>Per la quale calcolare il tempo trascorso

1. Creare due `COleDateTime` oggetti.

1. Impostare una del `COleDateTime` oggetti sull'ora corrente.

1. Eseguire alcune attività che richiedono molto tempo.

1. Impostare gli altri `COleDateTime` oggetto sull'ora corrente.

1. Richiedere la differenza tra i due volte.

   [!code-cpp[NVC_ATLMFC_Utilities#178](../atl-mfc-shared/codesnippet/cpp/elapsed-time-automation-classes_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Data e ora: supporto di automazione](../atl-mfc-shared/date-and-time-automation-support.md)
