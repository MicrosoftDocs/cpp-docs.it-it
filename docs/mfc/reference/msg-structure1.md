---
title: MSG Structure1 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- MSG
dev_langs:
- C++
helpviewer_keywords:
- MSG structure [MFC]
ms.assetid: dc166d27-9423-41f1-9599-5ba76d2f0138
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b504f116dcbff7fa45e741ff9715070ee0c74583
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="msg-structure1"></a>MSG Structure1
Il `MSG` struttura contiene informazioni sul messaggio dalla coda di messaggi di un thread.  
  
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
 *HWND*  
 Identifica la finestra cui routine riceve il messaggio.  
  
 `message`  
 Specifica il numero di messaggio.  
  
 `wParam`  
 Specifica informazioni aggiuntive sul messaggio. Il significato esatto dipende dal valore del **messaggio** membro.  
  
 `lParam`  
 Specifica informazioni aggiuntive sul messaggio. Il significato esatto dipende dal valore del **messaggio** membro.  
  
 `time`  
 Specifica l'ora in cui il messaggio è stato registrato.  
  
 `pt`  
 Specifica la posizione del cursore, nelle coordinate dello schermo, quando il messaggio è stato registrato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** winuser.h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)

