---
title: Compilazione di programmi con attributi | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- tlb files
- MIDL
- MIDL, linker output
- IDL files
- tlb files, building attributed programs
- .tlb files, building attributed programs
- IDL files, building
- attributes [C++], building type libraries and .idl files
- .tlb files
- .idl files, building
- type libraries, linker options for building
ms.assetid: 04997b5f-bf2c-46ec-b868-c4adebbef5f4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9d87f95b456e3f99598f48e6ffa8ad29806aa168
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
---
# <a name="building-an-attributed-program"></a>Compilazione di un programma con attributi
Dopo avere implementato gli attributi di Visual C++ nel codice sorgente, è il compilatore Visual C++ per produrre un file IDL e di raccolta del tipo per l'utente. Le seguenti opzioni del linker consentono di generare file tlb e IDL:  
  
-   [/IDLOUT](../build/reference/idlout-name-midl-output-files.md)  
  
-   [/IGNOREIDL](../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)  
  
-   [/ MIDL](../build/reference/midl-specify-midl-command-line-options.md)  
  
-   [/TLBOUT](../build/reference/tlbout-name-dot-tlb-file.md)  
  
 Alcuni progetti contengono più file idl indipendenti. Questi vengono utilizzati per produrre due o più file tlb ed eventualmente associati nel blocco di risorse. Questo scenario non è attualmente supportato in Visual C++.  
  
 Inoltre, il linker Visual C++ verrà visualizzate le informazioni di attributi IDL relative tutti in un unico file MIDL. È possibile generare due librerie dei tipi da un singolo progetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../windows/attributed-programming-concepts.md)