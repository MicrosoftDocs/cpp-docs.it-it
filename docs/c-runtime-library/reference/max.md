---
title: __max
ms.date: 04/05/2018
api_name:
- __max
api_location:
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
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- max
- __max
helpviewer_keywords:
- max macro
- maximum macro
- __max macro
ms.assetid: 05c936f6-0e22-45d6-a58d-4bc102e9dae2
ms.openlocfilehash: dac82ecd1c96d1edf9175a29797d93c65bc19c99
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70952743"
---
# <a name="__max"></a>__max

Una macro del preprocessore che restituisce il maggiore di due valori.

## <a name="syntax"></a>Sintassi

```C
#define __max(a,b) (((a) > (b)) ? (a) : (b))
```

### <a name="parameters"></a>Parametri

*a*, *b*<br/>
Valori di qualsiasi tipo numerico da confrontare.

## <a name="return-value"></a>Valore restituito

**__max** restituisce il più grande degli argomenti.

## <a name="remarks"></a>Note

La macro **__max** Confronta due valori e restituisce il valore di quello più grande. Gli argomenti possono essere di qualsiasi tipo di dati numerico, con o senza segno. Il tipo di dati deve essere lo stesso per entrambi gli argomenti e il valore restituito.

L'argomento restituito viene valutato due volte dalla macro. Questo può causare risultati imprevisti se l'argomento è un'espressione che modifica il valore quando viene valutato, ad esempio `*p++`.

## <a name="requirements"></a>Requisiti

|Macro|Intestazione obbligatoria|
|-------------|---------------------|
|**__max**|\<stdlib.h>|

## <a name="example"></a>Esempio

Per altre informazioni, vedere l'esempio per [__min](min.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[__min](min.md)<br/>