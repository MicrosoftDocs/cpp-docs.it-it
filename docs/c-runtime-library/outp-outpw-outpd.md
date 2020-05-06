---
title: outp, outpw, _outp, _outpw, _outpd
description: Descrive le funzioni outp, outpw, _outp, _outpw e _outpd obsolete e rimosse della libreria di runtime Microsoft C (CRT).
ms.date: 12/09/2019
api_name:
- _outpd
- _outp
- _outpw
- outp
- outpw
api_location:
- msvcrt.dll
- msvcr100.dll
- msvcr120.dll
- msvcr90.dll
- msvcr110_clr0400.dll
- msvcr110.dll
- msvcr80.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- _outpw
- _outpd
- _outp
- outp
- outpw
- outpd
helpviewer_keywords:
- outpw function
- words
- _outpd function
- outpd function
- outp function
- ports, writing bytes at
- bytes, writing to ports
- words, writing to ports
- double words
- double words, writing to ports
- _outpw function
- _outp function
ms.assetid: c200fe22-41f6-46fd-b0be-ebb805b35181
ms.openlocfilehash: 3d0342ae94276c7875bcb737b0d1a64aabafd235
ms.sourcegitcommit: 6b749db14b4cf3a2b8d581fda6fdd8cb98bc3207
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/05/2020
ms.locfileid: "82825928"
---
# <a name="outp-outpw-_outp-_outpw-_outpd"></a>outp, outpw, _outp, _outpw, _outpd

Restituisce, in una porta, un byte (`outp`, `_outp`), una parola (`outpw`, `_outpw`) o una parola doppia (`_outpd`).

> [!IMPORTANT]
> Queste funzioni sono obsolete. A partire da Visual Studio 2015, non sono disponibili in CRT. \
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```cpp
int _outp(
   unsigned short port,
   int databyte
);
unsigned short _outpw(
   unsigned short port,
   unsigned short dataword
);
unsigned long _outpd(
   unsigned short port,
   unsigned long dataword
);
```

### <a name="parameters"></a>Parametri

*porta*\
Numero porta.

*databyte, dataword*\
Valori di output.

## <a name="return-value"></a>Valore restituito

Le funzioni restituiscono l'output dei dati. Non vi è restituzione di errori.

## <a name="remarks"></a>Osservazioni

Le funzioni `_outp`, `_outpw`e `_outpd` scrivono un byte, una parola e una parola doppia, rispettivamente, nella porta di output specificata. L'argomento *Port* può essere qualsiasi Unsigned Integer nell'intervallo compreso tra 0 e 65.535; *databyte* può essere qualsiasi numero intero compreso nell'intervallo 0-255; e *dataword* può essere qualsiasi valore nell'intervallo di un numero intero, di un valore short integer senza segno e di un intero long senza segno, rispettivamente.

Dato che queste funzioni leggono direttamente da una porta I/O, non possono essere usate nel codice utente. Per informazioni sull'uso delle porte I/O in questi sistemi operativi, cercare "Comunicazioni Seriali in Win32" su MSDN.

I `outp` nomi `outpw` e sono i nomi obsoleti e deprecati `_outp` per `_outpw` le funzioni e. Per altre informazioni, vedere [nomi di funzioni POSIX](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`_outp`|\<conio.h>|
|`_outpw`|\<conio.h>|
|`_outpd`|\<conio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[I/O console e porta](../c-runtime-library/console-and-port-i-o.md)\
[INP, inpw, _inp, _inpw, _inpd](../c-runtime-library/inp-inpw-inpd.md)
