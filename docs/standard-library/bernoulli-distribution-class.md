---
title: Classe bernoulli_distribution
ms.date: 11/04/2016
f1_keywords:
- random/std::bernoulli_distribution
- random/std::bernoulli_distribution::reset
- random/std::bernoulli_distribution::p
- random/std::bernoulli_distribution::param
- random/std::bernoulli_distribution::min
- random/std::bernoulli_distribution::max
- random/std::bernoulli_distribution::operator()
- random/std::bernoulli_distribution::param_type
- random/std::bernoulli_distribution::param_type::p
- random/std::bernoulli_distribution::param_type::operator==
- random/std::bernoulli_distribution::param_type::operator!=
helpviewer_keywords:
- std::bernoulli_distribution [C++]
- std::bernoulli_distribution [C++], reset
- std::bernoulli_distribution [C++], p
- std::bernoulli_distribution [C++], param
- std::bernoulli_distribution [C++], min
- std::bernoulli_distribution [C++], max
- std::bernoulli_distribution [C++], param_type
- std::bernoulli_distribution [C++], param_type
ms.assetid: 586bcde1-95ca-411a-bf17-4aaf19482f34
ms.openlocfilehash: 6a53707d823ced7316604f75691194dc6e05545e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81364853"
---
# <a name="bernoulli_distribution-class"></a>Classe bernoulli_distribution

Genera una distribuzione Bernoulli.

## <a name="syntax"></a>Sintassi

```cpp
class bernoulli_distribution
   {
public:
   // types
   typedef bool result_type;
   struct param_type;

   // constructors and reset functions
   explicit bernoulli_distribution(double p = 0.5);
   explicit bernoulli_distribution(const param_type& parm);
   void reset();

   // generating functions
   template <class URNG>
   result_type operator()(URNG& gen);
   template <class URNG>
   result_type operator()(URNG& gen, const param_type& parm);

   // property functions
   double p() const;
   param_type param() const;
   void param(const param_type& parm);
   result_type min() const;
   result_type max() const;
   };
```

### <a name="parameters"></a>Parametri

*URNG*\
Il motore generatore di numeri casuali uniformi. Per i tipi [ \< ](../standard-library/random.md)possibili, vedere random>.

## <a name="remarks"></a>Osservazioni

La classe descrive una distribuzione che produce valori di tipo **bool**, distribuiti in base alla funzione di probabilità discreta della distribuzione di Bernoulli. La tabella seguente include collegamenti ad articoli relativi ai singoli membri.

||||
|-|-|-|
|[bernoulli_distribution](#bernoulli_distribution)|`bernoulli_distribution::p`|`bernoulli_distribution::param`|
|`bernoulli_distribution::operator()`||[param_type](#param_type)|

Il membro di proprietà `p()` restituisce il valore per il parametro di distribuzione attualmente archiviato `p`.

Il membro di proprietà `param()` imposta o restituisce il pacchetto del parametro di distribuzione archiviato `param_type`.

Le funzioni membro `min()` e `max()` restituiscono rispettivamente il minor risultato possibile e il maggior risultato possibile.

La funzione membro `reset()` rimuove gli eventuali valori memorizzati nella cache, in modo che il risultato della successiva chiamata a `operator()` non dipenda da alcun valore ottenuto dal motore prima della chiamata.

Le funzioni membro `operator()` restituiscono il successivo valore generato basato sul motore URNG, dal pacchetto di parametri corrente o da quello specificato.

Per ulteriori informazioni sulle classi di [ \< ](../standard-library/random.md)distribuzione e sui relativi membri, vedere random>.

Per informazioni dettagliate sulla funzione di probabilità discreta di Bernoulli, vedere l'articolo di Wolfram MathWorld relativo alla [Distribuzione di Bernoulli](https://go.microsoft.com/fwlink/p/?linkid=398467).

## <a name="example"></a>Esempio

```cpp
// compile with: /EHsc /W4
#include <random>
#include <iostream>
#include <iomanip>
#include <string>
#include <map>

void test(const double p, const int s) {

    // uncomment to use a non-deterministic seed
    //    std::random_device rd;
    //    std::mt19937 gen(rd());
    std::mt19937 gen(1729);

    std::bernoulli_distribution distr(p);

    std::cout << "p == " << distr.p() << std::endl;

    // generate the distribution as a histogram
    std::map<bool, int> histogram;
    for (int i = 0; i < s; ++i) {
        ++histogram[distr(gen)];
    }

    // print results
    std::cout << "Histogram for " << s << " samples:" << std::endl;
    for (const auto& elem : histogram) {
        std::cout << std::boolalpha << std::setw(5) << elem.first << ' ' << std::string(elem.second, ':') << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    double p_dist = 0.5;
    int samples = 100;

    std::cout << "Use CTRL-Z to bypass data entry and run using default values." << std::endl;
    std::cout << "Enter a double value for p distribution (where 0.0 <= p <= 1.0): ";
    std::cin >> p_dist;
    std::cout << "Enter an integer value for a sample count: ";
    std::cin >> samples;

    test(p_dist, samples);
}
```

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter a double value for p distribution (where 0.0 <= p <= 1.0): .45
Enter an integer value for a sample count: 100
p == 0.45
Histogram for 100 samples:
false :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
true :::::::::::::::::::::::::::::::::::::::::
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<random>

**Spazio dei nomi:** std

## <a name="bernoulli_distributionbernoulli_distribution"></a><a name="bernoulli_distribution"></a>bernoulli_distribution::bernoulli_distribution

Costruisce la distribuzione.

```cpp
explicit bernoulli_distribution(double p = 0.5);
explicit bernoulli_distribution(const param_type& parm);
```

### <a name="parameters"></a>Parametri

*P*\
Parametro di distribuzione `p` archiviato.

*Parm*\
Struttura `param_type` usata per costruire la distribuzione.

### <a name="remarks"></a>Osservazioni

**Prerequisito:**`0.0 ≤ p ≤ 1.0`

Il primo costruttore crea un oggetto il cui valore `p` archiviato include il valore *p*.

Il secondo costruttore costruisce un oggetto i cui parametri archiviati sono inizializzati da *parm*. È possibile ottenere e impostare i parametri correnti di una distribuzione esistente chiamando la funzione membro `param()`.

## <a name="bernoulli_distributionparam_type"></a><a name="param_type"></a>bernoulli_distribution::param_type

Contiene i parametri della distribuzione.

struct param_type bernoulli_distribution distribution_type; param_type(double p - 0,5); double p() const;

   bool operator==(const param_type& right) const; bool operator!=(const param_type& right) const; };

### <a name="parameters"></a>Parametri

*P*\
Parametro di distribuzione `p` archiviato.

### <a name="remarks"></a>Osservazioni

**Prerequisito:**`0.0 ≤ p ≤ 1.0`

Questa struttura può essere passata al costruttore di classe della distribuzione durante la creazione di istanze, alla funzione membro `param()` per impostare i parametri archiviati di una distribuzione esistente e a `operator()` per l'uso in sostituzione dei parametri archiviati.

## <a name="see-also"></a>Vedere anche

[\<>casuali](../standard-library/random.md)
