---
title: Categorie dei messaggi | Documenti Microsoft
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
- messages [MFC], categories
- control-notification messages [MFC]
- Windows messages [MFC], categories
- controls [MFC], notifications
- command messages [MFC]
- messages [MFC], Windows
- message handling [MFC], message types
ms.assetid: 68e1db75-9da6-4a4d-b2c2-dc4d59f8d87b
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: be3bc617c0f3a9915c7ae0314b0e3889ecc561f9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="message-categories"></a>Categorie di messaggi
Quali tipi di messaggi è scrivere i gestori per sono disponibili tre categorie principali:  
  
1.  Windows (messaggi)  
  
     Ciò include principalmente i messaggi che iniziano con la **WM _** prefisso, ad eccezione di **WM_COMMAND**. I messaggi di Windows vengono gestiti da windows e viste. Questi messaggi contengono spesso parametri che vengono utilizzati per determinare come gestire il messaggio.  
  
2.  Notifiche dei controlli  
  
     Ciò include **WM_COMMAND** messaggi di notifica da controlli e altre finestre figlio le finestre padre. Ad esempio, un controllo di modifica invia il relativo elemento padre un **WM_COMMAND** messaggio contenente il **EN_CHANGE** codice di notifica del controllo quando l'utente esegue un'azione che potrebbe aver modificato il testo nel controllo di modifica. Il gestore della finestra per il messaggio risponde al messaggio di notifica in modo appropriato, ad esempio recuperando il testo nel controllo.  
  
     Il framework indirizza i messaggi di notifica del controllo come gli altri **WM _** messaggi. Un'eccezione, tuttavia, è il **BN_CLICKED** inviato dai pulsanti quando l'utente fa clic in messaggio di notifica del controllo. Questo messaggio è considerato come un messaggio di comando in modo speciale e indirizzato come altri comandi.  
  
3.  Messaggi di comando  
  
     Ciò include **WM_COMMAND** messaggi di notifica da oggetti dell'interfaccia utente: menu, pulsanti della barra degli strumenti e i tasti di scelta rapida. Il framework elabora i comandi in modo diverso dagli altri messaggi e possono essere gestiti da più tipi di oggetti, come illustrato in [destinazioni comandi](../mfc/command-targets.md).  
  
##  <a name="_core_windows_messages_and_control.2d.notification_messages"></a>I messaggi di Windows e i messaggi di notifica dei controlli  
 I messaggi nelle categorie 1 e 2, ovvero i messaggi di Windows e notifiche dei controlli, vengono gestiti da windows: degli oggetti delle classi derivate dalla classe `CWnd`. Ciò include `CFrameWnd`, `CMDIFrameWnd`, `CMDIChildWnd`, `CView`, `CDialog`, e le classi derivano da queste classi di base. Tali oggetti includono un `HWND`, un handle a una finestra di Windows.  
  
##  <a name="_core_command_messages"></a>Messaggi di comando  
 I messaggi nella categoria 3, comandi, può essere gestita da un'ampia gamma di oggetti: l'oggetto applicazione oltre alle finestre e visualizzazioni, documenti e modelli di documento. Quando un comando influisce direttamente su un determinato oggetto, è consigliabile gestire il comando di tale oggetto. Ad esempio, il comando Apri del menu File è associato in modo logico con l'applicazione: l'applicazione apre un documento specificato quando viene ricevuto il comando. Pertanto, il gestore per il comando Apri è una funzione membro della classe dell'applicazione. Per ulteriori informazioni sui comandi e come vengono indirizzate agli oggetti, vedere [come il Framework chiama un gestore](../mfc/how-the-framework-calls-a-handler.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)

