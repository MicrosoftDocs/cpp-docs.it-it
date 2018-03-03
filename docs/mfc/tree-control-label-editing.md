---
title: Etichetta del controllo Tree modifica | Documenti Microsoft
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
- editing tree control labels
- CTreeCtrl class [MFC], editing labels
- label editing in CTreeCtrl class [MFC]
- tree controls [MFC], label editing
ms.assetid: 6cde2ac3-43ee-468f-bac2-cf1a228ad32d
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 03fb11c29b51b30b1aaffccbe3e999f1cefc3fbb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tree-control-label-editing"></a>Modifica dell'etichetta del controllo Tree
L'utente può modificare direttamente le etichette degli elementi in un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) che ha il **TVS_EDITLABELS** stile. L'utente inizia la modifica facendo clic sull'etichetta dell'elemento con lo stato attivo. Un'applicazione inizia la modifica tramite il [funzione membro EditLabel](../mfc/reference/ctreectrl-class.md#editlabel) funzione membro. Il controllo struttura ad albero invia la notifica quando si modifica inizia e quando annullata o completata. Quando viene completata la modifica, è responsabile per l'aggiornamento dell'etichetta dell'elemento, se appropriato.  
  
 Quando la modifica delle etichette inizia, un controllo albero invia un [TVN_BEGINLABELEDIT](http://msdn.microsoft.com/library/windows/desktop/bb773506) messaggio di notifica. Dall'elaborazione di questa notifica, è possibile consentire la modifica di alcune etichette e impedire la modifica di altri utenti. Restituisce 0 consente la modifica e restituzione diverso da zero in modo.  
  
 Quando la modifica delle etichette viene annullata o completata, il controllo struttura invia un [TVN_ENDLABELEDIT](http://msdn.microsoft.com/library/windows/desktop/bb773515) messaggio di notifica. Il `lParam` parametro è l'indirizzo di un [struttura NMTVDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb773418) struttura. Il **elemento** membro è un [struttura TVITEM](http://msdn.microsoft.com/library/windows/desktop/bb773456) struttura che identifica l'elemento e include il testo modificato. È responsabile per l'aggiornamento dell'etichetta dell'elemento, se appropriato, ad esempio dopo la convalida la stringa modificata. Il **pszText** membro di `TV_ITEM` è 0 se la modifica è stata annullata.  
  
 Durante la modifica delle etichette, in genere in risposta al [TVN_BEGINLABELEDIT](http://msdn.microsoft.com/library/windows/desktop/bb773506) messaggio di notifica, è possibile ottenere un puntatore per il controllo di modifica utilizzato per la modifica delle etichette tramite la [GetEditControl](../mfc/reference/ctreectrl-class.md#geteditcontrol) membro funzione. È possibile chiamare il controllo di modifica [SetLimitText](../mfc/reference/cedit-class.md#setlimittext) funzione membro per limitare la quantità di testo di un utente può immettere o una sottoclasse del controllo di modifica per l'intercettazione e ignorare i caratteri non validi. Si noti, tuttavia, il controllo di modifica viene visualizzato solo *dopo* **TVN_BEGINLABELEDIT** viene inviato.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

