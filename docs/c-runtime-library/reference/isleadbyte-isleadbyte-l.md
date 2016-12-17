---
title: "isleadbyte, _isleadbyte_l | Microsoft Docs"
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
  - "_isleadbyte_l"
  - "isleadbyte"
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
  - "_istleadbyte"
  - "_isleadbyte_l"
  - "isleadbyte"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "byte iniziali"
  - "_isleadbyte_l (funzione)"
  - "_istleadbyte (funzione)"
  - "istleadbyte (funzione)"
  - "isleadbyte (funzione)"
ms.assetid: 3b2bcf09-d82b-4803-9e80-59d04942802a
caps.latest.revision: 20
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# isleadbyte, _isleadbyte_l
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina se un carattere è il byte iniziale di un carattere multibyte.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int isleadbyte(  
   int c   
);  
int _isleadbyte_l(  
   int c   
);  
```  
  
#### Parametri  
 `c`  
 Valore Integer da testare.  
  
## Valore restituito  
 `isleadbyte` restituisce un valore diverso da zero se l'argomento soddisfa la condizione di test oppure 0 in caso contrario. Nelle impostazioni locali "C" e nelle impostazioni locali del set di caratteri a byte singolo \(SBCS\), `isleadbyte` restituisce sempre 0.  
  
## Note  
 La macro `isleadbyte` restituisce un valore diverso da zero se l'argomento è il primo byte di un carattere multibyte.`isleadbyte` produce un risultato significativo per qualsiasi argomento integer da \-1 \(`EOF`\) a `UCHAR_MAX` \(0xFF\), inclusi.  
  
 Il tipo di argomento previsto di `isleadbyte` è `int`; se un carattere signed viene passato, il compilatore potrebbe convertirlo in un Integer con l'estensione di segno, generando risultati imprevisti.  
  
 La versione di questa funzione con il suffisso `_l` è identica, con la differenza che usa le impostazioni locali passate anziché le impostazioni locali correnti per il relativo comportamento dipendente dalle impostazioni locali.  
  
### Mapping di routine di testo generico  
  
|Routine TCHAR.H|\_UNICODE e \_MBCS non definiti|\_MBCS definito|\_UNICODE definito|  
|---------------------|-------------------------------------|---------------------|------------------------|  
|`_istleadbyte`|Restituisce sempre false|**\_** `isleadbyte`|Restituisce sempre false|  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`isleadbyte`|\<ctype.h\>|  
|`_isleadbyte_l`|\<ctype.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md).  
  
## Equivalente .NET Framework  
 Non applicabile, ma vedere [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).  
  
## Vedere anche  
 [Classificazione per byte](../../c-runtime-library/byte-classification.md)   
 [Impostazioni locali](../../c-runtime-library/locale.md)   
 [Routines \_ismbb](../../c-runtime-library/ismbb-routines.md)