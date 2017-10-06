---
title: Modelli (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- template_cpp
dev_langs:
- C++
helpviewer_keywords:
- templates, C++
- templates
ms.assetid: 90fcc14a-2092-47af-9d2e-dba26d25b872
caps.latest.revision: 21
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 6ce40029e40906441ebd7c64ff9011a61f26045b
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="templates-c"></a>Modelli (C++)
I modelli costituiscono la base per la programmazione generica in C++. In C++ è necessario come un linguaggio fortemente tipizzato, tutte le variabili per un tipo specifico, in modo esplicito dichiarata dal programmatore o dedotto dal compilatore. Tuttavia, molte strutture di dati e algoritmi lo stesso aspetto indipendentemente dal tipo operino su. Attivazione modelli di definire le operazioni di una classe o funzione e consentono di specificare quali concreto tipi tali operazioni dovrebbe funzionare in.  
  
## <a name="defining-and-using-templates"></a>Definizione e utilizzo di modelli  
 Un modello è un costrutto che genera un tipo ordinario o una funzione in fase di compilazione in base agli argomenti fornisce all'utente per i parametri del modello. Ad esempio, è possibile definire un modello di funzione come segue:  
  
```cpp  
template <typename T>  
T minimum(const T& lhs, const T& rhs)  
{  
    return lhs < rhs ? lhs : rhs;  
}  
```  
  
 Il codice sopra riportato descrive un modello per una funzione generica con un parametro di tipo `T`, il cui valore restituito e chiamare parametri (lhs e rhs) sono tutti di questo tipo. È possibile assegnare nome un parametro di tipo che è simile, ma per convenzione singolo lettere maiuscole utilizzati più frequentemente. `T`rappresenta un parametro di modello. il `typename` parola chiave indica che questo parametro è un segnaposto per un tipo. Quando la funzione viene chiamata, il compilatore sostituisce tutte le istanze di `T` con l'argomento di tipo concreto che viene specificato dall'utente o dedotto dal compilatore. Il processo in cui il compilatore genera una classe o funzione da un modello è detto *del template*;   `minimum<int>` è un'istanza del modello `minimum<T>`.  
  
 In un' posizione, un utente può dichiarare un'istanza del modello specializzato per int. Si supponga che get_a() e get_b() sono funzioni che restituiscono un valore int:  
  
```  
int a = get_a();  
int b = get_b();  
int i = minimum<int>(a, b);  
```  
  
 Tuttavia, poiché si tratta di un modello di funzione e il compilatore può dedurre il tipo di `T` dagli argomenti `a` e `b`, è possibile chiamarlo come una funzione ordinaria:  
  
```cpp  
int i = minimum(a, b);  
```  
  
 Quando il compilatore rileva l'ultima istruzione, genera una nuova funzione nella quale ogni occorrenza di *T* nel modello viene sostituito con `int`:  
  
```  
  
      int minimum(const int& lhs, const int& rhs)  
{  
    return lhs < rhs ? lhs : rhs;  
}  
```  
  
 Le regole per la modalità con cui il compilatore esegue la deduzione del tipo nei modelli di funzione sono in base alle regole per le normali funzioni. Per ulteriori informazioni, vedere [Overload risoluzione del modello di chiamate di funzione](../cpp/overload-resolution-of-function-template-calls.md).  
  
## <a id="type_parameters"></a>Parametri di tipo  
 Nel `minimum` modello precedente, si noti che il parametro di tipo `T` non è qualificato in alcun modo fino a quando non viene utilizzato nei parametri di chiamata di funzione, in cui vengono aggiunte le const e qualificatori di riferimento.  
  
 Non sussiste alcun limite pratico al numero di parametri di tipo. Separare più parametri da una virgola:  
  
```cpp  
template <typename T, typename U, typename V> class Foo{};  
  
```  
  
 La parola chiave `class` equivale a `typename` in questo contesto. È possibile esprimere l'esempio precedente come:  
  
```  
template <class T, class U, class V> class Foo{};   
```  
  
 È possibile utilizzare l'operatore di puntini di sospensione (...) per definire un modello che accetta un numero arbitrario di zero o più parametri di tipo:  
  
```cpp  
template<typename... Arguments> class vtclass;  
  
vtclass< > vtinstance1;  
vtclass<int> vtinstance2;  
vtclass<float, bool> vtinstance3;  
```  
  
 Come argomento di tipo, è possibile utilizzare qualsiasi tipo incorporato o definito dall'utente. Ad esempio, è possibile utilizzare std:: Vector nella libreria Standard per archiviare valori integer, Double, stringhe, MyClass, MyClass const *, MyClass &. La limitazione principale quando si utilizzano modelli è che un argomento di tipo deve supportare le operazioni che vengono applicate ai parametri di tipo. Ad esempio, se si chiama minimi utilizzando MyClass come nel seguente esempio:  
  
```cpp  
class MyClass  
{  
public:  
    int num;  
    std::wstring description;  
};  
  
int main()  
{      
    MyClass mc1 {1, L"hello"};  
    MyClass mc2 {2, L"goodbye"};  
    auto result = minimum(mc1, mc2); // Error! C2678  
}  
  
```  
  
 Verrà generato un errore del compilatore perché MyClass non fornisce un overload per il < (operatore).  
  
 Non è necessario intrinseca che gli argomenti di tipo per qualsiasi particolare modello tutti appartengono alla stessa gerarchia di oggetti, sebbene sia possibile definire un modello che impone tale restrizione. È possibile combinare le tecniche orientata agli oggetti con i modelli. ad esempio, è possibile archiviare un Derived * in un vettore\<Base\*>.    Si noti che gli argomenti devono essere puntatori  
  
```  
vector<MyClass*> vec;  
   MyDerived d(3, L"back again", time(0));  
   vec.push_back(&d);  
  
   // or more realistically:  
   vector<shared_ptr<MyClass>> vec2;  
   vec2.push_back(make_shared<MyDerived>());  
```  
  
 I requisiti di base che vettore e altri contenitori della libreria standard impongano sugli elementi di `T` che `T` essere assegnabile a copia e può essere costruita copia.  
  
## <a name="non-type-parameters"></a>Parametri non di tipo  
 A differenza dei tipi generici in altri linguaggi come c# e Java, i modelli C++ supportano i parametri non di tipo, anche noti come parametri di valore. Ad esempio, è possibile fornire un valore intero costante per specificare la lunghezza di una matrice, come in questo esempio è simile alla classe std:: Array nella libreria Standard:  
  
```  
template<typename T, size_t L>  
class MyArray  
{  
    T arr[L];  
public:  
    MyArray() { ... }  
};  
  
```  
  
 Si noti la sintassi della dichiarazione di modello. Il valore di tipo size_t viene passato come argomento di modello in fase di compilazione e deve essere costante o un'espressione di constexpr. Utilizzare simile al seguente:  
  
```cpp  
MyArray<MyClass*, 10> arr;  
```  
  
 Altri tipi di valori inclusi puntatori e riferimenti possono essere passati come parametri non di tipo. Ad esempio, è possibile passare un puntatore a una funzione o un oggetto funzione per personalizzare alcune operazioni all'interno del codice del modello.  
  
## <a id="template_parameters"></a>Modelli come parametri di modello  
 Un modello può essere un parametro di modello. In questo esempio, MyClass2 presenta due parametri: un parametro typename `T` e un parametro di modello `Arr`:  
  
```cpp  
template<typename T, template<typename U, int I> class Arr>  
class MyClass2  
{  
    T t; //OK  
    Arr<T, 10> a;  
    U u; //Error. U not in scope  
};  
```  
  
 Poiché il `Arr` parametro stesso non ha alcun corpo, non sono necessari i nomi di parametro. In effetti, è un errore per fare riferimento a `Arr`del typename o classe i nomi dei parametri dall'interno del corpo della `MyClass2`. Per questo motivo, `Arr`di nomi di parametro di tipo possono essere omesso, come illustrato in questo esempio:  
  
```cpp  
template<typename T, template<typename, int> class Arr>  
class MyClass2  
{  
    T t; //OK  
    Arr<T, 10> a;  
};  
```  
  
## <a name="default-template-arguments"></a>Argomenti di modello predefiniti  
 Modelli di classe e funzione possono avere argomenti predefiniti. Quando un modello di un argomento predefinito, che è possibile lasciare non specificato quando viene usato. Ad esempio, il modello di std:: Vector include un argomento predefinito per l'allocatore di:  
  
```cpp  
template <class T, class Allocator = allocator<T>> class vector;  
```  
  
 Nella maggior parte dei casi la classe std:: allocator predefinita è accettabile, in modo da utilizzare un vettore simile al seguente:  
  
```cpp  
vector<int> myInts;  
```  
  
 Ma se necessario è possibile specificare un allocatore personalizzato come segue:  
  
```cpp  
vector<int, MyAllocator> ints;  
```  
  
 Per più argomenti di modello, tutti gli argomenti dopo il primo argomento predefinito devono avere argomenti predefiniti.  
  
 Quando si utilizza un modello i cui parametri vengono automaticamente impostati, è possibile utilizzare parentesi acute vuote:  
  
```cpp  
template<typename A = int, typename B = double>  
class Bar  
{  
    //...  
};  
...  
int main()  
{  
    Bar<> bar; // use all default type arguments  
}  
  
```  
  
## <a name="template-specialization"></a>Specializzazione di modello  
 In alcuni casi, non è possibile o opportuno per un modello definire esattamente lo stesso codice per qualsiasi tipo. Ad esempio, si potrebbe essere opportuno definire un percorso di codice deve essere eseguito solo se l'argomento tipo è un puntatore o un std:: wstring o un tipo derivato da una determinata classe di base.  In questi casi è possibile definire un *specializzazione* del modello per quel determinato tipo. Quando un utente crea un'istanza del modello con questo tipo, il compilatore Usa la specializzazione per generare la classe e per tutti gli altri tipi, il compilatore sceglie il modello più generale. Le specializzazioni in cui tutti i parametri sono specializzati sono *completare specializzazioni*. Se solo alcuni dei parametri sono specializzati, viene chiamato un *specializzazione parziale*.  
  
```cpp  
template <typename K, typename V>  
class MyMap{/*...*/};  
  
// partial specialization for string keys  
template<typename V>  
class MyMap<string, V> {/*...*/};  
...  
MyMap<int, MyClass> classes; // uses original template  
MyMap<string, MyClass> classes2; // uses the partial specialization  
  
```  
  
 Un modello può avere un numero qualsiasi di specializzazioni, purché ogni parametro di tipo specializzato sia univoco.   Solo i modelli di classe possono essere parzialmente specializzati. Tutte le specializzazioni parziali e completate di un modello devono essere dichiarate nello spazio dei nomi stesso come il modello originale.  
  
 Per ulteriori informazioni, vedere [specializzazione di modello](../cpp/template-specialization-cpp.md).
