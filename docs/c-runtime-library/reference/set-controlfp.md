---
title: "_set_controlfp | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_set_controlfp"
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
  - "api-ms-win-crt-runtime-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "set_controlfp"
  - "_set_controlfp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_set_controlfp (funzione)"
  - "funzioni a virgola mobile, impostazione della parola di controllo"
  - "set_controlfp (funzione)"
ms.assetid: e0689d50-f68a-4028-a9c1-fb23eedee4ad
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# _set_controlfp
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta la parola di controllo a virgola mobile.  
  
## Sintassi  
  
```  
void __cdecl _set_controlfp(  
    unsigned int newControl,  
    unsigned int mask  
);  
```  
  
#### Parametri  
 `newControl`  
 Nuovi valori di bit di parola di controllo.  
  
 `mask`  
 Maschera da impostare per i nuovi bit di parola di controllo.  
  
## Valore restituito  
 Nessuno.  
  
## Note  
 `_set_controlfp` è simile a `_control87`, ma imposta solo la parola di controllo a virgola mobile a `newControl`.  I bit nei valori indicano lo stato del controllo a virgola mobile.  Lo stato di controllo a virgola mobile consente al programma di modificare la precisione, l'arrotondamento, e le modalità di infinito nel pacchetto matematica a virgola mobile.  È inoltre possibile mascherare o smascherare eccezioni di virgola mobile utilizzando `_set_controlfp`.  Per ulteriori informazioni, vedere [\_control87, \_controlfp, \_\_control87\_2](../../c-runtime-library/reference/control87-controlfp-control87-2.md).  
  
 Questa funzione è deprecata durante la compilazione con [\/clr \(Compilazione Common Language Runtime\)](../../build/reference/clr-common-language-runtime-compilation.md) o `/clr:pure` poiché il common language runtime supporta solamente la precisione a virgola mobile predefinita.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|Compatibilità|  
|-------------|-------------------------------|-------------------|  
|`_set_controlfp`|\<float.h\>|solo processore a x86|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [\_clear87, \_clearfp](../../c-runtime-library/reference/clear87-clearfp.md)   
 [\_status87, \_statusfp, \_statusfp2](../../c-runtime-library/reference/status87-statusfp-statusfp2.md)