---
title: 'Tempo trascorso: Classi di uso generale | Documenti Microsoft'
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
ms.openlocfilehash: ff7ef11bb20124a05e2e85c408ce27de8f982546
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32354266"
---
# <a name="elapsed-time-general-purpose-classes"></a>Tempo trascorso: Classi generiche
La procedura seguente viene mostrato come calcolare la differenza tra due `CTime` oggetti e ottenere un `CTimeSpan` risultato.  
  
#### <a name="to-calculate-elapsed-time"></a>Per calcolare il tempo trascorso  
  
1.  Utilizzare il `CTime` e `CTimeSpan` oggetti per calcolare il tempo trascorso, come indicato di seguito:  
  
     [!code-cpp[NVC_ATLMFC_Utilities#174](../atl-mfc-shared/codesnippet/cpp/elapsed-time-general-purpose-classes_1.cpp)]  
  
     Dopo aver calcolato `elapsedTime`, è possibile utilizzare le funzioni membro di `CTimeSpan` di estrarre i componenti del valore di tempo trascorso.  
  
## <a name="see-also"></a>Vedere anche  
 [Data e ora: classi generiche](../atl-mfc-shared/date-and-time-general-purpose-classes.md)

