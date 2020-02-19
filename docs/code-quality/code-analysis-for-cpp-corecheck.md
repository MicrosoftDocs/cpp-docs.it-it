---
title: C++Riferimento di controllo delle linee guida di base
ms.date: 03/22/2018
ms.topic: reference
helpviewer_keywords:
- code analysis, C++ core check
ms.assetid: f1429463-136e-41ed-8a75-a8dbf0b4fd89
ms.openlocfilehash: 3fe8f1795416bd05ce2c8cc622664a3ff1d6c749
ms.sourcegitcommit: 7bea0420d0e476287641edeb33a9d5689a98cb98
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/17/2020
ms.locfileid: "77418837"
---
# <a name="c-core-guidelines-checker-reference"></a>C++Riferimento di controllo delle linee guida di base

In questa sezione elenca gli avvisi di controllo di linee guida di base di C++. Per informazioni sull'analisi del codice, vedere [/Analyze (analisi del codice)](/cpp/build/reference/analyze-code-analysis) e [avvio rapido: analisi del codiceC++per C/](../code-quality/quick-start-code-analysis-for-c-cpp.md).

> [!NOTE]
> Alcuni avvisi appartengono a più di un gruppo e non tutti gli avvisi sono un argomento di riferimento completa.

## <a name="owner_pointer-group"></a>Gruppo OWNER_POINTER

