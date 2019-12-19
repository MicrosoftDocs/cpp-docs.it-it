---
title: C++file di intestazione della libreria standard
ms.date: 07/12/2019
helpviewer_keywords:
- header files, C++ Standard Library
- C++ Standard Library, header files
ms.assetid: e7bf497a-0f63-48d0-9b54-cb0eef4073c4
ms.openlocfilehash: 807e65c69e55d8790b77a493e4ae1878aa740557
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74305416"
---
# <a name="c-standard-library-header-files"></a>C++file di intestazione della libreria standard

File di intestazione per C++ la libreria standard e le estensioni, per categoria.

## <a name="headers-by-category"></a>Intestazioni per categoria

::: moniker range=">=vs-2017"

| Categoria | Intestazioni |
| - | - |
| [Algoritmi](../cpp/algorithms-modern-cpp.md) | [algoritmo di\<>](algorithm.md), [\<> cstdlib](cstdlib.md), [\<numeric](numeric.md) > |
| Operazioni atomiche |  [\<atomic >](atomic.md)<sup>11</sup> |
| Wrapper della libreria C | [\<cassert >](cassert.md), [\<ccomplex >](ccomplex.md)<sup>11 a b</sup>, [\<cctype >](cctype.md)\<[> cerrno\<](cerrno.md)> [cfenv\<](cfenv.md)<sup>11</sup>, [> cfloat\<](cfloat.md), [> cinttypes\<](cinttypes.md)<sup>11</sup>, [> ciso646](ciso646.md)\<<sup>b</sup>, [> climits\<](climits.md), [> clocale\<](clocale.md), > [cmath\<](cmath.md), > [csetjmp\<](csetjmp.md), [ csignal >](csignal.md), [\<cstdalign >](cstdalign.md)<sup>11 a b</sup>, [\<cstdarg >](cstdarg.md), [\<cstdbool >](cstdbool.md)<sup>11 a b</sup>, [\<cstddef >](cstddef.md), [\<cstdint >](cstdint.md)<sup>11</sup>, [\<cstdio >](cstdio.md), [\<cstdlib >](cstdlib.md), [\<CString >](cstring.md), [\<ctgmath >](ctgmath.md)<sup>11 a b</sup>, [\<CTime](ctime.md)>, [\<cuchar >](cuchar.md)<sup>11</sup> , [\<cwchar >](cwchar.md), [\<cwctype >](cwctype.md) |
| Concetti | concetti di \<><sup>20</sup> |
| [Contenitori](../cpp/containers-modern-cpp.md) | |
| Contenitori sequenza | [\<array >](array.md)<sup>11</sup>, [\<deque >](deque.md)\<[forward_list >](forward-list.md)\<<sup>11</sup>, > [List](list.md)\<, [> Vector](vector.md) |
| Contenitori associativi ordinati| [\<map>](map.md), [\<set>](set.md) |
| Contenitori associativi non ordinati | [\<unordered_map >](unordered-map.md)<sup>11</sup>, [\<unordered_set](unordered-set.md)><sup>11</sup> |
| Adattatori del contenitore | [\<queue>](queue.md), [\<stack>](stack.md) |
| Viste del contenitore | \<span ><sup>20</sup> |
| [Errori e gestione delle eccezioni](../cpp/errors-and-exception-handling-modern-cpp.md) | [\<cassert >](cassert.md), [\<> eccezione](exception.md), [\<STDEXCEPT](stdexcept.md)>\<[system_error >](system-error.md)<sup>11</sup> |
| Utilità generali | \<qualsiasi ><sup>17</sup>, [\<bitst >](bitset.md), \<charconv ><sup>17</sup>, [\<cstdlib >](cstdlib.md), \<esecuzione ><sup>17</sup>, [\<funzionale](functional.md)>,\<[memoria](memory.md)>, \<memory_resource > \<<sup>17</sup>, > facoltativo\<<sup>17</sup>, [> ratio\<](ratio.md)<sup>11</sup>, [scoped_allocator](scoped-allocator.md)>\<<sup>11</sup>, [> tupla](tuple.md)<sup>11</sup> [\<type_traits >](type-traits.md)<sup>11</sup>, [\<typeindex >](typeindex.md)<sup>11</sup>,\<[Utility](utility.md)>, \<Variant ><sup>17</sup> |
| [I/O e formattazione](../text/string-and-i-o-formatting-modern-cpp.md) | [\<cinttypes >](cinttypes.md)<sup>11</sup>, [\<cstdio >](cstdio.md), [\<filesystem >](filesystem.md)<sup>17</sup>, [\<fstream](fstream.md)>\<> [iomanip\<](iomanip.md)>\<[ios >](ios.md)\<[>\<>](iosfwd.md)\<[>\<>](iostream.md)\<[IStream >](istream.md)\<[iosfwd >](ostream.md) [iostream](sstream.md)ostream [,](streambuf.md) [sstream](strstream.md)<sup>c </sup>, \<syncstream ><sup>20</sup> |
| Iteratori | [\<iterator>](iterator.md) |
| Supporto delle lingue | [\<cfloat>](cfloat.md), [\<climits>](climits.md), [\<codecvt>](codecvt.md)<sup>11 a</sup>, \<confronto><sup>20</sup>, \<contratto><sup>20</sup>, \<coroutine><sup>20</sup>, [\<csetjmp>](csetjmp.md), [\<csignal>](csignal.md), [\<cstdarg>](cstdarg.md), [\<cstddef>](cstddef.md), [\<cstdint>](cstdint.md)<sup>11</sup>, [\<cstdlib>](cstdlib.md), [\<eccezione>](exception.md), [\<initializer_list>](initializer-list.md)<sup>11</sup>, [\<limiti>](limits.md), [\<>](new.md), [\<typeinfo>](typeinfo.md), \<versione><sup>20</sup> |
| Localizzazione | [\<clocale >](clocale.md), [\<codecvt >](codecvt.md)<sup>11 a</sup>, [\<> CVT/wbuffer](cvt-wbuffer.md),\<[CVT/wstring](cvt-wstring.md)>\<[impostazioni locali](locale.md) > |
| Matematica e numerici | \<bit ><sup>20</sup>, [\<cfenv >](cfenv.md)<sup>11</sup>, [\<cmath](cmath.md)>,\<> [complessi](complex.md)\<> [cstdlib](cstdlib.md),\<[limits >](limits.md),\<[numeric](numeric.md)>,\<[Random >](random.md)<sup>11</sup>, [\<ratio](ratio.md)><sup>11</sup>, [\<valarray >](valarray.md) |
| [Gestione della memoria](../cpp/smart-pointers-modern-cpp.md) | [allocatori di\<>](allocators-header.md), [> di memoria\<](memory.md), \<memory_resource ><sup>17</sup>, [\<nuovo >](new.md) [,\<scoped_allocator >](scoped-allocator.md)<sup>11</sup> |
| Multithreading | [\<atomic >](atomic.md)<sup>11</sup>, [\<condition_variable >](condition-variable.md)<sup>11</sup>, [\<future >](future.md)<sup>11</sup>, [\<mutex >](mutex.md)<sup>11</sup>, [\<](shared-mutex.md)shared_mutex ><sup>14</sup>, [\<thread](thread.md)><sup>11</sup> |
| Ranges | intervalli di \<><sup>20</sup> |
| Espressioni regolari | [\<regex >](regex.md)<sup>11</sup> |
| Stringhe e dati di tipo carattere | [\<cctype >](cctype.md), [\<cstdlib >](cstdlib.md), [\<cstring >](cstring.md), [\<cuchar >](cuchar.md)<sup>11</sup>, [\<cwchar >](cwchar.md), [\<cwctype](cwctype.md)>,\<[Regex >](regex.md)<sup>11</sup>, [\<String](string.md)>, [\<](string-view.md)string_view ><sup>17</sup> |
| Tempo | [\<chrono >](chrono.md)<sup>11</sup>, [\<CTime >](ctime.md) |

