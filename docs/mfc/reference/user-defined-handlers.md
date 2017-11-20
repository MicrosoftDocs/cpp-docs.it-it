---
title: Gestori definiti dall'utente | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.mfc.handlers
dev_langs: C++
helpviewer_keywords:
- ON_REGISTERED_MESSAGE macro [MFC]
- ON_MESSAGE macro [MFC]
- user-defined handlers [MFC]
ms.assetid: 99478294-bef0-4ba7-a369-25a6abdcdb62
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: dcfc7849aae5b9377365b4dc088fc0ecdd227a83
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="user-defined-handlers"></a>Gestori definiti dall'utente
Le voci della mappa seguenti corrispondono ai prototipi di funzione.  
  
|Voce della mappa|Prototipo di funzione|  
|---------------|------------------------|  
|ON_MESSAGE ( \<messaggio >, \<memberFxn >)|afx_msg LRESULT memberFxn (WPARAM, LPARAM);|  
|ON_REGISTERED_MESSAGE ( \<nMessageVariable >, \<memberFxn >)|afx_msg LRESULT memberFxn (WPARAM, LPARAM);|  
|ON_THREAD_MESSAGE ( \<messaggio >, \<memberFxn >)|afx_msg memberFxn void (WPARAM, LPARAM);|  
|ON_REGISTERED_THREAD_MESSAGE ( \<nMessageVariable >, \<memberFxn >)|afx_msg memberFxn void (WPARAM, LPARAM);|  
  
## <a name="see-also"></a>Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)   
 [Gestori per WM_ Messages](../../mfc/reference/handlers-for-wm-messages.md)

