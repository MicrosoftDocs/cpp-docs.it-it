---
title: "_outp, _outpw, _outpd | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_outpd"
  - "_outp"
  - "_outpw"
apilocation: 
  - "msvcrt.dll"
  - "msvcr100.dll"
  - "msvcr120.dll"
  - "msvcr90.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_outpw"
  - "_outpd"
  - "_outp"
  - "outpd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_outp (funzione)"
  - "_outpd (funzione)"
  - "_outpw (funzione)"
  - "byte, scrittura nelle porte"
  - "double word"
  - "double word, scrittura nelle porte"
  - "outp (funzione)"
  - "outpd (funzione)"
  - "outpw (funzione)"
  - "porte, scrittura di byte"
  - "parole"
  - "parole, scrittura nelle porte"
ms.assetid: c200fe22-41f6-46fd-b0be-ebb805b35181
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 16
---
# _outp, _outpw, _outpd
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Restituisce, in una porta, un byte \(`_outp`\), una parola \(`_outpw`\) o una parola doppia \(`_outpd`\).  
  
> [!IMPORTANT]
>  Queste funzioni sono obsolete. A partire da Visual Studio 2015 non sono disponibili in CRT.  
  
> [!IMPORTANT]
>  Non è possibile usare questa API nelle applicazioni eseguite in Windows Runtime. Per altre informazioni, vedere l'articolo relativo alle [funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Sintassi  
  
```  
  
int _outp(unsigned short port,int databyte);unsigned short _outpw(unsigned short port,unsigned short dataword);unsigned long _outpd(unsigned short port,unsigned long dataword);  
```  
  
#### Parametri  
 *porta*  
 Numero porta.  
  
 *databyte, dataword*  
 Valori di output.  
  
## Valore restituito  
 Le funzioni restituiscono l'output dei dati. Non vi è restituzione di errori.  
  
## Note  
 Le funzioni `_outp`, `_outpw` e `_outpd` scrivono un byte, una parola e una parola doppia, rispettivamente, nella porta di output specificata. L'argomento *port* può essere qualsiasi Unsigned Integer nell'intervallo compreso tra 0 e 65.535; *databyte* può essere qualsiasi Integer nell'intervallo compreso tra 0 e 255 e *dataword* può essere qualsiasi valore nell'intervallo compreso, rispettivamente, tra un Integer, un Unsigned Short Integer e un Unsigned Long Integer.  
  
 Dal momento che queste funzioni scrivono direttamente su una porta I\/O, non possono essere usate nel codice utente in Windows NT, Windows 2000, Windows XP e Windows Server 2003. Per informazioni sull'uso delle porte I\/O in questi sistemi operativi, cercare "Comunicazioni Seriali in Win32" su MSDN.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_outp`|\<conio.h\>|  
|`_outpw`|\<conio.h\>|  
|`_outpd`|\<conio.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../c-runtime-library/compatibility.md).  
  
## Librerie  
 Tutte le versioni delle [librerie di runtime C](../c-runtime-library/crt-library-features.md).  
  
## Vedere anche  
 [I\/O console e porta](../c-runtime-library/console-and-port-i-o.md)   
 [\_inp, \_inpw, \_inpd](../c-runtime-library/inp-inpw-inpd.md)