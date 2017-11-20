---
title: Mapping dei tipi di dati | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _TXCHAR
- _TUCHAR
- _TINT
- _TSCHAR
- _TCHAR
- TCHAR::H
- TCHAR
- _T
- _TEXT
dev_langs: C++
helpviewer_keywords:
- _TXCHAR type
- TINT type
- _TCHAR type
- TSCHAR type
- TEXT type
- TCHAR type
- TCHAR.H data types, mappings defined in
- generic-text data types
- _TINT type
- TUCHAR type
- TXCHAR type
- _TSCHAR type
- T type
- _TUCHAR type
- _TEXT type
- _T type
ms.assetid: 4e573c05-8800-468b-ae5f-76ff7409835e
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 217290399a03174e599117077b27116a86808f7f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="data-type-mappings"></a>Mapping dei tipi di dati
I mapping dei tipi di dati vengono definiti in TCHAR.H e variano a seconda che nel programma sia stata definita la costante `_UNICODE` o `_MBCS`.  
  
 Per informazioni correlate, vedere [Using TCHAR.H Data Types with _MBCS Code](../text/using-tchar-h-data-types-with-mbcs-code.md) (Uso dei tipi di dati in TCHAR.H con codice _MBCS).  
  
### <a name="generic-text-data-type-mappings"></a>Mapping dei tipi di dati di testo generico  
  
|Nome tipo dati<br /><br /> testo generico|SBCS (_UNICODE,<br /><br /> MBCS non<br /><br /> definito)|_MBCS<br /><br /> definizione|_UNICODE<br /><br /> definizione|  
|--------------------------------------|----------------------------------------------------|------------------------|---------------------------|  
|`_TCHAR`|`char`|`char`|`wchar_t`|  
|`_tfinddata_t`|`_finddata_t`|`_finddata_t`|`_wfinddata_t`|  
|`_tfinddata64_t`|`__finddata64_t`|`__finddata64_t`|`__wfinddata64_t`|  
|`_tfinddatai64_t`|`_finddatai64_t`|`_finddatai64_t`|`_wfinddatai64_t`|  
|`_TINT`|`int`|`int`|`wint_t`|  
|`_TSCHAR`|`signed char`|`signed char`|`wchar_t`|  
|`_TUCHAR`|`unsigned char`|`unsigned char`|`wchar_t`|  
|`_TXCHAR`|`char`|`unsigned char`|`wchar_t`|  
|`_T` o `_TEXT`|Nessun effetto (rimosso dal preprocessore)|Nessun effetto (rimosso dal preprocessore)|`L` (converte il carattere o la stringa seguente nell'equivalente Unicode)|  
  
## <a name="see-also"></a>Vedere anche  
 [Generic-Text Mappings](../c-runtime-library/generic-text-mappings.md)  (Mapping di testo generico)  
 [Constant and Global Variable Mappings](../c-runtime-library/constant-and-global-variable-mappings.md)  (Mapping di costanti e variabili globali)  
 [Routine Mappings](../c-runtime-library/routine-mappings.md)  (Mapping di routine)  
 [A Sample Generic-Text Program](../c-runtime-library/a-sample-generic-text-program.md)  (Programma di testo generico di esempio)  
 [Using Generic-Text Mappings](../c-runtime-library/using-generic-text-mappings.md) (Uso di mapping di testo generico)