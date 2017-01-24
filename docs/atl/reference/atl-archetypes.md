---
title: "ATL Archetypes | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "archetype"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, archetypes"
ms.assetid: 809fb0af-c0f4-4cc0-b5bc-afe3de5d9722
caps.latest.revision: 9
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ATL Archetypes
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo contesto, *un archetipo* è una classe teorica che fornisce una raccolta di metodi, di membri dati, di funzioni statiche, typedef, o di altre funzionalità.  Il archetipo anche una descrizione della semantica necessaria per creare o utilizzare la classe per rappresentare un concetto particolare.  Le classi che svolgono la archetipo immettendo le stesse funzionalità includono lo stesso concetto e possono essere utilizzate ovunque sia l'archetipo possono essere utilizzate.  
  
 Gli archetipi sono utili in C\+\+ per la descrizione delle funzionalità dei valori validi per i parametri di modello.  La finestra di progettazione del modello dispone di una chiara delle funzionalità necessarie e sufficienti di parametro di modello e il compilatore applicato i requisiti sintattici in fase di compilazione, ma l'utente di un modello è necessaria la documentazione di descrivere la semantica e di consentire le relazioni tra gli archetipi e le classi da illustrare dettagliatamente.  
  
 Esempi di archetipi della libreria C\+\+ standard sono tipi diversi di iteratore e di contenitori.  Questi archetipi sono descritti negli argomenti [convenzioni di iteratore](../../standard-library/iterators.md) e [Contenitori STL](../../standard-library/stl-containers.md).  
  
 Il server ATL definisce i seguenti archetipi:  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Archetipo di lavoro](../../atl/reference/worker-archetype.md)|Le classi conformi a archetipo *di lavoro* forniscono il codice agli elementi dell'analisi di processo in coda in un pool di thread.|  
  
## Vedere anche  
 [Concetti](../../atl/active-template-library-atl-concepts.md)   
 [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md)