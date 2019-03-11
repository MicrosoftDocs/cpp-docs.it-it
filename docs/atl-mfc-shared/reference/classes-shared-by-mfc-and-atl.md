---
title: Classi condivise da MFC e ATL
ms.date: 11/04/2016
helpviewer_keywords:
- shared classes, classes
ms.assetid: ca8b4b6b-744d-430b-b31f-d5b2f17bf210
ms.openlocfilehash: 5376a87aac2b82615cd48f80e0e95208b8132bf0
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57750481"
---
# <a name="classes-shared-by-mfc-and-atl"></a>Classi condivise da MFC e ATL

La tabella seguente elenca le classi condivise da MFC e ATL.

|Classe|Descrizione|File di intestazione|
|-----------|-----------------|-----------------|
|[CFileTime](../../atl-mfc-shared/reference/cfiletime-class.md)|Fornisce metodi per gestire i valori di data e ora associati a un file.|atltime.h|
|[CFileTimeSpan](../../atl-mfc-shared/reference/cfiletimespan-class.md)|Fornisce metodi per la gestione dei relativo valori data e ora associati a un file.|atltime.h|
|[CFixedStringT](../../atl-mfc-shared/reference/cfixedstringt-class.md)|Rappresenta un oggetto stringa con un buffer di caratteri predefinito.|cstringt.h|
|[CImage](../../atl-mfc-shared/reference/cimage-class.md)|Fornisce il supporto avanzato per le bitmap, inclusa la possibilità di caricare e salvare le immagini in formato JPEG, GIF, BMP e grafica PNG (Portable Network).|atlimage.h|
|[COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md)|Incapsula il tipo di dati di data utilizzato nell'automazione OLE.|atlcomtime.h|
|[COleDateTimeSpan](../../atl-mfc-shared/reference/coledatetimespan-class.md)|Rappresenta un'ora relativa, un intervallo di tempo.|atlcomtime.h|
|[CPoint](../../atl-mfc-shared/reference/cpoint-class.md)|Una classe simile alla finestra di Windows [punto](/windows/desktop/api/windef/ns-windef-tagpoint) struttura che include anche le funzioni membro per manipolare `CPoint` e `POINT` strutture.|atltypes.h|
|[CRect](../../atl-mfc-shared/reference/crect-class.md)|Una classe simile a un Windows [RECT](/windows/desktop/api/windef/ns-windef-tagrect) struttura che include anche le funzioni membro per manipolare `CRect` Windows e gli oggetti `RECT` strutture.|atltypes.h|
|[CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md)|Rappresenta un `CSimpleStringT` oggetto.|atlsimpstr.h|
|[CSize](../../atl-mfc-shared/reference/csize-class.md)|Una classe simile alla finestra di Windows [dimensioni](/windows/desktop/api/windef/ns-windef-tagsize) struttura che implementa una coordinata o relativa posizione.|atltypes.h|
|[CStrBufT](../../atl-mfc-shared/reference/cstrbuft-class.md)|Fornisce la pulizia automatica delle risorse delle `GetBuffer` e `ReleaseBuffer` chiama un esistente `CStringT` oggetto.|atlsimpstr.h|
|[CStringData](../../atl-mfc-shared/reference/cstringdata-class.md)|Rappresenta i dati di un oggetto stringa.|atlsimpstr.h|
|[CStringT](../../atl-mfc-shared/reference/cstringt-class.md)|Rappresenta un `CStringT` oggetto.|CStringT. h (MFC dipendente) atlstr. h (indipendente dal MFC)|
|[CTime](../../atl-mfc-shared/reference/ctime-class.md)|Rappresenta una data e ora assoluto.|atltime.h|
|[CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md)|Un periodo di tempo, che viene archiviato internamente come il numero di secondi nell'intervallo di tempo.|atltime.h|
|[IAtlStringMgr](../../atl-mfc-shared/reference/iatlstringmgr-class.md)|Rappresenta l'interfaccia per un `CStringT` gestore della memoria.|atlsimpstr.h|

## <a name="see-also"></a>Vedere anche

[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
