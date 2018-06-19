---
title: Interpretazione dell'Input utente tramite una vista | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- interpreting user input through views [MFC]
- views [MFC], user interface and input
- input [MFC], view class [MFC]
- CView class [MFC], interpreting user input
- user input [MFC], interpreting through view class [MFC]
ms.assetid: f0302a70-661f-4781-8fe7-78f082bef2a5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5e3ade658046ad789a92bce044d12e5a6e76f7ce
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33349429"
---
# <a name="interpreting-user-input-through-a-view"></a>Interpretazione dell'input utente attraverso una visualizzazione
Altre funzioni membro della visualizzazione, gestiscono e interpretano tutto l'input utente. In genere si definiranno le funzioni membro di gestore di messaggi nella classe di visualizzazione per l'elaborazione:  
  
-   Windows [messaggi](../mfc/messages.md) generati dalle azioni del mouse e tastiera.  
  
-   [I comandi](../mfc/user-interface-objects-and-command-ids.md) dal menu, pulsanti della barra degli strumenti e tasti di scelta rapida.  
  
 Queste funzioni membro di gestore di messaggi interpretano le azioni seguenti come input di dati, selezione o la modifica, inclusi lo spostamento dei dati da e verso negli Appunti:  
  
-   Movimenti del mouse e fa clic, trascina e fa doppio clic su  
  
-   Sequenze di tasti  
  
-   Comandi di menu  
  
 I messaggi di Windows gli handle di visualizzazione dipende dalle esigenze dell'applicazione.  
  
 [Gestione e mapping dei messaggi](../mfc/message-handling-and-mapping.md) viene illustrato come assegnare voci di menu e altri oggetti dell'interfaccia utente ai comandi e come associare i comandi per le funzioni del gestore. [Gestione e mapping dei messaggi](../mfc/message-handling-and-mapping.md) anche spiega come MFC indirizza i comandi e invia messaggi Windows standard per gli oggetti che contengono i relativi gestori.  
  
 Ad esempio, l'applicazione potrebbe essere necessario implementare mouse diretto disegno nella visualizzazione. L'esempio Scribble viene illustrato come gestire il `WM_LBUTTONDOWN`, `WM_MOUSEMOVE`, e `WM_LBUTTONUP` rispettivamente, per iniziare, continuare e termina il disegno di un segmento di linea. D'altra parte, in alcuni casi potrebbe essere necessario interpretare un clic del mouse nella visualizzazione come una selezione. La visualizzazione `OnLButtonDown` funzione del gestore determina se l'utente è stato il disegno o la selezione. Se selezionato, il gestore determina se è stato il clic entro i limiti di un oggetto nella visualizzazione e, in tal caso, è possibile modificare la visualizzazione per mostrare l'oggetto selezionato.  
  
 La visualizzazione è possibile gestire anche alcuni comandi di menu, ad esempio quelle dal menu di modifica per tagliare, copiare, incollare o eliminare i dati selezionati negli Appunti utilizzando. Un gestore di questo tipo alcuni del membro relative agli Appunti chiamare le funzioni della classe `CWnd` per trasferire i dati selezionati per o dagli Appunti.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle visualizzazioni](../mfc/using-views.md)

