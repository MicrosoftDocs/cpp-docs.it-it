---
title: _CIsin | Microsoft Docs
ms.custom: ''
ms.date: 04/10/2018
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
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
dev_langs:
- C++
helpviewer_keywords:
- _CIsin intrinsic
- CIsin intrinsic
ms.assetid: f215f39a-2341-4f1c-ba8e-cb522451ceb2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4d4593b02b08b1828ff4b29c8f55bfcaf4baa0c9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32387447"
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
