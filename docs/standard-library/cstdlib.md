---
title: '&lt;cstdlib&gt;'
ms.date: 11/04/2016
f1_keywords:
- <cstdlib>
helpviewer_keywords:
- cstdlib header
ms.assetid: 0a6aaebf-84e9-4b60-ae90-17e11981cf54
ms.openlocfilehash: 70e05ad734fa49ba8cb96e4bf83bc05b99c5f55c
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68246521"
---
# <a name="ltcstdlibgt"></a>&lt;cstdlib&gt;

Include l'intestazione della libreria C Standard \<STDLIB. h > e aggiunge i nomi associati al `std` dello spazio dei nomi. Includendo questa intestazione garantisce che i nomi dichiarati usando il collegamento esterno nell'intestazione della libreria standard C vengono dichiarati nel `std` dello spazio dei nomi.

> [!NOTE]
> \<STDLIB. h > non include il tipo **wchar_t**.

## <a name="requirements"></a>Requisiti

**Intestazione**: \<cstdlib >

**Spazio dei nomi:** std

## <a name="namespace-and-macros"></a>Macro e Namespace

```cpp
namespace std {
    using size_t = see definition;
    using div_t = see definition;
    using ldiv_t = see definition;
    using lldiv_t = see definition;
}

#define NULL
#define EXIT_FAILURE
#define EXIT_SUCCESS
#define RAND_MAX
#define MB_CUR_MAX
```

## <a name="exposition-only-functions"></a>Solo le funzioni di esempio a scopo illustrativo

```cpp
extern "C" using c-atexit-handler = void();
extern "C++" using atexit-handler = void();
extern "C" using c-compare-pred = int(const void*, const void*);
extern "C++" using compare-pred = int(const void*, const void*);
```

## <a name="start-and-termination-functions"></a>Funzioni di avvio e terminazione

