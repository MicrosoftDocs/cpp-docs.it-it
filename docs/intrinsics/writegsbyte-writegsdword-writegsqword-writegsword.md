---
title: __writegsbyte, __writegsdword, __writegsqword, __writegsword
ms.date: 09/02/2019
f1_keywords:
- __writegsbyte
- __writegsqword
- __writegsdword
- __writegsword
helpviewer_keywords:
- __writegsqword intrinsic
- __writegsbyte intrinsic
- __writegsword intrinsic
- __writegsdword intrinsic
ms.assetid: 7746cf6d-2259-4139-9aab-c07dd75c8037
ms.openlocfilehash: 7b9e812776e9b2bb0820905d088111669096db64
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70221208"
---
# <a name="__writegsbyte-__writegsdword-__writegsqword-__writegsword"></a>__writegsbyte, __writegsdword, __writegsqword, __writegsword

**Sezione specifica Microsoft**

Scrivere memoria in un percorso specificato da un offset relativo all'inizio del segmento GS.

## <a name="syntax"></a>Sintassi

```C
void __writegsbyte(
   unsigned long Offset,
   unsigned char Data
);
void __writegsword(
   unsigned long Offset,
   unsigned short Data
);
void __writegsdword(
   unsigned long Offset,
   unsigned long Data
);
void __writegsqword(
   unsigned long Offset,
   unsigned __int64 Data
);
```

### <a name="parameters"></a>Parametri

*Offset*\
in Offset dall'inizio della GS in cui scrivere.

*Dati*\
in Valore da scrivere.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`__writegsbyte`|X64|
|`__writegsdword`|X64|
|`__writegsqword`|X64|
|`__writegsword`|X64|

**File di intestazione** \<> intrin. h

## <a name="remarks"></a>Note

Queste routine sono disponibili solo come intrinseci.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__readgsbyte, \__readgsdword, \__readgsqword, \__readgsword](../intrinsics/readgsbyte-readgsdword-readgsqword-readgsword.md)\
[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)
