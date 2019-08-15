---
title: Panoramica degli stati degli elementi del controllo Tree
ms.date: 11/04/2016
helpviewer_keywords:
- states, CTreeCtrl items
- tree controls [MFC], item states overview
- CTreeCtrl class [MFC], item states
ms.assetid: 2db11ae0-0d87-499d-8c1f-5e0dbe9e94c8
ms.openlocfilehash: bbeabf69f174fcf172808ff71f07ed05f1dc9675
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69511048"
---
# <a name="tree-control-item-states-overview"></a>Panoramica degli stati degli elementi del controllo Tree

Ogni elemento in un controllo albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) ha uno stato corrente. Ad esempio, un elemento può essere selezionato, disabilitato, espanso e così via. In genere, il controllo struttura ad albero imposta automaticamente lo stato di un elemento per riflettere le azioni dell'utente, come ad esempio la selezione di un elemento. Tuttavia, è anche possibile impostare lo stato di un elemento utilizzando la funzione membro [SetItemState](../mfc/reference/ctreectrl-class.md#setitemstate) e recuperare lo stato corrente di un elemento utilizzando la funzione membro [GetItemState](../mfc/reference/ctreectrl-class.md#getitemstate) . Per un elenco completo degli Stati degli elementi, vedere [costanti di controllo di visualizzazione albero](/windows/win32/Controls/tree-view-control-item-states) nella Windows SDK.

Lo stato corrente di un elemento è specificato dal parametro *nState* . Un controllo struttura ad albero può modificare lo stato di un elemento per riflettere un'azione dell'utente, come ad esempio la selezione dell'elemento oppure l'impostazione dello stato attivo sull'elemento. Inoltre, un'applicazione può modificare lo stato di un elemento per disabilitare o nascondere l'elemento o per specificare un'immagine sovrapposta o un'immagine di stato.

Quando si specifica o si modifica lo stato di un elemento, il parametro *nStateMask* specifica i bit di stato da impostare e il parametro *nState* contiene i nuovi valori per tali bit. Nell'esempio seguente, ad esempio, viene modificato lo stato corrente di un elemento padre (specificato da *hParentItem*) `CTreeCtrl` in un`m_treeCtrl` `TVIS_EXPANDPARTIAL`oggetto () in:

[!code-cpp[NVC_MFCControlLadenDialog#71](../mfc/codesnippet/cpp/tree-control-item-states-overview_1.cpp)]

Un altro esempio di modifica dello stato consiste nell'impostare l'immagine sovrapposta di un elemento. A tale scopo, *nStateMask* deve includere il `TVIS_OVERLAYMASK` valore e *nState* deve includere l'indice in base uno dell'immagine sovrapposta spostata a sinistra di otto bit usando la macro [INDEXTOOVERLAYMASK](/windows/win32/api/commctrl/nf-commctrl-indextooverlaymask) . L'indice può essere 0 per specificare che non è presente alcuna immagine sovrapposta. È necessario aggiungere l'immagine sovrapposta all'elenco di immagini sovrapposte del controllo albero tramite una chiamata precedente alla funzione [CImageList:: SetOverlayImage](../mfc/reference/cimagelist-class.md#setoverlayimage) . La funzione specifica l'indice in base uno dell'immagine da aggiungere; si tratta dell'indice utilizzato con la macro INDEXTOOVERLAYMASK. Un controllo albero può contenere fino a quattro immagini sovrapposte.

Per impostare l'immagine di stato di un elemento, *nStateMask* deve `TVIS_STATEIMAGEMASK` includere il valore e *nState* deve includere l'indice in base uno dell'immagine di stato spostata a 12 bit a sinistra utilizzando la macro [INDEXTOSTATEIMAGEMASK](/windows/win32/api/commctrl/nf-commctrl-indextostateimagemask) . L'indice può essere 0 per specificare che non è presente alcuna immagine di stato. Per altre informazioni sulle immagini sovrapposte e di stato, vedere [elenchi di immagini del controllo Tree](../mfc/tree-control-image-lists.md).

## <a name="see-also"></a>Vedere anche

[Uso di CTreeCtrl](../mfc/using-ctreectrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
