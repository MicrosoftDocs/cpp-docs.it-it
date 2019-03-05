---
title: Disattivazione dell'opzione Attivo quando visibile
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], activate options
- Activate When Visible option [MFC]
ms.assetid: 8f7ddc5a-a7a6-4da8-bcb9-1b569f0ecb48
ms.openlocfilehash: a7afe9617aa356916fe184828d7684f228293e39
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57304730"
---
# <a name="turning-off-the-activate-when-visible-option"></a>Disattivazione dell'opzione Attivo quando visibile

Un controllo presenta due stati di base: attivo e inattivo. Tradizionalmente, questi stati si distinguevano a seconda che il controllo avesse o meno una finestra. Un controllo attivo aveva una finestra; un controllo inattivo invece no. Con l'introduzione dell'attivazione senza finestra, questa differenza non è più universale, ma è ancora valida per molti controlli.

Confrontato con il resto dell'inizializzazione generalmente eseguita da un controllo ActiveX, la creazione di una finestra è un'operazione estremamente complessa. In teoria, un controllo creasse relativa finestra fino a quando non è assolutamente necessario.

Molti controlli non sono necessario essere attivi l'intera ora che sono visibili in un contenitore. Spesso, un controllo può rimanere nello stato inattivo fino a quando l'utente esegue un'operazione che richiede lo rende attivo (ad esempio, facendo clic con il mouse o premendo il tasto TAB). Affinché un controllo deve rimanere inattivo fino a quando il contenitore deve per attivarlo, rimuovere il **OLEMISC_ACTIVATEWHENVISIBLE** flag dal flag del controllo:

[!code-cpp[NVC_MFC_AxOpt#9](../mfc/codesnippet/cpp/turning-off-the-activate-when-visible-option_1.cpp)]

Il **OLEMISC_ACTIVATEWHENVISIBLE** flag viene omesso automaticamente se si sceglie di disattivare il **attivo quando visibile** opzione il [impostazioni di controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) pagina dei controlli ActiveX di MFC Creazione guidata controllo quando si crea il controllo.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC: Ottimizzazione](../mfc/mfc-activex-controls-optimization.md)
