---
title: Contenimento dei documenti attivi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- active documents [MFC], containers
- containers [MFC], active document
- MFC, COM support
- active document containers [MFC], about active document containers
- MFC COM, active document containment
ms.assetid: b8dfa74b-75ce-47df-b75e-fc87b7f7d687
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 749d4badb3a7b5a2c61fa753a840765f14e2a329
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="active-document-containment"></a>Contenimento dei documenti attivi
Contenimento dei documenti attivi è una tecnologia che fornisce un singolo frame in cui si desidera lavorare con i documenti, anziché dover creare e utilizzare più frame di applicazioni per ogni tipo di documento. Differisce dalla tecnologia di base OLE in OLE funziona con oggetti incorporati all'interno di un documento composito in cui può essere attivo solo un singolo elemento di contenuto. Active document containment, si attiva un intero documento (ovvero, un'intera applicazione, inclusi menu associati, barre degli strumenti e così via) all'interno del contesto di un singolo fotogramma.  
  
 La tecnologia active document containment è stata sviluppata per Microsoft Office implementare Raccoglitore di Office. Tuttavia, la tecnologia è sufficientemente flessibile per supportare i contenitori documenti attivi diverso da Raccoglitore di Office e può supportare i server di documenti diverso da applicazioni di Office e compatibile con Office.  
  
 L'applicazione che ospita documenti attivi viene chiamato un [contenitore documenti attivi](../mfc/active-document-containers.md). Esempi di tali contenitori sono il Raccoglitore Microsoft Office o Microsoft Internet Explorer.  
  
 Contenimento dei documenti attivi viene implementato come un set di estensioni a OLE documenti, la tecnologia dei documenti compositi di OLE. Le estensioni sono interfacce aggiuntive che consentono a un oggetto incorporabile, sul posto rappresentare un intero documento anziché un singolo elemento di contenuto incorporato. Come con i documenti OLE, contenimento dei documenti attivi Usa un contenitore che fornisce lo spazio di visualizzazione per i documenti attivi e i server che forniscono all'utente le funzionalità di interfaccia e la modifica di documenti attivi.  
  
 Un [server documenti attivi](../mfc/active-document-servers.md) è un'applicazione (ad esempio Word, Excel o PowerPoint) che supporta uno o più classi documento attivo, in cui ogni oggetto stesso supporta le interfacce dell'estensione che consentono l'oggetto che deve essere attivata in un contenitore appropriato.  
  
 Un [documento attivo](../mfc/active-documents.md) (fornito da un server di documenti attivi, ad esempio Word o Excel) è essenzialmente un documento su larga scala, convenzionale incorporato come un oggetto all'interno di un altro contenitore di documenti attivi. A differenza di oggetti incorporati, i documenti attivi dispongono del controllo completo sulle proprie pagine e l'interfaccia completa dell'applicazione (con tutti i sottostante comandi e strumenti) è disponibile per l'utente per la modifica.  
  
 Un documento attivo viene compreso meglio se viene distinto da un oggetto OLE incorporato standard. Secondo la convenzione OLE, un oggetto incorporato corrisponde a uno che viene visualizzato all'interno della pagina del documento che ne è proprietario e il documento è gestito da un contenitore OLE. Il contenitore archivia i dati dell'oggetto incorporato con il resto del documento. Tuttavia, gli oggetti incorporati sono limitati in quanto non controllano la pagina in cui appaiono.  
  
 Gli utenti di un'applicazione contenitore documenti attivi possono creare documenti attivi (denominati sezioni Raccoglitore di Office) utilizzando le applicazioni preferite (purché queste applicazioni siano compatibili con i documenti attivi), ma gli utenti possono gestire il progetto risulta come un singola entità, possono essere denominate in modo univoco, salvata, stampa e così via. Nello stesso modo, un utente di un browser Internet può trattare l'intera rete, nonché i file System locali, come una singola entità di archiviazione con la possibilità di esplorare i documenti che l'archiviazione da un'unica posizione.  
  
## <a name="sample-programs"></a>Programmi di esempio  
  
-   Il [MFCBIND](../visual-cpp-samples.md) esempio viene illustrata l'implementazione di un'applicazione contenitore documenti attivi.  
  
## <a name="see-also"></a>Vedere anche  
 [MFC COM](../mfc/mfc-com.md)

