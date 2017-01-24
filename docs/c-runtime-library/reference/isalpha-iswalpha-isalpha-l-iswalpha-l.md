---
title: "isalpha, iswalpha, _isalpha_l, _iswalpha_l | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "iswalpha"
  - "_iswalpha_l"
  - "isalpha"
  - "_isalpha_l"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_istalpha"
  - "_ismbcalpha_l"
  - "isalpha"
  - "_isalpha_l"
  - "iswalpha"
  - "_istalpha_l"
  - "_iswalpha_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_isalpha_l (funzione)"
  - "_ismbcalpha (funzione)"
  - "_ismbcalpha_l (funzione)"
  - "_istalpha (funzione)"
  - "_istalpha_l (funzione)"
  - "_iswalpha_l (funzione)"
  - "isalpha (funzione)"
  - "istalpha (funzione)"
  - "iswalpha (funzione)"
ms.assetid: ed6cc2be-c4b0-4475-87ac-bc06d8c23064
caps.latest.revision: 21
caps.handback.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# isalpha, iswalpha, _isalpha_l, _iswalpha_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina se un integer rappresenta un carattere alfabetico.  
  
## Sintassi  
  
```  
int isalpha(   
   int c   
);  
int iswalpha(   
   wint_t c   
);  
int _isalpha_l(   
   int c,  
   _locale_t locale   
);  
int _iswalpha_l(   
   wint_t c,  
   _locale_t locale   
);  
```  
  
#### Parametri  
 `c`  
 Integer da testare.  
  
 `locale`  
 Le impostazioni locali da utilizzare invece delle impostazioni locali correnti.  
  
## Valore restituito  
 Ognuna di queste routine restituisce un valore diverso da zero se `c` è una rappresentazione particolare di un carattere alfabetico.  `isalpha` restituisce un valore diverso da zero se `c` è negli intervalli A – Z o a – z.  `iswalpha` restituisce un valore diverso da zero solo per i caratteri wide per il quale `iswupper` o `iswlower` è diverso da zero; ovvero per qualsiasi carattere di tipo "wide" di un set definito dall'implementazione per il quale nessuno di `iswcntrl`, `iswdigit`, `iswpunct`, o `iswspace` è diverso da zero.  Ognuna di queste routine restituisce 0 se `c` non soddisfa la condizione di test.  
  
 Le versioni di queste funzioni che hanno il suffisso `_l` utilizzano il parametro delle impostazioni locali che è stato passato al posto delle impostazioni locali correnti.  Per ulteriori informazioni, vedere [Impostazioni locali](../../c-runtime-library/locale.md).  
  
 Il comportamento di `isalpha` e `_isalpha_l` non viene definito se `c` non è EOF o è compreso nell'intervallo tra 0 e 0xFF, inclusi.  Quando una libreria di debug CRT viene utilizzata e `c` non è uno di questi valori, le funzioni generano un'asserzione.  
  
### Mapping di routine su testo generico  
  
|Routine TCHAR.H|\_UNICODE & \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_istalpha`|`isalpha`|`_ismbcalpha`|`iswalpha`|  
|`_istalpha_l`|`_isalpha_l`|`_ismbcalpha_l`|`_iswalpha_l`|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`isalpha`|\<ctype.h\>|  
|`iswalpha`|\<ctype.h\> o \<wchar.h\>|  
|`_isalpha_l`|\<ctype.h\>|  
|`_iswalpha_l`|\<ctype.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 [System::Char::IsLetter](https://msdn.microsoft.com/en-us/library/system.char.isletter.aspx)  
  
## Vedere anche  
 [Classificazione di caratteri](../../c-runtime-library/character-classification.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)