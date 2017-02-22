---
title: "Pseudo-istruzione _emit | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_emit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pseudo-istruzione _emit"
  - "definizione di byte (assembly inline)"
ms.assetid: 004c48f3-364c-4e82-9a51-e326f9cc7b2b
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Pseudo-istruzione _emit
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 La pseudoistruzione **\_emit** definisce un byte nella posizione corrente del segmento di testo corrente.  La pseudoistruzione **\_emit** è simile alla direttiva [DB](../../assembler/masm/db.md) di MASM.  
  
 Nel frammento seguente i byte 0x4A, 0x43 e 0x4B vengono posizionati nel codice:  
  
```  
#define randasm __asm _emit 0x4A __asm _emit 0x43 __asm _emit 0x4B  
 .  
 .  
 .  
__asm {  
     randasm  
     }  
```  
  
> [!CAUTION]
>  Se `_emit` genera istruzioni che modificano i registri e l'applicazione viene compilata con le ottimizzazioni, il compilatore non può determinare i registri interessati.  Ad esempio, se `_emit` genera un'istruzione che modifica il registro **rax**, il compilatore non riconosce che **rax** è stato modificato.  Il compilatore può quindi basarsi su un presupposto non corretto in relazione al valore nel registro dopo l'esecuzione del codice assembler inline.  Di conseguenza, l'applicazione potrebbe comportarsi in modo imprevedibile durante l'esecuzione.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Utilizzo di linguaggio assembly in blocchi \_\_asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)