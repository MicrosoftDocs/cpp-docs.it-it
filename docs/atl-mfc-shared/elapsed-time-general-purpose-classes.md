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
ms.openlocfilehash: 5990f6f5db0270c8d24ff35b5c9bbea5b24e6ed7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62236274"
---
# <a name="elapsed-time-general-purpose-classes"></a>Tempo trascorso: Classi generiche

La procedura seguente illustra come calcolare la differenza tra due `CTime` gli oggetti e ottenere un `CTimeSpan` risultato. Usare la `CTime` e `CTimeSpan` oggetti per la quale calcolare il tempo trascorso, come indicato di seguito:

   [!code-cpp[NVC_ATLMFC_Utilities#174](../atl-mfc-shared/codesnippet/cpp/elapsed-time-general-purpose-classes_1.cpp)]

Dopo aver calcolato `elapsedTime`, è possibile usare le funzioni membro di `CTimeSpan` per estrarre i componenti del valore del tempo trascorso.
