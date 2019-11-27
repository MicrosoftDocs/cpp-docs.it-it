---
title: Riferimento a direttive
ms.date: 08/30/2018
f1_keywords:
- Directives Reference
helpviewer_keywords:
- MASM (Microsoft Macro Assembler), directives reference
ms.assetid: da6efcd1-18f7-41de-81cd-a002a02f9a22
ms.openlocfilehash: 12effa33b80403f3e8f1a130ac53a75b02cfefff
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74398781"
---
# <a name="directives-reference"></a>Riferimento a direttive

## <a name="x64"></a>X64

||||
|-|-|-|
|[.ALLOCSTACK](../../assembler/masm/dot-allocstack.md)|[.ENDPROLOG](../../assembler/masm/dot-endprolog.md)|[PROC](../../assembler/masm/proc.md)|
|[.PUSHFRAME](../../assembler/masm/dot-pushframe.md)|[.PUSHREG](../../assembler/masm/dot-pushreg.md)|[.SAVEREG](../../assembler/masm/dot-savereg.md)|
|[.SAVEXMM128](../../assembler/masm/dot-savexmm128.md)|[.SETFRAME](../../assembler/masm/dot-setframe.md)||

### <a name="code-labels"></a>Etichette codice

|||
|-|-|
|[ALLINEARE](../../assembler/masm/align-masm.md)|[EVEN](../../assembler/masm/even.md)|
|[ETICHETTA](../../assembler/masm/label-masm.md)|[ORG](../../assembler/masm/org.md)|

### <a name="conditional-assembly"></a>Assembly condizionale

