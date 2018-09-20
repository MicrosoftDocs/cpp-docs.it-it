---
title: Struttura PAINTSTRUCT | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- PAINTSTRUCT
dev_langs:
- C++
helpviewer_keywords:
- PAINTSTRUCT structure [MFC]
ms.assetid: 81ce4993-3e89-43b2-8c98-7946f1314d24
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 531dbc3c0e9b609aeaf5d9179491aa0fb3990363
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46382921"
---
# <a name="paintstruct-structure"></a>Struttura PAINTSTRUCT

Il `PAINTSTRUCT` struttura contiene informazioni che possono essere utilizzate per disegnare l'area client di una finestra.

## <a name="syntax"></a>Sintassi

```
typedef struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[16];
} PAINTSTRUCT;
```

#### <a name="parameters"></a>Parametri

*HDC*<br/>
Identifica il contesto di visualizzazione da utilizzare per il disegno.

*fErase*<br/>
Specifica se lo sfondo deve essere ridisegnato. Non è 0 se l'applicazione deve essere ridisegnata lo sfondo. L'applicazione è responsabile per disegnare lo sfondo se viene creata una classe di finestre Windows senza un pennello di sfondo (vedere la descrizione della `hbrBackground` membro della [WNDCLASS](https://msdn.microsoft.com/library/windows/desktop/ms633576) struttura nel SDK di Windows).

*rcPaint*<br/>
Specifica l'angolo superiore sinistro e inferiore destro angoli del rettangolo in cui viene richiesto il disegno.

*fRestore*<br/>
Membro riservato. Viene usato internamente da Windows.

*fIncUpdate*<br/>
Membro riservato. Viene usato internamente da Windows.

*rgbReserved [16]*<br/>
Membro riservato. Riservato blocco di memoria usata internamente da Windows.

## <a name="requirements"></a>Requisiti

**Intestazione:** winuser.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CPaintDC::m_ps](../../mfc/reference/cpaintdc-class.md#m_ps)

