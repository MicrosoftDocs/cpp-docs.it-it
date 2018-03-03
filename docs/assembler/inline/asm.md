---
title: ASM | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- __asm
- __asm_cpp
dev_langs:
- C++
helpviewer_keywords:
- __asm keyword [C++], vs. asm blocks
- __asm keyword [C++]
ms.assetid: 77ff3bc9-a492-4b5e-85e1-fa4e414e79cd
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 75a5d272e4ac26b87728506e45759733ffa26472
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="asm"></a>__asm
**Sezione specifica Microsoft**  
  
 La parola chiave `__asm` consente di richiamare l'assembler inline e può essere visualizzata ovunque un'istruzione C o C++ sia valida. Non può essere visualizzata da sola. Deve essere seguita da un'istruzione dell'assembly, da un gruppo di istruzioni racchiuse tra parentesi graffe o almeno da una coppia di parentesi graffe vuote. Il termine "`__asm` block" qui si riferisce a qualsiasi istruzione o gruppo di istruzioni, racchiuso o meno tra parentesi graffe.  
  
> [!NOTE]
>  Il supporto di Visual C++ della parola chiave `asm` di C++ standard è limitato al fatto che il compilatore non genererà un errore sulla parola chiave. Tuttavia, un blocco `asm` non genererà alcun codice significativo. Usare `__asm` anziché `asm`.  
  
 Sintassi:  
  
 ASM *istruzione assembly* [;]  
  
 ASM { *elenco di istruzioni di assembly* } [;]  
  
## <a name="grammar"></a>Grammatica  
 `__asm`  `assembly-instruction`  `;`consenso esplicito  
  
 `__asm {`  `assembly-instruction-list`  `};`consenso esplicito  
  
 *elenco di istruzioni di assembly*:  
 `assembly-instruction``;`consenso esplicito  
  
 `assembly-instruction``;` `assembly-instruction-list` `;`consenso esplicito  
  
 Se utilizzata senza parentesi graffe, la parola chiave `__asm` indica che il resto della riga è un'istruzione del linguaggio assembly. Se utilizzata con le parentesi graffe, significa che ogni riga tra parentesi graffe è un'istruzione del linguaggio assembly. Per la compatibilità con le versioni precedenti, `_asm` è un sinonimo di `__asm`.  
  
 Poiché la parola chiave `__asm` è un separatore di istruzione, è possibile inserire le istruzioni di assembly nella stessa riga.  
  
 Prima di Visual C++ 2005, l'istruzione  
  
```  
__asm int 3  
```  
  
 generato quando viene compilato con del codice nativo non comportava **/clr**; il compilatore ha convertito l'istruzione a un'istruzione di interruzione CLR.  
  
 `__asm int 3` determina ora la generazione del codice nativo della funzione. Se si desidera che una funzione a causa di un punto di interruzione nel codice e se si desidera che tale funzione compilata in MSIL, utilizzare [DebugBreak](../../intrinsics/debugbreak.md).  
  
## <a name="example"></a>Esempio  
 Il frammento di codice seguente è un blocco `__asm` semplice racchiuso tra parentesi graffe:  
  
```  
__asm {  
   mov al, 2  
   mov dx, 0xD007  
   out dx, al  
}  
```  
  
 In alternativa, è possibile inserire `__asm` davanti a ogni istruzione dell'assembly:  
  
```  
__asm mov al, 2  
__asm mov dx, 0xD007  
__asm out dx, al  
```  
  
 Poiché la parola chiave `__asm` è un separatore di istruzione, è anche possibile inserire le istruzioni di assembly nella stessa riga:  
  
```  
__asm mov al, 2   __asm mov dx, 0xD007   __asm out dx, al  
```  
  
 Tutti e tre gli esempi generano lo stesso codice, ma il primo stile, che racchiude il blocco `__asm` tra parentesi graffe, presenta alcuni vantaggi. Le parentesi graffe separano chiaramente il codice dell'assembly dal codice C o C++ ed evitano la ripetizione inutile della parola chiave `__asm`. Le parentesi graffe possono anche impedire le ambiguità. Se si desidera inserire l'istruzione C o C++ sulla stessa riga come blocco `__asm`, è necessario racchiudere il blocco tra parentesi graffe. Senza parentesi graffe, il compilatore non è in grado di riconoscere dove termina l'esecuzione del codice assembly e dove iniziano le istruzioni C o C++. Infine, poiché il testo tra parentesi graffe ha lo stesso formato del testo MASM ordinario, è possibile tagliarlo e incollarlo facilmente dai file di origine MASM esistenti.  
  
 A differenza delle parentesi graffe in C e C++, le parentesi graffe che racchiudono un blocco `__asm` non influiscono sull'ambito della variabile. È inoltre possibile annidare i blocchi `__asm`; l'annidamento non influisce sull'ambito della variabile.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../../cpp/keywords-cpp.md)   
 [Assembler inline](../../assembler/inline/inline-assembler.md)