---
title: _mm_insert_si64, _mm_inserti_si64 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- _mm_inserti_si64
- _mm_insert_si64
dev_langs:
- C++
helpviewer_keywords:
- insertq instruction
- _mm_insert_si64 intrinsic
- _mm_inserti_si64 intrinsic
ms.assetid: 897a4b36-8b08-4b00-a18f-7850f5732d7d
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: dc85f56660702afe1c05f3626b3b28b0b566dbd5
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="mminsertsi64-mminsertisi64"></a>_mm_insert_si64, _mm_inserti_si64
**Sezione specifica Microsoft**  
  
 Genera il `insertq` istruzione per inserire il primo operando bit dal secondo operando.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__m128i _mm_insert_si64(  
   __m128i Source1,  
   __m128i Source2  
);  
__m128i _mm_inserti_si64(  
   __m128i Source1,  
   __m128i Source2  
   int Length,  
   int Index  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `Source1`  
 Un campo a 128 bit con dati di input nei relativi inferiore 64 bit in cui verrà inserito un campo.  
  
 [in]  `Source2`  
 Un campo a 128 bit con i dati da inserire nel relativo bit meno significativi.  Per `_mm_insert_si64`, contiene anche un descrittore di campo nel relativo bit più significativi.  
  
 [in]  `Length`  
 Una costante integer che specifica la lunghezza del campo da inserire.  
  
 [in]  `Index`  
 Una costante integer che specifica l'indice del bit meno significativi del campo in cui verranno inseriti i dati.  
  
## <a name="return-value"></a>Valore restituito  
 Un campo a 128 bit il cui 64 bit inferiore contengono gli originale 64 bit bassi di `Source1` con il campo di bit specificato sostituito dal bit meno significativi di `Source2`. 64 bit superiori del valore restituito non sono definiti.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`_mm_insert_si64`|SSE4a|  
|`_mm_inserti_si64`|SSE4a|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Questo intrinseco genera il `insertq` istruzione per l'inserimento di bit da `Source2` in `Source1`. Sono disponibili due versioni di questa funzione intrinseche: `_mm_inserti_si64`, corrisponde alla versione immediata e `_mm_insert_si64` è quello non immediato.  Ogni versione estrae un campo di bit di una determinata lunghezza da Source2 e lo inserisce Source1.  I bit estratti sono il bit meno significativi del Source2.  Source1 il campo in cui verranno inseriti questi bit viene definita la lunghezza e l'indice della relativa bit meno significativo.  I valori di lunghezza e indice vengono acquisiti mod 64, pertanto sia -1 e 127 vengono interpretati come 63. Se la somma dell'indice di bit (limitata) e la lunghezza del campo (ridotto) è maggiore di 64, i risultati sono indefiniti. Un valore pari a zero per la lunghezza del campo viene interpretato come 64.  Se l'indice di bit e di lunghezza di campo è entrambi pari a zero, 63:0 bit di `Source2` vengono inserite `Source1`.  Se la lunghezza del campo è uguale a zero, ma l'indice di bit è diverso da zero, i risultati sono indefiniti.  
  
 In una chiamata a _mm_insert_si64, la lunghezza del campo è contenuta in bit 77:72 Source2 e l'indice in 69:64 bits.  
  
 Se si chiama `_mm_inserti_si64` con argomenti che il compilatore non può determinare essere costanti integer, il compilatore genera codice per comprimere i valori in un registro XMM e di chiamare `_mm_insert_si64`.  
  
 Per determinare il supporto hardware per il `insertq` chiamata istruzione il `__cpuid` intrinseco con `InfoType=0x80000001` e i bit di controllo 6 di `CPUInfo[2] (ECX)`. Questo bit sarà 1 se l'istruzione è supportata e 0 in caso contrario. Se si esegue il codice che utilizza questa funzione intrinseca nell'hardware che non supporta il `insertq` (istruzione), i risultati sono imprevedibili.  
  
## <a name="example"></a>Esempio  
  
```  
// Compile this sample with: /EHsc  
#include <iostream>  
#include <intrin.h>  
using namespace std;  
  
union {  
    __m128i m;  
    unsigned __int64 ui64[2];  
} source1, source2, source3, result1, result2, result3;  
  
int  
main()  
{  
  
    __int64 mask;  
  
    source1.ui64[0] = 0xffffffffffffffffll;  
    source2.ui64[0] = 0xfedcba9876543210ll;  
    source2.ui64[1] = 0xc10;  
    source3.ui64[0] = source2.ui64[0];  
  
    result1.m = _mm_insert_si64 (source1.m, source2.m);  
    result2.m = _mm_inserti_si64(source1.m, source3.m, 16, 12);  
    mask = 0xffff << 12;  
    mask = ~mask;  
    result3.ui64[0] = (source1.ui64[0] & mask) |  
                      ((source2.ui64[0] & 0xffff) << 12);  
  
    cout << hex << "result1 = 0x" << result1.ui64[0] << endl;  
    cout << "result2 = 0x" << result2.ui64[0] << endl;  
    cout << "result3 = 0x" << result3.ui64[0] << endl;  
  
}  
```  
  
```Output  
result1 = 0xfffffffff3210fff  
result2 = 0xfffffffff3210fff  
result3 = 0xfffffffff3210fff  
```  
  
**Fine sezione specifica Microsoft**  
 Copyright 2007 by Advanced Micro Devices, Inc. Tutti i diritti sono riservati. Riprodotto con l'autorizzazione di Advanced Micro dispositivi, Inc.  
  
## <a name="see-also"></a>Vedere anche  
 [_mm_extract_si64, _mm_extracti_si64](../intrinsics/mm-extract-si64-mm-extracti-si64.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)