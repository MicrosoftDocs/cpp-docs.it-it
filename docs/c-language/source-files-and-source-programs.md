---
title: "File e programmi di origine | Microsoft Docs"
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
  - "file [C++], origine"
  - "programmi [C++], origine"
  - "file di origine, specifica nel compilatore"
  - "programmi di origine"
ms.assetid: 18bb2826-17da-48e5-92a2-10e649f1bc9f
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# File e programmi di origine
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un programma di origine può essere suddiviso in uno o più file di origine, denominati anche unità di conversione. L'input al compilatore è definito unità di conversione.  
  
## Sintassi  
 *translation\-unit*:  
 *external\-declaration*  
  
 *translation\-unit external\-declaration*  
  
 *external\-declaration*:  
 *function\-definition*  
  
 *declaration*  
  
 In [Cenni preliminari sulle dichiarazioni](../c-language/overview-of-declarations.md) viene illustrata la sintassi per l'elemento `declaration` non terminale, mentre in *Riferimenti al preprocessore* viene illustrata l'elaborazione dell'[unità di conversione](../preprocessor/phases-of-translation.md).  
  
> [!NOTE]
>  Per una spiegazione delle convenzioni di sintassi ANSI, vedere l'introduzione a [Riepilogo della sintassi del linguaggio C](../c-language/c-language-syntax-summary.md).  
  
 I componenti di un'unità di conversione sono dichiarazioni esterne che includono definizioni di funzioni e dichiarazioni di identificatore.  Tali dichiarazioni e definizioni possono essere presenti in file di origine, file di intestazione, librerie e altri file necessari al programma.  È necessario compilare ogni unità di conversione e collegare i file oggetti risultanti per realizzare un programma.  
  
 Un programma di origine C è una raccolta di direttive, pragma, dichiarazioni, definizioni, blocchi di istruzioni e funzioni.  Per essere componenti validi di un programma Microsoft C, ciascuno di questi elementi deve avere la sintassi illustrata nella presente documentazione, sebbene possa trovarsi in qualsiasi ordine nel programma \(in base alle regole indicate nella presente documentazione\).  La posizione di questi componenti in un programma influisce tuttavia sul modo in cui variabili e funzioni possono essere utilizzate in un programma. Per ulteriori informazioni, vedere [Durata, ambito, visibilità e collegamento](../c-language/lifetime-scope-visibility-and-linkage.md).  
  
 I file di origine non devono contenere istruzioni eseguibili.  Può essere ad esempio utile posizionare le definizioni di variabili in un file di origine e quindi dichiarare i riferimenti a tali variabili in altri file di origine che le utilizzano.  Questa tecnica semplifica la ricerca e l'aggiornamento delle definizioni.  Per lo stesso motivo, costanti e macro sono organizzate spesso in file distinti denominati file di inclusione o file di intestazione cui è possibile fare riferimento nei file di origine in base alle esigenze.  Vedere *Riferimenti al preprocessore* per informazioni su [macro](../preprocessor/macros-c-cpp.md) e [file di inclusione](../preprocessor/hash-include-directive-c-cpp.md).  
  
## Vedere anche  
 [Struttura dei programmi](../c-language/program-structure.md)