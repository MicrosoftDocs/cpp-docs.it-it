---
title: .MODEL
ms.date: 08/30/2018
f1_keywords:
- .MODEL
helpviewer_keywords:
- .MODEL directive
ms.assetid: 057f00df-1515-4c55-852a-d936c8a34b53
ms.openlocfilehash: c3917fea0f13e54d5f8f73599a2d28482bb6d259
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57743944"
---
# <a name="model"></a>.MODEL

Inizializza il modello di memoria programma.

## <a name="syntax"></a>Sintassi

> . MODELLO memorymodel [[, langtype]] [[, stackoption]]

### <a name="parameters"></a>Parametri

*memorymodel*<br/>
Parametro obbligatorio che determina le dimensioni di puntatori di codice e i dati.

*langtype*<br/>
Parametro facoltativo che imposta le convenzioni di denominazione e chiamate per le procedure e dei simboli pubblici.

*stackoption*<br/>
Parametro facoltativo.

*stackoption* non viene usato se *memorymodel* è `FLAT`.

Che specifica `NEARSTACK` raggruppa il segmento dello stack in un singolo segmento fisico (`DGROUP`) insieme ai dati. Lo stack di registri di segmento (`SS`) si presuppone che contengono lo stesso indirizzo come il Registro di segmento di dati (`DS`). `FARSTACK` non di gruppo con lo stack `DGROUP`; di conseguenza `SS` non è uguale `DS`.

## <a name="remarks"></a>Note

.`MODEL` non viene usato nel [MASM per x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md).

La tabella seguente elenca i possibili valori per ogni parametro quando la destinazione a piattaforme di 16 bit e a 32 bit:

|Parametro|valori a 32 bit|valori a 16 bit (supporto per lo sviluppo di versioni precedenti a 16 bit)|
|---------------|--------------------|----------------------------------------------------------------|
|*memorymodel*|`FLAT`|`TINY`, `SMALL`, `COMPACT`, `MEDIUM`, `LARGE`, `HUGE`, `FLAT`|
|*langtype*|`C`, `STDCALL`|`C`, `BASIC`, `FORTRAN`, `PASCAL`, `SYSCALL`, `STDCALL`|
|*stackoption*|Non utilizzato|`NEARSTACK`, `FARSTACK`|

## <a name="code"></a>Codice

Per esempi relativi MASM, scaricare gli esempi del compilatore [esempi di Visual C++ e la relativa documentazione per Visual Studio 2010](http://go.microsoft.com/fwlink/p/?linkid=178749).

Nell'esempio seguente viene illustrato l'utilizzo del `.MODEL` direttiva.

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
