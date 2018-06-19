---
title: PROC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- PROC
dev_langs:
- C++
helpviewer_keywords:
- PROC directive
ms.assetid: ee5bb6b6-fa15-4d73-b0cf-e650178539a9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 48eb872d394c3b131d32d4b41c5923883ff36cee
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
ms.locfileid: "32057773"
---
# <a name="proc"></a>PROC
Contrassegna l'inizio e fine di un blocco di routine chiamato *etichetta*. Le istruzioni nel blocco possono essere chiamate con il **CHIAMARE** istruzione o [INVOKE](../../assembler/masm/invoke.md) direttiva.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
   label PROC [[distance]] [[langtype]] [[visibility]] [[<prologuearg>]]   
[[USES reglist]] [[, parameter [[:tag]]]]...  
[FRAME [:ehandler-address] ]  
statements  
label ENDP  
```  
  
## <a name="remarks"></a>Note  
 [FRAME [:*il parametro ehandler indirizzo*]] è valido solo con ml64.exe e MASM generare una voce della tabella (funzione) in. pdata e xdata informazioni di rimozione per strutturata di una funzione determina il comportamento di rimozione di gestione delle eccezioni.  
  
 Quando il **FRAME** viene utilizzato l'attributo, deve essere seguita da un [. ENDPROLOG](../../assembler/masm/dot-endprolog.md) direttiva.  
  
 Vedere [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md) per ulteriori informazioni sull'utilizzo ml64.exe.  
  
## <a name="example"></a>Esempio  
  
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
  
 Il codice sopra riportato verrà emit nella tabella seguente di funzione e rimozione di informazioni:  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento a direttive](../../assembler/masm/directives-reference.md)