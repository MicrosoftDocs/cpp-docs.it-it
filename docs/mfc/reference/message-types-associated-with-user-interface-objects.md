---
title: I tipi associati a oggetti dell'interfaccia utente del messaggio | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.codewiz.uiobject.msgs
dev_langs:
- C++
helpviewer_keywords:
- message types and user interface objects [MFC]
ms.assetid: 681ee1a7-f6e6-4ea0-9fc6-1fb53a35516e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bd89f19547eef8ade9d23a6176ea74cb49586857
ms.sourcegitcommit: 997e6b7d336cddb388bb6e9e56527725fcaa0624
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/08/2018
ms.locfileid: "48860290"
---
# <a name="message-types-associated-with-user-interface-objects"></a>Tipi di messaggi associati a oggetti dell'interfaccia utente

Nella tabella seguente illustra i tipi di oggetti con cui si usa e i tipi di messaggi associati ad essi.

### <a name="user-interface-objects-and-associated-messages"></a>Oggetti dell'interfaccia utente e i messaggi associati

|ID oggetto|Messages|
|---------------|--------------|
|Nome della classe, che rappresenta la finestra che lo contiene|Messaggi di Windows appropriati a un [CWnd](../../mfc/reference/cwnd-class.md)-classe derivata: una finestra di dialogo, finestra, finestra figlio, finestra figlio MDI o finestra cornice di primo livello.|
|Identificatore del menu di scelta o tasto di scelta rapida|-Messaggio di comando (viene eseguita la funzione di programma).<br />-Messaggio UPDATE_COMMAND_UI (aggiorna dinamicamente la voce di menu).|
|Identificatore del controllo|Controllare i messaggi di notifica per il tipo di controllo selezionato.|

## <a name="see-also"></a>Vedere anche

[Mapping di messaggi a funzioni](../../mfc/reference/mapping-messages-to-functions.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)<br/>
[Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Una funzione Virtual in override](../../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)<br/>
[Esplorazione della struttura delle classi](../../ide/navigating-the-class-structure-visual-cpp.md)
