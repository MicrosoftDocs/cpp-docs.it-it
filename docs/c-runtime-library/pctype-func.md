---
description: 'Altre informazioni su: __pctype_func'
title: __pctype_func
ms.date: 1/14/2021
api_name:
- __pctype_func
- _o___pctype_func
api_location:
- msvcrt.dll
- msvcr110_clr0400.dll
- msvcr110.dll
- msvcr120.dll
- msvcr90.dll
- msvcr100.dll
- msvcr80.dll
- api-ms-win-crt-private-l1-1-0.dll
- api-ms-win-crt-locale-l1-1-0.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- __pctype_func
helpviewer_keywords:
- __pctype_func
ms.assetid: d52b8add-d07d-4516-a22f-e836cde0c57f
ms.openlocfilehash: 492f4a4c6ff5a23c05c15267d7ac00f72bc6eb94
ms.sourcegitcommit: 1cd8f8a75fd036ffa57bc70f3ca869042d8019d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/15/2021
ms.locfileid: "98242956"
---
# <a name="__pctype_func"></a>__pctype_func

Recupera un puntatore a una matrice di informazioni sulla classificazione dei caratteri.

## <a name="syntax"></a>Sintassi

```cpp
const unsigned short *__pctype_func(
   )
```

## <a name="return-value"></a>Valore restituito

Un puntatore a una matrice di informazioni sulla classificazione dei caratteri.

## <a name="remarks"></a>Commenti

Le informazioni nella tabella di classificazione dei caratteri sono solo per uso interno e sono utilizzate da diverse funzioni che classificano i caratteri di tipo **`char`** . Per alte informazioni, vedere la sezione `Remarks` in [_pctype, _pwctype, _wctype, _mbctype, _mbcasemap](../c-runtime-library/pctype-pwctype-wctype-mbctype-mbcasemap.md).

Per impostazione predefinita, lo stato globale di questa funzione ha come ambito l'applicazione. Per modificare questa situazione, vedere [stato globale in CRT](global-state.md).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|__pctype_func|ctype.h|

## <a name="see-also"></a>Vedere anche

[_pctype, _pwctype, _wctype, _mbctype, _mbcasemap](../c-runtime-library/pctype-pwctype-wctype-mbctype-mbcasemap.md)
