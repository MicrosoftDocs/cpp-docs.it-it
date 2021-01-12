---
description: 'Altre informazioni su: &lt; funzionale&gt;'
title: '&lt;functional&gt;'
ms.date: 02/21/2019
f1_keywords:
- <functional>
helpviewer_keywords:
- functors
- functional header
ms.assetid: 7dd463e8-a29f-49bc-aedd-8fa53b54bfbc
ms.openlocfilehash: fe9a42c2992557bd9cf1237a6fe66c4fbfcc232d
ms.sourcegitcommit: 118e4ad82c0f1c9ac120f105d84224e5fe4cef28
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/12/2021
ms.locfileid: "98126130"
---
# <a name="ltfunctionalgt"></a>&lt;functional&gt;

Definisce le funzioni della libreria standard C++ che consentono di costruire *oggetti funzione*, noti anche come *funtori*, e i relativi Binder. Un oggetto funzione è un oggetto di un tipo che definisce `operator()`. Un oggetto funzione può essere un puntatore a funzione, ma più tipicamente l'oggetto viene utilizzato per archiviare le informazioni aggiuntive accessibili durante una chiamata di funzione.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<functional>

**Spazio dei nomi:** std

## <a name="remarks"></a>Osservazioni

Gli algoritmi richiedono due tipi di oggetti funzione, ovvero *unario* e *binario*. Gli oggetti funzione di tipo unario richiedono un argomento, mentre gli oggetti funzione di tipo binario richiedono due argomenti. Un oggetto funzione e i puntatori a funzione possono essere passati come predicato a un algoritmo, ma gli oggetti funzione sono anche adattabili e aumentano l'ambito, la flessibilità e l'efficienza della libreria standard C++. Se, ad esempio, un valore deve essere associato a una funzione prima del passaggio a un algoritmo, non è possibile ad esempio utilizzare un puntatore a funzione. Gli adattatori di funzione convertono i puntatori a funzione in oggetti funzione adattabili che possono essere associati a un valore. L'intestazione \<functional> contiene anche gli adattatori di funzione membro che consentono la chiamata di funzioni membro come oggetti funzione adattabili. Le funzioni sono adattabili se le dichiarazioni di tipo corrispondenti sono annidate, ne specificano l'argomento e i tipi restituiti. Gli oggetti funzione e i relativi adattatori consentono alla libreria standard C++ di aggiornare le applicazioni esistenti, oltre a facilitare l'integrazione di tale libreria nell'ambiente di programmazione C++.

L'implementazione degli oggetti funzione in \<functional> include *Transparent operator funtori*. che sono specializzazioni di oggetti funzione standard e non accettano parametri di modello ed eseguono l'avanzamento perfetto degli argomenti della funzione e la restituzione perfetta del risultato. In queste specializzazioni del modello non è necessario specificare i tipi di argomento quando si richiamano i funtori di aritmetica, di confronto e degli operatori bit per bit. È possibile eseguire l'overload degli operatori di aritmetica, di confronto, logici o bit per bit per i tipi personalizzati o per le combinazioni eterogenee di tipi, quindi utilizzare i funtori di operatore trasparenti come argomenti della funzione. Ad esempio, se il tipo *MyType* implementa `operator<`, è possibile chiamare `sort(my_collection.begin(), my_collection.end(), less<>())` anziché specificare in modo esplicito il tipo `sort(my_collection.begin(), my_collection.end(), less<MyType>())`.

Le funzionalità seguenti sono state aggiunte in C++ 11, C++ 14 e C++ 17:

- Una *firma di chiamata* è il nome di un tipo restituito seguito da un elenco di zero o di più tipi di argomenti delimitato da virgole tra parentesi.

- Un *tipo chiamabile* è un puntatore a funzione, a una funzione membro, ai dati dei membri o un tipo di classe i cui oggetti possono apparire immediatamente a sinistra di un operatore di chiamata di funzione.

- Un *oggetto chiamabile* è un oggetto di tipo chiamabile.

- Un *tipo wrapper di chiamata* è un tipo che include un oggetto chiamabile e supporta un'operazione di chiamata che esegue l'inoltro a tale oggetto.

- Un *wrapper di chiamata* è un oggetto di tipo wrapper di chiamata.

- Un *oggetto di destinazione* è l'oggetto chiamabile incluso in un oggetto wrapper di chiamata.

La pseudo-funzione `INVOKE(f, t1, t2, ..., tN)` indica una delle seguenti operazioni:

- `(t1.*f)(t2, ..., tN)` quando `f` è un puntatore alla funzione membro di classe `T` e `t1` è un oggetto di tipo `T`, un riferimento a un oggetto di tipo `T` o un riferimento a un oggetto di un tipo derivato da `T`.

