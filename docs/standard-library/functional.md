---
title: "&lt; funzionalit&#224; &gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<functional>"
  - "functional/std::<functional>"
  - "std.<functional>"
  - "std::<functional>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funtori"
  - "functional (intestazione)"
ms.assetid: 7dd463e8-a29f-49bc-aedd-8fa53b54bfbc
caps.latest.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 27
---
# &lt; funzionalit&#224; &gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce le funzioni della libreria Standard che consentono di costruire *oggetti funzione*denominati anche funtori e i relativi Binder. Un oggetto funzione è un oggetto di un tipo che definisce `operator()`. Un oggetto funzione può essere un puntatore a funzione, ma più tipicamente l'oggetto viene utilizzato per archiviare le informazioni aggiuntive accessibili durante una chiamata di funzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <functional>  
```  
  
## <a name="remarks"></a>Note  
 Gli algoritmi richiedono due tipi di oggetti funzione, ovvero unario e binario. Gli oggetti funzione di tipo unario richiedono un argomento, mentre gli oggetti funzione di tipo binario richiedono due argomenti. Un oggetto funzione e i puntatori a funzione possono essere passati come predicato a un algoritmo, ma gli oggetti funzione sono anche adattabili e aumentano l'ambito, la flessibilità e l'efficienza di STL. Se, ad esempio, un valore deve essere associato a una funzione prima del passaggio a un algoritmo, non è possibile ad esempio utilizzare un puntatore a funzione. Gli adattatori di funzione convertono i puntatori a funzione in oggetti funzione adattabili che possono essere associati a un valore. L'intestazione \< funzionale> contiene anche gli adattatori di funzione membro che consentono di essere chiamata come oggetti funzione adattabili funzioni membro. Le funzioni sono adattabili se le dichiarazioni di tipo corrispondenti sono annidate, ne specificano l'argomento e i tipi restituiti. Lo standard C++ richiede che l'adattabilità sia implementata con tutte le classi di oggetti standard che ereditano dalle classi base binary_function o unary_function. Gli oggetti funzione e i relativi adattatori consentono a STL di aggiornare le applicazioni esistenti nonché di integrare STL nell'ambiente di programmazione C++.  
  
 Il [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] implementazione degli oggetti funzione in \< funzionale> include *funtori di operatori trasparenti*, che sono specializzazioni di standard oggetti funzione e non richiedere alcun parametro di modello ed eseguire l'inoltro perfetto degli argomenti di funzione e una restituzione perfetta del risultato. Questa funzionalità è parte della specifica dello standard C++ 14 in formato bozza. In queste specializzazioni del modello non è necessario specificare i tipi di argomento quando si richiamano i funtori di aritmetica, di confronto e degli operatori bit per bit. È possibile eseguire l'overload degli operatori di aritmetica, di confronto, logici o bit per bit per i tipi personalizzati o per le combinazioni eterogenee di tipi, quindi utilizzare i funtori di operatore trasparenti come argomenti della funzione. Ad esempio, se il tipo *MyType* implementa `operator<`, è possibile chiamare `sort(my_collection.begin(), my_collection.end(), less<>())` anziché specificare in modo esplicito il tipo `sort(my_collection.begin(), my_collection.end(), less<MyType>())`.  
  
## <a name="c11c14-implementation"></a>Implementazione di C++11/C++14  
 Le seguenti funzionalità vengono aggiunte in Visual C++ nell'implementazione di C++11/C++14:  
  
-   Oggetto *firma di chiamata* è il nome di un tipo restituito seguito da un elenco delimitato da virgole tra parentesi zero o più tipi di argomento.  
  
-   Oggetto *tipo richiamabile* è un puntatore a funzione, un puntatore a funzione membro, un puntatore ai dati dei membri o un tipo di classe i cui oggetti possono apparire immediatamente a sinistra di un operatore di chiamata di funzione.  
  
-   Oggetto *oggetto richiamabile* è un oggetto di tipo richiamabile.  
  
-   Oggetto *tipo wrapper di chiamata* è un tipo che utilizza un oggetto richiamabile e supporta un'operazione di chiamata per l'inoltro a tale oggetto.  
  
-   Oggetto *wrapper di chiamata* è un oggetto di un tipo di wrapper di chiamata.  
  
-   Oggetto *oggetto di destinazione* è l'oggetto richiamabile utilizzato da un oggetto wrapper di chiamata.  
  
 La pseudo-funzione `INVOKE(f, t1, t2, ..., tN)` indica una delle seguenti operazioni:  
  
- `(t1.*f)(t2, ..., tN)` quando `f` è un puntatore alla funzione membro di classe `T` e `t1` è un oggetto di tipo `T`, un riferimento a un oggetto di tipo `T` o un riferimento a un oggetto di un tipo derivato da `T`.  
  
- `((*t1).*f)(t2, ..., tN)` quando `f` è un puntatore alla funzione membro di classe `T` e `t1` non è uno dei tipi descritti nell'elemento precedente.  
  
- `t1.*f` quando N == 1 e `f` è un puntatore ai dati dei membri di una classe `T` e `t1` è un oggetto di tipo `T`, un riferimento a un oggetto di tipo `T` o un riferimento a un oggetto di un tipo derivato da `T`.  
  
- `(*t1).*f` quando N== 1 e `f` è un puntatore ai dati dei membri di una classe `T` e `t1` non è uno dei tipi descritti nell'elemento precedente.  
  
- `f(t1, t2, ..., tN)` in tutti gli altri casi.  
  
 La pseudo-funzione `INVOKE(f, t1, t2, ..., tN, R)` indica `INVOKE(f, t1, t2, ..., tN)` implicitamente convertito in `R`.  
  
 Se un wrapper di chiamata ha un *tipo di risultato debole*, il tipo del relativo tipo di membro `result_type` basato sul tipo `T` dell'oggetto di destinazione del wrapper, come indicato di seguito:  
  
-   Se `T` è un puntatore a una funzione, `result_type` è sinonimo del tipo restituito di `T`.  
  
-   Se `T` è un puntatore a una funzione membro, `result_type` è sinonimo del tipo restituito di `T`.  
  
-   Se `T` è un tipo di classe con un membro di tipo `result_type`, `result_type` è sinonimo di `T::result_type`.  
  
-   In caso contrario, non è presente alcun membro di `result_type`.  
  
 A ogni wrapper di chiamata è associato un costruttore di spostamento e uno di copia. Oggetto *wrapper di chiamata semplice* è un wrapper di chiamata che ha un operatore e il cui costruttore di copia, costruttore di spostamento e l'operatore di assegnazione non genera eccezioni di assegnazione. Oggetto *wrapper di chiamata di inoltro* è un wrapper di chiamata che può essere chiamato tramite un elenco di argomenti arbitrario e che passa gli argomenti per l'oggetto richiamabile sottoposta a wrapping come riferimenti. Tutti gli argomenti rvalue vengono passati come riferimenti rvalue e gli argomenti lvalue vengono passati come riferimenti lvalue.  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[bad_function_call](../standard-library/bad-function-call-class.md)|Una classe che descrive l'eccezione generata per indicare che una chiamata a `operator()` su un [funzione](../standard-library/function-class.md) oggetto non è riuscita perché l'oggetto è vuoto.|  
|[binary_negate](../standard-library/binary-negate-class.md)|Classe modello che fornisce una funzione membro che nega il valore restituito di una funzione binaria specificata.|  
|[binder1st](../standard-library/binder1st-class.md)|Classe modello che fornisce un costruttore che converte un oggetto funzione binaria in un oggetto funzione unaria associando il primo argomento della funzione binaria a un valore specificato.|  
|[binder2nd](../standard-library/binder2nd-class.md)|Classe modello che fornisce un costruttore che converte un oggetto funzione binaria in un oggetto funzione unaria associando il secondo argomento della funzione binaria a un valore specificato.|  
|[const_mem_fun_ref_t](../standard-library/const-mem-fun-ref-t-class.md)|Classe di adattatori che consente a una funzione membro const che non accetta argomenti di chiamare gli operatori come oggetto funzione unaria una volta inizializzata con un argomento di riferimento.|  
|[const_mem_fun_t](../standard-library/const-mem-fun-t-class.md)|Classe di adattatori che consente a una funzione membro const che non accetta argomenti di chiamare gli operatori come oggetto funzione unaria una volta inizializzata con un argomento di puntatore.|  
|[const_mem_fun1_ref_t](../standard-library/const-mem-fun1-ref-t-class.md)|Classe di adattatori che consente a una funzione membro const che accetta un singolo argomento di chiamare gli operatori come oggetto funzione unaria una volta inizializzata con un argomento di riferimento.|  
|[const_mem_fun1_t](../standard-library/const-mem-fun1-t-class.md)|Classe di adattatori che consente a una funzione membro const che accetta un singolo argomento di chiamare gli operatori come oggetto funzione unaria una volta inizializzata con un argomento di puntatore.|  
|[(funzione)](../standard-library/function-class.md)|Classe che esegue il wrapping di un oggetto chiamabile.|  
|[hash](hash%20Class.md)|Classe che calcola un codice hash per un valore.|  
|[is_bind_expression](../standard-library/is-bind-expression-class.md)|Classe che consente di verificare se un particolare tipo viene generato chiamando `bind`.|  
|[is_placeholder](../standard-library/is-placeholder-class.md)|Classe che consente di verificare se un particolare tipo è un segnaposto.|  
|[mem_fun_ref_t](../standard-library/mem-fun-ref-t-class.md)|Classe di adattatori che consente una **non_const** funzione membro che non accetta argomenti di essere chiamata come oggetto funzione unaria una volta inizializzata con un argomento di riferimento.|  
|[mem_fun_t](../standard-library/mem-fun-t-class.md)|Classe di adattatori che consente una **non_const** funzione membro che non accetta argomenti di essere chiamata come oggetto funzione unaria una volta inizializzata con un argomento di puntatore.|  
|[mem_fun1_ref_t](../standard-library/mem-fun1-ref-t-class.md)|Classe di adattatori che consente una **non_const** funzione membro che accetta un singolo argomento di essere chiamata come oggetto funzione unaria una volta inizializzata con un argomento di riferimento.|  
|[mem_fun1_t](../standard-library/mem-fun1-t-class.md)|Classe di adattatori che consente una **non_const** funzione membro che accetta un singolo argomento di essere chiamata come oggetto funzione unaria una volta inizializzata con un argomento di puntatore.|  
|[pointer_to_binary_function](../standard-library/pointer-to-binary-function-class.md)|Converte un puntatore a funzione binaria in una funzione binaria adattabile.|  
|[pointer_to_unary_function](../standard-library/pointer-to-unary-function-class.md)|Converte un puntatore a funzione unaria in una funzione unaria adattabile.|  
|[reference_wrapper](../standard-library/reference-wrapper-class.md)|Classe che incapsula un riferimento.|  
|[result_of](../standard-library/result-of-class2.md)|Oggetto struct che utilizza il tipo restituito di un oggetto richiamabile di cui effettua il wrapping.|  
|[unary_negate](../standard-library/unary-negate-class.md)|Classe modello che fornisce una funzione membro che nega il valore restituito di una funzione unaria specificata.|  
  
### <a name="functions"></a>Funzioni  
  
|||  
|-|-|  
|[operazione di binding](../Topic/%3Cfunctional%3E%20functions.md#bind_function)|Associa gli argomenti a un oggetto richiamabile.|  
|[bind1st](../Topic/%3Cfunctional%3E%20functions.md#bind1st_function)|Funzione di modello helper che crea un adattatore per convertire un oggetto funzione binaria in un oggetto funzione unaria associando il primo argomento della funzione binaria a un valore specificato.|  
|[bind2nd](../Topic/%3Cfunctional%3E%20functions.md#bind2nd_function)|Funzione di modello helper che crea un adattatore per convertire un oggetto funzione binaria in un oggetto funzione unaria associando il secondo argomento della funzione binaria a un valore specificato.|  
|[bit_and](../Topic/%3Cfunctional%3E%20functions.md#bit_and_function)|Restituisce l'AND logico bit per bit (operatore binario &) dei due parametri.|  
|[bit_not](../Topic/%3Cfunctional%3E%20functions.md#bit_not_function)|Restituisce il complemento logico bit per bit (operator~) del parametro.|  
|[bit_or](../Topic/%3Cfunctional%3E%20functions.md#bit_or_function)|Restituisce l'OR logico (operatore &#124;) dei due parametri.|  
|[bit_xor](../Topic/%3Cfunctional%3E%20functions.md#bit_xor_function)|Restituisce il risultato dell'operazione XOR logico bit per bit (operator ^) dei due parametri.|  
|[cref](../Topic/%3Cfunctional%3E%20functions.md#cref_function)|Costruisce un oggetto `reference_wrapper` di tipo const da un argomento.|  
|[mem_fn](../Topic/%3Cfunctional%3E%20functions.md#mem_fn_function)|Genera un wrapper di chiamata semplice.|  
|[mem_fun](../Topic/%3Cfunctional%3E%20functions.md#mem_fun_function)|Funzioni di modello helper utilizzate per costruire gli adattatori dell'oggetto funzione per funzioni membro una volta inizializzate con gli argomenti di puntatore.|  
|[mem_fun_ref](../Topic/%3Cfunctional%3E%20functions.md#mem_fun_ref_function)|Funzione di modello helper utilizzata per costruire gli adattatori dell'oggetto funzione per funzioni membro una volta inizializzata con gli argomenti di riferimento.|  
|[not1](../Topic/%3Cfunctional%3E%20functions.md#not1_function)|Restituisce il complemento di un predicato unario.|  
|[not2](../Topic/%3Cfunctional%3E%20functions.md#not2_function)|Restituisce il complemento di un predicato binario.|  
|[ptr_fun](../Topic/%3Cfunctional%3E%20functions.md#ptr_fun_function)|Funzione di modello helper utilizzata per convertire i puntatori a funzioni unarie e binarie rispettivamente in funzioni adattabili unarie e binarie.|  
|[ref](../Topic/%3Cfunctional%3E%20functions.md#ref_function)|Costruisce un oggetto `reference_wrapper` da un argomento.|  
|[swap](../Topic/%3Cfunctional%3E%20functions.md#swap_function)|Scambia due oggetti `function`.|  
  
### <a name="structs"></a>Struct  
  
|||  
|-|-|  
|[binary_function](../standard-library/binary-function-struct.md)|Classe base vuota che definisce i tipi che possono essere ereditati da una classe derivata che fornisce un oggetto funzione binaria.|  
|[Divide](../standard-library/divides-struct.md)|La classe fornisce un oggetto funzione predefinito che esegue l'operazione aritmetica di divisione sugli elementi di un tipo di valore specificato.|  
|[equal_to](../standard-library/equal-to-struct.md)|Predicato binario che verifica se un valore di un tipo specificato equivale a un altro valore di quel tipo.|  
|[maggiore](../standard-library/greater-struct.md)|Predicato binario che verifica se un valore di un tipo specificato è maggiore di un altro valore di quel tipo.|  
|[greater_equal](../standard-library/greater-equal-struct.md)|Predicato binario che verifica se un valore di un tipo specificato è maggiore o uguale a un altro valore di quel tipo.|  
|[minore](../standard-library/less-struct.md)|Predicato binario che verifica se un valore di un tipo specificato è minore di un altro valore di quel tipo.|  
|[less_equal](../standard-library/less-equal-struct.md)|Predicato binario che verifica se un valore di un tipo specificato è minore o uguale a un altro valore di quel tipo.|  
|[logical_and](../standard-library/logical-and-struct.md)|La classe fornisce un oggetto funzione predefinito che esegue l'operazione di congiunzione logica sugli elementi di un tipo di valore specificato e verifica se il risultato è true o false.|  
|[logical_not](../standard-library/logical-not-struct.md)|La classe fornisce un oggetto funzione predefinito che esegue l'operazione di negazione logica sugli elementi di un tipo di valore specificato e verifica se il risultato è true o false.|  
|[logical_or](../standard-library/logical-or-struct.md)|La classe fornisce un oggetto funzione predefinito che esegue l'operazione di disgiunzione logica sugli elementi di un tipo di valore specificato e verifica se il risultato è true o false.|  
|[segno meno](../standard-library/minus-struct.md)|La classe fornisce un oggetto funzione predefinito che esegue l'operazione aritmetica di sottrazione sugli elementi di un tipo di valore specificato.|  
|[modulo](../standard-library/modulus-struct.md)|La classe fornisce un oggetto funzione predefinito che esegue l'operazione aritmetica di modulo sugli elementi di un tipo di valore specificato.|  
|[Moltiplica](../standard-library/multiplies-struct.md)|La classe fornisce un oggetto funzione predefinito che esegue l'operazione aritmetica di moltiplicazione sugli elementi di un tipo di valore specificato.|  
|[negare](../standard-library/negate-struct.md)|La classe fornisce un oggetto funzione predefinita che restituisce il corrispondente negativo del valore di un elemento.|  
|[not_equal_to](../standard-library/not-equal-to-struct.md)|Predicato binario che verifica se un valore di un tipo specificato non equivale a un altro valore di quel tipo.|  
|[Plus](../standard-library/plus-struct.md)|La classe fornisce un oggetto funzione predefinito che esegue l'operazione aritmetica di addizione sugli elementi di un tipo di valore specificato.|  
|[unary_function](../standard-library/unary-function-struct.md)|Classe base vuota che definisce i tipi che possono essere ereditati da una classe derivata che fornisce un oggetto funzione unaria.|  
  
### <a name="objects"></a>Oggetti  
  
|||  
|-|-|  
|[_1.._M](../standard-library/1-object.md)|Segnaposto per gli argomenti sostituibili.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operatore = =](../Topic/%3Cfunctional%3E%20operators.md#operator_eq_eq)|Impedisce il confronto di uguaglianza di oggetti richiamabili.|  
|[operatore! =](../Topic/%3Cfunctional%3E%20operators.md#operator_neq)|Impedisce il confronto di disuguaglianza di oggetti richiamabili.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)

