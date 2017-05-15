---
title: _set_new_mode | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _set_new_mode
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
- api-ms-win-crt-heap-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- set_new_mode
- _set_new_mode
dev_langs:
- C++
helpviewer_keywords:
- handler modes
- _set_new_mode function
- set_new_mode function
ms.assetid: 4d14039a-e54e-4689-8c70-74a4b9834768
caps.latest.revision: 14
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 57a578f8accf7244d71c0d8791a6e898ead7d242
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="setnewmode"></a>_set_new_mode
Imposta una nuova modalità del gestore per `malloc`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _set_new_mode(  
   int newhandlermode   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `newhandlermode`  
 Nuova modalità del gestore per `malloc`. Il valore valido è 0 o 1.  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce la modalità del gestore precedente impostata per `malloc`. Il valore restituito 1 indica che, in caso di errore di allocazione della memoria, `malloc` ha chiamato in precedenza la routine del nuovo gestore. Il valore restituito 0 indica il contrario. Se il `newhandlermode` argomento diverso da 0 o 1, restituisce -1.  
  
## <a name="remarks"></a>Note  
 La funzione C++ `_set_new_mode` imposta la nuova modalità del gestore per [malloc](../../c-runtime-library/reference/malloc.md). La nuova modalità del gestore indica se, in caso di errore, `malloc` deve chiamare la routine del nuovo gestore come impostato tramite [set_new_handler](../../c-runtime-library/reference/set-new-handler.md). Per impostazione predefinita, `malloc` non chiama la routine del nuovo gestore in caso di errore di allocazione della memoria. È possibile eseguire l'override di questo comportamento predefinito in modo che, quando `malloc` non riesce ad allocare memoria, `malloc` chiami la routine del nuovo gestore, come fa l'operatore `new` quando non riesce per lo stesso motivo. Per altre informazioni, vedere le informazioni sugli operatori [new](../../cpp/new-operator-cpp.md) e [delete](../../cpp/delete-operator-cpp.md) in *Riferimenti al linguaggio C++*. Per eseguire l'override del comportamento predefinito, chiamare:  
  
```  
_set_new_mode(1)  
```  
  
 all'inizio del programma o collegarsi a Newmode.obj (vedere [Opzioni di collegamento](../../c-runtime-library/link-options.md)).  
  
 Questa funzione convalida il relativo parametro. Se `newhandlermode` è diverso da 0 o 1, questa funzione richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, **_**`set_new_mode` restituisce -1 e imposta `errno` su `EINVAL`.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_set_new_mode`|\<new.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="see-also"></a>Vedere anche  
 [Memory Allocation](../../c-runtime-library/memory-allocation.md)  (Allocazione di memoria)  
 [calloc](../../c-runtime-library/reference/calloc.md)   
 [free](../../c-runtime-library/reference/free.md)   
 [realloc](../../c-runtime-library/reference/realloc.md)   
 [_query_new_handler](../../c-runtime-library/reference/query-new-handler.md)   
 [_query_new_mode](../../c-runtime-library/reference/query-new-mode.md)
