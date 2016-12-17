---
title: "_InterlockedCompareExchange128 | Microsoft Docs"
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
  - "_InterlockedCompareExchange128_cpp"
  - "_InterlockedCompareExchange128"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "cmpxchg16b (istruzione)"
  - "_InterlockedCompareExchange128 (funzione intrinseca)"
ms.assetid: f05918fc-716a-4f6d-b746-1456d6b96c56
caps.latest.revision: 17
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _InterlockedCompareExchange128
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Esegue i 128 che il bit collegato confronta e che scambia.  
  
## Sintassi  
  
```  
unsigned char _InterlockedCompareExchange128(  
   __int64 volatile * Destination,  
   __int64 ExchangeHigh,  
   __int64 ExchangeLow,  
   __int64 * ComparandResult  
);  
```  
  
#### Parametri  
 \[in, out\] `Destination`  
 Puntatore alla destinazione, ovvero una matrice di due numeri interi a 64 bit considerati come campo di bit 128.  I dati di destinazione devono essere 16 byte allineato per evitare un errore di protezione generale.  
  
 \[in\] `ExchangeHigh`  
 Un Integer a 64 bit che può essere scambiato con la parte superiore della destinazione.  
  
 \[in\] `ExchangeLow`  
 Un Integer a 64 bit che può essere scambiato con la parte inferiore della destinazione.  
  
 \[in, out\] `ComparandResult`  
 Puntatore a matrice di due numeri interi a 64 bit \(considerati come campo di bit 128\) da confrontare con la destinazione.  In output, questo viene sostituito con il valore originale della destinazione.  
  
## Valore restituito  
 1 se il comparand a 128 bit è uguale al valore originale della destinazione.  `ExchangeHigh` e `ExchangeLow` sovrascrivono la destinazione di 128 bit.  
  
 0 se il comparand non è uguale al valore originale della destinazione.  Il valore di destinazione è invariato e il valore di comparand viene sostituito dal valore di destinazione.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`_InterlockedCompareExchange128`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Questa funzione intrinseca genera l'istruzione di`cmpxchg16b` con il prefisso di `lock` \) eseguire i 128 che il bit bloccato confronta e che scambia.  Le versioni precedenti hardware a 64 bit AMD non supportano questa istruzione.  Per verificare il supporto hardware all'istruzione di `cmpxchg16b`, chiamare la funzione intrinseca di `__cpuid` con `InfoType=0x00000001 (standard function 1)`.  Le applicazioni a 13 bit di `CPUInfo[2]`\(ECX\) è 1 se l'istruzione è supportata.  
  
> [!NOTE]
>  Il valore di `ComparandResult` viene sovrascritto sempre.  Dopo l'istruzione di `lock` , questa funzione intrinseca immediatamente copia il valore iniziale di `Destination` a `ComparandResult`.  Per questo motivo, `ComparandResult` e `Destination` devono puntare per separare le posizioni di memoria per evitare il comportamento imprevisto.  
  
 Sebbene sia possibile utilizzare `_InterlockedCompareExchange128` per la sincronizzazione dei thread di basso livello, non è necessario sincronizzare oltre 128 bit se è possibile utilizzare le funzioni più piccole di sincronizzazione \(come le altre funzioni intrinseche di `_InterlockedCompareExchange` \).  Utilizzare `_InterlockedCompareExchange128` se si desidera accedere in modalità atomica su un valore pari a 128 bit in memoria.  
  
 Se si esegue il codice che utilizza questa funzione intrinseca sull'hardware che non supporta l'istruzione di `cmpxchg16b` , i risultati sono imprevedibili.  
  
 Questa procedura è disponibile solo come intrinseci.  
  
## Esempio  
 In questo esempio viene utilizzato `_InterlockedCompareExchange128` per sostituire il word alto di una matrice di due numeri interi a 64 bit con la somma del livello e word bassi e per incrementare il word basso.  L'accesso alla matrice di BigInt.Int viene utilizzato esempio di questo, ma atomici un singolo thread e ignora il blocco per la semplicità.  
  
```  
// cmpxchg16b.c  
// processor: x64  
// compile with: /EHsc /O2  
#include <stdio.h>  
#include <intrin.h>  
  
typedef struct _LARGE_INTEGER_128 {  
    __int64 Int[2];  
} LARGE_INTEGER_128, *PLARGE_INTEGER_128;  
  
volatile LARGE_INTEGER_128 BigInt;  
  
// This AtomicOp() function atomically performs:  
//   BigInt.Int[1] += BigInt.Int[0]  
//   BigInt.Int[0] += 1  
void AtomicOp ()  
{  
    LARGE_INTEGER_128 Comparand;  
    Comparand.Int[0] = BigInt.Int[0];  
    Comparand.Int[1] = BigInt.Int[1];  
    do {  
        ; // nothing  
    } while (_InterlockedCompareExchange128(BigInt.Int,  
                                            Comparand.Int[0] + Comparand.Int[1],  
                                            Comparand.Int[0] + 1,  
                                            Comparand.Int) == 0);  
}  
  
// In a real application, several threads contend for the value  
// of BigInt.  
// Here we focus on the compare and exchange for simplicity.  
int main(void)  
{  
   BigInt.Int[1] = 23;  
   BigInt.Int[0] = 11;  
   AtomicOp();  
   printf("BigInt.Int[1] = %d, BigInt.Int[0] = %d\n",  
      BigInt.Int[1],BigInt.Int[0]);  
}  
```  
  
  **BigInt.Int \[1\] \= 34, BigInt.Int \[0\] \= 12**   
## Microsoft FINALE specifico  
 Copyright 2007 da Advanced Micro Devices, inc tutti i diritti riservati.  Riprodotto con l'autorizzazione di Advanced Micro Devices, inc  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [\_InterlockedCompareExchange Intrinsic Functions](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)   
 [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)