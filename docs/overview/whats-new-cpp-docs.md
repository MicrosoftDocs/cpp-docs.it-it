---
title: Novità per la documentazione di C++
description: Nuovi aggiornamenti per docs e doc per il compilatore Microsoft C/C++, ATL/MFC, il runtime C e la documentazione della libreria standard.
ms.date: 02/17/2021
ms.openlocfilehash: b15d286eb7bd2951ab2b8101a752de2beb57f4a4
ms.sourcegitcommit: e99db7c3b5f25ece0e152165066c926751a7c2ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/17/2021
ms.locfileid: "100643573"
---
# <a name="microsoft-c-docs-whats-new-for-visual-studio-168"></a>Documentazione di Microsoft C++: novità di Visual Studio 16,8

Questo articolo elenca alcune delle principali modifiche apportate a docs per Visual Studio 16,8. 

Per informazioni sulle novità di Visual Studio, vedere Novità di [C++ in Visual Studio](what-s-new-for-visual-cpp-in-visual-studio.md).

Per lo stato di conformità di C++ più recente, vedere [miglioramenti della conformità di c++ in Visual Studio](cpp-conformance-improvements.md)

## <a name="c-language"></a>Linguaggio C

### <a name="new-articles"></a>Nuovi articoli

- [`_Noreturn` parola chiave e `noreturn` macro (C11)](../c-language/noreturn.md)
- [_Static_assert parola chiave e static_assert macro (C11)](../c-language/static-assert-c.md)

### <a name="updated-articles"></a>Articoli aggiornati

- [Analisi degli argomenti della Command-Line c](../c-language/parsing-c-command-line-arguments.md) -documentare le eccezioni alle regole per l'analisi degli argomenti c
- [Qualificatori di tipo](../c-language/type-qualifiers.md) -aggiunto `restrict`
- [Operatori di assegnazione C](../c-language/c-assignment-operators.md) -aggiornamento della grammatica lessicale per C17
- [Parole chiave C](../c-language/c-keywords.md) -aggiornamento della grammatica lessicale per C17
- [Grammatica lessicale C](../c-language/lexical-grammar.md) : aggiornamento della grammatica lessicale per C17
- [Riepilogo delle dichiarazioni](../c-language/summary-of-declarations.md) -aggiornamento della grammatica lessicale per C17
- [Riepilogo delle espressioni](../c-language/summary-of-expressions.md) -aggiornamento della grammatica lessicale per C17
- [Dichiarazioni di enumerazioni C](../c-language/c-enumeration-declarations.md) -grammatica lessicale fissa
- [Riepilogo delle istruzioni C](../c-language/summary-of-statements.md) -aggiornamento per `__leave` , `__try` parole chiave

## <a name="c-runtime-library"></a>Libreria di runtime C

### <a name="new-articles"></a>Nuovi articoli

- [Operazione matematiche generiche di tipo](../c-runtime-library/tgmath.md)

### <a name="updated-articles"></a>Articoli aggiornati

- [`qsort`](../c-runtime-library/reference/qsort.md) -È stata aggiunta una nota sulla stabilità
- [`_cwait`](../c-runtime-library/reference/cwait.md) -Esempio di codice corretto
- [Panoramica della famiglia di funzioni](../c-runtime-library/function-family-overviews.md) -aggiunta dell'operatore `new` e `delete`
- [`round, roundf, roundl`](../c-runtime-library/reference/round-roundf-roundl.md) -Esempio di codice di arrotondamento chiarificato
- Note sulla conformità del C99 aggiunto alla [compatibilità](../c-runtime-library/compatibility.md)
- [`realloc`](../c-runtime-library/reference/realloc.md) -Aggiunta di note di conformità C99
- [Funzionalità della libreria CRT](../c-runtime-library/crt-library-features.md) -aggiunta di note di conformità C99
- [`assert Macro, _assert, _wassert`](../c-runtime-library/reference/assert-macro-assert-wassert.md) -Comportamento asserzione chiarificato
- [`vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l`](../c-runtime-library/reference/vsnprintf-s-vsnprintf-s-vsnprintf-s-l-vsnwprintf-s-vsnwprintf-s-l.md) -Valori restituiti chiarificati
- [`setlocale, _wsetlocale`](../c-runtime-library/reference/setlocale-wsetlocale.md) -Aggiunte informazioni sul supporto UTF-8 del runtime C

## <a name="cc-preprocessor-reference"></a>Riferimenti al preprocessore C/C++

### <a name="updated-articles"></a>Articoli aggiornati

- [Macro predefinite](../preprocessor/predefined-macros.md) : aggiornamento alle note sulla versione 16,8, supporto per C11/C17 `/std` e documentazione sull'installazione di SDK
- [MSVC New Preprocessor Overview](../preprocessor/preprocessor-experimental-overview.md) -aggiornamento del contenuto del preprocessore

