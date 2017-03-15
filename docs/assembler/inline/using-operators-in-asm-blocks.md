---
title: "Utilizzo di operatori in blocchi __asm | Microsoft Docs"
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
  - "__asm (parola chiave) [C++], operatori"
  - "parentesi quadre []"
  - "parentesi quadre [], __asm (blocchi)"
  - "operatori [C++], blocchi __asm"
  - "parentesi quadre [ ]"
  - "parentesi quadre [ ], __asm (blocchi)"
ms.assetid: a26ccfd4-40ae-4a61-952f-c417982aa8dd
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Utilizzo di operatori in blocchi __asm
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Un blocco `__asm` non può utilizzare gli operatori specifici di C\+\+ o C, come, ad esempio, l'operatore **\<\<**.  Tuttavia, gli operatori condivisi da C e da MASM, come l'operatore \*, vengono interpretati come operatori di linguaggio assembly.  Ad esempio, all'esterno di un blocco `__asm`, le parentesi quadre \(**\[ \]**\) vengono interpretate come contenenti indici di matrice, che C ridimensiona automaticamente per farli corrispondere alle dimensioni di un elemento della matrice.  All'interno di un blocco `__asm`, vengono interpretate come operatore di indice di MASM, il che genera un offset dei byte non ridimensionato da qualsiasi oggetto dati o etichetta \(non solo da una matrice\).  Nel codice riportato di seguito viene illustrata la differenza:  
  
```  
int array[10];  
  
__asm mov array[6], bx ;  Store BX at array+6 (not scaled)  
  
array[6] = 0;         /* Store 0 at array+24 (scaled) */  
```  
  
 Il primo riferimento a `array` non è ridimensionato, mentre il secondo lo è.  Si noti che è possibile utilizzare l'operatore **TYPE** per ottenere un ridimensionamento basato su una costante.  Ad esempio, le seguenti istruzioni sono equivalenti:  
  
```  
__asm mov array[6 * TYPE int], 0 ; Store 0 at array + 24  
  
array[6] = 0;                   /* Store 0 at array + 24 */  
```  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Utilizzo di C o C\+\+ in blocchi \_\_asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)