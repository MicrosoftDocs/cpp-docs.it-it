---
title: "Limiti per i tipi Integer in C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "limiti per tipi Integer"
  - "limiti, integer"
  - "limiti, costanti Integer"
ms.assetid: 0c23cbd6-29fb-4d9c-b689-5984e19748de
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Limiti per i tipi Integer in C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 I limiti per i tipi Integer sono elencati nella tabella seguente.  Tali limiti sono definiti anche nel file di intestazione standard. LIMITS.H.  Microsoft C consente inoltre di dichiarare variabili Integer ridimensionate, che sono tipi integrali di dimensioni di 8, 16 o 32 bit.  Per ulteriori informazioni sui tipi Integer ridimensionati, vedere [Tipi Integer ridimensionati](../c-language/c-sized-integer-types.md).  
  
### Limiti su costanti Integer  
  
|**Costante**|Significato|Valore|  
|------------------|-----------------|------------|  
|**CHAR\_BIT**|Numero di bit nella variabile minore che non sia un campo di bit.|8|  
|**SCHAR\_MIN**|Valore minimo per una variabile di tipo **signed char**.|–128|  
|**SCHAR\_MAX**|Valore massimo per una variabile di tipo **signed char**.|127|  
|**UCHAR\_MAX**|Valore massimo per una variabile di tipo `unsigned char`|255 \(0xff\)|  
|**CHAR\_MIN**|Valore minimo per una variabile di tipo `char`|\- 128; 0 se si utilizza l'opzione \/J|  
|**CHAR\_MAX**|Valore massimo per una variabile di tipo `char`|127; 255 se si utilizza l'opzione \/J|  
|**MB\_LEN\_MAX**|Numero massimo di byte in una costante multicarattere.|5|  
|**SHRT\_MIN**|Valore minimo per una variabile di tipo **short**.|–32768|  
|**SHRT\_MAX**|Valore massimo per una variabile di tipo **short**.|32767|  
|**USHRT\_MAX**|Valore massimo per una variabile di tipo **unsigned short**|65535 \(0xffff\)|  
|**INT\_MIN**|Valore minimo per una variabile di tipo `int`|–2147483647 – 1|  
|**INT\_MAX**|Valore massimo per una variabile di tipo `int`|2147483647|  
|**UINT\_MAX**|Valore massimo per una variabile di tipo `unsigned int`|4294967295 \(0xffffffff\)|  
|**LONG\_MIN**|Valore minimo per una variabile di tipo **long**.|–2147483647 – 1|  
|**LONG\_MAX**|Valore massimo per una variabile di tipo **long**.|2147483647|  
|**ULONG\_MAX**|Valore massimo per una variabile di tipo `unsigned long`|4294967295 \(0xffffffff\)|  
  
 Se un valore è superiore al massimo valore rappresentabile con il tipo Integer, il compilatore Microsoft genera un errore.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Costanti Integer C](../c-language/c-integer-constants.md)