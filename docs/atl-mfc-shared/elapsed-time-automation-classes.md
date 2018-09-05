---
title: 'Tempo trascorso: Classi di automazione | Microsoft Docs'
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
- elapsed time, calculating in Automation
- Automation classes, elapsed time
- time, elapsed
- intervals, date and time
- calculations, date and time
ms.assetid: 26b34b37-c10e-4b91-82c3-1dc5ffb5361f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: dcde08e8ffdb30f9ebf0ae7577bf836e84513a07
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43751677"
---
# <a name="elapsed-time-automation-classes"></a>Tempo trascorso: Classi di automazione

Questa procedura viene illustrato come calcolare la differenza tra due `CTime` gli oggetti e ottenere un `CTimeSpan` risultato.

#### <a name="to-calculate-elapsed-time"></a>Per la quale calcolare il tempo trascorso

1. Creare due `COleDateTime` oggetti.

2. Impostare una del `COleDateTime` oggetti sull'ora corrente.

3. Eseguire alcune attività che richiedono molto tempo.

4. Impostare gli altri `COleDateTime` oggetto sull'ora corrente.

5. Richiedere la differenza tra i due volte.

   [!code-cpp[NVC_ATLMFC_Utilities#178](../atl-mfc-shared/codesnippet/cpp/elapsed-time-automation-classes_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Data e ora: supporto per l'automazione](../atl-mfc-shared/date-and-time-automation-support.md)

