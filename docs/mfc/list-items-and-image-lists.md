---
title: Elementi elenco ed elenchi di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- CImageList class [MFC], and list items
- image lists [MFC], list items
- CListCtrl class [MFC], image lists
- list items [MFC], image lists
ms.assetid: 317d095f-f978-47da-acb6-7bfe7dd3bc69
ms.openlocfilehash: d378c6e07280349f9995981ad794039ebc015b25
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81353059"
---
# <a name="list-items-and-image-lists"></a>Elementi elenco ed elenchi di immagini

Un "elemento" in un controllo elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)) è costituito da un'icona, un'etichetta ed eventualmente altre informazioni (in "elementi secondari").

Le icone degli elementi di un controllo elenco sono contenute negli elenchi di immagini. Un elenco di immagini contiene icone grandi utilizzate nella visualizzazione icone. Un secondo elenco di immagini, che è facoltativo, contiene le versioni più piccole delle stesse icone da utilizzare in altre visualizzazioni del controllo. Un terzo elenco facoltativo contiene le immagini di "stato", ad esempio le caselle di controllo, per la visualizzazione davanti alle icone piccole in alcune visualizzazioni. Un quarto elenco facoltativo contiene le immagini visualizzate nelle singole voci di intestazione del controllo elenco.

> [!NOTE]
> Se un controllo visualizzazione elenco viene creato con lo stile LVS_SHAREIMAGELISTS, si è responsabili dell'eliminazione degli elenchi immagini quando non sono più in uso. Specificare questo stile se si assegnano gli stessi elenchi di immagini a più controlli di visualizzazione di elenchi; in caso contrario, più controlli potrebbero tentare di eliminare definitivamente lo stesso elenco di immagini.

Per ulteriori informazioni sugli elementi di elenco, vedere [List Image Lists](/windows/win32/Controls/using-list-view-controls) and Items and [Subitems](/windows/win32/Controls/using-list-view-controls) in Windows SDK. Vedere anche la classe [CImageList](../mfc/reference/cimagelist-class.md) in *Riferimenti MFC* e Utilizzo di [CImageList](../mfc/using-cimagelist.md) in questa famiglia di articoli.

Per creare un controllo elenco, è necessario fornire gli elenchi di immagini da utilizzare quando si inseriscono nuovi elementi nell'elenco. Nell'esempio seguente viene illustrata questa procedura, in `CListCtrl` cui *m_pImagelist* è un puntatore di tipo `CImageList` e *m_listctrl* è un membro dati.

[!code-cpp[NVC_MFCControlLadenDialog#19](../mfc/codesnippet/cpp/list-items-and-image-lists_1.cpp)]

Tuttavia, se non si intende visualizzare le icone nella visualizzazione elenco o nel controllo elenco, gli elenchi di immagini non sono necessari.

## <a name="see-also"></a>Vedere anche

[Utilizzo di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
