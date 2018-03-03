---
title: Modificatori specifici Microsoft | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 22c7178c-f854-47fa-9de6-07d23fda58e1
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1f9533ffc2d21c3e8ee006fc97f7c61f4cb41115
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="microsoft-specific-modifiers"></a>Modificatori specifici Microsoft
In questa sezione vengono descritte le estensioni di C++ specifiche di Microsoft nelle aree seguenti:  
  
-   [Indirizzamento di base](../cpp/based-addressing.md), la pratica dell'utilizzo di un puntatore come base da cui è possibile spostare altri puntatori  
  
-   [Convenzioni di chiamata di funzione](../cpp/calling-conventions.md)  
  
-   Estesi dichiarati con attributi di classe di archiviazione di [declspec](../cpp/declspec.md) (parola chiave)  
  
-   Il [w64](../cpp/w64.md) (parola chiave)  
  
 Molte delle parole chiave specifiche di Microsoft possono essere utilizzate per modificare i dichiaratori per formare i tipi derivati. Per ulteriori informazioni sui dichiaratori, vedere [dichiaratori](http://msdn.microsoft.com/en-us/8a7b9b51-92bd-4ac0-b3fe-0c4abe771838).  
  
### <a name="microsoft-specific-keywords"></a>Parole chiave specifiche di Microsoft  
  
|Parola chiave|Significato|Utilizzata per formare tipi derivati?|  
|-------------|-------------|---------------------------------|  
|[__based](../cpp/based-grammar.md)|Il nome che segue dichiara un offset a 32 bit rispetto alla base a 32 bit contenuta nella dichiarazione.|Yes|  
|[__cdecl](../cpp/cdecl.md)|Il nome che segue utilizza le convenzioni di denominazione e di chiamata del linguaggio C.|Yes|  
|[__declspec](../cpp/declspec.md)|Il nome che segue specifica un attributo della classe di archiviazione specifico di Microsoft.|No|  
|[__fastcall](../cpp/fastcall.md)|Il nome che segue dichiara una funzione che utilizza i registri, se disponibili, anziché lo stack per il passaggio di un argomento.|Yes|  
|[__restrict](../cpp/extension-restrict.md)|Simile a declspec ([limitare](../cpp/restrict.md)), ma da utilizzare con le variabili.|No|  
|[__stdcall](../cpp/stdcall.md)|Il nome che segue specifica una funzione che osserva la convenzione di chiamata standard.|Yes|  
|[__w64](../cpp/w64.md)|Contrassegna un tipo di dati come maggiore in un compilatore a 64 bit.|No|  
|[__unaligned](../cpp/unaligned.md)|Specifica che un puntatore a un tipo o ad altri dati non è allineato.|No|  
|[__vectorcall](../cpp/vectorcall.md)|Il nome che segue dichiara una funzione che utilizza i registri, inclusi i registri SSE, se disponibili, anziché lo stack per il passaggio di un argomento.|Yes|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)