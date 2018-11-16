---
title: Struttura PAINTSTRUCT
ms.date: 11/04/2016
f1_keywords:
- PAINTSTRUCT
helpviewer_keywords:
- PAINTSTRUCT structure [MFC]
ms.assetid: 81ce4993-3e89-43b2-8c98-7946f1314d24
ms.openlocfilehash: f1b901ef26c61adbedb3bbe56808cd94bdfad30d
ms.sourcegitcommit: b032daf81cb5fdb1f5a988277ee30201441c4945
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/15/2018
ms.locfileid: "51694647"
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
Specifica se lo sfondo deve essere ridisegnato. Non è 0 se l'applicazione deve essere ridisegnata lo sfondo. L'applicazione è responsabile per disegnare lo sfondo se viene creata una classe di finestre Windows senza un pennello di sfondo (vedere la descrizione della `hbrBackground` membro della [WNDCLASS](/windows/desktop/api/winuser/ns-winuser-tagwndclassa) struttura nel SDK di Windows).

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

