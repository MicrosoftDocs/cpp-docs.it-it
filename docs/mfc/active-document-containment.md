---
description: 'Altre informazioni su: contenimento dei documenti attivi'
title: Contenimento dei documenti attivi
ms.date: 11/04/2016
helpviewer_keywords:
- active documents [MFC], containers
- containers [MFC], active document
- MFC, COM support
- active document containers [MFC], about active document containers
- MFC COM, active document containment
ms.assetid: b8dfa74b-75ce-47df-b75e-fc87b7f7d687
ms.openlocfilehash: 9a190e0203152e2411699aa601a095a530303546
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97150384"
---
# <a name="active-document-containment"></a>Contenimento dei documenti attivi

Il contenimento dei documenti attivi è una tecnologia che fornisce un singolo frame in cui utilizzare i documenti, anziché forzare la creazione e l'utilizzo di più frame dell'applicazione per ogni tipo di documento. Si differenzia dalla tecnologia OLE di base in quanto OLE funziona con gli oggetti incorporati all'interno di un documento composto in cui può essere attivo solo un singolo elemento di contenuto. Con il contenimento dei documenti attivi, si attiva un intero documento, ovvero un'intera applicazione, inclusi i menu associati, le barre degli strumenti e così via, all'interno del contesto di un singolo frame.

La tecnologia di contenimento dei documenti attivi è stata sviluppata in origine per Microsoft Office per implementare il binder di Office. Tuttavia, la tecnologia è sufficientemente flessibile per supportare contenitori di documenti attivi diversi da Office Binder e può supportare i server di documenti diversi dalle applicazioni Office e compatibili con Office.

L'applicazione che ospita i documenti attivi è denominata [contenitore di documenti attivi](active-document-containers.md). Esempi di tali contenitori sono Microsoft Office Binder o Microsoft Internet Explorer.

Il contenimento dei documenti attivi viene implementato come un set di estensioni ai documenti OLE, la tecnologia dei documenti compositi di OLE. Le estensioni sono interfacce aggiuntive che consentono a un oggetto incorporabile incorporato di rappresentare un intero documento anziché una singola parte di contenuto incorporato. Come per i documenti OLE, il contenimento dei documenti attivi usa un contenitore che fornisce lo spazio di visualizzazione per i documenti attivi e i server che forniscono le funzionalità di manipolazione e interfaccia utente per i documenti attivi.

Un [server di documenti attivo](active-document-servers.md) è un'applicazione (ad esempio Word, Excel o PowerPoint) che supporta una o più classi di documenti attive, in cui ogni oggetto supporta le interfacce di estensione che consentono l'attivazione dell'oggetto in un contenitore appropriato.

Un [documento attivo](active-documents.md) , fornito da un server di documenti attivo come Word o Excel, è essenzialmente un documento convenzionale a scalabilità completa incorporato come oggetto all'interno di un altro contenitore di documenti attivi. Diversamente dagli oggetti incorporati, i documenti attivi hanno il controllo completo sulle pagine e l'interfaccia completa dell'applicazione (con tutti i comandi e gli strumenti sottostanti) è disponibile all'utente per modificarli.

Un documento attivo è più comprensibile distinguerlo da un oggetto standard OLE embedded. Dopo la convenzione OLE, un oggetto incorporato è uno visualizzato all'interno della pagina del documento a cui è proprietario e il documento è gestito da un contenitore OLE. Il contenitore archivia i dati dell'oggetto incorporato con il resto del documento. Tuttavia, gli oggetti incorporati sono limitati perché non controllano la pagina in cui vengono visualizzati.

Gli utenti di un'applicazione contenitore di documenti attivi possono creare documenti attivi, denominati sezioni nel gestore di associazione di Office, usando le applicazioni preferite (purché queste applicazioni siano abilitate per il documento attivo), ma gli utenti possono gestire il progetto risultante come una singola entità, che può essere denominata, salvata, stampata in modo univoco e così via. Analogamente, un utente di un browser Internet è in grado di gestire l'intera rete, nonché i file system locali, come un'unica entità di archiviazione di documenti con la possibilità di esplorare i documenti in tale archiviazione da un'unica posizione.

## <a name="sample-programs"></a>Programmi di esempio

- L'esempio [MFCBIND](../overview/visual-cpp-samples.md) illustra l'implementazione di un'applicazione contenitore di documenti attivi.

## <a name="see-also"></a>Vedi anche

[MFC COM](mfc-com.md)
