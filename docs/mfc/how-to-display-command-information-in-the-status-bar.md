---
title: 'Procedura: visualizzare informazioni sui comandi nella barra di stato | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- prompts [MFC]
- displaying command status [MFC]
- status bars [MFC], message area
- status bars [MFC], displaying command information
ms.assetid: de895cbe-61ee-46bf-9787-76b247527d6d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 440e550e6e1ba5a82cac3f35dcb3c76b346b5343
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33346045"
---
# <a name="how-to-display-command-information-in-the-status-bar"></a>Procedura: visualizzare informazioni sui comandi nella barra di stato
Quando si esegue la creazione guidata applicazione per creare lo scheletro dell'applicazione, è possibile supportare una barra degli strumenti e una barra di stato. Solo un'opzione nella creazione guidata applicazione supporta entrambi. Quando una barra di stato è presente, l'applicazione fornisce automaticamente i commenti e suggerimenti utili quando l'utente sposta il puntatore del mouse sugli elementi dei menu. L'applicazione visualizza automaticamente una stringa di richiesta nella barra di stato quando la voce di menu viene evidenziata. Ad esempio, quando l'utente sposta il puntatore sul **Taglia** comando il **modifica** menu, la barra di stato potrebbe visualizzare "Taglia la selezione e la inserisce negli Appunti" nell'area dei messaggi della barra di stato. Il prompt dei comandi consente all'utente di comprendere lo scopo della voce di menu. Questa operazione funziona solo quando l'utente sceglie un pulsante della barra degli strumenti.  
  
 È possibile aggiungere a questa Guida in linea della barra di stato definendo le stringhe di richiesta per le voci di menu che aggiungono al programma. A tale scopo, specificare le stringhe di richiesta quando si modificano le proprietà della voce di menu nell'editor dei menu. Le stringhe definite vengono archiviate nel file di risorse dell'applicazione. hanno lo stesso ID dei comandi in cui viene spiegato.  
  
 Per impostazione predefinita, la creazione guidata applicazione aggiunge `AFX_IDS_IDLEMESSAGE`, l'ID di un messaggio standard "Pronto", che viene visualizzato quando il programma è in attesa di nuovi messaggi. Se si specifica l'opzione Guida sensibile al contesto nella creazione guidata applicazione, il messaggio viene modificato in "Per informazioni, premere F1".  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione e mapping dei messaggi](../mfc/message-handling-and-mapping.md)

