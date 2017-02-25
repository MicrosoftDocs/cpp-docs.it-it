---
title: "&lt;type_traits&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<type_traits>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "typetrait (intestazione) [TR1]"
  - "type_traits"
ms.assetid: 2260b51f-8160-4c66-a82f-00b534cb60d4
caps.latest.revision: 35
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 35
---
# &lt;type_traits&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce modelli che forniscono costanti in fase di compilazione che forniscono informazioni sulle proprietà dei rispettivi argomenti di tipo o produrranno trasformato tipi.  
  
## Sintassi  
  
```  
#include <type_traits>  
```  
  
## Note  
 Le classi e i modelli in `<type_traits>` vengono utilizzati per supportare l'inferenza del tipo, classificazione e la trasformazione in fase di compilazione per rilevare gli errori relativi al tipo e che consentono di ottimizzare il codice generico. Queste classi e i modelli includono unario tratti di tipo che descrivono una proprietà di un tipo di tratti di tipo binario che descrivono una relazione tra i tipi e i tratti di trasformazione che modificano una proprietà di un tipo.  
  
 Per supportare i tratti di tipo, una classe helper, `integral_constant`, è definito. Dispone le specializzazioni del modello `true_type` e `false_type` che formano le classi di base per i predicati di tipo. Oggetto *predicato di tipo* è un modello che accetta uno o più argomenti di tipo. Quando un predicato di tipo *include true*, è derivato pubblicamente, in modo diretto o indiretto, da [true\_type](../Topic/true_type%20Typedef.md). Quando un predicato di tipo *include false*, è derivato pubblicamente, in modo diretto o indiretto, da [false\_type](../Topic/false_type%20Typedef.md).  
  
 Oggetto *modificatore di tipo* o *tratto trasformazione* è un modello che accetta uno o più argomenti di modello e presenta un membro, `type`, che è un sinonimo per il tipo modificato.  
  
### Modelli di alias  
 Per semplificare le espressioni di tratti di tipo, [modelli di alias](../cpp/aliases-and-typedefs-cpp.md) per `typename some_trait<T>::type` è specificato, dove " `some_trait`" è il nome della classe modello. Ad esempio, [add\_const](../standard-library/add-const-class.md) dispone di un modello di alias per il tipo, `add_const_t`, definita come:  
  
```cpp  
template<class T>  
    using add_const_t = typename add_const<T>::type;  
```  
  
|||||  
|-|-|-|-|  
|add\_const\_t|aligned\_storage\_t|make\_signed\_t|remove\_pointer\_t|  
|add\_cv\_t|aligned\_union\_t|make\_unsigned\_t|remove\_reference\_t|  
|add\_lvalue\_reference\_t|common\_type\_t|remove\_all\_extents\_t|remove\_volatile\_t|  
|add\_pointer\_t|conditional\_t|remove\_const\_t|result\_of\_t|  
|add\_rvalue\_reference\_t|decay\_t|remove\_cv\_t|underlying\_type\_t|  
|add\_volatile\_t|enable\_if\_t|remove\_extent\_t||  
  
### Classi  
 TypeDef e classe di supporto  
  
|||  
|-|-|  
|[integral\_constant](../standard-library/integral-constant-class-bool-constant-class.md)|Rende costante integrale di un tipo e un valore.|  
|[true\_type](../Topic/true_type%20Typedef.md)|Include la costante integrale con valore true.|  
|[false\_type](../Topic/false_type%20Typedef.md)|Include la costante integrale con valore false.|  
  
 Categorie di tipi primaria  
  
