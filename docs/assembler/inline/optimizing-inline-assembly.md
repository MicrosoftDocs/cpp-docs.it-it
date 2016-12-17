---
title: "Ottimizzazione di assembly inline | Microsoft Docs"
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
  - "__asm (parola chiave) [C++], ottimizzazione"
  - "assembly inline, ottimizzazione"
  - "ottimizzazione, assembly inline"
  - "ottimizzazione delle prestazioni, assembly inline"
  - "archiviazione, ottimizzazione in assembly inline"
ms.assetid: 52a7ec83-9782-4d96-94c1-53bb2ac9e8c8
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Ottimizzazione di assembly inline
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 La presenza di un blocco `__asm` in una funzione influisce sull'ottimizzazione in diversi modi.  Innanzitutto, il compilatore non tenta di ottimizzare il blocco `__asm` stesso.  Ciò che viene scritto in linguaggio assembly è esattamente il risultato che si ottiene.  In secondo luogo, la presenza di un blocco `__asm` influisce sull'archiviazione della variabile registro.  Il compilatore evita la registrazione delle variabili in un blocco `__asm` se il contenuto del registro deve essere modificato dal blocco `__asm`.  Infine, altre ottimizzazioni a livello di funzione sono interessate dall'inclusione del linguaggio assembly in una funzione.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Assembler inline](../../assembler/inline/inline-assembler.md)