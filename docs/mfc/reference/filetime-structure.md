---
title: Struttura FILETIME | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- FILETIME
dev_langs:
- C++
helpviewer_keywords:
- FILETIME structure [MFC]
ms.assetid: e09557e2-b6d7-4dd5-a5b9-6328bca88595
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4377daa0b8a1420e4f1b5afe1f36fa0fd18d581d
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46384598"
---
# <a name="filetime-structure"></a>Struttura FILETIME

Il `FILETIME` struttura è un valore a 64 bit che rappresenta il numero di intervalli di 100 nanosecondi dal 1 ° gennaio 1601.

## <a name="syntax"></a>Sintassi

```
typedef struct _FILETIME {
    DWORD dwLowDateTime;   /* low 32 bits */
    DWORD dwHighDateTime;  /* high 32 bits */
} FILETIME, *PFILETIME, *LPFILETIME;
```

#### <a name="parameters"></a>Parametri

*relativo membro dwLowDateTime*<br/>
Specifica la bassa 32 bit dell'ora del file.

*FILETIME*<br/>
Specifica il valore alto 32 bit dell'ora del file.

## <a name="requirements"></a>Requisiti

**Intestazione:** WINDEF. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Costruttori CTime::](../../atl-mfc-shared/reference/ctime-class.md#ctime)

