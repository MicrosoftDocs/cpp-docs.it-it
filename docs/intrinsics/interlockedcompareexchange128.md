---
title: Interlockedcompareexchange128 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- _InterlockedCompareExchange128_cpp
- _InterlockedCompareExchange128
dev_langs:
- C++
helpviewer_keywords:
- cmpxchg16b instruction
- _InterlockedCompareExchange128 intrinsic
ms.assetid: f05918fc-716a-4f6d-b746-1456d6b96c56
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2850be4b93738c61e22c5ca841e07f1901ec01e2
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="interlockedcompareexchange128"></a>_InterlockedCompareExchange128
**Sezione specifica Microsoft**  
  
 Esegue un confronto con interlock a 128 bit ed exchange.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned char _InterlockedCompareExchange128(  
   __int64 volatile * Destination,  
   __int64 ExchangeHigh,  
   __int64 ExchangeLow,  
   __int64 * ComparandResult  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in, out] `Destination`  
 Puntatore alla destinazione, ovvero una matrice di due interi a 64 bit è considerato come un campo a 128 bit. I dati di destinazione devono essere 16 byte allineate in modo da evitare un errore di protezione generale.  
  
 [in] `ExchangeHigh`  
 Intero a 64 bit che può essere scambiato con la parte più significativa della destinazione.  
  
 [in] `ExchangeLow`  
 Intero a 64 bit che può essere scambiato con la parte inferiore della destinazione.  
  
 [in, out] `ComparandResult`  
 Puntatore a una matrice di due interi a 64 bit (considerati come un campo a 128 bit) da confrontare con la destinazione.  Nell'output, viene sovrascritto con il valore originale della destinazione.  
  
## <a name="return-value"></a>Valore restituito  
 1 se il parametro comparand 128 bit uguale al valore originale della destinazione. `ExchangeHigh` e `ExchangeLow` sovrascrivere la destinazione di 128 bit.  
  
 0 se il parametro comparand è uguale al valore originale della destinazione. Il valore dell'oggetto di destinazione viene modificato e il valore del parametro comparand viene sovrascritto con il valore dell'oggetto di destinazione.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`_InterlockedCompareExchange128`|[!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Questo intrinseco genera il `cmpxchg16b` istruzione (con il `lock` prefisso) per eseguire un confronto bloccato a 128 bit e exchange. Nelle versioni precedenti di hardware AMD a 64 bit non supportano questa istruzione. Per verificare il supporto hardware per il `cmpxchg16b` istruzione, chiamate di `__cpuid` intrinseco con `InfoType=0x00000001 (standard function 1)`. Bit 13 di `CPUInfo[2]` (ECX) è 1 se l'istruzione è supportata.  
  
> [!NOTE]
>  Il valore di `ComparandResult` viene sempre sovrascritto. Dopo il `lock` (istruzione), questa funzione intrinseca copia immediatamente il valore iniziale di `Destination` a `ComparandResult`. Per questo motivo, `ComparandResult` e `Destination` deve fare riferimento a posizioni di memoria separate per evitare comportamenti imprevisti.  
  
 Sebbene sia possibile utilizzare `_InterlockedCompareExchange128` per la sincronizzazione di thread di basso livello, non è necessario sincronizzare più di 128 bit, se è possibile utilizzare funzioni più piccole di sincronizzazione (ad esempio l'altro `_InterlockedCompareExchange` funzioni intrinseche) invece. Utilizzare `_InterlockedCompareExchange128` se si desidera accedere atomiche su un valore a 128 bit nella memoria.  
  
 Se si esegue il codice che utilizza questa funzione intrinseca nell'hardware che non supporta il `cmpxchg16b` (istruzione), i risultati sono imprevedibili.  
  
 Questa routine è disponibile solo come funzione intrinseca.  
  
## <a name="example"></a>Esempio  
 Questo esempio viene utilizzato `_InterlockedCompareExchange128` per sostituire la parola alta di una matrice di due interi a 64 bit con la somma dei relativi parole minimo e massimo e di incrementare la parola meno significativa. L'accesso alla matrice BigInt.Int è atomico, ma in questo esempio viene utilizzato un thread singolo e ignora il blocco per motivi di semplicità.  
  
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
  
```Output  
BigInt.Int[1] = 34, BigInt.Int[0] = 12  
```  
  
**Fine sezione specifica Microsoft**  
 Copyright 2007 by Advanced Micro Devices, Inc. Tutti i diritti sono riservati. Riprodotto con l'autorizzazione di Advanced Micro dispositivi, Inc.  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Funzioni intrinseche InterlockedCompareExchange](../intrinsics/interlockedcompareexchange-intrinsic-functions.md)   
 [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)