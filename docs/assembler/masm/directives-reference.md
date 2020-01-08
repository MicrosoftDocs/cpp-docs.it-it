---
title: Riferimento a direttive
ms.date: 12/17/2019
f1_keywords:
- Directives Reference
helpviewer_keywords:
- MASM (Microsoft Macro Assembler), directives reference
ms.assetid: da6efcd1-18f7-41de-81cd-a002a02f9a22
ms.openlocfilehash: 8591ecdae0162eaec0760e08aaa44fdf5f0e297c
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75314718"
---
# <a name="directives-reference"></a>Riferimento a direttive

## <a name="x64"></a>x64

||||
|-|-|-|
|[.ALLOCSTACK](dot-allocstack.md)|[.ENDPROLOG](dot-endprolog.md)|[PROC](proc.md)|
|[.PUSHFRAME](dot-pushframe.md)|[.PUSHREG](dot-pushreg.md)|[.SAVEREG](dot-savereg.md)|
|[.SAVEXMM128](dot-savexmm128.md)|[.SETFRAME](dot-setframe.md)||

### <a name="code-labels"></a>Etichette codice

|||
|-|-|
|[ALIGN](align-masm.md)|[EVEN](even.md)|
|[LABEL](label-masm.md)|[ORG](org.md)|

### <a name="conditional-assembly"></a>Assembly condizionale