[C26402 DONT_HEAP_ALLOCATE_MOVABLE_RESULT](C26402.md)\
Restituisce un oggetto con ambito anziché un heap allocato se dispone di un costruttore di spostamento. Vedere [ C++ linee guida di base R. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[C26403 RESET_OR_DELETE_OWNER](C26403.md)\
Reimposta o Elimina in modo esplicito un proprietario\<T > puntatore "*variabile*". Vedere [ C++ linee guida di base R. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[C26404 DONT_DELETE_INVALID](C26404.md)\
Non eliminare un proprietario\<T > che potrebbe trovarsi in uno stato non valido. Vedere [ C++ linee guida di base R. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[C26405 DONT_ASSIGN_TO_VALID](C26405.md)\
Non assegnare a un proprietario\<T > che potrebbe trovarsi in uno stato valido. Vedere [ C++ linee guida di base R. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[C26406 DONT_ASSIGN_RAW_TO_OWNER](C26406.md)\
Non assegnare un puntatore non elaborato a un proprietario\<T >. Vedere [ C++ linee guida di base R. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[C26407 DONT_HEAP_ALLOCATE_UNNECESSARILY](C26407.md)\
Preferisci oggetti con ambito, non allocare inutilmente gli heap. Vedere [ C++ linee guida principali R. 5](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-scoped).

[C26429 USE_NOTNULL](C26429.md)\
Il simbolo '*Symbol*' non viene mai testato per il supporto di valori null, ma può essere contrassegnato come NOT_NULL. Vedere [ C++ linee guida di base F. 23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

[C26430 TEST_ON_ALL_PATHS](C26430.md)\
Il simbolo '*Symbol*' non è stato testato per il supporto di valori null in tutti i percorsi. Vedere [ C++ linee guida di base F. 23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

[C26431 DONT_TEST_NOTNULL](C26431.md)\
Il tipo di espressione '*expr*' è già GSL:: NOT_NULL. Non testare la presenza di null. Vedere [ C++ linee guida di base F. 23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

## <a name="raw_pointer-group"></a>Gruppo RAW_POINTER

[C26400 NO_RAW_POINTER_ASSIGNMENT](c26400.md)\
Non assegnare il risultato di un'allocazione o una chiamata di funzione con un proprietario\<T > valore restituito a un puntatore non elaborato; usare invece > Owner\<T. Vedere [ C++ linee guida di base I. 11](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Ri-raw).

[C26401 DONT_DELETE_NON_OWNER](c26401.md)\
Non eliminare un puntatore non elaborato che non è un proprietario\<T >. Vedere [ C++ linee guida di base I. 11](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Ri-raw).

[C26402 DONT_HEAP_ALLOCATE_MOVABLE_RESULT](C26402.md)\
Restituisce un oggetto con ambito anziché un heap allocato se dispone di un costruttore di spostamento. Vedere [ C++ linee guida di base R. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[C26408 NO_MALLOC_FREE](C26408.md)\
Evitare malloc () e Free () preferendo la versione nothrow di New con Delete. Vedere [ C++ linee guida di base R. 10](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-mallocfree).

[C26409 NO_NEW_DELETE](C26409.md)\
Evitare di chiamare il nuovo ed eliminare in modo esplicito, usare invece std:: make_unique\<T >. Vedere [ C++ linee guida principali R. 11](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-newdelete).

[C26429 USE_NOTNULL](C26429.md)\
Il simbolo '*Symbol*' non viene mai testato per il supporto di valori null, ma può essere contrassegnato come NOT_NULL. Vedere [ C++ linee guida di base F. 23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

[C26430 TEST_ON_ALL_PATHS](C26430.md)\
Il simbolo '*Symbol*' non è stato testato per il supporto di valori null in tutti i percorsi. Vedere [ C++ linee guida di base F. 23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

[C26431 DONT_TEST_NOTNULL](C26431.md)\
Il tipo di espressione '*expr*' è già GSL:: NOT_NULL. Non testare la presenza di null. Vedere [ C++ linee guida di base F. 23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

[C26481 NO_POINTER_ARITHMETIC](C26481.md)\
Non usare l'aritmetica dei puntatori. In alternativa, usare span. Vedere [ C++ linee guida di base. 1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds).

[C26485 NO_ARRAY_TO_POINTER_DECAY](C26485.md)\
Espressione '*expr*': nessuna matrice per il decadimento del puntatore. Vedere [ C++ linee guida di base per i limiti. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds).

## <a name="unique_pointer-group"></a>Gruppo UNIQUE_POINTER

[C26410 NO_REF_TO_CONST_UNIQUE_PTR](C26410.md)\
Il parametro '*Parameter*' è un riferimento a `const` puntatore univoco. usare invece const t * o const t &. Vedere [ C++ linee guida di base R. 32](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-uniqueptrparam).

[C26411 NO_REF_TO_UNIQUE_PTR](C26411.md)\
Il parametro '*Parameter*' è un riferimento a un puntatore univoco e non viene mai riassegnato o reimpostato. usare invece t * o t &. Vedere [ C++ linee guida principali R. 33](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-reseat).

[C26414 RESET_LOCAL_SMART_PTR](C26414.md)\
Spostare, copiare, riassegnare o reimpostare un puntatore intelligente locale '*Symbol*'. Vedere [ C++ linee guida principali R. 5](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-scoped).

[C26415 SMART_PTR_NOT_NEEDED](C26415.md)\
Il parametro '*Symbol*' del puntatore intelligente viene usato solo per accedere al puntatore contenuto. Usare T * o T &. Vedere [ C++ linee guida principali R. 30](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-smartptrparam).

## <a name="shared_pointer-group"></a>Gruppo SHARED_POINTER

[C26414 RESET_LOCAL_SMART_PTR](C26414.md)\
Spostare, copiare, riassegnare o reimpostare un puntatore intelligente locale '*Symbol*'. Vedere [ C++ linee guida principali R. 5](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-scoped).

[C26415 SMART_PTR_NOT_NEEDED](C26415.md)\
Il parametro '*Symbol*' del puntatore intelligente viene usato solo per accedere al puntatore contenuto. Usare T * o T &. Vedere [ C++ linee guida principali R. 30](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-smartptrparam).

[C26416 NO_RVALUE_REF_SHARED_PTR](C26416.md)\
Il parametro '*Symbol*' del puntatore condiviso viene passato per riferimento rvalue. Passare invece per valore. Vedere [ C++ linee guida principali R. 34](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-sharedptrparam-owner).

[C26417 NO_LVALUE_REF_SHARED_PTR](C26417.md)\
Il parametro '*Symbol*' del puntatore condiviso viene passato per riferimento e non viene reimpostato o riassegnato. Usare T * o T &. Vedere [ C++ linee guida di base R. 35](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-sharedptrparam).

[C26418 NO_VALUE_OR_CONST_REF_SHARED_PTR](C26418.md)\
Il parametro '*Symbol*' del puntatore condiviso non viene copiato o spostato. Usare T * o T &. Vedere [ C++ linee guida principali R. 36](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-sharedptrparam-const).

## <a name="declaration-group"></a>Gruppo di dichiarazione

[C26426 NO_GLOBAL_INIT_CALLS](C26426.md)\
L'inizializzatore globale chiama una funzione non constExpr '*Symbol*'. Vedere [ C++ linee guida di base I. 22](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#i22-avoid-complex-initialization-of-global-objects).

[C26427 NO_GLOBAL_INIT_EXTERNS](C26427.md)\
L'inizializzatore globale accede all'oggetto extern '*Symbol*'. Vedere [ C++ linee guida di base I. 22](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#i22-avoid-complex-initialization-of-global-objects).

[C26444 NO_UNNAMED_RAII_OBJECTS](c26444.md)\
Evitare oggetti senza nome con costruzione e distruzione personalizzate. Vedere [es. 84: non (provare a) dichiarare una variabile locale senza nome](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md).

## <a name="class-group"></a>Gruppo di classi

[C26432 DEFINE_OR_DELETE_SPECIAL_OPS](C26432.md)\
Se si definisce o si elimina una qualsiasi operazione predefinita nel tipo '*Symbol*', è necessario definirle o eliminarle tutte. Vedere [ C++ linee guida di base C. 21](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c21-if-you-define-or-delete-any-default-operation-define-or-delete-them-all).

[C26433 OVERRIDE_EXPLICITLY](c26433.md)\
La funzione '*Symbol*' deve essere contrassegnata con ' override '. Vedere [C. 128: le funzioni virtuali devono specificare esattamente uno dei caratteri Virtual, override o Final](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c128-virtual-functions-should-specify-exactly-one-of-virtual-override-or-final).

[C26434 DONT_HIDE_METHODS](C26434.md)\
La funzione '*Symbol_1*' nasconde una funzione non virtuale '*symbol_2*'. Vedere [ C++ linee guida di base C. 128](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c128-virtual-functions-should-specify-exactly-one-of-virtual-override-or-final).

[C26435 SINGLE_VIRTUAL_SPECIFICATION](c26435.md)\
La funzione ' symbol ' deve specificare esattamente uno dei*simboli*' Virtual ',' override ' o ' final '. Vedere [C. 128: le funzioni virtuali devono specificare esattamente uno dei caratteri Virtual, override o Final](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md).

[C26436 NEED_VIRTUAL_DTOR](C26436.md)\
Il tipo '*Symbol*' con una funzione virtuale richiede un distruttore virtuale pubblico o non virtuale protetto. Vedere [ C++ linee guida di base C. 35](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c35-a-base-class-destructor-should-be-either-public-and-virtual-or-protected-and-nonvirtual).

[C26443 NO_EXPLICIT_DTOR_OVERRIDE](c26443.md)\
Il distruttore di override non deve usare identificatori ' override ' o ' Virtual ' espliciti. Vedere [C. 128: le funzioni virtuali devono specificare esattamente uno dei caratteri Virtual, override o Final](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md).

## <a name="style-group"></a>Gruppo di stili

[C26438 NO_GOTO](C26438.md)\
Evitare i `goto`. Vedere [ C++ linee guida di base es. 76](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#es76-avoid-goto).

## <a name="function-group"></a>Gruppo di funzioni

[C26439 SPECIAL_NOEXCEPT](C26439.md)\
Questo tipo di funzione non può generare. Dichiararlo `noexcept`. Vedere [ C++ linee guida di base F. 6](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f6-if-your-function-may-not-throw-declare-it-noexcept).

[C26440 DECLARE_NOEXCEPT](C26440.md)\
La funzione '*Symbol*' può essere dichiarata `noexcept`. Vedere [ C++ linee guida di base F. 6](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f6-if-your-function-may-not-throw-declare-it-noexcept).

[C26447 DONT_THROW_IN_NOEXCEPT](c26447.md)\
La funzione viene dichiarata **noexcept** ma chiama una funzione che può generare eccezioni.
Vedere [ C++ linee guida di base: F. 6: se la funzione non può generare, dichiararla noexcept](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f6-if-your-function-may-not-throw-declare-it-noexcept).

## <a name="concurrency-group"></a>Gruppo di concorrenza

[C26441 NO_UNNAMED_GUARDS](C26441.md)\
Gli oggetti Guard devono essere denominati. Vedere [ C++ linee guida di base CP. 44](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#cp44-remember-to-name-your-lock_guards-and-unique_locks).

## <a name="const-group"></a>Gruppo CONST

[C26460 USE_CONST_REFERENCE_ARGUMENTS](c26460.md)\
L'argomento di riferimento '*argument*' per la funzione '*Function*' può essere contrassegnato come `const`. Vedere [ C++ linee guida di base con. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rconst-ref).

[USE_CONST_POINTER_ARGUMENTS C26461](c26461.md): \
L'argomento puntatore '*argument*' per la funzione '*Function*' può essere contrassegnato come puntatore a `const`. Vedere [ C++ linee guida di base con. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rconst-ref).

[C26462 USE_CONST_POINTER_FOR_VARIABLE](c26462.md)\
Il valore a cui punta '*Variable*' viene assegnato una sola volta, contrassegnarlo come puntatore a `const`. Vedere [ C++ linee guida di base con. 4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#con4-use-const-to-define-objects-with-values-that-do-not-change-after-construction).

[C26463 USE_CONST_FOR_ELEMENTS](c26463.md)\
Gli elementi della matrice '*Array*' sono assegnati una sola volta, contrassegnare gli elementi `const`. Vedere [ C++ linee guida di base con. 4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#con4-use-const-to-define-objects-with-values-that-do-not-change-after-construction).

[C26464 USE_CONST_POINTER_FOR_ELEMENTS](c26464.md)\
I valori a cui puntano gli elementi della matrice '*Array*' sono assegnati una sola volta, contrassegnare gli elementi come puntatore a `const`. Vedere [ C++ linee guida di base con. 4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#con4-use-const-to-define-objects-with-values-that-do-not-change-after-construction).

[C26496 USE_CONST_FOR_VARIABLE](c26496.md)\
La variabile '*Variable*' è assegnata una sola volta, contrassegnarla come `const`. Vedere [ C++ linee guida di base con. 4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#con4-use-const-to-define-objects-with-values-that-do-not-change-after-construction).

[C26497 USE_CONSTEXPR_FOR_FUNCTION](c26497.md)\
Questa *funzione* di funzione può essere contrassegnata `constexpr` se si desidera la valutazione in fase di compilazione. Vedere [ C++ linee guida di base F. 4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rf-constexpr).

[C26498 USE_CONSTEXPR_FOR_FUNCTIONCALL](c26498.md)\
Questa *funzione* di chiamata di funzione può utilizzare `constexpr` se si desidera la valutazione in fase di compilazione. Vedere [ C++ linee guida di base con. 5](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rconst-constexpr).

## <a name="type-group"></a>TIPO di gruppo

[C26437 DONT_SLICE](C26437.md)\
Non sezionare. Vedere [ C++ linee guida di base es. 63](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#es63-dont-slice).

[C26465 NO_CONST_CAST_UNNECESSARY](c26465.md)\
Non usare `const_cast` per eseguire il cast `const`. `const_cast` non è obbligatorio. la conversione non è stata rimossa da const o dalla volatilità. Vedere [ C++ le linee guida di base Type. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-constcast).

[C26466 NO_STATIC_DOWNCAST_POLYMORPHIC](c26466.md)\
Non usare `static_cast` downcast. Un cast da un tipo polimorfico deve usare dynamic_cast. Vedere [ C++ linee guida di base tipo. 2](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-downcast).

[C26471 NO_REINTERPRET_CAST_FROM_VOID_PTR](c26471.md)\
Non usare `reinterpret_cast`. Un cast da void * può usare `static_cast`. Vedere [ C++ linee guida di base digitare. 1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-reinterpretcast).

[C26472 NO_CASTS_FOR_ARITHMETIC_CONVERSION](C26472.md)\
Non usare un `static_cast` per le conversioni aritmetiche. USA inizializzazione parentesi graffa, GSL:: narrow_cast o GSL:: narrow. Vedere [ C++ linee guida di base digitare. 1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-reinterpretcast).

[C26473 NO_IDENTITY_CAST](C26473.md)\
Non eseguire il cast tra tipi di puntatore in cui il tipo di origine e il tipo di destinazione sono uguali. Vedere [ C++ linee guida di base digitare. 1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-reinterpretcast).

[C26474 NO_IMPLICIT_CAST](C26474.md)\
Non eseguire il cast tra tipi di puntatore quando la conversione potrebbe essere implicita. Vedere [ C++ linee guida di base digitare. 1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-reinterpretcast).

[C26475 NO_FUNCTION_STYLE_CASTS](C26475.md)\
Non usare i cast C di tipo funzione. Vedere [ C++ linee guida di base es. 49](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#es49-if-you-must-use-a-cast-use-a-named-cast).

[C26490 NO_REINTERPRET_CAST](c26490.md)\
Non usare `reinterpret_cast`. Vedere [ C++ linee guida di base digitare. 1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

[C26491 NO_STATIC_DOWNCAST](c26490.md)\
Non usare `static_cast` downcast. Vedere [ C++ linee guida di base tipo. 2](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

[C26492 NO_CONST_CAST](c26492.md)\
Non usare `const_cast` per eseguire il cast `const`. Vedere [ C++ le linee guida di base Type. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

[C26493 NO_CSTYLE_CAST](c26493.md)\
Non usare cast di tipo C. Vedere [ C++ linee guida di base tipo. 4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

[C26494 VAR_USE_BEFORE_INIT](c26494.md)\
La variabile '*Variable*' non è inizializzata. Inizializzare sempre un oggetto. Vedere [ C++ linee guida di base tipo. 5](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

[C26495 MEMBER_UNINIT](c26495.md)\
La variabile '*Variable*' non è inizializzata. Inizializzare sempre una variabile membro. Vedere [ C++ linee guida di base digitare. 6](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

## <a name="bounds-group"></a>Gruppo di limiti

[C26446 USE_GSL_AT](c26446.md)\
Preferisce utilizzare `gsl::at()` anziché l'operatore di indice non verificato. Vedere [ C++ linee guida di base: limiti. 4: non usare funzioni di libreria standard e tipi non associati](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#probounds-bounds-safety-profile).

[C26481 NO_POINTER_ARITHMETIC](C26481.md)\
Non usare l'aritmetica dei puntatori. In alternativa, usare span. Vedere [ C++ limiti delle linee guida di base. 1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds)

[C26482 NO_DYNAMIC_ARRAY_INDEXING](c26482.md)\
Indicizzare solo le matrici usando espressioni costanti. Vedere [ C++ limiti delle linee guida di base. 2](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds)

[C26483 STATIC_INDEX_OUT_OF_RANGE](c26483.md)\
Il *valore* del valore non è compreso nei limiti (0, *associato*) della variabile '*Variable*'. Indicizzare solo in matrici usando espressioni costanti comprese nei limiti della matrice. Vedere [ C++ limiti delle linee guida di base. 2](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds)

[C26485 NO_ARRAY_TO_POINTER_DECAY](C26485.md)\
Espressione '*expr*': nessuna matrice per il decadimento del puntatore. Vedere [ C++ limiti delle linee guida di base. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds)

## <a name="gsl-group"></a>Gruppo GSL

[C26445 NO_SPAN_REF](c26445.md)\
Un riferimento a `gsl::span` o `std::string_view` può indicare un problema di durata.
Vedere [ C++ linee guida di base GSL. View: viste](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#gslview-views)

[C26446 USE_GSL_AT](c26446.md)\
Preferisce utilizzare `gsl::at()` anziché l'operatore di indice non verificato. Vedere [ C++ linee guida di base: limiti. 4: non usare funzioni di libreria standard e tipi non associati](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#probounds-bounds-safety-profile).

[C26448 USE_GSL_FINALLY](c26448.md)\
Prendere in considerazione l'uso di `gsl::finally` se l'azione finale è intenzionale. Vedere [ C++ linee guida di base: GSL. util: Utilities](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-utilities).

[C26449 NO_SPAN_FROM_TEMPORARY](c26449.md)\
`gsl::span` o `std::string_view` creati da un oggetto temporaneo non saranno validi se la temporanea viene invalidata. Vedere [ C++ linee guida di base: GSL. View: views](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#gslview-views).

## <a name="deprecated-warnings"></a>Avvisi deprecati

I seguenti avvisi sono presenti in un set di regole sperimentale anticipata del correttore linee guida per core, ma ora sono deprecati e possono essere tranquillamente ignorati. Gli avvisi sono sostituiti da avvisi dall'elenco precedente.

- 26412 DEREF_INVALID_POINTER
- 26413 DEREF_NULLPTR
- 26420 ASSIGN_NONOWNER_TO_EXPLICIT_OWNER
- 26421 ASSIGN_VALID_OWNER
- VALID_OWNER_LEAVING_SCOPE 26422
- ALLOCATION_NOT_ASSIGNED_TO_OWNER 26423
- VALID_ALLOCATION_LEAVING_SCOPE 26424
- 26425 ASSIGNING_TO_STATIC
- NO_LIFETIME_TRACKING 26499

## <a name="see-also"></a>Vedere anche

[Uso dei C++ controlli delle linee guida di base](using-the-cpp-core-guidelines-checkers.md)
