---
title: _CItan | Microsoft Docs
ms.custom: ''
ms.date: 04/11/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
apiname:
- _CItan
apilocation:
- msvcr100.dll
- msvcr110_clr0400.dll
- msvcr80.dll
- msvcrt.dll
- msvcr110.dll
- msvcr90.dll
- msvcr120.dll
apitype: DLLExport
f1_keywords:
- _CItan
- CItan
dev_langs:
- C++
helpviewer_keywords:
- CItan intrinsic
- _CItan intrinsic
ms.assetid: d1ea3113-50a2-45a6-b6bc-680fcdcc0928
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7f67c7303bd20b4b9b6088b9107e1a60ffd19f2b
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="citan"></a>_CItan

Calcola la tangente del primo valore dello stack a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
void __cdecl _CItan();
```

## <a name="remarks"></a>Note

Questa versione della funzione [tan](../c-runtime-library/reference/tan-tanf-tanl.md) usa una convenzione di chiamata specializzata che viene riconosciuta dal compilatore. La funzione accelera l'esecuzione poiché impedisce la generazione di copie e agevola l'allocazione dei registri.

Il valore risultante viene inserito all'inizio dello stack a virgola mobile.

## <a name="requirements"></a>Requisiti

**Piattaforma:** x86

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[tan, tanf, tanl](../c-runtime-library/reference/tan-tanf-tanl.md)<br/>
