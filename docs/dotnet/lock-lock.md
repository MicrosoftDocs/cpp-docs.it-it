---
title: lock::lock | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- lock::lock
- lock.lock
- msclr.lock.lock
- msclr::lock::lock
dev_langs:
- C++
helpviewer_keywords:
- lock constructor
ms.assetid: c9ad6c71-36ec-49c5-8ebd-f5c3a0cc94f0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: df35eed8711e83174316ac9912f7ba535ef9ebf9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33135027"
---
# <a name="locklock"></a>lock::lock
Costruisce un `lock` oggetto, facoltativamente in attesa di acquisire il blocco continuo, per un determinato periodo di tempo o affatto.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class T> lock(  
   T ^ _object  
);  
template<class T> lock(  
   T ^ _object,  
   int _timeout  
);  
template<class T> lock(  
   T ^ _object,  
   System::TimeSpan _timeout  
);  
template<class T> lock(  
   T ^ _object,  
   lock_later  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `_object`  
 Oggetto da bloccare.  
  
 `_timeout`  
 Valore di timeout in millisecondi o come un <xref:System.TimeSpan>.  
  
## <a name="exceptions"></a>Eccezioni  
 Genera <xref:System.ApplicationException> se l'acquisizione del blocco non viene eseguito prima del timeout.  
  
## <a name="remarks"></a>Note  
 I primi tre form del costruttore tentano di acquisire un blocco su `_object` entro il periodo di timeout specificato (o <xref:System.Threading.Timeout.Infinite> se non è specificato).  
  
 Il quarto form del costruttore non di acquisire un blocco su `_object`. `lock_later` è un membro del [enumerazione lock_when](../dotnet/lock-when-enum.md). Utilizzare [lock::acquire](../dotnet/lock-acquire.md) o [lock::try_acquire](../dotnet/lock-try-acquire.md) di acquisire il blocco in questo caso.  
  
 Il blocco verrà rilasciato automaticamente quando viene chiamato il distruttore.  
  
 Il parametro `_object` non può essere <xref:System.Threading.ReaderWriterLock>.  Questo caso, si verificherà un errore del compilatore.  
  
## <a name="example"></a>Esempio  
 Questo esempio Usa una singola istanza di una classe su più thread.  Per verificare che gli accessi ai dati interni siano coerenti per ogni thread, la classe Usa un blocco su se stesso.  Il thread principale dell'applicazione utilizza un blocco sulla stessa istanza della classe per controllare periodicamente per vedere se un thread di lavoro continuano a esistere e attese per uscire dall'installazione fino a quando tutti i thread di lavoro completamento delle attività.  
  
```  
// msl_lock_lock.cpp  
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
 [blocco:: ~ blocco](../dotnet/lock-tilde-lock.md)   
 [lock::acquire](../dotnet/lock-acquire.md)   
 [lock::try_acquire](../dotnet/lock-try-acquire.md)