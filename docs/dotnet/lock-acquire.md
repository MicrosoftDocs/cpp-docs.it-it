---
title: "lock::acquire | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "lock::acquire"
  - "acquire"
  - "msclr.lock.acquire"
  - "msclr::lock::acquire"
  - "lock.acquire"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "acquire (metodo)"
ms.assetid: c214274e-7519-4739-82aa-91b04a32d3f9
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# lock::acquire
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Acquisisce un blocco su un oggetto, facoltativamente di attesa per acquisire per sempre il blocco, per una quantità di tempo specificato, o per nothing.  
  
## Sintassi  
  
```  
void acquire();  
void acquire(  
   int _timeout  
);  
void acquire(  
   System::TimeSpan _timeout  
);  
```  
  
#### Parametri  
 `_timeout`  
 Valore di timeout in millisecondi o come <xref:System.TimeSpan>.  
  
## Eccezioni  
 Genera <xref:System.ApplicationException> se questo stato del blocco non si verifica prima del timeout.  
  
## Note  
 Se il valore di timeout non viene fornito, il timeout predefinito è <xref:System.Threading.Timeout.Infinite>.  
  
 Se un blocco si è già acquisita, questa funzione non esegue alcuna operazione.  
  
## Esempio  
 In questo esempio viene utilizzata una sola istanza di una classe in più thread.  La classe utilizza un blocco stesso per garantire che accede ai dati interni siano utilizzate per ogni thread.  Il thread principale dell'applicazione viene utilizzato un blocco sulla stessa istanza della classe per controllare periodicamente per verificare se i thread di lavoro sono ancora presenti e attende per uscire da finché tutti i thread di lavoro non ha completato le attività.  
  
```  
// msl_lock_acquire.cpp  
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
  
  **In thread 3, contatore \= 0**  
**In thread 3, contatore \= 10**  
**In thread 5, contatore \= 0**  
**In thread 5, contatore \= 10**  
**In thread 7, contatore \= 0**  
**In thread 7, contatore \= 10**  
**In thread 4, contatore \= 0**  
**In thread 4, contatore \= 10**  
**In thread 6, contatore \= 0**  
**In thread 6, contatore \= 10**  
**Tutti i thread completati.**   
## Requisiti  
 msclr \<\\ lock.h di**File di intestazione** \>  
  
 msclr di**Spazio dei nomi**  
  
## Vedere anche  
 [Membri lock](../dotnet/lock-members.md)   
 [lock::try\_acquire](../dotnet/lock-try-acquire.md)