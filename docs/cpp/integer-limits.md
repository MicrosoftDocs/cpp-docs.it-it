---
title: "Limiti per tipi Integer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "limiti per tipi Integer"
  - "limiti integrali"
  - "limiti, integer"
  - "file di intestazione LIMITS.H"
ms.assetid: 6922bdbf-0f49-443b-bc03-ee182e4cbd57
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Limiti per tipi Integer
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 I limiti per i tipi Integer sono elencati nella tabella seguente.  Questi limiti sono definiti anche nel file di intestazione standard. LIMITS.H.  
  
### Limiti su costanti Integer  
  
|Costante|Significato|Valore|  
|--------------|-----------------|------------|  
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
|**INT\_MIN**|Valore minimo per una variabile di tipo `int`|–2147483648|  
|**INT\_MAX**|Valore massimo per una variabile di tipo `int`|2147483647|  
|**UINT\_MAX**|Valore massimo per una variabile di tipo `unsigned int`|4294967295 \(0xffffffff\)|  
|**LONG\_MIN**|Valore minimo per una variabile di tipo **long**.|–2147483648|  
|**LONG\_MAX**|Valore massimo per una variabile di tipo **long**.|2147483647|  
|**ULONG\_MAX**|Valore massimo per una variabile di tipo `unsigned long`|4294967295 \(0xffffffff\)|  
|**\_I64\_MIN**|Valore minimo per una variabile di tipo `__int64`|\-9223372036854775808|  
|**\_I64\_MAX**|Valore massimo per una variabile di tipo `__int64`|9223372036854775807|  
|**\_UI64\_MAX**|Valore massimo per una variabile di tipo **unsigned \_\_int64**|18446744073709551615 \(0xffffffffffffffff\)|  
  
 Se un valore è superiore al massimo valore rappresentabile con il tipo Integer, il compilatore Microsoft genera un errore.  
  
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [Limiti sulle costanti a virgola mobile](../cpp/floating-limits.md)