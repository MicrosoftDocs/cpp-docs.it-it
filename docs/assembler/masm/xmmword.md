---
description: 'Altre informazioni su: XMMWORD'
title: XMMWORD
ms.date: 12/17/2019
f1_keywords:
- XMMWORD
helpviewer_keywords:
- XMMWORD directive
ms.assetid: 18026d32-5cab-403e-ad7e-382fb41aa9b8
ms.openlocfilehash: 304ac53a29fa7912107d6d4e87ee6efd3924ac3f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97124982"
---
# <a name="xmmword"></a>XMMWORD

Usato per gli operandi multimediali a 128 bit con istruzioni MMX e SSE (XMM).

## <a name="syntax"></a>Sintassi

> **XMMWORD**

## <a name="remarks"></a>Commenti

**XMMWORD** è progettato per rappresentare lo stesso tipo di [__m128](../../cpp/m128.md).

## <a name="example"></a>Esempio

```asm
    movdqa   xmm0, xmmword ptr [ebx]
```

## <a name="see-also"></a>Vedere anche

[Grammatica BNF di MASM](masm-bnf-grammar.md)
