---
title: __max
ms.date: 04/05/2018
apiname:
- __max
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- max
- __max
helpviewer_keywords:
- max macro
- maximum macro
- __max macro
ms.assetid: 05c936f6-0e22-45d6-a58d-4bc102e9dae2
ms.openlocfilehash: 32e1207ea4bb030ac5303de32c0566f98e0596a3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50613759"
---
# <a name="max"></a>__max

Una macro del preprocessore che restituisce il più elevato tra due valori.

## <a name="syntax"></a>Sintassi

```C
#define __max(a,b) (((a) > (b)) ? (a) : (b))
```

### <a name="parameters"></a>Parametri

*una*, *b*<br/>
Valori di qualsiasi tipo numerico da confrontare.

## <a name="return-value"></a>Valore restituito

**max** restituisce il più elevato dei relativi argomenti.

## <a name="remarks"></a>Note

Il **max** macro Confronta due valori e restituisce il valore di quello maggiore. Gli argomenti possono essere di qualsiasi tipo di dati numerico, con o senza segno. Il tipo di dati deve essere lo stesso per entrambi gli argomenti e il valore restituito.

L'argomento restituito viene valutata due volte tramite la macro. Questo può causare risultati imprevisti se l'argomento è un'espressione che modifica il valore quando viene valutata, ad esempio `*p++`.

## <a name="requirements"></a>Requisiti

|Macro|Intestazione obbligatoria|
|-------------|---------------------|
|**__max**|\<stdlib.h>|

## <a name="example"></a>Esempio

Per altre informazioni, vedere l'esempio per [__min](min.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[__min](min.md)<br/>