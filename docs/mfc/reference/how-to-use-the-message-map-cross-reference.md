---
title: 'Procedura: utilizzare il riferimento incrociato alla mappa messaggi | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.messages
dev_langs:
- C++
helpviewer_keywords:
- windows [MFC], message maps
ms.assetid: 2e863d23-9e58-45ba-b5e4-a8ceefccd0c8
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 25f78fb2e2c5700cbb1f7c8dcb093795ce001c13
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-use-the-message-map-cross-reference"></a>Procedura: utilizzare il riferimento incrociato alla mappa messaggi
Nelle voci con etichettate \<memberFxn >, scrivere una funzione membro per un oggetto derivato [CWnd](../../mfc/reference/cwnd-class.md) classe. Assegnare alla funzione un nome. Altre funzioni, come `OnActivate`, sono funzioni membro della classe `CWnd`. Se chiamate, passano il messaggio alla funzione di Windows `DefWindowProc`. Per elaborare i messaggi di notifica di Windows, eseguire l'override della funzione corrispondente `CWnd` nella classe derivata. La funzione deve chiamare la funzione di cui si è eseguito l'override nella classe base per consentire alla classe base e a Windows di rispondere al messaggio.  
  
 In ogni caso, inserire il prototipo della funzione nell'intestazione della classe derivata da `CWnd` e codificare la voce della mappa messaggi come indicato.  
  
 Vengono utilizzati i seguenti termini:  
  
|Termine|Definizione|  
|----------|----------------|  
|ID|Qualsiasi utente definito dall'ID voce di menu (**WM_COMMAND** messaggi) o controllare l'ID (messaggi di notifica finestra figlio).|  
|"message" e "wNotifyCode"|ID messaggi di Windows come definiti in WINDOWS.H.|  
|nMessageVariable|Nome di una variabile che contiene il valore restituito dal **RegisterWindowMessage** funzione di Windows.|  
  
## <a name="see-also"></a>Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)

