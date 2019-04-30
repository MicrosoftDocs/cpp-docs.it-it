---
title: Classi di routing dei comandi
ms.date: 11/04/2016
f1_keywords:
- vc.classes.command
helpviewer_keywords:
- MFC, command routing
- command routing [MFC], classes
ms.assetid: 4b50e689-2c54-4e6c-90f0-37333e22b2a1
ms.openlocfilehash: 264e931ba0468cdc44f27c55e5d259948c5392b5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62406054"
---
# <a name="command-routing-classes"></a>Classi di routing dei comandi

Quando l'utente interagisce con l'applicazione scegliendo menu o i pulsanti della barra di controllo con il mouse, l'applicazione invia i messaggi dall'oggetto di interfaccia utente interessati a un oggetto destinazione comando appropriato. Destinazione comando classi derivate da `CCmdTarget` comprendono [CWinApp](../mfc/reference/cwinapp-class.md), [CWnd](../mfc/reference/cwnd-class.md), [CDocTemplate](../mfc/reference/cdoctemplate-class.md), [CDocument](../mfc/reference/cdocument-class.md), [CView](../mfc/reference/cview-class.md), e le classi derivate da esse. Il framework supporta il routing automatica dei comandi in modo che i comandi possono essere gestiti dall'oggetto più appropriato attualmente attivo nell'applicazione.

Un oggetto della classe `CCmdUI` viene passato al comando Aggiorna delle destinazioni comandi dell'interfaccia utente ([ON_UPDATE_COMMAND_UI](reference/message-map-macros-mfc.md#on_update_command_ui)) i gestori che consente di aggiornare lo stato dell'interfaccia utente per un particolare comando (ad esempio, per controllare o rimuoverlo il controllo da voci di menu). Chiamare le funzioni di membro di `CCmdUI` oggetto per aggiornare lo stato dell'oggetto dell'interfaccia utente. Questo processo è lo stesso se l'oggetto dell'interfaccia utente associato a un particolare comando è una voce di menu o un pulsante o entrambi.

[CCmdTarget](../mfc/reference/ccmdtarget-class.md)<br/>
Funge da classe base per tutte le classi di oggetti che possono ricevere e rispondere ai messaggi.

[CCmdUI](../mfc/reference/ccmdui-class.md)<br/>
Fornisce un'interfaccia programmatica per aggiornare oggetti dell'interfaccia utente, ad esempio voci di menu o i pulsanti della barra di controllo. L'oggetto destinazione comando abilita, disabilita, controlla e/o Cancella l'oggetto dell'interfaccia utente con questo oggetto.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
