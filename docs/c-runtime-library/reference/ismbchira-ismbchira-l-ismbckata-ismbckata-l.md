---
title: _ismbchira, _ismbchira_l, _ismbckata, _ismbckata_l | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _ismbckata
- _ismbchira_l
- _ismbchira
- _ismbckata_l
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
- ismbckata_l
- _ismbckata_l
- ismbckata
- ismbchira
- _ismbckata
- ismbchira_l
- _ismbchira_l
- _ismbchira
dev_langs: C++
helpviewer_keywords:
- _ismbckata function
- _ismbchira function
- _ismbckata_l function
- Katakana
- ismbchira function
- _ismbchira_l function
- ismbchira_l function
- ismbdkata_l function
- Hiragana
- ismbckata function
ms.assetid: 2db388a2-be31-489b-81c8-f6bf3f0582d3
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: b0e257ac4a1998e75fc47e719df2163d49654c71
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ismbchira-ismbchiral-ismbckata-ismbckatal"></a>_ismbchira, _ismbchira_l, _ismbckata, _ismbckata_l
**Funzioni specifiche per la tabella codici 932**  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _ismbchira(  
   unsigned int c   
);  
int _ismbchira_l(  
   unsigned int c,  
   _locale_t locale  
);  
int _ismbckata(  
   unsigned int c   
);  
int _ismbckata_l(  
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
 Ognuna di queste routine restituisce un valore diverso da zero se il carattere soddisfa la condizione di test oppure 0 in caso contrario. Se `c` <= 255 ed è presente una routine `_ismbb` corrispondente (ad esempio, `_ismbcalnum` corrisponde a `_ismbbalnum`), il risultato è il valore restituito della routine `_ismbb` corrispondente.  
  
## <a name="remarks"></a>Note  
 Ognuna di queste funzioni testa una particolare condizione su un determinato carattere multibyte.  
  
 Le versioni di queste funzioni che presentano il suffisso `_l` sono identiche ad eccezione del fatto che, per il comportamento dipendente dalle impostazioni locali, usano le impostazioni locali passate anziché quelle correnti. Per altre informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
|Routine|Condizione di test (solo per la tabella codici 932)|  
|-------------|-------------------------------------------|  
|`_ismbchira`|Hiragana DBCS: 0x829F<=`c`<=0x82F1.|  
|`_ismbchira_l`|Hiragana DBCS: 0x829F<=`c`<=0x82F1.|  
|`_ismbckata`|Katakana DBCS: 0x8340<=`c`<=0x8396.|  
|`_ismbckata_l`|Katakana DBCS: 0x8340<=`c`<=0x8396.|  
  
 **Fine della sezione specifica per la tabella codici 932**  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_ismbchira`|\<mbstring.h>|  
|`_ismbchira_l`|\<mbstring.h>|  
|`_ismbckata`|\<mbstring.h>|  
|`_ismbckata_l`|\<mbstring.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Routine _ismbc](../../c-runtime-library/ismbc-routines.md)   
 [Routine is, isw](../../c-runtime-library/is-isw-routines.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Interpretazione di sequenze di caratteri multibyte](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)