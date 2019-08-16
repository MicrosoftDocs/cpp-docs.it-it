---
title: Elementi elenco ed elenchi di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- CImageList class [MFC], and list items
- image lists [MFC], list items
- CListCtrl class [MFC], image lists
- list items [MFC], image lists
ms.assetid: 317d095f-f978-47da-acb6-7bfe7dd3bc69
ms.openlocfilehash: 77dd2f6a056ca74ff3334878a9cf1ef51c773335
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69508353"
---
# <a name="list-items-and-image-lists"></a>Elementi elenco ed elenchi di immagini

Un "elemento" in un controllo elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)) è costituito da un'icona, un'etichetta e possibilmente altre informazioni (in "elementi secondari").

Le icone degli elementi di un controllo elenco sono contenute negli elenchi di immagini. Un elenco di immagini contiene icone grandi utilizzate nella visualizzazione icone. Un secondo elenco di immagini, che è facoltativo, contiene le versioni più piccole delle stesse icone da utilizzare in altre visualizzazioni del controllo. Un terzo elenco facoltativo contiene le immagini di "stato", ad esempio le caselle di controllo, per la visualizzazione davanti alle icone piccole in alcune visualizzazioni. Un quarto elenco facoltativo contiene le immagini visualizzate nelle singole voci di intestazione del controllo elenco.

> [!NOTE]
>  Se viene creato un controllo visualizzazione elenco con lo stile LVS_SHAREIMAGELISTS, si è responsabili dell'eliminazione degli elenchi di immagini quando non sono più in uso. Specificare questo stile se si assegnano gli stessi elenchi di immagini a più controlli di visualizzazione di elenchi; in caso contrario, più controlli potrebbero tentare di eliminare definitivamente lo stesso elenco di immagini.

Per ulteriori informazioni sugli elementi dell'elenco, vedere [elenchi di immagini della visualizzazione elenco](/windows/win32/Controls/using-list-view-controls) ed [elementi e](/windows/win32/Controls/using-list-view-controls) elementi secondari nella Windows SDK. Vedere anche la classe [CImageList](../mfc/reference/cimagelist-class.md) nella Guida di *riferimento a MFC* e uso di [CImageList](../mfc/using-cimagelist.md) in questa famiglia di articoli.

Per creare un controllo elenco, è necessario fornire gli elenchi di immagini da utilizzare quando si inseriscono nuovi elementi nell'elenco. Nell'esempio seguente viene illustrata questa procedura, in cui *m_pImagelist* è un `CImageList` puntatore di tipo e `CListCtrl` *m_listctrl* è un membro dati.

[!code-cpp[NVC_MFCControlLadenDialog#19](../mfc/codesnippet/cpp/list-items-and-image-lists_1.cpp)]

Tuttavia, se non si intende visualizzare le icone nella visualizzazione elenco o nel controllo elenco, gli elenchi di immagini non sono necessari.

## <a name="see-also"></a>Vedere anche

[Uso di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
