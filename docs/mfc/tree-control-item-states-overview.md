---
title: Panoramica degli stati degli elementi del controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- states, CTreeCtrl items
- tree controls [MFC], item states overview
- CTreeCtrl class [MFC], item states
ms.assetid: 2db11ae0-0d87-499d-8c1f-5e0dbe9e94c8
ms.openlocfilehash: 389c273f7c8727ecbb4ed5455987126e21e26a63
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50467951"
---
# <a name="tree-control-item-states-overview"></a>Panoramica degli stati degli elementi del controllo Tree

Ogni elemento in un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) nello stato corrente. Ad esempio, un elemento può essere selezionato, disabilitato, espanso e così via. In genere, il controllo albero imposta automaticamente lo stato di un elemento per riflettere le azioni dell'utente, come ad esempio la selezione di un elemento. Tuttavia, è possibile impostare lo stato di un elemento usando la [SetItemState](../mfc/reference/ctreectrl-class.md#setitemstate) funzione membro e recuperare lo stato corrente di un elemento usando la [GetItemState](../mfc/reference/ctreectrl-class.md#getitemstate) funzione membro. Per un elenco completo degli stati degli elementi, vedere [costanti del controllo di visualizzazione ad albero](/windows/desktop/Controls/tree-view-control-item-states) nel SDK di Windows.

Stato corrente di un elemento viene specificato per il *nState* parametro. Un controllo albero può modificare lo stato di un elemento per riflettere un'azione dell'utente, come ad esempio la selezione dell'elemento oppure l'impostazione dello stato attivo sull'elemento. Inoltre, un'applicazione può modificare lo stato di un elemento per disabilitare o nascondere l'elemento o per specificare un'immagine sovrapposta o un'immagine di stato.

Quando si specifica o si modifica lo stato di un elemento, il *nStateMask* parametro specifica quali bit di set, stato e il *nState* parametro contiene i nuovi valori per questi bit. Ad esempio, nell'esempio seguente viene modificato lo stato corrente di un elemento padre (specificato da *hParentItem*) in un `CTreeCtrl` oggetto (`m_treeCtrl`) per `TVIS_EXPANDPARTIAL`:

[!code-cpp[NVC_MFCControlLadenDialog#71](../mfc/codesnippet/cpp/tree-control-item-states-overview_1.cpp)]

Un altro esempio di modifica dello stato consiste nell'impostare l'immagine sovrapposta di un elemento. A tale scopo, *nStateMask* deve includere il `TVIS_OVERLAYMASK` valore, e *nState* deve includere l'indice in base uno dell'immagine sovrapposta spostata otto bit a sinistra utilizzando la [ INDEXTOOVERLAYMASK](/windows/desktop/api/commctrl/nf-commctrl-indextooverlaymask) macro. L'indice può essere 0 per specificare che non è presente alcuna immagine sovrapposta. L'immagine sovrapposta deve avere stato aggiunto all'elenco del controllo albero delle immagini sovrapposte da una precedente chiamata ai [CImageList:: SetOverlayImage](../mfc/reference/cimagelist-class.md#setoverlayimage) (funzione). La funzione specifica l'indice in base uno dell'immagine da aggiungere. si tratta dell'indice utilizzato con la macro INDEXTOOVERLAYMASK. Un controllo albero può contenere fino a quattro immagini sovrapposte.

Immagine dello stato di un elemento, impostare *nStateMask* deve includere il `TVIS_STATEIMAGEMASK` valore, e *nState* deve includere l'indice in base uno dell'immagine di stato spostata 12 bit a sinistra utilizzando la [ INDEXTOSTATEIMAGEMASK](/windows/desktop/api/commctrl/nf-commctrl-indextostateimagemask) macro. L'indice può essere 0 per specificare che non è presente alcuna immagine di stato. Per altre informazioni sulle immagini sovrapposte e di stato, vedere [elenchi di immagini di controllo albero](../mfc/tree-control-image-lists.md).

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

