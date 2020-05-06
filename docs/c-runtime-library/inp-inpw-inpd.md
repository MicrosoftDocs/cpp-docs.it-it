---
title: INP, _inp, inpw, _inpw, _inpd
description: Descrive le funzioni di INP, _inp, inpw, _inpw e _inpd obsolete e rimosse della libreria di runtime di Microsoft C (CRT).
ms.date: 12/09/2019
api_name:
- inp
- inpw
- _inp
- _inpw
- _inpd
api_location:
- msvcrt.dll
- msvcr120.dll
- msvcr110_clr0400.dll
- msvcr110.dll
- msvcr80.dll
- msvcr100.dll
- msvcr90.dll
api_type:
- DLLExport
topic_type:
- apiref
f1_keywords:
- inp
- inpw
- _inp
- _inpw
- _inpd
helpviewer_keywords:
- inp function
- inpw function
- ports, I/O routines
- inpd function
- _inp function
- _inpd function
- I/O [CRT], port
- _inpw function
ms.assetid: 5d9c2e38-fc85-4294-86d5-7282cc02d1b3
ms.openlocfilehash: f7b822c4b694969407e32ba26026465fb39bd8d6
ms.sourcegitcommit: 6b749db14b4cf3a2b8d581fda6fdd8cb98bc3207
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/05/2020
ms.locfileid: "82825829"
---
# <a name="inp-_inp-inpw-_inpw-_inpd"></a>INP, _inp, inpw, _inpw, _inpd

Input, da una porta, un byte (`inp`, `_inp`), una parola (`inpw`, `_inpw`) o una parola doppia (`_inpd`).

> [!IMPORTANT]
> Queste funzioni sono obsolete. A partire da Visual Studio 2015, non sono disponibili in CRT. \
> Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## <a name="syntax"></a>Sintassi

```cpp
int _inp(
   unsigned short port
);
unsigned short _inpw(
   unsigned short port
);
unsigned long _inpd(
   unsigned short port
);
```

### <a name="parameters"></a>Parametri

*porta*\
Numero porta di I/O.

## <a name="return-value"></a>Valore restituito

Le funzioni restituiscono il byte, la parola o la parola doppia letti da `port`. Non vi è restituzione di errori.

## <a name="remarks"></a>Osservazioni

Le funzioni `_inp`, `_inpw`e `_inpd` leggono un byte, una parola e una doppia parola, rispettivamente, dalla porta di input specificata. Il valore di input può essere qualsiasi Unsigned Short Integer nell'intervallo compreso tra 0 e 65.535.

Dato che queste funzioni leggono direttamente da una porta I/O, non possono essere usate nel codice utente.

I `inp` nomi `inpw` e sono i nomi obsoleti e deprecati `_inp` per `_inpw` le funzioni e. Per altre informazioni, vedere [nomi di funzioni POSIX](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).

## <a name="requirements"></a>Requisiti

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`_inp`|\<conio.h>|
|`_inpw`|\<conio.h>|
|`_inpd`|\<conio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[I/O console e porta](../c-runtime-library/console-and-port-i-o.md)\
[outp, outpw, _outp, _outpw, _outpd](../c-runtime-library/outp-outpw-outpd.md)
