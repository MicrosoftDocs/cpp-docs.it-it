---
title: "Mapping dei tipi di dati | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_TXCHAR"
  - "_TUCHAR"
  - "_TINT"
  - "_TSCHAR"
  - "_TCHAR"
  - "TCHAR::H"
  - "TCHAR"
  - "_T"
  - "_TEXT"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_T (tipo)"
  - "_TCHAR (tipo)"
  - "_TEXT (tipo)"
  - "_TINT (tipo)"
  - "_TSCHAR (tipo)"
  - "_TUCHAR (tipo)"
  - "_TXCHAR (tipo)"
  - "tipi di dati per testo generico"
  - "T (tipo)"
  - "TCHAR (tipo)"
  - "tipi di dati TCHAR.H, mapping definiti"
  - "TEXT (tipo)"
  - "TINT (tipo)"
  - "TSCHAR (tipo)"
  - "TUCHAR (tipo)"
  - "TXCHAR (tipo)"
ms.assetid: 4e573c05-8800-468b-ae5f-76ff7409835e
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Mapping dei tipi di dati
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questi mapping dei tipi di dati sono definiti in TCHAR.H e varia se la costante `_UNICODE` o `_MBCS` è stata definita nel programma.  
  
 Per informazioni correlate, vedere [Utilizzare tipi di dati di TCHAR.H con il codice di \_MBCS](../text/using-tchar-h-data-types-with-mbcs-code.md).  
  
### Mappature di tipi di dati di testo generico  
  
|Testo generico<br /><br /> Nome tipo di dati|SBCS \(\_UNICODE,<br /><br /> \_MBCS not<br /><br /> defined\)|\_MBCS<br /><br /> è definito|\_UNICODE<br /><br /> è definito|  
|------------------------------------------|----------------------------------------------------|---------------------------|------------------------------|  
|`_TCHAR`|`char`|`char`|`wchar_t`|  
|`_tfinddata_t`|`_finddata_t`|`_finddata_t`|`_wfinddata_t`|  
|`_tfinddata64_t`|`__finddata64_t`|`__finddata64_t`|`__wfinddata64_t`|  
|`_tfinddatai64_t`|`_finddatai64_t`|`_finddatai64_t`|`_wfinddatai64_t`|  
|`_TINT`|`int`|`int`|`wint_t`|  
|`_TSCHAR`|`signed char`|`signed char`|`wchar_t`|  
|`_TUCHAR`|`unsigned char`|`unsigned char`|`wchar_t`|  
|`_TXCHAR`|`char`|`unsigned char`|`wchar_t`|  
|`_T` o `_TEXT`|Nessun effetto \(eliminato dal preprocessore\)|Nessun effetto \(eliminato dal preprocessore\)|`L` \(converte il carattere o la stringa seguente nell'equivalente Unicode\)|  
  
## Vedere anche  
 [Mapping testo generico](../c-runtime-library/generic-text-mappings.md)   
 [Mapping costanti e variabili globali](../c-runtime-library/constant-and-global-variable-mappings.md)   
 [Mapping di routine](../c-runtime-library/routine-mappings.md)   
 [Programma di testo generico di esempio](../c-runtime-library/a-sample-generic-text-program.md)   
 [Utilizzo di mapping testo generico](../c-runtime-library/using-generic-text-mappings.md)