---
title: .MODEL
ms.date: 11/05/2019
f1_keywords:
- .MODEL
helpviewer_keywords:
- .MODEL directive
ms.assetid: 057f00df-1515-4c55-852a-d936c8a34b53
ms.openlocfilehash: b341cfaec35c08f5ac16447890c85570e9c9c0df
ms.sourcegitcommit: 45f1d889df633f0f7e4a8e813b46fa73c9858b81
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/06/2019
ms.locfileid: "73703575"
---
# <a name="model-32-bit-masm"></a>. MODEL (MASM a 32 bit)

Inizializza il modello di memoria del programma. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> .MODEL memorymodel [[, langtype]] [[, stackoption]]

### <a name="parameters"></a>Parametri

*memorymodel*<br/>
Parametro obbligatorio che determina le dimensioni dei puntatori di codice e di dati.

*langtype*<br/>
Parametro facoltativo che imposta le convenzioni di denominazione e chiamata per le procedure e i simboli pubblici.

*stackoption*<br/>
Parametro facoltativo.

*stackoption* non viene usato se *memorymodel* è `FLAT`.

Se si specifica `NEARSTACK` il segmento dello stack viene raggruppato in un singolo segmento fisico (`DGROUP`) insieme ai dati. Si presuppone che il registro dello stack di segmento (`SS`) contenga lo stesso indirizzo del registro del segmento di dati (`DS`). `FARSTACK` non raggruppa lo stack con `DGROUP`; di conseguenza `SS` non è uguale a `DS`.

## <a name="remarks"></a>Note

.`MODEL` non viene usato in [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).

La tabella seguente elenca i valori possibili per ogni parametro quando la destinazione è rappresentata da piattaforme a 16 bit e a 32 bit:

|Parametro|Valori a 32 bit|Valori a 16 bit (supporto per lo sviluppo di versioni precedenti a 16 bit)|
|---------------|--------------------|----------------------------------------------------------------|
|*memorymodel*|`FLAT`|`TINY`, `SMALL`, `COMPACT`, `MEDIUM`, `LARGE`, `HUGE`, `FLAT`|
|*langtype*|`C`, `STDCALL`|`C`, `BASIC`, `FORTRAN`, `PASCAL`, `SYSCALL`, `STDCALL`|
|*stackoption*|Non utilizzato|`NEARSTACK`, `FARSTACK`|

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

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>
