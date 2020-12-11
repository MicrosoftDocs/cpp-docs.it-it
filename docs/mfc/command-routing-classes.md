---
description: 'Altre informazioni su: classi di routing dei comandi'
title: Classi di routing dei comandi
ms.date: 11/04/2016
f1_keywords:
- vc.classes.command
helpviewer_keywords:
- MFC, command routing
- command routing [MFC], classes
ms.assetid: 4b50e689-2c54-4e6c-90f0-37333e22b2a1
ms.openlocfilehash: d469b119eb7c42c1385f27a3d8df54f3fd47c73f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159973"
---
# <a name="command-routing-classes"></a>Classi di routing dei comandi

Quando l'utente interagisce con l'applicazione scegliendo i menu o i pulsanti della barra di controllo con il mouse, l'applicazione invia messaggi dall'oggetto interfaccia utente interessato a un oggetto di destinazione comando appropriato. Le classi di destinazione comando derivate da `CCmdTarget` includono [CWinApp](reference/cwinapp-class.md), [CWnd](reference/cwnd-class.md), [CDocTemplate](reference/cdoctemplate-class.md), [CDocument](reference/cdocument-class.md), [CView](reference/cview-class.md)e le classi da esse derivate. Il Framework supporta il routing automatico dei comandi, in modo che i comandi possano essere gestiti dall'oggetto più appropriato attualmente attivo nell'applicazione.

Un oggetto della classe `CCmdUI` viene passato ai gestori di destinazioni dei comandi ' Aggiorna interfaccia utente ([ON_UPDATE_COMMAND_UI](reference/message-map-macros-mfc.md#on_update_command_ui)) per consentire di aggiornare lo stato dell'interfaccia utente per un particolare comando (ad esempio, per controllare o rimuovere il controllo dalle voci di menu). È possibile chiamare le funzioni membro dell' `CCmdUI` oggetto per aggiornare lo stato dell'oggetto dell'interfaccia utente. Questo processo è lo stesso se l'oggetto dell'interfaccia utente associato a un particolare comando è una voce di menu o un pulsante o entrambi.

[CCmdTarget](reference/ccmdtarget-class.md)<br/>
Funge da classe base per tutte le classi di oggetti che possono ricevere e rispondere ai messaggi.

[CCmdUI](reference/ccmdui-class.md)<br/>
Fornisce un'interfaccia a livello di codice per l'aggiornamento di oggetti dell'interfaccia utente, ad esempio voci di menu o pulsanti della barra di controllo. L'oggetto di destinazione del comando Abilita, Disabilita, verifica e/o cancella l'oggetto interfaccia utente con questo oggetto.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](class-library-overview.md)
