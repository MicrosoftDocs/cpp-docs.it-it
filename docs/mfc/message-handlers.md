---
description: 'Altre informazioni su: gestori di messaggi'
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
ms.openlocfilehash: dc3f52956f125542ef0c5d879543f1e8a49e803b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97203367"
---
# <a name="message-handlers"></a>Gestori di messaggi

In MFC, una funzione *gestore* dedicata elabora ogni messaggio separato. Le funzioni del gestore di messaggi sono funzioni membro di una classe. In questa documentazione vengono utilizzati in modo intercambiabile i termini *funzione membro gestore* messaggi, *funzione gestore* messaggi, *gestore messaggi* e *gestore* . Alcuni tipi di gestori di messaggi sono detti anche "gestori di comandi".

La scrittura di gestori di messaggi rappresenta una gran parte del lavoro di scrittura di un'applicazione Framework. In questa famiglia di articoli viene descritto il funzionamento del meccanismo di elaborazione dei messaggi.

Il gestore di un messaggio esegue le operazioni desiderate in risposta a tale messaggio. È possibile creare i gestori usando la [creazione guidata classe](reference/mfc-class-wizard.md) della classe, quindi compilare il codice del gestore usando l'editor del codice sorgente.

È possibile utilizzare tutte le funzionalità di Microsoft Visual C++ e MFC per scrivere i gestori. Per un elenco di tutte le classi, vedere [Cenni preliminari sulle librerie di classi](class-library-overview.md) in riferimenti a *MFC*.

## <a name="see-also"></a>Vedi anche

[Messaggi e comandi nel Framework](messages-and-commands-in-the-framework.md)
