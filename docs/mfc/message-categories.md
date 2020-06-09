---
title: Categorie di messaggi
ms.date: 11/04/2016
helpviewer_keywords:
- messages [MFC], categories
- control-notification messages [MFC]
- Windows messages [MFC], categories
- controls [MFC], notifications
- command messages [MFC]
- messages [MFC], Windows
- message handling [MFC], message types
ms.assetid: 68e1db75-9da6-4a4d-b2c2-dc4d59f8d87b
ms.openlocfilehash: 3875a6931b4380f0531e4c1786de6dddfccb76ca
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84625461"
---
# <a name="message-categories"></a>Categorie di messaggi

Quali tipi di messaggi si scrivono i gestori per la presenza di tre categorie principali:

1. Windows (messaggi)

   Sono inclusi principalmente i messaggi che iniziano con il prefisso **WM_** , ad eccezione di WM_COMMAND. I messaggi di Windows vengono gestiti da finestre e viste. Questi messaggi presentano spesso parametri che vengono utilizzati per determinare la modalità di gestione del messaggio.

1. Notifiche di controllo

   Sono inclusi WM_COMMAND messaggi di notifica da controlli e altre finestre figlio alle finestre padre. Ad esempio, un controllo di modifica invia all'elemento padre un messaggio di WM_COMMAND contenente il codice di notifica del controllo EN_CHANGE quando l'utente ha effettuato un'azione che potrebbe aver modificato il testo nel controllo di modifica. Il gestore della finestra per il messaggio risponde al messaggio di notifica in modo appropriato, ad esempio il recupero del testo nel controllo.

   Il Framework instrada i messaggi di notifica del controllo come altri messaggi **WM_** . Un'eccezione, tuttavia, è rappresentata dal messaggio di notifica del controllo BN_CLICKED inviato dai pulsanti quando l'utente fa clic su di essi. Questo messaggio viene trattato in modo speciale come un messaggio di comando e instradato come gli altri comandi.

1. Messaggi di comando

   Sono inclusi WM_COMMAND messaggi di notifica da oggetti dell'interfaccia utente: menu, pulsanti della barra degli strumenti e tasti di scelta rapida. Il Framework elabora i comandi in modo diverso rispetto ad altri messaggi e può essere gestito da più tipi di oggetti, come illustrato nelle [destinazioni dei comandi](command-targets.md).

## <a name="windows-messages-and-control-notification-messages"></a><a name="_core_windows_messages_and_control.2d.notification_messages"></a>Messaggi di Windows e messaggi di notifica di controllo

I messaggi nelle categorie 1 e 2, ovvero messaggi di Windows e notifiche di controllo, sono gestiti da Windows: oggetti delle classi derivate dalla classe `CWnd` . Sono incluse `CFrameWnd` , `CMDIFrameWnd` , `CMDIChildWnd` , `CView` , `CDialog` e le classi derivate da queste classi di base. Tali oggetti incapsulano un oggetto `HWND` , un handle per una finestra di Windows.

## <a name="command-messages"></a><a name="_core_command_messages"></a>Messaggi di comando

I messaggi nella categoria 3, ovvero i comandi, possono essere gestiti da una varietà più ampia di oggetti: documenti, modelli di documento e oggetto applicazione, oltre a finestre e visualizzazioni. Quando un comando interessa direttamente un determinato oggetto, è opportuno che l'oggetto gestisca il comando. Ad esempio, il comando Apri nel menu file viene associato logicamente all'applicazione: l'applicazione apre un documento specificato al momento della ricezione del comando. Il gestore per il comando Open è quindi una funzione membro della classe dell'applicazione. Per ulteriori informazioni sui comandi e sul modo in cui vengono instradati agli oggetti, vedere [come il Framework chiama un gestore](how-the-framework-calls-a-handler.md).

## <a name="see-also"></a>Vedere anche

[Messaggi e comandi nel framework](messages-and-commands-in-the-framework.md)
