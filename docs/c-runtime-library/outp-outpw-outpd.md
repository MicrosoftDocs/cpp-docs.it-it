---
title: _outp, _outpw, _outpd | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 16
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Human Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 3411f2f902a3a7d4dc47a0d9fb00b5e970a1a876
ms.lasthandoff: 04/01/2017

---
# <a name="outp-outpw-outpd"></a>_outp, _outpw, _outpd
Restituisce, in una porta, un byte (`_outp`), una parola (`_outpw`) o una parola doppia (`_outpd`).  
  
> [!IMPORTANT]
>  Queste funzioni sono obsolete. A partire da Visual Studio 2015 non sono disponibili in CRT.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
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
  
 Dal momento che queste funzioni scrivono direttamente su una porta I/O, non possono essere usate nel codice utente in Windows NT, Windows 2000, Windows XP e Windows Server 2003. Per informazioni sull'uso delle porte I/O in questi sistemi operativi, cercare "Comunicazioni Seriali in Win32" su MSDN.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_outp`|\<conio.h>|  
|`_outpw`|\<conio.h>|  
|`_outpd`|\<conio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../c-runtime-library/compatibility.md) (Compatibilità).  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [I/O su console e porta](../c-runtime-library/console-and-port-i-o.md)   
 [_inp, _inpw, _inpd](../c-runtime-library/inp-inpw-inpd.md)
