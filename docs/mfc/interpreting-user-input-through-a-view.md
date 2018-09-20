---
title: Interpretazione dell'Input utente attraverso una vista | Microsoft Docs
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
ms.openlocfilehash: 974324e296478f0ec36024d4427496d21255fbf7
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46421401"
---
# <a name="interpreting-user-input-through-a-view"></a>Interpretazione dell'input utente attraverso una visualizzazione

Altre funzioni membro della vista di gestire e interpretano l'input dell'utente. In genere si definirà funzioni membro di gestore di messaggi nella classe di visualizzazione per l'elaborazione:

- Windows [messaggi](../mfc/messages.md) generati dalle azioni del mouse e tastiera.

- [I comandi](../mfc/user-interface-objects-and-command-ids.md) dal menu, pulsanti della barra degli strumenti e tasti di scelta rapida.

Queste funzioni membro di gestore di messaggi interpretano le azioni seguenti come input di dati, selezione o la modifica, tra cui lo spostamento dei dati da e verso gli Appunti:

- Spostamenti del mouse e clic e trascina e doppio clic

- Sequenze di tasti

- Comandi di menu

I messaggi di Windows gli handle di visualizzazione varia in base alle esigenze dell'applicazione.

[La gestione e Mapping argomenti messaggi](../mfc/message-handling-and-mapping.md) spiega come assegnare le voci di menu e altri oggetti dell'interfaccia utente per i comandi e come associare i comandi per le funzioni del gestore. [La gestione e Mapping argomenti messaggi](../mfc/message-handling-and-mapping.md) inoltre viene spiegato come MFC instrada i comandi e invia i messaggi Windows standard per gli oggetti che contengono i relativi gestori.

Ad esempio, l'applicazione potrebbe essere necessario implementare mouse diretto di disegno nella visualizzazione. L'esempio di Scribble illustra come gestire i messaggi WM_LBUTTONDOWN e WM_MOUSEMOVE WM_LBUTTONUP rispettivamente per iniziare, continuare e termina il disegno di un segmento di linea. D'altra parte, in alcuni casi potrebbe essere necessario interpretare un clic del mouse nella visualizzazione come una selezione. La vista `OnLButtonDown` è determinata in funzione del gestore se l'utente è stato il disegno o selezione. Se si seleziona, il gestore potrebbe determinare se il clic avviene all'interno di un oggetto nella visualizzazione e, in questo caso, modificare la visualizzazione per mostrare l'oggetto è selezionato.

La visualizzazione può anche gestire alcuni comandi di menu, ad esempio quelli dal menu Modifica per tagliare, copiare, incollare o eliminare i dati selezionati usando gli Appunti. Tale gestore chiamerebbe alcune del membro relative agli Appunti funzioni della classe `CWnd` per trasferire un elemento dati selezionato da o verso gli Appunti.

## <a name="see-also"></a>Vedere anche

[Uso delle visualizzazioni](../mfc/using-views.md)

