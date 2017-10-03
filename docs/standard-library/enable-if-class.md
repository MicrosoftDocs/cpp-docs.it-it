---
title: Classe enable_if | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- type_traits/std::enable_if
dev_langs:
- C++
helpviewer_keywords:
- enable_if class
- enable_if
ms.assetid: c6b8d41c-a18f-4e30-a39e-b3aa0e8fd926
caps.latest.revision: 28
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 4d01230a1e185ad793f554afa7fa2fe2942b27a6
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="enableif-class"></a>Classe enable_if
Crea un'istanza di un tipo in modo condizionale per la risoluzione dell'overload SFINAE. Il typedef annidato `enable_if<Condition,Type>::type` esiste, ed è sinonimo di `Type`, solo ed esclusivamente se `Condition` è `true`.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <bool B, class T = void>
struct enable_if;
```  
  
#### <a name="parameters"></a>Parametri  
 `B`  
 Valore che determina l'esistenza del tipo risultante.  
  
 `T`  
 Tipo di cui creare un'istanza se `B` è true.  
  
## <a name="remarks"></a>Note  
 Se `B` è true, `enable_if<B, T>` include un typedef annidato denominato "type" che è sinonimo di `T`.  
  
 Se `B` è false, `enable_if<B, T>` non dispone di un typedef annidato denominato "type".  
  
 Viene fornito questo modello di alias:  
  
```cpp  
template <bool B, class T = void>
using enable_if_t = typename enable_if<B,T>::type;
```  
  
 In C++ un errore di sostituzione dei parametri modello non è un errore vero e proprio, ma è detto *SFINAE* (Substitution Failure Is Not An Error). In genere `enable_if` viene usato per rimuovere candidati dalla risoluzione dell'overload, ovvero seleziona il set di overload, in modo da consentire il rifiuto di una definizione a favore di un'altra. Questo è conforme al comportamento di SFINAE. Per altre informazioni su SFINAE, vedere [Substitution failure is not an error](http://go.microsoft.com/fwlink/LinkId=394798) (Un errore di sostituzione non è un errore) su Wikipedia.  
  
 Ecco quattro scenari di esempio:  
  
-   Scenario 1: wrapping del tipo restituito di una funzione:  
  
 ```cpp  
    template <your_stuff>  
typename enable_if<your_condition, your_return_type>::type
    yourfunction(args) {// ...
 }
// The alias template makes it more concise:
    template <your_stuff>  
enable_if_t<your_condition, your_return_type>  
yourfunction(args) {// ...
 }
```  
  
-   Scenario 2: aggiunta di un parametro di funzione che include un argomento predefinito:  
  
 ```cpp  
    template <your_stuff>  
your_return_type_if_present
    yourfunction(args, enable_if_t<your condition, FOO> = BAR) {// ...
 }
```  
  
-   Scenario 3: aggiunta di un parametro di modello che include un argomento predefinito:  
  
 ```cpp  
    template <your_stuff, typename Dummy = enable_if_t<your_condition>>  
rest_of_function_declaration_goes_here
```  
  
-   Scenario 4: se la funzione include un argomento non basato su modello, è possibile eseguire il wrapping del relativo tipo:  
  
 ```cpp  
    template <typename T>  
void your_function(const T& t,
    enable_if_t<is_something<T>::value, const string&>  
s) {// ...
 }
