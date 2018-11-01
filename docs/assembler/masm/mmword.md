---
title: MMWORD
ms.date: 08/30/2018
f1_keywords:
- MMWORD
helpviewer_keywords:
- MMWORD directive
ms.assetid: b4c5a104-9078-4fb4-afc3-d1e63abe562a
ms.openlocfilehash: 1205338f9140c74a3a6e0b4bce57983edc80862e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50541118"
---
# <a name="mmword"></a>MMWORD

Usato per gli operandi multimediali a 64 bit con le istruzioni MMX e SSE (XMM).

## <a name="syntax"></a>Sintassi

> MMWORD

## <a name="remarks"></a>Note

`MMWORD` è un tipo.  Prima di MMWORD viene pertanto aggiunta alla MASM, una funzionalità equivalente avrebbe con:

```asm
    mov mm0, qword ptr [ebx]
```

Anche se entrambe le istruzioni sono valide operandi a 64 bit, `QWORD` è il tipo per interi senza segno a 64 bit e `MMWORD` è il tipo per un valore multimediale a 64 bit.

`MMWORD` è lo scopo di rappresentare lo stesso tipo [__m64](../../cpp/m64.md).

## <a name="example"></a>Esempio

```asm
    movq     mm0, mmword ptr [ebx]
```