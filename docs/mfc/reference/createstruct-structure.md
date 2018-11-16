---
title: Struttura CREATESTRUCT
ms.date: 11/04/2016
f1_keywords:
- CREATESTRUCT
helpviewer_keywords:
- CREATESTRUCT structure [MFC]
ms.assetid: 028c7b5e-4fdc-48da-a550-d3e4f9e6cc85
ms.openlocfilehash: 1de42ba3e26f7a06918a69358083e68f142836cc
ms.sourcegitcommit: b032daf81cb5fdb1f5a988277ee30201441c4945
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/15/2018
ms.locfileid: "51694699"
---
# <a name="createstruct-structure"></a>Struttura CREATESTRUCT

Il `CREATESTRUCT` struttura definisce i parametri di inizializzazione passati alla routine della finestra di un'applicazione.

## <a name="syntax"></a>Sintassi

```
typedef struct tagCREATESTRUCT {
    LPVOID lpCreateParams;
    HANDLE hInstance;
    HMENU hMenu;
    HWND hwndParent;
    int cy;
    int cx;
    int y;
    int x;
    LONG style;
    LPCSTR lpszName;
    LPCSTR lpszClass;
    DWORD dwExStyle;
} CREATESTRUCT;
```

#### <a name="parameters"></a>Parametri

*lpCreateParams*<br/>
Fa riferimento ai dati da utilizzare per creare la finestra.

*hInstance*<br/>
Identifica l'handle dell'istanza di modulo del modulo che contiene la nuova finestra.

*hMenu*<br/>
Identifica il menu di scelta da utilizzare per la nuova finestra. Se una finestra figlio, contiene l'ID di integer.

*hwndParent*<br/>
Identifica la finestra proprietaria della nuova finestra. Questo membro è NULL se la nuova finestra è una finestra di primo livello.

*CY*<br/>
Specifica l'altezza della nuova finestra.

*CX*<br/>
Specifica la larghezza della nuova finestra.

*y*<br/>
Specifica la coordinata y dell'angolo superiore sinistro della nuova finestra. Le coordinate sono relativi alla finestra padre se la nuova finestra è una finestra figlio. in caso contrario, le coordinate sono relative all'origine dello schermo.

*x*<br/>
Specifica la coordinata x dell'angolo superiore sinistro della nuova finestra. Le coordinate sono relativi alla finestra padre se la nuova finestra è una finestra figlio. in caso contrario, le coordinate sono relative all'origine dello schermo.

*Stile di visualizzazione*<br/>
Specifica la nuova finestra [stile](../../mfc/reference/styles-used-by-mfc.md).

*lpszName*<br/>
Punta a una stringa con terminazione null che specifica il nome della nuova finestra.

*lpszClass*<br/>
Punta a una stringa con terminazione null che specifica nome della classe della finestra Nuovo Windows (un [WNDCLASS](/windows/desktop/api/winuser/ns-winuser-tagwndclassa) struttura; per altre informazioni, vedere il SDK di Windows).

*dwExStyle*<br/>
Specifica la [stile esteso](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles) per la nuova finestra.

## <a name="requirements"></a>Requisiti

**Intestazione:** winuser.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CWnd::OnCreate](../../mfc/reference/cwnd-class.md#oncreate)

