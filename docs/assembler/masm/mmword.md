---
title: MMWORD
ms.date: 12/17/2019
f1_keywords:
- MMWORD
helpviewer_keywords:
- MMWORD directive
ms.assetid: b4c5a104-9078-4fb4-afc3-d1e63abe562a
ms.openlocfilehash: fd3b9f40b7ff9fa4dae570e0ed906c13a9456424
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75311923"
---
# <a name="mmword"></a>MMWORD

Usato per gli operandi multimediali a 64 bit con istruzioni MMX e SSE (XMM).

## <a name="syntax"></a>Sintassi

> **MMWORD**

## <a name="remarks"></a>Note

**MMWORD** è un tipo.  Prima di aggiungere **MMWORD** a MASM, era possibile ottenere una funzionalità equivalente con:

```asm
    mov mm0, qword ptr [ebx]
```

Sebbene entrambe le istruzioni funzionino su operandi a 64 bit, **QWORD** è il tipo per interi senza segno a 64 bit e **MMWORD** è il tipo per un valore multimediale a 64 bit.

**MMWORD** è progettato per rappresentare lo stesso tipo di [__m64](../../cpp/m64.md).

## <a name="example"></a>Esempio

```asm
    movq     mm0, mmword ptr [ebx]
```

## <a name="see-also"></a>Vedere anche

[Grammatica BNF di MASM](masm-bnf-grammar.md)
