---
title: Gestione della visualizzazione corrente
ms.date: 11/04/2016
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
ms.openlocfilehash: d2ce9d77234260ebcb1946dd381264fb6654a91c
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84621316"
---
# <a name="managing-the-current-view"></a>Gestione della visualizzazione corrente

Come parte dell'implementazione predefinita di finestre cornice, una finestra cornice tiene traccia della visualizzazione attualmente attiva. Se la finestra cornice contiene più di una visualizzazione, come ad esempio in una finestra con barra di divisione, la visualizzazione corrente è la visualizzazione utilizzata più di recente. La visualizzazione attiva è indipendente dalla finestra attiva in Windows o dallo stato attivo per l'input corrente.

Quando la visualizzazione attiva viene modificata, il framework invia una notifica alla visualizzazione corrente chiamando la relativa funzione membro [OnActivateView](reference/cview-class.md#onactivateview) . È possibile determinare se la visualizzazione viene attivata o disattivata esaminando il `OnActivateView` parametro *bActivate* . Per impostazione predefinita, `OnActivateView` imposta lo stato attivo sulla visualizzazione corrente all'atto dell'attivazione. È possibile eseguire l'override di `OnActivateView` per eseguire qualsiasi elaborazione speciale quando la visualizzazione viene disattivata o riattivata. Ad esempio, è possibile che si desideri fornire indicazioni visive speciali per distinguere la visualizzazione attiva da altre visualizzazioni inattive.

Una finestra cornice trasmette i comandi alla visualizzazione corrente (attiva), come descritto in [routing](command-routing.md)dei comandi, come parte del routing dei comandi standard.

## <a name="see-also"></a>Vedere anche

[Utilizzo di finestre cornice](using-frame-windows.md)
