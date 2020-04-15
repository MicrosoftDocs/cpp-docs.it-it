---
title: Classe cauchy_distribution
ms.date: 11/04/2016
f1_keywords:
- random/std::cauchy_distribution
- random/std::cauchy_distribution::reset
- random/std::cauchy_distribution::a
- random/std::cauchy_distribution::b
- random/std::cauchy_distribution::param
- random/std::cauchy_distribution::min
- random/std::cauchy_distribution::max
- random/std::cauchy_distribution::operator()
- random/std::cauchy_distribution::param_type
- random/std::cauchy_distribution::param_type::a
- random/std::cauchy_distribution::param_type::b
- random/std::cauchy_distribution::param_type::operator==
- random/std::cauchy_distribution::param_type::operator!=
helpviewer_keywords:
- std::cauchy_distribution [C++]
- std::cauchy_distribution [C++], reset
- std::cauchy_distribution [C++], a
- std::cauchy_distribution [C++], b
- std::cauchy_distribution [C++], param
- std::cauchy_distribution [C++], min
- std::cauchy_distribution [C++], max
- std::cauchy_distribution [C++], param_type
- std::cauchy_distribution [C++], param_type
ms.assetid: 21522351-f2f1-46d9-97f0-d358c932356c
ms.openlocfilehash: ea75395c14c0babf5a047e7ae8f937e2a237b445
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317132"
---
# <a name="cauchy_distribution-class"></a>Classe cauchy_distribution

Genera una distribuzione di Cauchy.

## <a name="syntax"></a>Sintassi

```cpp
template<class RealType = double>
class cauchy_distribution {
public:
   // types
   typedef RealType result_type;
   struct param_type;

   // constructor and reset functions
   explicit cauchy_distribution(result_type a = 0.0, result_type b = 1.0);
   explicit cauchy_distribution(const param_type& parm);
   void reset();

   // generating functions
   template <class URNG>
   result_type operator()(URNG& gen);
   template <class URNG>
   result_type operator()(URNG& gen, const param_type& parm);

   // property functions
   result_type a() const;
   result_type b() const;
   param_type param() const;
   void param(const param_type& parm);
   result_type min() const;
   result_type max() const;
   };
```

### <a name="parameters"></a>Parametri

*Tipo reale*\
Il tipo di risultato a virgola mobile è **double**. Per i tipi [ \< ](../standard-library/random.md)possibili, vedere random>.

*URNG*\
Il motore generatore di numeri casuali uniformi. Per i tipi [ \< ](../standard-library/random.md)possibili, vedere random>.

## <a name="remarks"></a>Osservazioni

Il modello di classe descrive una distribuzione che produce valori di un tipo a virgola mobile specificato dall'utente o tipo **double** se non ne viene fornito alcuno, distribuito in base alla distribuzione Cauchy. La tabella seguente include collegamenti ad articoli relativi ai singoli membri.

