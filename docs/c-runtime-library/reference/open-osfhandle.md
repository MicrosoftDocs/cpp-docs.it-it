---
title: _open_osfhandle | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _open_osfhandle
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
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _open_osfhandle
- open_osfhandle
dev_langs:
- C++
helpviewer_keywords:
- open_osfhandle function
- file handles [C++], associating
- _open_osfhandle function
ms.assetid: 30d94df4-7868-4667-a401-9eb67ecb7855
caps.latest.revision: 11
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 0a201fa08f48198069df26c5c61944c99db73edf
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="openosfhandle"></a>_open_osfhandle
Associa un descrittore di file di runtime C con una gestione di file del sistema operativo esistente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      int _open_osfhandle (  
   intptr_t osfhandle,  
   int flags   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `osfhandle`  
 Handle di file del sistema operativo.  
  
 `flags`  
 Tipi di operazioni consentite.  
  
## <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, `_open_osfhandle` restituisce un descrittore di file di runtime C. In caso contrario, restituisce -1.  
  
## <a name="remarks"></a>Note  
 La funzione `_open_osfhandle` alloca un descrittore di file di runtime C e lo associa a un handle di file del sistema operativo specificato da `osfhandle`. L'argomento `flags` è un'espressione integer formata da una o più delle costanti del manifesto definite in Fcntl.h. Quando vengono usate due o più costanti manifeste per comporre l'argomento `flags`, le costanti vengono combinate con l'operatore OR bit per bit ( **&#124;** ).  
  
 Fcntl.h definisce le seguenti costanti manifesto.  
  
 **_O_APPEND**  
 Posiziona un puntatore del file alla fine del file prima di ogni operazione di scrittura.  
  
 **_O_RDONLY**  
 Apre il file in sola lettura.  
  
 **_O_TEXT**  
 Apre il file in modalità testo (convertito).  
  
 **_O_WTEXT**  
 Apre il file in modalità Unicode (convertito in UTF-16).  
  
 Per chiudere un file aperto con `_open_osfhandle`, chiamare `_close`. L'handle sottostante viene inoltre chiuso da una chiamata a `_close`, pertanto non è necessario chiamare la funzione Win32 `CloseHandle` sull'handle originale.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_open_osfhandle`|\<io.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione di file](../../c-runtime-library/file-handling.md)
