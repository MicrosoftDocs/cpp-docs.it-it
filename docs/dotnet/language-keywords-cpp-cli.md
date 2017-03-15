---
title: "Parole chiave del linguaggio (C++/CLI) | Microsoft Docs"
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
helpviewer_keywords: 
  - "parole chiave [C++]"
ms.assetid: 021013b2-70ac-4df9-aa77-4af1c67a1a67
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Parole chiave del linguaggio (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Diverse parole chiave del linguaggio sono state modificate in [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] rispetto alle estensioni gestite di C\+\+.  
  
 Nella nuova sintassi di [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)], il doppio carattere di sottolineatura è stato rimosso come prefisso da tutte le parole chiave, con l'eccezione di `__identifier` per cui è stato conservato.  Una proprietà viene ad esempio dichiarata come `property`, anziché `__property`.  
  
 Nelle estensioni gestite, l'utilizzo del doppio carattere di sottolineatura come prefisso è determinato da due motivi principali:  
  
-   Rappresenta il metodo conforme per fornire estensioni locali per lo standard ISO\-C\+\+.  Un obiettivo principale delle estensioni gestite è non introdurre incompatibilità con il linguaggio standard, ad esempio nuovi token e parole chiave.  Ciò ha determinato in larga misura la scelta della sintassi dei puntatori per la dichiarazione di oggetti di tipi di riferimento gestiti.  
  
-   L'utilizzo del doppio carattere di sottolineatura, oltre all'aspetto correlato alla conformità, offre una ragionevole garanzia di non invasività rispetto alla codebase esistente degli utenti.  Ciò ha costituito un secondo obiettivo principale nella progettazione delle estensioni gestite.  
  
 Nonostante la rimozione del doppio carattere di sottolineatura, Microsoft si impegna a garantire comunque la conformità.  Il supporto per il modello a oggetti dinamico CLR rappresenta tuttavia un nuovo potente paradigma di programmazione.  Il supporto di tale paradigma richiede token e parole chiave di alto livello.  È stata quindi ricercata un'espressione di prima classe di questo nuovo paradigma, con relativa integrazione e supporto del linguaggio standard.  La progettazione della nuova sintassi garantisce un'esperienza di programmazione ottimale di questi due modelli a oggetti diversi.  
  
 Analogamente, la massima importanza viene attribuita all'ottimizzazione della non invasività delle nuove parole chiave del linguaggio.  A tale scopo, sono state utilizzate parole chiave contestuali e con spaziatura.  Prima di esaminare la nuova effettiva sintassi del linguaggio, di seguito vengono descritti questi due speciali tipi di parole chiave.  
  
 Una parola chiave contestuale assume un significato speciale all'interno di contesti di programma specifici.  Nel programma generale, ad esempio, la parola chiave `sealed` viene trattata come un identificatore ordinario.  Quando si trova nella parte della dichiarazione di un tipo classe di riferimento gestito, tuttavia, viene trattata come una parola chiave all'interno del contesto di tale dichiarazione di classe.  Viene così ridotto al minimo il potenziale impatto invasivo dell'introduzione di una parola chiave nel linguaggio, che costituisce un aspetto estremamente importante per gli utenti con una codebase esistente.  Al tempo stesso, agli utenti della nuova funzionalità viene offerta un'esperienza ottimale di una caratteristica aggiuntiva del linguaggio, che non era possibile nelle estensioni gestite.  Per un esempio dell'utilizzo di `sealed`, vedere [Dichiarazione di un tipo classe gestito](../dotnet/declaration-of-a-managed-class-type.md).  
  
 Una parola chiave con spaziatura quale `value class` costituisce un caso speciale di parola chiave contestuale  e combina una parola chiave esistente con un modificatore contestuale, separandoli con uno spazio.  La coppia viene trattata come unità singola anziché come due parole chiave separate.  
  
## Vedere anche  
 [Nozioni di base della migrazione in C\+\+\/CLI](../dotnet/cpp-cli-migration-primer.md)   
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)