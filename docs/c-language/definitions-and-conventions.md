---
title: "Definizioni e convenzioni | Microsoft Docs"
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
  - "definizione di non terminal"
ms.assetid: f9b3cf5f-6a7c-4a10-9b18-9d4a43efdaeb
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Definizioni e convenzioni
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I terminali sono endpoint in una definizione di sintassi.  Non è possibile nessun'altra soluzione.  I terminali includono il set di parole riservate e di identificatori definiti dall'utente.  
  
 I non terminali sono segnaposti nella sintassi e vengono definiti altrove nel riepilogo della sintassi.  Le definizioni possono essere ricorsive.  
  
 Un componente facoltativo viene indicato dall'opzione di indice.  Di seguito è riportato un esempio:  
  
```  
  
{ expression <SUB>opt</SUB> }  
```  
  
 indica un'espressione facoltativa racchiusa tra parentesi graffe.  
  
 Le convenzioni della sintassi utilizzano attributi del tipo di carattere differenti per i diversi componenti della sintassi.  I simboli e i caratteri sono i seguenti:  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|*non terminale*|Il tipo corsivo indica non terminali.|  
|**const**|I terminali in grassetto sono parole riservate letterali e simboli che devono essere inseriti come indicato.  I caratteri in questo contesto fanno sempre distinzione tra maiuscole e minuscole.|  
|opt|I non terminali seguiti da opt sono sempre facoltativi.|  
|carattere tipografico predefinito|I caratteri nel set descritto o elencato in questo carattere tipografico possono essere utilizzati come terminali nelle istruzioni C.|  
  
 I due punti \(**:**\) che seguono il non terminale introducono la relativa definizione.  Le definizioni alternative sono elencate in righe separate, tranne quando sono precedute dalle parole "uno di".  
  
## Vedere anche  
 [Riepilogo di sintassi del linguaggio C](../c-language/c-language-syntax-summary.md)