|||  
|-|-|  
|[is\_void](../standard-library/is-void-class.md)|Verifica se il tipo è `void`.|  
|[is\_null\_pointer](../standard-library/is-null-pointer-class.md)|Verifica se il tipo è `std::nullptr_t`.|  
|[is\_integral](../standard-library/is-integral-class.md)|Verifica se il tipo è integrale.|  
|[is\_floating\_point](../standard-library/is-floating-point-class.md)|Verifica se il tipo è a virgola mobile.|  
|[is\_array](../standard-library/is-array-class.md)|Verifica se il tipo è una matrice.|  
|[is\_pointer](../standard-library/is-pointer-class.md)|Verifica se il tipo è un puntatore.|  
|[is\_lvalue\_reference](../standard-library/is-lvalue-reference-class.md)|Verifica se il tipo è un riferimento lvalue.|  
|[is\_rvalue\_reference](../standard-library/is-rvalue-reference-class.md)|Verifica se il tipo è un riferimento rvalue.|  
|[is\_member\_object\_pointer](../standard-library/is-member-object-pointer-class.md)|Verifica se il tipo è un puntatore a un oggetto membro.|  
|[is\_member\_function\_pointer](../standard-library/is-member-function-pointer-class.md)|Verifica se il tipo è un puntatore a una funzione membro.|  
|[is\_enum](../standard-library/is-enum-class.md)|Verifica se il tipo è un'enumerazione.|  
|[is\_union](../standard-library/is-union-class.md)|Verifica se il tipo è un'unione.|  
|[is\_class](../standard-library/is-class-class.md)|Verifica se il tipo è una classe.|  
|[is\_function](../standard-library/is-function-class.md)|Verifica se il tipo è un tipo di funzione.|  
  
 Categorie di tipo composito  
  
|||  
|-|-|  
|[is\_reference](../standard-library/is-reference-class.md)|Verifica se il tipo è un riferimento.|  
|[is\_arithmetic](../standard-library/is-arithmetic-class.md)|Verifica se il tipo è aritmetico.|  
|[is\_fundamental](../standard-library/is-fundamental-class.md)|Verifica se il tipo è `void` o aritmetico.|  
|[is\_object](../standard-library/is-object-class.md)|Verifica se il tipo è un tipo di oggetto.|  
|[is\_scalar](../standard-library/is-scalar-class.md)|Verifica se il tipo è scalare.|  
|[is\_compound](../standard-library/is-compound-class.md)|Verifica se il tipo non è scalare.|  
|[is\_member\_pointer](../standard-library/is-member-pointer-class.md)|Verifica se il tipo è un puntatore a un membro.|  
  
 Proprietà del tipo  
  
