---
title: MMWORD | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- MMWORD
dev_langs:
- C++
helpviewer_keywords:
- MMWORD directive
ms.assetid: b4c5a104-9078-4fb4-afc3-d1e63abe562a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7314c6d0861195e312c7f72481d2e195e041965d
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43679234"
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
    movq     mm0, mmword ptr [ebx]
```