<sup>11</sup> aggiunti nello standard c++ 11. \
<sup>14</sup> aggiunti nello standard c++ 14. \
<sup>17</sup> aggiunto nello standard c++ 17. \
<sup>20</sup> aggiunti nello standard bozza c++ 20. \
<sup>deprecato</sup> nello standard c++ 17. \
<sup>b</sup> rimosso nello standard bozza c++ 20. \
<sup>c</sup> deprecato nello standard c++ 98.

::: moniker-end

::: moniker range="vs-2015"

|Categoria|Intestazioni|
|-|-|
|[Algoritmi](../cpp/algorithms-modern-cpp.md)|[\<algorithm>](algorithm.md)|
|Wrapper della libreria C|[\<cassert>](cassert.md), [\<cctype>](cctype.md), [\<cerrno>](cerrno.md), [\<cfenv>](cfenv.md), [\<cfloat>](cfloat.md), [\<cinttypes>](cinttypes.md), [\<ciso646>](ciso646.md), [\<climits>](climits.md), [\<clocale>](clocale.md), [\<cmath>](cmath.md), [\<csetjmp>](csetjmp.md), [\<csignal>](csignal.md), [\<cstdarg>](cstdarg.md), [\<cstdbool>](cstdbool.md), [\<cstddef>](cstddef.md), [\<cstdint>](cstdint.md), [\<cstdio>](cstdio.md), [\<cstdlib>](cstdlib.md), [\<cstring>](cstring.md), [\<ctgmath>](ctgmath.md), [\<ctime>](ctime.md), [\<cwchar>](cwchar.md), [\<cwctype>](cwctype.md)|
|[Contenitori](../cpp/containers-modern-cpp.md)||
|Contenitori sequenza|[\<array >](array.md), [\<deque >](deque.md), [\<forward_list >\<>](forward-list.md) [List](list.md)\<> [vector](vector.md)|
|Contenitori associativi ordinati| [\<map>](map.md), [\<set>](set.md)|
|Contenitori associativi non ordinati|[\<unordered_map >](unordered-map.md), [\<unordered_set >](unordered-set.md)|
|Contenitori di adattatori|[\<queue>](queue.md), [\<stack>](stack.md)|
|[Errori e gestione delle eccezioni](../cpp/errors-and-exception-handling-modern-cpp.md)|[\<> eccezione](exception.md), [\<STDEXCEPT >](stdexcept.md)\<[system_error](system-error.md) >|
|[I/O e formattazione](../text/string-and-i-o-formatting-modern-cpp.md)|[\<filesystem>](filesystem.md), [\<fstream>](fstream.md), [\<iomanip>](iomanip.md), [\<ios>](ios.md), [\<iosfwd>](iosfwd.md), [\<iostream>](iostream.md), [\<istream>](istream.md), [\<ostream>](ostream.md), [\<sstream>](sstream.md), [\<streambuf>](streambuf.md), [\<strstream>](strstream.md)|
|Iteratori|[\<iterator>](iterator.md)|
|Localizzazione|[\<codecvt>](codecvt.md), [\<cvt/wbuffer>](cvt-wbuffer.md), [\<cvt/wstring>](cvt-wstring.md), [\<locale>](locale.md)|
|Matematica e numerici|[\<complex>](complex.md), [\<limits>](limits.md), [\<numeric>](numeric.md), [\<random>](random.md), [\<ratio>](ratio.md), [\<valarray>](valarray.md)|
|[Gestione della memoria](../cpp/smart-pointers-modern-cpp.md)|[allocatori di\<>](allocators-header.md), [> di memoria\<](memory.md),\<[nuovo](new.md) [>,\<scoped_allocator >](scoped-allocator.md)|
|Multithreading|[\<atomic >](atomic.md), [\<condition_variable >](condition-variable.md),\<> [future](future.md),\<[mutex](mutex.md) [>,\<shared_mutex >](shared-mutex.md)\<[thread](thread.md) >|
|Altre utilità|[\<> bits](bitset.md), [\<chrono >](chrono.md), [\<> funzionale](functional.md),\<[initializer_list >](initializer-list.md)\<[Tuple](tuple.md)>\<type_traits [>\<](type-traits.md)>\<[TypeInfo >](typeinfo.md)\<[typeindex >](typeindex.md) [Utility](utility.md)|
|Stringhe e dati di tipo carattere|[\<regex >](regex.md), [\<> stringa](string.md), [\<string_view >](string-view.md)

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Uso C++ delle intestazioni della libreria](using-cpp-library-headers.md)\
[C++libreria standard](cpp-standard-library-reference.md)
