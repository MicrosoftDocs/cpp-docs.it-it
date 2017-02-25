---
title: "Trigrammi | Microsoft Docs"
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
  - "? (simbolo), trigramma"
  - "?? (trigramma)"
  - "??' (trigramma)"
  - "??- (trigramma)"
  - "??! (trigramma)"
  - "??) (trigramma)"
  - "??/ (trigramma)"
  - "??< (trigramma)"
  - "??= (trigramma)"
  - "??> (trigramma)"
  - "punto interrogativo, trigrammi"
  - "trigrammi"
ms.assetid: 617f76ec-b8e8-4cfe-916c-4bc32cbd9aeb
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Trigrammi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il set di caratteri di origine dei programmi di origine C è contenuto nel set di caratteri ASCII a 7 bit, ma è un superset del set di codice invariante ISO 646\-1983.  Le sequenze di trigramma consentono la scrittura di programmi C utilizzando solo il set di codice invariante ISO \(International Standards Organization\).  I trigrammi sono sequenze di tre caratteri \(introdotti da due punti interrogativi consecutivi\) che il compilatore sostituisce con i relativi caratteri di punteggiatura corrispondenti.  È possibile utilizzare i trigrammi in file di origine C con un set di caratteri che non contiene rappresentazioni grafiche adeguate per alcuni caratteri di punteggiatura.  
  
 Nella tabella seguente sono illustrate le nove sequenze di trigramma.  Tutte le occorrenze in un file di origine dei caratteri di punteggiatura nella prima colonna vengono sostituite con il carattere corrispondente nella seconda colonna.  
  
### Sequenze di trigramma  
  
|Trigramma|Carattere di punteggiatura.|  
|---------------|---------------------------------|  
|??\=|\#|  
|??\(|\[|  
|??\/|\\|  
|??\)|\]|  
|??'|^|  
|??\<|{|  
|??\!|&#124;|  
|??\>|}|  
|??\-|~|  
  
 Un trigramma è sempre considerato come un singolo carattere di origine.  La conversione dei trigrammi avviene nella prima [fase di conversione](../preprocessor/phases-of-translation.md), prima del riconoscimento dei caratteri di escape nei valori letterali stringa e nelle costanti carattere.  Sono riconosciuti solo i nove trigrammi riportati nella tabella precedente.  Tutte le altre sequenze di caratteri non vengono convertite.  
  
 La sequenza di caratteri di escape **\\?** impedisce l'errata interpretazione delle sequenze di caratteri simile a un trigramma. Per ulteriori informazioni sulle sequenze di escape, vedere [Sequenze di escape](../c-language/escape-sequences.md). Ad esempio, se si tenta di stampare la stringa `What??!` con questa istruzione `printf`  
  
```  
printf( "What??!\n" );  
```  
  
 la stringa stampata sarà `What|` poiché `??!` è una sequenza di trigramma che viene sostituita con          `|` .  Scrivere l'istruzione come riportata di seguito per stampare correttamente la stringa:  
  
```  
printf( "What?\?!\n" );  
```  
  
 In questa istruzione `printf` un carattere di escape barra rovesciata prima del secondo punto interrogativo impedisce l'errata interpretazione di `??!` come trigramma.  
  
## Vedere anche  
 [Identificatori C](../c-language/c-identifiers.md)