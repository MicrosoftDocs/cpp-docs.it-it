---
title: auto (C++) | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
f1_keywords:
- auto_CPP
- auto
helpviewer_keywords:
- auto keyword [C++]
ms.assetid: e9d495d7-601c-4547-b897-998389a311f4
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 334006e8ad06bdc174922d57d97d2d0f0335cf34
ms.sourcegitcommit: 4e01d36ffa64ea11bacf589f79d2f1df947e2510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2018
---
# <a name="auto-c"></a>auto (C++)
Deduce il tipo di una variabile dichiarata dall'espressione di inizializzazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
auto declarator initializer;  
```  
  
```  
[](auto param1, auto param2) {};  
```  
  
## <a name="remarks"></a>Note  
 La parola chiave `auto` indica al compilatore di usare l'espressione di inizializzazione di una variabile dichiarata, o parametro di espressione lambda, per dedurre il tipo.  
  
 Si consiglia di usare la parola chiave `auto` per la maggior parte delle situazioni, a meno che non si desideri effettivamente una conversione, perché offre i vantaggi indicati di seguito.  
  
-   **Affidabilità:** se viene modificato il tipo dell'espressione, quando viene modificato un tipo restituito della funzione, continua comunque a funzionare.  
  
-   **Prestazioni:** si ha la certezza che non verrà eseguita alcuna conversione.  
  
-   **Usabilità:** non è necessario preoccuparsi delle difficoltà legate all'ortografia nome tipo e gli errori di battitura.  
  
-   **Efficienza:** la codifica può essere più efficiente.  
  
 Casi di conversione in cui non è consigliabile usare `auto`:  
  
-   Quando si desidera esclusivamente un tipo specifico.  
  
-   Tipi di supporto di modello di espressione, ad esempio, `(valarray+valarray)`.  
  
 Utilizzo della parola chiave `auto` anziché di un tipo per dichiarare una variabile e specificare un'espressione di inizializzazione. Inoltre, è possibile modificare la parola chiave `auto` usando identificatori e dichiaratori come `const`, `volatile`, puntatore (`*`), riferimento (`&`) e riferimento rvalue `(&&`). Il compilatore valuta l'espressione di inizializzazione, quindi usa tali informazioni per dedurre il tipo della variabile.  
  
 L'espressione di inizializzazione può essere un'assegnazione (sintassi del segno di uguale), un'inizializzazione diretta (sintassi stile-funzione), un [operatore new](new-operator-cpp.md) espressione o l'espressione di inizializzazione può essere il  *per la dichiarazione di intervallo* parametro in un [per istruzione (C++) basato su intervallo](../cpp/range-based-for-statement-cpp.md) istruzione. Per ulteriori informazioni, vedere [inizializzatori](../cpp/initializers.md) e gli esempi di codice più avanti in questo documento.  
  
 La parola chiave `auto` è un segnaposto per un tipo, ma non è un tipo. Pertanto, il `auto` parola chiave può essere utilizzato in cast o operatori, ad esempio [sizeof](../cpp/sizeof-operator.md) e [typeid](../windows/typeid-cpp-component-extensions.md).  
  
## <a name="usefulness"></a>Utilizzabilità  
 La parola chiave `auto` è un modo semplice per dichiarare una variabile con tipo complesso. Ad esempio, è possibile usare `auto` per dichiarare una variabile in cui l'espressione di inizializzazione include modelli, puntatori a funzione o puntatori a membro.  
  
 È inoltre possibile usare `auto` per dichiarare e inizializzare una variabile in un'espressione lambda. Non è possibile dichiarare il tipo della variabile manualmente poiché il tipo di un'espressione lambda è noto solo al compilatore. Per ulteriori informazioni, vedere [esempi di espressioni Lambda](../cpp/examples-of-lambda-expressions.md).  
  
## <a name="trailing-return-types"></a>Tipi restituiti finali  
 È possibile usare `auto` con l'identificatore di tipo `decltype` per scrivere le librerie di modelli. È, ad esempio, possibile usare le parole chiave `auto` e `decltype` per dichiarare una funzione di modello il cui tipo restituito dipende dai tipi dei relativi argomenti di modello. In alternativa, usare `auto` e `decltype` per dichiarare una funzione di modello che esegue il wrapping di una chiamata ad un'altra funzione e quindi restituisce il tipo restituito dell'altra funzione. Per ulteriori informazioni, vedere [decltype](../cpp/decltype-cpp.md).  
  
## <a name="references-and-cv-qualifiers"></a>Riferimenti ed elementi cv-qualifier  
 Si noti che l'utilizzo di `auto` elimina riferimenti e qualificatori di tipo const e di tipo volatile. Si consideri l'esempio seguente:  
  
```cpp  
// cl.exe /analyze /EHsc /W4  
#include <iostream>  
  
using namespace std;  
  
int main( )  
{  
    int count = 10;  
    int& countRef = count;  
    auto myAuto = countRef;  
  
    countRef = 11;  
    cout << count << " ";  
  
    myAuto = 12;  
    cout << count << endl;  
}  
  
```  
  
 Nell'esempio precedente, myAuto sia un valore int, non è un riferimento di int, pertanto l'output è `11 11`, non `11 12` come sarebbe se il qualificatore di riferimento non fosse stato rilasciato `auto`.  
  
## <a name="type-deduction-with-braced-initializers-c14"></a>Deduzione del tipo con inizializzatori tra parentesi graffe (C++ 14)  
 Exmample il codice seguente viene illustrato come inizializzare una variabile automatica utilizzando le parentesi graffe. Si noti la differenza tra B e C e tra A ed E.  
  
```cpp  
#include <initializer_list>  
  
int main()  
{  
    // std::initializer_list<int>  
    auto A = { 1, 2 };  
  
    // std::initializer_list<int>  
    auto B = { 3 };  
  
    // int  
    auto C{ 4 };  
  
    // C3535: cannot deduce type for 'auto' from initializer list'  
    auto D = { 5, 6.7 };  
  
    // C3518 in a direct-list-initialization context the type for 'auto'  
    // can only be deduced from a single initializer expression  
    auto E{ 8, 9 };  
  
    return 0;  
}  
```  
  
## <a name="restrictions-and-error-messages"></a>Restrizioni e messaggi di errore  
 Nella tabella seguente sono elencate le restrizioni sull'utilizzo della parola chiave `auto` e il messaggio di errore diagnostico corrispondente generato dal compilatore.  
  
|Numero di errore|Descrizione|  
|------------------|-----------------|  
|[C3530](../error-messages/compiler-errors-2/compiler-error-c3530.md)|La parola chiave `auto` non può essere combinata con alcun altro specificatore di tipo.|  
|[C3531](../error-messages/compiler-errors-2/compiler-error-c3531.md)|Un simbolo dichiarato con la parola chiave `auto` deve disporre di un inizializzatore.|  
|[C3532](../error-messages/compiler-errors-2/compiler-error-c3532.md)|La parola chiave `auto` per dichiarare un tipo è stata usata in modo non corretto. Ad esempio, è stato dichiarato un tipo restituito di un metodo o una matrice.|  
|[C3533](../error-messages/compiler-errors-2/compiler-error-c3533.md), [C3539](../error-messages/compiler-errors-2/compiler-error-c3539.md)|Un parametro o un argomento di modello non può essere dichiarato con la parola chiave `auto`.|  
|[C3535](../error-messages/compiler-errors-2/compiler-error-c3535.md)|Un parametro di argomento o di modello non può essere dichiarato con la parola chiave `auto`.|  
|[C3536](../error-messages/compiler-errors-2/compiler-error-c3536.md)|Un simbolo non può essere usato prima che venga inizializzato. In pratica, ciò significa che una variabile non può essere usata per inizializzare se stessa.|  
|[C3537](../error-messages/compiler-errors-2/compiler-error-c3537.md)|Non è possibile eseguire il cast a un tipo dichiarato con la parola chiave `auto`.|  
|[C3538](../error-messages/compiler-errors-2/compiler-error-c3538.md)|Tutti i simboli in un elenco di dichiaratori dichiarati con la parola chiave `auto` devono risolvere lo stesso tipo. Per ulteriori informazioni, vedere [dichiarazioni e definizioni](declarations-and-definitions-cpp.md).|  
|[C3540](../error-messages/compiler-errors-2/compiler-error-c3540.md), [C3541](../error-messages/compiler-errors-2/compiler-error-c3541.md)|Il [sizeof](../cpp/sizeof-operator.md) e [typeid](../windows/typeid-cpp-component-extensions.md) operatori non possono essere applicati a un simbolo dichiarato con il `auto` (parola chiave).|  
  
## <a name="examples"></a>Esempi  
 Questi frammenti di codice illustrano alcune modalità in cui la parola chiave `auto` può essere utilizzata.  
  
 Le dichiarazioni seguenti sono equivalenti. Nella prima istruzione la variabile `j` è dichiarata come tipo `int`. Nella seconda istruzione si deduce che la variabile `k` sia di tipo `int` perché l'espressione di inizializzazione (0) è un intero.  
  
```cpp  
int j = 0;  // Variable j is explicitly type int.  
auto k = 0; // Variable k is implicitly type int because 0 is an integer.  
```  
  
 Le dichiarazioni seguenti sono equivalenti, ma la seconda dichiarazione è più semplice della prima. Una delle ragioni più valide per l'utilizzo della parola chiave `auto` è la semplicità.  
  
```cpp  
map<int,list<string>>::iterator i = m.begin();   
auto i = m.begin();   
```  
  
 Il frammento di codice seguente dichiara il tipo delle variabili `iter` e `elem` quando i cicli `for` e range `for` iniziano.  
  
```cpp  
// cl /EHsc /nologo /W4  
#include <deque>  
using namespace std;  
  
int main()  
{  
    deque<double> dqDoubleData(10, 0.1);  
  
    for (auto iter = dqDoubleData.begin(); iter != dqDoubleData.end(); ++iter)  
    { /* ... */ }  
  
    // prefer range-for loops with the following information in mind  
    // (this applies to any range-for with auto, not just deque)  
  
    for (auto elem : dqDoubleData) // COPIES elements, not much better than the previous examples  
    { /* ... */ }  
  
    for (auto& elem : dqDoubleData) // observes and/or modifies elements IN-PLACE  
    { /* ... */ }  
  
    for (const auto& elem : dqDoubleData) // observes elements IN-PLACE  
    { /* ... */ }  
}  
```  
  
 Il frammento di codice seguente usa l'operatore `new` e la dichiarazione di puntatore per dichiarare i puntatori.  
  
```cpp  
double x = 12.34;  
auto *y = new auto(x), **z = new auto(&x);  
```  
  
 Il frammento di codice seguente dichiara più simboli in ogni istruzione di dichiarazione. Si noti che tutti i simboli in ogni istruzione vengono risolte nello stesso tipo.  
  
```cpp  
auto x = 1, *y = &x, **z = &y; // Resolves to int.  
auto a(2.01), *b (&a);         // Resolves to double.  
auto c = 'a', *d(&c);          // Resolves to char.  
auto m = 1, &n = m;            // Resolves to int.  
```  
  
 Questo frammento di codice usa l'operatore condizionale (`?:`) per dichiarare la variabile `x` come intero con un valore di 200:  
  
```cpp  
int v1 = 100, v2 = 200;  
auto x = v1 > v2 ? v1 : v2;  
```  
  
 Frammento di codice seguente inizializza variabile `x` al tipo `int`variabili `y` per un riferimento al tipo `const int`e variabile `fp` a un puntatore a una funzione che restituisce il tipo `int`.  
  
```cpp  
int f(int x) { return x; }  
int main()  
{  
    auto x = f(0);  
    const auto & y = f(1);  
    int (*p)(int x);  
    p = f;  
    auto fp = p;  
    //...  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [auto Keyword](../cpp/auto-keyword.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 [/Zc: auto (deduzione del tipo di variabile)](../build/reference/zc-auto-deduce-variable-type.md)   
 [Operatore sizeof](../cpp/sizeof-operator.md)   
 [typeid](../windows/typeid-cpp-component-extensions.md)   
 [operatore new](new-operator-cpp.md)   
 [Dichiarazioni e definizioni](declarations-and-definitions-cpp.md)   
 [Esempi di espressioni Lambda](../cpp/examples-of-lambda-expressions.md)   
 [Inizializzatori](../cpp/initializers.md)   
 [decltype](../cpp/decltype-cpp.md)