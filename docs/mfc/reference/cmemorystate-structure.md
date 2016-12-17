---
title: "CMemoryState Structure | Microsoft Docs"
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
  - "CMemoryState"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMemoryState structure"
  - "rilevamento di perdite di memoria"
  - "memory leaks, rilevamento"
ms.assetid: 229d9de7-a6f3-4cc6-805b-5a9d9b1bfe1d
caps.latest.revision: 19
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMemoryState Structure
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un modo pratico per il rilevamento delle perdite di memoria nel programma.  
  
## Sintassi  
  
```  
struct CMemoryState  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMemoryState::CMemoryState](../Topic/CMemoryState::CMemoryState.md)|Crea una struttura del tipo di classe checkpoint della memoria dei controlli.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMemoryState::Checkpoint](../Topic/CMemoryState::Checkpoint.md)|Ottiene lo snapshot \(checkpoint\) dello stato corrente della memoria.|  
|[CMemoryState::Difference](../Topic/CMemoryState::Difference.md)|Calcola la differenza tra due oggetti di tipo `CMemoryState`.|  
|[CMemoryState::DumpAllObjectsSince](../Topic/CMemoryState::DumpAllObjectsSince.md)|Esegue il dump di un riepilogo di tutti gli oggetti attualmente allocati da un checkpoint precedente.|  
|[CMemoryState::DumpStatistics](../Topic/CMemoryState::DumpStatistics.md)|Statistiche di allocazione della memoria di stampa per un oggetto `CMemoryState`.|  
  
## Note  
 `CMemoryState` è una struttura e non dispone di una classe base.  
  
 "Una perdita di memoria" si verifica quando la memoria per un oggetto viene allocata nell'heap ma non viene rilasciata quando non è più necessario.  Tali perdite di memoria possono eventualmente generare errori di memoria insufficiente.  Esistono diversi modi per allocare e liberare la memoria nel programma:  
  
-   Utilizzando la famiglia**free** \/ `malloc`funzioni della libreria di runtime.  
  
-   Utilizzo delle funzioni di gestione della memoria di Windows, **LocalAlloc**\/**LocalFree** e **GlobalAlloc**\/**GlobalFree**.  
  
-   Utilizzando C\+\+ **new** e operatori **delete**.  
  
 La guida di diagnostica `CMemoryState` solo rileva le perdite di memoria causate quando la memoria allocata tramite l'operatore **new** non viene rilasciata utilizzando **delete**.  Gli altri due gruppi di funzioni di gestione della memoria disponibili per i programmi non c\+\+ e combinando relativi a **new** e **delete** lo stesso programma non è consigliata.  Una macro aggiuntiva, `DEBUG_NEW`, consente di sostituire l'operatore **new** quando è necessaria la verifica del numero di riga e del file delle allocazioni di memoria.  `DEBUG_NEW` viene utilizzato ogni volta che normalmente l'operatore **new**.  
  
 Come con altri diagnostica, la diagnostica `CMemoryState` è disponibile solo nelle versioni di debug del programma.  Una versione di debug deve avere la costante **\_DEBUG** definita.  
  
 Se si presume che il programma ha una perdita di memoria, è possibile utilizzare `Checkpoint`, **Difference**e le funzioni `DumpStatistics` per individuare la differenza tra lo stato della memoria \(oggetti allocati\) a due punti diversi di esecuzione del programma.  Queste informazioni possono essere utili nel determinare se una funzione è pulizia di tutti gli oggetti che alloca.  
  
 Se è sufficiente sapere se lo squilibrio l'allocazione e la disallocazione si verifica non fornisce informazioni sufficienti, è possibile utilizzare la funzione `DumpAllObjectsSince` per eseguire il dump di tutti gli oggetti allocati poiché la chiamata precedente a `Checkpoint`.  Questo dump illustrato l'ordine di allocazione, il file di origine e la riga in cui è stato allocato se si utilizza `DEBUG_NEW` per l'allocazione\) e la derivazione dell'oggetto, il relativo indirizzo e le dimensioni.  `DumpAllObjectsSince` inoltre chiama la funzione `Dump` di ogni oggetto per fornire informazioni sullo stato corrente.  
  
 Per ulteriori informazioni su come utilizzare `CMemoryState` e l'altra diagnostica, vedere [Eseguire il debug di applicazioni MFC](../Topic/MFC%20Debugging%20Techniques.md).  
  
> [!NOTE]
>  Le dichiarazioni di oggetti di tipo `CMemoryState` e le chiamate alle funzioni membro devono essere inquadrate le direttive `#if defined(_DEBUG)/#endif`.  In questo modo la diagnostica della memoria venga inclusa solo nelle build di debug del programma.  
  
## Gerarchia di ereditarietà  
 `CMemoryState`  
  
## Requisiti  
 **Header:** afx.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)