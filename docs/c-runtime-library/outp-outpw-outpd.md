---
title: _outp, _outpw, _outpd | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
apiname:
- _outpd
- _outp
- _outpw
apilocation:
- msvcrt.dll
- msvcr100.dll
- msvcr120.dll
- msvcr90.dll
- msvcr110_clr0400.dll
- msvcr110.dll
- msvcr80.dll
apitype: DLLExport
f1_keywords:
- _outpw
- _outpd
- _outp
- outpd
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 140b53fd90d393f2629dda6573d994635b96f417
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32391509"
---
# <a name="outp-outpw-outpd"></a>_outp, _outpw, _outpd
Restituisce, in una porta, un byte (`_outp`), una parola (`_outpw`) o una parola doppia (`_outpd`).  
  
> [!IMPORTANT]
>  Queste funzioni sono obsolete. A partire da Visual Studio 2015 non sono disponibili in CRT.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere [Funzioni CRT non supportate nelle app della piattaforma UWP (Universal Windows Platform)](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
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
  
#### <a name="parameters"></a>Parametri  
 *port*  
 Numero porta.  
  
 *databyte, dataword*  
 Valori di output.  
  
## <a name="return-value"></a>Valore restituito  
 Le funzioni restituiscono l'output dei dati. Non vi è restituzione di errori.  
  
## <a name="remarks"></a>Note  
 Le funzioni `_outp`, `_outpw`e `_outpd` scrivono un byte, una parola e una parola doppia, rispettivamente, nella porta di output specificata. L'argomento *port* può essere qualsiasi Unsigned Integer nell'intervallo compreso tra 0 e 65.535. *Databyte* può essere qualsiasi Integer nell'intervallo compreso tra 0 e 255 e *dataword* può essere qualsiasi valore nell'intervallo compreso, rispettivamente, tra un Integer, un Unsigned Short Integer e un Unsigned Long Integer.  
  
 Dato che queste funzioni leggono direttamente da una porta I/O, non possono essere usate nel codice utente. Per informazioni sull'uso delle porte I/O in questi sistemi operativi, cercare "Comunicazioni Seriali in Win32" su MSDN.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_outp`|\<conio.h>|  
|`_outpw`|\<conio.h>|  
|`_outpd`|\<conio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../c-runtime-library/compatibility.md).  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Console e porta I/O](../c-runtime-library/console-and-port-i-o.md)   
 [_inp, _inpw, _inpd](../c-runtime-library/inp-inpw-inpd.md)