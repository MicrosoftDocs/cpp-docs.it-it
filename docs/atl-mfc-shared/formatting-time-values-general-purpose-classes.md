---
title: 'Formattazione dei valori di tempo: Classi generiche'
ms.date: 11/04/2016
helpviewer_keywords:
- dates, calculating intervals
- elapsed time, string representation
- time [C++], formatting
- formatting [C++], time
ms.assetid: 7fcfee24-f874-4a4d-95b3-adc19a0f2df0
ms.openlocfilehash: bab93638d81e8e4e5d6f7ce71bf6a3180fa7f7e5
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57739178"
---
# <a name="formatting-time-values-general-purpose-classes"></a>Formattazione dei valori di tempo: Classi generiche

La procedura seguente viene illustrato come formattare i valori di ora.

#### <a name="to-format-a-string-representation-of-a-time-or-elapsed-time"></a>Per formattare una rappresentazione di stringa di ora o di tempo trascorso

Usare la `Format` funzione di membro da una di [CTime](../atl-mfc-shared/reference/ctime-class.md) o [CTimeSpan](../atl-mfc-shared/reference/ctimespan-class.md) classi per creare un carattere di rappresentazione di stringa dell'ora o il tempo trascorso, come illustrato nell'esempio seguente.

   [!code-cpp[NVC_ATLMFC_Utilities#175](../atl-mfc-shared/codesnippet/cpp/formatting-time-values-general-purpose-classes_1.cpp)]

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Programmazione di tempo in MFC e data generale](../atl-mfc-shared/date-and-time.md)

- [Uso di SYSTEMTIME](../atl-mfc-shared/date-and-time-systemtime-support.md)

- [Supporto di automazione di data e ora programmazione](../atl-mfc-shared/date-and-time-automation-support.md)
