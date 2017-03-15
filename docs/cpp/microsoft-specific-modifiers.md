---
title: "Modificatori specifici Microsoft | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
ms.assetid: 22c7178c-f854-47fa-9de6-07d23fda58e1
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Modificatori specifici Microsoft
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa sezione vengono descritte le estensioni di C\+\+ specifiche di Microsoft nelle aree seguenti:  
  
-   [Indirizzamento di base](../cpp/based-addressing.md), ovvero la pratica dell'utilizzo di un puntatore come base da cui è possibile spostare altri puntatori  
  
-   [Convenzioni di chiamata della funzione](../cpp/calling-conventions.md)  
  
-   Attributi della classe di archiviazione estesi dichiarati con la parola chiave [\_\_declspec](../cpp/declspec.md)  
  
-   Parola chiave [\_\_w64](../cpp/w64.md)  
  
 Molte delle parole chiave specifiche di Microsoft possono essere utilizzate per modificare i dichiaratori per formare i tipi derivati.  Per ulteriori informazioni sui dichiaratori, vedere [Dichiaratori](http://msdn.microsoft.com/it-it/8a7b9b51-92bd-4ac0-b3fe-0c4abe771838).  
  
### Parole chiave specifiche di Microsoft  
  
|Parola chiave|Significato|Utilizzata per formare tipi derivati?|  
|-------------------|-----------------|-------------------------------------------|  
|[\_\_based](../cpp/based-grammar.md)|Il nome che segue dichiara un offset a 32 bit rispetto alla base a 32 bit contenuta nella dichiarazione.|Sì|  
|[\_\_cdecl](../cpp/cdecl.md)|Il nome che segue utilizza le convenzioni di denominazione e di chiamata del linguaggio C.|Sì|  
|[\_\_declspec](../cpp/declspec.md)|Il nome che segue specifica un attributo della classe di archiviazione specifico di Microsoft.|No|  
|[\_\_fastcall](../cpp/fastcall.md)|Il nome che segue dichiara una funzione che utilizza i registri, se disponibili, anziché lo stack per il passaggio di un argomento.|Sì|  
|[\_\_restrict](../cpp/extension-restrict.md)|Simile a \_\_declspec\([restrict](../cpp/restrict.md)\), ma da utilizzare con le variabili.|No|  
|[\_\_stdcall](../cpp/stdcall.md)|Il nome che segue specifica una funzione che osserva la convenzione di chiamata standard.|Sì|  
|[\_\_w64](../cpp/w64.md)|Contrassegna un tipo di dati come maggiore in un compilatore a 64 bit.|No|  
|[\_\_unaligned](../cpp/unaligned.md)|Specifica che un puntatore a un tipo o ad altri dati non è allineato.|No|  
|[\_\_vectorcall](../cpp/vectorcall.md)|Il nome che segue dichiara una funzione che utilizza i registri, inclusi i registri SSE, se disponibili, anziché lo stack per il passaggio di un argomento.|Sì|  
  
## Vedere anche  
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)