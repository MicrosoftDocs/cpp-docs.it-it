---
title: Contenimento dei documenti attivi
ms.date: 11/04/2016
helpviewer_keywords:
- active documents [MFC], containers
- containers [MFC], active document
- MFC, COM support
- active document containers [MFC], about active document containers
- MFC COM, active document containment
ms.assetid: b8dfa74b-75ce-47df-b75e-fc87b7f7d687
ms.openlocfilehash: 22111a8b2f7048d9f62d9e3e2f6c270fdc9bace3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50612381"
---
# <a name="active-document-containment"></a>Contenimento dei documenti attivi

Contenimento dei documenti attivi è una tecnologia che fornisce un singolo frame in cui si desidera lavorare con i documenti, invece di dover creare e usare più frame dell'applicazione per ogni tipo di documento. Differisce dalla tecnologia di base OLE in quanto OLE funziona con oggetti incorporati all'interno di un documento composito in cui può essere attiva solo una singola parte di contenuto. Active document containment, si attiva un intero documento (vale a dire, un'intera applicazione, tra cui associati menu, barre degli strumenti e così via) nel contesto di un singolo frame.

Tecnologia active document containment è stato originariamente sviluppata per Microsoft Office implementare Raccoglitore di Office. Tuttavia, la tecnologia è sufficientemente flessibile per supportare i contenitori documenti attivi diverso da Raccoglitore di Office e può supportare i server di documento diverso da applicazioni di Office e compatibile con Office.

L'applicazione che ospita documenti attivi viene chiamato un [contenitore di documenti attivi](../mfc/active-document-containers.md). Esempi di tali contenitori sono il Raccoglitore Microsoft Office o Microsoft Internet Explorer.

Contenimento dei documenti attivi viene implementato come un set di estensioni OLE documenti, la tecnologia dei documenti compositi di OLE. Le estensioni sono interfacce aggiuntive che consentono a un oggetto sul posto, incorporabile rappresentare un intero documento anziché un singolo elemento di contenuto incorporato. Come per i documenti OLE, contenimento dei documenti attivi utilizza un contenitore che fornisce lo spazio di visualizzazione per i documenti attivi e i server che forniscono all'utente le funzionalità di interfaccia e la modifica di documenti attivi.

Un' [server documenti attivi](../mfc/active-document-servers.md) è un'applicazione (ad esempio Word, Excel o PowerPoint) che supporta uno o più classi documento attivo, in cui ogni oggetto stesso supporta le interfacce dell'estensione che consentono l'oggetto che deve essere attivata in un contenitore appropriato.

Un' [documento attivo](../mfc/active-documents.md) (fornito da un server documenti attivi, ad esempio Word o Excel) è essenzialmente un documento su larga scala, convenzionale che verrà incorporato come un oggetto all'interno di un altro contenitore documenti attivi. A differenza degli oggetti incorporati, i documenti attivi hanno il controllo completo sulle proprie pagine e l'interfaccia completo dell'applicazione (con tutti i relativi sottostante comandi e strumenti) è disponibile per l'utente per la modifica.

Un documento attivo può essere illustrato meglio per distinguerlo da un oggetto incorporato OLE standard. Seguire la convenzione OLE, un oggetto incorporato corrisponde a uno che viene visualizzato all'interno della pagina del documento che ne è proprietario e il documento è gestito da un contenitore OLE. Il contenitore archivia i dati dell'oggetto incorporato con il resto del documento. Tuttavia, gli oggetti incorporati sono limitati in quanto non controllano la pagina in cui appaiono.

Gli utenti di un'applicazione contenitore documenti attivi possono creare documenti attivi (denominati sezioni Raccoglitore di Office) usando le applicazioni preferite (fornito da queste applicazioni sono compatibili con i documenti attivi), ma gli utenti possono gestire il progetto risultante come una singola entità, che possono essere denominate in modo univoco, salvato, stampate e così via. Nello stesso modo, un utente di un browser Internet può considerare l'intera rete, nonché i file System locali, come un'entità di archiviazione singolo documento con la possibilità di esplorare i documenti nella che l'archiviazione da un'unica posizione.

## <a name="sample-programs"></a>Programmi di esempio

- Il [MFCBIND](../visual-cpp-samples.md) esempio illustra l'implementazione di un'applicazione contenitore documenti attivi.

## <a name="see-also"></a>Vedere anche

[MFC COM](../mfc/mfc-com.md)

