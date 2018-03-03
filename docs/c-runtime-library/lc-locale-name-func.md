---
title: ___lc_locale_name_func | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- ___lc_locale_name_func
apilocation:
- msvcrt.dll
- msvcr110.dll
- msvcr100.dll
- msvcr90.dll
- msvcr120.dll
- msvcr80.dll
- msvcr110_clr0400.dll
apitype: DLLExport
f1_keywords:
- ___lc_locale_name_func
dev_langs:
- C++
helpviewer_keywords:
- ___lc_locale_name_func
ms.assetid: ef858308-872e-43de-95e0-9b1b4084343e
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 243fcd75c657125e001e4dc0544e9c315df1bd07
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="lclocalenamefunc"></a>___lc_locale_name_func
Funzione CRT interna. Recupera l'attuale nome delle impostazioni locali del thread.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
wchar_t** ___lc_locale_name_func(void);  
```  
  
## <a name="return-value"></a>Valore restituito  
 Puntatore a una stringa che contiene l'attuale nome delle impostazioni locali del thread.  
  
## <a name="remarks"></a>Note  
 `___lc_locale_name_func` è una funzione CRT interna che viene usata da altre funzioni CRT per ottenere l'attuale nome delle impostazioni locali dall'archiviazione locale di thread per i dati CRT. Queste informazioni sono disponibili anche usando la funzione [_get_current_locale](../c-runtime-library/reference/get-current-locale.md) o le funzioni [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md).  
  
 Le funzioni CRT interne sono specifiche dell'implementazione e soggette a modifica a ogni rilascio. Se ne sconsiglia l'uso nel codice.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`___lc_locale_name_func`|crt\src\setlocal.h|  
  
## <a name="see-also"></a>Vedere anche  
 [_get_current_locale](../c-runtime-library/reference/get-current-locale.md)   
 [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md)   
 [_create_locale, _wcreate_locale](../c-runtime-library/reference/create-locale-wcreate-locale.md)   
 [_free_locale](../c-runtime-library/reference/free-locale.md)