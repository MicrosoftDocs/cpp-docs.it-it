---
description: 'Altre informazioni su: fornitura del supporto per il trascinamento della selezione per gli elementi di intestazione'
title: Fornire supporto di trascinamento per gli elementi di intestazione
ms.date: 11/04/2016
helpviewer_keywords:
- HDS_DRAGDROP style
- header items in header controls
- CHeaderCtrl class [MFC], drag and drop support
- HDN_ notifications [MFC]
ms.assetid: 93a152ec-804f-488f-b260-b3a438d0dc0f
ms.openlocfilehash: ed42f61220ee2033dbc36e11c18664be3968dddd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97248788"
---
# <a name="providing-drag-and-drop-support-for-header-items"></a>Fornire supporto di trascinamento per gli elementi di intestazione

Per fornire il supporto per il trascinamento della selezione per gli elementi di intestazione, specificare lo stile del HDS_DRAGDROP. Il supporto del trascinamento della selezione per gli elementi di intestazione consente all'utente di riordinare gli elementi di intestazione di un controllo intestazione. Il comportamento predefinito fornisce un'immagine di trascinamento trasparente dell'elemento dell'intestazione da trascinare e un indicatore visivo della nuova posizione, se l'elemento dell'intestazione viene eliminato.

Come per la funzionalità di trascinamento della selezione comune, è possibile estendere il comportamento predefinito di trascinamento della selezione gestendo le notifiche HDN_BEGINDRAG e HDN_ENDDRAG. È anche possibile personalizzare l'aspetto dell'immagine di trascinamento eseguendo l'override della funzione membro [CHeaderCtrl:: CreateDragImage](../mfc/reference/cheaderctrl-class.md#createdragimage) .

> [!NOTE]
> Se si fornisce il supporto per il trascinamento della selezione per un controllo intestazione incorporato in un controllo elenco, vedere la sezione stile esteso nell'argomento [modifica degli stili del controllo elenco](../mfc/changing-list-control-styles.md) .

## <a name="see-also"></a>Vedi anche

[Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)
