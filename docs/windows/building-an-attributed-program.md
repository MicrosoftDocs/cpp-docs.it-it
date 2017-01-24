---
title: "Building an Attributed Program | Microsoft Docs"
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
  - "tlb files"
  - "MIDL"
  - "MIDL, linker output"
  - "IDL files"
  - "tlb files, building attributed programs"
  - ".tlb files, building attributed programs"
  - "IDL files, building"
  - "attributes [C++], building type libraries and .idl files"
  - ".tlb files"
  - ".idl files, building"
  - "type libraries, linker options for building"
ms.assetid: 04997b5f-bf2c-46ec-b868-c4adebbef5f4
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Building an Attributed Program
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Dopo avere inserito gli attributi di Visual C\+\+ nel codice sorgente, è possibile utilizzare il compilatore di Visual C\+\+ per scrivere una libreria dei tipi e il file IDL automaticamente.  Le seguenti opzioni del linker consentono di sviluppare i file IDL e .tlb:  
  
-   [\/IDLOUT](../build/reference/idlout-name-midl-output-files.md)  
  
-   [\/IGNOREIDL](../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)  
  
-   [\/MIDL](../build/reference/midl-specify-midl-command-line-options.md)  
  
-   [\/TLBOUT](../build/reference/tlbout-name-dot-tlb-file.md)  
  
 Alcuni progetti contengono i file più file IDL.  Questi vengono utilizzati per scrivere due o più file .tlb e facoltativamente per associare essi nel blocco delle risorse.  questo scenario non è attualmente supportato in Visual C\+\+.  
  
 Inoltre, il linker di Visual C\+\+ restituirà tutte le informazioni su IDL\-correlate a un singolo file MIDL.  Non sarà possibile generare due librerie dei tipi da un singolo progetto.  
  
## Vedere anche  
 [Concepts](../windows/attributed-programming-concepts.md)