## <a name="code-quality"></a>Qualità del codice

### <a name="new-articles"></a>Nuovi articoli

- [C33001](../code-quality/c33001.md) -analisi codice VC-Aggiungi per nuove regole in 16,8
- [C33004](../code-quality/c33004.md) -analisi codice VC-Aggiungi per nuove regole in 16,8
- [C33005](../code-quality/c33005.md) -analisi codice VC-Aggiungi per nuove regole in 16,8
- [C33010](../code-quality/c33010.md) -analisi codice VC-Aggiungi per nuove regole in 16,8
- [C33011](../code-quality/c33011.md) -analisi codice VC-Aggiungi per nuove regole in 16,8
- [C33020](../code-quality/c33020.md) -analisi codice VC-Aggiungi per nuove regole in 16,8
- [C33022](../code-quality/c33022.md) -analisi codice VC-Aggiungi per nuove regole in 16,8

### <a name="updated-articles"></a>Articoli aggiornati

- [`C6262`](../code-quality/c6262.md) -Address cpp-docs. zh-TW problema 20
- [`C26497 USE_CONSTEXPR_FOR_FUNCTION`](../code-quality/c26497.md) -Aggiunto esempio a C26497
- [`C26496 USE_CONST_FOR_VARIABLE`](../code-quality/c26496.md) -Aggiunto esempio a C26496
- [`C26495 MEMBER_UNINIT`](../code-quality/c26495.md) -Esempi e collegamenti aggiornati in C26495
- [`C26483 STATIC_INDEX_OUT_OF_RANGE`](../code-quality/c26483.md) -Aggiunto esempio a C26483
- [`C26462 USE_CONST_POINTER_FOR_VARIABLE`](../code-quality/c26462.md) -Aggiunta della descrizione e dell'esempio a C26462
- [`C26461 USE_CONST_POINTER_ARGUMENTS:`](../code-quality/c26461.md) -Aggiunta della descrizione e dell'esempio a C26461
- [`C26460 USE_CONST_REFERENCE_ARGUMENTS`](../code-quality/c26460.md) -Aggiunta della descrizione e dell'esempio a C26460
- [`C26440 DECLARE_NOEXCEPT`](../code-quality/c26440.md) -Aggiunto esempio e collegamento alle linee guida di base per C26440
- [`C26439 SPECIAL_NOEXCEPT`](../code-quality/c26439.md) -Aggiunto esempio e collegamento alle linee guida di base per C26439
- [`C26436 NEED_VIRTUAL_DTOR`](../code-quality/c26436.md) -È stato aggiunto un collegamento alle linee guida di base e di esempio per C26436
- [`C26408 NO_MALLOC_FREE`](../code-quality/c26408.md) -È stato aggiunto un collegamento alle linee guida di base e di esempio per C26408
- [`C26401 DONT_DELETE_NON_OWNER`](../code-quality/c26401.md) -È stato aggiunto un collegamento alle linee guida di base e di esempio per C26401
- [`C26494 VAR_USE_BEFORE_INIT`](../code-quality/c26494.md) -Aggiunto esempio a C26494
- [`C26493 NO_CSTYLE_CAST`](../code-quality/c26493.md) -Aggiunto esempio a C26493
- [`C26492 NO_CONST_CAST`](../code-quality/c26492.md) -Aggiunto esempio a C26492
- [`C26490 NO_REINTERPRET_CAST`](../code-quality/c26490.md) -Aggiunto esempio a C26490
- [`C26482 NO_DYNAMIC_ARRAY_INDEXING`](../code-quality/c26482.md) -Aggiunto esempio a C26482
- [`C26471 NO_REINTERPRET_CAST_FROM_VOID_PTR`](../code-quality/c26471.md) -Aggiunto esempio a C26471
- [`C26466 NO_STATIC_DOWNCAST_POLYMORPHIC`](../code-quality/c26466.md) -Aggiunto esempio a C26466
- [`C26465 NO_CONST_CAST_UNNECESSARY`](../code-quality/c26465.md) -Aggiunto esempio a C26465
- [`C26447 DONT_THROW_IN_NOEXCEPT`](../code-quality/c26447.md) -Aggiunta di esempio a C26447
- [`C26446 USE_GSL_AT`](../code-quality/c26446.md) -È stato aggiunto un esempio per C26446
- [`C26434 DONT_HIDE_METHODS`](../code-quality/c26434.md) -Aggiunto esempio per C26434
- [`C26432 DEFINE_OR_DELETE_SPECIAL_OPS`](../code-quality/c26432.md) -Aggiunto esempio per C26432
- [`C26402 DONT_HEAP_ALLOCATE_MOVABLE_RESULT`](../code-quality/c26402.md) -Aggiunto esempio per C26402
- [`C26409 NO_NEW_DELETE`](../code-quality/c26409.md) -Aggiunto esempio per C26409
- [`C26474 NO_IMPLICIT_CAST`](../code-quality/c26474.md) -C26474 aggiornato per chiarire i casi di base/derivati
## <a name="linux-with-microsoft-c-in-visual-studio"></a>Linux con Microsoft C++ in Visual Studio

