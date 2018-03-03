---
title: 'Tempo trascorso: Classi di automazione | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0e4cf7fef17499910d9664ab26fa1b07438e7900
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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