||||
|-|-|-|
|[ELSE](else-masm.md)|[ELSEIF](elseif-masm.md)|[ELSEIF2](elseif2.md)|
|[IF](if-masm.md)|[IF2](if2.md)|[IFB](ifb.md)/[IFNB](ifnb.md)|
|[IFDEF](ifdef.md)/[ifndef](ifndef.md)|[IFDIF](ifdif.md)/[IFDIF&#91;&#91;I&#93;&#93;](ifdif.md)|[IFE](ife.md)|
|[IFIDN](ifidn.md)/[IFIDN&#91;&#91;I&#93;&#93;](ifidn.md)|||

### <a name="conditional-control-flow"></a>Flusso di controllo condizionale

||||
|-|-|-|
|[.BREAK](dot-break.md)|[.CONTINUE](dot-continue.md)|[.ELSE](dot-else.md)|
|[.ELSEIF](dot-if.md)|[.ENDIF](dot-endif.md)|[.ENDW](dot-endw.md)|
|[.IF](dot-if.md)|[.REPEAT](dot-repeat.md)|[.UNTIL](dot-until.md)|
|[.UNTILCXZ](dot-untilcxz.md)|[.WHILE](dot-while.md)||

### <a name="conditional-error"></a>Errore condizionale

||||
|-|-|-|
|[.ERR](dot-err.md)|[.ERR2](dot-err2.md)|[.ERRB](dot-errb.md)|
|[.ERRDEF](dot-errdef.md)|[.ERRDIF](dot-errdif.md)/[.ERRDIF&#91;&#91;I&#93;&#93;&#93;](dot-errdif.md)|[.ERRE](dot-erre.md)|
|[.ERRIDN](dot-erridn.md)/[.ERRIDN&#91;&#91;I&#93;&#93;](dot-erridn.md)|[.ERRNB](dot-errnb.md)|[.ERRNDEF](dot-errndef.md)|
|[.ERRNZ](dot-errnz.md)|||

### <a name="data-allocation"></a>Allocazione dati

||||
|-|-|-|
|[ALIGN](align-masm.md)|[BYTE](byte-masm.md)/[SBYTE](sbyte-masm.md)|[DWORD](dword.md)/[SDWORD](sdword.md)|
|[EVEN](even.md)|[FWORD](fword.md)|[LABEL](label-masm.md)|
|[ORG](org.md)|[QWORD](qword.md)|[REAL4](real4.md)|
|[REAL8](real8.md)|[REAL10](real10.md)|[TBYTE](tbyte.md)|
|[WORD](word.md)/[SWORD](sword.md)|||

### <a name="equates"></a>Equivale

||||
|-|-|-|
|[=](equal.md)|[EQU](equ.md)|[TEXTEQU](textequ.md)|

### <a name="listing-control"></a>Elenco di controllo

||||
|-|-|-|
|[.CREF](dot-cref.md)|[.LIST](dot-list.md)|[.LISTALL](dot-listall.md)|
|[.LISTIF](dot-listif.md)|[.LISTMACRO](dot-listmacro.md)|[.LISTMACROALL](dot-listmacroall.md)|
|[.NOCREF](dot-nocref.md)|[.NOLIST](dot-nolist.md)|[.NOLISTIF](dot-nolistif.md)|
|[.NOLISTMACRO](dot-nolistmacro.md)|[PAGE](page.md)|[SUBTITLE](subtitle.md)|
|[.TFCOND](dot-tfcond.md)|[TITLE](title.md)||

### <a name="macros"></a>Macro

||||
|-|-|-|
|[ENDM](endm.md)|[EXITM](exitm.md)|[GOTO](goto-masm.md)|
|[LOCAL](local-masm.md)|[MACRO](macro.md)|[PURGE](purge.md)|

### <a name="miscellaneous"></a>Varie

||||
|-|-|-|
|[ALIAS](alias-masm.md)|[ASSUME](assume.md)|[COMMENT](comment-masm.md)|
|[ECHO](echo.md)|[END](end-masm.md)|[.FPO](dot-fpo.md)|
|[INCLUDE](include-masm.md)|[INCLUDELIB](includelib-masm.md)|[MMWORD](mmword.md)|
|[OPTION](option-masm.md)|[POPCONTEXT](popcontext.md)|[PUSHCONTEXT](pushcontext.md)|
|[.RADIX](dot-radix.md)|[.SAFESEH](dot-safeseh.md)|[XMMWORD](xmmword.md)|
|[YMMWORD](ymmword.md)|||

### <a name="procedures"></a>Procedure

||||
|-|-|-|
|[ENDP](endp.md)|[INVOKE](invoke.md)|[PROC](proc.md)|
|[PROTO](proto.md)|||

### <a name="processor"></a>Processore

||||
|-|-|-|
|[.386](dot-386.md)|[.386P](dot-386p.md)|[.387](dot-387.md)|
|[.486](dot-486.md)|[.486P](dot-486p.md)|[.586](dot-586.md)|
|[.586P](dot-586p.md)|[.686](dot-686.md)|[.686P](dot-686p.md)|
|[.K3D](dot-k3d.md)|[.MMX](dot-mmx.md)|[.XMM](dot-xmm.md)|

### <a name="repeat-blocks"></a>Blocchi ripetuti

||||
|-|-|-|
|[ENDM](endm.md)|[FOR](for-masm.md)|[FORC](forc.md)|
|[GOTO](goto-masm.md)|[REPEAT](repeat.md)|[WHILE](while-masm.md)|

### <a name="scope"></a>Ambito

||||
|-|-|-|
|[COMM](comm.md)|[EXTERN](extern-masm.md)|[EXTERNDEF](externdef.md)|
|[INCLUDELIB](includelib-masm.md)|[PUBLIC](public-masm.md)||

### <a name="segment"></a>Segment

||||
|-|-|-|
|[.ALPHA](dot-alpha.md)|[ASSUME](assume.md)|[.DOSSEG](dot-dosseg.md)|
|[END](end-masm.md)|[FINISCE](ends-masm.md)|[GROUP](group.md)|
|[SEGMENT](segment.md)|[.SEQ](dot-seq.md)||

### <a name="simplified-segment"></a>Segmento semplificato

||||
|-|-|-|
|[.CODE](dot-code.md)|[.CONST](dot-const.md)|[.DATA](dot-data.md)|
|[.DATA?](dot-data-q.md)|[.DOSSEG](dot-dosseg.md)|[.EXIT](dot-exit.md)|
|[.FARDATA](dot-fardata.md)|[.FARDATA?](dot-fardata-q.md)|[.MODEL](dot-model.md)|
|[.STACK](dot-stack.md)|[.STARTUP](dot-startup.md)||

### <a name="string"></a>Stringa

|||
|-|-|
|[CATSTR](catstr.md)|[INSTR](instr.md)|
|[SIZESTR](sizestr.md)|[SUBSTR](substr.md)|

### <a name="structure-and-record"></a>Struttura e record

||||
|-|-|-|
|[FINISCE](ends-masm.md)|[RECORD](record-masm.md)|[STRUCT](struct-masm.md)|
|[TYPEDEF](typedef-masm.md)|[UNION](union.md)||

## <a name="see-also"></a>Vedere anche

Guida di [riferimento a Microsoft Macro Assembler](microsoft-macro-assembler-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
