---
description: 'Altre informazioni su: classi condivise da MFC e ATL'
title: Classi condivise da MFC e ATL
ms.date: 11/04/2016
helpviewer_keywords:
- shared classes, classes
ms.assetid: ca8b4b6b-744d-430b-b31f-d5b2f17bf210
ms.openlocfilehash: df196f92b7b16742545a7d82320ef4fe8da77fe2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166785"
---
# <a name="classes-shared-by-mfc-and-atl"></a>Classi condivise da MFC e ATL

Nella tabella seguente sono elencate le classi condivise tra MFC e ATL.

|Classe|Descrizione|File di intestazione|
|-----------|-----------------|-----------------|
|[CFileTime](../../atl-mfc-shared/reference/cfiletime-class.md)|Fornisce metodi per la gestione dei valori di data e ora associati a un file.|atltime. h|
|[CFileTimeSpan](../../atl-mfc-shared/reference/cfiletimespan-class.md)|Fornisce metodi per la gestione dei valori di data e ora relativi associati a un file.|atltime. h|
|[CFixedStringT](../../atl-mfc-shared/reference/cfixedstringt-class.md)|Rappresenta un oggetto stringa con un buffer di caratteri fisso.|CStringT. h|
|[CImage](../../atl-mfc-shared/reference/cimage-class.md)|Offre supporto ottimizzato per le bitmap, inclusa la possibilità di caricare e salvare immagini in formati JPEG, GIF, BMP e Portable Network Graphics (PNG).|atlimage. h|
|[COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md)|Incapsula il tipo di dati DATE utilizzato nell'automazione OLE.|ATLComTime. h|
|[COleDateTimeSpan](../../atl-mfc-shared/reference/coledatetimespan-class.md)|Rappresenta un'ora relativa, un intervallo di tempo.|ATLComTime. h|
|[CPoint](../../atl-mfc-shared/reference/cpoint-class.md)|Classe simile alla struttura del [punto](/windows/win32/api/windef/ns-windef-point) di Windows che include anche funzioni membro per modificare `CPoint` le `POINT` strutture e.|atltypes. h|
|[CRect](../../atl-mfc-shared/reference/crect-class.md)|Classe simile a una struttura di Windows [Rect](/windows/win32/api/windef/ns-windef-rect) che include anche funzioni membro per modificare `CRect` gli oggetti e le strutture di Windows `RECT` .|atltypes. h|
|[CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md)|Rappresenta un oggetto `CSimpleStringT`.|atlsimpstr. h|
|[CSize](../../atl-mfc-shared/reference/csize-class.md)|Classe simile alla struttura [size](/windows/win32/api/windef/ns-windef-size) di Windows, che implementa una coordinata o una posizione relativa.|atltypes. h|
|[CStrBufT](../../atl-mfc-shared/reference/cstrbuft-class.md)|Fornisce la pulizia automatica delle risorse per `GetBuffer` e `ReleaseBuffer` chiama su un `CStringT` oggetto esistente.|atlsimpstr. h|
|[CStringData](../../atl-mfc-shared/reference/cstringdata-class.md)|Rappresenta i dati di un oggetto String.|atlsimpstr. h|
|[CStringT](../../atl-mfc-shared/reference/cstringt-class.md)|Rappresenta un oggetto `CStringT`.|CStringT. h (dipendente da MFC) atlstr. h (indipendente da MFC)|
|[CTime](../../atl-mfc-shared/reference/ctime-class.md)|Rappresenta una data e un'ora assolute.|atltime. h|
|[CTimeSpan](../../atl-mfc-shared/reference/ctimespan-class.md)|Intervallo di tempo, che viene archiviato internamente come numero di secondi nell'intervallo di tempo.|atltime. h|
|[IAtlStringMgr](../../atl-mfc-shared/reference/iatlstringmgr-class.md)|Rappresenta l'interfaccia per un `CStringT` gestore della memoria.|atlsimpstr. h|

## <a name="see-also"></a>Vedi anche

[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
