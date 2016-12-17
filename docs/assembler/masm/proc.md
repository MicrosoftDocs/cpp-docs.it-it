---
title: "PROC | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "PROC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PROC directive"
ms.assetid: ee5bb6b6-fa15-4d73-b0cf-e650178539a9
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# PROC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I contrassegni iniziano e terminano di un blocco di routine chiamato *etichetta*.  Le istruzioni nel blocco possono essere chiamati da **CALL** istruzione o  [RICHIAMO](../../assembler/masm/invoke.md) direttiva.  
  
## Sintassi  
  
```  
  
   label PROC [[distance]] [[langtype]] [[visibility]] [[<prologuearg>]]   
[[USES reglist]] [[, parameter [[:tag]]]]...  
[FRAME [:ehandler-address] ]  
statements  
label ENDP  
```  
  
## Note  
 \[FRAME \[:*ehandler\-indirizzo*\]\] è valido solo con ml64.exe e provoca MASM a generare una voce della tabella di funzioni di pdata e rimuovere le informazioni in .xdata per la gestione delle eccezioni strutturata di una funzione rimuovere il comportamento.  
  
 quando **FRAME** l'attributo viene utilizzato, deve essere seguito da  [.ENDPROLOG](../../assembler/masm/dot-endprolog.md) direttiva.  
  
 vedere [MASM for x64 \(ml64.exe\)](../../assembler/masm/masm-for-x64-ml64-exe.md) per ulteriori informazioni sull'utilizzo ml64.exe.  
  
## Esempio  
  
```  
; ml64 ex1.asm /link /entry:Example1 /SUBSYSTEM:CONSOLE  
_text SEGMENT  
Example1 PROC FRAME  
   push r10  
.pushreg r10  
   push r15  
.pushreg r15  
   push rbx  
.pushreg rbx  
   push rsi  
.pushreg rsi  
.endprolog  
   ; rest of function ...  
   ret  
Example1 ENDP  
_text ENDS  
END  
```  
  
 Il codice precedente verrà generata la seguente tabella di funzioni e rimuove le informazioni:  
  
```  
FileHeader->Machine 34404  
Dumping Unwind Information for file ex2.exe  
  
.pdata entry 1 0x00001000 0x00001023  
  
  Unwind data: 0x00002000  
  
    Unwind version: 1  
    Unwind Flags: None  
    Size of prologue: 0x08  
    Count of codes: 3  
    Frame register: rbp  
    Frame offset: 0x0  
    Unwind codes:  
  
      Code offset: 0x08, SET_FPREG, register=rbp, offset=0x00  
      Code offset: 0x05, ALLOC_SMALL, size=0x10  
      Code offset: 0x01, PUSH_NONVOL, register=rbp  
```  
  
## Vedere anche  
 [Directives Reference](../../assembler/masm/directives-reference.md)