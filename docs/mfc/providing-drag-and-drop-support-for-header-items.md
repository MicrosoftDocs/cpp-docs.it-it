---
title: Fornire supporto di trascinamento e rilascio per gli elementi di intestazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- HDS_DRAGDROP style
- header items in header controls
- CHeaderCtrl class [MFC], drag and drop support
- HDN_ notifications [MFC]
ms.assetid: 93a152ec-804f-488f-b260-b3a438d0dc0f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b2eaa5040d34a442868a8fa6cb9f2aae08b0a6f3
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46407699"
---
# <a name="providing-drag-and-drop-support-for-header-items"></a>Fornire supporto di trascinamento della selezione per gli elementi di intestazione

Per fornire supporto di trascinamento e rilascio per gli elementi di intestazione, specificare il HDS_DRAGDROP (stile). Supporto di trascinamento e rilascio per gli elementi di intestazione fornisce all'utente la possibilità di riordinare gli elementi dell'intestazione di un controllo intestazione. Il comportamento predefinito fornisce un'immagine di trascinamento semitrasparenti dell'elemento dell'intestazione che viene trascinato e un indicatore visivo della nuova posizione, se viene eliminato l'elemento dell'intestazione.

Come con le funzionalità di trascinamento e rilascio comuni, è possibile estendere il comportamento di trascinamento e rilascio predefinito gestendo le notifiche di funzione e HDN_ENDDRAG. È anche possibile personalizzare l'aspetto dell'immagine di trascinamento eseguendo l'override di [CHeaderCtrl::CreateDragImage](../mfc/reference/cheaderctrl-class.md#createdragimage) funzione membro.

> [!NOTE]
>  Se si fornisce il supporto di trascinamento e rilascio per un controllo header incorporato in un controllo elenco, vedere la sezione di stile esteso nel [la modifica degli stili del controllo elenco](../mfc/changing-list-control-styles.md) argomento.

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)

