---
title: numeric_limits (classe)
ms.date: 11/04/2016
f1_keywords:
- limits/std::numeric_limits
- limits/std::numeric_limits::denorm_min
- limits/std::numeric_limits::digits
- limits/std::numeric_limits::digits10
- limits/std::numeric_limits::epsilon
- limits/std::numeric_limits::has_denorm
- limits/std::numeric_limits::has_denorm_loss
- limits/std::numeric_limits::has_infinity
- limits/std::numeric_limits::has_quiet_NaN
- limits/std::numeric_limits::has_signaling_NaN
- limits/std::numeric_limits::infinity
- limits/std::numeric_limits::is_bounded
- limits/std::numeric_limits::is_exact
- limits/std::numeric_limits::is_iec559
- limits/std::numeric_limits::is_integer
- limits/std::numeric_limits::is_modulo
- limits/std::numeric_limits::is_signed
- limits/std::numeric_limits::is_specialized
- limits/std::numeric_limits::lowest
- limits/std::numeric_limits::max
- limits/std::numeric_limits::max_digits10
- limits/std::numeric_limits::max_exponent
- limits/std::numeric_limits::max_exponent10
- limits/std::numeric_limits::min
- limits/std::numeric_limits::min_exponent
- limits/std::numeric_limits::min_exponent10
- limits/std::numeric_limits::quiet_NaN
- limits/std::numeric_limits::radix
- limits/std::numeric_limits::round_error
- limits/std::numeric_limits::round_style
- limits/std::numeric_limits::signaling_NaN
- limits/std::numeric_limits::tinyness_before
- limits/std::numeric_limits::traps
helpviewer_keywords:
- std::numeric_limits [C++]
- std::numeric_limits [C++], denorm_min
- std::numeric_limits [C++], digits
- std::numeric_limits [C++], digits10
- std::numeric_limits [C++], epsilon
- std::numeric_limits [C++], has_denorm
- std::numeric_limits [C++], has_denorm_loss
- std::numeric_limits [C++], has_infinity
- std::numeric_limits [C++], has_quiet_NaN
- std::numeric_limits [C++], has_signaling_NaN
- std::numeric_limits [C++], infinity
- std::numeric_limits [C++], is_bounded
- std::numeric_limits [C++], is_exact
- std::numeric_limits [C++], is_iec559
- std::numeric_limits [C++], is_integer
- std::numeric_limits [C++], is_modulo
- std::numeric_limits [C++], is_signed
- std::numeric_limits [C++], is_specialized
- std::numeric_limits [C++], lowest
- std::numeric_limits [C++], max
- std::numeric_limits [C++], max_digits10
- std::numeric_limits [C++], max_exponent
- std::numeric_limits [C++], max_exponent10
- std::numeric_limits [C++], min
- std::numeric_limits [C++], min_exponent
- std::numeric_limits [C++], min_exponent10
- std::numeric_limits [C++], quiet_NaN
- std::numeric_limits [C++], radix
- std::numeric_limits [C++], round_error
- std::numeric_limits [C++], round_style
- std::numeric_limits [C++], signaling_NaN
- std::numeric_limits [C++], tinyness_before
- std::numeric_limits [C++], traps
ms.assetid: 9e817177-0e91-48e6-b680-0531c4b26625
ms.openlocfilehash: f0b33404f16df59e2cb73023f3539e87080734a1
ms.sourcegitcommit: f2a135d69a2a8ef1777da60c53d58fe06980c997
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/03/2020
ms.locfileid: "87520603"
---
# <a name="numeric_limits-class"></a>numeric_limits (classe)

Il modello di classe descrive le proprietà aritmetiche dei tipi numerici incorporati.

## <a name="syntax"></a>Sintassi

```cpp
template <class Type>
    class numeric_limits
```

### <a name="parameters"></a>Parametri

*Tipo*\
Il tipo di dati elemento fondamentale le cui proprietà vengono testate, sottoposte a query o impostate. Il *tipo* può anche essere dichiarato **`const`** , **`volatile`** o **`const volatile`** .

## <a name="remarks"></a>Commenti

L'intestazione definisce specializzazioni esplicite per i tipi,,,,,,,, **`wchar_t`** **`bool`** **`char`** **`signed char`** **`unsigned char`** **`short`** **`unsigned short`** **`int`** **`unsigned int`** , **`long`** , **`unsigned long`** , **`float`** , **`double`** , **`long double`** , **`long long`** , **`unsigned long long`** , **`char16_t`** e **`char32_t`** . Per queste specializzazioni esplicite, il membro [numeric_limits:: is_specialized](#is_specialized) è **`true`** e tutti i membri rilevanti hanno valori significativi. Il programma può fornire ulteriori specializzazioni esplicite. La maggior parte delle funzioni membro della classe descrive o testa le implementazioni possibili di **`float`** .

Per una specializzazione arbitraria, nessun membro dispone di valori significativi. Un oggetto membro che non dispone di un valore significativo archivia zero (o **`false`** ) e una funzione membro che non restituisce un valore significativo restituisce `Type(0)` .

## <a name="static-functions-and-constants"></a>Funzioni e costanti statiche

