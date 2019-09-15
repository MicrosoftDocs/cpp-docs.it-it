---
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
ms.openlocfilehash: 278fca89046fcfc98e8c3ff726918cb4319e4ab0
ms.sourcegitcommit: f19474151276d47da77cdfd20df53128fdcc3ea7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70951253"
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

## <a name="remarks"></a>Note

La macro **offsetof** restituisce l'offset in byte di *memberName* dall'inizio della struttura specificata da *structName* come valore di tipo **size_t**. È possibile specificare i tipi con la parola chiave **struct** .

> [!NOTE]
> **offsetof** non è una funzione e non può essere descritta usando un prototipo C.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**offsetof**|\<stddef.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
