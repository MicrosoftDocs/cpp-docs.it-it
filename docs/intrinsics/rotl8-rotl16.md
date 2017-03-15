---
title: "_rotl8, _rotl16 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_rotl8"
  - "_rotl16"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_rotl16 intrinsic"
  - "_rotl8 intrinsic"
ms.assetid: 8c519ab6-aef9-4f07-a387-daee8408368f
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# _rotl8, _rotl16
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Ruotare i valori di input a sinistra del bit più significativo \(MSB\) di un numero specificato di posizioni di bit.  
  
## Sintassi  
  
```  
unsigned char _rotl8(     unsigned char value,     unsigned char shift  ); unsigned short _rotl16(     unsigned short value,     unsigned char shift  );  
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
|`_rotl8`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
|`_rotl16`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 A differenza di un'operazione di spostamento a sinistra, quando si esegue una rotazione a sinistra, i bit più significativi che superano il limite superiore vengono spostati nelle posizioni dei bit meno significativi.  
  
## Esempio  
  
```  
// rotl.cpp  
#include <stdio.h>  
#include <intrin.h>  
  
#pragma intrinsic(_rotl8, _rotl16)  
  
int main()  
{  
    unsigned char c = 'A', c1, c2;  
  
    for (int i = 0; i < 8; i++)  
    {  
       printf_s("Rotating 0x%x left by %d bits gives 0x%x\n", c,  
               i, _rotl8(c, i));  
    }  
  
    unsigned short s = 0x12;  
    int nBit = 10;  
  
    printf_s("Rotating unsigned short 0x%x left by %d bits gives 0x%x\n",  
            s, nBit, _rotl16(s, nBit));  
}  
```  
  
  **La rotazione a sinistra di 0x41 di 0 bit dà come risultato 0x41**  
**La rotazione a sinistra di 0x41 di 1 bit dà come risultato 0x82**  
**La rotazione a sinistra di 0x41 di 2 bit dà come risultato 0x5**  
**La rotazione a sinistra di 0x41 di 3 bit dà come risultato 0xa**  
**La rotazione a sinistra di 0x41 di 4 bit dà come risultato 0x14**  
**La rotazione a sinistra di 0x41 di 5 bit dà come risultato 0x28**  
**La rotazione a sinistra di 0x41 di 6 bit dà come risultato 0x50**  
**La rotazione a sinistra di 0x41 di 7 bit dà come risultato 0xa0**  
**La rotazione a destra del valore short senza segno 0x12 di 10 bit dà come risultato 0x4800**   
## Fine sezione specifica Microsoft  
  
## Vedere anche  
 [\_rotr8, \_rotr16](../intrinsics/rotr8-rotr16.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)