### <a name="new-articles"></a>Nuovi articoli

- [Configurare un progetto CMake per Linux in Visual Studio](../linux/cmake-linux-configure.md)

### <a name="updated-articles"></a>Articoli aggiornati

- [Creare un progetto C++ di Linux MSBuild in Visual Studio](../linux/create-a-new-linux-project.md) : istruzioni aggiornate per creare un progetto Linux
- [Riferimento a ConnectionManager](../linux/connectionmanager-reference.md) -aggiunta di comandi per la modifica, pulizia
- [Configurare un progetto CMake per Linux in Visual Studio](../linux/cmake-linux-configure.md) : aggiornato per riflettere l'interfaccia utente più recente
- [Distribuire, eseguire ed eseguire il debug del progetto MSBuild Linux](../linux/deploy-run-and-debug-your-linux-project.md) aggiunto `GDB Path`

## <a name="cc-compiler-and-tools-errors-and-warnings"></a>Errori e avvisi degli strumenti e del compilatore C/C++

### <a name="new-articles"></a>Nuovi articoli

- [Avviso del compilatore (livello 4) C4388](../error-messages/compiler-warnings/c4388.md) -aggiunta avviso C4388, aggiornamento 16,7 avvisi

### <a name="updated-articles"></a>Articoli aggiornati

- [Avviso del compilatore (livello 3) C4018](../error-messages/compiler-warnings/compiler-warning-level-3-c4018.md) -avvisi 16,7 aggiornati
- [Avviso del compilatore (livello 4) C4389](../error-messages/compiler-warnings/compiler-warning-level-4-c4389.md) -avvisi 16,7 aggiornati
- [Avvisi del compilatore per versione del compilatore](../error-messages/compiler-warnings/compiler-warnings-by-compiler-version.md) -aggiornamento 16,7 avvisi
- [Avvisi del compilatore C4800 tramite C5999](../error-messages/compiler-warnings/compiler-warnings-c4800-through-c4999.md) -avvisi 16,7 aggiornati
- [Errore del compilatore C3381](../error-messages/compiler-errors-2/compiler-error-c3381.md) -Address cpp-docs 2493; aggiornare osservazioni ed esempi

## <a name="cc-compiler-intrinsics-and-assembly-language"></a>Intrinseci del compilatore C/C++ e linguaggio assembly

### <a name="updated-articles"></a>Articoli aggiornati

- [Miglioramenti della conformità di C++ in Visual Studio](../overview/cpp-conformance-improvements.md) : aggiornamento alle note sulla versione di 16,8
- [Guida di Microsoft C/C++ e community](../overview/visual-cpp-help-and-community.md) -aggiornamento di DevCom e Microsoft Docs Q&un collegamento
- [C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md) -aggiornamento di DevCom e Microsoft Docs Q&un collegamento
- Tabella di [conformità del linguaggio Microsoft c++](../overview/visual-cpp-language-conformance.md) -tabella di conformità della libreria c++ 20 aggiornata tabella, aggiornamento della tabella delle funzionalità della lingua per 16,7

## <a name="c-in-visual-studio"></a>C++ in Visual Studio

### <a name="updated-articles"></a>Articoli aggiornati

- [`__restrict`](../cpp/extension-restrict.md)
- [istruzione if-else (C++)](../cpp/if-else-statement-cpp.md) -Descrizione aggiunta per la `if/else` grammatica
- [`union`](../cpp/unions.md) -Frammento di codice corretto

## <a name="cc-projects-and-build-systems"></a>Progetti C/C++ e sistemi di compilazione

### <a name="new-articles"></a>Nuovi articoli

