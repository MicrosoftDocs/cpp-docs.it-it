---
title: "lock::operator bool | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "operator bool"
  - "msclr.lock.operator bool"
  - "lock.operator bool"
  - "msclr::lock::operator bool"
  - "lock::operator bool"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lock::operator bool"
ms.assetid: 007f0372-f812-4f1e-ba43-2584bd96eb11
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# lock::operator bool
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Operatore per utilizzare `lock` in un'espressione condizionale.  
  
## Sintassi  
  
```  
operator bool();  
```  
  
## Valore restituito  
 `true` se un blocco viene mantenuto, `false` in caso contrario.  
  
## Note  
 Questo operatore effettivamente converte in `_detail_class::_safe_bool` che è più sicuro di `bool` perché non può essere convertito in un tipo integrale.  
  
## Esempio  
 In questo esempio viene utilizzata una sola istanza di una classe in più thread.  La classe utilizza un blocco su se stesso per garantire che gli accessi ai dati interni siano consistenti per ogni thread.  Il thread principale dell'applicazione utilizza un blocco sulla stessa istanza della classe per controllare periodicamente se i thread di lavoro sono ancora presenti e attende di uscire finché tutti i thread di lavoro non hanno completato le attività.  
  
```  
// msl_lock_op_bool.cpp  
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
      l.try_acquire(50); // try to acquire lock, don't throw an exception if can't  
      if (l) { // use bool operator to check for lock  
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
  
  **Nel thread 3, Contatore \= 0**  
**Nel thread 3, Contatore \= 10**  
**Nel thread 5, Contatore \= 0**  
**Nel thread 5, Contatore \= 10**  
**Nel thread 7, Contatore \= 0**  
**Nel thread 7, Contatore \= 10**  
**Nel thread 4, Contatore \= 0**  
**Nel thread 4, Contatore \= 10**  
**Nel thread 6, Contatore \= 0**  
**Nel thread 6, Contatore \= 10**  
**Tutti i thread completati.**   
## Requisiti  
 **File di intestazione** \<msclr\\lock.h\>  
  
 **Spazio dei nomi** msclr  
  
## Vedere anche  
 [Membri lock](../dotnet/lock-members.md)   
 [lock::is\_locked](../dotnet/lock-is-locked.md)