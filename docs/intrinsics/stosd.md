---
title: __stosd | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __stosd
dev_langs:
- C++
helpviewer_keywords:
- stosd instruction
- rep stosd instruction
- __stosd intrinsic
ms.assetid: 03104247-1cea-49f6-b6f8-287917bf5680
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f019a0c2c62b991b2799f1a5d6d89402054c0260
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45723385"
---
# <a name="stosd"></a>__stosd
**Sezione specifica Microsoft**  
  
 Genera un'istruzione di archivio stringa (`rep stosd`).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __stosd(   
   unsigned long* Dest,   
   unsigned long Data,   
   size_t Count   
);  
```  
  
#### <a name="parameters"></a>Parametri  
*dest*<br/>
[out] La destinazione dell'operazione.  
  
*Dati*<br/>
[in] I dati da archiviare.  
  
*Conteggio*<br/>
[in] La lunghezza del blocco di Double Word da scrivere.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__stosd`|x86, x64|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Il risultato è che la parola doppia `Data` viene scritto in un blocco di `Count` Double Word in corrispondenza della posizione di memoria a cui punta `Dest`.  
  
 Questa routine è disponibile solo come funzione intrinseca.  
  
## <a name="example"></a>Esempio  
  
```  
// stosd.c  
// processor: x86, x64  
  
#include <stdio.h>  
#include <memory.h>  
#include <intrin.h>  
  
#pragma intrinsic(__stosd)  
  
int main()  
{  
    unsigned long val = 99999;  
    unsigned long a[10];  
  
    memset(a, 0, sizeof(a));  
    __stosd(a+1, val, 2);  
  
printf_s( "%u %u %u %u",  
              a[0], a[1], a[2], a[3]);   
}  
```  
  
```Output  
0 99999 99999 0  
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)