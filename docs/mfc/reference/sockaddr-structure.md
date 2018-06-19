---
title: Struttura SOCKADDR | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- SOCKADDR
dev_langs:
- C++
helpviewer_keywords:
- SOCKADDR structure [MFC]
ms.assetid: df1ed66a-f4b8-43f8-8db8-8c2533d25f68
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f468a0a68dcfedab3b92deea492b48f7876c1610
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33371608"
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
 *sa_family*  
 Famiglia di indirizzi socket.  
  
 *sa_data*  
 Dimensione massima di tutte le differenti strutture di indirizzi socket.  
  
## <a name="remarks"></a>Note  
 Il kit dello sviluppatore Microsoft TCP/IP Sockets supporta solo i domini di indirizzi Internet. Per compilare effettivamente i valori di ciascuna parte di un indirizzo, utilizzare la struttura dati `SOCKADDR_IN`, che è specifica per questo formato di indirizzo. Le strutture di dati `SOCKADDR` e `SOCKADDR_IN` sono della stessa dimensione. È sufficiente eseguire il cast per passare tra i due tipi di struttura.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** Winsock2  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Struttura SOCKADDR_IN](../../mfc/reference/sockaddr-in-structure.md)   
 [CAsyncSocket::Create](../../mfc/reference/casyncsocket-class.md#create)   
 [CSocket::Create](../../mfc/reference/csocket-class.md#create)

