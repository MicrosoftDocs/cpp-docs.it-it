---
title: '&lt;cstdlib&gt;'
ms.date: 11/04/2016
f1_keywords:
- <cstdlib>
helpviewer_keywords:
- cstdlib header
ms.assetid: 0a6aaebf-84e9-4b60-ae90-17e11981cf54
ms.openlocfilehash: 298d6a512b2863a326bda0670f33fe8f1bda0688
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68449405"
---
# <a name="ltcstdlibgt"></a>&lt;cstdlib&gt;

Include l'intestazione \<della libreria standard C stdlib. h > e aggiunge i nomi associati `std` allo spazio dei nomi. L'inclusione di questa intestazione garantisce che i nomi dichiarati utilizzando il collegamento esterno nell'intestazione della libreria `std` standard C vengano dichiarati nello spazio dei nomi.

> [!NOTE]
> \<stdlib. h > non include il tipo **wchar_t**.

## <a name="requirements"></a>Requisiti

**Intestazione**: \<cstdlib >

**Spazio dei nomi:** std

## <a name="namespace-and-macros"></a>Spazio dei nomi e macro

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

## <a name="exposition-only-functions"></a>Funzioni solo esposizione

```cpp
extern "C" using c-atexit-handler = void();
extern "C++" using atexit-handler = void();
extern "C" using c-compare-pred = int(const void*, const void*);
extern "C++" using compare-pred = int(const void*, const void*);
```

## <a name="start-and-termination-functions"></a>Funzioni di avvio e terminazione

