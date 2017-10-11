---
title: Classe discrete_distribution | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- random/std::discrete_distribution
- random/std::discrete_distribution::reset
- random/std::discrete_distribution::probabilities
- random/std::discrete_distribution::param
- random/std::discrete_distribution::min
- random/std::discrete_distribution::max
- random/std::discrete_distribution::operator()
- random/std::discrete_distribution::param_type
- random/std::discrete_distribution::param_type::probabilities
- random/std::discrete_distribution::param_type::operator==
- random/std::discrete_distribution::param_type::operator!=
- random/std::discrete_distribution::param_type
dev_langs:
- C++
helpviewer_keywords:
- std::discrete_distribution [C++]
- std::discrete_distribution [C++], reset
- std::discrete_distribution [C++], probabilities
- std::discrete_distribution [C++], param
- std::discrete_distribution [C++], min
- std::discrete_distribution [C++], max
- std::discrete_distribution [C++], param_type
- std::discrete_distribution [C++], param_type
ms.assetid: 8c8ba8f8-c06f-4f07-b354-f53950142fcf
caps.latest.revision: 21
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 092185d577b28b0507be554d48e4dacf0439e60c
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="discretedistribution-class"></a>Classe discrete_distribution
Genera una distribuzione Integer discreta con intervalli di larghezza uniforme e probabilità uniforme in ogni intervallo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class IntType = int>
class discrete_distribution  
   {  
public:  
   // types  
   typedef IntType result_type;  
   struct param_type;  
   
   // constructor and reset functions  
   discrete_distribution();
   template <class InputIterator>  
   discrete_distribution(InputIterator firstW, InputIterator lastW);
   discrete_distribution(initializer_list<double> weightlist);
   template <class UnaryOperation>  
   discrete_distribution(size_t count, double xmin, double xmax, UnaryOperation funcweight);
   explicit discrete_distribution(const param_type& parm);
   void reset();

   // generating functions  
   template <class URNG>  
   result_type operator()(URNG& gen);
   template <class URNG>  
   result_type operator()(URNG& gen, const param_type& parm);

   // property functions  
   vector<double> probabilities() const;
   param_type param() const;
   void param(const param_type& parm);
   result_type min() const;
   result_type max() const;
   };  
```   
#### <a name="parameters"></a>Parametri  
*IntType*  
 Tipo di risultati Integer. Per impostazione predefinita, `int`. Per informazioni sui tipi possibili, vedere [\<random>](../standard-library/random.md).  
  
## <a name="remarks"></a>Note  
 Questa distribuzione di campionamento ha intervalli di larghezza uniforme e probabilità uniforme in ogni intervallo. Per informazioni su altre distribuzioni di campionamento, vedere [piecewise_linear_distribution Class](../standard-library/piecewise-linear-distribution-class.md) (Classe piecewise_linear_distribution) e [piecewise_constant_distribution Class](../standard-library/piecewise-constant-distribution-class.md) (Classe piecewise_constant_distribution).  
  
 La tabella seguente include collegamenti ad articoli relativi ai singoli membri:  
  
|||  
|-|-|  
|[discrete_distribution](#discrete_distribution)|`discrete_distribution::param`|  
|`discrete_distribution::operator()`|[param_type](#param_type)|  
  
 La funzione di proprietà `vector<double> probabilities()` restituisce le singole probabilità per ogni valore integer generato.  
  
 Per altre informazioni sulle classi di distribuzione e sui rispettivi membri, vedere [\<random>](../standard-library/random.md).  
  
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
  
    discrete_distribution<> distr({ 1, 2, 3, 4, 5 });  
  
    cout << endl;  
    cout << "min() == " << distr.min() << endl;  
    cout << "max() == " << distr.max() << endl;  
    cout << "probabilities (value: probability):" << endl;  
    vector<double> p = distr.probabilities();  
    int counter = 0;  
    for (const auto& n : p) {  
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
        cout << setw(5) << elem.first << ' ' << string(elem.second, ':') << endl;  
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
max() == 4  
probabilities (value: probability):  
          0:   0.0666666667  
          1:   0.1333333333  
          2:   0.2000000000  
          3:   0.2666666667  
          4:   0.3333333333  
  
Distribution for 100 samples:  
    0 :::  
    1 ::::::::::::::  
    2 ::::::::::::::::::  
    3 :::::::::::::::::::::::::::::  
    4 ::::::::::::::::::::::::::::::::::::    
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<random>  
  
 **Spazio dei nomi:** std  
  
##  <a name="discrete_distribution"></a>  discrete_distribution::discrete_distribution  
 Costruisce la distribuzione.  
  
```  
// default constructor  
discrete_distribution();  
  
// construct using a range of weights, [firstW, lastW)  
template <class InputIterator>  
discrete_distribution(InputIterator firstW, InputIterator lastW);  
  
// construct using an initializer list for range of weights  
discrete_distribution(initializer_list<double> weightlist);  
  
