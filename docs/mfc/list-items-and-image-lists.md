---
title: Gli elementi dell'elenco ed elenchi di immagini | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CImageList class [MFC], and list items
- image lists [MFC], list items
- CListCtrl class [MFC], image lists
- list items [MFC], image lists
ms.assetid: 317d095f-f978-47da-acb6-7bfe7dd3bc69
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 86395798a91852860b20f40f3ee0a53c745816c0
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46440589"
---
# <a name="list-items-and-image-lists"></a>Elementi elenco ed elenchi di immagini

Un "elemento" in un controllo elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)) è costituito da un'icona, un'etichetta e possibilmente altre informazioni (negli "elementi secondari").

Le icone degli elementi di un controllo elenco sono contenute negli elenchi di immagini. Un elenco di immagini contiene icone grandi utilizzate nella visualizzazione icone. Un secondo elenco di immagini, che è facoltativo, contiene le versioni più piccole delle stesse icone da utilizzare in altre visualizzazioni del controllo. Un terzo elenco facoltativo contiene le immagini di "stato", ad esempio le caselle di controllo, per la visualizzazione davanti alle icone piccole in alcune visualizzazioni. Un quarto elenco facoltativo contiene le immagini visualizzate nelle singole voci di intestazione del controllo elenco.

> [!NOTE]
>  Se un controllo visualizzazione elenco viene creato con lo stile LVS_SHAREIMAGELISTS, sei responsabile dell'eliminazione definitiva degli elenchi di immagini quando non sono più in uso. Specificare questo stile se si assegnano gli stessi elenchi di immagini a più controlli di visualizzazione di elenchi; in caso contrario, più controlli potrebbero tentare di eliminare definitivamente lo stesso elenco di immagini.

Per altre informazioni sugli elementi elenco, vedere [elenchi di immagini di visualizzazione elenco](/windows/desktop/Controls/using-list-view-controls) e [elementi ed elementi secondari](/windows/desktop/Controls/using-list-view-controls) nel SDK di Windows. Vedere anche la classe [CImageList](../mfc/reference/cimagelist-class.md) nel *riferimento MFC* e [utilizzo di CImageList](../mfc/using-cimagelist.md) in questa serie di articoli.

Per creare un controllo elenco, è necessario fornire gli elenchi di immagini da utilizzare quando si inseriscono nuovi elementi nell'elenco. Nell'esempio seguente viene illustrata questa procedura, dove *m_pImagelist* è un puntatore di tipo `CImageList` e *m_listctrl* è un `CListCtrl` (membro dati).

[!code-cpp[NVC_MFCControlLadenDialog#19](../mfc/codesnippet/cpp/list-items-and-image-lists_1.cpp)]

Tuttavia, se non si intende visualizzare le icone nella visualizzazione elenco o nel controllo elenco, gli elenchi di immagini non sono necessari.

## <a name="see-also"></a>Vedere anche

[Uso di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

