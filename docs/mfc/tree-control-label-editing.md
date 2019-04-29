---
title: Modifica dell'etichetta del controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- editing tree control labels
- CTreeCtrl class [MFC], editing labels
- label editing in CTreeCtrl class [MFC]
- tree controls [MFC], label editing
ms.assetid: 6cde2ac3-43ee-468f-bac2-cf1a228ad32d
ms.openlocfilehash: 446db94ec49859e2213f00d205df57e332c85af2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62388150"
---
# <a name="tree-control-label-editing"></a>Modifica dell'etichetta del controllo Tree

L'utente può modificare direttamente le etichette degli elementi in un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) con i **TVS_EDITLABELS** stile. L'utente inizia a modificare facendo l'etichetta dell'elemento con lo stato attivo. Un'applicazione inizia a modificare usando il [funzione membro EditLabel](../mfc/reference/ctreectrl-class.md#editlabel) funzione membro. Il controllo albero invia la notifica quando la modifica inizia e quando è stata annullata o completata. Quando viene completata la modifica, si è responsabile dell'aggiornamento dell'etichetta dell'elemento, se appropriato.

Quando la modifica dell'etichetta inizia, un controllo albero invia un [TVN_BEGINLABELEDIT](/windows/desktop/Controls/tvn-beginlabeledit) messaggio di notifica. Attraverso l'elaborazione di questa notifica, è possibile consentire la modifica di alcune etichette e impedire la modifica di altri utenti. Restituendo 0 consente la modifica e la restituzione diverso da zero ne impedisce il.

Quando la modifica dell'etichetta viene annullata o completata, invia un controllo albero una [TVN_ENDLABELEDIT](/windows/desktop/Controls/tvn-endlabeledit) messaggio di notifica. Il *lParam* parametro è l'indirizzo di un [struttura NMTVDISPINFO](/windows/desktop/api/commctrl/ns-commctrl-tagtvdispinfoa) struttura. Il **articoli** membro è un [struttura TVITEM](/windows/desktop/api/commctrl/ns-commctrl-tagtvitema) struttura che identifica l'elemento e include il testo modificato. Si è responsabile dell'aggiornamento dell'etichetta dell'elemento, se appropriato, ad esempio dopo la convalida la stringa modificata. Il *pszText* membro di `TV_ITEM` è 0 se la modifica viene annullata.

Durante la modifica delle etichette, in genere in risposta al [TVN_BEGINLABELEDIT](/windows/desktop/Controls/tvn-beginlabeledit) messaggio di notifica, è possibile ottenere un puntatore al controllo di modifica utilizzato per la modifica delle etichette usando la [GetEditControl](../mfc/reference/ctreectrl-class.md#geteditcontrol) membro funzione. È possibile chiamare il controllo di modifica [SetLimitText](../mfc/reference/cedit-class.md#setlimittext) funzione membro per limitare la quantità di testo di un utente può immettere o sottoclasse il controllo di modifica di intercettare ed eliminare i caratteri non validi. Si noti, tuttavia, che viene visualizzato solo il controllo di modifica *dopo aver* **TVN_BEGINLABELEDIT** viene inviato.

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