// construct using unary operation function  
template <class UnaryOperation>  
discrete_distribution(size_t count, double low, double high, UnaryOperation weightfunc);  
  
// construct from an existing param_type structure  
explicit discrete_distribution(const param_type& parm);  
```  
  
### <a name="parameters"></a>Parametri  
*firstW*  
 Primo iteratore nell'elenco da cui costruire la distribuzione.  
  
*lastW*  
 Ultimo iteratore nell'elenco da cui costruire la distribuzione (non comprensivo, perché gli iteratori usano un elemento vuoto per la fine).  
  
*weightlist*  
 Oggetto [initializer_list](../cpp/initializers.md) dal quale costruire la distribuzione.  
  
*count*  
 Numero di elementi nell'intervallo di distribuzioni. Se `count==0`, equivale al costruttore predefinito (genera sempre zero).  
  
*low*  
 Valore minimo dell'intervallo di distribuzioni.  
  
*high*  
 Valore massimo dell'intervallo di distribuzioni.  
  
*weightfunc*  
 Oggetto che rappresenta la funzione di probabilità per la distribuzione. Il parametro e il valore restituito devono essere convertibili in `double`.  
  
*parm*  
 Struttura `param_type` usata per costruire la distribuzione.  
  
### <a name="remarks"></a>Note  
Il costruttore predefinito costruisce un oggetto il cui valore di probabilità archiviato presenta un elemento con valore 1. Questo darà luogo a una distribuzione che genera sempre uno zero.  
  
Il costruttore di intervalli dell'iteratore con i parametri *firstW* e *lastW* costruisce un oggetto di distribuzione usando i valori di peso presi dagli iteratori nella sequenza dell'intervallo [*firstW*, *lastW*).  
  
Il costruttore di elenchi dell'inizializzatore con il parametro *weightlist* costruisce un oggetto di distribuzione usando i pesi presi dall'oggetto *weightlist* nell'elenco dell'inizializzatore.  
  
Il costruttore con i parametri *count*, *low*, *high* e *weightfunc* costruisce un oggetto di distribuzione inizializzato in base alle regole seguenti:  
-  Se *conteggio* < 1,  **n**  = 1 e come tale è equivalente al costruttore predefinito, sempre generato zero.  
-  Se *conteggio* > 0,  **n**   =  *conteggio*. Fornito **d** = (*elevata* - *bassa*) /  **n**  è maggiore di zero, mediante **d** intervalli secondari uniforme, ogni peso viene assegnato come segue: `weight[k] = weightfunc(x)`, dove **x** = *bassa* + **k**  *  **d** + **d** / 2, per **k** = 0,...,  **n**  - 1.  
  
Il costruttore con un parametro `param_type` *parm* costruisce un oggetto di distribuzione usando *parm* come struttura del parametro archiviato.  
  
##  <a name="param_type"></a>  discrete_distribution::param_type  
 Archivia tutti i parametri della distribuzione.  
  
```  
struct param_type {  
   typedef discrete_distribution<result_type> distribution_type;  
   param_type();

   // construct using a range of weights, [firstW, lastW)  
   template <class InputIterator>  
   param_type(InputIterator firstW, InputIterator lastW);  
  
   // construct using an initializer list for range of weights  
   param_type(initializer_list<double> weightlist);  
  
   // construct using unary operation function  
   template <class UnaryOperation>  
   param_type(size_t count, double low, double high, UnaryOperation weightfunc);

   std::vector<double> probabilities() const;
   
   bool operator==(const param_type& right) const;
   bool operator!=(const param_type& right) const;
   };  
```   
### <a name="parameters"></a>Parametri  
*firstW*  
 Primo iteratore nell'elenco da cui costruire la distribuzione.  
  
*lastW*  
 Ultimo iteratore nell'elenco da cui costruire la distribuzione (non comprensivo, perché gli iteratori usano un elemento vuoto per la fine).  
  
*weightlist*  
 Oggetto [initializer_list](../cpp/initializers.md) dal quale costruire la distribuzione.  
  
*count*  
 Numero di elementi nell'intervallo di distribuzioni. Se *count* è uguale a 0, equivale al costruttore predefinito, vale a dire che genera sempre zero.  
  
*low*  
 Valore minimo dell'intervallo di distribuzioni.  
  
*high*  
 Valore massimo dell'intervallo di distribuzioni.  
  
*weightfunc*  
 Oggetto che rappresenta la funzione di probabilità per la distribuzione. Il parametro e il valore restituito devono essere convertibili in `double`.  
  
*right*  
 Oggetto `param_type` da confrontare con questo oggetto.  
  
### <a name="remarks"></a>Note  
 Questo pacchetto di parametri può essere passato a `operator()` per generare il valore restituito.  
  
## <a name="see-also"></a>Vedere anche  
 [\<random>](../standard-library/random.md)