|||  
|-|-|  
|[is\_const](../standard-library/is-const-class.md)|Verifica se il tipo è `const`.|  
|[is\_volatile](../standard-library/is-volatile-class.md)|Verifica se il tipo è `volatile`.|  
|[is\_trivial](../standard-library/is-trivial-class.md)|Verifica se il tipo è semplice.|  
|[is\_trivially\_copyable](../standard-library/is-trivially-copyable-class.md)|Verifica se il tipo è facilmente copiabile.|  
|[is\_standard\_layout](../standard-library/is-standard-layout-class.md)|Verifica se il tipo è un tipo di layout standard.|  
|[is\_pod](../standard-library/is-pod-class.md)|Verifica se il tipo è un POD.|  
|[is\_literal\_type](../standard-library/is-literal-type-class.md)|Verifica se il tipo può essere un `constexpr` variabile o utilizzati in un `constexpr` \(funzione\).|  
|[is\_empty](../standard-library/is-empty-class.md)|Verifica se il tipo è una classe vuota.|  
|[is\_polymorphic](../standard-library/is-polymorphic-class.md)|Verifica se il tipo è una classe polimorfica.|  
|[is\_abstract](../standard-library/is-abstract-class.md)|Verifica se il tipo è una classe astratta.|  
|[is\_final](../standard-library/is-final-class.md)|Verifica se il tipo è un tipo di classe contrassegnato `final`.|  
|[is\_signed](../standard-library/is-signed-class.md)|Verifica se il tipo è un Integer firmato.|  
|[is\_unsigned](../standard-library/is-unsigned-class.md)|Verifica se il tipo è Unsigned Integer.|  
|[is\_constructible](../standard-library/is-constructible-class.md)|Verifica se il tipo è possibile costruire utilizzando i tipi di argomenti specificati.|  
|[is\_default\_constructible](../standard-library/is-default-constructible-class.md)|Verifica se il tipo ha un costruttore predefinito.|  
|[is\_copy\_constructible](../standard-library/is-copy-constructible-class.md)|Verifica se il tipo ha un costruttore di copia.|  
|[is\_move\_constructible](../standard-library/is-move-constructible-class.md)|Verifica se il tipo ha un costruttore di spostamento.|  
|[is\_assignable](../standard-library/is-assignable-class.md)|Verifica se il primo tipo può essere assegnato un valore del secondo tipo.|  
|[is\_copy\_assignable](../standard-library/is-copy-assignable-class.md)|Verifica se un tipo può essere assegnato un valore di riferimento const del tipo.|  
|[is\_move\_assignable](../standard-library/is-move-assignable-class.md)|Verifica se un tipo può essere assegnato un riferimento rvalue del tipo.|  
|[is\_destructible](../standard-library/is-destructible-class.md)|Verifica se il tipo è destructible.|  
|[is\_trivially\_constructible](../standard-library/is-trivially-constructible-class.md)|Verifica se il tipo non utilizza alcuna operazione non è semplice quando creato utilizzando i tipi specificati.|  
|[is\_trivially\_default\_constructible](../standard-library/is-trivially-default-constructible-class.md)|Verifica se il tipo non utilizza alcuna operazione non è semplice quando predefinito costruito.|  
|[is\_trivially\_copy\_constructible](../standard-library/is-trivially-copy-constructible-class.md)|Verifica se il tipo non utilizza alcuna operazione non è semplice quando si copia costruito.|  
|[is\_trivially\_move\_constructible](../standard-library/is-trivially-move-constructible-class.md)|Verifica se il tipo non utilizza alcuna operazione non è semplice quando sposta costruito.|  
|[is\_trivially\_assignable](../standard-library/is-trivially-assignable-class.md)|Verifica se i tipi possano essere assegnati e l'assegnazione viene utilizzata alcuna operazione non è semplice.|  
|[is\_trivially\_copy\_assignable](../standard-library/is-trivially-copy-assignable-class.md)|Verifica se il tipo non è assegnabile copia e l'assegnazione viene utilizzata alcuna operazione non è semplice.|  
|[is\_trivially\_move\_assignable](../standard-library/is-trivially-move-assignable-class.md)|Verifica se il tipo non è assegnabile spostamento e l'assegnazione viene utilizzata alcuna operazione non è semplice.|  
|[is\_trivially\_destructible](../standard-library/is-trivially-destructible-class.md)|Verifica se il tipo è distruttibili e il distruttore viene utilizzata alcuna operazione non è semplice.|  
|[is\_nothrow\_constructible](../standard-library/is-nothrow-constructible-class.md)|Verifica se il tipo è possibile costruire e noto per non generare quando creato utilizzando i tipi specificati.|  
|[is\_nothrow\_default\_constructible](../standard-library/is-nothrow-default-constructible-class.md)|Test se il tipo è predefinito che può essere costruiti ed è nota per non generare quando costruita predefinita.|  
|[is\_nothrow\_copy\_constructible](../standard-library/is-nothrow-copy-constructible-class.md)|Verifica se il tipo è costruibile per copia e il costruttore di copia è nota per non generare.|  
|[is\_nothrow\_move\_constructible](../standard-library/is-nothrow-move-constructible-class.md)|Verifica se il tipo è possibile costruire spostamento e il costruttore di spostamento è noto per non generare.|  
|[is\_nothrow\_assignable](../standard-library/is-nothrow-assignable-class.md)|Verifica se il tipo è assegnabile utilizzando il tipo specificato e l'assegnazione è noto per non generare.|  
|[is\_nothrow\_copy\_assignable](../standard-library/is-nothrow-copy-assignable-class.md)|Verifica se il tipo è assegnabile copia e l'assegnazione è noto per non generare.|  
|[is\_nothrow\_move\_assignable](../standard-library/is-nothrow-move-assignable-class.md)|Verifica se il tipo è assegnabile spostamento e l'assegnazione è noto per non generare.|  
|[is\_nothrow\_destructible](../standard-library/is-nothrow-destructible-class.md)|Verifica se il tipo è distruttibili e il distruttore è noto per non generare.|  
|[has\_virtual\_destructor](http://msdn.microsoft.com/it-it/c0f85f0b-c63c-410d-a046-72eeaf44f7eb)|Verifica se il tipo ha un distruttore virtuale.|  
  
 Query del tipo di proprietà  
  
|||  
|-|-|  
|[alignment\_of](../standard-library/alignment-of-class.md)|Ottiene l'allineamento di un tipo.|  
|[rank](../standard-library/rank-class.md)|Ottiene il numero di dimensioni della matrice.|  
|[extent](../standard-library/extent-class.md)|Ottiene il numero di elementi nella dimensione di matrice specificato.|  
  
 Relazioni di tipo  
  
|||  
|-|-|  
|[is\_same](../standard-library/is-same-class.md)|Verifica se due tipi sono uguali.|  
|[is\_base\_of](../standard-library/is-base-of-class.md)|Verifica se il tipo è una base di un altro.|  
|[is\_convertible](../standard-library/is-convertible-class.md)|Verifica se il tipo è convertibile in un altro tipo.|  
  
 Modifiche const\-volatile  
  
|||  
|-|-|  
|[add\_const](../standard-library/add-const-class.md)|Produce un `const` tipo dal tipo.|  
|[add\_volatile](../standard-library/add-volatile-class.md)|Produce un `volatile` tipo dal tipo.|  
|[add\_cv](../standard-library/add-cv-class.md)|Produce un `const``volatile` tipo dal tipo.|  
|[remove\_const](../standard-library/remove-const-class.md)|Produce un tipo non const dal tipo.|  
|[remove\_volatile](../standard-library/remove-volatile-class.md)|Produce un tipo non volatile dal tipo.|  
|[remove\_cv](../standard-library/remove-cv-class.md)|Produce un tipo non volatile non const dal tipo.|  
  
 Modifiche di riferimento  
  
|||  
|-|-|  
|[add\_lvalue\_reference](../standard-library/add-lvalue-reference-class.md)|Produce un riferimento al tipo dal tipo.|  
|[add\_rvalue\_reference](../standard-library/add-rvalue-reference-class.md)|Produce un riferimento rvalue al tipo dal tipo|  
|[remove\_reference](../standard-library/remove-reference-class.md)|Genera un tipo di non riferimento dal tipo.|  
  
 Modifiche di accesso  
  
|||  
|-|-|  
|[make\_signed](../standard-library/make-signed-class.md)|Produce il tipo se firmato o il più piccolo tipo con segno maggiore di o uguale di dimensioni da digitare.|  
|[make\_unsigned](../standard-library/make-unsigned-class.md)|Produce il tipo se non firmato o il più piccolo tipo senza segno maggiore di o uguale di dimensioni da digitare.|  
  
 Modifiche di matrice  
  
|||  
|-|-|  
|[remove\_all\_extents](../standard-library/remove-all-extents-class.md)|Produce un tipo non matrice da un tipo di matrice.|  
|[remove\_extent](../standard-library/remove-extent-class.md)|Genera il tipo di elemento da un tipo di matrice.|  
  
 Modifiche di puntatore  
  
|||  
|-|-|  
|[add\_pointer](../standard-library/add-pointer-class.md)|Produce un puntatore al tipo dal tipo.|  
|[remove\_pointer](../standard-library/remove-pointer-class.md)|Produce un tipo da un puntatore al tipo.|  
  
 Altre trasformazioni  
  
|||  
|-|-|  
|[aligned\_storage](../standard-library/aligned-storage-class.md)|Alloca memoria non inizializzata per un tipo allineato.|  
|[aligned\_union](../standard-library/aligned-union-class.md)|Alloca memoria non inizializzata per un'unione allineata con un costruttore o un distruttore non semplice.|  
|[common\_type](../standard-library/common-type-class.md)|Genera il tipo comune di tutti i tipi di pacchetto di parametri.|  
|[conditional](../standard-library/conditional-class.md)|Se la condizione è true, produce il primo tipo specificato, di in caso contrario il secondo tipo specificato.|  
|[decay](../standard-library/decay-class.md)|Genera il tipo come passati per valore. Crea un tipo di non riferimento, non constante o non volatile oppure crea un puntatore al tipo.|  
|[enable\_if](../standard-library/enable-if-class.md)|Se la condizione è true, non produce il tipo specificato di in caso contrario alcun tipo.|  
|[result\_of](../standard-library/result-of-class1.md)|Determina il tipo restituito di tipo richiamabile che accetta i tipi di argomenti specificati.|  
|[underlying\_type](../standard-library/underlying-type-class.md)|Genera il tipo integrale sottostante per un tipo di enumerazione.|  
  
## Vedere anche  
 [\<functional\>](../standard-library/functional.md)