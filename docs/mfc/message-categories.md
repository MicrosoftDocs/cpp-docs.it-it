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
ms.openlocfilehash: 686d5eef4aaa67785aa56133d820b637fbf4bb86
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364747"
---
# <a name="message-categories"></a>Categorie di messaggi

Quali tipi di messaggi si scrivono gestori per Ci sono tre categorie principali:

1. Windows (messaggi)

   Sono inclusi principalmente i messaggi che iniziano con il prefisso **WM_,** ad eccezione di WM_COMMAND. I messaggi di Windows vengono gestiti da finestre e visualizzazioni. Questi messaggi spesso dispongono di parametri utilizzati per determinare come gestire il messaggio.

1. Controllare le notifiche

   Sono inclusi WM_COMMAND i messaggi di notifica dai controlli e da altre finestre figlio alle finestre padre. Ad esempio, un controllo di modifica invia all'elemento padre un messaggio di WM_COMMAND contenente il codice di notifica del controllo EN_CHANGE quando l'utente ha eseguito un'azione che potrebbe aver modificato il testo nel controllo di modifica. Il gestore della finestra per il messaggio risponde al messaggio di notifica in modo appropriato, ad esempio recuperando il testo nel controllo.

   Il framework indirizza i messaggi di notifica del controllo come altri messaggi **di WM_.** Un'eccezione, tuttavia, è il messaggio di notifica di controllo BN_CLICKED inviato dai pulsanti quando l'utente fa clic su di essi. Questo messaggio viene trattato in modo speciale come un messaggio di comando e instradato come altri comandi.

1. Messaggi di comando

   Sono inclusi i messaggi di notifica WM_COMMAND dagli oggetti dell'interfaccia utente: menu, pulsanti della barra degli strumenti e tasti di scelta rapida. Il framework elabora i comandi in modo diverso dagli altri messaggi e possono essere gestiti da più tipi di oggetti, come illustrato in [Command Targets](../mfc/command-targets.md).

## <a name="windows-messages-and-control-notification-messages"></a><a name="_core_windows_messages_and_control.2d.notification_messages"></a>Messaggi di Windows e messaggi di notifica del controllo

I messaggi nelle categorie 1 e 2, ovvero i messaggi di Windows `CWnd`e le notifiche di controllo, vengono gestiti dalle finestre: oggetti di classi derivate dalla classe . Sono `CFrameWnd`incluse `CMDIFrameWnd` `CMDIChildWnd`, `CView` `CDialog`, , , e le classi personalizzate derivate da queste classi base. Tali oggetti `HWND`incapsulano un oggetto , un handle a una finestra di Windows.

## <a name="command-messages"></a><a name="_core_command_messages"></a>Messaggi di comando

I messaggi della categoria 3, ovvero i comandi, possono essere gestiti da una più ampia gamma di oggetti: documenti, modelli di documento e l'oggetto applicazione stesso, oltre a finestre e visualizzazioni. Quando un comando influisce direttamente su un particolare oggetto, è opportuno che l'oggetto gestisca il comando. Ad esempio, il comando Apri del menu File è associato logicamente all'applicazione: l'applicazione apre un documento specificato alla ricezione del comando. Pertanto, il gestore per il comando Open è una funzione membro della classe dell'applicazione. Per ulteriori informazioni sui comandi e su come vengono indirizzati agli oggetti, vedere [Come il framework chiama un gestore](../mfc/how-the-framework-calls-a-handler.md).

## <a name="see-also"></a>Vedere anche

[Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)
