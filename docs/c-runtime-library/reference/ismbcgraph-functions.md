---
title: _ismbcgraph, _ismbcgraph_l, _ismbcprint, _ismbcprint_l, _ismbcpunct, _ismbcpunct_l, _ismbcblank, _ismbcblank_l, _ismbcspace, _ismbcspace_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _ismbcpunct_l
- _ismbcblank
- _ismbcprint
- _ismbcgraph_l
- _ismbcblank_l
- _ismbcpunct
- _ismbcprint_l
- _ismbcspace_l
- _ismbcspace
- _ismbcgraph
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
- _ismbcspace
- _ismbcgraph
- _ismbcpunct
- ismbcspace_l
- ismbcgraph
- _ismbcgraph_l
- _ismbcprint
- _ismbcspace_l
- ismbcprint
- ismbcgraph_l
- ismbcspace
- ismbcpunct
dev_langs:
- C++
helpviewer_keywords:
- ismbcspace_l function
- _ismbcprint_l function
- ismbcspace function
- ismbcpunct function
- _ismbcspace_l function
- _ismbcprint function
- ismbcprint function
- _ismbcgraph function
- ismbcgraph_l function
- _ismbcpunct_l function
- ismbcpunct_l function
- ismbcprint_l function
- _ismbcpunct function
- ismbcgraph function
- _ismbcgraph_l function
- _ismbcspace function
ms.assetid: 8e0a5f47-ba64-4411-92a3-3c525d16e3be
caps.latest.revision: 21
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
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 602b5d1f3cd490213f3f849200eb155456627694
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="ismbcgraph-ismbcgraphl-ismbcprint-ismbcprintl-ismbcpunct-ismbcpunctl-ismbcblank-ismbcblankl-ismbcspace-ismbcspacel"></a>_ismbcgraph, _ismbcgraph_l, _ismbcprint, _ismbcprint_l, _ismbcpunct, _ismbcpunct_l, _ismbcblank, _ismbcblank_l, _ismbcspace, _ismbcspace_l
Determina se un carattere è un carattere grafico, un carattere di visualizzazione, un carattere di punteggiatura o un carattere spazio.  
  
> [!IMPORTANT]
>  Questa API non può essere usata nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)]. Per altre informazioni, vedere [Funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _ismbcgraph(  
   unsigned int c   
);  
int _ismbcgraph_l(  
   unsigned int c,  
   _locale_t locale   
);  
int _ismbcprint(  
   unsigned int c   
);  
int _ismbcprint_l(  
   unsigned int c,  
   _locale_t locale  
);  
int _ismbcpunct(  
   unsigned int c  
);  
int _ismbcpunct_l(  
   unsigned int c,  
   _locale_t locale  
);  
int _ismbcblank(  
   unsigned int c   
);  
int _ismbcblank_l(  
   unsigned int c,  
   _locale_t locale  
);  
int _ismbcspace(  
   unsigned int c   
);  
int _ismbcspace_l(  
   unsigned int c,  
   _locale_t locale  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `c`  
 Carattere da determinare.  
  
 `locale`  
 Impostazioni locali da usare.  
  
## <a name="return-value"></a>Valore restituito  
 Ognuna di queste routine restituisce un valore diverso da zero se il carattere soddisfa la condizione di test oppure 0 in caso contrario. Se `c` <= 255 ed è presente una routine `_ismbb` corrispondente (ad esempio, `_ismbcalnum` corrisponde a `_ismbbalnum`), il risultato è il valore restituito della routine `_ismbb` corrispondente.  
  
 Le versioni di queste funzioni sono identiche, ad eccezione del fatto che quelle con il suffisso `_l` usano le impostazioni locali passate per il comportamento dipendente dalle impostazioni locali, invece delle impostazioni locali correnti. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni testa una particolare condizione su un determinato carattere multibyte.  
  
|Routine|Condizione di test|Esempio della tabella codici 932|  
|-------------|--------------------|---------------------------|  
|`_ismbcgraph`|Carattere grafico|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a byte singolo di qualsiasi carattere stampabile ASCII o katakana, ad eccezione dello spazio ( ).|  
|`_ismbcprint`|Carattere stampabile|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a byte singolo di qualsiasi carattere stampabile ASCII o katakana, incluso lo spazio ( ).|  
|`_ismbcpunct`|Punctuation|Restituisce un valore diverso da zero se e solo se `c` è una rappresentazione a byte singolo di qualsiasi carattere di punteggiatura ASCII o katakana.|  
|`_ismbcblank`|Spazio o tabulazione orizzontale|Restituisce un valore diverso da zero se e solo se `c` è un carattere spazio o di tabulazione orizzontale: `c`=0x20 o `c`=0x09.|  
|`_ismbcspace`|Spazio vuoto|Restituisce un valore diverso da zero se e solo se `c` è un carattere spazio: `c`=0x20 o 0x09<=`c`<=0x0D.|  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_ismbcgraph`|\<mbstring.h>|  
|`_ismbcgraph_l`|\<mbstring.h>|  
|`_ismbcprint`|\<mbstring.h>|  
|`_ismbcprint_l`|\<mbstring.h>|  
|`_ismbcpunct`|\<mbstring.h>|  
|`_ismbcpunct_l`|\<mbstring.h>|  
|`_ismbcblank`|\<mbstring.h>|  
|`_ismbcblank_l`|\<mbstring.h>|  
|`_ismbcspace`|\<mbstring.h>|  
|`_ismbcspace_l`|\<mbstring.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [Routine _ismbc](../../c-runtime-library/ismbc-routines.md)   
 [Routine is, isw](../../c-runtime-library/is-isw-routines.md)   
 [Routine _ismbb](../../c-runtime-library/ismbb-routines.md)
