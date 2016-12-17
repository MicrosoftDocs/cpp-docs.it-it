---
title: "__movsw | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__movsw"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "movsw (istruzione)"
  - "rep movsw (istruzione)"
  - "__movsw (funzione intrinseca)"
ms.assetid: db402ad5-7f0e-449a-b0b0-eea9928d6435
caps.latest.revision: 14
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __movsw
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Genera un'istruzione della stringa di spostamento \(`rep movsw`\).  
  
## Sintassi  
  
```  
void __movsw(   
   unsigned short* Dest,   
   unsigned short* Source,   
   size_t Count   
);  
```  
  
#### Parametri  
 \[out\] `Dest`  
 La destinazione dell'operazione.  
  
 \[in\] `Source`  
 L'origine dell'operazione.  
  
 \[in\] `Count`  
 Il numero delle parole da copiare.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__movsw`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Il risultato è che le prime parole di `Count` si sposta da `Source` vengono copiati nella stringa di `Dest` .  
  
 Questa procedura è disponibile solo come intrinseci.  
  
## Esempio  
  
```  
// movsw.cpp  
// processor: x86, x64  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(__movsw)  
  
int main()  
{  
    unsigned short s1[10];  
    unsigned short s2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };  
    __movsw(s1, s2, 10);  
  
    for (int i = 0; i < 10; i++)  
        printf_s("%d ", s1[i]);  
    printf_s("\n");  
}  
```  
  
  **0 1 2 3 4 5 6 7 8 9**    
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)