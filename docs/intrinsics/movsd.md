---
title: __movsd | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: __movsd
dev_langs: C++
helpviewer_keywords:
- rep movsd instruction
- __movsd intrinsic
- movsd instruction
ms.assetid: eb5cccf3-aa76-47f0-b9fc-eeca38fd943f
caps.latest.revision: "14"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 38771656be017cadf9d12dd1279e6b0a53d29d37
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="movsd"></a>__movsd
**Sezione specifica Microsoft**  
  
 Genera una stringa di spostare (`rep movsd`) (istruzione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __movsd(   
   unsigned long* Dest,   
   unsigned long* Source,   
   size_t Count   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [out] `Dest`  
 La destinazione dell'operazione.  
  
 [in] `Source`  
 L'origine dell'operazione.  
  
 [in] `Count`  
 Il numero di parole doppie da copiare.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__movsd`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Il risultato è che il primo `Count` Double Word a cui puntava `Source` vengono copiati il `Dest` stringa.  
  
 Questa routine è disponibile solo come funzione intrinseca.  
  
## <a name="example"></a>Esempio  
  
```  
// movsd.cpp  
// processor: x86, x64  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(__movsd)  
  
int main()  
{  
    unsigned long a1[10];  
    unsigned long a2[10] = {950, 850, 750, 650, 550, 450, 350,  
                            250, 150, 50};  
    __movsd(a1, a2, 10);  
  
    for (int i = 0; i < 10; i++)  
        printf_s("%d ", a1[i]);  
    printf_s("\n");  
}  
```  
  
```Output  
950 850 750 650 550 450 350 250 150 50   
```  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)