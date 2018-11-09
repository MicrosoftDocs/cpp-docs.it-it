---
title: _CIsin
ms.date: 04/10/2018
apiname:
- _CIsin
apilocation:
- msvcr80.dll
- msvcr100.dll
- msvcrt.dll
- msvcr110.dll
- msvcr120.dll
- msvcr90.dll
- msvcr110_clr0400.dll
apitype: DLLExport
f1_keywords:
- CIsin
- _CIsin
helpviewer_keywords:
- _CIsin intrinsic
- CIsin intrinsic
ms.assetid: f215f39a-2341-4f1c-ba8e-cb522451ceb2
ms.openlocfilehash: 89350cdc61b7c96b09242731f89c934727e44a19
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50481304"
---
# <a name="cisin"></a>_CIsin

Calcola il seno del primo valore dello stack a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
void __cdecl _CIsin();
```

## <a name="remarks"></a>Note

Questa versione intrinseca della funzione [sin](../c-runtime-library/reference/sin-sinf-sinl.md) usa una convenzione di chiamata specializzata che viene riconosciuta dal compilatore. Ciò accelera l'esecuzione in quanto impedisce la generazione di copie e aiuta l'allocazione dei registri.

Il valore risultante viene inserito all'inizio dello stack a virgola mobile.

## <a name="requirements"></a>Requisiti

**Piattaforma:** x86

## <a name="see-also"></a>Vedere anche

[Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)<br/>
[sin, sinf, sinl](../c-runtime-library/reference/sin-sinf-sinl.md)<br/>
