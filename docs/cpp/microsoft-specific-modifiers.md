---
title: Modificatori specifici Microsoft | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 22c7178c-f854-47fa-9de6-07d23fda58e1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8490a50f30d366a53a9e3288417a8d83032c556d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32420223"
---
# <a name="microsoft-specific-modifiers"></a>Modificatori specifici Microsoft
In questa sezione vengono descritte le estensioni di C++ specifiche di Microsoft nelle aree seguenti:  
  
-   [Indirizzamento di base](../cpp/based-addressing.md), la pratica dell'utilizzo di un puntatore come base da cui è possibile spostare altri puntatori  
  
-   [Convenzioni di chiamata della funzione](../cpp/calling-conventions.md)  
  
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