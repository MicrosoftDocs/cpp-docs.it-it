---
title: pseudoistruzione Emit | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: _emit
dev_langs: C++
helpviewer_keywords:
- byte defining (inline assembly)
- _emit pseudoinstruction
ms.assetid: 004c48f3-364c-4e82-9a51-e326f9cc7b2b
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 00cd8425b4c6a9f7333f77f8bab4dc210528a352
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="emit-pseudoinstruction"></a>Pseudo-istruzione _emit
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Il **pseudoistruzione** Emit definisce un byte nella posizione corrente nel segmento di testo corrente. Il **pseudoistruzione** è simile a Emit il [DB](../../assembler/masm/db.md) direttive di MASM.  
  
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
>  Se `_emit` genera istruzioni che modificano i registri e l'applicazione viene compilata con le ottimizzazioni, il compilatore non può determinare i registri interessati. Ad esempio, se `_emit` genera un'istruzione che modifica il **rax** registro, il compilatore non riconosce che **rax** è stato modificato. Il compilatore può quindi basarsi su un presupposto non corretto in relazione al valore nel registro dopo l'esecuzione del codice assembler inline. Di conseguenza, l'applicazione potrebbe comportarsi in modo imprevedibile durante l'esecuzione.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Uso del linguaggio assembly in blocchi __asm](../../assembler/inline/using-assembly-language-in-asm-blocks.md)