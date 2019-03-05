---
title: Elementi padre e figlio controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- parent items in CTreeCtrl [MFC]
- child items in tree control [MFC]
- CTreeCtrl class [MFC], parent and child items
- tree controls [MFC], parent and child items
ms.assetid: abcea1e4-fe9b-40d9-86dc-1db235f8f103
ms.openlocfilehash: 2961009e3f1b21c3caacec001c53f5e52740dd67
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57304574"
---
# <a name="tree-control-parent-and-child-items"></a>Elementi padre e figlio controllo Tree

Qualsiasi elemento in un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) può avere un elenco di elementi secondari, denominati elementi figlio, è associati. Un elemento con uno o più elementi figlio viene chiamato un elemento padre. Un elemento figlio sotto l'elemento padre viene visualizzato e viene applicato un rientro per indicare che è subordinato all'elemento padre. Un elemento che non ha elementi padre nella parte superiore della gerarchia e viene chiamato un elemento radice.

In qualsiasi momento, lo stato dell'elenco di un elemento padre degli elementi figlio può essere espansi o compressi. Quando lo stato viene espanso, vengono visualizzati gli elementi figlio sotto l'elemento padre. Quando è compresso, non vengono visualizzati gli elementi figlio. L'elenco Alterna automaticamente tra gli stati espansi a compressi e quando l'utente fa doppio clic sull'elemento padre o, se il padre ha il **TVS_HASBUTTONS** stile, quando l'utente fa clic sul pulsante associato all'elemento padre. Un'applicazione è possibile espandere o comprimere gli elementi figlio usando il [Espandi](../mfc/reference/ctreectrl-class.md#expand) funzione membro.

Per aggiungere un elemento a un controllo struttura ad albero, chiamare il [InsertItem](../mfc/reference/ctreectrl-class.md#insertitem) funzione membro. Questa funzione restituisce un handle del **HTREEITEM** tipo, che identifica in modo univoco l'elemento. Quando si aggiunge un elemento, è necessario specificare l'handle dell'elemento padre del nuovo elemento. Se si specifica **NULL** o nella **TVI_ROOT al** valore anziché un handle di elementi padre nel [struttura TVINSERTSTRUCT](/windows/desktop/api/commctrl/ns-commctrl-tagtvinsertstructa) struttura oppure *hParent* parametro, l'elemento viene aggiunto come elemento radice.

Un controllo albero invia un [TVN_ITEMEXPANDING](/windows/desktop/Controls/tvn-itemexpanding) messaggio di notifica quando un elemento padre dell'elenco di elementi figlio sta per essere espansi o compressi. La notifica ti offre l'opportunità per evitare la modifica oppure per impostare tutti gli attributi dell'elemento padre che dipendono dallo stato dell'elenco di elementi figlio. Dopo aver modificato lo stato dell'elenco, il controllo albero invia un [TVN_ITEMEXPANDED](/windows/desktop/Controls/tvn-itemexpanded) messaggio di notifica.

Quando si espande un elenco di elementi figlio, viene applicato un rientro rispetto all'elemento padre. È possibile impostare la quantità di rientro usando il [SetIndent](../mfc/reference/ctreectrl-class.md#setindent) funzione membro o recuperare la quantità corrente utilizzando il [GetIndent](../mfc/reference/ctreectrl-class.md#getindent) funzione membro.

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
