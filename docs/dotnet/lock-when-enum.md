---
title: Enumerazione lock_when | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- msclr::lock_when
- msclr.lock_when
- lock_when
dev_langs:
- C++
helpviewer_keywords:
- lock_when enum
ms.assetid: 6b87bbe9-63cd-450d-a02e-bb91ffd0dcea
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 98e2167ef9ce0c246947ce68f99bdcf4d68a0df2
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46409064"
---
# <a name="lockwhen-enum"></a>Enumerazione lock_when

Specifica il blocco posticipata.

## <a name="syntax"></a>Sintassi

```
enum lock_when {
   lock_later
};
```

## <a name="remarks"></a>Note

Quando viene passato a [lock::lock](../dotnet/lock-lock.md), `lock_later` specifica che il blocco non deve essere impiegato a questo punto.

## <a name="example"></a>Esempio

Questo esempio Usa una singola istanza di una classe in più thread.  La classe Usa un blocco su se stesso per garantire la coerenza per ogni thread che accede ai propri dati interni.  Il thread principale dell'applicazione usa un blocco sulla stessa istanza della classe per controllare periodicamente per verificare se qualsiasi thread di lavoro continuano a esistere e attese per uscire dalla finché tutti thread di lavoro completate le attività.

```
// msl_lock_lock_when.cpp
// compile with: /clr
#include <msclr/lock.h>

using namespace System;
using namespace System::Threading;
using namespace msclr;

ref class CounterClass {
private:
   int Counter;

public:
   property int ThreadCount;

   // function called by multiple threads, use lock to keep Counter consistent
   // for each thread
   void UseCounter() {
      try {
         lock l(this); // wait infinitely

         Console::WriteLine("In thread {0}, Counter = {1}", Thread::CurrentThread->ManagedThreadId,
            Counter);

         for (int i = 0; i < 10; i++) {
            Counter++;
            Thread::Sleep(10);
         }

         Console::WriteLine("In thread {0}, Counter = {1}", Thread::CurrentThread->ManagedThreadId,
            Counter);

         Counter = 0;
         // lock is automatically released when it goes out of scope and its destructor is called
      }
      catch (...) {
         Console::WriteLine("Couldn't acquire lock!");
      }

      ThreadCount--;
   }
};

int main() {
   // create a few threads to contend for access to the shared data
   CounterClass^ cc = gcnew CounterClass;
   array<Thread^>^ tarr = gcnew array<Thread^>(5);
   ThreadStart^ startDelegate = gcnew ThreadStart(cc, &CounterClass::UseCounter);
   for (int i = 0; i < tarr->Length; i++) {
      tarr[i] = gcnew Thread(startDelegate);
      cc->ThreadCount++;
      tarr[i]->Start();
   }

   // keep our main thread alive until all worker threads have completed
   lock l(cc, lock_later); // don't lock now, just create the object
   while (true) {
      if (l.try_acquire(50)) { // try to acquire lock, don't throw an exception if can't
         if (0 == cc->ThreadCount) {
            Console::WriteLine("All threads completed.");
            break; // all threads are gone, exit while
         }
         else {
            Console::WriteLine("{0} threads exist, continue waiting...", cc->ThreadCount);
            l.release(); // some threads exist, let them do their work
         }
      }
   }
}
```

```Output
In thread 3, Counter = 0
In thread 3, Counter = 10
In thread 5, Counter = 0
In thread 5, Counter = 10
In thread 7, Counter = 0
In thread 7, Counter = 10
In thread 4, Counter = 0
In thread 4, Counter = 10
In thread 6, Counter = 0
In thread 6, Counter = 10
All threads completed.
```

## <a name="requirements"></a>Requisiti

**File di intestazione** \<msclr\lock.h >

**Namespace** msclr

## <a name="see-also"></a>Vedere anche

[lock](../dotnet/lock.md)