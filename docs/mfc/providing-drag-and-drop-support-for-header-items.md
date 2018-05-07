---
title: Fornire il supporto di trascinamento e rilascio per gli elementi di intestazione | Documenti Microsoft
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
ms.openlocfilehash: 50cd19d4828269d0591afd0b46768e9917b96906
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="providing-drag-and-drop-support-for-header-items"></a>Fornire supporto di trascinamento della selezione per gli elementi di intestazione
Per fornire il supporto di trascinamento e rilascio per gli elementi di intestazione, specificare il `HDS_DRAGDROP` stile. Supporto di trascinamento e rilascio per gli elementi di intestazione fornisce all'utente la possibilità di riordinare gli elementi dell'intestazione di un controllo header. Il comportamento predefinito contiene un'immagine di trascinamento semitrasparente dell'elemento dell'intestazione viene trascinato e un indicatore visivo della nuova posizione, se viene eliminato l'elemento dell'intestazione.  
  
 Come con le funzionalità di trascinamento e rilascio comuni, è possibile estendere il comportamento di trascinamento e rilascio predefinito gestendo il **funzione** e **HDN_ENDDRAG** le notifiche. È inoltre possibile personalizzare l'aspetto dell'immagine di trascinamento eseguendo l'override di [CHeaderCtrl::CreateDragImage](../mfc/reference/cheaderctrl-class.md#createdragimage) funzione membro.  
  
> [!NOTE]
>  Se si fornisce il supporto di trascinamento e rilascio per un controllo header incorporato in un controllo elenco, nella sezione stile esteso di [la modifica degli stili del controllo List](../mfc/changing-list-control-styles.md) argomento.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)

