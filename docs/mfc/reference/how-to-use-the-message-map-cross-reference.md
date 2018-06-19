---
title: 'Procedura: utilizzare il riferimento incrociato alla mappa messaggi | Documenti Microsoft'
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
ms.openlocfilehash: d59d0bfc75f654cd9f8f15ff851ad42a619e271f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33370096"
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