|||
|-|-|
|[denorm_min](#denorm_min)|Restituisce il più piccolo valore denormalizzato diverso da zero.|
|[Cifre](#digits)|Restituisce il numero di cifre radice che il tipo può rappresentare senza perdita di precisione.|
|[digits10](#digits10)|Restituisce il numero di cifre decimali che il tipo può rappresentare senza perdita di precisione.|
|[Epsilon](#epsilon)|Restituisce la differenza tra 1 e il valore più piccolo maggiore di 1 che il tipo di dati può rappresentare.|
|[has_denorm](#has_denorm)|Verifica se un tipo consente valori denormalizzati.|
|[has_denorm_loss](#has_denorm_loss)|Verifica se la perdita di precisione viene rilevata come una perdita di denormalizzazione anziché come un risultato inesatto.|
|[has_infinity](#has_infinity)|Verifica se un tipo dispone di una rappresentazione per un numero infinito positivo.|
|[has_quiet_NaN](#has_quiet_nan)|Verifica se un tipo ha una rappresentazione per un valore NAN (not a Number) non interattiva, che non è una segnalazione.|
|[has_signaling_NaN](#has_signaling_nan)|Verifica se un tipo dispone di una rappresentazione per un valore diverso da un numero (NaN) con segnalazione.|
|[infinito](#infinity)|La rappresentazione di un numero infinito positivo, se disponibile.|
|[is_bounded](#is_bounded)|Verifica se il set di valori che può rappresentare è finito.|
|[is_exact](#is_exact)|Verifica se i calcoli eseguiti su un tipo sono privi di errori di arrotondamento.|
|[is_iec559](#is_iec559)|Verifica se un tipo è conforme agli standard IEC 559.|
|[is_integer](#is_integer)|Verifica se un tipo ha una rappresentazione in forma di Integer.|
|[is_modulo](#is_modulo)|Verifica se un tipo ha una rappresentazione in forma di modulo.|
|[is_signed](#is_signed)|Verifica se un tipo ha una rappresentazione firmata.|
|[is_specialized](#is_specialized)|Verifica se un tipo ha una specializzazione esplicita definita nel modello di classe `numeric_limits` .|
|[lowest](#lowest)|Restituisce il valore finito più negativo.|
|[max](#max)|Restituisce il valore massimo finito per un tipo.|
|[max_digits10](#max_digits10)|Restituisce il numero di cifre decimali richiesto per garantire che due valori distinti del tipo abbiano rappresentazioni decimali distinte.|
|[max_exponent](#max_exponent)|Restituisce l'esponente integrale positivo massimo che il tipo a virgola mobile può rappresentare come un valore finito quando una base di radice è elevata a tale potenza.|
|[max_exponent10](#max_exponent10)|Restituisce l'esponente integrale positivo massimo che il tipo a virgola mobile può rappresentare come un valore finito quando una base di dieci è elevata a tale potenza.|
|[min](#min)|Restituisce il valore normalizzato minimo per un tipo.|
|[min_exponent](#min_exponent)|Restituisce l'esponente integrale negativo massimo che il tipo a virgola mobile può rappresentare come un valore finito quando una base di radice è elevata a tale potenza.|
|[min_exponent10](#min_exponent10)|Restituisce l'esponente integrale negativo massimo che il tipo a virgola mobile può rappresentare come un valore finito quando una base di dieci è elevata a tale potenza.|
|[quiet_NaN](#quiet_nan)|Restituisce la rappresentazione di un valore diverso da un numero (NaN) non interattivo per il tipo.|
|[radice](#radix)|Restituisce la base integrale, detta radice, usata per la rappresentazione di un tipo.|
|[round_error](#round_error)|Restituisce il valore massimo per il tipo di errore di arrotondamento.|
|[round_style](#round_style)|Restituisce un valore che descrive i vari metodi che un'implementazione può scegliere per l'arrotondamento di un valore a virgola mobile in un valore intero.|
|[signaling_NaN](#signaling_nan)|Restituisce la rappresentazione di un valore diverso da un numero (NaN) con segnalazione per il tipo.|
|[tinyness_before](#tinyness_before)|Verifica se un tipo può stabilire che un valore è troppo piccolo per essere rappresentato come un valore normalizzato prima dell'arrotondamento.|
|[traps](#traps)|Verifica se la registrazione che segnala le eccezioni aritmetiche è implementata per un tipo.|

### <a name="denorm_min"></a><a name="denorm_min"></a>denorm_min

Restituisce il più piccolo valore denormalizzato diverso da zero.

```cpp
static constexpr Type denorm_min() throw();
```

#### <a name="return-value"></a>Valore restituito

Il più piccolo valore denormalizzato diverso da zero.

#### <a name="remarks"></a>Commenti

**`long double`** è uguale a quello del **`double`** compilatore C++.

La funzione restituisce il valore minimo per il tipo, che è uguale a [min](#min) se [has_denorm](#has_denorm) non è uguale a `denorm_present` .

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_denorm_min.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The smallest nonzero denormalized value" << endl
        << "for float objects is: "
        << numeric_limits<float>::denorm_min( ) << endl;
   cout << "The smallest nonzero denormalized value" << endl
        << "for double objects is: "
        << numeric_limits<double>::denorm_min( ) << endl;
   cout << "The smallest nonzero denormalized value" << endl
        << "for long double objects is: "
        << numeric_limits<long double>::denorm_min( ) << endl;

   // A smaller value will round to zero
   cout << numeric_limits<float>::denorm_min( )/2 <<endl;
   cout << numeric_limits<double>::denorm_min( )/2 <<endl;
   cout << numeric_limits<long double>::denorm_min( )/2 <<endl;
}
```

```Output
The smallest nonzero denormalized value
for float objects is: 1.4013e-045
The smallest nonzero denormalized value
for double objects is: 4.94066e-324
The smallest nonzero denormalized value
for long double objects is: 4.94066e-324
0
0
0
```

### <a name="digits"></a><a name="digits"></a>cifre

Restituisce il numero di cifre radice che il tipo può rappresentare senza perdita di precisione.

```cpp
static constexpr int digits = 0;
```

#### <a name="return-value"></a>Valore restituito

Numero di cifre radice che il tipo può rappresentare senza perdita di precisione.

#### <a name="remarks"></a>Commenti

Il membro archivia il numero di cifre radice che il tipo può rappresentare senza modifiche, ovvero il numero di bit diverso da qualsiasi bit più significativo per un tipo Integer predefinito oppure il numero di cifre mantissa per un tipo a virgola mobile predefinito.

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_digits_min.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << numeric_limits<float>::digits <<endl;
   cout << numeric_limits<double>::digits <<endl;
   cout << numeric_limits<long double>::digits <<endl;
   cout << numeric_limits<int>::digits <<endl;
   cout << numeric_limits<__int64>::digits <<endl;
}
```

```Output
24
53
53
31
63
```

### <a name="digits10"></a><a name="digits10"></a>digits10

Restituisce il numero di cifre decimali che il tipo può rappresentare senza perdita di precisione.

```cpp
static constexpr int digits10 = 0;
```

#### <a name="return-value"></a>Valore restituito

Numero di cifre decimali che il tipo può rappresentare senza perdita di precisione.

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_digits10.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << numeric_limits<float>::digits10 <<endl;
   cout << numeric_limits<double>::digits10 <<endl;
   cout << numeric_limits<long double>::digits10 <<endl;
   cout << numeric_limits<int>::digits10 <<endl;
   cout << numeric_limits<__int64>::digits10 <<endl;
   float f = (float)99999999;
   cout.precision ( 10 );
   cout << "The float is; " << f << endl;
}
```

```Output
6
15
15
9
18
The float is; 100000000
```

### <a name="epsilon"></a><a name="epsilon"></a>Epsilon

La funzione restituisce la differenza tra 1 e il valore più piccolo maggiore di 1 rappresentabile per il tipo di dati.

```cpp
static constexpr Type epsilon() throw();
```

#### <a name="return-value"></a>Valore restituito

Differenza tra 1 e il valore più piccolo maggiore di 1 rappresentabile per il tipo di dati.

#### <a name="remarks"></a>Commenti

Il valore è FLT_EPSILON per il tipo **`float`** . `epsilon`per un tipo è il numero a virgola mobile positivo più piccolo *n* tale che *n*  +  `epsilon`  +  *n* è rappresentabile.

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_epsilon.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The difference between 1 and the smallest "
        << "value greater than 1" << endl
        << "for float objects is: "
        << numeric_limits<float>::epsilon( ) << endl;
   cout << "The difference between 1 and the smallest "
        << "value greater than 1" << endl
        << "for double objects is: "
        << numeric_limits<double>::epsilon( ) << endl;
   cout << "The difference between 1 and the smallest "
        << "value greater than 1" << endl
        << "for long double objects is: "
        << numeric_limits<long double>::epsilon( ) << endl;
}
```

```Output
The difference between 1 and the smallest value greater than 1
for float objects is: 1.19209e-007
The difference between 1 and the smallest value greater than 1
for double objects is: 2.22045e-016
The difference between 1 and the smallest value greater than 1
for long double objects is: 2.22045e-016
```

### <a name="has_denorm"></a><a name="has_denorm"></a>has_denorm

Verifica se un tipo consente valori denormalizzati.

```cpp
static constexpr float_denorm_style has_denorm = denorm_absent;
```

#### <a name="return-value"></a>Valore restituito

Valore di enumerazione di tipo `const float_denorm_style` , che indica se il tipo consente valori denormalizzati.

#### <a name="remarks"></a>Commenti

Il membro Archivia `denorm_present` per un tipo a virgola mobile con valori denormalizzati, in effetti un numero variabile di bit esponente.

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_has_denorm.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects allow denormalized values: "
        << numeric_limits<float>::has_denorm
        << endl;
   cout << "Whether double objects allow denormalized values: "
        << numeric_limits<double>::has_denorm
        << endl;
   cout << "Whether long int objects allow denormalized values: "
        << numeric_limits<long int>::has_denorm
        << endl;
}
```

```Output
Whether float objects allow denormalized values: 1
Whether double objects allow denormalized values: 1
Whether long int objects allow denormalized values: 0
```

### <a name="has_denorm_loss"></a><a name="has_denorm_loss"></a>has_denorm_loss

Verifica se la perdita di precisione viene rilevata come una perdita di denormalizzazione anziché come un risultato inesatto.

```cpp
static constexpr bool has_denorm_loss = false;
```

#### <a name="return-value"></a>Valore restituito

**`true`** Se la perdita di precisione viene rilevata come perdita di denormalizzazione; in **`false`** caso contrario.

#### <a name="remarks"></a>Commenti

Il membro archivia true per un tipo che determina se un valore ha perso precisione perché viene fornito come risultato denormalizzato (troppo piccolo per essere rappresentato come un valore normalizzato) o perché è inesatto (non è lo stesso, di conseguenza non è soggetto alla precisione e alle limitazioni dell'intervallo di esponenti), un'opzione con le rappresentazioni a virgola mobile IEC 559 che possono influenzare alcuni risultati.

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_has_denorm_loss.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects can detect denormalized loss: "
        << numeric_limits<float>::has_denorm_loss
        << endl;
   cout << "Whether double objects can detect denormalized loss: "
        << numeric_limits<double>::has_denorm_loss
        << endl;
   cout << "Whether long int objects can detect denormalized loss: "
        << numeric_limits<long int>::has_denorm_loss
        << endl;
}
```

```Output
Whether float objects can detect denormalized loss: 1
Whether double objects can detect denormalized loss: 1
Whether long int objects can detect denormalized loss: 0
```

### <a name="has_infinity"></a><a name="has_infinity"></a>has_infinity

Verifica se un tipo dispone di una rappresentazione per un numero infinito positivo.

```cpp
static constexpr bool has_infinity = false;
```

#### <a name="return-value"></a>Valore restituito

**`true`** Se il tipo ha una rappresentazione per l'infinito positivo; in **`false`** caso contrario.

#### <a name="remarks"></a>Commenti

Il membro restituisce **`true`** se [is_iec559](#is_iec559) è **`true`** .

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_has_infinity.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have infinity: "
        << numeric_limits<float>::has_infinity
        << endl;
   cout << "Whether double objects have infinity: "
        << numeric_limits<double>::has_infinity
        << endl;
   cout << "Whether long int objects have infinity: "
        << numeric_limits<long int>::has_infinity
        << endl;
}
```

```Output
Whether float objects have infinity: 1
Whether double objects have infinity: 1
Whether long int objects have infinity: 0
```

### <a name="has_quiet_nan"></a><a name="has_quiet_nan"></a>has_quiet_NaN

Verifica se un tipo dispone di una rappresentazione per un valore diverso da un numero (NaN) non interattivo, che è senza segnalazione.

```cpp
static constexpr bool has_quiet_NaN = false;
```

#### <a name="return-value"></a>Valore restituito

**`true`** Se il **tipo** ha una rappresentazione per un valore NaN non interattiva; in **`false`** caso contrario.

#### <a name="remarks"></a>Commenti

Un numero (NaN) non interattivo è una codifica di un valore NaN, che non ne indica la presenza in un'espressione. Il valore restituito è **`true`** se [is_iec559](#is_iec559) è true.

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_has_quiet_nan.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have quiet_NaN: "
        << numeric_limits<float>::has_quiet_NaN
        << endl;
   cout << "Whether double objects have quiet_NaN: "
        << numeric_limits<double>::has_quiet_NaN
        << endl;
   cout << "Whether long int objects have quiet_NaN: "
        << numeric_limits<long int>::has_quiet_NaN
        << endl;
}
```

```Output
Whether float objects have quiet_NaN: 1
Whether double objects have quiet_NaN: 1
Whether long int objects have quiet_NaN: 0
```

### <a name="has_signaling_nan"></a><a name="has_signaling_nan"></a>has_signaling_NaN

Verifica se un tipo dispone di una rappresentazione per un valore diverso da un numero (NaN) con segnalazione.

```cpp
static constexpr bool has_signaling_NaN = false;
```

#### <a name="return-value"></a>Valore restituito

**`true`** Se il tipo ha una rappresentazione per un valore NAN di segnalazione; in **`false`** caso contrario.

#### <a name="remarks"></a>Commenti

Un numero (NaN) con segnalazione è una codifica di un valore NaN, che ne indica la presenza in un'espressione. Il valore restituito è **`true`** se [is_iec559](#is_iec559) è true.

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_has_signaling_nan.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have a signaling_NaN: "
        << numeric_limits<float>::has_signaling_NaN
        << endl;
   cout << "Whether double objects have a signaling_NaN: "
        << numeric_limits<double>::has_signaling_NaN
        << endl;
   cout << "Whether long int objects have a signaling_NaN: "
        << numeric_limits<long int>::has_signaling_NaN
        << endl;
}
```

```Output
Whether float objects have a signaling_NaN: 1
Whether double objects have a signaling_NaN: 1
Whether long int objects have a signaling_NaN: 0
```

### <a name="infinity"></a><a name="infinity"></a>infinito

Rappresentazione di un numero infinito positivo per un tipo, se disponibile.

```cpp
static constexpr Type infinity() throw();
```

#### <a name="return-value"></a>Valore restituito

Rappresentazione di un numero infinito positivo per un tipo, se disponibile.

#### <a name="remarks"></a>Commenti

Il valore restituito è significativo solo se [has_infinity](#has_infinity) è **`true`** .

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_infinity.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << numeric_limits<float>::has_infinity <<endl;
   cout << numeric_limits<double>::has_infinity<<endl;
   cout << numeric_limits<long double>::has_infinity <<endl;
   cout << numeric_limits<int>::has_infinity <<endl;
   cout << numeric_limits<__int64>::has_infinity <<endl;

   cout << "The representation of infinity for type float is: "
        << numeric_limits<float>::infinity( ) <<endl;
   cout << "The representation of infinity for type double is: "
        << numeric_limits<double>::infinity( ) <<endl;
   cout << "The representation of infinity for type long double is: "
        << numeric_limits<long double>::infinity( ) <<endl;
}
```

```Output
1
1
1
0
0
The representation of infinity for type float is: inf
The representation of infinity for type double is: inf
The representation of infinity for type long double is: inf
```

### <a name="is_bounded"></a><a name="is_bounded"></a>is_bounded

Verifica se il set di valori che può rappresentare è finito.

```cpp
static constexpr bool is_bounded = false;
```

#### <a name="return-value"></a>Valore restituito

**`true`** Se il tipo ha un set limitato di valori rappresentabili; in **`false`** caso contrario.

#### <a name="remarks"></a>Commenti

Tutti i tipi predefiniti hanno un set limitato di valori rappresentabili e restituiscono **`true`** .

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_is_bounded.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have bounded set "
        << "of representable values: "
        << numeric_limits<float>::is_bounded
        << endl;
   cout << "Whether double objects have bounded set "
        << "of representable values: "
        << numeric_limits<double>::is_bounded
        << endl;
   cout << "Whether long int objects have bounded set "
        << "of representable values: "
        << numeric_limits<long int>::is_bounded
        << endl;
   cout << "Whether unsigned char objects have bounded set "
        << "of representable values: "
        << numeric_limits<unsigned char>::is_bounded
        << endl;
}
```

```Output
Whether float objects have bounded set of representable values: 1
Whether double objects have bounded set of representable values: 1
Whether long int objects have bounded set of representable values: 1
Whether unsigned char objects have bounded set of representable values: 1
```

### <a name="is_exact"></a><a name="is_exact"></a>is_exact

Verifica se i calcoli eseguiti su un tipo sono privi di errori di arrotondamento.

```cpp
static constexpr bool is_exact = false;
```

#### <a name="return-value"></a>Valore restituito

**`true`** Se i calcoli sono privi di errori di arrotondamento; in **`false`** caso contrario.

#### <a name="remarks"></a>Commenti

Tutti i tipi Integer predefiniti hanno rappresentazioni esatte per i rispettivi valori e restituiscono **`false`** . Anche una rappresentazione a virgola fissa o razionale è considerata esatta, al contrario di una rappresentazione a virgola mobile.

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_is_exact.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have calculations "
        << "free of rounding errors: "
        << numeric_limits<float>::is_exact
        << endl;
   cout << "Whether double objects have calculations "
        << "free of rounding errors: "
        << numeric_limits<double>::is_exact
        << endl;
   cout << "Whether long int objects have calculations "
        << "free of rounding errors: "
        << numeric_limits<long int>::is_exact
        << endl;
   cout << "Whether unsigned char objects have calculations "
        << "free of rounding errors: "
        << numeric_limits<unsigned char>::is_exact
        << endl;
}
```

```Output
Whether float objects have calculations free of rounding errors: 0
Whether double objects have calculations free of rounding errors: 0
Whether long int objects have calculations free of rounding errors: 1
Whether unsigned char objects have calculations free of rounding errors: 1
```

### <a name="is_iec559"></a><a name="is_iec559"></a>is_iec559

Verifica se un tipo è conforme agli standard IEC 559.

```cpp
static constexpr bool is_iec559 = false;
```

#### <a name="return-value"></a>Valore restituito

**`true`** Se il tipo è conforme agli standard IEC 559; in **`false`** caso contrario.

#### <a name="remarks"></a>Commenti

Lo standard IEC 559 è uno standard internazionale per la rappresentazione di valori a virgola mobile e negli Stati Uniti è noto anche come IEEE 754.

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_is_iec559.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects conform to iec559 standards: "
        << numeric_limits<float>::is_iec559
        << endl;
   cout << "Whether double objects conform to iec559 standards: "
        << numeric_limits<double>::is_iec559
        << endl;
   cout << "Whether int objects conform to iec559 standards: "
        << numeric_limits<int>::is_iec559
        << endl;
   cout << "Whether unsigned char objects conform to iec559 standards: "
        << numeric_limits<unsigned char>::is_iec559
        << endl;
}
```

```Output
Whether float objects conform to iec559 standards: 1
Whether double objects conform to iec559 standards: 1
Whether int objects conform to iec559 standards: 0
Whether unsigned char objects conform to iec559 standards: 0
```

### <a name="is_integer"></a><a name="is_integer"></a>is_integer

Verifica se un tipo ha una rappresentazione in forma di Integer.

```cpp
static constexpr bool is_integer = false;
```

#### <a name="return-value"></a>Valore restituito

**`true`** Se il tipo ha una rappresentazione di tipo Integer; in **`false`** caso contrario.

#### <a name="remarks"></a>Commenti

Tutti i tipi Integer predefiniti hanno una rappresentazione esatta.

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_is_integer.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have an integral representation: "
        << numeric_limits<float>::is_integer
        << endl;
   cout << "Whether double objects have an integral representation: "
        << numeric_limits<double>::is_integer
        << endl;
   cout << "Whether int objects have an integral representation: "
        << numeric_limits<int>::is_integer
        << endl;
   cout << "Whether unsigned char objects have an integral representation: "
        << numeric_limits<unsigned char>::is_integer
        << endl;
}
```

```Output
Whether float objects have an integral representation: 0
Whether double objects have an integral representation: 0
Whether int objects have an integral representation: 1
Whether unsigned char objects have an integral representation: 1
```

### <a name="is_modulo"></a><a name="is_modulo"></a>is_modulo

Verifica se un **tipo** ha una rappresentazione modulo.

```cpp
static constexpr bool is_modulo = false;
```

#### <a name="return-value"></a>Valore restituito

**`true`** Se il tipo ha una rappresentazione modulo; in **`false`** caso contrario.

#### <a name="remarks"></a>Commenti

Una rappresentazione in forma di modulo è una rappresentazione in cui tutti i risultati vengono ridotti in forma di modulo. Tutti i tipi Integer senza segno predefiniti hanno una rappresentazione in forma di modulo.

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_is_modulo.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have a modulo representation: "
        << numeric_limits<float>::is_modulo
        << endl;
   cout << "Whether double objects have a modulo representation: "
        << numeric_limits<double>::is_modulo
        << endl;
   cout << "Whether signed char objects have a modulo representation: "
        << numeric_limits<signed char>::is_modulo
        << endl;
   cout << "Whether unsigned char objects have a modulo representation: "
        << numeric_limits<unsigned char>::is_modulo
        << endl;
}
```

```Output
Whether float objects have a modulo representation: 0
Whether double objects have a modulo representation: 0
Whether signed char objects have a modulo representation: 1
Whether unsigned char objects have a modulo representation: 1
```

### <a name="is_signed"></a><a name="is_signed"></a>is_signed

Verifica se un tipo ha una rappresentazione firmata.

```cpp
static constexpr bool is_signed = false;
```

#### <a name="return-value"></a>Valore restituito

**`true`** Se il tipo ha una rappresentazione firmata; in **`false`** caso contrario.

#### <a name="remarks"></a>Commenti

Il membro archivia true per un tipo che ha una rappresentazione firmata, ovvero per tutti i tipi Integer con segno e a virgola mobile predefiniti.

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_is_signaled.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have a signed representation: "
        << numeric_limits<float>::is_signed
        << endl;
   cout << "Whether double objects have a signed representation: "
        << numeric_limits<double>::is_signed
        << endl;
   cout << "Whether signed char objects have a signed representation: "
        << numeric_limits<signed char>::is_signed
        << endl;
   cout << "Whether unsigned char objects have a signed representation: "
        << numeric_limits<unsigned char>::is_signed
        << endl;
}
```

```Output
Whether float objects have a signed representation: 1
Whether double objects have a signed representation: 1
Whether signed char objects have a signed representation: 1
Whether unsigned char objects have a signed representation: 0
```

### <a name="is_specialized"></a><a name="is_specialized"></a>is_specialized

Verifica se un tipo ha una specializzazione esplicita definita nel modello di classe `numeric_limits` .

```cpp
static constexpr bool is_specialized = false;
```

#### <a name="return-value"></a>Valore restituito

**`true`** Se il tipo ha una specializzazione esplicita definita nel modello di classe; in **`false`** caso contrario.

#### <a name="remarks"></a>Commenti

Tutti i tipi scalari diversi dai puntatori hanno una specializzazione esplicita definita per il modello di classe `numeric_limits` .

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_is_specialized.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float objects have an explicit "
        << "specialization in the class: "
        << numeric_limits<float>::is_specialized
        << endl;
   cout << "Whether float* objects have an explicit "
        << "specialization in the class: "
        << numeric_limits<float*>::is_specialized
        << endl;
   cout << "Whether int objects have an explicit "
        << "specialization in the class: "
        << numeric_limits<int>::is_specialized
        << endl;
   cout << "Whether int* objects have an explicit "
        << "specialization in the class: "
        << numeric_limits<int*>::is_specialized
        << endl;
}
```

```Output
Whether float objects have an explicit specialization in the class: 1
Whether float* objects have an explicit specialization in the class: 0
Whether int objects have an explicit specialization in the class: 1
Whether int* objects have an explicit specialization in the class: 0
```

### <a name="lowest"></a><a name="lowest"></a>più basso

Restituisce il valore finito più negativo.

```cpp
static constexpr Type lowest() throw();
```

#### <a name="return-value"></a>Valore restituito

Restituisce il valore finito più negativo.

#### <a name="remarks"></a>Commenti

Restituisce il valore finito più negativo per il tipo (che è in genere `min()` per i tipi Integer e `-max()` per i tipi a virgola mobile). Il valore restituito è significativo se `is_bounded` è **`true`** .

### <a name="max"></a><a name="max"></a>Max

Restituisce il valore massimo finito per un tipo.

```cpp
static constexpr Type max() throw();
```

#### <a name="return-value"></a>Valore restituito

Valore massimo finito per un tipo.

#### <a name="remarks"></a>Commenti

Il valore finito massimo è INT_MAX per il tipo **`int`** e FLT_MAX per il tipo **`float`** . Il valore restituito è significativo se [is_bounded](#is_bounded) è **`true`** .

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_max.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main() {
   cout << "The maximum value for type float is:  "
        << numeric_limits<float>::max( )
        << endl;
   cout << "The maximum value for type double is:  "
        << numeric_limits<double>::max( )
        << endl;
   cout << "The maximum value for type int is:  "
        << numeric_limits<int>::max( )
        << endl;
   cout << "The maximum value for type short int is:  "
        << numeric_limits<short int>::max( )
        << endl;
}
```

### <a name="max_digits10"></a><a name="max_digits10"></a>max_digits10

Restituisce il numero di cifre decimali richiesto per garantire che due valori distinti del tipo abbiano rappresentazioni decimali distinte.

```cpp
static constexpr int max_digits10 = 0;
```

#### <a name="return-value"></a>Valore restituito

Restituisce il numero di cifre decimali richiesto per garantire che due valori distinti del tipo abbiano rappresentazioni decimali distinte.

#### <a name="remarks"></a>Commenti

Il membro archivia il numero di cifre decimali richiesto per garantire che due valori distinti del tipo abbiano rappresentazioni decimali distinte.

### <a name="max_exponent"></a><a name="max_exponent"></a>max_exponent

Restituisce l'esponente integrale positivo massimo che il tipo a virgola mobile può rappresentare come un valore finito quando una base di radice è elevata a tale potenza.

```cpp
static constexpr int max_exponent = 0;
```

#### <a name="return-value"></a>Valore restituito

Esponente integrale massimo basato su radice che il tipo può rappresentare.

#### <a name="remarks"></a>Commenti

La funzione membro restituita è significativa solo per i tipi a virgola mobile. `max_exponent`È il valore FLT_MAX_EXP per il tipo **`float`** .

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_max_exponent.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The maximum radix-based exponent for type float is:  "
        << numeric_limits<float>::max_exponent
        << endl;
   cout << "The maximum radix-based exponent for type double is:  "
        << numeric_limits<double>::max_exponent
        << endl;
   cout << "The maximum radix-based exponent for type long double is:  "
        << numeric_limits<long double>::max_exponent
        << endl;
}
```

```Output
The maximum radix-based exponent for type float is:  128
The maximum radix-based exponent for type double is:  1024
The maximum radix-based exponent for type long double is:  1024
```

### <a name="max_exponent10"></a><a name="max_exponent10"></a>max_exponent10

Restituisce l'esponente integrale positivo massimo che il tipo a virgola mobile può rappresentare come un valore finito quando una base di dieci è elevata a tale potenza.

```cpp
static constexpr int max_exponent10 = 0;
```

#### <a name="return-value"></a>Valore restituito

Esponente in base 10 integrale massimo che il tipo può rappresentare.

#### <a name="remarks"></a>Commenti

La funzione membro restituita è significativa solo per i tipi a virgola mobile. `max_exponent`È il valore FLT_MAX_10 per il tipo **`float`** .

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_max_exponent10.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The maximum base 10 exponent for type float is:  "
           << numeric_limits<float>::max_exponent10
           << endl;
   cout << "The maximum base 10 exponent for type double is:  "
           << numeric_limits<double>::max_exponent10
           << endl;
   cout << "The maximum base 10 exponent for type long double is:  "
           << numeric_limits<long double>::max_exponent10
           << endl;
}
```

```Output
The maximum base 10 exponent for type float is:  38
The maximum base 10 exponent for type double is:  308
The maximum base 10 exponent for type long double is:  308
```

### <a name="min"></a><a name="min"></a> min

Restituisce il valore normalizzato minimo per un tipo.

```cpp
static constexpr Type min() throw();
```

#### <a name="return-value"></a>Valore restituito

Valore normalizzato minimo per il tipo.

#### <a name="remarks"></a>Commenti

Il valore normalizzato minimo è INT_MIN per il tipo **`int`** e FLT_MIN per il tipo **`float`** . Il valore restituito è significativo se [is_bounded](#is_bounded) è **`true`** o se [is_signed](#is_signed) è **`false`** .

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_min.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The minimum value for type float is:  "
        << numeric_limits<float>::min( )
        << endl;
   cout << "The minimum value for type double is:  "
        << numeric_limits<double>::min( )
        << endl;
   cout << "The minimum value for type int is:  "
        << numeric_limits<int>::min( )
        << endl;
   cout << "The minimum value for type short int is:  "
        << numeric_limits<short int>::min( )
        << endl;
}
```

```Output
The minimum value for type float is:  1.17549e-038
The minimum value for type double is:  2.22507e-308
The minimum value for type int is:  -2147483648
The minimum value for type short int is:  -32768
```

### <a name="min_exponent"></a><a name="min_exponent"></a>min_exponent

Restituisce l'esponente integrale negativo massimo che il tipo a virgola mobile può rappresentare come un valore finito quando una base di radice è elevata a tale potenza.

```cpp
static constexpr int min_exponent = 0;
```

#### <a name="return-value"></a>Valore restituito

Esponente integrale minimo basato su radice che il tipo può rappresentare.

#### <a name="remarks"></a>Commenti

La funzione membro è significativa solo per i tipi a virgola mobile. `min_exponent`È il valore FLT_MIN_EXP per il tipo **`float`** .

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_min_exponent.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The minimum radix-based exponent for type float is:  "
        << numeric_limits<float>::min_exponent
        << endl;
   cout << "The minimum radix-based exponent for type double is:  "
        << numeric_limits<double>::min_exponent
        << endl;
   cout << "The minimum radix-based exponent for type long double is:  "
         << numeric_limits<long double>::min_exponent
        << endl;
}
```

```Output
The minimum radix-based exponent for type float is:  -125
The minimum radix-based exponent for type double is:  -1021
The minimum radix-based exponent for type long double is:  -1021
```

### <a name="min_exponent10"></a><a name="min_exponent10"></a>min_exponent10

Restituisce l'esponente integrale negativo massimo che il tipo a virgola mobile può rappresentare come un valore finito quando una base di dieci è elevata a tale potenza.

```cpp
static constexpr int min_exponent10 = 0;
```

#### <a name="return-value"></a>Valore restituito

Esponente in base 10 integrale minimo che il tipo può rappresentare.

#### <a name="remarks"></a>Commenti

La funzione membro è significativa solo per i tipi a virgola mobile. `min_exponent10`È il valore FLT_MIN_10_EXP per il tipo **`float`** .

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_min_exponent10.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The minimum base 10 exponent for type float is:  "
        << numeric_limits<float>::min_exponent10
        << endl;
   cout << "The minimum base 10 exponent for type double is:  "
        << numeric_limits<double>::min_exponent10
        << endl;
   cout << "The minimum base 10 exponent for type long double is:  "
        << numeric_limits<long double>::min_exponent10
        << endl;
}
```

```Output
The minimum base 10 exponent for type float is:  -37
The minimum base 10 exponent for type double is:  -307
The minimum base 10 exponent for type long double is:  -307
```

### <a name="quiet_nan"></a><a name="quiet_nan"></a>quiet_NaN

Restituisce la rappresentazione di un valore diverso da un numero (NaN) non interattivo per il tipo.

```cpp
static constexpr Type quiet_NaN() throw();
```

#### <a name="return-value"></a>Valore restituito

Rappresentazione di un numero (NaN) non interattivo per il tipo.

#### <a name="remarks"></a>Commenti

Il valore restituito è significativo solo se [has_quiet_NaN](#has_quiet_nan) è **`true`** .

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_quiet_nan.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The quiet NaN for type float is:  "
        << numeric_limits<float>::quiet_NaN( )
        << endl;
   cout << "The quiet NaN for type int is:  "
        << numeric_limits<int>::quiet_NaN( )
        << endl;
   cout << "The quiet NaN for type long double is:  "
        << numeric_limits<long double>::quiet_NaN( )
        << endl;
}
```

```Output
The quiet NaN for type float is:  1.#QNAN
The quiet NaN for type int is:  0
The quiet NaN for type long double is:  1.#QNAN
```

### <a name="radix"></a><a name="radix"></a>radice

Restituisce la base integrale, detta radice, usata per la rappresentazione di un tipo.

```cpp
static constexpr int radix = 0;
```

#### <a name="return-value"></a>Valore restituito

Base integrale per la rappresentazione del tipo.

#### <a name="remarks"></a>Commenti

La base è 2 per i tipi Integer predefiniti e la base a cui viene elevato l'esponente, o FLT_RADIX, per i tipi a virgola mobile predefiniti.

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_radix.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The base for type float is:  "
        << numeric_limits<float>::radix
        << endl;
   cout << "The base for type int is:  "
        << numeric_limits<int>::radix
        << endl;
   cout << "The base for type long double is:  "
        << numeric_limits<long double>::radix
        << endl;
}
```

```Output
The base for type float is:  2
The base for type int is:  2
The base for type long double is:  2
```

### <a name="round_error"></a><a name="round_error"></a>round_error

Restituisce il valore massimo per il tipo di errore di arrotondamento.

```cpp
static constexpr Type round_error() throw();
```

#### <a name="return-value"></a>Valore restituito

Errore massimo di arrotondamento per il tipo.

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_round_error.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The maximum rounding error for type float is:  "
        << numeric_limits<float>::round_error( )
        << endl;
   cout << "The maximum rounding error for type int is:  "
        << numeric_limits<int>::round_error( )
        << endl;
   cout << "The maximum rounding error for type long double is:  "
        << numeric_limits<long double>::round_error( )
        << endl;
}
```

```Output
The maximum rounding error for type float is:  0.5
The maximum rounding error for type int is:  0
The maximum rounding error for type long double is:  0.5
```

### <a name="round_style"></a><a name="round_style"></a>round_style

Restituisce un valore che descrive i vari metodi che un'implementazione può scegliere per l'arrotondamento di un valore a virgola mobile in un valore intero.

```cpp
static constexpr float_round_style round_style = round_toward_zero;
```

#### <a name="return-value"></a>Valore restituito

Valore dell'enumerazione `float_round_style` che descrive lo stile di arrotondamento.

#### <a name="remarks"></a>Commenti

Il membro archivia un valore che descrive i vari metodi che un'implementazione può scegliere per l'arrotondamento di un valore a virgola mobile in un valore integer.

Lo stile di arrotondamento è hardcoded in questa implementazione, perciò anche se il programma viene avviato con una diversa modalità di arrotondamento, tale valore non verrà modificato.

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_round_style.cpp
// compile with: /EHsc
#include <iostream>
#include <float.h>
#include <limits>

using namespace std;

int main( )
{
   cout << "The rounding style for a double type is: "
        << numeric_limits<double>::round_style << endl;
   _controlfp_s(NULL,_RC_DOWN,_MCW_RC );
   cout << "The rounding style for a double type is now: "
        << numeric_limits<double>::round_style << endl;
   cout << "The rounding style for an int type is: "
        << numeric_limits<int>::round_style << endl;
}
```

```Output
The rounding style for a double type is: 1
The rounding style for a double type is now: 1
The rounding style for an int type is: 0
```

### <a name="signaling_nan"></a><a name="signaling_nan"></a>signaling_NaN

Restituisce la rappresentazione di un valore diverso da un numero (NaN) con segnalazione per il tipo.

```cpp
static constexpr Type signaling_NaN() throw();
```

#### <a name="return-value"></a>Valore restituito

Rappresentazione di un numero (NaN) non con segnalazione per il tipo.

#### <a name="remarks"></a>Commenti

Il valore restituito è significativo solo se [has_signaling_NaN](#has_signaling_nan) è **`true`** .

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_signaling_nan.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "The signaling NaN for type float is:  "
        << numeric_limits<float>::signaling_NaN( )
        << endl;
   cout << "The signaling NaN for type int is:  "
        << numeric_limits<int>::signaling_NaN( )
        << endl;
   cout << "The signaling NaN for type long double is:  "
        << numeric_limits<long double>::signaling_NaN( )
        << endl;
}
```

### <a name="tinyness_before"></a><a name="tinyness_before"></a>tinyness_before

Verifica se un tipo può stabilire che un valore è troppo piccolo per essere rappresentato come un valore normalizzato prima dell'arrotondamento.

```cpp
static constexpr bool tinyness_before = false;
```

#### <a name="return-value"></a>Valore restituito

**`true`** Se il tipo può rilevare valori piccoli prima dell'arrotondamento; in **`false`** caso contrario,.

#### <a name="remarks"></a>Commenti

I tipi in grado di rilevare valori di piccole dimensioni erano inclusi come opzione con le rappresentazioni IEC 559 a virgola mobile e la relativa implementazione può influenzare alcuni risultati.

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_tinyness_before.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float types can detect tinyness before rounding: "
        << numeric_limits<float>::tinyness_before
        << endl;
   cout << "Whether double types can detect tinyness before rounding: "
        << numeric_limits<double>::tinyness_before
        << endl;
   cout << "Whether long int types can detect tinyness before rounding: "
        << numeric_limits<long int>::tinyness_before
        << endl;
   cout << "Whether unsigned char types can detect tinyness before rounding: "
        << numeric_limits<unsigned char>::tinyness_before
        << endl;
}
```

```Output
Whether float types can detect tinyness before rounding: 1
Whether double types can detect tinyness before rounding: 1
Whether long int types can detect tinyness before rounding: 0
Whether unsigned char types can detect tinyness before rounding: 0
```

### <a name="traps"></a><a name="traps"></a>Trap

Verifica se la registrazione che segnala le eccezioni aritmetiche è implementata per un tipo.

```cpp
static constexpr bool traps = false;
```

#### <a name="return-value"></a>Valore restituito

**`true`** Se l'intercettazione viene implementata per il tipo. in **`false`** caso contrario,

#### <a name="example"></a>Esempio

```cpp
// numeric_limits_traps.cpp
// compile with: /EHsc
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   cout << "Whether float types have implemented trapping: "
        << numeric_limits<float>::traps
        << endl;
   cout << "Whether double types have implemented trapping: "
        << numeric_limits<double>::traps
        << endl;
   cout << "Whether long int types have implemented trapping: "
        << numeric_limits<long int>::traps
        << endl;
   cout << "Whether unsigned char types have implemented trapping: "
        << numeric_limits<unsigned char>::traps
        << endl;
}
```

```Output
Whether float types have implemented trapping: 1
Whether double types have implemented trapping: 1
Whether long int types have implemented trapping: 0
Whether unsigned char types have implemented trapping: 0
```
