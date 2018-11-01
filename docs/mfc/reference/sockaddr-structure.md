---
title: Struttura SOCKADDR
ms.date: 11/04/2016
f1_keywords:
- SOCKADDR
helpviewer_keywords:
- SOCKADDR structure [MFC]
ms.assetid: df1ed66a-f4b8-43f8-8db8-8c2533d25f68
ms.openlocfilehash: 68d5261c6520b5baee8495b72a0b9d234a35a185
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50543845"
---
# <a name="sockaddr-structure"></a>Struttura SOCKADDR

La struttura `SOCKADDR` viene utilizzata per l'archiviazione di un indirizzo IP per un computer che fa parte di una comunicazione Windows Sockets.

## <a name="syntax"></a>Sintassi

```
struct sockaddr {
    unsigned short sa_family;
    char sa_data[14];
};
```

#### <a name="parameters"></a>Parametri

*sa_family*<br/>
Famiglia di indirizzi socket.

*sa_data*<br/>
Dimensione massima di tutte le differenti strutture di indirizzi socket.

## <a name="remarks"></a>Note

Il kit dello sviluppatore Microsoft TCP/IP Sockets supporta solo i domini di indirizzi Internet. Per compilare effettivamente i valori di ciascuna parte di un indirizzo, utilizzare la struttura dati `SOCKADDR_IN`, che è specifica per questo formato di indirizzo. Le strutture di dati `SOCKADDR` e `SOCKADDR_IN` sono della stessa dimensione. È sufficiente eseguire il cast per passare tra i due tipi di struttura.

## <a name="requirements"></a>Requisiti

**Intestazione:** winsock2.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Struttura SOCKADDR_IN](../../mfc/reference/sockaddr-in-structure.md)<br/>
[CAsyncSocket::Create](../../mfc/reference/casyncsocket-class.md#create)<br/>
[CSocket::Create](../../mfc/reference/csocket-class.md#create)

