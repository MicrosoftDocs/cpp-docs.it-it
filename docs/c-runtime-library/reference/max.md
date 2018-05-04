---
title: __max | Microsoft Docs
ms.custom: ''
ms.date: 04/05/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
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
dev_langs:
- C++
helpviewer_keywords:
- max macro
- maximum macro
- __max macro
ms.assetid: 05c936f6-0e22-45d6-a58d-4bc102e9dae2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d223f4288ccf40646e8f560cec7243b7e8f9f649
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="max"></a>__max

Una macro del preprocessore che restituisce il maggiore dei due valori.

## <a name="syntax"></a>Sintassi

```C
#define __max(a,b) (((a) > (b)) ? (a) : (b))
```

### <a name="parameters"></a>Parametri

*un*, *b*<br/>
Valori di qualsiasi tipo numerico da confrontare.

## <a name="return-value"></a>Valore restituito

**max** restituisce il più elevato dei relativi argomenti.

## <a name="remarks"></a>Note

Il **max** macro Confronta due valori e restituisce il valore più grande. Gli argomenti possono essere di qualsiasi tipo di dati numerico, con o senza segno. Il tipo di dati deve essere lo stesso per entrambi gli argomenti e il valore restituito.

L'argomento restituito viene valutata due volte, la macro. Questo può causare risultati imprevisti se l'argomento è un'espressione che consente di modificare il relativo valore quando viene valutata, ad esempio `*p++`.

## <a name="requirements"></a>Requisiti

|Macro|Intestazione obbligatoria|
|-------------|---------------------|
|**__max**|\<stdlib.h>|

## <a name="example"></a>Esempio

Per altre informazioni, vedere l'esempio per [__min](min.md).

## <a name="see-also"></a>Vedere anche

[Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)<br/>
[__min](min.md)<br/>