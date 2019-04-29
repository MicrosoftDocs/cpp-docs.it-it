---
title: Funzioni intrinseche _InterlockedDecrement
ms.date: 12/17/2018
f1_keywords:
- _InterlockedDecrement16_rel_cpp
- _InterlockedDecrement16_acq_cpp
- _InterlockedDecrement16_rel
- _InterlockedDecrement64_acq
- _InterlockedDecrement_nf
- _InterlockedDecrement16_nf
- _InterlockedDecrement64_rel_cpp
- _InterlockedDecrement_rel_cpp
- _InterlockedDecrement16_acq
- _InterlockedDecrement64_acq_cpp
- _InterlockedDecrement_rel
- _InterlockedDecrement64_nf
- _InterlockedDecrement16_cpp
- _InterlockedDecrement64
- _InterlockedDecrement_cpp
- _InterlockedDecrement64_rel
- _InterlockedDecrement16
- _InterlockedDecrement
- _InterlockedDecrement64_cpp
- _InterlockedDecrement_acq
- _InterlockedDecrement_acq_cpp
helpviewer_keywords:
- InterlockedDecrement64_rel intrinsic
- InterlockedDecrement64 intrinsic
- _InterlockedDecrement16 intrinsic
- _InterlockedDecrement16_acq intrinsic
- _InterlockedDecrement intrinsic
- _InterlockedDecrement_nf intrinsic
- _InterlockedDecrement_acq intrinsic
- _InterlockedDecrement64_rel intrinsic
- _InterlockedDecrement16_rel intrinsic
- InterlockedDecrement intrinsic
- InterlockedDecrement16 intrinsic
- _InterlockedDecrement16_nf intrinsic
- InterlockedDecrement64_acq intrinsic
- _InterlockedDecrement_rel intrinsic
- InterlockedDecrement_acq intrinsic
- _InterlockedDecrement64_acq intrinsic
- _InterlockedDecrement64 intrinsic
- _InterlockedDecrement64_nf intrinsic
- InterlockedDecrement_rel intrinsic
ms.assetid: 5268fce3-86b5-4b2b-b96c-2e531a3fb9b5
ms.openlocfilehash: 525c40f4260d59f370f0580d2cb7d9e8f184ee4c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62396756"
---
# <a name="interlockeddecrement-intrinsic-functions"></a>Funzioni intrinseche _InterlockedDecrement

**Sezione specifica Microsoft**

Fornisce il supporto intrinseco del compilatore per il SDK di Windows Win32 [InterlockedDecrement](/windows/desktop/api/winnt/nf-winnt-interlockeddecrement) (funzione).

## <a name="syntax"></a>Sintassi

```
long _InterlockedDecrement(
   long * lpAddend
);
long _InterlockedDecrement_acq(
   long * lpAddend
);
long _InterlockedDecrement_rel(
   long * lpAddend
);
long _InterlockedDecrement_nf(
   long * lpAddend
);
short _InterlockedDecrement16(
   short * lpAddend
);
short _InterlockedDecrement16_acq(
   short * lpAddend
);
short _InterlockedDecrement16_rel(
   short * lpAddend
);
short _InterlockedDecrement16_nf(
   short * lpAddend
);
__int64 _InterlockedDecrement64(
   __int64 * lpAddend
);
__int64 _InterlockedDecrement64_acq(
   __int64 * lpAddend
);
__int64 _InterlockedDecrement64_rel(
   __int64 * lpAddend
);
__int64 _InterlockedDecrement64_nf(
   __int64 * lpAddend
);
```

#### <a name="parameters"></a>Parametri

*lpAddend*<br/>
[in, out] Puntatore alla variabile deve essere diminuito.

## <a name="return-value"></a>Valore restituito

Il valore restituito è il valore ridotto risultante.

## <a name="requirements"></a>Requisiti

|Funzione intrinseca|Architettura|
|---------------|------------------|
|`_InterlockedDecrement`, `_InterlockedDecrement16`, `_InterlockedDecrement64`|x86, ARM, x64|
|`_InterlockedDecrement_acq`, `_InterlockedDecrement_rel`, `_InterlockedDecrement_nf`, `_InterlockedDecrement16_acq`, `_InterlockedDecrement16_rel`, `_InterlockedDecrement16_nf`, `_InterlockedDecrement64_acq`, `_InterlockedDecrement64_rel`, `_InterlockedDecrement64_nf`,|ARM|

**File di intestazione** \<intrin. h >

## <a name="remarks"></a>Note

Ci sono diverse varianti di `_InterlockedDecrement` che variano in base ai tipi di dati interessati e all'uso della semantica di acquisizione o di rilascio specifica del processore.

Mentre la funzione `_InterlockedDecrement` opera su valori integer a 32 bit, `_InterlockedDecrement16` opera su valori integer a 16 bit e `_InterlockedDecrement64` opera su valori integer a 64 bit.

Sulle piattaforme ARM usare le funzioni intrinseche con i suffissi `_acq` e `_rel` per la semantica di acquisizione e di rilascio, ad esempio all'inizio e alla fine di una sezione critica. Le funzioni intrinseche con suffisso `_nf` ("nessun limite") non fungono da barriera di memoria.

La variabile a cui punta il parametro `lpAddend` deve essere allineata a un limite a 32 bit; in caso contrario, questa funzione non andrà a buon fine su sistemi x86 multiprocessore e su qualsiasi sistema non x86. Per altre informazioni, vedere [allineare](../cpp/align-cpp.md).

Queste routine sono disponibili solo come funzioni intrinseche.

## <a name="example"></a>Esempio

```cpp
// compiler_intrinsics_interlocked.cpp
// compile with: /Oi
#define _CRT_RAND_S

#include <cstdlib>
#include <cstdio>
#include <process.h>
#include <windows.h>

// To declare an interlocked function for use as an intrinsic,
// include intrin.h and put the function in a #pragma intrinsic
// statement.
#include <intrin.h>

#pragma intrinsic (_InterlockedIncrement)

// Data to protect with the interlocked functions.
volatile LONG data = 1;

void __cdecl SimpleThread(void* pParam);

const int THREAD_COUNT = 6;

int main() {
   DWORD num;
   HANDLE threads[THREAD_COUNT];
   int args[THREAD_COUNT];
   int i;

   for (i = 0; i < THREAD_COUNT; i++) {
      args[i] = i + 1;
      threads[i] = reinterpret_cast<HANDLE>(_beginthread(SimpleThread, 0,
                           args + i));
      if (threads[i] == reinterpret_cast<HANDLE>(-1))
         // error creating threads
         break;
   }

   WaitForMultipleObjects(i, threads, true, INFINITE);
}

// Code for our simple thread
void __cdecl SimpleThread(void* pParam) {
   int threadNum = *((int*)pParam);
   int counter;
   unsigned int randomValue;
   unsigned int time;
   errno_t err = rand_s(&randomValue);

   if (err == 0) {
      time = (unsigned int) ((double) randomValue / (double) UINT_MAX * 500);
      while (data < 100) {
         if (data < 100) {
            _InterlockedIncrement(&data);
            printf_s("Thread %d: %d\n", threadNum, data);
         }

         Sleep(time);   // wait up to half of a second
      }
   }

   printf_s("Thread %d complete: %d\n", threadNum, data);
}
```

## <a name="see-also"></a>Vedere anche

[Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Conflitti con il compilatore x86](../build/x64-software-conventions.md#conflicts-with-the-x86-compiler)