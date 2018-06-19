---
title: 'Tempo trascorso: Classi di automazione | Documenti Microsoft'
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
ms.openlocfilehash: c1abf6274137ae67b159ad43612d24020a0d14e9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32354968"
---
# <a name="elapsed-time-automation-classes"></a>Tempo trascorso: Classi di automazione
Questa procedura viene illustrato come calcolare la differenza tra due `CTime` oggetti e ottenere un `CTimeSpan` risultato.  
  
#### <a name="to-calculate-elapsed-time"></a>Per calcolare il tempo trascorso  
  
1.  Creare due `COleDateTime` oggetti.  
  
2.  Uno dei set di `COleDateTime` oggetti all'ora corrente.  
  
3.  Eseguire alcune attività richiede molto tempo.  
  
4.  Impostare gli altri `COleDateTime` oggetto all'ora corrente.  
  
5.  Richiedere la differenza tra due volte.  
  
     [!code-cpp[NVC_ATLMFC_Utilities#178](../atl-mfc-shared/codesnippet/cpp/elapsed-time-automation-classes_1.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Data e ora: supporto per l'automazione](../atl-mfc-shared/date-and-time-automation-support.md)

