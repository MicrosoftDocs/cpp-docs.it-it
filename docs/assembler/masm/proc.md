---
title: PROC
ms.date: 08/30/2018
f1_keywords:
- PROC
helpviewer_keywords:
- PROC directive
ms.assetid: ee5bb6b6-fa15-4d73-b0cf-e650178539a9
ms.openlocfilehash: e7931c97570c0fefcacb0123d75934867793fba4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62210534"
---
# <a name="proc"></a>PROC

Contrassegna l'inizio e fine di un blocco di routine chiamato *etichetta*. Le istruzioni nel blocco possono essere chiamate con il **CHIAMARE** (istruzione) o [INVOKE](../../assembler/masm/invoke.md) direttiva.

## <a name="syntax"></a>Sintassi

> *label* PROC [[*distance*]] [[*langtype*]] [[*visibility*]] [[\<*prologuearg*>]] [[USES *reglist*]] [[, *parameter* [[:*tag*]]]] ...<br/>
> [[FRAME [[:*ehandler-address*]] ]]<br/>
> *statements*<br/>
> *etichetta* ENDP

## <a name="remarks"></a>Note

[[FRAME [[:*il parametro ehandler-address*]]]] è valido solo con ml64.exe e MASM generare una voce della tabella (funzione) in. pdata e informazioni di. XData di rimozione per strutturata di una funzione determina il comportamento di rimozione delle eccezioni.

Quando la **FRAME** viene utilizzato l'attributo, deve essere seguito da un [. ENDPROLOG](../../assembler/masm/dot-endprolog.md) direttiva.

Visualizzare [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md) per altre informazioni sull'uso ml64.exe.

## <a name="example"></a>Esempio

```asm
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

Il codice sopra riportato sarà emettere la seguente tabella di funzioni e le informazioni di rimozione:

```Output
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

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>