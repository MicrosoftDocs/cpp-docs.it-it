---
title: Fornire supporto di trascinamento della selezione per gli elementi di intestazione
ms.date: 11/04/2016
helpviewer_keywords:
- HDS_DRAGDROP style
- header items in header controls
- CHeaderCtrl class [MFC], drag and drop support
- HDN_ notifications [MFC]
ms.assetid: 93a152ec-804f-488f-b260-b3a438d0dc0f
ms.openlocfilehash: 21ff14982baac93fac1cf3ee441353c079f4f760
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50602969"
---
# <a name="providing-drag-and-drop-support-for-header-items"></a>Fornire supporto di trascinamento della selezione per gli elementi di intestazione

Per fornire supporto di trascinamento e rilascio per gli elementi di intestazione, specificare il HDS_DRAGDROP (stile). Supporto di trascinamento e rilascio per gli elementi di intestazione fornisce all'utente la possibilità di riordinare gli elementi dell'intestazione di un controllo intestazione. Il comportamento predefinito fornisce un'immagine di trascinamento semitrasparenti dell'elemento dell'intestazione che viene trascinato e un indicatore visivo della nuova posizione, se viene eliminato l'elemento dell'intestazione.

Come con le funzionalità di trascinamento e rilascio comuni, è possibile estendere il comportamento di trascinamento e rilascio predefinito gestendo le notifiche di funzione e HDN_ENDDRAG. È anche possibile personalizzare l'aspetto dell'immagine di trascinamento eseguendo l'override di [CHeaderCtrl::CreateDragImage](../mfc/reference/cheaderctrl-class.md#createdragimage) funzione membro.

> [!NOTE]
>  Se si fornisce il supporto di trascinamento e rilascio per un controllo header incorporato in un controllo elenco, vedere la sezione di stile esteso nel [la modifica degli stili del controllo elenco](../mfc/changing-list-control-styles.md) argomento.

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)

