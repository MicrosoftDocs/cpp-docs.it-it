---
title: C++file di intestazione della libreria standard
ms.date: 07/12/2019
helpviewer_keywords:
- header files, C++ Standard Library
- C++ Standard Library, header files
ms.assetid: e7bf497a-0f63-48d0-9b54-cb0eef4073c4
ms.openlocfilehash: dc337ef078108d86849aa7b7452512dfb69e6e18
ms.sourcegitcommit: 0867d648e0955ebad7260b5fbebfd6cd4d58f3c7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/19/2019
ms.locfileid: "68341119"
---
# <a name="c-standard-library-header-files"></a>C++file di intestazione della libreria standard

File di intestazione per C++ la libreria standard e le estensioni, per categoria.

## <a name="headers-by-category"></a>Intestazioni per categoria

::: moniker range=">=vs-2017"

| Category | Intestazioni |
| - | - |
| [Algoritmi](../cpp/algorithms-modern-cpp.md) | algoritmo > [, cstdlib>\<](cstdlib.md), [ numeric\<>](numeric.md) [ \<](algorithm.md) |
| Operazioni atomiche |  > atomico<sup>11</sup> [ \<](atomic.md) |
| Wrapper della libreria C | [ \<](cfenv.md)<sup></sup> [ \<](cerrno.md) [ \<cassert >](cctype.md), [ccomplex > 11 a b, cctype >, cerrno >, cfenv > 11, \<](ccomplex.md) [ \<](cassert.md)<sup></sup> [ \<cfloat >](cfloat.md),<sup></sup> [ \<cinttypes >](cinttypes.md)11, [ \<ciso646 >](ciso646.md)<sup>b</sup>, [ \<climits >](climits.md), [ \<clocale >](clocale.md), [ cmath\<>](cmath.md), [ csetjmp>,csignal>,cstdalign>11ab,cstdarg>,\<](csetjmp.md) [ \<](cstdarg.md) [ \<](csignal.md) [ \<](cstdalign.md)<sup></sup> [ \<cstdbool >](cstdbool.md)<sup>11 a b</sup>, [ \<cstddef >](cstddef.md), [ \<cstdint >](cstdint.md)<sup>11</sup>, [ \<cstdio >](cstdio.md), [ \<cstdlib >](cstdlib.md), [ CString\<>](cstring.md),<sup></sup> [ \<](ctime.md)<sup></sup> [ \<](cuchar.md) [ \<](cwchar.md) [ ctgmath>11\<](ctgmath.md)a b, CTime >, cuchar > 11, cwchar >, [ >\<cwctype](cwctype.md) |
| Concetti | \<concetti ><sup>20</sup> |
| [Contenitori](../cpp/containers-modern-cpp.md) | |
| Contenitori sequenza | <sup></sup><sup></sup> [ array\<>](array.md)11, [ deque>,forward_list>11,list>,Vector>\<](deque.md) [ \<](forward-list.md) [ \<](list.md) [ \<](vector.md) |
| Contenitori associativi ordinati| [\<map>](map.md), [\<set>](set.md) |
| Contenitori associativi non ordinati | unordered_map ><sup>11</sup>, [ unordered_set>\<](unordered-set.md)<sup>11</sup> [ \<](unordered-map.md) |
| Adattatori del contenitore | [\<queue>](queue.md), [\<stack>](stack.md) |
| Viste del contenitore | \<span ><sup>20</sup> |
| [Errori e gestione delle eccezioni](../cpp/errors-and-exception-handling-modern-cpp.md) | <sup></sup> [ cassert\<>](cassert.md) [, >\<eccezioni](exception.md) [, >\<STDEXCEPT](stdexcept.md) [, system_error\<>](system-error.md)11 |
| Utilità generali | \<qualsiasi ><sup>17</sup>, [ \<bitst >](bitset.md), \<charconv ><sup>17</sup>, [ \<cstdlib >](cstdlib.md), \<esecuzione ><sup>17</sup>, [ \<funzionale >](functional.md) [ Memory\<>](memory.md),<sup></sup> \<<sup></sup> [ \<](ratio.md)<sup></sup>memory_resource > 17, facoltativo > 17, Ratio > 11, scoped_allocator > \< [ \< ](scoped-allocator.md) <sup>11</sup>,<sup></sup><sup></sup><sup></sup> [ \<](type-traits.md) [ \<](typeindex.md) [ \<Tuple](utility.md)> 11, type_traits > 11, typeindex > 11, > Utility, [ \<](tuple.md) \<Variant ><sup>17</sup> |
| [I/O e formattazione](../cpp/string-and-i-o-formatting-modern-cpp.md) | <sup></sup><sup></sup> [ cinttypes\<>](cinttypes.md)11, [ cstdio>,filesystem>17,fstream>,iomanip>,\<](cstdio.md) [ \<](filesystem.md) [ \<](fstream.md) [ \<](iomanip.md) [ iOS\<>](ios.md), [ iosfwd>,iostream>,>IStream,ostream>,sstream>\<](iosfwd.md) [ \<](iostream.md) [ \<](istream.md) [ \<](ostream.md) [ \<](sstream.md) \< [ ,\<streambuf >](streambuf.md) [ ,\<strstream >](strstream.md)<sup>c</sup>, syncstream ><sup>20</sup> |
| Iterators | [\<iterator>](iterator.md) |
| Supporto delle lingue | \< \< \< <sup></sup><sup></sup><sup></sup> [ cfloat\<>](cfloat.md) [, climits\<>](climits.md) [, codecvt\<>](codecvt.md)11 a, confrontare > 20, contratto > 20, coroutine ><sup>20</sup>, [ \<csetjmp >](csetjmp.md), [ \<csignal >](csignal.md), [ \<cstdarg >](cstdarg.md), [ \<cstddef >](cstddef.md), [ \<cstdint > ](cstdint.md) <sup>11</sup><sup></sup> [, cstdlib\<>](cstdlib.md) [, >\<eccezioni](exception.md) [, initializer_list\<>](initializer-list.md)11 [, limiti>,\<](limits.md) [ \< nuovo >](new.md), [ \<TypeInfo >](typeinfo.md), \<versione ><sup>20</sup> |
| Localizzazione | [ \<](locale.md) <sup></sup> [ clocale>\<](cvt-wbuffer.md), [codecvt > 11 a, CVT/wbuffer >, CVT/wstring >, impostazioni locali > \<](codecvt.md) [ \<](cvt-wstring.md) [ \<](clocale.md) |
| Matematica e numerici | \<bit ><sup>20</sup>, [ \<cfenv >](cfenv.md)<sup>11</sup>, [ \<cmath >](cmath.md), [ \<> complessi](complex.md), [ \<cstdlib >](cstdlib.md), [ \<limiti >](limits.md), [ numeric\<>](numeric.md),<sup></sup><sup></sup> [ Random>\<](valarray.md) 11, [ \<Ratio >](ratio.md)11, valarray > [ \<](random.md) |
| [Gestione della memoria](../cpp/smart-pointers-modern-cpp.md) | \< [ \<](new.md) [ \<](scoped-allocator.md)<sup></sup><sup></sup> [ \<](memory.md)allocatori >, Memory >, memory_resource > 17, New >, scoped_allocator > 11 [ \<](allocators-header.md) |
| Multithreading | <sup></sup><sup></sup><sup></sup><sup></sup> [ Atomic\<>](atomic.md)11, [ condition_variable>11,future>11,mutex>11,\<](condition-variable.md) [ \<](future.md) [ \<](mutex.md) [ \< shared_mutex >](shared-mutex.md)<sup>14</sup>, [ \<thread >](thread.md)<sup>11</sup> |
| Intervalli | \<intervalli ><sup>20</sup> |
| Espressioni regolari | Regex ><sup>11</sup> [ \<](regex.md) |
| Stringhe e dati di tipo carattere | <sup></sup> [ cctype\<>](cctype.md), [ cstdlib>,CString>,cuchar>11,cwchar>,cwctype\<](cstdlib.md) [ \<](cstring.md) [ \<](cuchar.md) [ \<](cwchar.md) [ \< >](cwctype.md) [ ,\<Regex >](regex.md)<sup>11</sup>, [ \<String >](string.md), [ \<string_view >](string-view.md)<sup>17</sup> |
| Time | Chrono ><sup>11</sup>, [ CTime\<>](ctime.md) [ \<](chrono.md) |

