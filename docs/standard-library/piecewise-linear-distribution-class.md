---
description: 'Altre informazioni su: piecewise_linear_distribution Class'
title: Classe piecewise_linear_distribution
ms.date: 11/04/2016
f1_keywords:
- random/std::piecewise_linear_distribution
- random/std::piecewise_linear_distribution::reset
- random/std::piecewise_linear_distribution::intervals
- random/std::piecewise_linear_distribution::densities
- random/std::piecewise_linear_distribution::param
- random/std::piecewise_linear_distribution::min
- random/std::piecewise_linear_distribution::max
- random/std::piecewise_linear_distribution::operator()
- random/std::piecewise_linear_distribution::param_type
- random/std::piecewise_linear_distribution::param_type::intervals
- random/std::piecewise_linear_distribution::param_type::densities
- random/std::piecewise_linear_distribution::param_type::operator==
- random/std::piecewise_linear_distribution::param_type::operator!=
helpviewer_keywords:
- std::piecewise_linear_distribution [C++]
- std::piecewise_linear_distribution [C++], reset
- std::piecewise_linear_distribution [C++], intervals
- std::piecewise_linear_distribution [C++], densities
- std::piecewise_linear_distribution [C++], param
- std::piecewise_linear_distribution [C++], min
- std::piecewise_linear_distribution [C++], max
- std::piecewise_linear_distribution [C++], param_type
- std::piecewise_linear_distribution [C++], param_type
ms.assetid: cd141152-7163-4754-8f98-c6d6500005e0
ms.openlocfilehash: 8ba2a0707599c8510488290c5d0c227d464588ff
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97340736"
---
# <a name="piecewise_linear_distribution-class"></a>Classe piecewise_linear_distribution

Genera una distribuzione lineare a tratti con intervalli di larghezza diversa e probabilità a variabilità lineare in ogni intervallo.

## <a name="syntax"></a>Sintassi

```cpp
template<class RealType = double>
class piecewise_linear_distribution
   {
public:
   // types
   typedef RealType result_type;
   struct param_type;

   // constructor and reset functions
   piecewise_linear_distribution();
   template <class InputIteratorI, class InputIteratorW>
   piecewise_linear_distribution(
      InputIteratorI firstI, InputIteratorI lastI, InputIteratorW firstW);
   template <class UnaryOperation>
   piecewise_linear_distribution(
      initializer_list<result_type> intervals, UnaryOperation weightfunc);
   template <class UnaryOperation>
   piecewise_linear_distribution(
      size_t count, result_type xmin, result_type xmax, UnaryOperation weightfunc);
   explicit piecewise_linear_distribution(const param_type& parm);
   void reset();

   // generating functions
   template <class URNG>
   result_type operator()(URNG& gen);
   template <class URNG>
   result_type operator()(URNG& gen, const param_type& parm);

   // property functions
   vector<result_type> intervals() const;
   vector<result_type> densities() const;
   param_type param() const;
   void param(const param_type& parm);
   result_type min() const;
   result_type max() const;
   };
```

### <a name="parameters"></a>Parametri

*RealType*\
Il tipo di risultato a virgola mobile, il valore predefinito è **`double`** . Per i tipi possibili, vedere [\<random>](../standard-library/random.md) .

## <a name="remarks"></a>Commenti

Questa distribuzione di campionamento ha intervalli di larghezza diversa e probabilità a variabilità lineare in ogni intervallo. Per informazioni su altre distribuzioni di campionamento, vedere [piecewise_linear_distribution](../standard-library/piecewise-constant-distribution-class.md) e [discrete_distribution](../standard-library/discrete-distribution-class.md).

La tabella seguente include collegamenti ad articoli relativi ai singoli membri:

