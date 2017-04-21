---
title: "Conformità al linguaggio Visual C++ | Microsoft Docs"
ms.custom: 
ms.date: 3/1/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 475da6e9-0d78-4b4e-bd23-f41c406c4efe
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
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
translationtype: Human Translation
ms.sourcegitcommit: 705a5fd040b3cba1d3e8be1ac9e2a22ef1f98eb9
ms.openlocfilehash: 8e21a77e42a90571c73ff0f207f5d799ff722bd3
ms.lasthandoff: 04/05/2017

---
# <a name="visual-c-language-conformance"></a>Conformità al linguaggio Visual C++ 
Questo argomento riepiloga la conformità agli standard di linguaggio ISO C++03, C++11, C++14 e bozza C++17 delle funzionalità del compilatore e delle funzionalità della libreria standard (STL) per Visual C++ in Visual Studio 2017 e versioni precedenti. Ogni nome di compilatore e di funzionalità STL è collegato al documento dello standard ISO C++ che descrive la funzionalità, se disponibile al momento della pubblicazione. La colonna Supportato elenca la prima versione di Visual Studio in cui è apparso il supporto della funzionalità.  
  
Per informazioni sui miglioramenti della conformità e su altre modifiche in Visual Studio 2017, vedere [Miglioramenti della conformità di C++ in Visual Studio 2017](cpp-conformance-improvements-2017.md) e [Novità di Visual C++ in Visual Studio 2017](what-s-new-for-visual-cpp-in-visual-studio.md). Per le modifiche della conformità nelle versioni precedenti, vedere [Cronologia delle modifiche di Visual C++](porting/visual-cpp-change-history-2003-2015.md) e [Visual C++: novità dalla versione 2003 alla 2015](porting/visual-cpp-what-s-new-2003-through-2015.md). Per notizie aggiornate dal team di C++, visitare il [blog del team di Visual C++](http://blogs.msdn.microsoft.com/vcblog/).  

 > [!NOTE]
 > Non sono state apportate modifiche binarie di rilevo tra Visual Studio 2015 e Visual Studio 2017.
  
## <a name="compiler-features"></a>Funzionalità del compilatore  
  
|Area funzionalità| |  
|----|---|  
|__Funzionalità del linguaggio di base C++03/11__|__Supportato__|
|&nbsp;&nbsp;Tutti gli altri elementi|VS 2015 <sup>[1](#note_1)</sup>|
|&nbsp;&nbsp;Ricerca del nome in due fasi|No|
|&nbsp;&nbsp;[N2634 Espressione SFINAE](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2634.html)|Parziale <sup>[2](#note_2)</sup>|
|&nbsp;&nbsp;[N1653 Preprocessore C99](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2004/n1653.htm)|Parziale <sup>[3](#note_3)</sup>|
|&nbsp;&nbsp;[N1988 Tipi integer estesi](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n1988.pdf)|N/D <sup>[4](#note_4)</sup>|
|__Funzionalità del linguaggio di base C++14__|__Supportato__|
|&nbsp;&nbsp;[N3664 Possibilità di evitare/fondere allocazioni](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3664.html)|N/D <sup><sup>[5](#note_5)</sup></sup>|
|&nbsp;&nbsp;[N3323 Formulazione perfezionata per le conversioni contestuali](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3323.pdf)|Visual Studio 2013|
|&nbsp;&nbsp;[N3472 Valori letterali binari](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3472.pdf)|VS 2015|
|&nbsp;&nbsp;[N3638 Tipi restituiti auto e decltype(auto)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3638.html)|VS 2015|
|&nbsp;&nbsp;[N3648 init-captures](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3648.html)|VS 2015|
|&nbsp;&nbsp;[N3649 Espressioni lambda generiche](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3649.html)|VS 2015|
|&nbsp;&nbsp;[N3651 Modelli di variabile](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3651.pdf)|VS 2015.2|
|&nbsp;&nbsp;[N3652 constexpr esteso](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3652.html)|VS 2017|
|&nbsp;&nbsp;[N3653 NSDMI per le aggregazioni](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3653.html)|VS 2017|
|&nbsp;&nbsp;[N3760 Attributi [[deprecated]]](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3760.html)|VS 2015|
|&nbsp;&nbsp;[N3778 Deallocazione dimensionata](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3778.html)|VS 2015|
|&nbsp;&nbsp;[N3781 Separatori di cifre](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3781.pdf)|VS 2015|
|__Funzionalità del linguaggio di base C++17__|__Supportato__|
|&nbsp;&nbsp;[N3922 Nuove regole per l'automazione con braced-init-list](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3922.html)|VS 2015|
|&nbsp;&nbsp;[N3928 static_assert concisa](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3928.pdf)|VS 2017 [*](#note_star)|
|&nbsp;&nbsp;[N4051 typename in parametri di modello](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4051.html)|VS 2015|
|&nbsp;&nbsp;[N4086 Rimozione di trigrammi](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4086.html)|VS 2010|
|&nbsp;&nbsp;[N4230 Definizioni di spazi dei nomi annidati](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4230.html)|VS 2015.3 [*](#note_star)|
|&nbsp;&nbsp;[N4261 Correzione delle conversioni di qualificazione](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4261.html)|No|
|&nbsp;&nbsp;[N4266 Attributi per spazi dei nomi ed enumeratori](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4266.html)|VS 2015|
|&nbsp;&nbsp;[N4267 Valori letterali carattere u8](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4267.html)|VS 2015|
|&nbsp;&nbsp;[N4268 Possibilità di consentire più argomenti di modello non di tipo](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4268.html)|No|
|&nbsp;&nbsp;[N4295 Espressioni di riduzione](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4295.html)|No|
|&nbsp;&nbsp;[P0036R0 Rimozione di alcune riduzioni unarie](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0036r0.pdf)|No|
|&nbsp;&nbsp;[P0001R1 Rimozione della parola chiave register](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0001r1.html)|VS 2017.x [*](#note_star)|
|&nbsp;&nbsp;[P0002R1 Rimozione di operator++ per bool](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0002r1.html)|No|
|&nbsp;&nbsp;[P0012R1 Aggiunta di noexcept al sistema di tipi](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0012r1.html)|No|
|&nbsp;&nbsp;[P0017R1 Inizializzazione aggregata estesa](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0017r1.html)|No|
|&nbsp;&nbsp;[P0018R3 Acquisizione *this per valore](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0018r3.html)|VS 2017.x [*](#note_star)|
|&nbsp;&nbsp;[P0061R1 __has_include](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0061r1.html)|No|
|&nbsp;&nbsp;[P0136R1 Ridefinizione ereditarietà dei costruttori](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0136r1.html)|No|
|&nbsp;&nbsp;[P0138R2 direct-list-init delle enumerazioni fisse da numeri interi](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0138r2.pdf)|VS 2017.x [*](#note_star)|
|&nbsp;&nbsp;[P0170R1 Espressioni lambda constexpr](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0170r1.pdf)|No|
|&nbsp;&nbsp;[P0184R0 Cicli for basati su intervallo generalizzati](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0184r0.html)|VS 2017|
|&nbsp;&nbsp;[P0188R1 Attributo [[fallthrough]]](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0188r1.pdf)|VS 2017 [*](#note_star)|
|&nbsp;&nbsp;[P0189R1 Attributo [[nodiscard]]](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0189r1.pdf)|No|
|&nbsp;&nbsp;[P0212R1 Attributo [[maybe_unused]]](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0212r1.pdf)|VS 2017.x [*](#note_star)|
|&nbsp;&nbsp;[P0245R1 Valori letterali hexfloat](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0245r1.html)|No|
|&nbsp;&nbsp;[P0028R4 Uso attributo namespaces senza ripetizione](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0028r4.html)|No|
|&nbsp;&nbsp;[P0035R4 Allocazione di memoria dinamica con ulteriore allineamento](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0035r4.html)|No|
|&nbsp;&nbsp;[ P0091R3 Deduzione dell'argomento del modello per modelli di classe](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0091r3.html)|No|
|&nbsp;&nbsp;[P0127R2 Dichiarazione di parametri di modello non di tipo con auto](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0127r2.html)|No|
|&nbsp;&nbsp;[P0135R1 Elisione copia garantita](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0135r1.html)|No|
|&nbsp;&nbsp;[P0145R3 Ridefinizione ordine di valutazione di espressioni](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0145r3.pdf)|No|
|&nbsp;&nbsp;[P0217R3 Associazioni strutturate](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0217r3.html)|No|
|&nbsp;&nbsp;[P0283R2 Attributi non riconosciuti ignorati](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0283r2.html)|No|
|&nbsp;&nbsp;[P0292R2 Istruzioni if di constexpr](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0292r2.html)|No|
|&nbsp;&nbsp;[P0305R1 Istruzioni di selezione con inizializzatori](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0305r1.html)|No|
|&nbsp;&nbsp;[P0386R2 Variabili inline](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0386r2.pdf)|No|
|&nbsp;&nbsp;[P0522R0 Corrispondenza tra parametri di modello e argomenti compatibili](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0522r0.html)|No|
|&nbsp;&nbsp;[P0003R5 Rimozione di specifiche di eccezione dinamiche](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0003r5.html)|No|
|&nbsp;&nbsp;[P0195R2 Espansioni pack nelle dichiarazioni using](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0195r2.html)|No|

## <a name="standard-library--stl-features"></a>Funzionalità della libreria standard/STL

|Area funzionalità| |
|---|---|
|__Funzionalità della libreria standard C++17__|__Supportato__|
|&nbsp;&nbsp;P0433R2 Guide alla deduzione per STL|No|
|&nbsp;&nbsp;P0607R0 Variabili inline per STL (opzioni A e B2)|No|
|&nbsp;&nbsp;[P0258R2 has_unique_object_representations](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0258r2.html)|No|
|&nbsp;&nbsp;[P0426R1 Constexpr per char_traits](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0426r1.html)|No|
|&nbsp;&nbsp;P0604R0 Conversione di is\_callable/result\_of in is\_invocable/invoke\_result (opzioni A e B)|No|
|&nbsp;&nbsp;P0156R2 Ridenominazione della funzione variadic lock\_guard come scoped\_lock|No|
|&nbsp;&nbsp;P0558R1 Risoluzione delle incoerenze della classe di base con nome atomic<T>|No|
|&nbsp;&nbsp;P0298R3 std::byte|No|
|&nbsp;&nbsp;[P0063R3 Libreria Standard C11](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0063r3.html)|No|
|&nbsp;&nbsp;[P0030R1 hypot (x, y, z)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0030r1.pdf)|No|
|&nbsp;&nbsp;[P0435R1 Revisione di common_type](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0435r1.pdf)<br />&nbsp;&nbsp;P0548R1 Adattamento di common\_type e duration|No|
|&nbsp;&nbsp;[P0513R0 Hash di poisoning](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0513r0.pdf)<br />&nbsp;&nbsp;P0599R1 Hash noexcept|No|
|&nbsp;&nbsp;[P0033R1 Ridefinizione di enable_shared_from_this](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0033r1.html)|No|
|&nbsp;&nbsp;[P0220R1 Library Fundamentals V1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0220r1.html)|Parziale <sup>[6](#note_6)</sup>|
|&nbsp;&nbsp;[P0414R2 shared_ptr\<T[]>, shared_ptr\<T[N]>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0414r2.html)<br />&nbsp;&nbsp;[P0497R0 Correzione shared_ptr per matrici](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0497r0.html)|No|
|&nbsp;&nbsp;[P0084R2 Tipo restituito emplace](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0084r2.pdf)|No|
|&nbsp;&nbsp;[P0083R3 Splicing mappe e set](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0083r3.pdf)<br />&nbsp;&nbsp;[P0508R0 Chiarimento di insert_return_type](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0508r0.html)|No|
|&nbsp;&nbsp;[P0031R0 constexpr per \<array> (nuovamente) e \<iterator>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0031r0.html)|No|
|&nbsp;&nbsp;[P0505R0 constexpr per \<chrono > (nuovamente)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0505r0.html)|No|
|&nbsp;&nbsp;[P0005R4 not_fn()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0005r4.html)<br />&nbsp;&nbsp;[P0358R1 Correzioni per not_fn()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0358r1.html)|No|
|&nbsp;&nbsp;[P0295R0 gcd(), lcm()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0295r0.pdf)|No|
|&nbsp;&nbsp;[P0154R1 hardware_destructive_interference_size e altre](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0154r1.html)|No|
|&nbsp;&nbsp;[P0067R5 Conversioni di stringhe elementari](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0067r5.html)|No|
|&nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: ricerca di Boyer-Moore()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#func.searchers.boyer_moore)<br/>&nbsp;&nbsp;[P0253R1 Correzione dei tipi restituiti dal servizio di ricerca](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0253r1.pdf)|No|
|&nbsp;&nbsp;P0618R0 Deprecazione di \<codecvt>|No|
|&nbsp;&nbsp;[P0521R0 Deprecazione di shared_ptr::unique()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0521r0.html)|No|
|&nbsp;&nbsp;[P0174R2 Deprecazione di parti superflue della libreria](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0174r2.html)|No|
|&nbsp;&nbsp;[P0003R5 Rimozione specifiche di eccezione dinamiche](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0003r5.html)|No|
|&nbsp;&nbsp;[P0302R1 Rimozione supporto allocatore in std::function](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0302r1.html)|No|
|&nbsp;&nbsp;[P0040R3 Estensione degli strumenti di gestione della memoria](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0040r3.html)|No|
|&nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: \<memory_resource >](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#memory.resource.synop)<br />&nbsp;&nbsp;[P0337R0 Eliminazione assegnazione di polymorphic_allocator](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0337r0.html)|No|
|&nbsp;&nbsp;[P0024R2 Algoritmi paralleli](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0024r2.html)<br />&nbsp;&nbsp;[P0336R1 Ridenominazione dei criteri di esecuzione parallela](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0336r1.pdf)<br />&nbsp;&nbsp;[P0394R4 Algoritmi paralleli devono avere terminate() per le eccezioni](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0394r4.html)<br />&nbsp;&nbsp;P0452R1 Unificazione degli algoritmi paralleli \<numeric>|No|
|&nbsp;&nbsp;[P0226R1 Funzioni matematiche speciali](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0226r1.pdf)|No|
|&nbsp;&nbsp;[P0218R1 \<filesystem >](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0218r1.html)<br />&nbsp;&nbsp;[P0219R1 Percorsi relativi per file system](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0219r1.html)<br />&nbsp;&nbsp;[P0392R0 Supporto string_view nei percorsi del file system](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0392r0.pdf)<br />&nbsp;&nbsp;P0430R2 Supporto di file system diversi da POSIX<br />&nbsp;&nbsp;P0492R2 Risoluzione dei commenti NB per file system|No <sup>[7](#note_7)</sup>|
|&nbsp;&nbsp;[P0152R1 atomic::is_always_lock_free](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0152r1.html)|VS 2017.x|
|&nbsp;&nbsp;[P0403R1 UDL per \<string_view> ("meow"sv e così via)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0403r1.html)|VS 2017.x|
|&nbsp;&nbsp;[P0418R2 Requisiti per atomic compare_exchange memory_order](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0418r2.html)|VS 2017.x|
|&nbsp;&nbsp;[P0516R0 Contrassegno copia di shared_future come noexcept](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0516r0.html)|VS 2017.x|
|&nbsp;&nbsp;[P0517R0 Costruzione di future_error da future_errc](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0517r0.html)|VS 2017.x|
|&nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: \<algorithm> sample()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#alg.random.sample)|VS 2017|
|&nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: \<any>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#any)|VS 2017|
|&nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: \<optional>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#optional)|VS 2017|
|&nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: \<string_view>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#string.view)|VS 2017|
|&nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: \<tuple> apply()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#tuple)|VS 2017|
|&nbsp;&nbsp;[P0032R3 Interfaccia omogenea per variant/any/optional](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0032r3.pdf)|VS 2017|
|&nbsp;&nbsp;[P0077R2 is_callable, is_nothrow_callable](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0077r2.html)|VS 2017|
|&nbsp;&nbsp;[P0088R3 \<variant>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0088r3.html)|VS 2017|
|&nbsp;&nbsp;[P0163R0 shared_ptr::weak_type](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0163r0.html)|VS 2017|
|&nbsp;&nbsp;[P0209R2 make_from_tuple()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0209r2.pdf)|VS 2017|
|&nbsp;&nbsp;[P0254R2 Integrazione di string_view e std::string](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0254r2.pdf)|VS 2017|
|&nbsp;&nbsp;[P0307R2 Rendere nuovamente facoltativo maggiore o uguale](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0307r2.pdf)|VS 2017|
|&nbsp;&nbsp;[P0393R3 Rendere maggiore o uguale come variante](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0393r3.html)|VS 2017|
|&nbsp;&nbsp;[P0504R0 Revisione in_place_t/in_place_type_t\<T>/in_place_index_t\<I>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0504r0.html)|VS 2017|
|&nbsp;&nbsp;[P0510R0 Rifiuto delle varianti di niente, matrici, riferimenti e tipi incompleti](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0510r0.html)|VS 2017|
|&nbsp;&nbsp;[P0025R1 clamp()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0025r1.html)|VS 2015.3|
|&nbsp;&nbsp;[P0185R1 is_swappable, is_nothrow_swappable](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0185r1.html)|VS 2015.3|
|&nbsp;&nbsp;[P0272R1 basic_string::data() non-const](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0272r1.html)|VS 2015.3|
|&nbsp;&nbsp;[N4387 Ottimizzazione di pair e tuple](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4387.html)|VS 2015.2|
|&nbsp;&nbsp;[N4508 shared_mutex (non temporizzata)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4508.html)|VS 2015.2|
|&nbsp;&nbsp;[P0004R1 Rimozione di alias iostream deprecati](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0004r1.html)|VS 2015.2|
|&nbsp;&nbsp;[P0006R0 Modelli di variabile per tratti di tipo (is_same_v e altri)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0006r0.html)|VS 2015.2|
|&nbsp;&nbsp;[P0007R1 as_const()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0007r1.html)|VS 2015.2|
|&nbsp;&nbsp;[P0013R1 Tratti di tipo operatore logico (conjunction e altri)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0013r1.html)|VS 2015.2|
|&nbsp;&nbsp;[P0074R0 owner_less\<>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0074r0.html)|VS 2015.2|
|&nbsp;&nbsp;[P0092R1 \<chrono> floor(), ceil(), round(), abs()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0092r1.html)|VS 2015.2|
|&nbsp;&nbsp;[P0156R0 Variadic lock_guard](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0156r0.html)|VS 2015.2|
|&nbsp;&nbsp;[N3911 void_t](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3911.pdf)|VS 2015|
|&nbsp;&nbsp;[N4089 Conversioni sicure in unique_ptr\<T[]>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4089.pdf)|VS 2015|
|&nbsp;&nbsp;[N4169 invoke()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4169.html)|VS 2015|
|&nbsp;&nbsp;[N4190 Rimozione auto_ptr, random_shuffle() ed elementi \<functional> precedenti](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4190.htm)|VS 2015|
|&nbsp;&nbsp;[N4258 Pulizia noexcept](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4258.pdf)|VS 2015|
|&nbsp;&nbsp;[N4259 uncaught_exceptions()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4259.pdf)|VS 2015|
|&nbsp;&nbsp;[N4277 reference_wrapper facilmente copiabile](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4277.html)|VS 2015|
|&nbsp;&nbsp;[N4279 insert_or_assign()/try_emplace() per map/unordered_map](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4279.html)|VS 2015|
|&nbsp;&nbsp;[N4280 size(), empty(), data()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4280.pdf)|VS 2015|
|&nbsp;&nbsp;[N4366 Assegnazione unique_ptr vincolata con precisione](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4366.html)|VS 2015|
|&nbsp;&nbsp;[N4389 bool_constant](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4389.html)|VS 2015|
|&nbsp;&nbsp;[N4510 Supporto tipi incompleti in vector/list/forward_list](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4510.html)|Visual Studio 2013|
|&nbsp;&nbsp;[N4284 Iteratori contigui](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4284.html)|N/D|
|&nbsp;&nbsp;[P0175R1 Riepiloghi per la libreria C](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0175r1.html)|N/D|
|&nbsp;&nbsp;[P0180R2 Prenotazione di spazi dei nomi per la standardizzazione futura](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0180r2.html)|N/D|
|&nbsp;&nbsp;[P0346R1 A \<random> Ottimizzazione nomenclatura](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0346r1.pdf)|N/D|
|&nbsp;&nbsp;[P0371R1 Limitazione di memory_order_consume](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0371r1.html)|N/D|
|&nbsp;&nbsp;P0467R2 Obbligo di iteratori in avanti per gli algoritmi paralleli|N/D|
|&nbsp;&nbsp;[P0502R0 Algoritmi paralleli devono avere terminate() per le eccezioni, in genere](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0502r0.html)|N/D|
|&nbsp;&nbsp;[P0503R0 Correzione uso del tipo letterale della libreria](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0503r0.html)|N/D|
|&nbsp;&nbsp;[P0509R1 Aggiornamento limitazioni per la gestione delle eccezioni](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0509r1.pdf)|N/D|
|&nbsp;&nbsp;P0518R1 Copia in algoritmi paralleli di elementi facilmente costruibili tramite copia|N/D|
|&nbsp;&nbsp;P0523R1 Limitazione dei requisiti di complessità degli algoritmi paralleli (generale)|N/D|
|&nbsp;&nbsp;P0574R1 Limitazione dei requisiti di complessità degli algoritmi paralleli (specifico)|N/D|
|&nbsp;&nbsp;P0623R0 Correzioni finali degli algoritmi paralleli C++17|N/D|
|__Funzionalità della libreria standard C++14__|__Supportato__|
|&nbsp;&nbsp;[N3462 result_of adatto a SFINAE](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3462.html)|VS 2015.2|
|&nbsp;&nbsp;[N3302 constexpr per \<complex>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2011/n3302.html)|VS 2015|
|&nbsp;&nbsp;[N3469 constexpr per \<chrono>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3469.html)|VS 2015|
|&nbsp;&nbsp;[N3470 constexpr per \<array>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3470.html)|VS 2015|
|&nbsp;&nbsp;[N3471 constexpr per \<initializer_list>, \<tuple>, \<utility>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3471.html)|VS 2015|
|&nbsp;&nbsp;[N3545 integral_constant::operator()()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3545.pdf)|VS 2015|
|&nbsp;&nbsp;[N3642 UDL per \<chrono>, \<string> (1729ms, "meow"s e altri)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3642.pdf)|VS 2015|
|&nbsp;&nbsp;[N3644 Iteratori in avanti Null](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3644.pdf)|VS 2015|
|&nbsp;&nbsp;[N3654 quoted()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3654.html)|VS 2015|
|&nbsp;&nbsp;[N3657 Ricerca eterogenea di associativi](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3657.htm)|VS 2015|
|&nbsp;&nbsp;[N3658 integer_sequence](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3658.html)|VS 2015|
|&nbsp;&nbsp;[N3659 shared_mutex (temporizzata)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3659.html)|VS 2015|
|&nbsp;&nbsp;[N3668 exchange()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3668.html)|VS 2015|
|&nbsp;&nbsp;[N3669 Correzione funzioni membro constexpr senza const](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3669.pdf)|VS 2015|
|&nbsp;&nbsp;[N3670 get\<T>()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3670.html)|VS 2015|
|&nbsp;&nbsp;[N3671 equal(), is_permutation(), mismatch() a doppio intervallo](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3671.html)|VS 2015|
|&nbsp;&nbsp;[N3778 Deallocazione dimensionata](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3778.html)|VS 2015|
|&nbsp;&nbsp;[N3779 UDL per \<complex> (3.14i e altri)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3779.pdf)|VS 2015|
|&nbsp;&nbsp;[N3789 constexpr per \<functional>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3789.htm)|VS 2015|
|&nbsp;&nbsp;[N3887 tuple_element_t](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3887.pdf)|VS 2015|
|&nbsp;&nbsp;[N3891 Ridenominazione di shared_mutex (temporizzata) in shared_timed_mutex](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3891.htm)|VS 2015|
|&nbsp;&nbsp;[N3346 Requisiti minimi elemento contenitore](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3346.pdf)|Visual Studio 2013|
|&nbsp;&nbsp;[N3421 Funtori di operatori trasparenti (less\<> e altri)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3421.htm)|Visual Studio 2013|
|&nbsp;&nbsp;[N3655 Modelli di alias per \<type_traits> (decay_t e altri)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3655.pdf)|Visual Studio 2013|
|&nbsp;&nbsp;[N3656 make_unique()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3656.htm)|Visual Studio 2013|
|&nbsp;&nbsp;[N3924 Limitazione di rand()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3924.pdf)|N/D|  
  
Un gruppo di documenti elencati insieme indica che una funzionalità è stata votata per l'aggiunta allo standard e che in seguito sono stati votati anche uno o più documenti per il miglioramento o l'espansione della funzionalità stessa. Queste funzionalità vengono implementate insieme.  
  
### <a name="supported-values"></a>Valori supportati  
__No__ significa che la funzionalità non è ancora implementata.  
__Parziale__ significa che l'implementazione in Visual Studio 2017 è incompleta. Per altre informazioni, vedere la sezione Note.  
__N/D__ significa che i documenti della proposta non descrivono le funzionalità. Questi documenti hanno modificato il linguaggio dello standard, ma non hanno creato lavoro per gli implementatori. Sono riportati di seguito per motivi di completezza.  
__VS 2010__ indica le funzionalità supportate in Visual Studio 2010.  
__VS 2013__ indica le funzionalità supportate in Visual Studio 2013.  
__VS 2015__ indica le funzionalità supportate in Visual Studio 2015 RTM.  
__VS 2015.2__ e __VS 2015.3__ indicano le funzionalità supportate rispettivamente in Visual Studio 2015 Update 2 e Visual Studio 2015 Update 3.  
__VS 2017__ indica le funzionalità supportate in Visual Studio 2017 RTM.  
__Visual Studio 2017.x__ indica funzionalità le pianificate per un futuro aggiornamento di Visual Studio 2017.  
  
### <a name="notes"></a>Note  
<a name="note_1"></a>__1__ Ignora le specifiche di eccezione dinamiche di C++03, deprecate in C++11. L'implementazione delle specifiche non è prevista, nel frattempo verranno rimosse da un futuro standard C++.  
<a name="note_2"></a>__2__ Il supporto del compilatore per l'espressione SFINAE è stato sufficiente per la libreria standard a partire da Visual Studio 2015 Update 2, ma resta incompleto.  
<a name="note_3"></a>__3__ Il supporto del compilatore per le regole del preprocessore C99 è incompleto in Visual Studio 2017. Le macro variadic sono supportate, ma sono presenti molti bug nel comportamento del preprocessore.  
<a name="note_4"></a>__4__ Contrassegnato come non applicabile perché i compilatori sono consentiti, ma non obbligatori, per il supporto dei tipi Integer estesi.  Come GCC e Clang, Microsoft ha scelto di non supportarli.  
<a name="note_5"></a>__5__ Analogamente, questo elemento è contrassegnato come non applicabile perché i compilatori sono consentiti, ma non obbligatori, per implementare questa ottimizzazione.  
<a name="note_6"></a>__6__ Le funzionalità che non sono state completate in Visual Studio 2015 sono descritte in dettaglio altrove in questa tabella.  
<a name="note_7"></a>__7__ La specifica tecnica del file system è implementata sia in \<experimental/filesystem> che in \<filesystem> per motivi di cronologia, ma l'implementazione deve essere corretta prima di spostare il relativo spazio dei nomi. Finché questa operazione non viene completata, la funzionalità è contrassegnata come non ancora implementata.  
<a name="note_star"></a>__*__ Queste funzionalità sono protette dall'opzione [/std:c++latest](./build/reference/std-specify-language-standard-version.md) del compilatore.  
  
## <a name="see-also"></a>Vedere anche  
[Riferimenti al linguaggio C++](cpp/cpp-language-reference.md)  
[Libreria standard C++](standard-library/cpp-standard-library-reference.md)   
[Miglioramenti della conformità di C++ in Visual Studio 2017](cpp-conformance-improvements-2017.md)  
[Novità di Visual C++ in Visual Studio 2017](what-s-new-for-visual-cpp-in-visual-studio.md)  
[Cronologia delle modifiche di Visual C++ dal 2003 al 2015](porting/visual-cpp-change-history-2003-2015.md)  
[Visual C++: novità dalla versione 2003 alla 2015](porting/visual-cpp-what-s-new-2003-through-2015.md)  
[Blog del team di Visual C++](http://blogs.msdn.microsoft.com/vcblog/)  

