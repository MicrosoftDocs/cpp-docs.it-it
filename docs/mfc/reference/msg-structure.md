---
title: Struttura MSG
ms.date: 11/04/2016
f1_keywords:
- MSG
helpviewer_keywords:
- MSG structure [MFC]
ms.assetid: dc166d27-9423-41f1-9599-5ba76d2f0138
ms.openlocfilehash: 1a953f8d0d685e25beedd2d401e227c934414208
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50499812"
---
# <a name="msg-structure"></a>Struttura MSG

Il `MSG` struttura contiene informazioni sul messaggio dalla coda di messaggi del thread.

## <a name="syntax"></a>Sintassi

```
typedef struct tagMSG {     // msg
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
} MSG;
```

#### <a name="parameters"></a>Parametri

*HWND*<br/>
Identifica la finestra la cui routine riceve il messaggio.

*message*<br/>
Specifica il numero di messaggi.

*wParam*<br/>
Specifica informazioni aggiuntive sul messaggio. Il significato esatto dipende dal valore della `message` membro.

*lParam*<br/>
Specifica informazioni aggiuntive sul messaggio. Il significato esatto dipende dal valore della `message` membro.

*time*<br/>
Specifica l'ora in cui è stato registrato il messaggio.

*pt*<br/>
Specifica la posizione del cursore, nelle coordinate dello schermo, quando il messaggio è stato inserito.

## <a name="requirements"></a>Requisiti

**Intestazione:** winuser.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)

