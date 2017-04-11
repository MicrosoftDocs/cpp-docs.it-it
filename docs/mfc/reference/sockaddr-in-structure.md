---
title: Struttura SOCKADDR_IN | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- SOCKADDR_IN
dev_langs:
- C++
helpviewer_keywords:
- SOCKADDR_IN structure
ms.assetid: e8cd7c34-78bd-4e28-a990-eb3ca070b7a6
caps.latest.revision: 13
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
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: a1283740c0abb0538e5912efa11500c46b45bb9f
ms.lasthandoff: 04/04/2017

---
# <a name="sockaddrin-structure"></a>Struttura SOCKADDR_IN
Nella famiglia di indirizzi di Internet, il `SOCKADDR_IN` struttura viene utilizzata da Windows Sockets per specificare un indirizzo dell'endpoint locale o remoto a cui connettersi a un socket.  
  
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
 *sin_family*  
 Famiglia di indirizzi (deve essere **AF_INET**).  
  
 *sin_port*  
 Porta IP.  
  
 *sin_addr*  
 Indirizzo IP.  
  
 *sin_zero*  
 Spaziatura interna per rendere le stesse dimensioni di struttura `SOCKADDR`.  
  
## <a name="remarks"></a>Note  
 Questa è la forma del `SOCKADDR` struttura specifiche per la famiglia di indirizzi Internet e può essere convertito in `SOCKADDR`.  
  
 Il componente di indirizzo IP di questa struttura è di tipo **IN_ADDR**. Il **IN_ADDR** struttura viene definita nel file di intestazione Windows Socket WINSOCK. H come indicato di seguito:  
  
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
 **Intestazione:** Winsock2. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Struttura SOCKADDR](../../mfc/reference/sockaddr-structure.md)

