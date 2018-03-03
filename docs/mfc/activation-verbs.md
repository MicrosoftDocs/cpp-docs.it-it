---
title: 'Attivazione: Verbi | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- verbs [MFC]
- OLE [MFC], activation
- edit verb [MFC]
- activation [MFC], verbs
- OLE [MFC], editing
- Primary verb [MFC]
- OLE activation {MFC]
ms.assetid: eb56ff23-1de8-43ad-abeb-dc7346ba7b70
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c2a443f4ce65dcc7e9460bd016638aa5069e7e6d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="activation-verbs"></a>Attivazione: verbi
Questo articolo illustra il ruolo primario e secondario verbi Riproduci in OLE [attivazione](../mfc/activation-cpp.md).  
  
 In genere, fare doppio clic su un elemento incorporato che consente all'utente di modificarlo. Tuttavia, alcuni elementi non funzionano in questo modo. Ad esempio, fare doppio clic su un elemento creato con l'applicazione registratore di suoni non aprire il server in una finestra separata. al contrario, riproduce il suono.  
  
 Il motivo di questa differenza di comportamento è che gli elementi del registratore di suoni un diverso "verbo primario". Verbo primario è l'azione eseguita quando l'utente fa doppio clic su un elemento OLE. Per la maggior parte dei tipi di elementi OLE, il verbo primario è modifica, che consente di avviare il server che ha creato l'elemento. Per alcuni tipi di elementi, ad esempio elementi registratore di suoni, il verbo primario è Play.  
  
 Molti tipi di elementi OLE supportano solo un verbo di modifica è quello più comune. Tuttavia, alcuni tipi di elementi supportano più verbi. Ad esempio, gli elementi supportano il registratore di suoni modificare come verbo secondario.  
  
 Un altro verbo utilizzato di frequente è aperta. Il verbo Open è identico alla modifica, ma l'applicazione server viene avviato in una finestra separata. Questo verbo deve essere utilizzato quando l'applicazione contenitore o l'applicazione server non supporta l'attivazione sul posto.  
  
 Quando l'elemento è selezionato, tutti i verbi di diverso da verbo primario devono essere richiamati tramite un comando di sottomenu. Il sottomenu contiene tutti i verbi supportati dall'elemento e in genere è raggiungibile tramite il *typename* **oggetto** comando il **modifica** menu. Per informazioni sul *typename* **oggetto** command, vedere l'articolo [menu e risorse: aggiunte di contenitori](../mfc/menus-and-resources-container-additions.md).  
  
 I verbi che supporta un'applicazione server sono elencati nel database di registrazione di Windows. Se l'applicazione server viene scritto con la libreria Microsoft Foundation Class, verrà registrato automaticamente tutti i verbi di avvio del server. In caso contrario, è necessario registrarli durante la fase di inizializzazione dell'applicazione server. Per ulteriori informazioni, vedere l'articolo [registrazione](../mfc/registration.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Attivazione](../mfc/activation-cpp.md)   
 [Contenitori](../mfc/containers.md)   
 [Server](../mfc/servers.md)