```  
  
 Lo scenario 1 non funziona con i costruttore e gli operatori di conversione poiché questi non dispongono di tipi restituiti.  
  
 Lo scenario 2 lascia il parametro non denominato. È possibile specificare `::type Dummy = BAR`, ma il nome `Dummy` è irrilevante ed è probabile che l'assegnazione di un nome generi un avviso di tipo "parametro senza riferimento". È necessario scegliere un tipo di parametro di funzione `FOO` e l'argomento `BAR` predefinito.  È possibile specificare `int` e `0`, ma gli utenti del codice potrebbero accidentalmente passare un intero supplementare alla funzione, che verrebbe ignorato. È invece consigliabile usare `void **` e `0` o `nullptr` perché quasi nulla è convertibile in `void **`:  
  
```cpp  
template <your_stuff>  
your_return_type_if_present
yourfunction(args, typename enable_if<your_condition, void **>::type = nullptr) {// ...
}
```  
  
 Lo scenario 2 funziona anche per i costruttori normali.  Non è invece adatto agli operatori di conversione, che non accettano parametri supplementari.  Non funziona neanche per i costruttori [variadic`enable_if` perché con l'aggiunta di parametri supplementari il pacchetto di parametri di funzione diventa un contesto non dedotto e quindi lo scopo di ](../cpp/ellipses-and-variadic-templates.md) è vanificato.  
  
 Lo scenario 3 usa il nome `Dummy`, ma è facoltativo. In realtà funziona anche solo "`typename = typename`", ma se lo si ritiene strano, si può usare un nome "fittizio" qualsiasi, purché non sia un nome che potrebbe essere usato nella definizione di funzione. Se non si assegna un tipo a `enable_if`, l'impostazione predefinita è void, un risultato del tutto ragionevole poiché `Dummy` non è rilevante. Funziona per tutto, anche per gli operatori di conversione e i costruttori [variadic](../cpp/ellipses-and-variadic-templates.md).  
  
 Lo scenario 4 funziona per i costruttori che dispongono di tipi restituiti e quindi risolve la limitazione di wrapping dello scenario 1.  Lo scenario 4, tuttavia, è limitato agli argomenti di funzione non basati su modello, che non sempre sono disponibili  (l'uso dello scenario 4 su un argomento di funzione basato su modello impedisce il funzionamento della deduzione di argomenti del modello su di esso).  
  
 L'oggetto `enable_if` è potente, ma è anche pericoloso se usato in modo improprio.  Dato che il suo scopo consiste nell'eliminazione di candidati prima della risoluzione dell'overload, se viene usato in modo improprio i suoi effetti possono essere molto ambigui.  Ecco alcuni consigli:  
  
-   Non usare `enable_if` per la selezione di implementazioni in fase di compilazione. Non scrivere mai un `enable_if` per `CONDITION` e un altro per `!CONDITION`.  Usare invece un criterio di *invio tag*, ad esempio un algoritmo che seleziona le implementazioni in base ai punti di forza degli iteratori assegnati.  
  
-   Non usare `enable_if` per applicare requisiti.  Se si vogliono convalidare i parametri modello e, in caso di esito negativo della convalida, fare in modo che venga generato un errore anziché selezionare un'altra implementazione, usare [static_assert](../cpp/static-assert.md).  
  
-   Usare `enable_if` quando è presente un set di overload che rende ambiguo un codice altrimenti corretto.  Spesso questo accade nei costruttori a conversione implicita.  
  
## <a name="example"></a>Esempio  
 In questo esempio viene spiegato come la funzione modello della libreria standard di C++ [STL std::make_pair()](../standard-library/utility-functions.md#make_pair) sfrutta `enable_if`.  
  
```cpp  
void func(const pair<int, int>&);

void func(const pair<string, string>&);

func(make_pair("foo", "bar"));
```  
  
  In questo esempio `make_pair("foo", "bar")` restituisce `pair<const char *, const char *>`. La risoluzione dell'overload deve stabilire quale `func()` è richiesto. `pair<A, B>` ha un costruttore a conversione implicita tratto da `pair<X, Y>`.  Non si tratta di una novità. Era infatti presente in C++98. In C++98/03, tuttavia, la firma del costruttore a conversione implicita esiste sempre, anche se è `pair<int, int>(const pair<const char *, const char *>&)`.  Per la risoluzione dell'overload non è rilevante che un tentativo di creare un'istanza del costruttore determini una forte esplosione perché `const char *` non è implicitamente convertibile in `int`; vengono cercate solo le firme, prima della creazione di un'istanza delle definizioni di funzione.  Il codice di esempio è quindi ambiguo perché sono presenti firme per convertire `pair<const char *, const char *>` sia in `pair<int, int>` che in `pair<string, string>`.  
  
 C++11 risolve questa ambiguità usando `enable_if` per verificare che `pair<A, B>(const pair<X, Y>&)` esista **solo** quando `const X&` è convertibile implicitamente in `A` e `const Y&` è convertibile implicitamente in `B`.  In questo modo, la risoluzione dell'overload può stabilire che `pair<const char *, const char *>` non è convertibile in `pair<int, int>` e che l'overload che accetta `pair<string, string>` è possibile.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)




