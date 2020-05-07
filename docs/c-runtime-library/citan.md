---
title: _CItan
ms.date: 4/2/2020
api_name:
- _CItan
- _o__CItan
api_location:
- msvcr100.dll
- msvcr110_clr0400.dll
- msvcr80.dll
- msvcrt.dll
- msvcr110.dll
- msvcr90.dll
- msvcr120.dll
- api-ms-win-crt-math-l1-1-0.dll
- api-ms-win-crt-private-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _CItan
- CItan
helpviewer_keywords:
- CItan intrinsic
- _CItan intrinsic
ms.assetid: d1ea3113-50a2-45a6-b6bc-680fcdcc0928
ms.openlocfilehash: 65cce8b094a1508566e2de7162b9e8e76712742a
ms.sourcegitcommit: 5a069c7360f75b7c1cf9d4550446ec2fa2eb2293
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2020
ms.locfileid: "82918324"
---
# <a name="_citan"></a>_CItan

Calcola la tangente del primo valore dello stack a virgola mobile.

## <a name="syntax"></a>Sintassi

```C
void __cdecl _CItan();
```

## <a name="remarks"></a>Osservazioni

Questa versione della funzione [tan](../c-runtime-library/reference/tan-tanf-tanl.md) usa una convenzione di chiamata specializzata che viene riconosciuta dal compilatore. La funzione accelera l'esecuzione poiché impedisce la generazione di copie e agevola l'allocazione dei registri.

Il valore risultante viene inserito all'inizio dello stack a virgola mobile.

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](global-state.md).

## <a name="requirements"></a>Requisiti

**Piattaforma:** x86

## <a name="see-also"></a>Vedere anche

[Alphabetical Function Reference](../c-runtime-library/reference/crt-alphabetical-function-reference.md) (Riferimento alfabetico alle funzioni)<br/>
[tan, tanf, tanl](../c-runtime-library/reference/tan-tanf-tanl.md)<br/>
