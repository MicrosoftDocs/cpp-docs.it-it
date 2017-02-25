---
title: "Direttive e operatori sui dati in assembly inline | Microsoft Docs"
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
  - "__asm (parola chiave) [C++], riferimento di limitazioni"
  - "direttive di dati [C++]"
  - "direttive [C++], MASM"
  - "assembly inline, direttive di dati"
  - "assembly inline, operatori"
  - "MASM (Microsoft Macro Assembler), direttive"
  - "MASM (Microsoft Macro Assembler), operatori"
  - "MASM (Microsoft Macro Assembler), strutture"
  - "operatori [MASM]"
  - "strutture [C++], MASM"
ms.assetid: fb7410c7-156a-4131-bcfc-211aa70533e3
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Direttive e operatori sui dati in assembly inline
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Sebbene un blocco `__asm` possa fare riferimento a oggetti e tipi di dati C o C\+\+, non può definire gli oggetti dati con le direttive o gli operatori di MASM.  In particolare, non è possibile utilizzare le direttive **DB**, `DW`, **DD**, `DQ`, `DT` e `DF` o gli operatori `DUP` o **THIS** di definizione.  Anche le strutture e i record di MASM non sono disponibili.  L'assembler inline non accetta le direttive `STRUC`, `RECORD`, **WIDTH** o **MASK**.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Utilizzo di linguaggio assembly in blocchi \_\_asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)