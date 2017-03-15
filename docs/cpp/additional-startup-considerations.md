---
title: "Considerazioni di avvio aggiuntive | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "inizializzazione prima del form principale"
  - "avvio del programma [C++]"
  - "avvio (codice)"
ms.assetid: 0e942aa6-8342-447c-b068-8980ed7622bd
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Considerazioni di avvio aggiuntive
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In C\+\+ la costruzione e la distruzione di un oggetto possono richiedere l'esecuzione di codice utente.  Di conseguenza, è importante comprendere le inizializzazioni eseguite prima della voce **main** e i distruttori richiamati dopo l'uscita da **main**. Per informazioni dettagliate sulla costruzione e distruzione degli oggetti, vedere [Costruttori](../cpp/constructors-cpp.md) e [Distruttori](../cpp/destructors-cpp.md)\).  
  
 Le inizializzazioni seguenti vengono eseguite prima della voce **main**:  
  
-   Inizializzazione predefinita dei dati statici a zero.  Tutti i dati statici senza inizializzatori espliciti vengono impostati su zero prima dell'esecuzione di qualsiasi altro codice, inclusa l'inizializzazione di runtime.  I membri dati statici devono ancora essere definiti in modo esplicito.  
  
-   Inizializzazione di oggetti statici globali in un'unità di conversione.  Questa inizializzazione può essere eseguita prima della voce **main** o prima del primo utilizzo di qualsiasi oggetto o funzione nell'unità di conversione dell'oggetto.  
  
 **Sezione specifica Microsoft**  
  
 In Microsoft C\+\+ gli oggetti statici globali vengono inizializzati prima della voce **main**.  
  
 **Fine sezione specifica Microsoft**  
  
 Gli oggetti statici globali reciprocamente interdipendenti, ma presenti in unità di conversione diverse, possono causare un comportamento non corretto.  
  
## Vedere anche  
 [Avvio e terminazione](../cpp/startup-and-termination-cpp.md)