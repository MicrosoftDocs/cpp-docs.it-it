---
title: Classe student_t_distribution
ms.date: 11/04/2016
f1_keywords:
- random/std::student_t_distribution
- random/std::student_t_distribution::result_type
- random/std::student_t_distribution::reset
- random/std::student_t_distribution::operator()
- random/std::student_t_distribution::n
- random/std::student_t_distribution::param
- random/std::student_t_distribution::min
- random/std::student_t_distribution::max
- random/std::student_t_distribution::param_type
helpviewer_keywords:
- std::student_t_distribution [C++]
- std::student_t_distribution [C++], result_type
- std::student_t_distribution [C++], reset
- std::student_t_distribution [C++], n
- std::student_t_distribution [C++], param
- std::student_t_distribution [C++], min
- std::student_t_distribution [C++], max
- std::student_t_distribution [C++], param_type
ms.assetid: 87b48127-9311-4d07-95df-833ed46bf0b1
ms.openlocfilehash: 23ded8704e1e29dabddadfdc0a1ced3644374ad9
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88840960"
---
# <a name="student_t_distribution-class"></a>Classe student_t_distribution

Genera una distribuzione Student-*t*.

## <a name="syntax"></a>Sintassi

```cpp
template<class RealType = double>
class student_t_distribution {
public:
   // types
   typedef RealType result_type;
   struct param_type;

   // constructor and reset functions
   explicit student_t_distribution(result_type n = 1.0);
   explicit student_t_distribution(const param_type& parm);
   void reset();

   // generating functions
   template <class URNG>
   result_type operator()(URNG& gen);
   template <class URNG>
   result_type operator()(URNG& gen, const param_type& parm);

   // property functions
   result_type n() const;
   param_type param() const;
   void param(const param_type& parm);
   result_type min() const;
   result_type max() const;
   };
```

### <a name="parameters"></a>Parametri

*RealType*\
Il tipo di risultato a virgola mobile, il valore predefinito è **`double`** . Per i tipi possibili, vedere [\<random>](../standard-library/random.md) .

## <a name="remarks"></a>Osservazioni

Il modello di classe descrive una distribuzione che produce valori di un tipo integrale specificato dall'utente o di tipo **`double`** se non ne viene fornito alcuno, distribuiti in base alla distribuzione *t*di Student. La tabella seguente include collegamenti ad articoli relativi ai singoli membri.

[student_t_distribution](#student_t_distribution)\
[param_type](#param_type)

La funzione di proprietà `n()` restituisce il valore per il parametro di distribuzione archiviato `n`.

Per ulteriori informazioni sulle classi di distribuzione e i relativi membri, vedere [\<random>](../standard-library/random.md) .

Per informazioni dettagliate sulla distribuzione Student-*t*, vedere l'articolo di Wolfram MathWorld [Students t-Distribution](https://mathworld.wolfram.com/Studentst-Distribution.html) (Distribuzione Student-t).

## <a name="example"></a>Esempio

```cpp
// compile with: /EHsc /W4
#include <random>
#include <iostream>
#include <iomanip>
#include <string>
#include <map>

void test(const double n, const int s) {

    // uncomment to use a non-deterministic generator
    //    std::random_device gen;
    std::mt19937 gen(1701);

    std::student_t_distribution<> distr(n);

    std::cout << std::endl;
    std::cout << "min() == " << distr.min() << std::endl;
    std::cout << "max() == " << distr.max() << std::endl;
    std::cout << "n() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.n() << std::endl;

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
    double n_dist = 0.5;
    int samples = 10;

    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;
    std::cout << "Enter a floating point value for the 'n' distribution parameter (must be greater than zero): ";
    std::cin >> n_dist;
    std::cout << "Enter an integer value for the sample count: ";
    std::cin >> samples;

    test(n_dist, samples);
}
```

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter a floating point value for the 'n' distribution parameter (must be greater than zero): 1
Enter an integer value for the sample count: 10

min() == -1.79769e+308
max() == 1.79769e+308
n() == 1.0000000000
Distribution for 10 samples:
    1: -1.3084956212
    2: -1.0899518684
    3: -0.9568771388
    4: -0.9372088821
    5: -0.7381334669
    6: -0.2488074854
    7: -0.2028714601
    8: 1.4013074495
    9: 5.3244792236
    10: 92.7084335614
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<random>

**Spazio dei nomi:** std

## <a name="student_t_distributionstudent_t_distribution"></a><a name="student_t_distribution"></a> student_t_distribution:: student_t_distribution

Costruisce la distribuzione.

```cpp
explicit student_t_distribution(RealType n = 1.0);
explicit student_t_distribution(const param_type& parm);
```

### <a name="parameters"></a>Parametri

*n*\
Parametro di distribuzione `n`.

*parm*\
Pacchetto di parametri usato per costruire la distribuzione.

### <a name="remarks"></a>Osservazioni

**Precondizione:**`0.0 < n`

Il primo costruttore crea un oggetto il cui valore `n` archiviato include il valore *n*.

Il secondo costruttore costruisce un oggetto i cui parametri archiviati sono inizializzati da *parm*. È possibile ottenere e impostare i parametri correnti di una distribuzione esistente chiamando la funzione membro `param()`.

## <a name="student_t_distributionparam_type"></a><a name="param_type"></a> student_t_distribution::p aram_type

Archivia tutti i parametri della distribuzione.

```cpp
struct param_type {
   typedef student_t_distribution<result_type> distribution_type;
   param_type(result_type n = 1.0);
   result_type n() const;

   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };
```

### <a name="parameters"></a>Parametri

*n*\
Parametro di distribuzione `n`.

*Ok*\
Oggetto `param_type` da confrontare con questo oggetto.

### <a name="remarks"></a>Osservazioni

**Precondizione:**`0.0 < n`

Questa struttura può essere passata al costruttore di classe della distribuzione durante la creazione di istanze, alla funzione membro `param()` per impostare i parametri archiviati di una distribuzione esistente e a `operator()` per l'uso in sostituzione dei parametri archiviati.

## <a name="see-also"></a>Vedere anche

[\<random>](../standard-library/random.md)