- `((*t1).*f)(t2, ..., tN)` quando `f` è un puntatore alla funzione membro di classe `T` e `t1` non è uno dei tipi descritti nell'elemento precedente.

- `t1.*f` quando N == 1 e `f` è un puntatore ai dati dei membri di una classe `T` e `t1` è un oggetto di tipo `T`, un riferimento a un oggetto di tipo `T` o un riferimento a un oggetto di un tipo derivato da `T`.

- `(*t1).*f` quando N== 1 e `f` è un puntatore ai dati dei membri di una classe `T` e `t1` non è uno dei tipi descritti nell'elemento precedente.

- `f(t1, t2, ..., tN)` in tutti gli altri casi.

La pseudo-funzione `INVOKE(f, t1, t2, ..., tN, R)` indica `INVOKE(f, t1, t2, ..., tN)` implicitamente convertito in `R`.

Se un wrapper di chiamata ha un *tipo di risultato debole*, il relativo tipo di membro `result_type` è basato sul tipo `T` dell'oggetto di destinazione del wrapper, come indicato di seguito:

- Se `T` è un puntatore a una funzione, `result_type` è sinonimo del tipo restituito di `T`.

- Se `T` è un puntatore a una funzione membro, `result_type` è sinonimo del tipo restituito di `T`.

- Se `T` è un tipo di classe con un membro di tipo `result_type`, `result_type` è sinonimo di `T::result_type`.

- In caso contrario, non è presente alcun membro di `result_type`.

A ogni wrapper di chiamata è associato un costruttore di spostamento e uno di copia. Un *wrapper di chiamata semplice* è un wrapper di chiamata che ha un operatore di assegnazione e i cui costruttori di copia e di spostamento e l'operatore di assegnazione non generano eccezioni. Un *wrapper di chiamata di inoltro* è un wrapper di chiamata che può essere chiamato mediante un elenco di argomenti arbitrari e che passa come riferimenti gli argomenti all'oggetto chiamabile di cui è stato eseguito il wrapping. Tutti gli argomenti rvalue vengono passati come riferimenti rvalue e gli argomenti lvalue vengono passati come riferimenti lvalue.

## <a name="members"></a>Membri

### <a name="classes"></a>Classi

