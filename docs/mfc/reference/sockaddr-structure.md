---
title: Struttura SOCKADDR | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- SOCKADDR
dev_langs:
- C++
helpviewer_keywords:
- SOCKADDR structure
ms.assetid: df1ed66a-f4b8-43f8-8db8-8c2533d25f68
caps.latest.revision: 12
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 28984fcc5614a5f901a01ffdeff4ea5f360f63fc
ms.lasthandoff: 02/24/2017

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
 **Intestazione:** Winsock2. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Struttura SOCKADDR_IN](../../mfc/reference/sockaddr-in-structure.md)   
 [CAsyncSocket::Create](../../mfc/reference/casyncsocket-class.md#create)   
 [CSocket::Create](../../mfc/reference/csocket-class.md#create)


