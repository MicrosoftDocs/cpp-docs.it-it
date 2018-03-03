---
title: Gestione della visualizzazione corrente | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e1510b005f452174acfe8ad65ae3f66cf8aafaa2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="managing-the-current-view"></a>Gestione della visualizzazione corrente
Come parte dell'implementazione predefinita di finestre cornice, una finestra cornice tiene traccia della visualizzazione attualmente attiva. Se la finestra cornice contiene più di una visualizzazione, come ad esempio in una finestra con barra di divisione, la visualizzazione corrente è la visualizzazione utilizzata più di recente. La visualizzazione attiva è indipendente dalla finestra attiva in Windows o dallo stato attivo per l'input corrente.  
  
 Quando viene modificata la visualizzazione attiva, il framework di notifica della visualizzazione corrente chiamando il relativo [OnActivateView](../mfc/reference/cview-class.md#onactivateview) funzione membro. È possibile stabilire se la visualizzazione viene attivata o disattivata esaminando il parametro `OnActivateView` di `bActivate`. Per impostazione predefinita, `OnActivateView` imposta lo stato attivo sulla visualizzazione corrente all'atto dell'attivazione. È possibile eseguire l'override di `OnActivateView` per eseguire qualsiasi elaborazione speciale quando la visualizzazione viene disattivata o riattivata. Ad esempio, è possibile che si desideri fornire indicazioni visive speciali per distinguere la visualizzazione attiva da altre visualizzazioni inattive.  
  
 Una finestra cornice inoltra i comandi per la relativa visualizzazione corrente (attiva), come descritto in [comandi (Routing)](../mfc/command-routing.md), come parte del routing dei comandi standard.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di finestre cornice](../mfc/using-frame-windows.md)

