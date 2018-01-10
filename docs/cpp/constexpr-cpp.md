---
title: constexpr (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords: constexpr_cpp
dev_langs: C++
ms.assetid: c6458ccb-51c6-4a16-aa61-f69e6f4e04f7
caps.latest.revision: "3"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cf1094be23074fe71e65a3077de51263f01a81c6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="constexpr-c"></a>constexpr (C++)
La parola chiave `constexpr` è stata introdotta in C++11 e migliorata in C++14. Significa *espressione costante*. Come `const`, può essere applicata alle variabili in modo che se il codice prova a modificare il valore, verrà generato un errore del compilatore. A differenza di `const`, `constexpr` può anche essere applicata alle funzioni e ai costruttori della classe. `constexpr` indica che il valore, o il valore restituito è costante e, se possibile, verrà calcolato in fase di compilazione.  Un valore integrale `constexpr` può essere usato ogni volta che è richiesto un intero const, ad esempio negli argomenti del modello e nelle dichiarazioni della matrice. E, quando un valore può essere calcolato in fase di compilazione anziché sul tempo di esecuzione, può essere utile il programma eseguito più velocemente e utilizzano meno memoria.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
constexpr  literal-type  identifier = constant-expression;
constexpr  literal-type  identifier { constant-expression };
constexpr literal-type identifier(params );
constexpr ctor (params);  
```  
  
#### <a name="parameters"></a>Parametri  
 `params`  
 Uno o più parametri che devono essere un tipo di valore letterale (come indicato di seguito) e devono essere un'espressione costante.  
  
## <a name="return-value"></a>Valore restituito  
 Una funzione o variabile constexpr deve restituire uno dei tipi di valore letterali, come indicato di seguito.  
  
## <a name="literal-types"></a>Tipi letterali  
 Per limitare la complessità di elaborazione delle costanti in fase compilazione e il loro potenziale impatto sulla fase di compilazione, lo standard C++14 richiede che i tipi usati nelle espressioni costanti siano limitati ai tipi di valore letterali. Un tipo letterale è un tipo il cui layout può essere determinato in fase di compilazione. Gli elementi seguenti sono tipi letterali:  
  
1.  void  
  
2.  tipi scalari  
  
3.  riferimenti  
  
4.  Matrici di void, tipi scalari o riferimenti  
  
5.  Una classe che ha un distruttore semplice e uno o più costruttori constexpr che non sono costruttori di copia o spostamento. In aggiunta, tutti i relativi membri dati non statici e le classi di base devono essere tipi letterali e non volatili.  
  
## <a name="constexpr-variables"></a>Variabili constexpr  
 La differenza principale tra le variabili const e constexpr è che l'inizializzazione di una variabile const può essere rinviata fino alla fase di esecuzione mentre una variabile constexpr deve essere inizializzata in fase di compilazione.  Tutte le variabili constexpr sono const.  

-  È possibile dichiarare una variabile con `constexpr`, se è presente un tipo letterale inizializzato. Se l'inizializzazione viene eseguita da un costruttore, il costruttore deve essere dichiarato come `constexpr`.  
  
-   Un riferimento può essere dichiarato come constexpr se l'oggetto a cui fa riferimento è stato inizializzato da un'espressione costante e anche tutte le conversioni implicite che vengono richiamate durante l'inizializzazione sono espressioni costanti.  
  
-   Tutte le dichiarazioni di una variabile o funzione `constexpr` devono avere l'identificatore `constexpr`.  
  
 
  
 
  
```cpp  
constexpr float x = 42.0;  
constexpr float y{108};  
constexpr float z = exp(5, 3);  
constexpr int i; // Error! Not initialized  
int j = 0;  
constexpr int k = j + 1; //Error! j not a constant expression  
```  
  
## <a name="constexpr-functions"></a>Funzioni constexpr  
 Una funzione `constexpr` è una funzione il cui valore restituito può essere calcolato in fase di compilazione quando lo richiede il codice consumer.  Quando i relativi argomenti sono valori `constexpr` e il codice consumer richiede il valore restituito in fase di compilazione, ad esempio per inizializzare una variabile `constexpr` o fornire un argomento di modello non di tipo, viene prodotta una costante in fase di compilazione. Quando viene chiamato con argomenti non `constexpr` o quando il relativo valore non è necessario in fase di compilazione, viene prodotto un valore in fase di esecuzione come una normale funzione  (questo doppio comportamento evita di dover scrivere `constexpr` e versioni non `constexpr` della stessa funzione).  
 
 Una funzione o costruttore `constexpr` è implicitamente `inline`. 
 
 Le regole seguenti si applicano alle funzioni constexpr:

- Una funzione `constexpr` deve accettare e restituire solo tipi letterali. 

- Una funzione `constexpr` può essere ricorsiva. 

- Non può essere [virtuale](../cpp/virtual-cpp.md). A un costruttore non può essere definito come constexpr se la classe contenitore include le classi base virtuali.

- Il corpo può essere definito come `= default` o `= delete`. 

- Non può contenere il corpo `goto` istruzioni o blocchi try. 

- Una specializzazione esplicita di un modello constexpr non può essere dichiarata come `constexpr`:  
  
- Una specializzazione esplicita di un modello `constexpr` non deve essere anche `constexpr`: 


<!--conformance note-->
Le regole seguenti si applicano alle funzioni constexpr in Visual Studio 2017 e versioni successive: 

- Può contenere se e passare a istruzioni e tutte le istruzioni loop inclusi, basato su intervallo, durante e si-mentre
    
- Può contenere dichiarazioni di variabile locale, ma la variabile deve essere inizializzata, deve essere un tipo di valore letterale e non può essere statiche o thread-local. La variabile dichiarata in locale non deve essere const e potrebbe modificare.

- Una funzione membro non statica constexpr non deve essere const in modo implicito.

  
```cpp  
constexpr float exp(float x, int n)  
{  
    return n == 0 ? 1 :  
        n % 2 == 0 ? exp(x * x, n / 2) :  
        exp(x * x, (n - 1) / 2) * x;  
};  
```  
  
> [!TIP]
>  Nota: nel debugger di Visual Studio è possibile indicare se una funzione `constexpr` viene valutata in fase di compilazione inserendo un punto di interruzione all'interno della stessa. Se il punto di interruzione viene raggiunto, la funzione è stata chiamata in fase di esecuzione.  In caso contrario, la funzione è stata chiamata in fase di compilazione.  
  
 
## <a name="example"></a>Esempio  
 L'esempio seguente illustra variabili, funzioni e un tipo definito dall'utente `constexpr`. Si noti che nell'ultima istruzione in main(), la funzione membro `constexpr` GetValue() è una chiamata in fase di esecuzione perché il valore non deve essere noto in fase di compilazione.  
  
```  
#include <iostream>  
  
using namespace std;  
  
// Pass by value   
constexpr float exp(float x, int n)  
{  
    return n == 0 ? 1 :  
        n % 2 == 0 ? exp(x * x, n / 2) :  
        exp(x * x, (n - 1) / 2) * x;  
};  
  
// Pass by reference  
constexpr float exp2(const float& x, const int& n)  
{  
    return n == 0 ? 1 :  
        n % 2 == 0 ? exp2(x * x, n / 2) :  
        exp2(x * x, (n - 1) / 2) * x;  
};  
  
// Compile time computation of array length  
template<typename T, int N>  
constexpr int length(const T(&ary)[N])   
{   
    return N;   
}   
  
// Recursive constexpr function  
constexpr int fac(int n)  
{   
    return n == 1 ? 1 : n*fac(n - 1);   
}  
  
// User-defined type  
class Foo  
{  
public:  
    constexpr explicit Foo(int i) : _i(i) {}  
    constexpr int GetValue()  
    {  
        return _i;  
    }  
private:  
    int _i;  
};  
  
int main()  
{  
    //foo is const:  
    constexpr Foo foo(5);   
    // foo = Foo(6); //Error!  
  
    //Compile time:  
    constexpr float x = exp(5, 3);   
    constexpr float y { exp(2, 5) };  
    constexpr int val = foo.GetValue();   
    constexpr int f5 = fac(5);  
    const int nums[] { 1, 2, 3, 4 };  
    const int nums2[length(nums) * 2] { 1, 2, 3, 4, 5, 6, 7, 8 };  
  
    //Run time:   
    cout << "The value of foo is " << foo.GetValue() << endl;   
  
}  
  
```  
  
## <a name="requirements"></a>Requisiti  
 Visual Studio 2015  
  
## <a name="see-also"></a>Vedere anche  
 [Dichiarazioni e definizioni](../cpp/declarations-and-definitions-cpp.md)   
 [const](../cpp/const-cpp.md)