---
title: Fornire supporto di trascinamento per gli elementi di intestazione
ms.date: 11/04/2016
helpviewer_keywords:
- HDS_DRAGDROP style
- header items in header controls
- CHeaderCtrl class [MFC], drag and drop support
- HDN_ notifications [MFC]
ms.assetid: 93a152ec-804f-488f-b260-b3a438d0dc0f
ms.openlocfilehash: 8dfaabf3da62c216d3da662f59c57b63e695d9ad
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371156"
---
# <a name="providing-drag-and-drop-support-for-header-items"></a>Fornire supporto di trascinamento per gli elementi di intestazione

Per fornire il supporto del trascinamento della selezione per gli elementi dell'intestazione, specificare lo stile di HDS_DRAGDROP. Il supporto del trascinamento della selezione per gli elementi di intestazione offre all'utente la possibilità di riordinare gli elementi di intestazione di un controllo intestazione. Il comportamento predefinito fornisce un'immagine di trascinamento semitrasparente dell'elemento dell'intestazione trascinato e un indicatore visivo della nuova posizione, se l'elemento dell'intestazione viene rilasciato.

Come per le comuni funzionalità di trascinamento della selezione, è possibile estendere il comportamento predefinito di trascinamento della selezione gestendo le notifiche di HDN_BEGINDRAG e HDN_ENDDRAG. È inoltre possibile personalizzare l'aspetto dell'immagine di trascinamento eseguendo l'override di [CHeaderCtrl::CreateDragImage](../mfc/reference/cheaderctrl-class.md#createdragimage) funzione membro.

> [!NOTE]
> Se si fornisce il supporto del trascinamento della selezione per un controllo intestazione incorporato in un controllo elenco, vedere la sezione Stile esteso nell'argomento Modifica degli stili del [controllo elenco.](../mfc/changing-list-control-styles.md)

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)
