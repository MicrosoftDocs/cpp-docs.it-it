---
title: "Definizioni di funzioni C | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "dichiaratori, funzioni"
  - "dichiarazione di funzioni, informazioni su dichiarazioni di funzioni"
  - "dichiarazione di funzioni, dichiaratori"
  - "dichiarazione di funzioni, variabili"
  - "corpo della funzione"
  - "dichiaratori di funzione"
  - "definizioni di funzioni"
  - "funzione (parametri), definizioni di funzioni"
  - "funzioni [C], parametri"
ms.assetid: ebab23c8-6eb8-46f3-b21d-570cd8457a80
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Definizioni di funzioni C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una definizione di funzione specifica il nome della funzione, i tipi e il numero di parametri che prevede di ricevere e il relativo tipo restituito.  Una definizione di funzione include inoltre un corpo della funzione con le dichiarazioni delle variabili locali e le istruzioni che determinano ciò che svolge la funzione.  
  
## Sintassi  
 *translation\-unit*:  
 *external\-declaration*  
  
 *translation\-unit external\-declaration*  
  
 *external\-declaration*: \/\* Consentita solo in ambito esterno \(file\) \*\/  
 *function\-definition*  
  
 `declaration`  
  
 *function\-definition*: \/\*Qui il dichiaratore è il dichiaratore di funzione \*\/  
 *declaration\-specifiers*  opt *attribute\-seq* opt *declarator declaration\-list* opt *compound\-statement*  
  
 \/\* *attribute\-seq* è specifico di Microsoft \*\/  
  
 I parametri del prototipo sono:  
  
 *declaration\-specifiers*:  
 *storage\-class\-specifier declaration\-specifiers*  opt  
  
 *type\-specifier declaration\-specifiers*  opt  
  
 *type\-qualifier declaration\-specifiers*  opt  
  
 *declaration\-list*:  
 *declaration*  
  
 *declaration\-list declaration*  
  
 `declarator`:  
 *pointer*  opt *direct\-declarator*  
  
 *direct\-declarator*: \/\* dichiaratore di funzione \*\/  
 *direct\-declarator*  **\(**  *parameter\-type\-list*  **\)** \/\* Dichiaratore nuovo stile \*\/  
  
 *direct\-declarator*  **\(**  *identifier\-list*  opt **\)** \/\* Dichiaratore stile obsoleto \*\/  
  
 L'elenco di parametri in una definizione utilizza questa sintassi:  
  
 *parameter\-type\-list*: \/\* Elenco di parametri \*\/  
 *parameter\-list*  
  
 *parameter\-list* **, ...**  
  
 *parameter\-list*:  
 *parameter\-declaration*  
  
 *parameter\-list* **,**  *parameter\-declaration*  
  
 *parameter\-declaration*:  
 *declaration\-specifiers declarator*  
  
 *declaration\-specifiers abstract declarator*  opt  
  
 L'elenco di parametri in una definizione di funzione obsoleta utilizza questa sintassi:  
  
 *identifier\-list*: \/\* Utilizzato nelle definizioni di funzione e nelle dichiarazioni obsolete \*\/  
 *identifier*  
  
 *identifier\-list* **,**  *identifier*  
  
 La sintassi per il corpo della funzione è:  
  
 *compound\-statement*: \/\* Corpo della funzione \*\/  
 **{**  `declaration`\-*list* opt *statement\-list* opt **}**  
  
 Gli unici identificatori della classe di archiviazione che consentono di modificare una dichiarazione della funzione sono `extern` e **static**.  L'identificatore `extern` significa che è possibile far riferimento alla funzione da altri file; ovvero il nome della funzione viene esportato al linker.  L'identificatore **static** significa che non è possibile far riferimento alla funzione da altri file; ovvero il nome non viene esportato dal linker.  Se in una definizione di funzione non viene visualizzata nessuna classe di archiviazione, viene previsto `extern`.  Tuttavia, la funzione è sempre visibile dal punto della definizione fino alla fine del file.  
  
 Gli elementi *declaration\-specifiers* facoltativi e il `declarator` obbligatorio insieme specificano il tipo restituito e il nome della funzione.  Il `declarator` è una combinazione dell'identificatore che denomina la funzione e le parentesi dopo il nome della funzione.  L'elemento *attribute\-seq* facoltativo, non terminale è una funzionalità specifica Microsoft definita in [Attributi di funzione](../c-language/function-attributes.md).  
  
 L'elemento *direct\-declarator* \(nella sintassi `declarator`\) specifica il nome della funzione definita e gli identificatori dei relativi parametri.  Se *direct\-declarator* include *parameter\-type\-list*, l'elenco specifica i tipi di tutti i parametri.  Tale dichiaratore funge anche da un prototipo di funzione per le successive chiamate alla funzione.  
  
 `declaration` in *declaration\-list* nelle definizioni di funzione non può contenere un *storage\-class\-specifier* diverso da **register**.  *type\-specifier* nella sintassi *declaration\-specifiers* può essere omesso solo se la classe di archiviazione **register** viene specificata per un valore di tipo `int`.  
  
 *compound\-statement* è il corpo della funzione che contiene le dichiarazioni delle variabili locali, i riferimenti agli elementi dichiarati esternamente e le istruzioni.  
  
 Nelle sezioni [Attributi di funzione](../c-language/function-attributes.md), [Classe di archiviazione](../c-language/storage-class.md), [Tipo restituito](../c-language/return-type.md), [Parametri](../c-language/parameters.md) e [Corpo della funzione](../c-language/function-body.md) vengono descritti dettagliatamente i componenti della definizione di funzione.  
  
## Vedere anche  
 [Funzioni](../c-language/functions-c.md)