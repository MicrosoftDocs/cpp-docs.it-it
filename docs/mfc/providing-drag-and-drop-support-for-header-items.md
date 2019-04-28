---
title: Fornire supporto di trascinamento per gli elementi di intestazione
ms.date: 11/04/2016
helpviewer_keywords:
- HDS_DRAGDROP style
- header items in header controls
- CHeaderCtrl class [MFC], drag and drop support
- HDN_ notifications [MFC]
ms.assetid: 93a152ec-804f-488f-b260-b3a438d0dc0f
ms.openlocfilehash: f30ad029742a01280abda85cbd1a81104d01d8cd
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62297034"
---
# <a name="providing-drag-and-drop-support-for-header-items"></a>Fornire supporto di trascinamento per gli elementi di intestazione

Per fornire supporto di trascinamento e rilascio per gli elementi di intestazione, specificare il HDS_DRAGDROP (stile). Supporto di trascinamento e rilascio per gli elementi di intestazione fornisce all'utente la possibilità di riordinare gli elementi dell'intestazione di un controllo intestazione. Il comportamento predefinito fornisce un'immagine di trascinamento semitrasparenti dell'elemento dell'intestazione che viene trascinato e un indicatore visivo della nuova posizione, se viene eliminato l'elemento dell'intestazione.

Come con le funzionalità di trascinamento e rilascio comuni, è possibile estendere il comportamento di trascinamento e rilascio predefinito gestendo le notifiche di funzione e HDN_ENDDRAG. È anche possibile personalizzare l'aspetto dell'immagine di trascinamento eseguendo l'override di [CHeaderCtrl::CreateDragImage](../mfc/reference/cheaderctrl-class.md#createdragimage) funzione membro.

> [!NOTE]
>  Se si fornisce il supporto di trascinamento e rilascio per un controllo header incorporato in un controllo elenco, vedere la sezione di stile esteso nel [la modifica degli stili del controllo elenco](../mfc/changing-list-control-styles.md) argomento.

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)