|Funzione|Descrizione|
|-|-|
|[_Exit](#_exit)|Termina programma senza l'utilizzo di distruttori o funzioni registrate.|
|[abort](#abort)|Termina programma senza l'utilizzo di distruttori.|
|[atexit](#atexit)|Funzione Registra per la chiusura del programma.|
|[exit](#exit)|Elimina definitivamente gli oggetti con thread e di archiviazione statica, quindi restituisce il controllo.|
|[at_quick_exit](#at_quick_exit)|Funzione registri senza argomenti per la chiusura del programma.|
|[quick_exit](#quick_exit)|Funzione Registra gli oggetti mantenuti per la chiusura del programma.|
|[getenv](#getenv)|Vedere i riferimenti alla libreria standard C.|
|[system](#system)|Vedere i riferimenti alla libreria standard C.|

### <a name="_exit"></a> Exit

```cpp
[[noreturn]] void _Exit(int status) noexcept;
```

#### <a name="remarks"></a>Note

Il programma viene terminato senza eseguire i distruttori per gli oggetti automatico, thread o la durata di archiviazione statica e senza dover chiamare funzioni passate a `atexit()`. La funzione `_Exit` segnale-safe.

### <a name="abort"></a> Abort

```cpp
[[noreturn]] void abort() noexcept;
```

#### <a name="remarks"></a>Note

Il programma viene terminato senza eseguire i distruttori per gli oggetti automatico, thread o la durata di archiviazione statica e senza dover chiamare funzioni passate a `atexit()`. La funzione `abort` segnale-safe.

### <a name="at_quick_exit"></a> at_quick_exit

```cpp
int at_quick_exit(c-atexit-handler * func) noexcept;
int at_quick_exit(atexit-handler * func) noexcept;
```

#### <a name="return-value"></a>Valore restituito

Zero se la registrazione ha esito positivo, diverso da zero se ha esito negativo.

#### <a name="remarks"></a>Note

Il `at_quick_exit()` funzioni di registrano della funzione a cui punta *func* per essere chiamato senza argomenti quando `quick_exit` viene chiamato. Non è specificato se una chiamata a `at_quick_exit()` ciò non avviene prima di tutte le chiamate a `quick_exit` avrà esito positivo e il `at_quick_exit()` funzioni non introducono una competizione tra dati. L'ordine della registrazione potrebbe essere indeterminato se `at_quick_exit` è stato chiamato da altro rispetto a un thread e, poiché `at_quick_exit` le registrazioni sono distinte dal `atexit` registrazioni, le applicazioni devono chiamare entrambe le funzioni di registrazione con il stesso argomento. L'implementazione deve supportare la registrazione delle funzioni almeno 32.

### <a name="atexit"></a> atexit

```cpp
int atexit(c-atexit-handler * func) noexcept;
int atexit(atexit-handler * func) noexcept;
```

#### <a name="remarks"></a>Note

Il `atexit()` funzioni di registrano della funzione a cui punta *func* per essere chiamato senza argomenti alla chiusura del programma normale. Non è specificato se una chiamata a `atexit()` ciò non avviene prima della chiamata a `exit()` avrà esito positivo e il `atexit()` funzioni non introducono una competizione tra dati. L'implementazione deve supportare la registrazione delle funzioni almeno 32.

#### <a name="return-value"></a>Valore restituito

Restituisce zero se la registrazione ha esito positivo, diverso da zero se ha esito negativo.

### <a name="exit"></a> uscita

```cpp
[[noreturn]] void exit(int status);
```

#### <a name="remarks"></a>Note

In primo luogo, gli oggetti con la durata di archiviazione di thread e associato all'oggetto corrente thread vengono eliminati definitivamente.

Successivamente, vengono eliminati definitivamente gli oggetti con durata di archiviazione statica e le funzioni registrate chiamando `atexit` vengono chiamati. Gli oggetti automatici non vengono eliminati definitivamente in seguito alla chiamata `exit()`. Se il controllo lascia una funzione registrata chiamata da `exit` perché la funzione non fornisce un gestore per un'eccezione generata, `std::terminate()` deve essere chiamato. Una funzione viene chiamata per ogni volta che viene registrato. Tutti gli oggetti con durata di archiviazione automatica vengono eliminati in un programma la cui funzione principale non contiene alcun oggetto automatico ed esegue la chiamata a `exit()`. Controllo può essere trasferito direttamente a una funzione principale di questo tipo, generando un'eccezione intercettata in main.

Aprire quindi tutti i flussi di C (come mediati dalle firme di funzione dichiarate in <cstdio>) con i dati memorizzati nel buffer sono stato scaricato, aprire tutti i flussi di C sono chiusi e tutti i file creati chiamando `tmpfile()` vengono rimossi.

Infine, il controllo viene restituito all'ambiente host. Se lo stato è EXIT_SUCCESS o zero, viene restituito un modulo definito dall'implementazione della chiusura ha esito positivo lo stato. Se lo stato è EXIT_FAILURE, viene restituito un modulo definito dall'implementazione della chiusura non riuscito dello stato. In caso contrario, lo stato restituito è definito dall'implementazione.

### <a name="getenv"></a> getenv

```cpp
char* getenv(const char* name);
```

### <a name="quick_exit"></a> quick_exit

```cpp
[[noreturn]] void quick_exit(int status) noexcept;
```

#### <a name="remarks"></a>Note

Le funzioni registrate dalle chiamate a `at_quick_exit` vengono chiamati in ordine inverso del processo di registrazione, ad eccezione del fatto che una funzione deve essere chiamata dopo uno stato registrato in precedenza funzioni che è già state chiamate al momento è stata registrata. Gli oggetti non devono essere eliminati in seguito alla chiamata `quick_exit`. Se il controllo lascia una funzione registrata chiamata da `quick_exit` perché la funzione non fornisce un gestore per un'eccezione generata, `std::terminate()` deve essere chiamato. Una funzione registrata tramite `at_quick_exit` viene richiamato dal thread che chiama `quick_exit`, che può essere un thread diverso rispetto a quella registrata in, quindi registrato funzioni non devono fare affidamento sull'identità degli oggetti con la durata di archiviazione di thread. Dopo aver chiamato le funzioni registrate `quick_exit` devono chiamare `_Exit(status)`. Non vengono scaricati i buffer di file standard. La funzione `quick_exit` è indipendente dai segnale quando le funzioni registrate con `at_quick_exit` sono.

### <a name="system"></a> Sistema

```cpp
int system(const char* string);
```

## <a name="memory-allocation-functions"></a>Funzioni di allocazione della memoria

```cpp
void* aligned_alloc(size_t alignment, size_t size);
void* calloc(size_t nmemb, size_t size);
void free(void* ptr);
void* malloc(size_t size);
void* realloc(void* ptr, size_t size);
double atof(const char* nptr);
int atoi(const char* nptr);
long int atol(const char* nptr);
long long int atoll(const char* nptr);
double strtod(const char* nptr, char** endptr);
float strtof(const char* nptr, char** endptr);
long double strtold(const char* nptr, char** endptr);
long int strtol(const char* nptr, char** endptr, int base);
long long int strtoll(const char* nptr, char** endptr, int base);
unsigned long int strtoul(const char* nptr, char** endptr, int base);
unsigned long long int strtoull(const char* nptr, char** endptr, int base);
```

#### <a name="remarks"></a>Note

Queste funzioni hanno la semantica specificata nella libreria standard C.

##  <a name="multibyte--wide-string-and-character-conversion-functions"></a>Stringa multibyte o wide e funzioni di conversione di caratteri

```cpp
int mblen(const char* s, size_t n);
int mbtowc(wchar_t* pwc, const char* s, size_t n);
int wctomb(char* s, wchar_t wchar);
size_t mbstowcs(wchar_t* pwcs, const char* s, size_t n);
size_t wcstombs(char* s, const wchar_t* pwcs, size_t n);
```

### <a name="remarks"></a>Note

Queste funzioni hanno la semantica specificata nella libreria standard C.

## <a name="algorithm-functions"></a>Funzioni di algoritmo

```cpp
void* bsearch(const void* key, const void* base, size_t nmemb, size_t size, c-compare-pred * compar);
void* bsearch(const void* key, const void* base, size_t nmemb, size_t size, compare-pred * compar);
void qsort(void* base, size_t nmemb, size_t size, c-compare-pred * compar);
void qsort(void* base, size_t nmemb, size_t size, compare-pred * compar);
```

### <a name="remarks"></a>Note

Queste funzioni hanno la semantica specificata nella libreria standard C.

## <a name="low-quality-random-number-generation-functions"></a>Funzioni generazione numeri casuali di bassa qualità

```cpp
int rand();
void srand(unsigned int seed);
```

### <a name="remarks"></a>Note

Queste funzioni hanno la semantica specificata nella libreria standard C.

## <a name="absolute-values"></a>Valori assoluti

```cpp
int abs(int j);
long int abs(long int j);
long long int abs(long long int j);
float abs(float j);
double abs(double j);
long double abs(long double j);
long int labs(long int j);
long long int llabs(long long int j);
div_t div(int numer, int denom);
ldiv_t div(long int numer, long int denom);
lldiv_t div(long long int numer, long long int denom);
ldiv_t ldiv(long int numer, long int denom);
lldiv_t lldiv(long long int numer, long long int denom);
```

### <a name="remarks"></a>Note

Queste funzioni hanno la semantica specificata nella libreria standard C.

## <a name="functions"></a>Funzioni

```cpp
void* bsearch(const void* key, const void* base, size_t nmemb, size_t size,
c-compare-pred * compar);
void* bsearch(const void* key, const void* base, size_t nmemb, size_t size,
compare-pred * compar);
void qsort(void* base, size_t nmemb, size_t size, c-compare-pred * compar);
void qsort(void* base, size_t nmemb, size_t size, compare-pred * compar);
```

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Panoramica sulla libreria standard C++](../standard-library/cpp-standard-library-overview.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
