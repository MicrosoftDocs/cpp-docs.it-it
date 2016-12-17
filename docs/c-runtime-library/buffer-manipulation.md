---
title: "Modifica del buffer | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.memory"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "buffer"
  - "buffer, routine di modifica"
ms.assetid: 164f4860-ce66-412c-8291-396fbd70f03e
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Modifica del buffer
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare queste routine per utilizzare le aree di memoria byte per byte.  
  
### Routine di modifica del buffer  
  
|Routine|Utilizzo|Equivalente .NET Framework|  
|-------------|--------------|--------------------------------|  
|[\_memccpy](../c-runtime-library/reference/memccpy.md)|Copiare i caratteri da un buffer a un altro fino a che un carattere specifico o un numero specifico non è stato copiato|[System::Buffer::BlockCopy](https://msdn.microsoft.com/en-us/library/system.buffer.blockcopy.aspx), [System::String::Copy](https://msdn.microsoft.com/en-us/library/system.string.copy.aspx)|  
|[memchr, wmemchr](../c-runtime-library/reference/memchr-wmemchr.md)|Restituisce un puntatore alla prima occorrenza, all'interno del numero specificato di caratteri, di un carattere specificato nel buffer|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
|[memcmp, wmemcmp](../c-runtime-library/reference/memcmp-wmemcmp.md)|Confrontare il numero specificato di caratteri da due buffer|[System::String::Compare](https://msdn.microsoft.com/en-us/library/system.string.compare.aspx), [System::String::Equals](https://msdn.microsoft.com/en-us/library/system.string.equals.aspx)|  
|[memcpy, wmemcpy](../c-runtime-library/reference/memcpy-wmemcpy.md), [memcpy\_s, wmemcpy\_s](../c-runtime-library/reference/memcpy-s-wmemcpy-s.md)|Copiare il numero specificato di caratteri da un buffer a un altro|[System::Buffer::BlockCopy](https://msdn.microsoft.com/en-us/library/system.buffer.blockcopy.aspx), [System::String::Copy](https://msdn.microsoft.com/en-us/library/system.string.copy.aspx)|  
|[\_memicmp, \_memicmp\_l](../c-runtime-library/reference/memicmp-memicmp-l.md)|Confrontare il numero specificato di caratteri da due buffer indipendentemente dal caso|[System::String::Compare](https://msdn.microsoft.com/en-us/library/system.string.compare.aspx), [System::String::Equals](https://msdn.microsoft.com/en-us/library/system.string.equals.aspx)|  
|[memmove, wmemmove](../c-runtime-library/reference/memmove-wmemmove.md),[memmove\_s, wmemmove\_s](../c-runtime-library/reference/memmove-s-wmemmove-s.md)|Copiare il numero specificato di caratteri da un buffer a un altro|[\<caps:sentence id\="tgt21" sentenceid\="3833f84fafc5c85a0cac972319a7142c" class\="tgtSentence"\>System::Buffer::BlockCopy\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.buffer.blockcopy.aspx)|  
|[memset, wmemset](../c-runtime-library/reference/memset-wmemset.md)|Utilizzare il carattere specificato per inizializzare il numero di byte nel buffer|[\<caps:sentence id\="tgt23" sentenceid\="b681ccb0db940e3c31a14bf4b7e7aaf8" class\="tgtSentence"\>System::Buffer::SetByte\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.buffer.setbyte.aspx)|  
|[\_swab](../c-runtime-library/reference/swab.md)|Scambia byte di dati e li memorizza nella locazione specificata|Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).|  
  
 Quando l'area sorgente e l'area di destinazione si sovrappongono, solo `memmove` garantisce la copia completa e corretta del codice sorgente.  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)