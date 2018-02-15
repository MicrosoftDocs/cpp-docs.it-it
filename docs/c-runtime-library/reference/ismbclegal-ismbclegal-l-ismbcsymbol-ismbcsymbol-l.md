---
title: _ismbclegal, _ismbclegal_l, _ismbcsymbol, _ismbcsymbol_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
apiname:
- _ismbclegal_l
- _ismbclegal
- _ismbcsymbol
- _ismbcsymbol_l
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
- api-ms-win-crt-multibyte-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- ismbcsymbol_l
- _ismbcsymbol_l
- _ismbcsymbol
- _ismbclegal_l
- _ismbclegal
- ismbclegal_l
- ismbcsymbol
- ismbclegal
dev_langs:
- C++
helpviewer_keywords:
- ismbcsymbol function
- ismbclegal_l function
- _istlegal_l function
- istlegal function
- _istlegal function
- _ismbcsymbol function
- _ismbclegal_l function
- ismbclegal function
- ismbcsymbol_l function
- _ismbclegal function
- _ismbcsymbol_l function
- istlegal_l function
ms.assetid: 31bf1ea5-b56f-4e28-b21e-b49a2cf93ffc
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ead23d6e1263086c1044e77bf20f689b2f5f2bc5
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="ismbclegal-ismbclegall-ismbcsymbol-ismbcsymboll"></a>_ismbclegal, _ismbclegal_l, _ismbcsymbol, _ismbcsymbol_l
Verifica se un carattere multibyte è un carattere valido o simbolo.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per ulteriori informazioni, vedere [funzioni CRT non supportate nelle App Universal Windows Platform](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _ismbclegal(  
   unsigned int c   
);  
int _ismbclegal_l(  
   unsigned int c,   
   _locale_t locale  
);  
int _ismbcsymbol(  
   unsigned int c   
);  
int _ismbcsymbol_l(  
   unsigned int c,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `c`  
 Carattere da testare.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste routine restituisce un valore diverso da zero se il carattere soddisfa la condizione di test oppure 0 in caso contrario. Se `c`<= 255 ed è presente una routine `_ismbb` corrispondente (ad esempio, `_ismbcalnum` corrisponde a `_ismbbalnum`), il risultato è il valore restituito della routine `_ismbb` corrispondente.  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni testa una particolare condizione su un determinato carattere multibyte.  
  
 Le versioni di queste funzioni che presentano il suffisso `_l` sono identiche ad eccezione del fatto che, per il comportamento dipendente dalle impostazioni locali, usano le impostazioni locali passate anziché quelle correnti. Per altre informazioni, vedere [Locale](../../c-runtime-library/locale.md).  
  
|Routine|Condizione di test|Esempio della tabella codici 932|  
|-------------|--------------------|---------------------------|  
|`_ismbclegal`|Multibyte valido|Restituisce un valore diverso da zero se e solo se il primo byte di `c` è compreso negli intervalli 0x81 - 0x9F o 0xE0 - 0xFC, mentre il secondo byte è compreso negli intervalli 0x40 - 0x7E o 0x80 - FC.|  
|`_ismbcsymbol`|Simbolo multibyte|Restituisce un valore diverso se e solo se 0x8141<=`c`<=0x81AC.|  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_istlegal`|Restituisce sempre false|`_ismbclegal`|Restituisce sempre false.|  
|`_istlegal_l`|Restituisce sempre false|`_ismbclegal_l`|Restituisce sempre false.|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_ismbclegal,_ismbclegal_l`|\<mbstring.h>|  
|`_ismbcsymbol,_ismbcsymbol_l`|\<mbstring.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Routine _ismbc](../../c-runtime-library/ismbc-routines.md)   
 [Routine is, isw](../../c-runtime-library/is-isw-routines.md)   
 [Routine _ismbb](../../c-runtime-library/ismbb-routines.md)