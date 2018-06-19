---
title: Panoramica sull'inline Assembler | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- inline assembler
- __asm keyword [C++], invoking inline assembler
- invoking inline assembler
- inline assembly, inline assembler
ms.assetid: d990331a-0e33-4760-8d7a-b720b0288335
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 31b0497f2fdc319115018a05618d3a16607dbef1
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
ms.locfileid: "32049775"
---
# <a name="inline-assembler-overview"></a>Panoramica sull'assembler inline
**Sezione specifica Microsoft**  
  
 È possibile utilizzare l'assembler inline per incorporare le istruzioni in linguaggio assembly nei programmi di origine C e C++ senza effettuare dei passaggi aggiuntivi di collegamento e di assembly. L'assembler inline è incorporato nel compilatore, pertanto non è necessario utilizzare un assembler separato come Microsoft Macro Assembler (MASM).  
  
 Poiché l'assembler inline non richiede un assembly separato e operazioni di collegamento, è più conveniente di un assembly separato. Il codice assembly inline può utilizzare qualsiasi nome funzione o variabile di C o C++ incluso nell'ambito, in modo che sia facile integrarlo con il codice C e C++ del programma. E poiché il codice assembly può essere combinato con istruzioni di C++ e C, può effettuare attività che sono complesse o impossibili in C o C++ da solo.  
  
 Il [ASM](../../assembler/inline/asm.md) (parola chiave) richiama l'assembler inline e può trovarsi ovunque un'istruzione C o C++ sia valida. Non può essere visualizzata da sola. Deve essere seguita da un'istruzione dell'assembly, da un gruppo di istruzioni racchiuse tra parentesi graffe o almeno da una coppia di parentesi graffe vuote. Il termine "`__asm` block" qui si riferisce a qualsiasi istruzione o gruppo di istruzioni, racchiuso o meno tra parentesi graffe.  
  
 Il codice seguente è un semplice blocco `__asm` racchiuso tra parentesi graffe. Il codice è una sequenza di prologo di funzione personalizzata.  
  
```  
// asm_overview.cpp  
// processor: x86  
void __declspec(naked) main()  
{  
    // Naked functions must provide their own prolog...  
    __asm {  
        push ebp  
        mov ebp, esp  
        sub esp, __LOCAL_SIZE  
    }  
  
    // ... and epilog  
    __asm {  
        pop ebp  
        ret  
    }  
}  
```  
  
 In alternativa, è possibile inserire `__asm` davanti a ogni istruzione dell'assembly:  
  
```  
__asm push ebp  
__asm mov  ebp, esp  
__asm sub  esp, __LOCAL_SIZE  
```  
  
 Poiché la parola chiave `__asm` è un separatore di istruzione, è anche possibile inserire le istruzioni di assembly nella stessa riga:  
  
```  
__asm push ebp   __asm mov  ebp, esp   __asm sub  esp, __LOCAL_SIZE  
```  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Assembler inline](../../assembler/inline/inline-assembler.md)