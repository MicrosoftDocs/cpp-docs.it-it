---
description: 'Per altre informazioni, vedere Procedura: visualizzare informazioni sui comandi nella barra di stato'
title: 'Procedura: visualizzare informazioni sui comandi nella barra di stato'
ms.date: 11/04/2016
helpviewer_keywords:
- prompts [MFC]
- displaying command status [MFC]
- status bars [MFC], message area
- status bars [MFC], displaying command information
ms.assetid: de895cbe-61ee-46bf-9787-76b247527d6d
ms.openlocfilehash: 568e8d356659d5267e8c4947f2981cd6243a7056
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330218"
---
# <a name="how-to-display-command-information-in-the-status-bar"></a>Procedura: visualizzare informazioni sui comandi nella barra di stato

Quando si esegue la creazione guidata applicazione per creare la struttura dell'applicazione, è possibile supportare una barra degli strumenti e una barra di stato. Una sola opzione della creazione guidata applicazione supporta entrambe. Quando è presente una barra di stato, l'applicazione fornisce automaticamente un feedback utile quando l'utente sposta il puntatore sugli elementi nei menu. Quando la voce di menu viene evidenziata, l'applicazione visualizza automaticamente una stringa di richiesta nella barra di stato. Ad esempio, quando l'utente sposta il puntatore del mouse sul comando **taglia** dal menu **modifica** , la barra di stato potrebbe visualizzare "taglia la selezione e la inserisce negli Appunti" nell'area dei messaggi della barra di stato. Il prompt consente all'utente di comprendere lo scopo della voce di menu. Questa operazione funziona anche quando l'utente fa clic su un pulsante della barra degli strumenti.

È possibile aggiungere questa guida per la barra di stato definendo le stringhe di richiesta per le voci di menu aggiunte al programma. A tale scopo, specificare le stringhe di richiesta quando si modificano le proprietà della voce di menu nell'editor dei menu. Le stringhe definite vengono archiviate nel file di risorse dell'applicazione. hanno gli stessi ID dei comandi che spiegano.

Per impostazione predefinita, la creazione guidata applicazione aggiunge **AFX_IDS_IDLEMESSAGE**, l'ID di un messaggio "Ready" standard, che viene visualizzato quando il programma è in attesa di nuovi messaggi. Se si specifica l'opzione Context-Sensitive guida nella creazione guidata applicazione, il messaggio viene modificato in "per la guida, premere F1".

## <a name="see-also"></a>Vedi anche

[Gestione e mapping dei messaggi](message-handling-and-mapping.md)