||||
|-|-|-|
|[ALTRO](../../assembler/masm/else-masm.md)|[ELSEIF](../../assembler/masm/elseif-masm.md)|[ELSEIF2](../../assembler/masm/elseif2.md)|
|[Se](../../assembler/masm/if-masm.md)|[IF2](../../assembler/masm/if2.md)|[IFB](../../assembler/masm/ifb.md)/[IFNB](../../assembler/masm/ifnb.md)|
|[IFDEF](../../assembler/masm/ifdef.md)/[ifndef](../../assembler/masm/ifndef.md)|[IFDIF](../../assembler/masm/ifdif.md)/[IFDIF&#91;&#91;I&#93; ](../../assembler/masm/ifdif.md)|[IFE](../../assembler/masm/ife.md)|
|[IFIDN](../../assembler/masm/ifidn.md)/[IFIDN&#91;&#91;I&#93; ](../../assembler/masm/ifidn.md)|||

### <a name="conditional-control-flow"></a>Flusso di controllo condizionale

||||
|-|-|-|
|[.BREAK](../../assembler/masm/dot-break.md)|[.CONTINUE](../../assembler/masm/dot-continue.md)|[.ELSE](../../assembler/masm/dot-else.md)|
|[. ELSEIF](../../assembler/masm/dot-if.md)|[.ENDIF](../../assembler/masm/dot-endif.md)|[.ENDW](../../assembler/masm/dot-endw.md)|
|[.IF](../../assembler/masm/dot-if.md)|[.REPEAT](../../assembler/masm/dot-repeat.md)|[.UNTIL](../../assembler/masm/dot-until.md)|
|[.UNTILCXZ](../../assembler/masm/dot-untilcxz.md)|[.WHILE](../../assembler/masm/dot-while.md)||

### <a name="conditional-error"></a>Errore condizionale

||||
|-|-|-|
|[.ERR](../../assembler/masm/dot-err.md)|[.ERR2](../../assembler/masm/dot-err2.md)|[.ERRB](../../assembler/masm/dot-errb.md)|
|[.ERRDEF](../../assembler/masm/dot-errdef.md)|[. ](../../assembler/masm/dot-errdif.md)/ERRDIF [. &#91;ERRDIF&#91;&#93; &#93; ](../../assembler/masm/dot-errdif.md)|[.ERRE](../../assembler/masm/dot-erre.md)|
|[. ](../../assembler/masm/dot-erridn.md)/ERRIDN [. &#91;ERRIDN&#91;&#93; ](../../assembler/masm/dot-erridn.md)|[.ERRNB](../../assembler/masm/dot-errnb.md)|[.ERRNDEF](../../assembler/masm/dot-errndef.md)|
|[.ERRNZ](../../assembler/masm/dot-errnz.md)|||

### <a name="data-allocation"></a>Allocazione dati

||||
|-|-|-|
|[ALLINEARE](../../assembler/masm/align-masm.md)|[BYTE](../../assembler/masm/byte-masm.md)/[SByte](../../assembler/masm/sbyte-masm.md)|[DWORD](../../assembler/masm/dword.md)/[SDWORD](../../assembler/masm/sdword.md)|
|[EVEN](../../assembler/masm/even.md)|[FWORD](../../assembler/masm/fword.md)|[ETICHETTA](../../assembler/masm/label-masm.md)|
|[ORG](../../assembler/masm/org.md)|[QWORD](../../assembler/masm/qword.md)|[REAL4](../../assembler/masm/real4.md)|
|[REAL8](../../assembler/masm/real8.md)|[REAL10](../../assembler/masm/real10.md)|[TBYTE](../../assembler/masm/tbyte.md)|
|[Parola](../../assembler/masm/word.md)/[spada](../../assembler/masm/sword.md)|||

### <a name="equates"></a>Equivale

||||
|-|-|-|
|[=](../../assembler/masm/equal.md)|[EQU](../../assembler/masm/equ.md)|[TEXTEQU](../../assembler/masm/textequ.md)|

### <a name="listing-control"></a>Elenco di controllo

||||
|-|-|-|
|[.CREF](../../assembler/masm/dot-cref.md)|[.LIST](../../assembler/masm/dot-list.md)|[.LISTALL](../../assembler/masm/dot-listall.md)|
|[.LISTIF](../../assembler/masm/dot-listif.md)|[.LISTMACRO](../../assembler/masm/dot-listmacro.md)|[.LISTMACROALL](../../assembler/masm/dot-listmacroall.md)|
|[.NOCREF](../../assembler/masm/dot-nocref.md)|[.NOLIST](../../assembler/masm/dot-nolist.md)|[.NOLISTIF](../../assembler/masm/dot-nolistif.md)|
|[.NOLISTMACRO](../../assembler/masm/dot-nolistmacro.md)|[PAGE](../../assembler/masm/page.md)|[SUBTITLE](../../assembler/masm/subtitle.md)|
|[.TFCOND](../../assembler/masm/dot-tfcond.md)|[TITLE](../../assembler/masm/title.md)||

### <a name="macros"></a>Macro

||||
|-|-|-|
|[ENDM](../../assembler/masm/endm.md)|[EXITM](../../assembler/masm/exitm.md)|[GOTO](../../assembler/masm/goto-masm.md)|
|[LOCALE](../../assembler/masm/local-masm.md)|[MACRO](../../assembler/masm/macro.md)|[PURGE](../../assembler/masm/purge.md)|

### <a name="miscellaneous"></a>Varie

||||
|-|-|-|
|[ALIAS](../../assembler/masm/alias-masm.md)|[ASSUME](../../assembler/masm/assume.md)|[Commento](../../assembler/masm/comment-masm.md)|
|[ECHO](../../assembler/masm/echo.md)|[FINE](../../assembler/masm/end-masm.md)|[.FPO](../../assembler/masm/dot-fpo.md)|
|[INCLUDERE](../../assembler/masm/include-masm.md)|[INCLUDELIB (](../../assembler/masm/includelib-masm.md)|[MMWORD](../../assembler/masm/mmword.md)|
|[OPZIONE](../../assembler/masm/option-masm.md)|[POPCONTEXT](../../assembler/masm/popcontext.md)|[PUSHCONTEXT](../../assembler/masm/pushcontext.md)|
|[.RADIX](../../assembler/masm/dot-radix.md)|[.SAFESEH](../../assembler/masm/dot-safeseh.md)|[XMMWORD](../../assembler/masm/xmmword.md)|
|[YMMWORD](../../assembler/masm/ymmword.md)|||

### <a name="procedures"></a>Procedure

||||
|-|-|-|
|[ENDP](../../assembler/masm/endp.md)|[INVOKE](../../assembler/masm/invoke.md)|[PROC](../../assembler/masm/proc.md)|
|[PROTO](../../assembler/masm/proto.md)|||

### <a name="processor"></a>Processore

||||
|-|-|-|
|[.386](../../assembler/masm/dot-386.md)|[.386P](../../assembler/masm/dot-386p.md)|[.387](../../assembler/masm/dot-387.md)|
|[.486](../../assembler/masm/dot-486.md)|[.486P](../../assembler/masm/dot-486p.md)|[.586](../../assembler/masm/dot-586.md)|
|[.586P](../../assembler/masm/dot-586p.md)|[.686](../../assembler/masm/dot-686.md)|[.686P](../../assembler/masm/dot-686p.md)|
|[.K3D](../../assembler/masm/dot-k3d.md)|[.MMX](../../assembler/masm/dot-mmx.md)|[.XMM](../../assembler/masm/dot-xmm.md)|

### <a name="repeat-blocks"></a>Blocchi ripetuti

||||
|-|-|-|
|[ENDM](../../assembler/masm/endm.md)|[PER](../../assembler/masm/for-masm.md)|[FORC](../../assembler/masm/forc.md)|
|[GOTO](../../assembler/masm/goto-masm.md)|[REPEAT](../../assembler/masm/repeat.md)|[MENTRE](../../assembler/masm/while-masm.md)|

### <a name="scope"></a>Ambito

||||
|-|-|-|
|[COMM](../../assembler/masm/comm.md)|[EXTERN](../../assembler/masm/extern-masm.md)|[EXTERNDEF](../../assembler/masm/externdef.md)|
|[INCLUDELIB (](../../assembler/masm/includelib-masm.md)|[PUBBLICO](../../assembler/masm/public-masm.md)||

### <a name="segment"></a>Segmento

||||
|-|-|-|
|[.ALPHA](../../assembler/masm/dot-alpha.md)|[ASSUME](../../assembler/masm/assume.md)|[.DOSSEG](../../assembler/masm/dot-dosseg.md)|
|[FINE](../../assembler/masm/end-masm.md)|[FINISCE](../../assembler/masm/ends-masm.md)|[GROUP](../../assembler/masm/group.md)|
|[SEGMENT](../../assembler/masm/segment.md)|[.SEQ](../../assembler/masm/dot-seq.md)||

### <a name="simplified-segment"></a>Segmento semplificato

||||
|-|-|-|
|[.CODE](../../assembler/masm/dot-code.md)|[.CONST](../../assembler/masm/dot-const.md)|[.DATA](../../assembler/masm/dot-data.md)|
|[.DATA?](../../assembler/masm/dot-data-q.md)|[.DOSSEG](../../assembler/masm/dot-dosseg.md)|[.EXIT](../../assembler/masm/dot-exit.md)|
|[.FARDATA](../../assembler/masm/dot-fardata.md)|[.FARDATA?](../../assembler/masm/dot-fardata-q.md)|[.MODEL](../../assembler/masm/dot-model.md)|
|[.STACK](../../assembler/masm/dot-stack.md)|[.STARTUP](../../assembler/masm/dot-startup.md)||

### <a name="string"></a>String

|||
|-|-|
|[CATSTR](../../assembler/masm/catstr.md)|[INSTR](../../assembler/masm/instr.md)|
|[SIZESTR](../../assembler/masm/sizestr.md)|[SUBSTR](../../assembler/masm/substr.md)|

### <a name="structure-and-record"></a>Struttura e record

||||
|-|-|-|
|[FINISCE](../../assembler/masm/ends-masm.md)|[RECORD](../../assembler/masm/record-masm.md)|[STRUCT](../../assembler/masm/struct-masm.md)|
|[TYPEDEF](../../assembler/masm/typedef-masm.md)|[UNION](../../assembler/masm/union.md)||

## <a name="see-also"></a>Vedere anche

[Guida di riferimento a Microsoft Macro Assembler](../../assembler/masm/microsoft-macro-assembler-reference.md)
