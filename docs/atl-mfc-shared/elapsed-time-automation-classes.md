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
ms.openlocfilehash: d8f36c48cf654379e9db3a99c2404732dca30f63
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48860321"
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

[Data e ora: supporto per l'automazione](../atl-mfc-shared/date-and-time-automation-support.md)