- [`.vcxproj` file e caratteri jolly](../build/reference/vcxproj-files-and-wildcards.md)
- [`/headerUnit` (Usare l'unità di intestazione IFC)](../build/reference/headerunit.md)
- [`/module:exportHeader` (Creare unità di intestazione)](../build/reference/module-exportheader.md)
- [`/module:reference` (Usare il modulo denominato IFC)](../build/reference/module-reference.md)
- [`/translateInclude` (Tradurre le direttive include nelle direttive Import)](../build/reference/translateinclude.md)
- [`/Zc:preprocessor` (Abilita modalità di conformità del preprocessore)](../build/reference/zc-preprocessor.md)

### <a name="updated-articles"></a>Articoli aggiornati

- [ `/permissive-` (Conformità agli standard)](../build/reference/permissive-standards-conformance.md) -aggiornato alle note sulla versione di 16,8
- [ `/clr` (Compilazione Common Language Runtime)](../build/reference/clr-common-language-runtime-compilation.md) -aggiunta della descrizione per`/clr`
- [pgosweep](../build/pgosweep.md) -aggiunta di altre opzioni di pgosweep
- [Importazione di dati `__declspec(dllimport)` tramite](../build/importing-data-using-declspec-dllimport.md) -Esempio aggiornato

## <a name="c-porting-and-upgrade-guide"></a>Guida al porting e aggiornamento in C++

### <a name="updated-articles"></a>Articoli aggiornati

- [Procedura: usare codice C++ esistente in un'app piattaforma UWP (Universal Windows Platform)](../porting/how-to-use-existing-cpp-code-in-a-universal-windows-platform-app.md) -rielaborare per maggiore chiarezza ed esempi aggiornati

## <a name="c-standard-library-stl-reference"></a>Guida di riferimento alla libreria standard C++ (STL)

### <a name="new-articles"></a>Nuovi articoli

- [`<bit>`](../standard-library/bit.md)
- [`<bit>` funzioni](../standard-library/bit-functions.md)
- [`endian` enum](../standard-library/bit-enum.md)

### <a name="updated-articles"></a>Articoli aggiornati

- [ `<ios>` typedef](../standard-library/ios-typedefs.md) -esempio aggiornato per GitHub #2514
- [ `basic_string` Classe](../standard-library/basic-string-class.md) -aggiunta `_starts_with()` ,`ends_with()`
- [`ios_base Class`](../standard-library/ios-base-class.md)
- [`map` classe](../standard-library/map-class.md)
- [ `multimap` Classe](../standard-library/multimap-class.md) -aggiunta`contains()`
- [ `multiset` Classe](../standard-library/multiset-class.md) -aggiunta`contains()`
- [ `set` Classe](../standard-library/set-class.md) -aggiunta`contains()`
- [ `unordered_map` Classe](../standard-library/unordered-map-class.md) -aggiunta`contains()`
- [ `unordered_multimap` Classe](../standard-library/unordered-multimap-class.md) -aggiunta`contains()`
- [ `unordered_multiset` Classe](../standard-library/unordered-multiset-class.md) -aggiunta`contains()`
- [ `unordered_set` Classe](../standard-library/unordered-set-class.md) -aggiunta`contains()`
- [ `basic_string_view` Classe](../standard-library/basic-string-view-class.md) -aggiunta `starts_with()` ,`ends_with()`
- [ `<bit>` funzioni](../standard-library/bit-functions.md) - `nodiscard` Sintassi aggiornata

## <a name="community-contributors"></a>Collaboratori della community

Le persone seguenti hanno contribuito ai documenti C++, C e assembler durante questo periodo. Grazie! Per informazioni su come contribuire, vedere [Panoramica della guida del collaboratore Microsoft docs](https://docs.microsoft.com/contribute/) .

- [yecril71pl](https://github.com/yecril71pl) -Christopher Yeleighton (4)
- [definedrisk](https://github.com/definedrisk) -ben (3)
- [BeardedFish](https://github.com/BeardedFish) -Darian B. (1)
- [codevenkat](https://github.com/codevenkat) (1)
- [eltociear](https://github.com/eltociear) -Ikko Ashimine (1)
- [fsb4000](https://github.com/fsb4000) -Igor Zhukov (1)
- [Jaiganeshkumaran](https://github.com/Jaiganeshkumaran) -Dioney (1)
- [jogo-](https://github.com/jogo-) (1)
- [justanotheranonymoususer](https://github.com/justanotheranonymoususer) (1)
- [matrohin](https://github.com/matrohin) -Dmitry Matrokhin (1)
- [mhemmit](https://github.com/mhemmit) (1)
- [MSDN-Whiteknight](https://github.com/MSDN-WhiteKnight) -MSDN. WhiteKnight (1)
- [OdinTemple](https://github.com/OdinTemple) -Odin Temple (1)
- [r00tdr4g0n](https://github.com/r00tdr4g0n) -r00tdr4g0n (1)
- [sebkraemer](https://github.com/sebkraemer) -Sebastian Krämer (1)
- [vtjnash](https://github.com/vtjnash) -Jameson Nash (1)
- [Youssef1313](https://github.com/Youssef1313) -Youssef Victor (1)
- [zecozephyr](https://github.com/zecozephyr) -Jonathan Bailey (1)