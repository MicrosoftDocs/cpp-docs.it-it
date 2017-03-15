---
title: "_rotr8, _rotr16 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_rotr16"
  - "_rotr8"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_rotr16 intrinsic"
  - "_rotr8 intrinsic"
ms.assetid: dfbd2c82-82b4-427a-ad52-51609027ebff
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# _rotr8, _rotr16
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Ruotare i valori di input a destra del bit meno significativo di un numero specificato di posizioni di bit.  
  
## Sintassi  
  
```  
unsigned char _rotr8(     unsigned char value,     unsigned char shift  ); unsigned short _rotr16(     unsigned short value,     unsigned char shift  );  
```  
  
#### Parametri  
 \[in\] `value`  
 Valore da ruotare.  
  
 \[in\] `shift`  
 Numero di bit da ruotare.  
  
## Valore restituito  
 Il valore ruotato.  
  
## Requisiti  
  
|Funzione intrinseca|Architettura|  
|-------------------------|------------------|  
|`_rotr8`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`_rotr16`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 A differenza di un'operazione di spostamento a destra, quando si esegue una rotazione a destra, i bit di ordine inferiore che non rientrano nell'estremità inferiore vengono spostati nelle posizioni di bit di ordine superiore.  
  
## Esempio  
  
```  
// rotr.cpp  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(_rotr8, _rotr16)  
  
int main()  
{  
    unsigned char c = 'A', c1, c2;  
  
    for (int i = 0; i < 8; i++)  
    {  
       printf_s("Rotating 0x%x right by %d bits gives 0x%x\n", c,  
                i, _rotr8(c, i));  
    }  
  
    unsigned short s = 0x12;  
    int nBit = 10;  
  
    printf_s("Rotating unsigned short 0x%x right by %d bits "  
             "gives 0x%x\n",  
            s, nBit, _rotr16(s, nBit));  
}  
```  
  
  **Rotating 0x41 right by 0 bits gives 0x41**  
**Rotating 0x41 right by 1 bits gives 0xa0**  
**Rotating 0x41 right by 2 bits gives 0x50**  
**Rotating 0x41 right by 3 bits gives 0x28**  
**Rotating 0x41 right by 4 bits gives 0x14**  
**Rotating 0x41 right by 5 bits gives 0xa**  
**Rotating 0x41 right by 6 bits gives 0x5**  
**Rotating 0x41 right by 7 bits gives 0x82**  
**Rotating unsigned short 0x12 right by 10 bits gives 0x480**   
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [\_rotl8, \_rotl16](../intrinsics/rotl8-rotl16.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)