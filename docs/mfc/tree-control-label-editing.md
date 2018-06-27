---
title: Etichetta del controllo Tree modifica | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- editing tree control labels
- CTreeCtrl class [MFC], editing labels
- label editing in CTreeCtrl class [MFC]
- tree controls [MFC], label editing
ms.assetid: 6cde2ac3-43ee-468f-bac2-cf1a228ad32d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d665ae37bfc843fc2ab0f24fe4489b76935e62d2
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36956265"
---
# <a name="tree-control-label-editing"></a>Modifica dell'etichetta del controllo Tree
L'utente può modificare direttamente le etichette degli elementi in un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) che ha il **TVS_EDITLABELS** stile. L'utente inizia la modifica scegliendo l'etichetta dell'elemento con lo stato attivo. Un'applicazione inizia la modifica tramite il [funzione membro EditLabel](../mfc/reference/ctreectrl-class.md#editlabel) funzione membro. Il controllo albero invia la notifica quando si modifica inizia e quando viene annullata o completata. Quando viene completata la modifica, è responsabile per l'aggiornamento dell'etichetta dell'elemento, se appropriato.  
  
 Quando la modifica delle etichette inizia, un controllo albero invia un [TVN_BEGINLABELEDIT](http://msdn.microsoft.com/library/windows/desktop/bb773506) messaggio di notifica. Attraverso l'elaborazione di questa notifica, è possibile consentire la modifica di alcune etichette e impedire la modifica di altri utenti. Restituzione 0 consente la modifica e la restituzione diverso da zero non consente di.  
  
 Quando la modifica delle etichette viene annullata o completata, un controllo albero invia un [TVN_ENDLABELEDIT](http://msdn.microsoft.com/library/windows/desktop/bb773515) messaggio di notifica. Il *lParam* parametro è l'indirizzo di un [struttura NMTVDISPINFO](http://msdn.microsoft.com/library/windows/desktop/bb773418) struttura. Il **elemento** membro è un [struttura TVITEM](http://msdn.microsoft.com/library/windows/desktop/bb773456) struttura identifica l'elemento che include il testo modificato. È responsabile per l'aggiornamento dell'etichetta dell'elemento, se appropriato, ad esempio dopo la convalida la stringa modificata. Il *pszText* appartenente `TV_ITEM` è 0 se la modifica è stata annullata.  
  
 Durante la modifica delle etichette, in genere in risposta ai [TVN_BEGINLABELEDIT](http://msdn.microsoft.com/library/windows/desktop/bb773506) messaggio di notifica, è possibile ottenere un puntatore per il controllo di modifica utilizzato per la modifica delle etichette tramite il [GetEditControl](../mfc/reference/ctreectrl-class.md#geteditcontrol) membro funzione. È possibile chiamare il controllo di modifica [SetLimitText](../mfc/reference/cedit-class.md#setlimittext) funzione membro per limitare la quantità di testo di un utente può immettere o sottoclasse il controllo di modifica per l'intercettazione e ignorare i caratteri non validi. Si noti, tuttavia, il controllo di modifica viene visualizzato solo *dopo* **TVN_BEGINLABELEDIT** viene inviato.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)   
 [Controlli](../mfc/controls-mfc.md)

