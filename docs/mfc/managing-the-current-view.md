---
title: Gestione della visualizzazione corrente | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- views [MFC], and OnActivateView method [MFC]
- views [MFC], deactivating
- views [MFC], activating
- frame windows [MFC], current view
- OnActivateView method [MFC]
- views [MFC], current
- deactivating views [MFC]
- current view in frame window [MFC]
ms.assetid: 0a1cc22d-d646-4536-9ad2-3cb6d7092e4a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 09d29f4bc0b62e5824209759d45e63c1d9e2daa6
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36928740"
---
# <a name="managing-the-current-view"></a>Gestione della visualizzazione corrente
Come parte dell'implementazione predefinita di finestre cornice, una finestra cornice tiene traccia della visualizzazione attualmente attiva. Se la finestra cornice contiene più di una visualizzazione, come ad esempio in una finestra con barra di divisione, la visualizzazione corrente è la visualizzazione utilizzata più di recente. La visualizzazione attiva è indipendente dalla finestra attiva in Windows o dallo stato attivo per l'input corrente.  
  
 Quando viene modificata la visualizzazione attiva, il framework notificata la visualizzazione corrente chiamando il relativo [OnActivateView](../mfc/reference/cview-class.md#onactivateview) funzione membro. È possibile indicare se la vista è attivata o disattivata esaminando `OnActivateView`del *bActivate* parametro. Per impostazione predefinita, `OnActivateView` imposta lo stato attivo sulla visualizzazione corrente all'atto dell'attivazione. È possibile eseguire l'override di `OnActivateView` per eseguire qualsiasi elaborazione speciale quando la visualizzazione viene disattivata o riattivata. Ad esempio, è possibile che si desideri fornire indicazioni visive speciali per distinguere la visualizzazione attiva da altre visualizzazioni inattive.  
  
 Una finestra cornice inoltra i comandi per la relativa visualizzazione corrente (attiva), come descritto in [comandi (Routing)](../mfc/command-routing.md), come parte del routing dei comandi standard.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di finestre cornice](../mfc/using-frame-windows.md)

