---
title: pseudoistruzione Emit | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: conceptual
f1_keywords:
- _emit
dev_langs:
- C++
helpviewer_keywords:
- byte defining (inline assembly)
- _emit pseudoinstruction
ms.assetid: 004c48f3-364c-4e82-9a51-e326f9cc7b2b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7ad75f4abf2e86cb08ba646e50e9390650993d05
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
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