||||
|-|-|-|
|[cauchy_distribution](#cauchy_distribution)|`cauchy_distribution::a`|`cauchy_distribution::param`|
|`cauchy_distribution::operator()`|`cauchy_distribution::b`|[param_type](#param_type)|

Le funzioni di proprietà `a()` e `b()` restituiscono i valori rispettivi per i parametri di distribuzione archiviati `a` e `b`.

Il membro di proprietà `param()` imposta o restituisce il pacchetto del parametro di distribuzione archiviato `param_type`.

Le funzioni membro `min()` e `max()` restituiscono rispettivamente il minor risultato possibile e il maggior risultato possibile.

La funzione membro `reset()` rimuove gli eventuali valori memorizzati nella cache, in modo che il risultato della successiva chiamata a `operator()` non dipenda da alcun valore ottenuto dal motore prima della chiamata.

Le funzioni membro `operator()` restituiscono il successivo valore generato basato sul motore URNG, dal pacchetto di parametri corrente o da quello specificato.

Per ulteriori informazioni sulle classi di [ \< ](../standard-library/random.md)distribuzione e sui relativi membri, vedere random>.

Per informazioni dettagliate, vedere l'articolo di Wolfram MathWorld relativo alla [distribuzione di Cauchy](https://go.microsoft.com/fwlink/p/?linkid=400523).

## <a name="example"></a>Esempio

```cpp
// compile with: /EHsc /W4
#include <random>
#include <iostream>
#include <iomanip>
#include <string>
#include <map>

void test(const double a, const double b, const int s) {

    // uncomment to use a non-deterministic generator
    //    std::random_device gen;

    std::mt19937 gen(1701);

    std::cauchy_distribution<> distr(a, b);

    std::cout << std::endl;
    std::cout << "min() == " << distr.min() << std::endl;
    std::cout << "max() == " << distr.max() << std::endl;
    std::cout << "a() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.a() << std::endl;
    std::cout << "b() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.b() << std::endl;

    // generate the distribution as a histogram
    std::map<double, int> histogram;
    for (int i = 0; i < s; ++i) {
        ++histogram[distr(gen)];
    }

    // print results
    std::cout << "Distribution for " << s << " samples:" << std::endl;
    int counter = 0;
    for (const auto& elem : histogram) {
        std::cout << std::fixed << std::setw(11) << ++counter << ": "
            << std::setw(14) << std::setprecision(10) << elem.first << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    double a_dist = 0.0;
    double b_dist = 1;

    int samples = 10;

    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;
    std::cout << "Enter a floating point value for the 'a' distribution parameter: ";
    std::cin >> a_dist;
    std::cout << "Enter a floating point value for the 'b' distribution parameter (must be greater than zero): ";
    std::cin >> b_dist;
    std::cout << "Enter an integer value for the sample count: ";
    std::cin >> samples;

    test(a_dist, b_dist, samples);
}
```

Prima esecuzione:

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter a floating point value for the 'a' distribution parameter: 0
Enter a floating point value for the 'b' distribution parameter (must be greater than zero): 1
Enter an integer value for the sample count: 10

min() == -1.79769e+308
max() == 1.79769e+308
a() == 0.0000000000
b() == 1.0000000000
Distribution for 10 samples:
    1: -3.4650392984
    2: -2.6369564174
    3: -0.0786978867
    4: -0.0609632093
    5: 0.0589387400
    6: 0.0589539764
    7: 0.1004592006
    8: 1.0965724260
    9: 1.4389408122
    10: 2.5253154706
```

Seconda esecuzione:

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter a floating point value for the 'a' distribution parameter: 0
Enter a floating point value for the 'b' distribution parameter (must be greater than zero): 10
Enter an integer value for the sample count: 10

min() == -1.79769e+308
max() == 1.79769e+308
a() == 0.0000000000
b() == 10.0000000000
Distribution for 10 samples:
    1: -34.6503929840
    2: -26.3695641736
    3: -0.7869788674
    4: -0.6096320926
    5: 0.5893873999
    6: 0.5895397637
    7: 1.0045920062
    8: 10.9657242597
    9: 14.3894081218
    10: 25.2531547063
```

Terza esecuzione:

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter a floating point value for the 'a' distribution parameter: 10
Enter a floating point value for the 'b' distribution parameter (must be greater than zero): 10
Enter an integer value for the sample count: 10

min() == -1.79769e+308
max() == 1.79769e+308
a() == 10.0000000000
b() == 10.0000000000
Distribution for 10 samples:
    1: -24.6503929840
    2: -16.3695641736
    3: 9.2130211326
    4: 9.3903679074
    5: 10.5893873999
    6: 10.5895397637
    7: 11.0045920062
    8: 20.9657242597
    9: 24.3894081218
    10: 35.2531547063
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<random>

**Spazio dei nomi:** std

## <a name="cauchy_distributioncauchy_distribution"></a><a name="cauchy_distribution"></a>cauchy_distribution::cauchy_distribution

Costruisce la distribuzione.

```cpp
explicit cauchy_distribution(result_type a = 0.0, result_type b = 1.0);
explicit cauchy_distribution(const param_type& parm);
```

### <a name="parameters"></a>Parametri

*Un*\
Parametro di distribuzione `a`.

*B*\
Parametro di distribuzione `b`.

*Parm*\
Struttura `param_type` usata per costruire la distribuzione.

### <a name="remarks"></a>Osservazioni

**Prerequisito:**`0.0 < b`

Il primo costruttore crea un oggetto il cui valore `a` archiviato include il valore *a* e il cui valore `b` archiviato include il valore *b*.

Il secondo costruttore costruisce un oggetto i cui parametri archiviati sono inizializzati da *parm*. È possibile ottenere e impostare i parametri correnti di una distribuzione esistente chiamando la funzione membro `param()`.

## <a name="cauchy_distributionparam_type"></a><a name="param_type"></a>cauchy_distribution::param_type

Archivia tutti i parametri della distribuzione.

```cpp
struct param_type {
   typedef cauchy_distribution<result_type> distribution_type;
   param_type(result_type a = 0.0, result_type b = 1.0);
   result_type a() const;
   result_type b() const;

   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };
```

### <a name="parameters"></a>Parametri

*Un*\
Parametro di distribuzione `a`.

*B*\
Parametro di distribuzione `b`.

*va bene*\
Oggetto `param_type` da confrontare con questo oggetto.

### <a name="remarks"></a>Osservazioni

**Prerequisito:**`0.0 < b`

Questa struttura può essere passata al costruttore di classe della distribuzione durante la creazione di istanze, alla funzione membro `param()` per impostare i parametri archiviati di una distribuzione esistente e a `operator()` per l'uso in sostituzione dei parametri archiviati.

## <a name="see-also"></a>Vedere anche

[\<>casuali](../standard-library/random.md)
