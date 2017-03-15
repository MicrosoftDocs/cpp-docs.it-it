---
title: "Esempio di contenimento di documenti attivi: raccoglitore di Office | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "contenitori documenti attivi [C++], esempi"
  - "documenti attivi [C++], contenitori"
  - "contenitori [C++], documento attivo"
  - "esempi [C++], contenimento dei documenti attivi"
  - "MFC COM [C++], contenimento dei documenti attivi"
  - "raccoglitore di Office"
ms.assetid: 70dd8568-e8bc-44ac-bf5e-678767efe8e3
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Esempio di contenimento di documenti attivi: raccoglitore di Office
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il raccoglitore Microsoft Office è un esempio di un contenitore di documenti attivi.  Un Raccoglitore microsoft Office include due riquadri primari, quali i contenitori in genere sì.  Il riquadro sinistro contiene icone che corrispondono ai documenti attivi nel gestore di associazione.  Ogni documento viene chiamato *una sezione* all'interno del gestore di associazione.  Ad esempio, un gestore di associazione può contenere i documenti di Word, i file PowerPoint, fogli di calcolo di Excel, e così via.  
  
 Fare clic su un'icona nel riquadro sinistro attiva il documento attivo corrispondente.  Il riquadro di destra binder viene visualizzato il contenuto del documento attivo attualmente selezionato.  
  
 Se si apre e attivare un documento di Word in un raccoglitore, la barra dei menu e le barre degli strumenti di Word visualizzate all'inizio del frame di visualizzazione e modificarne il contenuto del documento utilizzando qualsiasi comando strumento di Word.  Tuttavia, la barra dei menu è una combinazione delle barre dei menu di Word che il gestore di associazione.  Poiché sia il gestore di associazione che Excel presentano menu **?**, il contenuto dei rispettivi menu viene unito.  I contenitori di documenti attivi come il Raccoglitore Office forniscono automaticamente l'unione dei menu **?** per ulteriori informazioni, vedere [L'unione di menu?](../mfc/help-menu-merging.md).  
  
 Quando si seleziona un documento attivo di un altro tipo di applicazione, le modifiche all'interfaccia binder per adattarsi a quello del tipo di applicazione del documento attivo.  Ad esempio, se un gestore di associazione contiene un foglio di calcolo di Excel, osserverete che i menu nella modifica del raccoglitore quando si seleziona la sezione del foglio di calcolo di Excel.  
  
 Esistono, naturalmente, altri possibili tipi di contenitori accanto ai gestori di associazione.  Esplora file utilizza l'interfaccia tipica del doppio\- riquadro in cui il riquadro sinistro utilizza un controllo struttura ad albero per visualizzare un elenco gerarchico delle directory in un'unità o in una rete, mentre il riquadro di destra vengono visualizzati i file contenuti nella directory selezionata.  Un browser internet tipo di contenitore \(ad esempio Microsoft Internet Explorer\), anziché tramite un'interfaccia di doppio\- riquadro, in genere ha un singolo frame e fornisce la navigazione mediante collegamenti ipertestuali.  
  
## Vedere anche  
 [Contenimento dei documenti attivi](../mfc/active-document-containment.md)