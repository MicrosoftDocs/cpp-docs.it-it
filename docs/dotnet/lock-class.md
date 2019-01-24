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
ms.openlocfilehash: 43418da36aa2d87608a9d672e4345d24011be0b3
ms.sourcegitcommit: 9813e146a4eb30929d8352872859e8fcb7ff6d2f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/23/2019
ms.locfileid: "54805955"
---
# <a name="lock-class"></a>Classe lock

Questa classe consente di automatizzare l'acquisizione di un blocco per la sincronizzazione dell'accesso a un oggetto da thread diversi.  Quando viene costruito viene acquisito il blocco e quando viene eliminato rilasci il blocco.

## <a name="syntax"></a>Sintassi

```cpp
ref class lock;
```

## <a name="remarks"></a>Note

`lock` è disponibile solo per gli oggetti CLR e può essere usato solo nel codice CLR.

Internamente, la classe Usa blocco <xref:System.Threading.Monitor> per sincronizzare l'accesso. Per altre informazioni, vedere l'articolo di riferimento.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|nome|Descrizione|
|---------|-----------|
|[lock::lock](#lock)|Costruisce un `lock` oggetto, facoltativamente in attesa di acquisire il blocco per sempre, per un determinato periodo di tempo o niente affatto.|
|[lock::~lock](#tilde-lock)|Distrugge un `lock` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|nome|Descrizione|
|---------|-----------|
|[lock::acquire](#acquire)|Acquisisce un blocco su un oggetto, facoltativamente in attesa di acquisire il blocco per sempre, per un determinato periodo di tempo o niente affatto.|
|[lock::is_locked](#is-locked)|Indica se un blocco mantenuto.|
|[lock::release](#release)|Rilascia un blocco.|
|[lock::try_acquire](#try-acquire)|Acquisisce un blocco su un oggetto, in attesa di un intervallo di tempo specificato e restituisce un `bool` per segnalare l'esito positivo dell'acquisizione anziché generare un'eccezione.|

### <a name="public-operators"></a>Operatori pubblici

|nome|Descrizione|
|---------|-----------|
|[lock::operator&nbsp;bool](#operator-bool)|Operatore per l'uso di `lock` in un'espressione condizionale.|
|[lock::operator==](#operator-equality)|Operatore di uguaglianza.|
|[lock::operator!=](#operator-inequality)|Operatore di disuguaglianza.|

## <a name="requirements"></a>Requisiti

**File di intestazione** \<msclr\lock.h >

**Namespace** msclr



## <a name="lock"></a>lock::lock

Costruisce un `lock` oggetto, facoltativamente in attesa di acquisire il blocco per sempre, per un determinato periodo di tempo o niente affatto.

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
Valore di timeout in millisecondi o come un <xref:System.TimeSpan>.

### <a name="exceptions"></a>Eccezioni

Genera un'eccezione <xref:System.ApplicationException> se l'acquisizione del blocco non si verifica prima del timeout.

### <a name="remarks"></a>Note

I primi tre form del costruttore provano ad acquisire un blocco sul `_object` entro il periodo di timeout specificato (o <xref:System.Threading.Timeout.Infinite> se non è specificato).

Il quarto form del costruttore non acquisire un blocco su `_object`. `lock_later` è un membro del [lock_when (enumerazione)](../dotnet/lock-when-enum.md). Uso [lock::acquire](../dotnet/lock-acquire.md) oppure [lock::try_acquire](../dotnet/lock-try-acquire.md) per acquisire il blocco in questo caso.

Il blocco verrà rilasciato automaticamente quando viene chiamato il distruttore.

`_object` non può essere <xref:System.Threading.ReaderWriterLock>.  Se si tratta, si verificherà un errore del compilatore.

### <a name="example"></a>Esempio

Questo esempio Usa una singola istanza di una classe tra diversi thread. La classe Usa un blocco su se stesso per assicurarsi che gli accessi ai propri dati interni sono coerenti per ogni thread. Il thread principale dell'applicazione usa un blocco sulla stessa istanza della classe per controllare periodicamente per verificare se esistono ancora qualsiasi thread di lavoro. Quindi l'applicazione principale attende fino al completamento delle attività tutti i thread di lavoro.

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

## <a name="tilde-lock"></a>blocco:: ~ lock

Distrugge un `lock` oggetto.

```cpp
~lock();
```

### <a name="remarks"></a>Note

Le chiamate del distruttore [lock::release](../dotnet/lock-release.md).

### <a name="example"></a>Esempio

Questo esempio Usa una singola istanza di una classe tra diversi thread.  La classe Usa un blocco su se stesso per assicurarsi che gli accessi ai propri dati interni sono coerenti per ogni thread.  Il thread principale dell'applicazione usa un blocco sulla stessa istanza della classe per controllare periodicamente per verificare se esistono ancora qualsiasi thread di lavoro. Quindi l'applicazione principale attende fino al completamento delle attività tutti i thread di lavoro.

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

## <a name="acquire"></a>lock::acquire

Acquisisce un blocco su un oggetto, facoltativamente in attesa di acquisire il blocco per sempre, per un determinato periodo di tempo o niente affatto.

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
Valore di timeout in millisecondi o come un <xref:System.TimeSpan>.

### <a name="exceptions"></a>Eccezioni

Genera un'eccezione <xref:System.ApplicationException> se l'acquisizione del blocco non si verifica prima del timeout.

### <a name="remarks"></a>Note

Se non viene specificato un valore di timeout, il timeout predefinito è <xref:System.Threading.Timeout.Infinite>.

Se è già stato acquisito un blocco, questa funzione non esegue alcuna operazione.

### <a name="example"></a>Esempio

Questo esempio Usa una singola istanza di una classe tra diversi thread.  La classe Usa un blocco su se stesso per assicurarsi che gli accessi ai propri dati interni sono coerenti per ogni thread. Il thread principale dell'applicazione usa un blocco sulla stessa istanza della classe per controllare periodicamente per verificare se esistono ancora qualsiasi thread di lavoro. Quindi l'applicazione principale attende fino al completamento delle attività tutti i thread di lavoro.

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

## <a name="is-locked"></a>lock::is_locked

Indica se un blocco mantenuto.

```cpp
bool is_locked();
```

### <a name="return-value"></a>Valore restituito

`true` Se un blocco viene mantenuto, `false` in caso contrario.

### <a name="example"></a>Esempio

Questo esempio Usa una singola istanza di una classe tra diversi thread.  La classe Usa un blocco su se stesso per assicurarsi che gli accessi ai propri dati interni sono coerenti per ogni thread.  Il thread principale dell'applicazione usa un blocco sulla stessa istanza della classe per controllare periodicamente per verificare se qualsiasi thread di lavoro continuano a esistere e attese per uscire dalla finché tutti thread di lavoro completate le attività.

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

## <a name="operator-bool"></a>lock::operator bool

Operatore per l'uso di `lock` in un'espressione condizionale.

```cpp
operator bool();
```

### <a name="return-value"></a>Valore restituito

`true` Se un blocco viene mantenuto, `false` in caso contrario.

### <a name="remarks"></a>Note

Questo operatore converte effettivamente `_detail_class::_safe_bool` che è più sicuro di `bool` perché non può essere convertito in un tipo integrale.

### <a name="example"></a>Esempio

Questo esempio Usa una singola istanza di una classe tra diversi thread.  La classe Usa un blocco su se stesso per assicurarsi che gli accessi ai propri dati interni sono coerenti per ogni thread. Il thread principale dell'applicazione usa un blocco sulla stessa istanza della classe per controllare periodicamente per verificare se esistono ancora qualsiasi thread di lavoro. L'applicazione principale attende fino al completamento delle attività tutti i thread di lavoro.

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

## <a name="release"></a>lock::Release

Rilascia un blocco.

```cpp
void release();
```

### <a name="remarks"></a>Note

Se nessun blocco mantenuto, `release` non esegue alcuna operazione.

Non è necessario chiamare questa funzione in modo esplicito. Quando un `lock` oggetto esce dall'ambito, le chiamate di distruttore `release`.

### <a name="example"></a>Esempio

Questo esempio Usa una singola istanza di una classe tra diversi thread. La classe Usa un blocco su se stesso per assicurarsi che gli accessi ai propri dati interni sono coerenti per ogni thread. Il thread principale dell'applicazione usa un blocco sulla stessa istanza della classe per controllare periodicamente per verificare se esistono ancora qualsiasi thread di lavoro. Quindi l'applicazione principale attende fino al completamento delle attività tutti i thread di lavoro.

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

## <a name="try-acquire"></a>lock::try_acquire

Acquisisce un blocco su un oggetto, in attesa di un intervallo di tempo specificato e restituisce un `bool` per segnalare l'esito positivo dell'acquisizione anziché generare un'eccezione.

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
Valore di timeout in millisecondi o come un <xref:System.TimeSpan>.

### <a name="return-value"></a>Valore restituito

`true` Se il blocco è stato acquisito, `false` in caso contrario.

### <a name="remarks"></a>Note

Se è già stato acquisito un blocco, questa funzione non esegue alcuna operazione.

### <a name="example"></a>Esempio

Questo esempio Usa una singola istanza di una classe tra diversi thread. La classe Usa un blocco su se stesso per assicurarsi che gli accessi ai propri dati interni sono coerenti per ogni thread. Il thread principale dell'applicazione usa un blocco sulla stessa istanza della classe per controllare periodicamente per verificare se esistono ancora qualsiasi thread di lavoro. Quindi l'applicazione principale attende fino al completamento delle attività tutti i thread di lavoro.

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

## <a name="operator-equality"></a>lock::operator==

Operatore di uguaglianza.

```cpp
template<class T> bool operator==(
   T t
);
```

### <a name="parameters"></a>Parametri

*t*<br/>
Oggetto da confrontare per verificarne l'uguaglianza.

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

## <a name="operator-inequality"></a>lock::operator!=

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