---
title: .MODEL
ms.date: 11/05/2019
f1_keywords:
- .MODEL
helpviewer_keywords:
- .MODEL directive
ms.assetid: 057f00df-1515-4c55-852a-d936c8a34b53
ms.openlocfilehash: bfc114a6e71c0eb0ae70005c2657871b6c9e9692
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74398104"
---
# <a name="model-32-bit-masm"></a>.MODEL (32-bit MASM)

Inizializza il modello di memoria del programma. (32-bit MASM only.)

## <a name="syntax"></a>Sintassi

> **.MODEL** *memory-model* ⟦ __,__ *language-type*⟧ ⟦ __,__ *stack-option*⟧

### <a name="parameters"></a>Parametri

*memory-model*\
Parametro obbligatorio che determina le dimensioni dei puntatori di codice e di dati.

*language-type*\
Parametro facoltativo che imposta le convenzioni di denominazione e chiamata per le procedure e i simboli pubblici.

*stack-option*\
Parametro facoltativo.

*stack-option* is not used if *memory-model* is **FLAT**.

Specifying **NEARSTACK** groups the stack segment into a single physical segment (**DGROUP**) along with data. The stack segment register (**SS**) is assumed to hold the same address as the data segment register (**DS**). **FARSTACK** does not group the stack with **DGROUP**; thus **SS** does not equal **DS**.

## <a name="remarks"></a>Note

**.MODEL** is not used in [MASM for x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).

La tabella seguente elenca i valori possibili per ogni parametro quando la destinazione è rappresentata da piattaforme a 16 bit e a 32 bit:

|Parametro|Valori a 32 bit|Valori a 16 bit (supporto per lo sviluppo di versioni precedenti a 16 bit)|
|---------------|--------------------|----------------------------------------------------------------|
|*memory-model*|**FLAT**|**TINY**, **SMALL**, **COMPACT**, **MEDIUM**, **LARGE**, **HUGE**, **FLAT**|
|*language-type*|**C**, **STDCALL**|**C**, **BASIC**, **FORTRAN**, **PASCAL**, **SYSCALL**, **STDCALL**|
|*stack-option*|Non utilizzato|**NEARSTACK**, **FARSTACK**|

## <a name="code"></a>Codice

Per esempi relativi a MASM, scaricare gli esempi del compilatore da [Esempi di Visual C++ e documentazione correlata per Visual Studio 2010](https://go.microsoft.com/fwlink/p/?linkid=178749).

Nell'esempio seguente viene illustrato l'uso della direttiva `.MODEL`.

## <a name="example"></a>Esempio

```asm
; file simple.asm
; For x86 (32-bit), assemble with debug information:
;   ml -c -Zi simple.asm
; For x64 (64-bit), assemble with debug information:
;   ml64 -c -DX64 -Zi simple.asm
;
; In this sample, the 'X64' define excludes source not used
;  when targeting the x64 architecture

ifndef X64
.686p
.XMM
.model flat, C
endif

.data
; user data

.code
; user code

fxn PROC public
  xor eax, eax ; zero function return value
  ret
fxn ENDP

end
```

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)
