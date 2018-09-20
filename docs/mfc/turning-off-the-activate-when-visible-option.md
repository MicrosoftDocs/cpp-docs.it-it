---
title: La disattivazione dell'opzione attivo quando visibile | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX controls [MFC], activate options
- Activate When Visible option [MFC]
ms.assetid: 8f7ddc5a-a7a6-4da8-bcb9-1b569f0ecb48
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7cb585496e6acf1c0ad94a43500e6d9a4830a2ac
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46381283"
---
# <a name="turning-off-the-activate-when-visible-option"></a>Disattivazione dell'opzione Attivo quando visibile

Un controllo presenta due stati di base: attivo e inattivo. Tradizionalmente, questi stati si distinguevano a seconda che il controllo avesse o meno una finestra. Un controllo attivo aveva una finestra; un controllo inattivo invece no. Con l'introduzione dell'attivazione senza finestra, questa differenza non è più universale, ma è ancora valida per molti controlli.

Confrontato con il resto dell'inizializzazione generalmente eseguita da un controllo ActiveX, la creazione di una finestra è un'operazione estremamente complessa. In teoria, un controllo creasse relativa finestra fino a quando non è assolutamente necessario.

Molti controlli non sono necessario essere attivi l'intera ora che sono visibili in un contenitore. Spesso, un controllo può rimanere nello stato inattivo fino a quando l'utente esegue un'operazione che richiede lo rende attivo (ad esempio, facendo clic con il mouse o premendo il tasto TAB). Affinché un controllo deve rimanere inattivo fino a quando il contenitore deve per attivarlo, rimuovere il **OLEMISC_ACTIVATEWHENVISIBLE** flag dal flag del controllo:

[!code-cpp[NVC_MFC_AxOpt#9](../mfc/codesnippet/cpp/turning-off-the-activate-when-visible-option_1.cpp)]

Il **OLEMISC_ACTIVATEWHENVISIBLE** flag viene omesso automaticamente se si sceglie di disattivare il **attivo quando visibile** opzione il [impostazioni di controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) pagina dei controlli ActiveX di MFC Creazione guidata controllo quando si crea il controllo.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)

