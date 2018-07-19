---
title: Struttura LINGER | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- LINGER
dev_langs:
- C++
helpviewer_keywords:
- LINGER structure [MFC]
ms.assetid: 1fb1c5bf-a64e-4a6c-89d6-1734e4fdbb1b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 53601afdd562f29ccd4bce9db76811e610940b7a
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37339371"
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
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CAsyncSocket::GetSockOpt](../../mfc/reference/casyncsocket-class.md#getsockopt)   
 [CAsyncSocket::SetSockOpt](../../mfc/reference/casyncsocket-class.md#setsockopt)

