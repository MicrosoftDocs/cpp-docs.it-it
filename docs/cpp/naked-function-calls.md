---
title: "Chiamate di funzioni naked | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "codice di epilogo"
  - "naked (funzioni)"
  - "naked (parola chiave) [C++]"
  - "naked (parola chiave) [C++], attributo di classe di archiviazione"
  - "codice di prologo"
  - "driver di dispositivo virtuali"
  - "driver di dispositivo virtuali, chiamate di funzioni naked"
  - "driver di dispositivo virtuali VXD"
ms.assetid: 2a66847a-a43f-4541-a7be-c9f5f29b5fdb
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Chiamate di funzioni naked
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Le funzioni dichiarate con l'attributo `naked` vengono generate senza codice di epilogo o di prologo, consentendo all'utente di scrivere sequenze di epilogo o di prologo personalizzate utilizzando [assembler inline](../assembler/inline/inline-assembler.md).  Le funzioni naked vengono fornite come funzionalità avanzata.  Tali funzioni consentono di dichiarare una funzione chiamata da un contesto diverso da C\/C\+\+ e di conseguenza si basano su presupposti diversi sulla posizione dei parametri o sui registri mantenuti.  Gli esempi includono routine come gestori di interrupt.  Questa funzionalità è particolarmente utile per i writer dei driver di dispositivo virtuali \(VxDs\).  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [naked](../cpp/naked-cpp.md)  
  
-   [Regole e limitazioni per le funzioni naked](../cpp/rules-and-limitations-for-naked-functions.md)  
  
-   [Considerazioni per la scrittura di codice di prologo e di epilogo](../cpp/considerations-for-writing-prolog-epilog-code.md)  
  
### Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Convenzioni di chiamata](../cpp/calling-conventions.md)