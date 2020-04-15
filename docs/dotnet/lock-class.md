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
ms.openlocfilehash: ea09dd3d4a2eaf4cf7708d09509cfecfa4a6c6d5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373072"
---
# <a name="lock-class"></a>Classe lock

Questa classe automatizza l'assunzione di un blocco per la sincronizzazione dell'accesso a un oggetto da più thread.  Quando costruito acquisisce la serratura e quando viene distrutta rilascia la serratura.

## <a name="syntax"></a>Sintassi

```cpp
ref class lock;
```

## <a name="remarks"></a>Osservazioni

`lock`è disponibile solo per gli oggetti CLR e può essere utilizzato solo nel codice CLR.

Internamente, la classe <xref:System.Threading.Monitor> lock utilizza per sincronizzare l'accesso. Per altre informazioni, vedere l'articolo di riferimento.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|---------|-----------|
|[lock::lock](#lock)|Costruisce un `lock` oggetto, facoltativamente in attesa di acquisire il blocco per sempre, per un periodo di tempo specificato o per niente.|
|[lock::](#tilde-lock)|Distrugge un `lock` oggetto.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|---------|-----------|
|[lock::acquire](#acquire)|Acquisisce un blocco su un oggetto, facoltativamente in attesa di acquisire il blocco per sempre, per un periodo di tempo specificato o per niente.|
|[lock::is_locked](#is-locked)|Indica se viene mantenuto un blocco.|
|[lock::release](#release)|Rilascia un blocco.|
|[lock::try_acquire](#try-acquire)|Acquisisce un blocco su un oggetto, in attesa di `bool` un periodo di tempo specificato e restituendo un per segnalare l'esito positivo dell'acquisizione anziché generare un'eccezione.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|---------|-----------|
|[lock::operator&nbsp;bool](#operator-bool)|Operatore `lock` per l'utilizzo in un'espressione condizionale.|
|[lock::operator==](#operator-equality)|Operatore di uguaglianza.|
|[lock::operator!](#operator-inequality)|Operatore di disuguaglianza.|

## <a name="requirements"></a>Requisiti

File di **intestazione** \<msclr-lock.h>

**Spazio dei nomi msclrNamespace** msclr

## <a name="locklock"></a><a name="lock"></a>blocco::blocco

Costruisce un `lock` oggetto, facoltativamente in attesa di acquisire il blocco per sempre, per un periodo di tempo specificato o per niente.

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
Oggetto da bloccato.

*_timeout*<br/>
Valore di timeout in millisecondi o come <xref:System.TimeSpan>file .

### <a name="exceptions"></a>Eccezioni

Genera <xref:System.ApplicationException> un'eccezione se l'acquisizione del blocco non si verifica prima del timeout.

### <a name="remarks"></a>Osservazioni

Le prime tre forme del costruttore `_object` tentano di acquisire <xref:System.Threading.Timeout.Infinite> un blocco entro il periodo di timeout specificato (o se non ne è stata specificata alcuna).

La quarta forma del costruttore non `_object`acquisisce un blocco su . `lock_later`è un membro [dell'enumerazione lock_when](../dotnet/lock-when-enum.md). Utilizzare [lock::acquire](../dotnet/lock-acquire.md) o [lock::try_acquire](../dotnet/lock-try-acquire.md) per acquisire il blocco in questo caso.

Il blocco verrà rilasciato automaticamente quando viene chiamato il distruttore.

`_object`non può <xref:System.Threading.ReaderWriterLock>essere .  In caso affermativo, verrà generato un errore del compilatore.

### <a name="example"></a>Esempio

In questo esempio viene utilizzata una singola istanza di una classe in più thread. La classe utilizza un blocco su se stessa per assicurarsi che gli accessi ai dati interni siano coerenti per ogni thread. Il thread principale dell'applicazione utilizza un blocco sulla stessa istanza della classe per verificare periodicamente se esistono ancora thread di lavoro. L'applicazione principale attende quindi di uscire fino a quando tutti i thread di lavoro hanno completato le attività.

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

## <a name="locklock"></a><a name="tilde-lock"></a>lock::

Distrugge un `lock` oggetto.

```cpp
~lock();
```

### <a name="remarks"></a>Osservazioni

Il distruttore chiama [lock::release](../dotnet/lock-release.md).

### <a name="example"></a>Esempio

In questo esempio viene utilizzata una singola istanza di una classe in più thread.  La classe utilizza un blocco su se stessa per assicurarsi che gli accessi ai dati interni siano coerenti per ogni thread.  Il thread principale dell'applicazione utilizza un blocco sulla stessa istanza della classe per verificare periodicamente se esistono ancora thread di lavoro. L'applicazione principale attende quindi di uscire fino a quando tutti i thread di lavoro hanno completato le attività.

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

## <a name="lockacquire"></a><a name="acquire"></a>blocco::acquisire

Acquisisce un blocco su un oggetto, facoltativamente in attesa di acquisire il blocco per sempre, per un periodo di tempo specificato o per niente.

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
Valore di timeout in <xref:System.TimeSpan>millisecondi o come file .

### <a name="exceptions"></a>Eccezioni

Genera <xref:System.ApplicationException> un'eccezione se l'acquisizione del blocco non si verifica prima del timeout.

### <a name="remarks"></a>Osservazioni

Se non viene fornito un valore di <xref:System.Threading.Timeout.Infinite>timeout, il timeout predefinito è .

Se un blocco è già stato acquisito, questa funzione non esegue alcuna operazione.

### <a name="example"></a>Esempio

In questo esempio viene utilizzata una singola istanza di una classe in più thread.  La classe utilizza un blocco su se stessa per assicurarsi che gli accessi ai dati interni siano coerenti per ogni thread. Il thread principale dell'applicazione utilizza un blocco sulla stessa istanza della classe per verificare periodicamente se esistono ancora thread di lavoro. L'applicazione principale attende quindi di uscire fino a quando tutti i thread di lavoro hanno completato le attività.

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

## <a name="lockis_locked"></a><a name="is-locked"></a>blocco::is_locked

Indica se viene mantenuto un blocco.

```cpp
bool is_locked();
```

### <a name="return-value"></a>Valore restituito

`true`se viene mantenuto `false` un blocco, in caso contrario.

### <a name="example"></a>Esempio

In questo esempio viene utilizzata una singola istanza di una classe in più thread.  La classe utilizza un blocco su se stessa per assicurarsi che gli accessi ai dati interni siano coerenti per ogni thread.  Il thread principale dell'applicazione utilizza un blocco sulla stessa istanza della classe per verificare periodicamente se esistono ancora thread di lavoro e attende di uscire fino a quando tutti i thread di lavoro hanno completato le attività.

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

## <a name="lockoperator-bool"></a><a name="operator-bool"></a>lock::operator bool

Operatore `lock` per l'utilizzo in un'espressione condizionale.

```cpp
operator bool();
```

### <a name="return-value"></a>Valore restituito

`true`se viene mantenuto `false` un blocco, in caso contrario.

### <a name="remarks"></a>Osservazioni

Questo operatore converte `_detail_class::_safe_bool` effettivamente `bool` in cui è più sicuro che perché non può essere convertito in un tipo integrale.

### <a name="example"></a>Esempio

In questo esempio viene utilizzata una singola istanza di una classe in più thread.  La classe utilizza un blocco su se stessa per assicurarsi che gli accessi ai dati interni siano coerenti per ogni thread. Il thread principale dell'applicazione utilizza un blocco sulla stessa istanza della classe per verificare periodicamente se esistono ancora thread di lavoro. L'applicazione principale attende di uscire fino a quando tutti i thread di lavoro hanno completato le attività.

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

## <a name="lockrelease"></a><a name="release"></a>blocco::rilascio

Rilascia un blocco.

```cpp
void release();
```

### <a name="remarks"></a>Osservazioni

Se non viene tenuta `release` alcunblocco, non fa nulla.

Non è necessario chiamare questa funzione in modo esplicito. Quando `lock` un oggetto esce dall'ambito, `release`il relativo distruttore chiama .

### <a name="example"></a>Esempio

In questo esempio viene utilizzata una singola istanza di una classe in più thread. La classe utilizza un blocco su se stessa per assicurarsi che gli accessi ai dati interni siano coerenti per ogni thread. Il thread principale dell'applicazione utilizza un blocco sulla stessa istanza della classe per verificare periodicamente se esistono ancora thread di lavoro. L'applicazione principale attende quindi di uscire fino a quando tutti i thread di lavoro hanno completato le attività.

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

## <a name="locktry_acquire"></a><a name="try-acquire"></a>blocco::try_acquire

Acquisisce un blocco su un oggetto, in attesa di `bool` un periodo di tempo specificato e restituendo un per segnalare l'esito positivo dell'acquisizione anziché generare un'eccezione.

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
Valore di timeout in <xref:System.TimeSpan>millisecondi o come file .

### <a name="return-value"></a>Valore restituito

`true`se il blocco `false` è stato acquisito, in caso contrario.

### <a name="remarks"></a>Osservazioni

Se un blocco è già stato acquisito, questa funzione non esegue alcuna operazione.

### <a name="example"></a>Esempio

In questo esempio viene utilizzata una singola istanza di una classe in più thread. La classe utilizza un blocco su se stessa per assicurarsi che gli accessi ai dati interni siano coerenti per ogni thread. Il thread principale dell'applicazione utilizza un blocco sulla stessa istanza della classe per verificare periodicamente se esistono ancora thread di lavoro. L'applicazione principale attende quindi di uscire fino a quando tutti i thread di lavoro hanno completato le attività.

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

## <a name="lockoperator"></a><a name="operator-equality"></a>lock::operator

Operatore di uguaglianza.

```cpp
template<class T> bool operator==(
   T t
);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Oggetto da confrontare per l'uguaglianza.

### <a name="return-value"></a>Valore restituito

In `true` `t` caso contrario, `false` restituisce se è uguale all'oggetto del blocco.

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

## <a name="lockoperator"></a><a name="operator-inequality"></a>lock::operator!

Operatore di disuguaglianza.

```cpp
template<class T> bool operator!=(
   T t
);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Oggetto da confrontare per la disuguaglianza.

### <a name="return-value"></a>Valore restituito

`true` Restituisce `t` se è diverso dall'oggetto del blocco, `false` in caso contrario.

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
