---
title: Enumerazione lock_when
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- msclr::lock_when
- msclr.lock_when
- lock_when
helpviewer_keywords:
- lock_when enum
ms.assetid: 6b87bbe9-63cd-450d-a02e-bb91ffd0dcea
ms.openlocfilehash: af4e4472a33ef3d083f54da74e306562af1867a1
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988117"
---
# <a name="lock_when-enum"></a>Enumerazione lock_when

Specifica il blocco posticipato.

## <a name="syntax"></a>Sintassi

```
enum lock_when {
   lock_later
};
```

## <a name="remarks"></a>Note

Quando viene passato a [Lock:: Lock](../dotnet/lock-lock.md), `lock_later` specifica che il blocco non deve essere riassunto.

## <a name="example"></a>Esempio

In questo esempio viene usata una singola istanza di una classe in più thread.  La classe utilizza un blocco su se stesso per assicurarsi che gli accessi ai relativi dati interni siano coerenti per ogni thread.  Il thread dell'applicazione principale usa un blocco sulla stessa istanza della classe per controllare periodicamente se sono ancora presenti thread di lavoro e attende di uscire finché tutti i thread di lavoro non hanno completato le attività.

```cpp
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

## <a name="requirements"></a>Requisiti di

**File di intestazione** \<msclr\lock.h >

**Spazio dei nomi** msclr

## <a name="see-also"></a>Vedere anche

[lock](../dotnet/lock.md)
