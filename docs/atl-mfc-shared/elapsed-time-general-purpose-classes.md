---
title: 'Tempo trascorso: Classi generiche | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ff07c1b26649ffd591bcab9917cf45fa4c67f30a
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43756516"
---
# <a name="elapsed-time-general-purpose-classes"></a>Tempo trascorso: Classi generiche

La procedura seguente illustra come calcolare la differenza tra due `CTime` gli oggetti e ottenere un `CTimeSpan` risultato. Usare la `CTime` e `CTimeSpan` oggetti per la quale calcolare il tempo trascorso, come indicato di seguito:

   [!code-cpp[NVC_ATLMFC_Utilities#174](../atl-mfc-shared/codesnippet/cpp/elapsed-time-general-purpose-classes_1.cpp)]

Dopo aver calcolato `elapsedTime`, è possibile usare le funzioni membro di `CTimeSpan` per estrarre i componenti del valore del tempo trascorso.  

