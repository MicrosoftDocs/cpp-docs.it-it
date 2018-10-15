---
title: Struttura MSG | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- MSG
dev_langs:
- C++
helpviewer_keywords:
- MSG structure [MFC]
ms.assetid: dc166d27-9423-41f1-9599-5ba76d2f0138
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2b2f58af3bcf3eef524b95d25579e5bc233f9108
ms.sourcegitcommit: 3f4e92266737ecb70507871e87dc8e2965ad7e04
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/15/2018
ms.locfileid: "49334531"
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

