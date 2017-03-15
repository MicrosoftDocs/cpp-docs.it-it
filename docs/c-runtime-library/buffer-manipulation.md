---
title: Modifica del buffer | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- c.memory
dev_langs:
- C++
helpviewer_keywords:
- buffers, manipulation routines
- buffers
ms.assetid: 164f4860-ce66-412c-8291-396fbd70f03e
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Human Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: d80ef9f47ea97443ba90af41bbe63cac31987367
ms.lasthandoff: 02/24/2017

---
# <a name="buffer-manipulation"></a>Modifica del buffer
Usare queste routine per utilizzare le aree di memoria byte per byte.  
  
### <a name="buffer-manipulation-routines"></a>Routine di modifica del buffer  
  
|Routine|Uso|Equivalente .NET Framework|  
|-------------|---------|-------------------------------|  
|[_memccpy](../c-runtime-library/reference/memccpy.md)|Copia i caratteri da un buffer a un altro finché non è stato copiato un carattere specifico o un numero specifico|[System::Buffer::BlockCopy](https://msdn.microsoft.com/en-us/library/system.buffer.blockcopy.aspx), [System::String::Copy](https://msdn.microsoft.com/en-us/library/system.string.copy.aspx)|  
|[memchr, wmemchr](../c-runtime-library/reference/memchr-wmemchr.md)|Restituisce un puntatore alla prima occorrenza, all'interno di un numero definito di caratteri, di un carattere specificato nel buffer|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
|[memcmp, wmemcmp](../c-runtime-library/reference/memcmp-wmemcmp.md)|Confronta un numero specificato di caratteri di due buffer|[System::String::Compare](https://msdn.microsoft.com/en-us/library/system.string.compare.aspx), [System::String::Equals](https://msdn.microsoft.com/en-us/library/system.string.equals.aspx)|  
|[memcpy, wmemcpy](../c-runtime-library/reference/memcpy-wmemcpy.md), [memcpy_s, wmemcpy_s](../c-runtime-library/reference/memcpy-s-wmemcpy-s.md)|Copia un numero specificato di caratteri da un buffer a un altro|[System::Buffer::BlockCopy](https://msdn.microsoft.com/en-us/library/system.buffer.blockcopy.aspx), [System::String::Copy](https://msdn.microsoft.com/en-us/library/system.string.copy.aspx)|  
|[_memicmp, _memicmp_l](../c-runtime-library/reference/memicmp-memicmp-l.md)|Confronta un numero specificato di caratteri di due buffer senza fare distinzione tra maiuscole e minuscole|[System::String::Compare](https://msdn.microsoft.com/en-us/library/system.string.compare.aspx), [System::String::Equals](https://msdn.microsoft.com/en-us/library/system.string.equals.aspx)|  
|[memmove, wmemmove](../c-runtime-library/reference/memmove-wmemmove.md),[memmove_s, wmemmove_s](../c-runtime-library/reference/memmove-s-wmemmove-s.md)|Copia un numero specificato di caratteri da un buffer a un altro|[System::Buffer::BlockCopy](https://msdn.microsoft.com/en-us/library/system.buffer.blockcopy.aspx)|  
|[memset, wmemset](../c-runtime-library/reference/memset-wmemset.md)|Usa il carattere specificato per inizializzare un numero specificato di byte nel buffer|[System::Buffer::SetByte](https://msdn.microsoft.com/en-us/library/system.buffer.setbyte.aspx)|  
|[_swab](../c-runtime-library/reference/swab.md)|Scambia byte di dati e li memorizza nella posizione specificata|Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).|  
  
 Quando l'area di origine e quella di destinazione si sovrappongono, solo `memmove` garantisce la copia completa e corretta dell'origine.  
  
## <a name="see-also"></a>Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
