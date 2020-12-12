---
description: 'Altre informazioni su: offsetof macro'
title: Macro offsetof
ms.date: 11/04/2016
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
- offsetof
helpviewer_keywords:
- structure members, offset
- offsetof macro
ms.assetid: f3b4eb16-a882-4d38-afc9-eebd976a7352
ms.openlocfilehash: 055bda67bae178143561acd91b517c431f77cac0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97256267"
---
# <a name="offsetof-macro"></a>Macro offsetof

Recupera l'offset di un membro dall'inizio della relativa struttura padre.

## <a name="syntax"></a>Sintassi

```C
size_t offsetof(
   structName,
   memberName
);
```

### <a name="parameters"></a>Parametri

*structName*<br/>
Nome della struttura di dati padre.

*memberName*<br/>
Nome del membro nella struttura di dati padre per il quale determinare l'offset.

## <a name="return-value"></a>Valore restituito

**offsetof** restituisce l'offset in byte del membro specificato dall'inizio della struttura di dati padre. Viene definito per i campi di bit.

## <a name="remarks"></a>Commenti

La macro **offsetof** restituisce l'offset in byte di *memberName* dall'inizio della struttura specificata da *structName* come valore di tipo **size_t**. È possibile specificare i tipi con la **`struct`** parola chiave.

> [!NOTE]
> **offsetof** non è una funzione e non può essere descritta usando un prototipo C.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**offsetof**|\<stddef.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedi anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