[piecewise_linear_distribution](#piecewise_linear_distribution)\
[param_type](#param_type)

La funzione di proprietà `intervals()` restituisce una `vector<result_type>` con l'insieme di intervalli archiviati della distribuzione.

La funzione di proprietà `densities()` restituisce un `vector<result_type>` con le densità archiviate per ogni insieme di intervalli, calcolate in base ai pesi specificati nei parametri del costruttore.

Il membro di proprietà `param()` imposta o restituisce il pacchetto del parametro di distribuzione archiviato `param_type`.

Le funzioni membro `min()` e `max()` restituiscono rispettivamente il minor risultato possibile e il maggior risultato possibile.

La funzione membro `reset()` rimuove gli eventuali valori memorizzati nella cache, in modo che il risultato della successiva chiamata a `operator()` non dipenda da alcun valore ottenuto dal motore prima della chiamata.

Le funzioni membro `operator()` restituiscono il successivo valore generato basato sul motore URNG, dal pacchetto di parametri corrente o da quello specificato.

Per ulteriori informazioni sulle classi di distribuzione e i relativi membri, vedere [\<random>](../standard-library/random.md) .

## <a name="example"></a>Esempio

```cpp
// compile with: /EHsc /W4
#include <random>
#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

void test(const int s) {

    // uncomment to use a non-deterministic generator
    // random_device rd;
    // mt19937 gen(rd());
    mt19937 gen(1701);

    // Three intervals, non-uniform: 0 to 1, 1 to 6, and 6 to 15
    vector<double> intervals{ 0, 1, 6, 15 };
    // weights determine the densities used by the distribution
    vector<double> weights{ 1, 5, 5, 10 };

    piecewise_linear_distribution<double> distr(intervals.begin(), intervals.end(), weights.begin());

    cout << endl;
    cout << "min() == " << distr.min() << endl;
    cout << "max() == " << distr.max() << endl;
    cout << "intervals (index: interval):" << endl;
    vector<double> i = distr.intervals();
    int counter = 0;
    for (const auto& n : i) {
        cout << fixed << setw(11) << counter << ": " << setw(14) << setprecision(10) << n << endl;
        ++counter;
    }
    cout << endl;
    cout << "densities (index: density):" << endl;
    vector<double> d = distr.densities();
    counter = 0;
    for (const auto& n : d) {
        cout << fixed << setw(11) << counter << ": " << setw(14) << setprecision(10) << n << endl;
        ++counter;
    }
    cout << endl;

    // generate the distribution as a histogram
    map<int, int> histogram;
    for (int i = 0; i < s; ++i) {
        ++histogram[distr(gen)];
    }

    // print results
    cout << "Distribution for " << s << " samples:" << endl;
    for (const auto& elem : histogram) {
        cout << setw(5) << elem.first << '-' << elem.first + 1 << ' ' << string(elem.second, ':') << endl;
    }
    cout << endl;
}

int main()
{
    int samples = 100;

    cout << "Use CTRL-Z to bypass data entry and run using default values." << endl;
    cout << "Enter an integer value for the sample count: ";
    cin >> samples;

    test(samples);
}
```

```Output
Use CTRL-Z to bypass data entry and run using default values.
Enter an integer value for the sample count: 100
min() == 0
max() == 15
intervals (index: interval):
          0:   0.0000000000
          1:   1.0000000000
          2:   6.0000000000
          3:  15.0000000000
densities (index: density):
          0:   0.0645161290
          1:   0.3225806452
          2:   0.3225806452
          3:   0.6451612903
Distribution for 100 samples:
    0-1 :::::::::::::::::::::
    1-2 ::::::
    2-3 :::
    3-4 :::::::
    4-5 ::::::
    5-6 ::::::
    6-7 :::::
    7-8 ::::::::::
    8-9 ::::::::::
    9-10 ::::::
   10-11 ::::
   11-12 :::
   12-13 :::
   13-14 :::::
   14-15 :::::
```

## <a name="requirements"></a>Requisiti

**Intestazione:**\<random>

**Spazio dei nomi:** std

## <a name="piecewise_linear_distributionpiecewise_linear_distribution"></a><a name="piecewise_linear_distribution"></a> piecewise_linear_distribution::p iecewise_linear_distribution

Costruisce la distribuzione.

```cpp
// default constructor
piecewise_linear_distribution();

// constructs using a range of intervals, [firstI, lastI), with
// matching weights starting at firstW
template <class InputIteratorI, class InputIteratorW>
piecewise_linear_distribution(InputIteratorI firstI, InputIteratorI lastI, InputIteratorW firstW);

// constructs using an initializer list for range of intervals,
// with weights generated by function weightfunc
template <class UnaryOperation>
piecewise_linear_distribution(initializer_list<RealType>
intervals, UnaryOperation weightfunc);

// constructs using an initializer list for range of count intervals,
// distributed uniformly over [xmin,xmax] with weights generated by function weightfunc
template <class UnaryOperation>
piecewise_linear_distribution(size_t count, RealType xmin, RealType xmax, UnaryOperation weightfunc);

// constructs from an existing param_type structure
explicit piecewise_linear_distribution(const param_type& parm);
```

### <a name="parameters"></a>Parametri

*primi*\
Iteratore di input del primo elemento dell'intervallo di distribuzioni.

*ultimi*\
Iteratore di input dell'ultimo elemento dell'intervallo di distribuzioni.

*firstW*\
Iteratore di input del primo elemento dell'intervallo di pesi.

*intervalli*\
Oggetto [initializer_list](../cpp/initializers.md) con gli intervalli della distribuzione.

*conteggio*\
Numero di elementi nell'intervallo di distribuzioni.

*xmin*\
Valore minimo dell'intervallo di distribuzioni.

*xmax*\
Valore massimo dell'intervallo di distribuzioni. Deve essere maggiore di *xmin*.

*weightfunc*\
Oggetto che rappresenta la funzione di probabilità per la distribuzione. Il parametro e il valore restituito devono essere convertibili in **`double`** .

*parm*\
Struttura di parametri usata per costruire la distribuzione.

### <a name="remarks"></a>Commenti

Il costruttore predefinito imposta i parametri archiviati in modo che sia disponibile un intervallo, da 0 a 1, con densità di probabilità pari a 1.

Il costruttore di intervalli di iteratori

```cpp
template <class InputIteratorI, class InputIteratorW>
piecewise_linear_distribution(
    InputIteratorI firstI,
    InputIteratorI lastI,
    InputIteratorW firstW);
```

costruisce un oggetto di distribuzione con intervalli da iteratori sulla sequenza [ `firstI` , `lastI` ) e una sequenza di ponderazione corrispondente a partire da *firstW*.

Il costruttore di elenchi di inizializzatori

```cpp
template <class UnaryOperation>
piecewise_linear_distribution(
    initializer_list<result_type> intervals,
    UnaryOperation weightfunc);
```

costruisce un oggetto di distribuzione con intervalli dall'elenco di inizializzatori gli *intervalli* e i pesi generati dalla funzione *weightfunc*.

Il costruttore definito come

```cpp
template <class UnaryOperation>
piecewise_linear_distribution(
    size_t count,
    result_type xmin,
    result_type xmax,
    UnaryOperation weightfunc);
```

costruisce un oggetto di distribuzione con intervalli di *conteggio* distribuiti in modo uniforme su [ `xmin,xmax` ], assegnando i pesi di ogni intervallo in base alla funzione *weightfunc* e *weightfunc* deve accettare un parametro e avere un valore restituito, entrambi convertibili in **`double`** . **Precondizione:** `xmin < xmax` .

Il costruttore definito come

```cpp
explicit piecewise_linear_distribution(const param_type& parm);
```

costruisce un *oggetto di distribuzione utilizzando la* struttura di parametri archiviata.

## <a name="piecewise_linear_distributionparam_type"></a><a name="param_type"></a> piecewise_linear_distribution::p aram_type

Archivia tutti i parametri della distribuzione.

```cpp
struct param_type {
   typedef piecewise_linear_distribution<result_type> distribution_type;
   param_type();
   template <class IterI, class IterW>
   param_type(
      IterI firstI, IterI lastI, IterW firstW);
   template <class UnaryOperation>
   param_type(
      size_t count, result_type xmin, result_type xmax, UnaryOperation weightfunc);
   std::vector<result_type> densities() const;
   std::vector<result_type> intervals() const;

   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };
```

### <a name="parameters"></a>Parametri

Per la distribuzione [piecewise_linear_distribution](#piecewise_linear_distribution) vedere i parametri del costruttore.

### <a name="remarks"></a>Commenti

**Precondizione:**`xmin < xmax`

Questa struttura può essere passata al costruttore di classe della distribuzione durante la creazione di istanze, alla funzione membro `param()` per impostare i parametri archiviati di una distribuzione esistente e a `operator()` per l'uso in sostituzione dei parametri archiviati.

## <a name="see-also"></a>Vedere anche

[\<random>](../standard-library/random.md)
