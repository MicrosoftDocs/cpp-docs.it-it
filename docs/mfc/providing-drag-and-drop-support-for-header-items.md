---
title: Fornire supporto di trascinamento e rilascio per gli elementi di intestazione | Documenti Microsoft
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
ms.openlocfilehash: 6bf21021e204a6caf298453bab42db2aedff409c
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36928420"
---
# <a name="providing-drag-and-drop-support-for-header-items"></a>Fornire supporto di trascinamento della selezione per gli elementi di intestazione
Per fornire il supporto di trascinamento e rilascio per gli elementi di intestazione, specificare lo stile HDS_DRAGDROP. Supporto di trascinamento e rilascio per gli elementi di intestazione offre all'utente la possibilità di riordinare gli elementi dell'intestazione di un controllo header. Il comportamento predefinito contiene un'immagine di semitrasparente trascinamento dell'elemento dell'intestazione che viene trascinato e un indicatore visivo della nuova posizione, se viene eliminato l'elemento dell'intestazione.  
  
 Come con funzionalità di trascinamento e rilascio comuni, è possibile estendere il comportamento di trascinamento e rilascio predefinito gestendo le notifiche di funzione e HDN_ENDDRAG. È inoltre possibile personalizzare l'aspetto dell'immagine di trascinamento eseguendo l'override di [CHeaderCtrl::CreateDragImage](../mfc/reference/cheaderctrl-class.md#createdragimage) funzione membro.  
  
> [!NOTE]
>  Se si fornisce il supporto di trascinamento e rilascio per un controllo header incorporato in un controllo elenco, vedere la sezione allo stile esteso nel [la modifica degli stili del controllo List](../mfc/changing-list-control-styles.md) argomento.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)

