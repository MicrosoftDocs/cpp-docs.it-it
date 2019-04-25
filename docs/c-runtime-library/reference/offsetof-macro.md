---
title: Macro offsetof
ms.date: 11/04/2016
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
- offsetof
helpviewer_keywords:
- structure members, offset
- offsetof macro
ms.assetid: f3b4eb16-a882-4d38-afc9-eebd976a7352
ms.openlocfilehash: a0f367dbe6fa2681a7d413304f32b5699b8f7cee
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62156066"
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

**OffsetOf** restituisce l'offset in byte del membro specificato dall'inizio della struttura di dati padre. Viene definito per i campi di bit.

## <a name="remarks"></a>Note

Il **offsetof** macro restituisce l'offset in byte del *memberName* dall'inizio della struttura specificata da *structName* come valore di tipo **size_ t**. È possibile specificare tipi con il **struct** (parola chiave).

> [!NOTE]
> **OffsetOf** non è una funzione e non può essere descritta utilizzando un prototipo C.

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|**offsetof**|\<stddef.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Allocazione di memoria](../../c-runtime-library/memory-allocation.md)<br/>
