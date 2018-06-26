---
title: Le categorie dei messaggi | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- messages [MFC], categories
- control-notification messages [MFC]
- Windows messages [MFC], categories
- controls [MFC], notifications
- command messages [MFC]
- messages [MFC], Windows
- message handling [MFC], message types
ms.assetid: 68e1db75-9da6-4a4d-b2c2-dc4d59f8d87b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 051fe93ef689959b0a0beb2b1b0f213adc942446
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929647"
---
# <a name="message-categories"></a>Categorie di messaggi
Quali tipi di messaggi è scrivere i gestori per sono disponibili tre categorie principali:  
  
1.  Windows (messaggi)  
  
     Si tratta principalmente i messaggi che iniziano con la **WM** prefisso, tranne WM_COMMAND. I messaggi di Windows vengono gestiti da windows e viste. Questi messaggi contengono spesso parametri che vengono utilizzati per determinare come gestire il messaggio.  
  
2.  Notifiche dei controlli  
  
     Sono inclusi i messaggi di notifica WM_COMMAND da controlli e altre finestre figlio alle finestre padre. Ad esempio, un controllo di modifica invia il relativo elemento padre un messaggio WM_COMMAND contenente il codice di notifica del controllo EN_CHANGE quando l'utente esegue un'azione che potrebbe aver modificato il testo nel controllo di modifica. Il gestore della finestra per il messaggio risponde al messaggio di notifica in modo appropriato, ad esempio recuperando il testo nel controllo.  
  
     Il framework indirizza i messaggi di notifica del controllo come gli altri **WM** messaggi. Un'unica eccezione, tuttavia, è il messaggio di notifica del controllo BN_CLICKED inviato dai pulsanti quando l'utente fa clic su essi. Questo messaggio viene trattato in modo speciale come un messaggio di comando e indirizzato come altri comandi.  
  
3.  Messaggi di comando  
  
     Sono inclusi i messaggi di notifica WM_COMMAND da oggetti dell'interfaccia utente: menu, pulsanti della barra degli strumenti e tasti di scelta rapida. Il framework elabora i comandi in modo diverso da altri messaggi e possono essere gestiti da più tipi di oggetti, come illustrato in [destinazioni comandi](../mfc/command-targets.md).  
  
##  <a name="_core_windows_messages_and_control.2d.notification_messages"></a> I messaggi di Windows e i messaggi di notifica del controllo  
 I messaggi nelle categorie 1 e 2, ovvero i messaggi di Windows e notifiche dei controlli, vengono gestiti da windows: degli oggetti delle classi derivate dalla classe `CWnd`. Sono inclusi `CFrameWnd`, `CMDIFrameWnd`, `CMDIChildWnd`, `CView`, `CDialog`, e le classi derivano da queste classi di base. Tali oggetti includono un `HWND`, un handle a una finestra di Windows.  
  
##  <a name="_core_command_messages"></a> Messaggi di comando  
 I messaggi nella categoria 3, ovvero comandi, può essere gestita da un'ampia gamma di oggetti: l'oggetto applicazione oltre alle finestre e visualizzazioni, documenti e modelli di documento. Quando un comando influisce direttamente su un determinato oggetto, è consigliabile gestire il comando di quell'oggetto. Ad esempio, il comando Apri del menu File è associato in modo logico con l'applicazione: l'applicazione apre un documento specificato quando viene ricevuto il comando. Pertanto, il gestore per il comando Apri è una funzione membro della classe dell'applicazione. Per ulteriori informazioni sui comandi e modo in cui vengono indirizzate agli oggetti, vedere [modo in cui il Framework chiama un gestore](../mfc/how-the-framework-calls-a-handler.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)

