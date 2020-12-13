---
description: 'Altre informazioni su: MMWORD'
title: MMWORD
ms.date: 12/17/2019
f1_keywords:
- MMWORD
helpviewer_keywords:
- MMWORD directive
ms.assetid: b4c5a104-9078-4fb4-afc3-d1e63abe562a
ms.openlocfilehash: f0e888efcfea7c1ca94129ff3e4cd2f40644ae13
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97128233"
---
# <a name="mmword"></a>MMWORD

Usato per gli operandi multimediali a 64 bit con istruzioni MMX e SSE (XMM).

## <a name="syntax"></a>Sintassi

> **MMWORD**

## <a name="remarks"></a>Commenti

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
