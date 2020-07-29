---
title: Riferimento a Linee guida di base di C++ Checker
ms.date: 03/22/2018
ms.topic: reference
helpviewer_keywords:
- code analysis, C++ core check
ms.assetid: f1429463-136e-41ed-8a75-a8dbf0b4fd89
ms.openlocfilehash: 7519706c0a8e23c56f8951647fb16c24d3f1e189
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87216687"
---
# <a name="c-core-guidelines-checker-reference"></a>Riferimento a Linee guida di base di C++ Checker

In questa sezione sono elencati Linee guida di base di C++ avvisi del controllo. Per informazioni sull'analisi del codice, vedere [/Analyze (analisi del codice)](/cpp/build/reference/analyze-code-analysis) e [avvio rapido: analisi del codice per C/C++](../code-quality/quick-start-code-analysis-for-c-cpp.md).

> [!NOTE]
> Alcuni avvisi appartengono a più di un gruppo e non a tutti gli avvisi è associato un argomento di riferimento completo.

## <a name="owner_pointer-group"></a>Gruppo di OWNER_POINTER

[DONT_HEAP_ALLOCATE_MOVABLE_RESULT C26402](C26402.md)\
Restituisce un oggetto con ambito anziché un heap allocato se dispone di un costruttore di spostamento. Vedere [linee guida di base di C++ R. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[RESET_OR_DELETE_OWNER C26403](C26403.md)\
Reimposta o Elimina in modo esplicito un \<T> puntatore proprietario '*Variable*'. Vedere [linee guida di base di C++ R. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[DONT_DELETE_INVALID C26404](C26404.md)\
Non eliminare un proprietario \<T> che potrebbe trovarsi in uno stato non valido. Vedere [linee guida di base di C++ R. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[DONT_ASSIGN_TO_VALID C26405](C26405.md)\
Non assegnare a un proprietario \<T> che può trovarsi in uno stato valido. Vedere [linee guida di base di C++ R. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[DONT_ASSIGN_RAW_TO_OWNER C26406](C26406.md)\
Non assegnare un puntatore non elaborato a un proprietario \<T> . Vedere [linee guida di base di C++ R. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[DONT_HEAP_ALLOCATE_UNNECESSARILY C26407](C26407.md)\
Preferisci oggetti con ambito, non allocare inutilmente gli heap. Vedere [linee guida di base di C++ R. 5](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-scoped).

[USE_NOTNULL C26429](C26429.md)\
Il simbolo '*Symbol*' non viene mai testato per il supporto di valori null, ma può essere contrassegnato come NOT_NULL. Vedere [linee guida di base di C++ F. 23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

[TEST_ON_ALL_PATHS C26430](C26430.md)\
Il simbolo '*Symbol*' non è stato testato per il supporto di valori null in tutti i percorsi. Vedere [linee guida di base di C++ F. 23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

[DONT_TEST_NOTNULL C26431](C26431.md)\
Il tipo di espressione '*expr*' è già GSL:: NOT_NULL. Non testarlo per il supporto di valori null. Vedere [linee guida di base di C++ F. 23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

## <a name="raw_pointer-group"></a>Gruppo di RAW_POINTER

[NO_RAW_POINTER_ASSIGNMENT C26400](c26400.md)\
Non assegnare il risultato di un'allocazione o una chiamata di funzione con un \<T> valore restituito del proprietario a un puntatore non elaborato \<T> . utilizzare invece Owner. Vedere [linee guida di base di C++ I. 11](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Ri-raw).

[DONT_DELETE_NON_OWNER C26401](c26401.md)\
Non eliminare un puntatore non elaborato che non è un proprietario \<T> . Vedere [linee guida di base di C++ I. 11](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Ri-raw).

[DONT_HEAP_ALLOCATE_MOVABLE_RESULT C26402](C26402.md)\
Restituisce un oggetto con ambito anziché un heap allocato se dispone di un costruttore di spostamento. Vedere [linee guida di base di C++ R. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-ptr).

[NO_MALLOC_FREE C26408](C26408.md)\
Evitare malloc () e Free () preferendo la versione nothrow di New con Delete. Vedere [linee guida di base di C++ R. 10](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-mallocfree).

[NO_NEW_DELETE C26409](C26409.md)\
Evitare di chiamare la nuova ed eliminare in modo esplicito, usare std:: make_unique \<T> . Vedere [linee guida di base di C++ R. 11](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-newdelete).

[USE_NOTNULL C26429](C26429.md)\
Il simbolo '*Symbol*' non viene mai testato per il supporto di valori null, ma può essere contrassegnato come NOT_NULL. Vedere [linee guida di base di C++ F. 23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

[TEST_ON_ALL_PATHS C26430](C26430.md)\
Il simbolo '*Symbol*' non è stato testato per il supporto di valori null in tutti i percorsi. Vedere [linee guida di base di C++ F. 23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

[DONT_TEST_NOTNULL C26431](C26431.md)\
Il tipo di espressione '*expr*' è già GSL:: NOT_NULL. Non testarlo per il supporto di valori null. Vedere [linee guida di base di C++ F. 23](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f23-use-a-not_nullt-to-indicate-that-null-is-not-a-valid-value).

[NO_POINTER_ARITHMETIC C26481](C26481.md)\
Non usare l'aritmetica del puntatore. In alternativa, utilizzare Span. Vedere [linee guida di base di C++ Bounds. 1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds).

[NO_ARRAY_TO_POINTER_DECAY C26485](C26485.md)\
Espressione '*expr*': nessuna matrice per il decadimento del puntatore. Vedere [linee guida di base di C++ Bounds. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds).

## <a name="unique_pointer-group"></a>Gruppo di UNIQUE_POINTER

[NO_REF_TO_CONST_UNIQUE_PTR C26410](C26410.md)\
Il parametro '*Parameter*' è un riferimento a un `const` puntatore univoco. usare invece const t * o const t&. Vedere [linee guida di base di C++ R. 32](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-uniqueptrparam).

[NO_REF_TO_UNIQUE_PTR C26411](C26411.md)\
Il parametro '*Parameter*' è un riferimento a un puntatore univoco e non viene mai riassegnato o reimpostato. usare invece t * o t&. Vedere [linee guida di base di C++ R. 33](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-reseat).

[RESET_LOCAL_SMART_PTR C26414](C26414.md)\
Spostare, copiare, riassegnare o reimpostare un puntatore intelligente locale '*Symbol*'. Vedere [linee guida di base di C++ R. 5](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-scoped).

[SMART_PTR_NOT_NEEDED C26415](C26415.md)\
Il parametro '*Symbol*' del puntatore intelligente viene usato solo per accedere al puntatore contenuto. Usare invece T * o T&. Vedere [linee guida di base di C++ R. 30](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-smartptrparam).

## <a name="shared_pointer-group"></a>Gruppo di SHARED_POINTER

[RESET_LOCAL_SMART_PTR C26414](C26414.md)\
Spostare, copiare, riassegnare o reimpostare un puntatore intelligente locale '*Symbol*'. Vedere [linee guida di base di C++ R. 5](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-scoped).

[SMART_PTR_NOT_NEEDED C26415](C26415.md)\
Il parametro '*Symbol*' del puntatore intelligente viene usato solo per accedere al puntatore contenuto. Usare invece T * o T&. Vedere [linee guida di base di C++ R. 30](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-smartptrparam).

[NO_RVALUE_REF_SHARED_PTR C26416](C26416.md)\
Il parametro '*Symbol*' del puntatore condiviso viene passato per riferimento rvalue. In alternativa, passare per valore. Vedere [linee guida di base di C++ R. 34](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-sharedptrparam-owner).

[NO_LVALUE_REF_SHARED_PTR C26417](C26417.md)\
Il parametro '*Symbol*' del puntatore condiviso viene passato per riferimento e non viene reimpostato o riassegnato. Usare invece T * o T&. Vedere [linee guida di base di C++ R. 35](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-sharedptrparam).

[NO_VALUE_OR_CONST_REF_SHARED_PTR C26418](C26418.md)\
Il parametro '*Symbol*' del puntatore condiviso non viene copiato o spostato. Usare invece T * o T&. Vedere [linee guida di base di C++ R. 36](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rr-sharedptrparam-const).

## <a name="declaration-group"></a>Gruppo di dichiarazioni

[NO_GLOBAL_INIT_CALLS C26426](C26426.md)\
L'inizializzatore globale chiama una funzione non constExpr '*Symbol*'. Vedere [linee guida di base di C++ I. 22](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#i22-avoid-complex-initialization-of-global-objects).

[NO_GLOBAL_INIT_EXTERNS C26427](C26427.md)\
L'inizializzatore globale accede all'oggetto extern '*Symbol*'. Vedere [linee guida di base di C++ I. 22](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#i22-avoid-complex-initialization-of-global-objects).

[NO_UNNAMED_RAII_OBJECTS C26444](c26444.md)\
Evitare oggetti senza nome con costruzione e distruzione personalizzate. Vedere [es. 84: non (provare a) dichiarare una variabile locale senza nome](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md).

## <a name="class-group"></a>Gruppo di classi

[DEFINE_OR_DELETE_SPECIAL_OPS C26432](C26432.md)\
Se si definisce o si elimina una qualsiasi operazione predefinita nel tipo '*Symbol*', è necessario definirle o eliminarle tutte. Vedere [linee guida di base di C++ C. 21](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c21-if-you-define-or-delete-any-default-operation-define-or-delete-them-all).

[OVERRIDE_EXPLICITLY C26433](c26433.md)\
La funzione '*Symbol*' deve essere contrassegnata con ' override '. Vedere [C. 128: le funzioni virtuali devono specificare esattamente uno dei caratteri Virtual, override o Final](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c128-virtual-functions-should-specify-exactly-one-of-virtual-override-or-final).

[DONT_HIDE_METHODS C26434](C26434.md)\
La funzione '*Symbol_1*' nasconde una funzione non virtuale '*symbol_2*'. Vedere [linee guida di base di C++ C. 128](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c128-virtual-functions-should-specify-exactly-one-of-virtual-override-or-final).

[SINGLE_VIRTUAL_SPECIFICATION C26435](c26435.md)\
La funzione ' symbol ' deve specificare esattamente uno dei*simboli*' Virtual ',' override ' o ' final '. Vedere [C. 128: le funzioni virtuali devono specificare esattamente uno dei caratteri Virtual, override o Final](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md).

[NEED_VIRTUAL_DTOR C26436](C26436.md)\
Il tipo '*Symbol*' con una funzione virtuale richiede un distruttore virtuale pubblico o non virtuale protetto. Vedere [linee guida di base di C++ C. 35](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#c35-a-base-class-destructor-should-be-either-public-and-virtual-or-protected-and-nonvirtual).

[NO_EXPLICIT_DTOR_OVERRIDE C26443](c26443.md)\
Il distruttore di override non deve usare identificatori ' override ' o ' Virtual ' espliciti. Vedere [C. 128: le funzioni virtuali devono specificare esattamente uno dei caratteri Virtual, override o Final](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md).

## <a name="style-group"></a>Gruppo di stili

[NO_GOTO C26438](C26438.md)\
Evitare i `goto`. Vedere [linee guida di base di C++ es. 76](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#es76-avoid-goto).

## <a name="function-group"></a>Gruppo di funzioni

[SPECIAL_NOEXCEPT C26439](C26439.md)\
Questo tipo di funzione non può generare. Dichiararlo **`noexcept`** . Vedere [linee guida di base di C++ F. 6](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f6-if-your-function-may-not-throw-declare-it-noexcept).

[DECLARE_NOEXCEPT C26440](C26440.md)\
La funzione '*Symbol*' può essere dichiarata **`noexcept`** . Vedere [linee guida di base di C++ F. 6](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f6-if-your-function-may-not-throw-declare-it-noexcept).

[DONT_THROW_IN_NOEXCEPT C26447](c26447.md)\
La funzione viene dichiarata **`noexcept`** ma chiama una funzione che può generare eccezioni.
Vedere [linee guida di base di C++: F. 6: se la funzione non può generare, dichiararla noexcept](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#f6-if-your-function-may-not-throw-declare-it-noexcept).

## <a name="concurrency-group"></a>Gruppo di concorrenza

[NO_UNNAMED_GUARDS C26441](C26441.md)\
Gli oggetti Guard devono essere denominati. Vedere [linee guida di base di C++ CP. 44](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#cp44-remember-to-name-your-lock_guards-and-unique_locks).

## <a name="const-group"></a>Gruppo CONSt

[USE_CONST_REFERENCE_ARGUMENTS C26460](c26460.md)\
L'argomento di riferimento '*argument*' per la funzione '*Function*' può essere contrassegnato come `const` . Vedere [linee guida di base di C++ con. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rconst-ref).

[USE_CONST_POINTER_ARGUMENTS C26461](c26461.md): \
L'argomento '*argument*' del puntatore per la funzione '*Function*' può essere contrassegnato come puntatore a `const` . Vedere [linee guida di base di C++ con. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rconst-ref).

[USE_CONST_POINTER_FOR_VARIABLE C26462](c26462.md)\
Il valore a cui punta '*Variable*' viene assegnato una sola volta, contrassegnarlo come puntatore a `const` . Vedere [linee guida di base di C++ con. 4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#con4-use-const-to-define-objects-with-values-that-do-not-change-after-construction).

[USE_CONST_FOR_ELEMENTS C26463](c26463.md)\
Gli elementi della matrice '*Array*' sono assegnati una sola volta, contrassegnare gli elementi `const` . Vedere [linee guida di base di C++ con. 4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#con4-use-const-to-define-objects-with-values-that-do-not-change-after-construction).

[USE_CONST_POINTER_FOR_ELEMENTS C26464](c26464.md)\
I valori a cui puntano gli elementi della matrice '*Array*' sono assegnati una sola volta, contrassegnare gli elementi come puntatore a `const` . Vedere [linee guida di base di C++ con. 4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#con4-use-const-to-define-objects-with-values-that-do-not-change-after-construction).

[USE_CONST_FOR_VARIABLE C26496](c26496.md)\
La variabile '*Variable*' è assegnata una sola volta, contrassegnarla come `const` . Vedere [linee guida di base di C++ con. 4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#con4-use-const-to-define-objects-with-values-that-do-not-change-after-construction).

[USE_CONSTEXPR_FOR_FUNCTION C26497](c26497.md)\
Questa *funzione* di funzione può essere contrassegnata `constexpr` se si desidera la valutazione in fase di compilazione. Vedere [linee guida di base di C++ F. 4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rf-constexpr).

[USE_CONSTEXPR_FOR_FUNCTIONCALL C26498](c26498.md)\
Questa *funzione* di chiamata di funzione può utilizzare `constexpr` se si desidera la valutazione in fase di compilazione. Vedere [linee guida di base di C++ con. 5](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Rconst-constexpr).

## <a name="type-group"></a>Gruppo di tipi

[DONT_SLICE C26437](C26437.md)\
Non sezionare. Vedere [linee guida di base di C++ es. 63](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#es63-dont-slice).

[NO_CONST_CAST_UNNECESSARY C26465](c26465.md)\
Non usare `const_cast` per eseguire il cast `const` . `const_cast`non è obbligatorio; la conversione non è stata rimossa da const o dalla volatilità. Vedere [linee guida di base di C++ Type. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-constcast).

[NO_STATIC_DOWNCAST_POLYMORPHIC C26466](c26466.md)\
Non usare `static_cast` downcast. Un cast da un tipo polimorfico deve usare dynamic_cast. Vedere [linee guida di base di C++ tipo. 2](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-downcast).

[NO_REINTERPRET_CAST_FROM_VOID_PTR C26471](c26471.md)\
Non usare `reinterpret_cast` . Un cast da void * può usare `static_cast` . Vedere [linee guida di base di C++ tipo. 1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-reinterpretcast).

[NO_CASTS_FOR_ARITHMETIC_CONVERSION C26472](C26472.md)\
Non usare un `static_cast` per le conversioni aritmetiche. USA inizializzazione parentesi graffa, GSL:: narrow_cast o GSL:: narrow. Vedere [linee guida di base di C++ tipo. 1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-reinterpretcast).

[NO_IDENTITY_CAST C26473](C26473.md)\
Non eseguire il cast tra tipi di puntatore in cui il tipo di origine e il tipo di destinazione sono uguali. Vedere [linee guida di base di C++ tipo. 1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-reinterpretcast).

[NO_IMPLICIT_CAST C26474](C26474.md)\
Non eseguire il cast tra tipi di puntatore quando la conversione potrebbe essere implicita. Vedere [linee guida di base di C++ tipo. 1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#Pro-type-reinterpretcast).

[NO_FUNCTION_STYLE_CASTS C26475](C26475.md)\
Non usare i cast C di tipo funzione. Vedere [linee guida di base di C++ es. 49](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#es49-if-you-must-use-a-cast-use-a-named-cast).

[NO_REINTERPRET_CAST C26490](c26490.md)\
Non usare `reinterpret_cast` . Vedere [linee guida di base di C++ tipo. 1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

[NO_STATIC_DOWNCAST C26491](c26490.md)\
Non usare `static_cast` downcast. Vedere [linee guida di base di C++ tipo. 2](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

[NO_CONST_CAST C26492](c26492.md)\
Non usare `const_cast` per eseguire il cast `const` . Vedere [linee guida di base di C++ Type. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

[NO_CSTYLE_CAST C26493](c26493.md)\
Non usare cast di tipo C. Vedere [linee guida di base di C++ tipo. 4](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

[VAR_USE_BEFORE_INIT C26494](c26494.md)\
La variabile '*Variable*' non è inizializzata. Inizializzare sempre un oggetto. Vedere [linee guida di base di C++ Type. 5](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

[MEMBER_UNINIT C26495](c26495.md)\
La variabile '*Variable*' non è inizializzata. Inizializzare sempre una variabile membro. Vedere [linee guida di base di C++ tipo. 6](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-type).

## <a name="bounds-group"></a>Gruppo di limiti

[USE_GSL_AT C26446](c26446.md)\
Preferisce utilizzare `gsl::at()` invece dell'operatore di indice non controllato. Vedere [linee guida di base di C++: Bounds. 4: non usare funzioni di libreria standard e tipi non associati](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#probounds-bounds-safety-profile).

[NO_POINTER_ARITHMETIC C26481](C26481.md)\
Non usare l'aritmetica del puntatore. In alternativa, utilizzare Span. Vedere [limiti di linee guida di base di C++. 1](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds)

[NO_DYNAMIC_ARRAY_INDEXING C26482](c26482.md)\
Indicizzare solo le matrici usando espressioni costanti. Vedere [limiti di linee guida di base di C++. 2](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds)

[STATIC_INDEX_OUT_OF_RANGE C26483](c26483.md)\
Il *valore* del valore non è compreso nei limiti (0, *associato*) della variabile '*Variable*'. Indicizzare solo le matrici usando espressioni costanti all'interno dei limiti della matrice. Vedere [limiti di linee guida di base di C++. 2](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds)

[NO_ARRAY_TO_POINTER_DECAY C26485](C26485.md)\
Espressione '*expr*': nessuna matrice per il decadimento del puntatore. Vedere [limiti di linee guida di base di C++. 3](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-bounds)

## <a name="gsl-group"></a>Gruppo GSL

[NO_SPAN_REF C26445](c26445.md)\
Un riferimento a `gsl::span` o `std::string_view` può essere un'indicazione di un problema di durata.
Vedere [linee guida di base di C++ GSL. View: viste](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#gslview-views)

[USE_GSL_AT C26446](c26446.md)\
Preferisce utilizzare `gsl::at()` invece dell'operatore di indice non controllato. Vedere [linee guida di base di C++: Bounds. 4: non usare funzioni di libreria standard e tipi non associati](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#probounds-bounds-safety-profile).

[USE_GSL_FINALLY C26448](c26448.md)\
Provare a usare `gsl::finally` se l'azione finale è intenzionale. Vedere [linee guida di base di C++: GSL. util: Utilities](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#SS-utilities).

[NO_SPAN_FROM_TEMPORARY C26449](c26449.md)\
`gsl::span`o `std::string_view` creato da un oggetto temporaneo non sarà valido quando l'oggetto temporaneo viene invalidato. Vedere [linee guida di base di C++: GSL. View: views](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md#gslview-views).

## <a name="deprecated-warnings"></a>Avvisi deprecati

Gli avvisi seguenti sono presenti in un set di regole sperimentali iniziale dello strumento di controllo delle linee guida di base, ma sono ora deprecati e possono essere ignorati. Gli avvisi sono sostituiti da avvisi dall'elenco precedente.

- 26412 DEREF_INVALID_POINTER
- 26413 DEREF_NULLPTR
- 26420 ASSIGN_NONOWNER_TO_EXPLICIT_OWNER
- 26421 ASSIGN_VALID_OWNER
- 26422 VALID_OWNER_LEAVING_SCOPE
- 26423 ALLOCATION_NOT_ASSIGNED_TO_OWNER
- 26424 VALID_ALLOCATION_LEAVING_SCOPE
- 26425 ASSIGNING_TO_STATIC
- 26499 NO_LIFETIME_TRACKING

## <a name="see-also"></a>Vedere anche

[Uso dei controlli Linee guida di base di C++](using-the-cpp-core-guidelines-checkers.md)
