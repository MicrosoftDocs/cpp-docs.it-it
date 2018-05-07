---
title: Gli elementi dell'elenco ed elenchi di immagini | Documenti Microsoft
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
ms.openlocfilehash: f6bd7a97330a8a646a880bf229562dbec9a70181
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="list-items-and-image-lists"></a>Elementi elenco ed elenchi di immagini
Un "elemento" in un controllo elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)) è costituito da un'icona, un'etichetta e possibilmente altre informazioni (negli "elementi secondari").  
  
 Le icone degli elementi di un controllo elenco sono contenute negli elenchi di immagini. Un elenco di immagini contiene icone grandi utilizzate nella visualizzazione icone. Un secondo elenco di immagini, che è facoltativo, contiene le versioni più piccole delle stesse icone da utilizzare in altre visualizzazioni del controllo. Un terzo elenco facoltativo contiene le immagini di "stato", ad esempio le caselle di controllo, per la visualizzazione davanti alle icone piccole in alcune visualizzazioni. Un quarto elenco facoltativo contiene le immagini visualizzate nelle singole voci di intestazione del controllo elenco.  
  
> [!NOTE]
>  Se un controllo visualizzazione elenco viene creato con lo stile `LVS_SHAREIMAGELISTS`, occorre provvedere all'eliminazione permanente degli elenchi di immagini quando non sono più utili. Specificare questo stile se si assegnano gli stessi elenchi di immagini a più controlli di visualizzazione di elenchi; in caso contrario, più controlli potrebbero tentare di eliminare definitivamente lo stesso elenco di immagini.  
  
 Per ulteriori informazioni sulle voci di elenco, vedere [elenchi di immagini di visualizzazione elenco](http://msdn.microsoft.com/library/windows/desktop/bb774736) e [elementi ed elementi secondari](http://msdn.microsoft.com/library/windows/desktop/bb774736) in Windows SDK. Vedere anche la classe [CImageList](../mfc/reference/cimagelist-class.md) nel *riferimenti alla libreria MFC* e [utilizzo di CImageList](../mfc/using-cimagelist.md) in questa serie di articoli.  
  
 Per creare un controllo elenco, è necessario fornire gli elenchi di immagini da utilizzare quando si inseriscono nuovi elementi nell'elenco. Nell'esempio seguente viene illustrata questa procedura, dove `m_pImagelist` è un puntatore di tipo `CImageList` e `m_listctrl` è un membro dati di `CListCtrl`.  
  
 [!code-cpp[NVC_MFCControlLadenDialog#19](../mfc/codesnippet/cpp/list-items-and-image-lists_1.cpp)]  
  
 Tuttavia, se non si intende visualizzare le icone nella visualizzazione elenco o nel controllo elenco, gli elenchi di immagini non sono necessari.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

