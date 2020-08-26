---
title: '&lt;type_traits&gt;'
ms.date: 02/21/2019
f1_keywords:
- <type_traits>
helpviewer_keywords:
- typetrait header
- type_traits
ms.assetid: 2260b51f-8160-4c66-a82f-00b534cb60d4
ms.openlocfilehash: 42c94daf331fd9a17e050067e4c4e495af180b0c
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88841701"
---
# <a name="lttype_traitsgt"></a>&lt;type_traits&gt;

Definisce i modelli per le costanti in fase di compilazione che forniscono informazioni sulle proprietà dei rispettivi argomenti di tipo o producono tipi trasformati.

## <a name="syntax"></a>Sintassi

```cpp
#include <type_traits>
```

## <a name="remarks"></a>Osservazioni

Le classi e i modelli in \<type_traits> vengono utilizzati per supportare l'inferenza del tipo, la classificazione e la trasformazione in fase di compilazione. Vengono inoltre usati per rilevare gli errori correlati ai tipi e per semplificare l'ottimizzazione del codice generico. I tratti di tipo unario descrivono una proprietà di un tipo, i tratti di tipo binario descrivono una relazione tra tipi e i tratti di trasformazione modificano una proprietà di un tipo.

La classe helper `integral_constant` e le specializzazioni del modello `true_type` e `false_type` formano le classi base per i predicati di tipo. Un *predicato di tipo* è un modello che accetta uno o più argomenti di tipo. Quando un predicato di tipo *include true*, è derivato pubblicamente, direttamente o indirettamente, da [true_type](../standard-library/type-traits-typedefs.md#true_type). Quando un predicato di tipo *include false*, è derivato pubblicamente, direttamente o indirettamente, da [false_type](../standard-library/type-traits-typedefs.md#false_type).

Un *modificatore di tipo* o *tratto di trasformazione* è un modello che accetta uno o più argomenti di modello e include un membro, `type`, che è sinonimo di tipo modificato.

### <a name="alias-templates"></a>Modelli di alias

Per semplificare le espressioni di tratti di tipo, vengono forniti i [modelli di alias](../cpp/aliases-and-typedefs-cpp.md) per `typename some_trait<T>::type` , dove *some_trait* è il nome del modello di classe. Ad esempio, [add_const](../standard-library/add-const-class.md) include il modello di alias per il rispettivo tipo `add_const_t`, definito come:

```cpp
template <class T>
using add_const_t = typename add_const<T>::type;
```

Questi sono gli alias forniti per i `type` membri:

:::row:::
   :::column:::
      `add_const_t`\
      `add_cv_t`\
      `add_lvalue_reference_t`\
      `add_pointer_t`\
      `add_rvalue_reference_t`\
      `add_volatile_t`\
      `aligned_storage_t`\
      `aligned_union_t`\
   :::column-end:::
   :::column:::
      `common_type_t`\
      `conditional_t`\
      `decay_t`\
      `enable_if_t`\
      `invoke_result_t`\
      `make_signed_t`\
      `make_unsigned_t`\
      `remove_all_extents_t`\
   :::column-end:::
   :::column:::
      `remove_const_t`\
      `remove_cv_t`\
      `remove_extent_t`\
      `remove_pointer_t`\
      `remove_reference_t`\
      `remove_volatile_t`\
      `result_of_t`\
      `underlying_type_t`\
   :::column-end:::
:::row-end:::

### <a name="classes"></a>Classi

Classi helper e typedef

|Nome|Descrizione|
|-|-|
|[integral_constant](../standard-library/integral-constant-class-bool-constant-class.md)|Crea una costante integrale da un tipo e da un valore.|
|[true_type](../standard-library/type-traits-typedefs.md#true_type)|Include la costante integrale con valore true.|
|[false_type](../standard-library/type-traits-typedefs.md#false_type)|Include la costante integrale con valore false.|

Categorie di tipi primari

|Nome|Descrizione|
|-|-|
|[is_void](../standard-library/is-void-class.md)|Verifica se il tipo è **`void`** .|
|[is_null_pointer](../standard-library/is-null-pointer-class.md)|Verifica se il tipo è `std::nullptr_t`.|
|[is_integral](../standard-library/is-integral-class.md)|Verifica se il tipo è integrale.|
|[is_floating_point](../standard-library/is-floating-point-class.md)|Verifica se il tipo è a virgola mobile.|
|[is_array](../standard-library/is-array-class.md)|Verifica se il tipo è una matrice.|
|[is_pointer](../standard-library/is-pointer-class.md)|Verifica se il tipo è un puntatore.|
|[is_lvalue_reference](../standard-library/is-lvalue-reference-class.md)|Verifica se il tipo è un riferimento lvalue.|
|[is_rvalue_reference](../standard-library/is-rvalue-reference-class.md)|Verifica se il tipo è un riferimento rvalue.|
|[is_member_object_pointer](../standard-library/is-member-object-pointer-class.md)|Verifica se il tipo è un puntatore a un oggetto membro.|
|[is_member_function_pointer](../standard-library/is-member-function-pointer-class.md)|Verifica se il tipo è un puntatore a una funzione membro.|
|[is_enum](../standard-library/is-enum-class.md)|Verifica se il tipo è un'enumerazione.|
|[is_union](../standard-library/is-union-class.md)|Verifica se il tipo è un'unione.|
|[is_class](../standard-library/is-class-class.md)|Verifica se il tipo è una classe.|
|[is_function](../standard-library/is-function-class.md)|Verifica se il tipo è un tipo di funzione.|

Categorie di tipi compositi

|Nome|Descrizione|
|-|-|
|[is_reference](../standard-library/is-reference-class.md)|Verifica se il tipo è un riferimento.|
|[is_arithmetic](../standard-library/is-arithmetic-class.md)|Verifica se il tipo è aritmetico.|
|[is_fundamental](../standard-library/is-fundamental-class.md)|Verifica se il tipo è **`void`** o aritmetico.|
|[is_object](../standard-library/is-object-class.md)|Verifica se il tipo è un tipo di oggetto.|
|[is_scalar](../standard-library/is-scalar-class.md)|Verifica se il tipo è scalare.|
|[is_compound](../standard-library/is-compound-class.md)|Verifica se il tipo non è scalare.|
|[is_member_pointer](../standard-library/is-member-pointer-class.md)|Verifica se il tipo è un puntatore a un membro.|

Proprietà del tipo

|Nome|Descrizione|
|-|-|
|[is_const](../standard-library/is-const-class.md)|Verifica se il tipo è **`const`** .|
|[is_volatile](../standard-library/is-volatile-class.md)|Verifica se il tipo è **`volatile`** .|
|[is_trivial](../standard-library/is-trivial-class.md)|Verifica se il tipo è semplice.|
|[is_trivially_copyable](../standard-library/is-trivially-copyable-class.md)|Verifica se il tipo è facilmente copiabile.|
|[is_standard_layout](../standard-library/is-standard-layout-class.md)|Verifica se il tipo è un tipo di layout standard.|
|[is_pod](../standard-library/is-pod-class.md)|Verifica se il tipo è un POD.|
|[is_literal_type](../standard-library/is-literal-type-class.md)|Verifica se il tipo può essere una **`constexpr`** variabile o utilizzato in una **`constexpr`** funzione.|
|[is_empty](../standard-library/is-empty-class.md)|Verifica se il tipo è una classe vuota.|
|[is_polymorphic](../standard-library/is-polymorphic-class.md)|Verifica se il tipo è una classe polimorfica.|
|[is_abstract](../standard-library/is-abstract-class.md)|Verifica se il tipo è una classe astratta.|
|[is_final](../standard-library/is-final-class.md)|Verifica se il tipo è un tipo di classe contrassegnato come `final`.|
|[is_aggregate](../standard-library/is-aggregate-class.md)||
|[is_signed](../standard-library/is-signed-class.md)|Verifica se il tipo è un intero con segno.|
|[is_unsigned](../standard-library/is-unsigned-class.md)|Verifica se il tipo è un intero senza segno.|
|[is_constructible](../standard-library/is-constructible-class.md)|Verifica se il tipo è costruibile mediante i tipi di argomento specificati.|
|[is_default_constructible](../standard-library/type-traits-functions.md#is_default_constructible)|Verifica se il tipo ha un costruttore predefinito.|
|[is_copy_constructible](../standard-library/type-traits-functions.md#is_copy_constructible)|Verifica se il tipo ha un costruttore di copia.|
|[is_move_constructible](../standard-library/type-traits-functions.md#is_move_constructible)|Verifica se il tipo ha un costruttore di spostamento.|
|[is_assignable](../standard-library/type-traits-functions.md#is_assignable)|Verifica se al primo tipo può essere assegnato un valore del secondo tipo.|
|[is_copy_assignable](../standard-library/type-traits-functions.md#is_copy_assignable)|Verifica se al primo tipo può essere assegnato un valore del secondo tipo.|
|[is_move_assignable](../standard-library/type-traits-functions.md#is_move_assignable)|Verifica se al primo tipo può essere assegnato un riferimento rvalue del tipo.|
|[is_swappable](../standard-library/type-traits-functions.md#is_swappable)||
|[is_swappable_with](../standard-library/type-traits-functions.md#is_swappable_with)||
|[is_destructible](../standard-library/is-destructible-class.md)|Verifica se il tipo è destructible.|
|[is_trivially_constructible](../standard-library/is-trivially-constructible-class.md)|Verifica se il tipo non usa alcuna operazione non semplice quando viene costruito mediante i tipi specificati.|
|[is_trivially_default_constructible](../standard-library/is-trivially-default-constructible-class.md)|Verifica se il tipo non usa alcuna operazione non semplice quando viene costruito per impostazione predefinita.|
|[is_trivially_copy_constructible](../standard-library/is-trivially-copy-constructible-class.md)|Verifica se il tipo non usa alcuna operazione non semplice quando viene costruito mediante copia.|
|[is_trivially_move_constructible](../standard-library/type-traits-functions.md#is_trivially_move_constructible)|Verifica se il tipo non usa alcuna operazione non semplice quando viene costruito mediante spostamento.|
|[is_trivially_assignable](../standard-library/is-trivially-assignable-class.md)|Verifica se i tipi sono assegnabili e se l'assegnazione non usa alcuna operazione non semplice.|
|[is_trivially_copy_assignable](../standard-library/type-traits-functions.md#is_trivially_copy_assignable)|Verifica se il tipo è assegnabile mediante copia e se l'assegnazione non usa alcuna operazione non semplice.|
|[is_trivially_move_assignable](../standard-library/type-traits-functions.md#is_trivially_move_assignable)|Verifica se il tipo è assegnabile mediante spostamento e se l'assegnazione non usa alcuna operazione non semplice.|
|[is_trivially_destructible](../standard-library/is-trivially-destructible-class.md)|Verifica se il tipo è distruttibile e se il distruttore non usa alcuna operazione non semplice.|
|[is_nothrow_constructible](../standard-library/is-nothrow-constructible-class.md)|Verifica se il tipo è costruibile ed è noto come tipo che non genera eccezioni quando viene costruito mediante i tipi specificati.|
|[is_nothrow_default_constructible](../standard-library/is-nothrow-default-constructible-class.md)|Verifica se il tipo è costruibile per impostazione predefinita ed è noto come tipo che non genera eccezioni quando viene costruito per impostazione predefinita.|
|[is_nothrow_copy_constructible](../standard-library/is-nothrow-copy-constructible-class.md)|Verifica se il tipo è costruibile mediante copia e se il costruttore di copia è noto come elemento che non genera eccezioni.|
|[is_nothrow_move_constructible](../standard-library/is-nothrow-move-constructible-class.md)|Verifica se il tipo è costruibile mediante spostamento e se il costruttore di spostamento è noto come elemento che non genera eccezioni.|
|[is_nothrow_assignable](../standard-library/is-nothrow-assignable-class.md)|Verifica se il tipo è assegnabile mediante il tipo specificato e se l'assegnazione è nota come operazione che non genera eccezioni.|
|[is_nothrow_copy_assignable](../standard-library/is-nothrow-copy-assignable-class.md)|Verifica se il tipo è assegnabile mediante copia e se l'assegnazione è nota come operazione che non genera eccezioni.|
|[is_nothrow_move_assignable](../standard-library/type-traits-functions.md#is_nothrow_move_assignable)|Verifica se il tipo è assegnabile mediante spostamento e se l'assegnazione è nota come operazione che non genera eccezioni.|
|[is_nothrow_swappable](../standard-library/type-traits-functions.md#is_nothrow_swappable)||
|[is_nothrow_swappable_with](../standard-library/type-traits-functions.md#is_nothrow_swappable_with)||
|[is_nothrow_destructible](../standard-library/is-nothrow-destructible-class.md)|Verifica se il tipo è distruttibile e se il distruttore è noto come elemento che non genera eccezioni.|
|`has_virtual_destructor`|Verifica se il tipo ha un distruttore virtuale.|
|`has_unique_object_representations`||
| [is_invocable](is-invocable-classes.md) | Verifica se un tipo chiamabile può essere richiamato utilizzando i tipi di argomento specificati.<br/> Aggiunto in C++ 17. |
| [is_invocable_r](is-invocable-classes.md) | Verifica se un tipo chiamabile può essere richiamato usando i tipi di argomento specificati e il risultato è convertibile nel tipo specificato.<br/> Aggiunto in C++ 17. |
| [is_nothrow_invocable](is-invocable-classes.md) | Verifica se un tipo richiamabile può essere richiamato utilizzando i tipi di argomento specificati ed è noto come non generare eccezioni.<br/> Aggiunto in C++ 17. |
| [is_nothrow_invocable_r](is-invocable-classes.md) | Verifica se un tipo chiamabile può essere richiamato usando i tipi di argomento specificati e se è noto che non genera eccezioni e il risultato è convertibile nel tipo specificato.<br/> Aggiunto in C++ 17. |

Query sulle proprietà del tipo

|Nome|Descrizione|
|-|-|
|[alignment_of](../standard-library/alignment-of-class.md)|Ottiene l'allineamento di un tipo.|
|[Rank](../standard-library/rank-class.md)|Ottiene il numero di dimensioni della matrice.|
|[extent](../standard-library/extent-class.md)|Ottiene il numero di elementi nella dimensione di matrice specificata.|

Relazioni tra i tipi

|Nome|Descrizione|
|-|-|
|[is_same](../standard-library/is-same-class.md)|Verifica se due tipi sono uguali.|
|[is_base_of](../standard-library/is-base-of-class.md)|Verifica se un tipo è una base di un altro tipo.|
|[is_convertible](../standard-library/is-convertible-class.md)|Verifica se il tipo è convertibile in un altro tipo.|

Modifiche costante-volatile

|Nome|Descrizione|
|-|-|
|[add_const](../standard-library/add-const-class.md)|Produce un **`const`** tipo dal tipo.|
|[add_volatile](../standard-library/add-volatile-class.md)|Produce un **`volatile`** tipo dal tipo.|
|[add_cv](../standard-library/add-cv-class.md)|Produce un **`const volatile`** tipo dal tipo.|
|[remove_const](../standard-library/remove-const-class.md)|Genera un tipo non costante dal tipo.|
|[remove_volatile](../standard-library/remove-volatile-class.md)|Genera un tipo non volatile dal tipo.|
|[remove_cv](../standard-library/remove-cv-class.md)|Genera un tipo non costante non volatile dal tipo.|

Modifiche dei riferimenti

|Nome|Descrizione|
|-|-|
|[add_lvalue_reference](../standard-library/add-lvalue-reference-class.md)|Genera un riferimento al tipo dal tipo.|
|[add_rvalue_reference](../standard-library/add-rvalue-reference-class.md)|Genera un riferimento rvalue al tipo dal tipo.|
|[remove_reference](../standard-library/remove-reference-class.md)|Genera un tipo di non riferimento dal tipo.|

Modifiche della firma

|Nome|Descrizione|
|-|-|
|[make_signed](../standard-library/make-signed-class.md)|Genera il tipo se con segno, ovvero il più piccolo tipo con segno di dimensioni maggiori o uguali al tipo.|
|[make_unsigned](../standard-library/make-unsigned-class.md)|Genera il tipo se senza segno, ovvero il più piccolo tipo senza segno di dimensioni maggiori o uguali al tipo.|

Modifiche delle matrici

|Nome|Descrizione|
|-|-|
|[remove_all_extents](../standard-library/remove-all-extents-class.md)|Genera un tipo non matrice da un tipo matrice.|
|[remove_extent](../standard-library/remove-extent-class.md)|Genera il tipo di elemento da un tipo matrice.|

Modifiche dei puntatori

|Nome|Descrizione|
|-|-|
|[add_pointer](../standard-library/add-pointer-class.md)|Genera un puntatore al tipo dal tipo.|
|[remove_pointer](../standard-library/remove-pointer-class.md)|Genera un tipo da un puntatore al tipo.|

Altre trasformazioni

|Nome|Descrizione|
|-|-|
|[aligned_storage](../standard-library/aligned-storage-class.md)|Alloca memoria non inizializzata per un tipo allineato.|
|[aligned_union](../standard-library/aligned-union-class.md)|Alloca memoria non inizializzata per un'unione allineata con un costruttore o un distruttore non semplice.|
|[common_type](../standard-library/common-type-class.md)|Genera il tipo comune di tutti i tipi di pacchetto di parametri.|
|[condizionale](../standard-library/conditional-class.md)|Se la condizione è true, genera il primo tipo specificato, altrimenti genera il secondo.|
|[decay](../standard-library/decay-class.md)|Genera il tipo come passato da valore. Crea un tipo di non riferimento, non constante o non volatile oppure crea un puntatore al tipo.|
|[enable_if](../standard-library/enable-if-class.md)|Se la condizione è true, genera il primo tipo specificato, altrimenti non genera alcun tipo.|
|[invoke_result](invoke-result-class.md)|Determina il tipo restituito del tipo chiamabile che accetta i tipi di argomento specificati. <br/>Aggiunto in C++ 17. |
|[result_of](../standard-library/result-of-class.md)|Determina il tipo restituito del tipo chiamabile che accetta i tipi di argomento specificati. <br/>Aggiunto in C++ 14, deprecato in C++ 17. |
|[underlying_type](../standard-library/underlying-type-class.md)|Genera il tipo integrale sottostante per un tipo di enumerazione.|

Tratti dell'operatore logico

|Nome|Descrizione|
|-|-|
|[unione](../standard-library/conjunction-class.md)||
|[disgiunzione](../standard-library/disjunction-class.md)||
|[negazione](../standard-library/negation-class.md)||

## <a name="see-also"></a>Vedere anche

[\<functional>](../standard-library/functional.md)
