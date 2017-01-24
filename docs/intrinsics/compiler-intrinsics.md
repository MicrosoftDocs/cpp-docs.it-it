---
title: "Intrinseci del compilatore | Microsoft Docs"
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
  - "compilatore cl.exe, intrinseci"
  - "compilatore cl.exe, prestazioni"
  - "intrinseci di compilatore"
  - "intrinseci, compilatore"
ms.assetid: 48bb9929-7d78-4fd8-a092-ae3c9f971858
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Intrinseci del compilatore
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La maggior parte delle funzioni sono contenute nelle librerie, ma alcune sono incorporate \(ovvero intrinseche\) al compilatore.  Queste sono denominate funzioni intrinseche o intrinseci.  
  
## Note  
 Se una funzione è intrinseca, il codice per la funzione viene in genere inserito inline, evitando, in questo modo, il sovraccarico di una chiamata di funzione e consentendo la creazione di istruzioni del computer estremamente efficaci per tale funzione.  Un intrinseco è spesso più veloce dell'assembly inline equivalente, in quanto l'utilità di ottimizzazione dispone di una conoscenza incorporata del comportamento di molti intrinseci, pertanto possono essere disponibili ottimizzazioni altrimenti non disponibili quando si usa l'assembly inline.  Inoltre, l'utilità di ottimizzazione può espandere la funzione intrinseca in modo diverso, allineare i buffer in modo differente o apportare altre modifiche a seconda del contesto e degli argomenti della chiamata.  
  
 L'uso degli intrinseci influisce sulla portabilità del codice, poiché gli intrinseci disponibili in Visual C\+\+ potrebbero non essere disponibili se il codice viene compilato con altri compilatori e alcuni intrinseci che potrebbero essere disponibili per alcune architetture di destinazione non lo sono per tutte le architetture.  Tuttavia, gli intrinseci sono in genere più portabili degli assembly inline.  Gli intrinseci sono richiesti nelle architetture a 64 bit quando l'assembly inline non è supportato.  
  
 Alcune funzioni intrinseche, ad esempio `__assume` e `__ReadWriteBarrier`, forniscono informazioni al compilatore che influiscono sul comportamento dell'utilità di ottimizzazione.  
  
 Alcune funzioni intrinseche sono disponibili solo come intrinseci e alcune sono disponibili nelle implementazioni sia di intrinseci che di funzione.  È possibile indicare al compilatore di usare l'implementazione di intrinseci in due modi, a seconda che si voglia abilitare solo funzioni specifiche o abilitare tutte le funzioni intrinseche.  Il primo modo consiste nell'uso di `#pragma intrinsic(``intrinsic-function-name-list``)`.  Il pragma può essere usato per specificare uno o più intrinseci separati da virgole.  Il secondo modo consiste nell'usare l'opzione del compilatore [\/Oi \(Genera funzioni intrinseche\)](../build/reference/oi-generate-intrinsic-functions.md), che rende disponibili tutte le funzioni intrinseche su una piattaforma specifica.  In **\/Oi**, usare `#pragma function(``intrinsic-function-name-list``)` per imporre una chiamata di funzione anziché una funzione intrinseca.  Se la documentazione per un intrinseco specifico indica che la routine è disponibile solo come un intrinseco, allora l'implementazione intrinseca viene usata indipendentemente dalla specifica di **\/Oi** o `#pragma intrinsic` .  In ogni caso, **\/Oi** o `#pragma intrinsic` consente, ma senza imposizione, all'utilità di ottimizzazione di usare la funzione intrinseca.  L'utilità di ottimizzazione potrà ancora chiamare la funzione.  
  
 Alcune funzioni di libreria standard C\/C\+\+ sono disponibili nelle implementazioni intrinseche in alcune architetture.  Quando si chiama una funzione CRT, viene impiegata l'implementazione intrinseca se nella riga di comando è stata specificata l'opzione **\/Oi**.  
  
 È disponibile un file di intestazione \<intrin.h\>, che dichiara i prototipi di funzioni intrinseche.  Nei file di intestazione \<immintrin.h\> e \<ammintrin.h\> sono disponibili funzioni intrinseche specifiche del produttore.  Inoltre, alcune intestazioni di Windows dichiarano funzioni che eseguono il mapping su un intrinseco del compilatore.  
  
 Le sezioni seguenti elencano tutti gli intrinseci disponibili in varie architetture.  Per altre informazioni sull'uso degli intrinseci su un particolare processore di destinazione, fare riferimento alla documentazione di riferimento del produttore.  
  
-   [Oggetti intrinseci ARM](../intrinsics/arm-intrinsics.md)  
  
-   [Elenco intrinseci x86](../intrinsics/x86-intrinsics-list.md)  
  
-   [Elenco oggetti intrinseci x64 \(amd64\)](../intrinsics/x64-amd64-intrinsics-list.md)  
  
-   [Funzioni intrinseche disponibili in tutte le architetture](../intrinsics/intrinsics-available-on-all-architectures.md)  
  
-   [Elenco alfabetico di funzioni intrinseche](../intrinsics/alphabetical-listing-of-intrinsic-functions.md)  
  
## Vedere anche  
 [ARM Assembler Reference](../assembler/arm/arm-assembler-reference.md)   
 [Microsoft Macro Assembler Reference](../assembler/masm/microsoft-macro-assembler-reference.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Riferimenti alla libreria di runtime C](../c-runtime-library/c-run-time-library-reference.md)