---
description: "Altre informazioni su: disattivazione dell'opzione attiva quando visibile"
title: Disattivazione dell'opzione Attivo quando visibile
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], activate options
- Activate When Visible option [MFC]
ms.assetid: 8f7ddc5a-a7a6-4da8-bcb9-1b569f0ecb48
ms.openlocfilehash: fcb5f7ef0518cbf257ef9ee7a659c9617092b7d8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97263868"
---
# <a name="turning-off-the-activate-when-visible-option"></a>Disattivazione dell'opzione Attivo quando visibile

Un controllo presenta due stati di base: attivo e inattivo. Tradizionalmente, questi stati si distinguevano a seconda che il controllo avesse o meno una finestra. Un controllo attivo aveva una finestra; un controllo inattivo invece no. Con l'introduzione dell'attivazione senza finestra, questa differenza non è più universale, ma è ancora valida per molti controlli.

Rispetto al resto dell'inizializzazione generalmente eseguita da un controllo ActiveX, la creazione di una finestra è un'operazione estremamente costosa. Idealmente, un controllo rinvia la creazione della finestra fino a quando non è assolutamente necessario.

Molti controlli non devono essere attivi per tutto il tempo in cui sono visibili in un contenitore. Spesso, un controllo può rimanere nello stato inattivo fino a quando l'utente non esegue un'operazione che ne richiede l'attivazione (ad esempio, facendo clic con il mouse o premendo il tasto TAB). Per fare in modo che un controllo rimanga inattivo fino a quando non è necessario che il contenitore lo attivi, rimuovere il flag di **OLEMISC_ACTIVATEWHENVISIBLE** dai flag vari del controllo:

[!code-cpp[NVC_MFC_AxOpt#9](../mfc/codesnippet/cpp/turning-off-the-activate-when-visible-option_1.cpp)]

Il flag di **OLEMISC_ACTIVATEWHENVISIBLE** viene omesso automaticamente se si disattiva l'opzione **attiva quando visibile** nella pagina [Impostazioni controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) della creazione guidata controllo ActiveX MFC quando si crea il controllo.

## <a name="see-also"></a>Vedi anche

[Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)
