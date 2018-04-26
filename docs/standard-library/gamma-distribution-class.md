---
title: Classe gamma_distribution | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- random/std::gamma_distribution
- random/std::gamma_distribution::reset
- random/std::gamma_distribution::alpha
- random/std::gamma_distribution::beta
- random/std::gamma_distribution::param
- random/std::gamma_distribution::min
- random/std::gamma_distribution::max
- random/std::gamma_distribution::operator()
- random/std::gamma_distribution::param_type
- random/std::gamma_distribution::param_type::alpha
- random/std::gamma_distribution::param_type::beta
- random/std::gamma_distribution::param_type::operator==
- random/std::gamma_distribution::param_type::operator!=
dev_langs:
- C++
helpviewer_keywords:
- std::gamma_distribution [C++]
- std::gamma_distribution [C++], reset
- std::gamma_distribution [C++], alpha
- std::gamma_distribution [C++], beta
- std::gamma_distribution [C++], param
- std::gamma_distribution [C++], min
- std::gamma_distribution [C++], max
- std::gamma_distribution [C++], param_type
- std::gamma_distribution [C++], param_type
ms.assetid: 2a6798ac-6152-41d7-8ef6-d684d92f1572
caps.latest.revision: 18
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7aed8db563b92fab4a6cf38d74ca4f16779ed309
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="gammadistribution-class"></a>Classe gamma_distribution

Genera una distribuzione gamma.

## <a name="syntax"></a>Sintassi

```cpp
template<class RealType = double>
class gamma_distribution {
public:
    // types
    typedef RealType result_type;
    struct param_type;

    // constructors and reset functions
    explicit gamma_distribution(result_type alpha = 1.0, result_type beta = 1.0);
    explicit gamma_distribution(const param_type& parm);
    void reset();

    // generating functions
    template <class URNG>
    result_type operator()(URNG& gen);
    template <class URNG>
    result_type operator()(URNG& gen, const param_type& parm);

    // property functions
    result_type alpha() const;
    result_type beta() const;
    param_type param() const;
    void param(const param_type& parm);
    result_type min() const;
    result_type max() const;
};
```

### <a name="parameters"></a>Parametri

*RealType* valore predefinito è il tipo di risultato a virgola mobile, `double`. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).

*URNG* Motore di generazione di numeri casuali uniformi. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).

## <a name="remarks"></a>Note

La classe modello descrive una distribuzione che produce valori di un tipo a virgola mobile specificato dall'utente (o di tipo `double` se non ne viene specificato alcuno), distribuiti in base alla distribuzione gamma. La tabella seguente include collegamenti ad articoli relativi ai singoli membri.

||||
|-|-|-|
|[gamma_distribution](#gamma_distribution)|`gamma_distribution::alpha`|`gamma_distribution::param`|
|`gamma_distribution::operator()`|`gamma_distribution::beta`|[param_type](#param_type)|

Le funzioni di proprietà `alpha()` e `beta()` restituiscono i valori rispettivi per i parametri di distribuzione archiviati *alpha* e *beta*.

Il membro di proprietà `param()` imposta o restituisce il pacchetto di parametri di distribuzione archiviati `param_type`.

Le funzioni membro `min()` e `max()` restituiscono rispettivamente il minor risultato possibile e il maggior risultato possibile.

La funzione membro `reset()` rimuove gli eventuali valori memorizzati nella cache, in modo che il risultato della successiva chiamata a `operator()` non dipenda da alcun valore ottenuto dal motore prima della chiamata.

Le funzioni membro `operator()` restituiscono il successivo valore generato basato sul motore URNG, dal pacchetto di parametri corrente o da quello specificato.

Per altre informazioni sulle classi di distribuzione e sui rispettivi membri, vedere [\<random>](../standard-library/random.md).

Per informazioni dettagliate, vedere l'articolo di Wolfram MathWorld relativo alla [distribuzione gamma](http://go.microsoft.com/fwlink/p/?linkid=401111).

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

    std::gamma_distribution<> distr(a, b);

    std::cout << std::endl;
    std::cout << "min() == " << distr.min() << std::endl;
    std::cout << "max() == " << distr.max() << std::endl;
    std::cout << "alpha() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.alpha() << std::endl;
    std::cout << "beta() == " << std::fixed << std::setw(11) << std::setprecision(10) << distr.beta() << std::endl;

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
    std::cout << "Enter a floating point value for the 'alpha' distribution parameter (must be greater than zero): ";
    std::cin >> a_dist;
    std::cout << "Enter a floating point value for the 'beta' distribution parameter (must be greater than zero): ";
    std::cin >> b_dist;
    std::cout << "Enter an integer value for the sample count: ";
    std::cin >> samples;

    test(a_dist, b_dist, samples);
}
```

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter a floating point value for the 'alpha' distribution parameter (must be greater than zero): 1
Enter a floating point value for the 'beta' distribution parameter (must be greater than zero): 1
Enter an integer value for the sample count: 10

min() == 4.94066e-324
max() == 1.79769e+308
alpha() == 1.0000000000
beta() == 1.0000000000
Distribution for 10 samples:
    1: 0.0936880533
    2: 0.1225944894
    3: 0.6443593183
    4: 0.6551171649
    5: 0.7313457551
    6: 0.7313557977
    7: 0.7590097389
    8: 1.4466885214
    9: 1.6434088411
    10: 2.1201210996
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<random>

**Spazio dei nomi:** std

## <a name="gamma_distribution"></a>  gamma_distribution::gamma_distribution

Costruisce la distribuzione.

```cpp
explicit gamma_distribution(result_type alpha = 1.0, result_type beta = 1.0);
explicit gamma_distribution(const param_type& parm);
```

### <a name="parameters"></a>Parametri

*Alpha* il `alpha` parametro di distribuzione.

*Beta* il `beta` parametro di distribuzione.

*Parm* struttura di parametri usata per costruire la distribuzione.

### <a name="remarks"></a>Note

**Precondizione:** `0.0 < alpha` e `0.0 < beta`

Il primo costruttore crea un oggetto il cui valore `alpha` archiviato include il valore *alpha* e il cui valore `beta` archiviato include il valore *beta*.

Il secondo costruttore crea un oggetto i cui parametri archiviati sono inizializzati da *parm*. È possibile ottenere e impostare i parametri correnti di una distribuzione esistente chiamando la funzione membro `param()`.

## <a name="param_type"></a>  gamma_distribution::param_type

Archivia i parametri della distribuzione.

```cpp
struct param_type {
   typedef gamma_distribution<result_type> distribution_type;
   param_type(result_type alpha = 1.0, result_type beta 1.0);
   result_type alpha() const;
   result_type beta() const;

   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };
```

### <a name="parameters"></a>Parametri

*Alpha* il `alpha` parametro di distribuzione.

*Beta* il `beta` parametro di distribuzione.

*a destra* il `param_type` istanza da confrontare per.

### <a name="remarks"></a>Note

**Precondizione:** `0.0 < alpha` e `0.0 < beta`

Questa struttura può essere passata al costruttore di classe della distribuzione durante la creazione di istanze, alla funzione membro `param()` per impostare i parametri archiviati di una distribuzione esistente e a `operator()` per l'uso in sostituzione dei parametri archiviati.

## <a name="see-also"></a>Vedere anche

[\<random>](../standard-library/random.md)<br/>
