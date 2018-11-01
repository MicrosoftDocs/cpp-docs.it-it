---
title: Struttura SOCKADDR_IN
ms.date: 11/04/2016
f1_keywords:
- SOCKADDR_IN
helpviewer_keywords:
- SOCKADDR_IN structure [MFC]
ms.assetid: e8cd7c34-78bd-4e28-a990-eb3ca070b7a6
ms.openlocfilehash: 22d02b2e3c6fd7151e59cad0f3233539c04a16e0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50431226"
---
# <a name="sockaddrin-structure"></a>Struttura SOCKADDR_IN

Nella famiglia degli indirizzi di Internet, il `SOCKADDR_IN` struttura viene utilizzata da Windows Sockets per specificare un indirizzo dell'endpoint locale o remoto a cui connettere un socket.

## <a name="syntax"></a>Sintassi

```
struct sockaddr_in{
    short sin_family;
    unsigned short sin_port;
struct in_addr sin_addr;
    char sin_zero[8];
};
```

#### <a name="parameters"></a>Parametri

*sin_family*<br/>
Famiglia di indirizzi (deve essere AF_INET).

*sin_port*<br/>
Porta IP.

*sin_addr*<br/>
Indirizzo IP.

*sin_zero*<br/>
Riempimento per impostare la struttura delle stesse dimensioni `SOCKADDR`.

## <a name="remarks"></a>Note

Si tratta del formato del `SOCKADDR` strutturare specifiche per la famiglia di indirizzi Internet e può essere convertito in `SOCKADDR`.

Il componente indirizzo IP di questa struttura è di tipo `IN_ADDR`. Il `IN_ADDR` struttura è definita nel file di intestazione di Windows Socket WINSOCK. H come segue:

```
struct in_addr {
    union {
        struct {
            unsigned char s_b1, s_b2, s_b3, s_b4;
        } S_un_b;
        struct {
            unsigned short s_w1, s_w2;
        } S_un_w;
        unsigned long S_addr;
    } S_un;
};
```

## <a name="requirements"></a>Requisiti

**Intestazione:** winsock2.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Struttura SOCKADDR](../../mfc/reference/sockaddr-structure.md)
