---
title: Elementi padre e figlio controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- parent items in CTreeCtrl [MFC]
- child items in tree control [MFC]
- CTreeCtrl class [MFC], parent and child items
- tree controls [MFC], parent and child items
ms.assetid: abcea1e4-fe9b-40d9-86dc-1db235f8f103
ms.openlocfilehash: 5a02194ccef8eca81971bb4e8ae24d859e578bcc
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69513967"
---
# <a name="tree-control-parent-and-child-items"></a>Elementi padre e figlio controllo Tree

Qualsiasi elemento in un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) può avere un elenco di elementi secondari, denominati elementi figlio, associati. Un elemento che contiene uno o più elementi figlio è denominato elemento padre. Un elemento figlio viene visualizzato sotto il relativo elemento padre e viene rientrato per indicare che è subordinato al padre. Un elemento che non ha un elemento padre si trova all'inizio della gerarchia e viene chiamato elemento radice.

In un determinato momento, lo stato dell'elenco di elementi figlio di un elemento padre può essere espanso o compresso. Quando lo stato è espanso, gli elementi figlio vengono visualizzati sotto l'elemento padre. Quando viene compresso, gli elementi figlio non vengono visualizzati. L'elenco commuta automaticamente tra gli Stati espanso e compresso quando l'utente fa doppio clic sull'elemento padre o, se il padre ha lo stile **TVS_HASBUTTONS** , quando l'utente fa clic sul pulsante associato all'elemento padre. Un'applicazione può espandere o comprimere gli elementi figlio utilizzando la funzione membro [Espandi](../mfc/reference/ctreectrl-class.md#expand) .

È possibile aggiungere un elemento a un controllo albero chiamando la funzione membro [InsertItem](../mfc/reference/ctreectrl-class.md#insertitem) . Questa funzione restituisce un handle del tipo **HTREEITEM** , che identifica in modo univoco l'elemento. Quando si aggiunge un elemento, è necessario specificare l'handle dell'elemento padre del nuovo elemento. Se si specifica **null** o il valore **TVI_ROOT** anziché un handle di elemento padre nella struttura [TVINSERTSTRUCT](/windows/win32/api/commctrl/ns-commctrl-tvinsertstructw) o nel parametro *hParent* , l'elemento viene aggiunto come elemento radice.

Un controllo struttura ad albero invia un messaggio di notifica [TVN_ITEMEXPANDING](/windows/win32/Controls/tvn-itemexpanding) quando l'elenco di elementi figlio di un elemento padre sta per essere espanso o compresso. La notifica consente di impedire la modifica o di impostare gli attributi dell'elemento padre che dipendono dallo stato dell'elenco di elementi figlio. Dopo aver modificato lo stato dell'elenco, il controllo albero invia un messaggio di notifica [TVN_ITEMEXPANDED](/windows/win32/Controls/tvn-itemexpanded) .

Quando un elenco di elementi figlio viene espanso, viene rientrato rispetto all'elemento padre. È possibile impostare la quantità di rientri usando la funzione membro [seindent](../mfc/reference/ctreectrl-class.md#setindent) o recuperare la quantità corrente usando la funzione membro [GetIndent](../mfc/reference/ctreectrl-class.md#getindent) .

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
