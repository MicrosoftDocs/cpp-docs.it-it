---
title: _mbsnbicmp, _mbsnbicmp_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _mbsnbicmp_l
- _mbsnbicmp
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
- _strnicmp
- _wcsnicmp_l
- _mbsnbicmp
- mbsnbicmp
- mbsnbicmp_l
- _tcsnicmp
- _strnicmp_l
- _tcsnicmp_l
- _wcsnicmp
- _mbsnbicmp_l
dev_langs: C++
helpviewer_keywords:
- _tcsnicmp_l function
- _strnicmp function
- mbsnbicmp_l function
- _wcsnicmp_l function
- _mbsnbicmp function
- _mbsnbicmp_l function
- _tcsnicmp function
- _strnicmp_l function
- mbsnbicmp function
- _wcsnicmp function
ms.assetid: ddb44974-8b0c-42f0-90d0-56c9350bae0c
caps.latest.revision: "16"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 6abe7372f42e679264ec501918ad62823ba53ba9
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="mbsnbicmp-mbsnbicmpl"></a>_mbsnbicmp, _mbsnbicmp_l
Confronta `n` byte di due stringhe di caratteri multibyte ignorando la distinzione tra maiuscole e minuscole.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _mbsnbicmp(  
   const unsigned char *string1,  
   const unsigned char *string2,  
   size_t count   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `string1, string2`  
 Stringhe che terminano con Null da confrontare.  
  
 `count`  
 Numero di byte da confrontare.  
  
## <a name="return-value"></a>Valore restituito  
 Il valore restituito indica la relazione ordinale tra le sottostringhe.  
  
|Valore restituito|Descrizione|  
|------------------|-----------------|  
|< 0|La sottostringa di `string1` è minore della sottostringa di `string2`.|  
|0|La sottostringa di `string1` è identica alla sottostringa di `string2`.|  
|> 0|La sottostringa di `string1` è maggiore della sottostringa di `string2`.|  
  
 In caso di errore, `_mbsnbcmp` restituisce `_NLSCMPERROR`, definito in String.h e Mbstring.h.  
  
## <a name="remarks"></a>Note  
 La funzione `_mbsnbicmp` esegue un confronto ordinale al massimo dei primi `count` byte di `string1` e `string2`. Il confronto viene eseguito convertendo ogni carattere in minuscolo; `_mbsnbcmp` è una versione di `_mbsnbicmp` che effettua la distinzione tra maiuscole e minuscole. Il confronto termina se viene raggiunto un carattere di terminazione Null in entrambe le stringhe prima che vengano confrontati `count` caratteri. Se le stringhe sono uguali quando viene raggiunto un carattere di terminazione Null in entrambe le stringhe prima che vengano confrontati `count` caratteri, la stringa più corta sarà la minore.  
  
 `_mbsnbicmp` è simile a `_mbsnicmp`, ad eccezione del fatto che confronta le stringhe fino a `count` byte anziché per caratteri.  
  
 Due stringhe che contengono caratteri compresi tra "Z" e "a" nella tabella ASCII ('[', '\\', ']', '^', '_' e '\`') vengono confrontate in modo diverso, a seconda della combinazione di maiuscole e minuscole. Ad esempio, le due stringhe "`ABCDE`" e "`ABCD^`" vengono confrontate in un modo se il confronto è in minuscolo ("`abcde`" > "`abcd^`") e in un altro ("`ABCDE`" < "`ABCD^`") se è in maiuscolo.  
  
 `_mbsnbicmp` riconosce le sequenze di caratteri multibyte in base alla [tabella codici multibyte](../../c-runtime-library/code-pages.md) attualmente in uso. Non viene influenzata dalle impostazioni locali correnti.  
  
 Se `string1` o `string2` è un puntatore Null, `_mbsnbicmp` richiama il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Se l'esecuzione può continuare, la funzione restituisce `_NLSCMPERROR` e imposta `errno` su `EINVAL`.  
  
### <a name="generic-text-routine-mappings"></a>Mapping di routine di testo generico  
  
|Routine Tchar.h|_UNICODE e _MBCS non definiti|_MBCS definito|_UNICODE definito|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tcsnicmp`|`_strnicmp`|`_mbsnbicmp`|`_wcsnicmp`|  
|`_tcsnicmp_l`|`_strnicmp_l`|`_mbsnbicmp_l`|`_wcsnicmp_l`|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_mbsnbicmp`|<mbstring.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [_mbsnbcmp, _mbsnbcmp_l](../../c-runtime-library/reference/mbsnbcmp-mbsnbcmp-l.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Modifica di stringhe](../../c-runtime-library/string-manipulation-crt.md)   
 [_mbsnbcat, _mbsnbcat_l](../../c-runtime-library/reference/mbsnbcat-mbsnbcat-l.md)   
 [_mbsnbcmp, _mbsnbcmp_l](../../c-runtime-library/reference/mbsnbcmp-mbsnbcmp-l.md)   
 [_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](../../c-runtime-library/reference/stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)