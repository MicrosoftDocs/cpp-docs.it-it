---
title: lock::try_acquire | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- try_acquire
- lock.try_acquire
- msclr.lock.try_acquire
- lock::try_acquire
- msclr::lock::try_acquire
dev_langs:
- C++
helpviewer_keywords:
- lock::try_acquire
ms.assetid: ef0649a9-e611-4495-84bd-2784533221d9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: ce9e13e56728216c4a4b16246d4e99117199878c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46115957"
---
# <a name="locktryacquire"></a>lock::try_acquire
Acquisisce un blocco su un oggetto, in attesa di un intervallo di tempo specificato e restituisce un `bool` per segnalare l'esito positivo dell'acquisizione anziché generare un'eccezione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
bool try_acquire(  
   int _timeout_ms  
);  
bool try_acquire(  
   System::TimeSpan _timeout  
);  
```  
  
#### <a name="parameters"></a>Parametri  
*timeout*<br/>
Valore di timeout in millisecondi o come un <xref:System.TimeSpan>.  
  
## <a name="return-value"></a>Valore restituito  
 `true` Se il blocco è stato acquisito, `false` in caso contrario.  
  
## <a name="remarks"></a>Note  
 Se è già stato acquisito un blocco, questa funzione non esegue alcuna operazione.  
  
## <a name="example"></a>Esempio  
 Questo esempio Usa una singola istanza di una classe in più thread.  La classe Usa un blocco su se stesso per garantire la coerenza per ogni thread che accede ai propri dati interni.  Il thread principale dell'applicazione usa un blocco sulla stessa istanza della classe per controllare periodicamente per verificare se qualsiasi thread di lavoro continuano a esistere e attese per uscire dalla finché tutti thread di lavoro completate le attività.  
  
```  
// msl_lock_try_acquire.cpp  
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
 [Membri lock](../dotnet/lock-members.md)   
 [lock::acquire](../dotnet/lock-acquire.md)