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
ms.openlocfilehash: 03d3df0bae9c2fa3cdd107f3c0de65105077c401
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988381"
---
# <a name="outp-outpw-_outp-_outpw-_outpd"></a>outp, outpw, _outp, _outpw, _outpd

Restituisce, in una porta, un byte (`outp`, `_outp`), una parola (`outpw`, `_outpw`) o una parola doppia (`_outpd`).

> [!IMPORTANT]
> Queste funzioni sono obsolete. A partire da Visual Studio 2015 non sono disponibili in CRT.  
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

\ *porta*
Numero della porta.

*databyte, dataword*\
Valori di output.

## <a name="return-value"></a>Valore restituito

Le funzioni restituiscono l'output dei dati. Non vi è restituzione di errori.

## <a name="remarks"></a>Note

Le funzioni `_outp`, `_outpw`e `_outpd` scrivono un byte, una parola e una parola doppia, rispettivamente, nella porta di output specificata. L'argomento *port* può essere qualsiasi Unsigned Integer nell'intervallo compreso tra 0 e 65.535. *Databyte* può essere qualsiasi Integer nell'intervallo compreso tra 0 e 255 e *dataword* può essere qualsiasi valore nell'intervallo compreso, rispettivamente, tra un Integer, un Unsigned Short Integer e un Unsigned Long Integer.

Dato che queste funzioni leggono direttamente da una porta I/O, non possono essere usate nel codice utente. Per informazioni sull'uso delle porte I/O in questi sistemi operativi, cercare "Comunicazioni Seriali in Win32" su MSDN.

I nomi di `outp` e `outpw` sono nomi obsoleti, deprecati per le funzioni `_outp` e `_outpw`. Per altre informazioni, vedere [nomi di funzioni POSIX](../error-messages/compiler-warnings/compiler-warning-level-3-c4996.md#posix-function-names).

## <a name="requirements"></a>Requisiti di

|Routine|Intestazione obbligatoria|
|-------------|---------------------|
|`_outp`|\<conio.h>|
|`_outpw`|\<conio.h>|
|`_outpd`|\<conio.h>|

Per altre informazioni sulla compatibilità, vedere [Compatibility](../c-runtime-library/compatibility.md).

## <a name="libraries"></a>Librerie

Tutte le versioni delle [librerie di runtime C](../c-runtime-library/crt-library-features.md).

## <a name="see-also"></a>Vedere anche

[Console e porta I/O](../c-runtime-library/console-and-port-i-o.md)\
[INP, inpw, _inp, _inpw, _inpd](../c-runtime-library/inp-inpw-inpd.md)
