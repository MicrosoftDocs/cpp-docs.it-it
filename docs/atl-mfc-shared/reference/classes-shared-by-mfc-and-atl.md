---
title: Classi condivise da MFC e ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- shared classes, classes
ms.assetid: ca8b4b6b-744d-430b-b31f-d5b2f17bf210
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 566164f40f8795c8402b04c9c25e13dda036961d
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43765437"
---
# <a name="classes-shared-by-mfc-and-atl"></a>Classi condivise da MFC e ATL

La tabella seguente elenca le classi condivise da MFC e ATL.

|Classe|Descrizione|File di intestazione|
|-----------|-----------------|-----------------|
|[CFileTime](../../atl-mfc-shared/reference/cfiletime-class.md)|Fornisce metodi per gestire i valori di data e ora associati a un file.|atltime. h|
|[CFileTimeSpan](../../atl-mfc-shared/reference/cfiletimespan-class.md)|Fornisce metodi per la gestione dei relativo valori data e ora associati a un file.|atltime. h|
|[CFixedStringT](../../atl-mfc-shared/reference/cfixedstringt-class.md)|Rappresenta un oggetto stringa con un buffer di caratteri predefinito.|cstringt.h|
|[CImage](../../atl-mfc-shared/reference/cimage-class.md)|Fornisce il supporto avanzato per le bitmap, inclusa la possibilità di caricare e salvare le immagini in formato JPEG, GIF, BMP e grafica PNG (Portable Network).|atlimage.h|
|[COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md)|Incapsula il tipo di dati di data utilizzato nell'automazione OLE.|atlcomtime|
|[COleDateTimeSpan](../../atl-mfc-shared/reference/coledatetimespan-class.md)|Rappresenta un'ora relativa, un intervallo di tempo.|atlcomtime|
|[CPoint](../../atl-mfc-shared/reference/cpoint-class.md)|Una classe simile alla finestra di Windows [punto](../../mfc/reference/point-structure1.md) struttura che include anche le funzioni membro per manipolare `CPoint` e `POINT` strutture.|atltypes. h|
|[CRect](../../atl-mfc-shared/reference/crect-class.md)|Una classe simile a un Windows [RECT](../../mfc/reference/rect-structure1.md) struttura che include anche le funzioni membro per manipolare `CRect` Windows e gli oggetti `RECT` strutture.|atltypes. h|
|[CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md)|Rappresenta un `CSimpleStringT` oggetto.|atlsimpstr.h|
|[CSize](../../atl-mfc-shared/reference/csize-class.md)|Una classe simile alla struttura della dimensione di Windows, che implementa una coordinata o relativa posizione.|atltypes. h|
|[CStrBufT](../../atl-mfc-shared/reference/cstrbuft-class.md)|Fornisce la pulizia automatica delle risorse delle `GetBuffer` e `ReleaseBuffer` chiama un esistente `CStringT` oggetto.|atlsimpstr.h|
|[CStringData](../../atl-mfc-shared/reference/cstringdata-class.md)|Rappresenta i dati di un oggetto stringa.|atlsimpstr.h|
|[CStringT](../../atl-mfc-shared/reference/cstringt-class.md)|Rappresenta un `CStringT` oggetto.|CStringT. h (MFC dipendente) atlstr. h (indipendente dal MFC)|
|[CTime](../../atl-mfc-shared/reference/ctime-class.md)|Rappresenta una data e ora assoluto.|atltime. h|
|[CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md)|Un periodo di tempo, che viene archiviato internamente come il numero di secondi nell'intervallo di tempo.|atltime. h|
|[IAtlStringMgr](../../atl-mfc-shared/reference/iatlstringmgr-class.md)|Rappresenta l'interfaccia per un `CStringT` gestore della memoria.|atlsimpstr.h|

## <a name="see-also"></a>Vedere anche

[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)

