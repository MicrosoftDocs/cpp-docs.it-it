---
title: Struttura LINGER
ms.date: 11/04/2016
f1_keywords:
- LINGER
helpviewer_keywords:
- LINGER structure [MFC]
ms.assetid: 1fb1c5bf-a64e-4a6c-89d6-1734e4fdbb1b
ms.openlocfilehash: 78f1a5ce993373ea9e477262f0779515c52dbd8c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50495317"
---
# <a name="linger-structure"></a>Struttura LINGER

Il `LINGER` struttura viene utilizzata per modificare le opzioni relative SO_LINGER e SO_DONTLINGER `CAsyncSocket::GetSockOpt`.

## <a name="syntax"></a>Sintassi

```
struct linger {
    u_short l_onoff;            // option on/off
    u_short l_linger;           // linger time
};
```

## <a name="remarks"></a>Note

Impostazione dell'opzione SO_DONTLINGER impedisce il blocco su una funzione membro `Close` durante l'attesa dell'invio di dati da inviare. Impostando questa opzione equivale all'impostazione SO_LINGER con `l_onoff` impostato su 0.

## <a name="requirements"></a>Requisiti

**Intestazione:** winsock2.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[CAsyncSocket::GetSockOpt](../../mfc/reference/casyncsocket-class.md#getsockopt)<br/>
[CAsyncSocket::SetSockOpt](../../mfc/reference/casyncsocket-class.md#setsockopt)

