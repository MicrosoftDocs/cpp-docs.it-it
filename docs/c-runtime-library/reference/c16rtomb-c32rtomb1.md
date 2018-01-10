---
title: c16rtomb, c32rtomb1 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- c16rtomb
- c32rtomb
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
- api-ms-win-crt-convert-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- c16rtomb
- c32rtomb
- uchar/c16rtomb
- uchar/c32rtomb
dev_langs: C++
helpviewer_keywords:
- c16rtomb function
- c32rtomb function
ms.assetid: 7f5743ca-a90e-4e3f-a310-c73e16f4e14d
caps.latest.revision: "3"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9eb43d6b225bce002eb2ce5293cb048d3062bcd5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="c16rtomb-c32rtomb"></a>c16rtomb, c32rtomb
Convertire un carattere wide UTF-16 o UTF-32 in un carattere multibyte nelle impostazioni locali correnti.  
  
## <a name="syntax"></a>Sintassi  
  
```  
size_t c16rtomb(  
    char *mbchar,   
    char16_t wchar,  
    mbstate_t *state  
);  
size_t c32rtomb(  
    char *mbchar,   
    char32_t wchar,  
    mbstate_t *state  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `mbchar`  
 Puntatore a una matrice per archiviare il carattere multibyte convertito.  
  
 [in] `wchar`  
 Carattere wide da convertire.  
  
 [in, out] `state`  
 Puntatore a un oggetto `mbstate_t` .  
  
## <a name="return-value"></a>Valore restituito  
 Numero di byte archiviati nell'oggetto matrice `mbchar`, comprese tutte le sequenze di spostamento. Se `wchar` non è un carattere wide valido, viene restituito il valore (`size_t`)(-1), `errno` viene impostato su `EILSEQ`e il valore di `state` non è specificato.  
  
## <a name="remarks"></a>Note  
 La funzione `c16rtomb` converte il carattere UTF-16 `wchar` nel carattere narrow multibyte equivalente nelle impostazioni locali correnti. Se `mbchar` non è un puntatore Null, la funzione archivia la sequenza convertita nell'oggetto matrice a cui puntava `mbchar`. Vengono archiviati fino a `MB_CUR_MAX` in `mbchar`e `state` viene impostato sullo stato di spostamento multibyte risultante.    Se `wchar` è un carattere wide Null, viene archiviata una sequenza richiesta per ripristinare lo stato di spostamento iniziale, se necessario, seguita dal carattere Null e `state` viene impostato sullo stato di conversione iniziale. La funzione `c32rtomb` è identica, ma converte un carattere UTF-32.  
  
 Se `mbchar` è un puntatore Null, il comportamento è equivalente a una chiamata alla funzione che sostituisce un buffer interno al posto di `mbchar` e un carattere Null wide al posto di `wchar`.  
  
 L'oggetto dello stato di conversione `state` consente di eseguire chiamate successive a questa funzione e altre funzioni riavviabili che mantengono lo stato di spostamento dei caratteri multibyte di output. I risultati sono indefiniti quando si usano funzioni riavviabili e non riavviabili insieme o se viene eseguita una chiamata a `setlocale` tra chiamate di funzioni riavviabili.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`c16rtomb`, `c32rtomb`|C, C++: \<uchar.h>|  
  
 Per informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Data Conversion](../../c-runtime-library/data-conversion.md)  (Conversione dei dati)  
 [Locale](../../c-runtime-library/locale.md)  (Impostazioni locali)  
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [mbrtoc16, mbrtoc32](../../c-runtime-library/reference/mbrtoc16-mbrtoc323.md)   
 [wcrtomb](../../c-runtime-library/reference/wcrtomb.md)   
 [wcrtomb_s](../../c-runtime-library/reference/wcrtomb-s.md)