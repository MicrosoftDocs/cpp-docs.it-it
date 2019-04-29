---
title: Gestori di messaggi
ms.date: 11/04/2016
helpviewer_keywords:
- message handlers [MFC]
- command handling [MFC], message handlers
- handlers [MFC]
- message handling [MFC], message handler functions
- handlers [MFC], command
- handlers [MFC], message
ms.assetid: 51bc4e76-dbe3-4cc2-b026-3199d56b2fa9
ms.openlocfilehash: 0d3ed6239b638a0e161cd7e3580f4fe6e1b4a7e7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62383763"
---
# <a name="message-handlers"></a>Gestori di messaggi

In MFC, un oggetto dedicato *gestore* funzione elabori ogni messaggio separato. Funzioni gestore messaggi sono funzioni membro di una classe. Questa documentazione Usa i termini *funzione di membro di gestore di messaggi*, *funzione del gestore messaggio*, *gestore di messaggi*, e *gestore*in modo intercambiabile. Alcuni tipi di gestori di messaggi sono detti anche "gestori di comandi".

Scrittura degli account di gestori messaggio per gran parte del lavoro svolto nella scrittura di un'applicazione framework. Questa serie di articoli descrive come funziona il meccanismo di elaborazione dei messaggi.

Funzionamento del gestore per un messaggio di eseguire questa operazione viene qualsiasi elemento da eseguire in risposta al messaggio. È possibile creare i gestori utilizzando la finestra delle proprietà della classe e quindi compilare il codice del gestore usando l'editor del codice sorgente.

È possibile usare tutte le funzionalità di Microsoft Visual C++ e MFC per scrivere i gestori. Per un elenco di tutte le classi, vedere [Class Library Overview](../mfc/class-library-overview.md) nel *riferimento MFC*.

## <a name="see-also"></a>Vedere anche

[Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)
