---
title: La disattivazione dell'opzione attivo quando visibile | Documenti Microsoft
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
- MFC ActiveX controls [MFC], activate options
- Activate When Visible option [MFC]
ms.assetid: 8f7ddc5a-a7a6-4da8-bcb9-1b569f0ecb48
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 25521d75921b377730a7f9afac71f2a60c055216
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="turning-off-the-activate-when-visible-option"></a>Disattivazione dell'opzione Attivo quando visibile
Un controllo presenta due stati di base: attivo e inattivo. Tradizionalmente, questi stati si distinguevano a seconda che il controllo avesse o meno una finestra. Un controllo attivo aveva una finestra; un controllo inattivo invece no. Con l'introduzione dell'attivazione senza finestra, questa differenza non è più universale, ma è ancora valida per molti controlli.  
  
 Confronto con il resto dell'inizializzazione generalmente eseguita da un controllo ActiveX, la creazione di una finestra è un'operazione estremamente complessa. In teoria, un controllo creasse la finestra fino a quando non è assolutamente necessario.  
  
 Molti controlli non è necessario attivare l'intera ora che sono visibili in un contenitore. Spesso, un controllo può rimanere in stato inattivo finché l'utente esegue un'operazione che richiede lo rende attivo (ad esempio, facendo clic con il mouse o premendo il tasto TAB). Affinché un controllo che deve trascorrere fino a quando il contenitore deve essere attivato, rimuovere il **OLEMISC_ACTIVATEWHENVISIBLE** flag da flag del controllo:  
  
 [!code-cpp[NVC_MFC_AxOpt#9](../mfc/codesnippet/cpp/turning-off-the-activate-when-visible-option_1.cpp)]  
  
 Il **OLEMISC_ACTIVATEWHENVISIBLE** flag automaticamente viene omesso se si disattiva la **attivo quando visibile** opzione il [le impostazioni di controllo](../mfc/reference/control-settings-mfc-activex-control-wizard.md) pagina di ActiveX MFC Creazione guidata controllo quando si crea il controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)

