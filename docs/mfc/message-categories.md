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
ms.openlocfilehash: 07d9e706e8ed01a81ee580e7c4e11fa1f1a7a8df
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57326244"
---
# <a name="message-categories"></a>Categorie di messaggi

Quali tipi di messaggi è possibile scrivere i gestori per sono disponibili tre categorie principali:

1. Windows (messaggi)

   Ciò include principalmente i messaggi che iniziano con la **WM _** prefisso, ad eccezione di WM_COMMAND. I messaggi di Windows vengono gestiti da windows e le viste. Questi messaggi hanno spesso parametri che vengono usati per determinare come gestire il messaggio.

1. Notifiche dei controlli

   Ciò include WM_COMMAND (messaggi) notifica da controlli e altre finestre figlio nelle finestre padre. Ad esempio, un controllo di modifica invia padre un messaggio WM_COMMAND che contiene il codice di notifica del controllo EN_CHANGE quando l'utente ha eseguito un'azione che potrebbe aver modificato il testo nel controllo di modifica. Il gestore della finestra per il messaggio risponde al messaggio di notifica in modo appropriato, ad esempio recuperando il testo nel controllo.

   Il framework indirizza i messaggi di notifica del controllo come altro **WM _** messaggi. Un'unica eccezione, tuttavia, è il messaggio di notifica del controllo BN_CLICKED inviato dai pulsanti quando l'utente fa clic su essi. Questo messaggio viene trattato in modo speciale come un messaggio di comando e indirizzato come gli altri comandi.

1. Messaggi di comando

   Sono inclusi i messaggi di notifica WM_COMMAND da oggetti dell'interfaccia utente: menu, pulsanti della barra degli strumenti e tasti di scelta rapida. Il framework elabora i comandi in modo diverso dagli altri messaggi e possono essere gestiti da più tipi di oggetti, come illustrato in [destinazioni comandi](../mfc/command-targets.md).

##  <a name="_core_windows_messages_and_control.2d.notification_messages"></a> I messaggi di Windows e i messaggi di notifica del controllo

I messaggi nelle categorie 1 e 2, ovvero i messaggi di Windows e le notifiche dei controlli, vengono gestiti da windows: gli oggetti di classi derivate dalla classe `CWnd`. Sono inclusi `CFrameWnd`, `CMDIFrameWnd`, `CMDIChildWnd`, `CView`, `CDialog`, e le classi derivano da queste classi di base. Tali oggetti includono un `HWND`, un handle a una finestra di Windows.

##  <a name="_core_command_messages"></a> Messaggi di comando

I messaggi nella categoria 3: i comandi, può essere gestita da un'ampia gamma di oggetti: documenti, i modelli di documento e l'oggetto applicazione oltre a windows e le viste. Quando un comando influisce direttamente su un determinato oggetto, è opportuno avere creato l'oggetto di gestire il comando. Ad esempio, il comando Apri del menu File è associato in modo logico con l'applicazione: l'applicazione apre un documento specificato dopo aver ricevuto il comando. Pertanto, il gestore per il comando Apri è una funzione membro della classe dell'applicazione. Per altre informazioni sui comandi e come vengono instradati agli oggetti, vedere [chiamata di un gestore dal Framework](../mfc/how-the-framework-calls-a-handler.md).

## <a name="see-also"></a>Vedere anche

[Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)
