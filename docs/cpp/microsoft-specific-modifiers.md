---
title: Modificatori specifici Microsoft | Microsoft Docs
ms.custom: ''
ms.date: 08/16/2018
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
ms.openlocfilehash: 9a1fc13df342b4282ee63c185205c2f2b12ca003
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46110614"
---
# <a name="microsoft-specific-modifiers"></a>Modificatori specifici Microsoft

In questa sezione vengono descritte le estensioni di C++ specifiche di Microsoft nelle aree seguenti:

- [Indirizzamento di base](based-addressing.md), la pratica dell'utilizzo di un puntatore come base da cui altri puntatori con offset

- [Convenzioni di chiamata di funzione](calling-conventions.md)

- Esteso gli attributi di classi di archiviazione dichiarati con la [declspec](declspec.md) (parola chiave)

- Il [__w64](w64.md) (parola chiave)

### <a name="microsoft-specific-keywords"></a>Parole chiave specifiche di Microsoft

Molte delle parole chiave specifiche di Microsoft possono essere utilizzate per modificare i dichiaratori per formare i tipi derivati. Per ulteriori informazioni sui dichiaratori, vedere [dichiaratori](overview-of-declarators.md).

|Parola chiave|Significato|Utilizzata per formare tipi derivati?|   
|-------------|-------------|---------------------------------|
|[__based](based-grammar.md)|Il nome che segue dichiara un offset a 32 bit rispetto alla base a 32 bit contenuta nella dichiarazione.|Yes|   
|[__cdecl](cdecl.md)|Il nome che segue utilizza le convenzioni di denominazione e di chiamata del linguaggio C.|Yes|      
|[__declspec](declspec.md)|Il nome che segue specifica un attributo della classe di archiviazione specifico di Microsoft.|No|    
|[__fastcall](fastcall.md)|Il nome che segue dichiara una funzione che utilizza i registri, se disponibili, anziché lo stack per il passaggio di un argomento.|Yes|   
|[__restrict](extension-restrict.md)|Simile a declspec ([limitare](restrict.md)), ma da utilizzare con le variabili.|No|      
|[__stdcall](stdcall.md)|Il nome che segue specifica una funzione che osserva la convenzione di chiamata standard.|Yes|     
|[__w64](w64.md)|Contrassegna un tipo di dati come maggiore in un compilatore a 64 bit.|No|    
|[__unaligned](unaligned.md)|Specifica che un puntatore a un tipo o ad altri dati non è allineato.|No|      
|[__vectorcall](vectorcall.md)|Il nome che segue dichiara una funzione che utilizza i registri, inclusi i registri SSE, se disponibili, anziché lo stack per il passaggio di un argomento.|Yes|      
    
## <a name="see-also"></a>Vedere anche     

[Riferimenti al linguaggio C++](cpp-language-reference.md)