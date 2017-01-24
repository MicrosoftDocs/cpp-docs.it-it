---
title: "Convenzioni della libreria C++ | Microsoft Docs"
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
  - "classi [C++]"
  - "convenzioni di codifica, libreria C++ standard"
  - "convenzioni [C++], libreria C++ standard"
  - "nomi di funzione [C++]"
  - "funzioni [C++], convenzioni di denominazione delle librerie"
  - "convenzioni di denominazione [C++], libreria C++"
  - "convenzioni di denominazione [C++], libreria C++ standard"
  - "libreria C++ standard, convenzioni"
ms.assetid: bf41b79a-2d53-4f46-8d05-779358335146
caps.latest.revision: 9
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Convenzioni della libreria C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La libreria di C\+\+ precedente pressoché le convenzioni ad esempio la libreria di C standard, più alcuni descritti in questo argomento.  
  
 Un'implementazione è determinata in latitudine come dichiarare tipi e le funzioni della libreria di C\+\+:  
  
-   I nomi delle funzioni della libreria di C standard possono avere esterno \# " C\+\+ o collegamento" extern "C".  Includere l'intestazione del livello adeguato C anziché un'entità di libreria inline.  
  
-   Un nome di funzione membro in una classe di libreria può includere firme della funzione aggiuntive su quelle elencate in questo documento.  Essendo certi che una chiamata di funzione descritta di seguito si comporta come previsto, ma non è possibile in modo affidabile accettare l'indirizzo di una funzione di associare della guida. \(Il tipo non corrisponda a quanto previsto.\)  
  
-   Una classe di libreria può avere classi di base \(non virtuali\) non documentati.  La classe documentata come derivata da un'altra classe, può infatti, essere derivata dalla classe in altre classi non documentati.  
  
-   Un tipo definito come un sinonimo di un tipo intero può corrispondere a uno di vari tipi interi.  
  
-   Un tipo maschera di bit può essere implementato come un tipo intero o un'enumerazione.  In entrambi i casi, è possibile eseguire operazioni bit per bit \(come `AND` e `OR`\) ai valori dello stesso tipo della maschera di bit.  Gli elementi `A` e `B` di un tipo maschera di bit sono valori diversi da zero in modo che `A` &`B` è zero.  
  
-   Una funzione di libreria che non è specifica di eccezione può generare un'eccezione arbitraria, a meno che la relativa definizione limiti chiaramente tale possibilità.  
  
 Di altra parte, esistono alcune restrizioni:  
  
-   La libreria di C standard non utilizza macro mascherare.  Solo le firme della funzione specifiche sono riservate, non i nomi delle funzioni stessi.  
  
-   Una classe esterna di nome della funzione di libreria non avrà aggiuntivo, non documentato, firme della funzione.  È possibile in modo affidabile che il relativo indirizzo.  
  
-   Le classi di base e virtuali descritti funzioni membro è garantita virtuali, mentre quelle descritte quanto non virtuale è garantita non virtuali.  
  
-   Due tipi definiti dalla libreria di C\+\+ sono sempre diversi a meno che tale documento in modo esplicito suggerisca in caso contrario.  
  
-   Le funzioni fornite dalla libreria, incluse le versioni predefinite delle funzioni sostituibili, possono generare *al massimo* le eccezioni elencate in qualsiasi specifica di eccezione.  Nessun distruttore fornito dalla libreria genera eccezioni.  Le funzioni della libreria di C standard possono propagare un'eccezione, ad esempio quando `qsort` chiama una funzione di confronto che genera un'eccezione, ma non generano altrimenti le eccezioni.  
  
## Vedere anche  
 [Panoramica di STL](../standard-library/cpp-standard-library-overview.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)