<sup>11</sup> aggiunti nello standard c++ 11. \
<sup>14</sup> aggiunti nello standard c++ 14. \
<sup>17</sup> aggiunto nello standard c++ 17. \
<sup>20</sup> aggiunti nello standard bozza c++ 20. \
<sup>deprecato</sup> nello standard c++ 17. \
<sup>b</sup> rimosso nello standard bozza c++ 20. \
<sup>c</sup> deprecato nello standard c++ 98.

::: moniker-end

::: moniker range="vs-2015"

|Category|Intestazioni|
|-|-|
|[Algoritmi](../cpp/algorithms-modern-cpp.md)|[\<algorithm>](algorithm.md)|
|Wrapper della libreria C|[\<cassert>](cassert.md), [\<cctype>](cctype.md), [\<cerrno>](cerrno.md), [\<cfenv>](cfenv.md), [\<cfloat>](cfloat.md), [\<cinttypes>](cinttypes.md), [\<ciso646>](ciso646.md), [\<climits>](climits.md), [\<clocale>](clocale.md), [\<cmath>](cmath.md), [\<csetjmp>](csetjmp.md), [\<csignal>](csignal.md), [\<cstdarg>](cstdarg.md), [\<cstdbool>](cstdbool.md), [\<cstddef>](cstddef.md), [\<cstdint>](cstdint.md), [\<cstdio>](cstdio.md), [\<cstdlib>](cstdlib.md), [\<cstring>](cstring.md), [\<ctgmath>](ctgmath.md), [\<ctime>](ctime.md), [\<cwchar>](cwchar.md), [\<cwctype>](cwctype.md)|
|[Contenitori](../cpp/containers-modern-cpp.md)||
|Contenitori sequenza|[ array\<>](array.md), [ deque>,forward_list>,list>,Vector>\<](deque.md) [ \<](forward-list.md) [ \<](list.md) [ \<](vector.md)|
|Contenitori associativi ordinati| [\<map>](map.md), [\<set>](set.md)|
|Contenitori associativi non ordinati|> unordered_map, [ \<](unordered-map.md) [ unordered_set>\<](unordered-set.md)|
|Contenitori di adattatori|[\<queue>](queue.md), [\<stack>](stack.md)|
|[Errori e gestione delle eccezioni](../cpp/errors-and-exception-handling-modern-cpp.md)|eccezione > [, STDEXCEPT>\<](stdexcept.md), [ system_error\<>](system-error.md) [ \<](exception.md)|
|[I/O e formattazione](../cpp/string-and-i-o-formatting-modern-cpp.md)|[\<filesystem>](filesystem.md), [\<fstream>](fstream.md), [\<iomanip>](iomanip.md), [\<ios>](ios.md), [\<iosfwd>](iosfwd.md), [\<iostream>](iostream.md), [\<istream>](istream.md), [\<ostream>](ostream.md), [\<sstream>](sstream.md), [\<streambuf>](streambuf.md), [\<strstream>](strstream.md)|
|Iterators|[\<iterator>](iterator.md)|
|Localizzazione|[\<codecvt>](codecvt.md), [\<cvt/wbuffer>](cvt-wbuffer.md), [\<cvt/wstring>](cvt-wstring.md), [\<locale>](locale.md)|
|Matematica e numerici|[\<complex>](complex.md), [\<limits>](limits.md), [\<numeric>](numeric.md), [\<random>](random.md), [\<ratio>](ratio.md), [\<valarray>](valarray.md)|
|[Gestione della memoria](../cpp/smart-pointers-modern-cpp.md)|allocatori >, [ \<Memory >](memory.md), [ \<New >](new.md), [ \<scoped_allocator >](scoped-allocator.md) [ \<](allocators-header.md)|
|Multithreading|[ Atomic\<>](atomic.md), [ condition_variable>,future>,mutex>,shared_mutex>,thread\<](condition-variable.md) [ \<](future.md) [ \<](mutex.md) [ \<](shared-mutex.md) [ \< >](thread.md)|
|Altre utilità|[ >\<bits](bitset.md), [ >\<Chrono](chrono.md) [, >\<funzionale](functional.md) [, >\<initializer_list](initializer-list.md), [ Tuple>,type_traits\<](tuple.md) [ \< >](type-traits.md) [ ,\<TypeInfo >](typeinfo.md), [ \<> typeindex](typeindex.md), [ \<> utilità](utility.md)|
|Stringhe e dati di tipo carattere|[\<regex>](regex.md), [\<string>](string.md), [\<string_view>](string-view.md)

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Utilizzo C++ delle intestazioni della libreria](using-cpp-library-headers.md)\
[C++libreria standard](cpp-standard-library-reference.md)
