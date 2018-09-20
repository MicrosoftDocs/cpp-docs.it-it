---
title: MSG Structure1 | Microsoft Docs
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
ms.openlocfilehash: 2819faa25e2dbd41d6578d60780d13011bb645c0
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46388394"
---
# <a name="msg-structure1"></a>MSG Structure1

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

