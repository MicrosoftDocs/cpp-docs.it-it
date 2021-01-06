---
description: Ulteriori informazioni su:. MODEL (MASM a 32 bit)
title: .MODEL
ms.date: 11/05/2019
f1_keywords:
- .MODEL
helpviewer_keywords:
- .MODEL directive
ms.assetid: 057f00df-1515-4c55-852a-d936c8a34b53
ms.openlocfilehash: a4324b89f1194227edd7f1d5b7bd70560eca16be
ms.sourcegitcommit: 6183207b11575d7b44ebd7c18918e916a0d8c63d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/06/2021
ms.locfileid: "97951420"
---
# <a name="model-32-bit-masm"></a>. MODEL (MASM a 32 bit)

Inizializza il modello di memoria del programma. (solo MASM a 32 bit).

## <a name="syntax"></a>Sintassi

> **. Modello** di *memoria-modello* ⟦__,__ *tipo di linguaggio*⟧ ⟦__,__ *stack-Option*⟧

### <a name="parameters"></a>Parametri

*modello di memoria*\
Parametro obbligatorio che determina le dimensioni dei puntatori di codice e di dati.

*tipo di linguaggio*\
Parametro facoltativo che imposta le convenzioni di denominazione e chiamata per le procedure e i simboli pubblici.

*opzione stack*\
Parametro facoltativo.

l' *opzione stack* non viene utilizzata se il *modello di memoria* è **Flat**.

Se si specifica **NEARSTACK** , il segmento dello stack viene raggruppato in un singolo segmento fisico (**DGROUP**) insieme ai dati. Si presuppone che il registro del segmento stack (**SS**) contenga lo stesso indirizzo del registro del segmento di dati (**DS**). **FARSTACK** non raggruppa lo stack con **DGROUP**; **SS** , quindi, non è uguale a **DS**.

## <a name="remarks"></a>Commenti

**. Il modello** non viene utilizzato in [MASM per x64 (ml64.exe)](masm-for-x64-ml64-exe.md).

La tabella seguente elenca i valori possibili per ogni parametro quando la destinazione è rappresentata da piattaforme a 16 bit e a 32 bit:

|Parametro|Valori a 32 bit|Valori a 16 bit (supporto per lo sviluppo di versioni precedenti a 16 bit)|
|---------------|--------------------|----------------------------------------------------------------|
|*modello di memoria*|**PIATTO**|**Tiny**, **small**, **Compact**, **medium**, **large**, **huge**, **Flat**|
|*tipo di linguaggio*|**C**, **stdcall**|**C**, **Basic**, **FORTRAN**, **Pascal**, **syscall**, **stdcall**|
|*opzione stack*|Non usato|**NEARSTACK**, **FARSTACK**|

## <a name="code"></a>Codice

Per esempi relativi a MASM, scaricare gli esempi del compilatore da [Esempi di Visual C++ e documentazione correlata per Visual Studio 2010](https://github.com/Microsoft/vcsamples).

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

[Guida di riferimento alle direttive](directives-reference.md)\
[Grammatica BNF di MASM](masm-bnf-grammar.md)
