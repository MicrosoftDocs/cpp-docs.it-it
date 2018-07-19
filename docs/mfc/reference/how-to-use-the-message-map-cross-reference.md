---
title: 'Procedura: usare il riferimento incrociato alla mappa messaggi | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.mfc.messages
dev_langs:
- C++
helpviewer_keywords:
- windows [MFC], message maps
ms.assetid: 2e863d23-9e58-45ba-b5e4-a8ceefccd0c8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bf76d8f7bb86bf3325a072df80a45e2f0a3ad985
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37338898"
---
# <a name="how-to-use-the-message-map-cross-reference"></a>Procedura: utilizzare il riferimento incrociato alla mappa messaggi
Nelle voci con etichettate \<memberFxn >, scrivere una funzione membro per un oggetto derivato [CWnd](../../mfc/reference/cwnd-class.md) classe. Assegnare alla funzione un nome. Altre funzioni, come `OnActivate`, sono funzioni membro della classe `CWnd`. Se chiamate, passano il messaggio alla funzione di Windows `DefWindowProc`. Per elaborare i messaggi di notifica di Windows, eseguire l'override della funzione corrispondente `CWnd` nella classe derivata. La funzione deve chiamare la funzione di cui si è eseguito l'override nella classe base per consentire alla classe base e a Windows di rispondere al messaggio.  
  
 In ogni caso, inserire il prototipo della funzione nell'intestazione della classe derivata da `CWnd` e codificare la voce della mappa messaggi come indicato.  
  
 Vengono utilizzati i seguenti termini:  
  
|Termine|Definizione|  
|----------|----------------|  
|ID|Qualsiasi ID elemento menu definito dall'utente (WM_COMMAND (messaggi)) o l'ID di controllo (messaggi di notifica finestra figlio).|  
|"message" e "wNotifyCode"|ID messaggi di Windows come definiti in WINDOWS.H.|  
|nMessageVariable|Nome di una variabile che contiene il valore restituito dal `RegisterWindowMessage` funzione Windows.|  
  
## <a name="see-also"></a>Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)

