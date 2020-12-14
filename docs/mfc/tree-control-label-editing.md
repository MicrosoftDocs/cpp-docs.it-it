---
description: "Altre informazioni su: modifica dell'etichetta del controllo Tree"
title: Modifica dell'etichetta del controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- editing tree control labels
- CTreeCtrl class [MFC], editing labels
- label editing in CTreeCtrl class [MFC]
- tree controls [MFC], label editing
ms.assetid: 6cde2ac3-43ee-468f-bac2-cf1a228ad32d
ms.openlocfilehash: b471b2ce9773ec86b1e4f94e766d3428fef456fa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264011"
---
# <a name="tree-control-label-editing"></a>Modifica dell'etichetta del controllo Tree

L'utente può modificare direttamente le etichette degli elementi in un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) con lo stile **TVS_EDITLABELS** . L'utente inizia la modifica facendo clic sull'etichetta dell'elemento con lo stato attivo. Un'applicazione inizia la modifica utilizzando la funzione membro [EditLabel](../mfc/reference/ctreectrl-class.md#editlabel) . Il controllo albero Invia la notifica quando inizia la modifica e quando viene annullata o completata. Al termine della modifica, l'utente è responsabile dell'aggiornamento dell'etichetta dell'elemento, se appropriato.

Quando viene avviata la modifica dell'etichetta, un controllo albero invia un messaggio di notifica [TVN_BEGINLABELEDIT](/windows/win32/Controls/tvn-beginlabeledit) . Elaborando questa notifica, è possibile consentire la modifica di alcune etichette e impedire la modifica di altre. Con la restituzione di 0 è possibile modificare e restituire un valore diverso da zero.

Quando la modifica delle etichette viene annullata o completata, un controllo albero invia un messaggio di notifica [TVN_ENDLABELEDIT](/windows/win32/Controls/tvn-endlabeledit) . Il parametro *lParam* è l'indirizzo di una struttura [struttura NMTVDISPINFO](/windows/win32/api/commctrl/ns-commctrl-nmtvdispinfow) . Il membro dell' **elemento** è una struttura [TVITEM](/windows/win32/api/commctrl/ns-commctrl-tvitemw) che identifica l'elemento e include il testo modificato. L'utente è responsabile dell'aggiornamento dell'etichetta dell'elemento, se appropriato, forse dopo la convalida della stringa modificata. Il membro *pszText* di `TV_ITEM` è 0 se la modifica viene annullata.

Durante la modifica delle etichette, in genere in risposta al messaggio di notifica di [TVN_BEGINLABELEDIT](/windows/win32/Controls/tvn-beginlabeledit) , è possibile ottenere un puntatore al controllo di modifica usato per la modifica dell'etichetta usando la funzione membro [GetEditControl](../mfc/reference/ctreectrl-class.md#geteditcontrol) . È possibile chiamare la funzione membro [SetLimitText](../mfc/reference/cedit-class.md#setlimittext) del controllo di modifica per limitare la quantità di testo che un utente può immettere o sottoscrivere in una sottoclasse del controllo di modifica per intercettare e rimuovere i caratteri non validi. Si noti, tuttavia, che il controllo di modifica viene visualizzato solo *dopo* l'invio di **TVN_BEGINLABELEDIT** .

## <a name="see-also"></a>Vedi anche

[Utilizzo di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