|Nome|Descrizione|
|-|-|
|[bad_function_call](../standard-library/bad-function-call-class.md)|Classe che descrive un'eccezione generata per indicare che una chiamata a `operator()` su un oggetto [function](../standard-library/function-class.md) non è riuscita perché l'oggetto era vuoto.|
|[binary_negate](../standard-library/binary-negate-class.md)|Modello di classe che fornisce una funzione membro che nega il valore restituito di una funzione binaria specificata.<br/> (Deprecato in C++ 17). |
|[binder1st](../standard-library/binder1st-class.md)|Modello di classe che fornisce un costruttore che converte un oggetto funzione binaria in un oggetto funzione unaria associando il primo argomento della funzione binaria a un valore specificato.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |
|[binder2nd](../standard-library/binder2nd-class.md)|Modello di classe che fornisce un costruttore che converte un oggetto funzione binaria in un oggetto funzione unaria associando il secondo argomento della funzione binaria a un valore specificato.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |
|[boyer_moore_horspool_searcher](../standard-library/boyer-moore-horspool-searcher-class.md)||
|[boyer_moore_searcher](../standard-library/boyer-moore-searcher-class.md)||
|[const_mem_fun_ref_t](../standard-library/const-mem-fun-ref-t-class.md)|Classe di adattatori che consente a una funzione membro const che non accetta argomenti di chiamare gli operatori come oggetto funzione unaria una volta inizializzata con un argomento di riferimento.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |
|[const_mem_fun_t](../standard-library/const-mem-fun-t-class.md)|Classe di adattatori che consente a una funzione membro const che non accetta argomenti di chiamare gli operatori come oggetto funzione unaria una volta inizializzata con un argomento di puntatore.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |
|[const_mem_fun1_ref_t](../standard-library/const-mem-fun1-ref-t-class.md)|Classe di adattatori che consente a una funzione membro const che accetta un singolo argomento di chiamare gli operatori come oggetto funzione unaria una volta inizializzata con un argomento di riferimento.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |
|[const_mem_fun1_t](../standard-library/const-mem-fun1-t-class.md)|Classe di adattatori che consente a una funzione membro const che accetta un singolo argomento di chiamare gli operatori come oggetto funzione unaria una volta inizializzata con un argomento di puntatore.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |
|[default_searcher](../standard-library/default-searcher-class.md)||
|[function](../standard-library/function-class.md)|Classe che esegue il wrapping di un oggetto chiamabile.|
|[hash](../standard-library/hash-class.md)|Classe che calcola un codice hash per un valore.|
|[is_bind_expression](../standard-library/is-bind-expression-class.md)|Classe che consente di verificare se un particolare tipo viene generato chiamando `bind`.|
|[is_placeholder](../standard-library/is-placeholder-class.md)|Classe che consente di verificare se un particolare tipo è un segnaposto.|
|[mem_fun_ref_t](../standard-library/mem-fun-ref-t-class.md)|Classe di adattatori che consente a una `non_const` funzione membro che non accetta argomenti di essere chiamata come oggetto funzione unaria se inizializzata con un argomento di riferimento.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |
|[mem_fun_t](../standard-library/mem-fun-t-class.md)|Classe di adattatori che consente a una `non_const` funzione membro che non accetta argomenti di essere chiamata come oggetto funzione unaria se inizializzata con un argomento di puntatore.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |
|[mem_fun1_ref_t](../standard-library/mem-fun1-ref-t-class.md)|Classe di adattatori che consente a una `non_const` funzione membro che accetta un singolo argomento di essere chiamata come oggetto funzione binaria se inizializzata con un argomento di riferimento.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |
|[mem_fun1_t](../standard-library/mem-fun1-t-class.md)|Classe di adattatori che consente a una `non_const` funzione membro che accetta un singolo argomento di essere chiamata come oggetto funzione binaria se inizializzata con un argomento di puntatore.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |
|[pointer_to_binary_function](../standard-library/pointer-to-binary-function-class.md)|Converte un puntatore a funzione binaria in una funzione binaria adattabile.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |
|[pointer_to_unary_function](../standard-library/pointer-to-unary-function-class.md)|Converte un puntatore a funzione unaria in una funzione unaria adattabile.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |
|[reference_wrapper](../standard-library/reference-wrapper-class.md)|Classe che incapsula un riferimento.|
|[unary_negate](../standard-library/unary-negate-class.md)|Modello di classe che fornisce una funzione membro che nega il valore restituito di una funzione unaria specificata.<br/> (Deprecato in C++ 17).  |

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|-|-|
|[bind](../standard-library/functional-functions.md#bind)|Associa gli argomenti a un oggetto richiamabile.|
|[bind1st](../standard-library/functional-functions.md#bind1st)|Funzione di modello helper che crea un adattatore per convertire un oggetto funzione binaria in un oggetto funzione unaria associando il primo argomento della funzione binaria a un valore specificato.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |
|[bind2nd](../standard-library/functional-functions.md#bind2nd)|Funzione di modello helper che crea un adattatore per convertire un oggetto funzione binaria in un oggetto funzione unaria associando il secondo argomento della funzione binaria a un valore specificato.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |
|[bit_and](../standard-library/functional-functions.md#bit_and)|Restituisce l'AND logico bit per bit (operatore binario &) dei due parametri.|
|[bit_not](../standard-library/functional-functions.md#bit_not)|Restituisce il complemento logico bit per bit (operator~) del parametro.<br/> (Aggiunto in C++ 14). |
|[bit_or](../standard-library/functional-functions.md#bit_or)|Restituisce l'OR logico bit per bit (operatore&#124;) dei due parametri.|
|[bit_xor](../standard-library/functional-functions.md#bit_xor)|Restituisce il risultato dell'operazione XOR logico bit per bit (operator ^) dei due parametri.|
|[cref](../standard-library/functional-functions.md#cref)|Costruisce un oggetto `reference_wrapper` di tipo const da un argomento.|
|[invoke](../standard-library/functional-functions.md#invoke)||
|[mem_fn](../standard-library/functional-functions.md#mem_fn)|Genera un wrapper di chiamata semplice.|
|[mem_fun](../standard-library/functional-functions.md#mem_fun)|Funzioni di modello helper utilizzate per costruire gli adattatori dell'oggetto funzione per funzioni membro una volta inizializzate con gli argomenti di puntatore.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |
|[mem_fun_ref](../standard-library/functional-functions.md#mem_fun_ref)|Funzione di modello helper utilizzata per costruire gli adattatori dell'oggetto funzione per funzioni membro una volta inizializzata con gli argomenti di riferimento.|
|[not1](../standard-library/functional-functions.md#not1)|Restituisce il complemento di un predicato unario.<br/> (Deprecato in C++ 17). |
|[not2](../standard-library/functional-functions.md#not2)|Restituisce il complemento di un predicato binario.<br/> (Deprecato in C++ 17). |
|[not_fn](../standard-library/functional-functions.md#not_fn)|Restituisce il complemento del risultato dell'oggetto funzione.<br/> (Aggiunto in C++ 17). |
|[ptr_fun](../standard-library/functional-functions.md#ptr_fun)|Funzione di modello helper utilizzata per convertire i puntatori a funzioni unarie e binarie rispettivamente in funzioni adattabili unarie e binarie.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |
|[ref](../standard-library/functional-functions.md#ref)|Costruisce un oggetto `reference_wrapper` da un argomento.|
|[scambio](../standard-library/functional-functions.md#swap)|Scambia due oggetti `function`.|

### <a name="structs"></a>Struct

|Nome|Descrizione|
|-|-|
|[binary_function](../standard-library/binary-function-struct.md)|Classe base vuota che definisce i tipi che possono essere ereditati da una classe derivata che fornisce un oggetto funzione binaria.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |
|[divides](../standard-library/divides-struct.md)|La classe fornisce un oggetto funzione predefinito che esegue l'operazione aritmetica di divisione sugli elementi di un tipo di valore specificato.|
|[equal_to](../standard-library/equal-to-struct.md)|Predicato binario che verifica se un valore di un tipo specificato equivale a un altro valore di quel tipo.|
|[greater](../standard-library/greater-struct.md)|Predicato binario che verifica se un valore di un tipo specificato è maggiore di un altro valore di quel tipo.|
|[greater_equal](../standard-library/greater-equal-struct.md)|Predicato binario che verifica se un valore di un tipo specificato è maggiore o uguale a un altro valore di quel tipo.|
|[less](../standard-library/less-struct.md)|Predicato binario che verifica se un valore di un tipo specificato è minore di un altro valore di quel tipo.|
|[less_equal](../standard-library/less-equal-struct.md)|Predicato binario che verifica se un valore di un tipo specificato è minore o uguale a un altro valore di quel tipo.|
|[logical_and](../standard-library/logical-and-struct.md)|La classe fornisce un oggetto funzione predefinito che esegue l'operazione di congiunzione logica sugli elementi di un tipo di valore specificato e verifica se il risultato è true o false.|
|[logical_not](../standard-library/logical-not-struct.md)|La classe fornisce un oggetto funzione predefinito che esegue l'operazione di negazione logica sugli elementi di un tipo di valore specificato e verifica se il risultato è true o false.|
|[logical_or](../standard-library/logical-or-struct.md)|La classe fornisce un oggetto funzione predefinito che esegue l'operazione di disgiunzione logica sugli elementi di un tipo di valore specificato e verifica se il risultato è true o false.|
|[minus](../standard-library/minus-struct.md)|La classe fornisce un oggetto funzione predefinito che esegue l'operazione aritmetica di sottrazione sugli elementi di un tipo di valore specificato.|
|[modulo](../standard-library/modulus-struct.md)|La classe fornisce un oggetto funzione predefinito che esegue l'operazione aritmetica di modulo sugli elementi di un tipo di valore specificato.|
|[multiplies](../standard-library/multiplies-struct.md)|La classe fornisce un oggetto funzione predefinito che esegue l'operazione aritmetica di moltiplicazione sugli elementi di un tipo di valore specificato.|
|[negate](../standard-library/negate-struct.md)|La classe fornisce un oggetto funzione predefinita che restituisce il corrispondente negativo del valore di un elemento.|
|[not_equal_to](../standard-library/not-equal-to-struct.md)|Predicato binario che verifica se un valore di un tipo specificato non equivale a un altro valore di quel tipo.|
|[plus](../standard-library/plus-struct.md)|La classe fornisce un oggetto funzione predefinito che esegue l'operazione aritmetica di addizione sugli elementi di un tipo di valore specificato.|
|[unary_function](../standard-library/unary-function-struct.md)|Classe base vuota che definisce i tipi che possono essere ereditati da una classe derivata che fornisce un oggetto funzione unaria.<br/> (Deprecato in C++ 11, rimosso in C++ 17). |

### <a name="objects"></a>Oggetti

|Nome|Descrizione|
|-|-|
|[_1.._M](../standard-library/1-object.md)|Segnaposto per gli argomenti sostituibili.|

### <a name="operators"></a>Operatori

|Nome|Descrizione|
|-|-|
|[operatore = =](../standard-library/functional-operators.md#op_eq_eq)|Impedisce il confronto di uguaglianza di oggetti richiamabili.|
|[operatore! =](../standard-library/functional-operators.md#op_neq)|Impedisce il confronto di disuguaglianza di oggetti richiamabili.|

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
