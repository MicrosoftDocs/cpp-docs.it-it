---
title: 'Tempo trascorso: Classi generiche'
ms.date: 11/04/2016
helpviewer_keywords:
- adding dates
- calculating dates and times
- dates, calculating intervals
- elapsed time, calculating
- elapsed time
- time, elapsed
- intervals, date and time
- calculations, date and time
ms.assetid: e5c5d3d2-ce1d-409e-875c-98848434e716
ms.openlocfilehash: ebaf77b34411cd55cb3a028bcce9109613b63ed9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50676742"
---
# <a name="elapsed-time-general-purpose-classes"></a>Tempo trascorso: Classi generiche

La procedura seguente illustra come calcolare la differenza tra due `CTime` gli oggetti e ottenere un `CTimeSpan` risultato. Usare la `CTime` e `CTimeSpan` oggetti per la quale calcolare il tempo trascorso, come indicato di seguito:

   [!code-cpp[NVC_ATLMFC_Utilities#174](../atl-mfc-shared/codesnippet/cpp/elapsed-time-general-purpose-classes_1.cpp)]

Dopo aver calcolato `elapsedTime`, è possibile usare le funzioni membro di `CTimeSpan` per estrarre i componenti del valore del tempo trascorso.

