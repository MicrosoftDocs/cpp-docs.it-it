---
title: "Cenni preliminari sugli assembler inline | Microsoft Docs"
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
  - "__asm (parola chiave) [C++], chiamata dell'assembler inline"
  - "assembler inline"
  - "assembly inline, assembler inline"
  - "chiamata dell'assembler inline"
ms.assetid: d990331a-0e33-4760-8d7a-b720b0288335
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Cenni preliminari sugli assembler inline
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 L'assembler inline consente di incorporare istruzioni in linguaggio assembly nelle applicazioni di origine C e C\+\+ senza ulteriori operazioni di assemblaggio e collegamento.  L'assembler inline è incorporata nel compilatore, ovvero non è necessario un assembler separato, ad esempio Microsoft Macro Assembler \(MASM\).  
  
 Poiché l'assembler inline non richiede assembly separato e fasi del collegamento, è più comodo rispetto a un assembler separato.  Codice assembly inline è possibile utilizzare qualsiasi nome variabile o una funzione C o C\+\+ che si trova nell'ambito, pertanto è facile integrarlo con il codice del programma C e C\+\+.  E poiché il codice dell'assembly può essere combinato con le istruzioni di C e C\+\+, può eseguire attività complesse o impossibili in C o C\+\+ solo.  
  
 Il  [asm](../../assembler/inline/asm.md) parola chiave richiama l'assembler inline e può essere presente ovunque un'istruzione C o C\+\+ è consentita.  Non può essere di per sé.  Deve essere seguita da un'istruzione assembly, un gruppo di istruzioni racchiuse tra parentesi graffe, o, come minimo, una coppia di parentesi graffe vuota.  Il termine " `__asm` blocco" qui si riferisce a qualsiasi istruzione o gruppo di istruzioni, o meno tra parentesi graffe.  
  
 Il codice seguente è un semplice  `__asm`blocco racchiuso tra parentesi graffe.  \(Il codice è una sequenza di prologo della funzione personalizzata\).  
  
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
  
 In alternativa, è possibile inserire  `__asm`davanti a ciascuna istruzione assembly:  
  
```  
__asm push ebp  
__asm mov  ebp, esp  
__asm sub  esp, __LOCAL_SIZE  
```  
  
 Poiché la  `__asm`la parola chiave è un separatore di istruzione, è anche possibile inserire istruzioni in linguaggio assembly sulla stessa riga:  
  
```  
__asm push ebp   __asm mov  ebp, esp   __asm sub  esp, __LOCAL_SIZE  
```  
  
 **FINE specifico di Microsoft**  
  
## Vedere anche  
 [Assembler inline](../../assembler/inline/inline-assembler.md)