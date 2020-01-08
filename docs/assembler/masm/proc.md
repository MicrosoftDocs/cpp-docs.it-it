---
title: PROC
ms.date: 12/06/2019
f1_keywords:
- PROC
helpviewer_keywords:
- PROC directive
ms.assetid: ee5bb6b6-fa15-4d73-b0cf-e650178539a9
ms.openlocfilehash: 85d9a1e82eebcd83cb0f12f5ca751ec9415af18d
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75318670"
---
# <a name="proc"></a>PROC

Contrassegna l'inizio e la fine di un blocco di routine denominato *Label*. Le istruzioni nel blocco possono essere chiamate con l'istruzione **Call** o la direttiva [Invoke](invoke.md) .

## <a name="syntax"></a>Sintassi

> *Label* **proc** ⟦*distance*⟧ ⟦*Language-Type*⟧ ⟦ **public** | **private** | **Export** ⟧ ⟦ __\<__ *prologuearg* __>__ ⟧ ⟦**USA** *reglist*⟧ ⟦ __,__ *parametro* ⟦ __:__ *tag*⟧... ⟧\
> ⟦**Frame** ⟦ __:__ *ehandler-Address*⟧ ⟧ \
> \ di *istruzioni*
> *etichetta* **ENDP**

## <a name="remarks"></a>Note

Gli argomenti ⟦*distance*⟧ e ⟦*Language-Type*⟧ sono validi solo in MASM a 32 bit.

⟦**Frame** ⟦ __:__ *ehandler-Address*⟧ ⟧ è valido solo con ml64. exe e fa in modo che MASM generi una voce della tabella di funzione in. pdata e le informazioni di rimozione in. xdata per il comportamento di rimozione della gestione delle eccezioni strutturate di una funzione.

Quando si usa l'attributo **frame** , deve essere seguito da un oggetto [. Direttiva ENDPROLOG](dot-endprolog.md) .

Per ulteriori informazioni sull'utilizzo di ml64. exe, vedere [MASM per x64 (ml64. exe)](masm-for-x64-ml64-exe.md) .

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

Il codice precedente creerà la tabella di funzioni e le informazioni di rimozione seguenti:

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

[Riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
