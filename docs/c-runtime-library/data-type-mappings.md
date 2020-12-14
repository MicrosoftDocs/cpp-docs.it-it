---
description: 'Altre informazioni su: mapping dei tipi di dati'
title: Mapping dei tipi di dati
ms.date: 11/04/2016
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
ms.openlocfilehash: 9d76ecebc9bcb01e86cac2f199534ae2cda518c8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97258776"
---
# <a name="data-type-mappings"></a>Mapping dei tipi di dati

I mapping dei tipi di dati vengono definiti in TCHAR.H e variano a seconda che nel programma sia stata definita la costante `_UNICODE` o `_MBCS`.

Per informazioni correlate, vedere [Using TCHAR.H Data Types with _MBCS Code](../text/using-tchar-h-data-types-with-mbcs-code.md) (Uso dei tipi di dati in TCHAR.H con codice _MBCS).

### <a name="generic-text-data-type-mappings"></a>Mapping dei tipi di dati di testo generico

|Nome tipo dati<br /><br /> testo generico|SBCS (_UNICODE,<br /><br /> MBCS non<br /><br /> definito)|_MBCS<br /><br /> defined|_UNICODE<br /><br /> defined|
|--------------------------------------|----------------------------------------------------|------------------------|---------------------------|
|`_TCHAR`|**`char`**|**`char`**|**`wchar_t`**|
|`_tfinddata_t`|`_finddata_t`|`_finddata_t`|`_wfinddata_t`|
|`_tfinddata64_t`|`__finddata64_t`|`__finddata64_t`|`__wfinddata64_t`|
|`_tfinddatai64_t`|`_finddatai64_t`|`_finddatai64_t`|`_wfinddatai64_t`|
|`_TINT`|**`int`**|**`int`**|`wint_t`|
|`_TSCHAR`|**`signed char`**|**`signed char`**|**`wchar_t`**|
|`_TUCHAR`|**`unsigned char`**|**`unsigned char`**|**`wchar_t`**|
|`_TXCHAR`|**`char`**|**`unsigned char`**|**`wchar_t`**|
|`_T` o `_TEXT`|Nessun effetto (rimosso dal preprocessore)|Nessun effetto (rimosso dal preprocessore)|`L` (converte il carattere o la stringa seguente nell'equivalente Unicode)|

## <a name="see-also"></a>Vedi anche

[Mapping di testo generico](../c-runtime-library/generic-text-mappings.md)<br/>
[Mapping di costanti e variabili globali](../c-runtime-library/constant-and-global-variable-mappings.md)<br/>
[Mapping di routine](../c-runtime-library/routine-mappings.md)<br/>
[Programma di Generic-Text di esempio](../c-runtime-library/a-sample-generic-text-program.md)<br/>
[Uso di mapping di Generic-Text](../c-runtime-library/using-generic-text-mappings.md)
