---
title: Classe lock
ms.date: 01/16/2019
ms.topic: reference
f1_keywords:
- msclr::lock::lock
- msclr::lock::is_locked
- msclr::lock.is_locked
- msclr::lock::acquire
- msclr::lock::try_acquire
- msclr::lock::release
- msclr::lock::operator==
- msclr::lock::operator!=
helpviewer_keywords:
- msclr::lock class
ms.assetid: 5123edd9-6aed-497d-9a0b-f4b6d6c0d666
ms.openlocfilehash: b2ae1be31233e55aa34d6f3046d90fb2127348c0
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80080038"
---
# <a name="lock-class"></a>Classe lock

Questa classe automatizza l'acquisizione di un blocco per la sincronizzazione dell'accesso a un oggetto da più thread.  Quando viene costruito, acquisisce il blocco e, quando viene eliminato, rilascia il blocco.

## <a name="syntax"></a>Sintassi

```cpp
ref class lock;
```

## <a name="remarks"></a>Osservazioni

`lock` è disponibile solo per gli oggetti CLR e può essere utilizzato solo nel codice CLR.

Internamente, la classe Lock USA <xref:System.Threading.Monitor> per sincronizzare l'accesso. Per ulteriori informazioni, vedere l'articolo di riferimento.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|---------|-----------|
|[lock::lock](#lock)|Costruisce un oggetto `lock`, facoltativamente in attesa di acquisire il blocco per sempre, per un periodo di tempo specificato o non per tutti.|
|[lock::~lock](#tilde-lock)|Distrugge un oggetto `lock`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|---------|-----------|
|[lock::acquire](#acquire)|Acquisisce un blocco su un oggetto, facoltativamente in attesa di acquisire il blocco per sempre, per un periodo di tempo specificato o non per tutti.|
|[lock::is_locked](#is-locked)|Indica se viene mantenuto un blocco.|
|[lock::release](#release)|Rilascia un blocco.|
|[lock::try_acquire](#try-acquire)|Acquisisce un blocco su un oggetto, in attesa del periodo di tempo specificato e restituisce un `bool` per segnalare la riuscita dell'acquisizione anziché generare un'eccezione.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|---------|-----------|
|[operatore Lock:: operator&nbsp;bool](#operator-bool)|Operatore per l'utilizzo di `lock` in un'espressione condizionale.|
|[lock::operator==](#operator-equality)|Operatore di uguaglianza.|
|[lock::operator!=](#operator-inequality)|Operatore di disuguaglianza.|

## <a name="requirements"></a>Requisiti

**File di intestazione** \<msclr\lock.h >

**Spazio dei nomi** msclr

## <a name="locklock"></a><a name="lock"></a>Lock:: Lock

Costruisce un oggetto `lock`, facoltativamente in attesa di acquisire il blocco per sempre, per un periodo di tempo specificato o non per tutti.

```cpp
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

### <a name="parameters"></a>Parametri

*_object*<br/>
Oggetto da bloccare.

*_timeout*<br/>
Valore di timeout in millisecondi o come <xref:System.TimeSpan>.

### <a name="exceptions"></a>Eccezioni

Genera <xref:System.ApplicationException> se l'acquisizione del blocco non viene eseguita prima del timeout.

### <a name="remarks"></a>Osservazioni

Le prime tre forme del costruttore tentano di acquisire un blocco in `_object` entro il periodo di timeout specificato (oppure <xref:System.Threading.Timeout.Infinite> se non ne viene specificato nessuno).

Il quarto form del costruttore non acquisisce un blocco su `_object`. `lock_later` è un membro dell' [enumerazione lock_when](../dotnet/lock-when-enum.md). Utilizzare [Lock:: Acquire](../dotnet/lock-acquire.md) o [lock:: try_acquire](../dotnet/lock-try-acquire.md) per acquisire il blocco in questo caso.

Il blocco verrà rilasciato automaticamente quando viene chiamato il distruttore.

non è possibile <xref:System.Threading.ReaderWriterLock>`_object`.  In caso contrario, verrà generato un errore del compilatore.

### <a name="example"></a>Esempio

In questo esempio viene usata una singola istanza di una classe tra più thread. La classe utilizza un blocco su se stesso per assicurarsi che gli accessi ai relativi dati interni siano coerenti per ogni thread. Il thread dell'applicazione principale usa un blocco sulla stessa istanza della classe per controllare periodicamente se sono ancora presenti thread di lavoro. L'applicazione principale attende quindi di uscire fino a quando tutti i thread di lavoro non hanno completato le attività.

```cpp
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

## <a name="locklock"></a><a name="tilde-lock"></a>Lock:: ~ Lock

Distrugge un oggetto `lock`.

```cpp
~lock();
```

### <a name="remarks"></a>Osservazioni

Il distruttore chiama [Lock:: Release](../dotnet/lock-release.md).

### <a name="example"></a>Esempio

In questo esempio viene usata una singola istanza di una classe tra più thread.  La classe utilizza un blocco su se stesso per assicurarsi che gli accessi ai relativi dati interni siano coerenti per ogni thread.  Il thread dell'applicazione principale usa un blocco sulla stessa istanza della classe per controllare periodicamente se sono ancora presenti thread di lavoro. L'applicazione principale attende quindi di uscire fino a quando tutti i thread di lavoro non hanno completato le attività.

```cpp
// msl_lock_dtor.cpp
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

## <a name="lockacquire"></a><a name="acquire"></a>Lock:: Acquire

Acquisisce un blocco su un oggetto, facoltativamente in attesa di acquisire il blocco per sempre, per un periodo di tempo specificato o non per tutti.

```cpp
void acquire();
void acquire(
   int _timeout
);
void acquire(
   System::TimeSpan _timeout
);
```

### <a name="parameters"></a>Parametri

*_timeout*<br/>
Valore di timeout in millisecondi o come <xref:System.TimeSpan>.

### <a name="exceptions"></a>Eccezioni

Genera <xref:System.ApplicationException> se l'acquisizione del blocco non viene eseguita prima del timeout.

### <a name="remarks"></a>Osservazioni

Se non viene specificato un valore di timeout, viene <xref:System.Threading.Timeout.Infinite>il timeout predefinito.

Se è già stato acquisito un blocco, questa funzione non esegue alcuna operazione.

### <a name="example"></a>Esempio

In questo esempio viene usata una singola istanza di una classe tra più thread.  La classe utilizza un blocco su se stesso per assicurarsi che gli accessi ai relativi dati interni siano coerenti per ogni thread. Il thread dell'applicazione principale usa un blocco sulla stessa istanza della classe per controllare periodicamente se sono ancora presenti thread di lavoro. L'applicazione principale attende quindi di uscire fino a quando tutti i thread di lavoro non hanno completato le attività.

```cpp
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

## <a name="lockis_locked"></a><a name="is-locked"></a>Lock:: is_locked

Indica se viene mantenuto un blocco.

```cpp
bool is_locked();
```

### <a name="return-value"></a>Valore restituito

`true` se viene mantenuto un blocco, `false` in caso contrario.

### <a name="example"></a>Esempio

In questo esempio viene usata una singola istanza di una classe tra più thread.  La classe utilizza un blocco su se stesso per assicurarsi che gli accessi ai relativi dati interni siano coerenti per ogni thread.  Il thread dell'applicazione principale usa un blocco sulla stessa istanza della classe per controllare periodicamente se sono ancora presenti thread di lavoro e attende di uscire finché tutti i thread di lavoro non hanno completato le attività.

```cpp
// msl_lock_is_locked.cpp
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
      if (l.is_locked()) { // check if we got the lock
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
In thread 4, Counter = 0
In thread 4, Counter = 10
In thread 7, Counter = 0
In thread 7, Counter = 10
In thread 6, Counter = 0
In thread 6, Counter = 10
All threads completed.
```

## <a name="lockoperator-bool"></a><a name="operator-bool"></a>Lock:: operator bool

Operatore per l'utilizzo di `lock` in un'espressione condizionale.

```cpp
operator bool();
```

### <a name="return-value"></a>Valore restituito

`true` se viene mantenuto un blocco, `false` in caso contrario.

### <a name="remarks"></a>Osservazioni

Questo operatore esegue la conversione in `_detail_class::_safe_bool` che è più sicuro di `bool` perché non può essere convertito in un tipo integrale.

### <a name="example"></a>Esempio

In questo esempio viene usata una singola istanza di una classe tra più thread.  La classe utilizza un blocco su se stesso per assicurarsi che gli accessi ai relativi dati interni siano coerenti per ogni thread. Il thread dell'applicazione principale usa un blocco sulla stessa istanza della classe per controllare periodicamente se sono ancora presenti thread di lavoro. L'applicazione principale attende la chiusura fino a quando tutti i thread di lavoro non hanno completato le attività.

```cpp
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

## <a name="lockrelease"></a><a name="release"></a>Lock:: Release

Rilascia un blocco.

```cpp
void release();
```

### <a name="remarks"></a>Osservazioni

Se non viene mantenuto alcun blocco, `release` non esegue alcuna operazione.

Non è necessario chiamare questa funzione in modo esplicito. Quando un oggetto `lock` esce dall'ambito, il distruttore chiama `release`.

### <a name="example"></a>Esempio

In questo esempio viene usata una singola istanza di una classe tra più thread. La classe utilizza un blocco su se stesso per assicurarsi che gli accessi ai relativi dati interni siano coerenti per ogni thread. Il thread dell'applicazione principale usa un blocco sulla stessa istanza della classe per controllare periodicamente se sono ancora presenti thread di lavoro. L'applicazione principale attende quindi di uscire fino a quando tutti i thread di lavoro non hanno completato le attività.

```cpp
// msl_lock_release.cpp
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

## <a name="locktry_acquire"></a><a name="try-acquire"></a>Lock:: try_acquire

Acquisisce un blocco su un oggetto, in attesa del periodo di tempo specificato e restituisce un `bool` per segnalare la riuscita dell'acquisizione anziché generare un'eccezione.

```cpp
bool try_acquire(
   int _timeout_ms
);
bool try_acquire(
   System::TimeSpan _timeout
);
```

### <a name="parameters"></a>Parametri

*_timeout*<br/>
Valore di timeout in millisecondi o come <xref:System.TimeSpan>.

### <a name="return-value"></a>Valore restituito

`true` se è stato acquisito il blocco, `false` in caso contrario.

### <a name="remarks"></a>Osservazioni

Se è già stato acquisito un blocco, questa funzione non esegue alcuna operazione.

### <a name="example"></a>Esempio

In questo esempio viene usata una singola istanza di una classe tra più thread. La classe utilizza un blocco su se stesso per assicurarsi che gli accessi ai relativi dati interni siano coerenti per ogni thread. Il thread dell'applicazione principale usa un blocco sulla stessa istanza della classe per controllare periodicamente se sono ancora presenti thread di lavoro. L'applicazione principale attende quindi di uscire fino a quando tutti i thread di lavoro non hanno completato le attività.

```cpp
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

## <a name="lockoperator"></a><a name="operator-equality"></a>Lock:: operator = =

Operatore di uguaglianza.

```cpp
template<class T> bool operator==(
   T t
);
```

### <a name="parameters"></a>Parametri

*t*<br/>
Oggetto da confrontare per l'uguaglianza.

### <a name="return-value"></a>Valore restituito

Restituisce `true` se `t` è uguale all'oggetto del blocco, `false` in caso contrario.

### <a name="example"></a>Esempio

```cpp
// msl_lock_op_eq.cpp
// compile with: /clr
#include <msclr/lock.h>

using namespace System;
using namespace System::Threading;
using namespace msclr;

int main () {
   Object^ o1 = gcnew Object;
   lock l1(o1);
   if (l1 == o1) {
      Console::WriteLine("Equal!");
   }
}
```

```Output
Equal!
```

## <a name="lockoperator"></a><a name="operator-inequality"></a>Lock:: operator! =

Operatore di disuguaglianza.

```cpp
template<class T> bool operator!=(
   T t
);
```

### <a name="parameters"></a>Parametri

*t*<br/>
Oggetto da confrontare per verificarne la disuguaglianza.

### <a name="return-value"></a>Valore restituito

Restituisce `true` se `t` è diverso dall'oggetto del blocco, `false` in caso contrario.

### <a name="example"></a>Esempio

```cpp
// msl_lock_op_ineq.cpp
// compile with: /clr
#include <msclr/lock.h>

using namespace System;
using namespace System::Threading;
using namespace msclr;

int main () {
   Object^ o1 = gcnew Object;
   Object^ o2 = gcnew Object;
   lock l1(o1);
   if (l1 != o2) {
      Console::WriteLine("Inequal!");
   }
}
```

```Output
Inequal!
```