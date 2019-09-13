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
ms.openlocfilehash: 25805187f88c5423ea41cd7cbe346e44e7d7d36a
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907466"
---
# <a name="message-handlers"></a>Gestori di messaggi

In MFC, una funzione *gestore* dedicata elabora ogni messaggio separato. Le funzioni del gestore di messaggi sono funzioni membro di una classe. In questa documentazione vengono utilizzati in modo intercambiabile i termini *funzione membro gestore*messaggi, *funzione gestore*messaggi, *gestore messaggi*e *gestore* . Alcuni tipi di gestori di messaggi sono detti anche "gestori di comandi".

La scrittura di gestori di messaggi rappresenta una gran parte del lavoro di scrittura di un'applicazione Framework. In questa famiglia di articoli viene descritto il funzionamento del meccanismo di elaborazione dei messaggi.

Il gestore di un messaggio esegue le operazioni desiderate in risposta a tale messaggio. È possibile creare i gestori usando la [creazione guidata classe](reference/mfc-class-wizard.md) della classe, quindi compilare il codice del gestore usando l'editor del codice sorgente.

È possibile utilizzare tutte le funzionalità di Microsoft Visual C++ e MFC per scrivere i gestori. Per un elenco di tutte le classi, vedere [Cenni preliminari sulle librerie di classi](../mfc/class-library-overview.md) in riferimenti a *MFC*.

## <a name="see-also"></a>Vedere anche

[Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)