|Funzione|Descrizione|
|-|-|
|[_Exit](#_exit)|Termina il programma senza utilizzare distruttori o funzioni registrate.|
|[abort](#abort)|Termina il programma senza utilizzare distruttori.|
|[atexit](#atexit)|Registra la funzione per la terminazione del programma.|
|[exit](#exit)|Elimina gli oggetti con il thread e l'archiviazione statica, quindi restituisce il controllo.|
|[at_quick_exit](#at_quick_exit)|Registra la funzione senza argomenti per la terminazione del programma.|
|[quick_exit](#quick_exit)|Registra la funzione con gli oggetti conservati per la terminazione del programma.|
|[getenv](#getenv)|Vedere le informazioni di riferimento sulla libreria standard C.|
|[system](#system)|Vedere le informazioni di riferimento sulla libreria standard C.|

### <a name="_exit"></a>_Exit

```cpp
[[noreturn]] void _Exit(int status) noexcept;
```

#### <a name="remarks"></a>Note

Il programma viene terminato senza eseguire distruttori per gli oggetti con durata di archiviazione automatica, di thread o statica e senza le funzioni di chiamata `atexit()`passate a. La funzione `_Exit` è indipendente dal segnale.

### <a name="abort"></a>interruzione

```cpp
[[noreturn]] void abort() noexcept;
```

#### <a name="remarks"></a>Note

Il programma viene terminato senza eseguire distruttori per gli oggetti con durata di archiviazione automatica, di thread o statica e senza le funzioni di chiamata `atexit()`passate a. La funzione `abort` è indipendente dal segnale.

### <a name="at_quick_exit"></a>at_quick_exit

```cpp
int at_quick_exit(c-atexit-handler * func) noexcept;
int at_quick_exit(atexit-handler * func) noexcept;
```

#### <a name="return-value"></a>Valore restituito

Zero se la registrazione ha esito positivo, diverso da zero se ha esito negativo.

#### <a name="remarks"></a>Note

Le `at_quick_exit()` funzioni registrano la funzione a cui fa riferimento *Func* affinché venga chiamata senza `quick_exit` argomenti quando viene chiamato il metodo. Non è specificato se una chiamata a `at_quick_exit()` che non si verifica prima che tutte le chiamate a `quick_exit` abbiano esito positivo e le `at_quick_exit()` funzioni non introducono una corsa di dati. L'ordine di registrazione può essere indeterminato se `at_quick_exit` è stato chiamato da più di un thread e `at_quick_exit` poiché le `atexit` registrazioni sono diverse dalle registrazioni, è possibile che le applicazioni debbano chiamare entrambe le funzioni di registrazione con il stesso argomento. L'implementazione di deve supportare la registrazione di almeno 32 funzioni.

### <a name="atexit"></a>atexit

```cpp
int atexit(c-atexit-handler * func) noexcept;
int atexit(atexit-handler * func) noexcept;
```

#### <a name="remarks"></a>Note

Le `atexit()` funzioni registrano la funzione a cui fa riferimento *Func* da chiamare senza argomenti alla chiusura normale del programma. Non è specificato se una chiamata a `atexit()` che non si verifica prima di una chiamata a `exit()` avrà esito `atexit()` positivo e le funzioni non introducono una corsa di dati. L'implementazione di deve supportare la registrazione di almeno 32 funzioni.

#### <a name="return-value"></a>Valore restituito

Restituisce zero se la registrazione ha esito positivo, diverso da zero se ha esito negativo.

### <a name="exit"></a>uscita

```cpp
[[noreturn]] void exit(int status);
```

#### <a name="remarks"></a>Note

In primo luogo, gli oggetti con durata di archiviazione del thread e associati al thread corrente vengono eliminati definitivamente.

Successivamente, gli oggetti con durata di archiviazione statica vengono eliminati e vengono chiamate `atexit` le funzioni registrate mediante la chiamata a. Gli oggetti automatici non vengono eliminati definitivamente in seguito `exit()`alla chiamata a. Se il controllo lascia una funzione registrata chiamata `exit` da perché la funzione non fornisce un gestore per un'eccezione generata `std::terminate()` , deve essere chiamato. Una funzione viene chiamata per ogni volta che viene registrata. Gli oggetti con durata di archiviazione automatica vengono eliminati in un programma la cui funzione principale non contiene oggetti automatici ed esegue la chiamata `exit()`a. Il controllo può essere trasferito direttamente a una funzione principale di questo tipo generando un'eccezione rilevata nel Main.

Quindi, tutti i flussi c aperti (come mediati dalle firme di funzione dichiarati in <cstdio>) con dati memorizzati nel buffer non scritti vengono scaricati, tutti i flussi c aperti vengono chiusi e tutti i file creati `tmpfile()` chiamando vengono rimossi.

Infine, il controllo viene restituito all'ambiente host. Se status è zero o EXIT_SUCCESS, viene restituito un modulo definito dall'implementazione della terminazione corretta dello stato. Se status è EXIT_FAILURE, viene restituito un modulo definito dall'implementazione della terminazione con stato non riuscito. In caso contrario, lo stato restituito è definito dall'implementazione.

### <a name="getenv"></a>getenv

```cpp
char* getenv(const char* name);
```

### <a name="quick_exit"></a>quick_exit

```cpp
[[noreturn]] void quick_exit(int status) noexcept;
```

#### <a name="remarks"></a>Note

Le funzioni registrate dalle chiamate `at_quick_exit` a vengono chiamate nell'ordine inverso rispetto alla registrazione, ad eccezione del fatto che una funzione deve essere chiamata dopo qualsiasi funzione registrata in precedenza che era già stata chiamata al momento della registrazione. Gli oggetti non devono essere eliminati in modo permanente in `quick_exit`seguito alla chiamata a. Se il controllo lascia una funzione registrata chiamata `quick_exit` da perché la funzione non fornisce un gestore per un'eccezione generata `std::terminate()` , deve essere chiamato. Una funzione registrata tramite `at_quick_exit` viene richiamata dal thread che chiama `quick_exit`, che può essere un thread diverso da quello che lo ha registrato, quindi le funzioni registrate non devono basarsi sull'identità degli oggetti con durata di archiviazione dei thread. Dopo aver chiamato le funzioni `quick_exit` registrate, `_Exit(status)`deve chiamare. I buffer di file standard non vengono scaricati. La funzione `quick_exit` è indipendente dal segnale quando le funzioni registrate con `at_quick_exit` sono.

### <a name="system"></a>sistema

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

##  <a name="multibyte--wide-string-and-character-conversion-functions"></a>Funzioni di conversione di stringhe e caratteri multibyte/Wide

```cpp
int mblen(const char* s, size_t n);
int mbtowc(wchar_t* pwc, const char* s, size_t n);
int wctomb(char* s, wchar_t wchar);
size_t mbstowcs(wchar_t* pwcs, const char* s, size_t n);
size_t wcstombs(char* s, const wchar_t* pwcs, size_t n);
```

### <a name="remarks"></a>Note

Queste funzioni hanno la semantica specificata nella libreria standard C.

## <a name="algorithm-functions"></a>Funzioni per gli algoritmi

```cpp
void* bsearch(const void* key, const void* base, size_t nmemb, size_t size, c-compare-pred * compar);
void* bsearch(const void* key, const void* base, size_t nmemb, size_t size, compare-pred * compar);
void qsort(void* base, size_t nmemb, size_t size, c-compare-pred * compar);
void qsort(void* base, size_t nmemb, size_t size, compare-pred * compar);
```

### <a name="remarks"></a>Note

Queste funzioni hanno la semantica specificata nella libreria standard C.

## <a name="low-quality-random-number-generation-functions"></a>Funzioni di generazione di numeri casuali di bassa qualità

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

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\ (Panoramica sulla libreria standard C++)
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
