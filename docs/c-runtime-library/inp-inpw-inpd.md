---
title: "_inp, _inpw, _inpd | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_inp"
  - "_inpw"
  - "_inpd"
apilocation: 
  - "msvcrt.dll"
  - "msvcr120.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcr90.dll"
apitype: "DLLExport"
f1_keywords: 
  - "inpd"
  - "_inp"
  - "_inpw"
  - "_inpd"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_inp (funzione)"
  - "_inpd (funzione)"
  - "_inpw (funzione)"
  - "I/O [CRT], porta"
  - "inp (funzione)"
  - "inpd (funzione)"
  - "inpw (funzione)"
  - "porte, routine I/O"
ms.assetid: 5d9c2e38-fc85-4294-86d5-7282cc02d1b3
caps.latest.revision: 16
caps.handback.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _inp, _inpw, _inpd
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Restituisce, da una porta, un byte \(`_inp`\), una parola \(`_inpw`\) o una parola doppia \(`_inpd`\).  
  
> [!IMPORTANT]
>  Queste funzioni sono obsolete. A partire da Visual Studio 2015 non sono disponibili in CRT.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
int _inp(   
   unsigned short port   
);  
unsigned short _inpw(   
   unsigned short port   
);  
unsigned long _inpd(   
   unsigned short port   
);  
```  
  
#### Parametri  
 `port`  
 Numero porta di I\/O.  
  
## Valore restituito  
 Le funzioni restituiscono il byte, la parola o la parola doppia letti da `port`. Non vi è restituzione di errori.  
  
## Note  
 Le funzioni `_inp`, `_inpw` e `_inpd` leggono un byte, una parola e una doppia parola, rispettivamente, dalla porta di input specificata. Il valore di input può essere qualsiasi Unsigned Short Integer nell'intervallo compreso tra 0 e 65.535.  
  
 Dal momento che queste funzioni leggono direttamente da una porta di I\/O, potrebbero non essere usate nel codice utente in Windows NT, Windows 2000, Windows XP e Windows Server 2003.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_inp`|\<conio.h\>|  
|`_inpw`|\<conio.h\>|  
|`_inpd`|\<conio.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [librerie di runtime C](../c-runtime-library/crt-library-features.md).  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [I\/O console e porta](../c-runtime-library/console-and-port-i-o.md)   
 [\_outp, \_outpw, \_outpd](../c-runtime-library/outp-outpw-outpd.md)