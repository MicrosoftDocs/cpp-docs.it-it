---
title: "Classificazione per byte | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.types.bytes"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "routine di classificazione per byte"
  - "byte, test"
  - "tabella codici 932"
ms.assetid: 1cb52d71-fb0c-46ca-aad7-6472c1103370
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Classificazione per byte
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ognuna di queste routine verifica un determinato byte di un carattere multibyte per la soddisfazione di una condizione.  Tranne quando specificato diversamente, il valore di output è influenzato dall'impostazione locali di categoria `LC_CTYPE`; vedere [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) per ulteriori informazioni.  Le versioni di queste funzioni senza il suffisso `_l` utilizzano le impostazioni locali correnti per il comportamento dipendente dalle impostazioni locali; le versioni con il suffisso `_l` sono identiche, ad eccezione del fatto che utilizzano il parametro delle impostazioni locali che viene passato.  
  
> [!NOTE]
>  Per definizione, il set di caratteri ASCII compresi tra 0 e 127 sono un sottoinsieme di tutti i set di caratteri multibyte.  Ad esempio, il set di caratteri katakana giapponese comprende sia caratteri ASCII sia caratteri non ASCII.  
  
 Le costanti predefinite nella tabella seguente sono definite in. CTYPE.H.  
  
### Routine di classificazione per byte di caratteri multibyte  
  
|Routine|Condizione di test di byte|Equivalente .NET Framework|  
|-------------|--------------------------------|--------------------------------|  
|[isleadbyte, \_isleadbyte\_l](../c-runtime-library/reference/isleadbyte-isleadbyte-l.md)|Byte iniziale; il risultato del test dipende dall'impostazione di categoria `LC_CTYPE` locale.|Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).|  
|[\_ismbbalnum, \_ismbbalnum\_l](../c-runtime-library/reference/ismbbalnum-ismbbalnum-l.md)|`isalnum &#124;&#124; _ismbbkalnum`|Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).|  
|[\_ismbbalpha, \_ismbbalpha\_l](../c-runtime-library/reference/ismbbalpha-ismbbalpha-l.md)|`isalpha &#124;&#124; _ismbbkalnum`|Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).|  
|[\_ismbbgraph, \_ismbbgraph\_l](../c-runtime-library/reference/ismbbgraph-ismbbgraph-l.md)|Lo stesso vale per `_ismbbprint`, ma `_ismbbgraph` non include il carattere spazio \(0x20\)|Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).|  
|[\_ismbbkalnum, \_ismbbkalnum\_l](../c-runtime-library/reference/ismbbkalnum-ismbbkalnum-l.md)|Simbolo di testo non ASCII e non di punteggiatura.  Ad esempio, solo nella tabella codice 932, `_ismbbkalnum` verifica per katakana alfanumerico|Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).|  
|[\_ismbbkana, \_ismbbkana\_l](../c-runtime-library/reference/ismbbkana-ismbbkana-l.md)|Katakana \(0xA1 – 0xDF\), solo tabella codice 932|Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).|  
|[\_ismbbkprint, \_ismbbkprint\_l](../c-runtime-library/reference/ismbbkprint-ismbbkprint-l.md)|Testo non ASCII o simbolo di punteggiatura non ASCII.  Ad esempio, solo nella tabella codice 932, `_ismbbkprint` verifica per punteggiatura katakana o katakana alfanumerico \(intervallo: 0xA1 – 0xDF\).|Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).|  
|[\_ismbbkpunct, \_ismbbkpunct\_l](../c-runtime-library/reference/ismbbkpunct-ismbbkpunct-l.md)|Punteggiatura non ASCII.  Ad esempio, solo nella tabella codice 932, `_ismbbkpunct` verifica per punteggiatura katakana|Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).|  
|[\_ismbblead, \_ismbblead\_l](../c-runtime-library/reference/ismbblead-ismbblead-l.md)|Primo byte di un carattere multibyte.  Ad esempio, solo nella tabella codice 932, gli intervalli validi sono 0x81 – 0x9F, 0xE0 – 0xFC.|Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).|  
|[\_ismbbprint, \_ismbbprint\_l](../c-runtime-library/reference/ismbbprint-ismbbprint-l.md)|`isprint &#124;&#124; _ismbbkprint. ismbbprint` include il carattere di spazio \(0x20\)|Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).|  
|[\_ismbbpunct, \_ismbbpunct\_l](../c-runtime-library/reference/ismbbpunct-ismbbpunct-l.md)|`ispunct &#124;&#124; _ismbbkpunct`|Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).|  
|[\_ismbbtrail, \_ismbbtrail\_l](../c-runtime-library/reference/ismbbtrail-ismbbtrail-l.md)|Secondo byte di un carattere multibyte.  Ad esempio, solo nella tabella codice 932, gli intervalli validi sono 0x40 – 0x7E, 0x80 – 0xEC.|Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).|  
|[\_ismbslead, \_ismbslead\_l](../c-runtime-library/reference/ismbslead-ismbstrail-ismbslead-l-ismbstrail-l.md)|Byte iniziali \(nel contesto della stringa\)|Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).|  
|[ismbstrail, \_ismbstrail\_l](../c-runtime-library/reference/ismbslead-ismbstrail-ismbslead-l-ismbstrail-l.md)|Byte finale \(nel contesto della stringa\)|Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).|  
|[\_mbbtype, \_mbbtype\_l](../c-runtime-library/reference/mbbtype-mbbtype-l.md)|Restituisce il tipo del byte basato sul byte precedente|Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).|  
|[\_mbsbtype, \_mbsbtype\_l](../c-runtime-library/reference/mbsbtype-mbsbtype-l.md)|Restituisce il tipo del byte in una stringa|Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).|  
|[mbsinit](../c-runtime-library/reference/mbsinit.md)|Tiene traccia dello stato di conversione di caratteri multibyte.|Non applicabile, vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).|  
  
 La macro `MB_LEN_MAX`, definita in LIMITS.H, espande la lunghezza massima in byte che può avere un qualsiasi carattere multibyte.  `MB_CUR_MAX`, definito in STDLIB.H, espande la lunghezza massima in byte di qualsiasi carattere multibyte nelle impostazioni locali correnti.  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)