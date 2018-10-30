---
title: Conformità al linguaggio Visual C++ | Microsoft Docs
ms.date: 11/15/2017
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 475da6e9-0d78-4b4e-bd23-f41c406c4efe
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dd4848ae88d7bd66286ef13b3505a741d9b55c5c
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50060885"
---
# <a name="visual-c-language-conformance"></a>Conformità al linguaggio Visual C++

Questo argomento riepiloga la conformità agli standard di linguaggio ISO C++03, C++11, C++14, C++17 e bozza C++20 delle funzionalità del compilatore e delle funzionalità della libreria standard per il compilatore C++ in Visual Studio 2017 e versioni precedenti. Ogni nome di compilatore e di funzionalità della libreria standard è collegato al documento di proposta dello standard ISO C++ che descrive la funzionalità, se disponibile al momento della pubblicazione. La colonna Supportato elenca la prima versione di Visual Studio in cui è apparso il supporto della funzionalità.

Per informazioni sui miglioramenti della conformità e su altre modifiche in Visual Studio 2017, vedere [Miglioramenti della conformità di C++ in Visual Studio 2017](cpp-conformance-improvements-2017.md) e [Novità di Visual C++ in Visual Studio 2017](what-s-new-for-visual-cpp-in-visual-studio.md). Per le modifiche della conformità nelle versioni precedenti, vedere [Cronologia delle modifiche di Visual C++](porting/visual-cpp-change-history-2003-2015.md) e [Visual C++: novità dalla versione 2003 alla 2015](porting/visual-cpp-what-s-new-2003-through-2015.md). Per notizie aggiornate dal team di C++, visitare il [blog del team di Visual C++](https://blogs.msdn.microsoft.com/vcblog/).

> [!NOTE]
> Non sono state apportate modifiche binarie di rilevo tra Visual Studio 2015 e Visual Studio 2017.

## <a name="compiler-features"></a>Funzionalità del compilatore

|Area funzionalità| |
|----|---|
|__Funzionalità del linguaggio di base C++03/11__|__Supportato__|
|&nbsp;&nbsp;Tutti gli altri elementi|VS 2015 <sup>[A](#note_A)</sup>|
|&nbsp;&nbsp;Ricerca del nome in due fasi|VS 2017 15.7 <sup>[B](#note_B)</sup>|
|&nbsp;&nbsp;[N2634 Espressione SFINAE](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2634.html)|VS 2017 15.7|
|&nbsp;&nbsp;[N1653 Preprocessore C99](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2004/n1653.htm)|Parziale <sup>[D](#note_D)</sup>|
|&nbsp;&nbsp;[N1988 Tipi integer estesi](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n1988.pdf)|N/D <sup>[E](#note_E)</sup>|
|__Funzionalità del linguaggio di base C++14__|__Supportato__|
|&nbsp;&nbsp;[N3323 Formulazione perfezionata per le conversioni contestuali](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3323.pdf)|Visual Studio 2013|
|&nbsp;&nbsp;[N3472 Valori letterali binari](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2012/n3472.pdf)|VS 2015|
|&nbsp;&nbsp;[N3638 Tipi restituiti auto e decltype(auto)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3638.html)|VS 2015|
|&nbsp;&nbsp;[N3648 init-captures](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3648.html)|VS 2015|
|&nbsp;&nbsp;[N3649 Espressioni lambda generiche](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3649.html)|VS 2015|
|&nbsp;&nbsp;[N3760 Attributi [[deprecated]]](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3760.html)|VS 2015|
|&nbsp;&nbsp;[N3778 Deallocazione dimensionata](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3778.html)|VS 2015|
|&nbsp;&nbsp;[N3781 Separatori di cifre](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3781.pdf)|VS 2015|
|&nbsp;&nbsp;[N3651 Modelli di variabile](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3651.pdf)|VS 2015.2|
|&nbsp;&nbsp;[N3652 constexpr esteso](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3652.html)|VS 2017|
|&nbsp;&nbsp;[N3653 NSDMI per le aggregazioni](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3653.html)|VS 2017|
|&nbsp;&nbsp;[N3664 Possibilità di evitare/fondere allocazioni](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3664.html)|N/D <sup>[F](#note_F)</sup>|
|__Funzionalità del linguaggio di base C++17__|__Supportato__|
|&nbsp;&nbsp;[N4086 Rimozione di trigrammi](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4086.html)|VS 2010 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[N3922 Nuove regole per l'automazione con braced-init-list](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3922.html)|VS 2015 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[N4051 typename in parametri di modello](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4051.html)|VS 2015 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[N4266 Attributi per spazi dei nomi ed enumeratori](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4266.html)|VS 2015 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[N4267 Valori letterali carattere u8](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4267.html)|VS 2015 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[N4230 Definizioni di spazi dei nomi annidati](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4230.html)|VS 2015.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[N3928 static_assert concisa](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3928.pdf)|VS 2017 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0184R0 Cicli for basati su intervallo generalizzati](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0184r0.html)|VS 2017 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0188R1 Attributo [[fallthrough]]](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0188r1.pdf)|VS 2017 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0001R1 Rimozione della parola chiave register](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0001r1.html)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0002R1 Rimozione di operator++ per bool](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0002r1.html)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0018R3 Acquisizione *this per valore](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0018r3.html)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0028R4 Uso attributo namespaces senza ripetizione](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0028r4.html)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0061R1 __has_include](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0061r1.html)|VS 2017 15.3 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0138R2 direct-list-init delle enumerazioni fisse da numeri interi](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0138r2.pdf)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0170R1 Espressioni lambda constexpr](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0170r1.pdf)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0189R1 Attributo [[nodiscard]]](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0189r1.pdf)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0212R1 Attributo [[maybe_unused]]](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0212r1.pdf)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0217R3 Associazioni strutturate](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0217r3.html)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0292R2 Istruzioni if di constexpr](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0292r2.html)|VS 2017 15.3 <sup>[G](#note_G)</sup>|
|&nbsp;&nbsp;[P0305R1 Istruzioni di selezione con inizializzatori](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0305r1.html)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0245R1 Valori letterali hexfloat](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0245r1.html)|VS 2017 15.5 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[N4268 Possibilità di consentire più argomenti di modello non di tipo](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4268.html)|VS 2017 15.5 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[N4295 Espressioni di riduzione](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4295.html)|VS 2017 15.5 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0003R5 Rimozione di specifiche di eccezione dinamiche](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0003r5.html)|VS 2017 15.5 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0012R1 Aggiunta di noexcept al sistema di tipi](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0012r1.html)|VS 2017 15.5 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0035R4 Allocazione di memoria dinamica con ulteriore allineamento](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0035r4.html)|VS 2017 15.5 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0386R2 Variabili inline](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0386r2.pdf)|VS 2017 15.5 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0522R0 Corrispondenza tra parametri di modello e argomenti compatibili](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0522r0.html)|VS 2017 15.5 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0036R0 Rimozione di alcune riduzioni unarie](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0036r0.pdf)|VS 2017 15.5 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[N4261 Correzione delle conversioni di qualificazione](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4261.html)|VS 2017 15.7  <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0017R1 Inizializzazione aggregata estesa](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0017r1.html)|VS 2017 15.7  <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[ P0091R3 Deduzione dell'argomento del modello per modelli di classe](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0091r3.html)<br />&nbsp;&nbsp;[ P0512R0 Problemi di deduzione dell'argomento del modello di classe](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0512r0.pdf)|VS 2017 15.7 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0127R2 Dichiarazione di parametri di modello non di tipo con auto](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0127r2.html)|VS 2017 15.7 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0135R1 Elisione copia garantita](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0135r1.html)|VS 2017 15.6<sup>[H](#note_H)</sup>|
|&nbsp;&nbsp;[P0136R1 Ridefinizione ereditarietà dei costruttori](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0136r1.html)|VS 2017 15.7 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0137R1 std::launder](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0137r1.html)|VS 2017 15.7 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0145R3 Ridefinizione ordine di valutazione di espressioni](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0145r3.pdf)<br />&nbsp;&nbsp;[P0400R0 Ordine di valutazione degli argomenti della funzione](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0400r0.html)|VS 2017 15.7 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0195R2 Espansioni pack nelle dichiarazioni using](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0195r2.html)|VS 2017 15.7 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0283R2 Attributi non riconosciuti ignorati](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0283r2.html)|VS 2015 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0702R1 Correzione della deduzione di argomenti del modello di classe per i costruttori di elenchi di inizializzatori](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0702r1.html)|VS 2017 15.7 <sup>[17](#note_17)</sup>|

|Area funzionalità| |
|----|---|
|__Funzionalità del linguaggio di base ++17 (report sui difetti)__|__Supportato__|
|&nbsp;&nbsp;[P0702R1 Correzione della deduzione di argomenti del modello di classe per i costruttori di elenchi di inizializzatori](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0702r1.html)|VS 2017 15.7 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0588R1: semplificare l'acquisizione implicita delle espressioni lambda](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0588r1.html)|No|
|&nbsp;&nbsp;[CWG 1581: quando definire le funzioni membro constexpr](https://wg21.cmeerw.net/cwg/issue1581)|No|
|&nbsp;&nbsp;[P0962R1: rilasciare regole di individuazione del punto di personalizzazione per binding strutturati](http://open-std.org/JTC1/SC22/WG21/docs/papers/2018/p0961r1.html)|No|
|&nbsp;&nbsp;[P0962R2: rilasciare regole di individuazione del punto di personalizzazione per cicli range-for:](http://open-std.org/JTC1/SC22/WG21/docs/papers/2018/p0962r1.html)|No|
|&nbsp;&nbsp;[P0969R0: consentire binding strutturati a membri accessibili](http://open-std.org/JTC1/SC22/WG21/docs/papers/2018/p0969r0.pdf)|No|

|Area funzionalità| |
|----|---|
|__Funzionalità del linguaggio di base C++20__|__Supportato__|
|&nbsp;&nbsp;[P0306R4 Aggiunta di &#95;&#95;VA_OPT&#95;&#95; per omissione della virgola ed eliminazione della virgola](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0306r4.pdf)|No|
|&nbsp;&nbsp;[P0329R4 Inizializzazione designata](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0329r4.pdf)|No|
|&nbsp;&nbsp;[P0409R2 Acquisizione lambda consentita [=, this]](http://open-std.org/JTC1/SC22/WG21/docs/papers/2017/p0409r2.html)|No|
|&nbsp;&nbsp;[P0428R2 Sintassi modello familiare per espressioni lambda generiche](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0428r2.pdf)|No|
|&nbsp;&nbsp;[P0683R1 Inizializzatori del membro predefinito per campi bit](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0683r1.html)|No|
|&nbsp;&nbsp;[P0704R1 Correzione lvalue const per puntatori a membri con qualificatore ref](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0704r1.html)|No|
|&nbsp;&nbsp;[P0734R0 Concetti](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0734r0.pdf)|No|

## <a name="standard-library-features"></a>Funzionalità della libreria standard

|Area funzionalità| |
|---|---|
|__Funzionalità della libreria standard C++20__|__Supportato__|
|&nbsp;&nbsp; [P0777R1: evitare il decadimento non necessario](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0777r1.pdf)|VS 2017 15.7 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0463R1 endian](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0463r1.html)|No|
|&nbsp;&nbsp;[P0674R1 make_shared() per le matrici](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0674r1.html)|No|
|&nbsp;&nbsp;[P0858R0: requisiti di iteratore Constexpr](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0858r0.html)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0809R0: confrontare contenitori non ordinati](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0809r0.pdf)| VS 2010 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp; [P0020R3 atomic\<float>, atomic\<double>, atomic\<long double>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0020r6.html)|No|
|&nbsp;&nbsp; [P0053R7 \<syncstream>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0053r7.pdf)<br />&nbsp;&nbsp; [P0753R2: modifiche osyncstream](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0753r2.pdf)|No|
|&nbsp;&nbsp; [P0122R7 \<span>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0122r7.pdf)|No|
|&nbsp;&nbsp; [P0202R3 constexpr per \<algorithm> e exchange()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0202r3.html)|No|
|&nbsp;&nbsp; [P0355R7 \<chrono> per calendari e fusi orario](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0355r7.html)|No|
|&nbsp;&nbsp; [P0415R1 constexpr per \<complex> (ripetizione)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0415r1.html)|No|
|&nbsp;&nbsp; [P0439R0 enum class memory_order](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0439r0.html)|No|
|&nbsp;&nbsp; [P0457R2 starts_with()/ends_with() per basic_string/basic_string_view](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0457r2.html)|No|
|&nbsp;&nbsp; [P0550R2 remove_cvref](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0550r2.pdf)|No|
|&nbsp;&nbsp; [P0551R3: modelli di funzione Thou Shalt Not Specialize std!](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0551r3.pdf)|No|
|&nbsp;&nbsp; [P0600R1 \[\[nodiscard\]\] per STL, parte 1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0600r1.pdf)|No|
|&nbsp;&nbsp; [P0616R0: usare move() in \<numeric>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0616r0.pdf)|No|
|&nbsp;&nbsp; [P0653R2 to_address()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0653r2.html)|No|
|&nbsp;&nbsp; [P0718R2 atomic\<shared_ptr\<T>>, atomic\<weak_ptr\<T>>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0718r2.html)|No|
|&nbsp;&nbsp; [P0754R2 \<version>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0754r2.pdf)|No|
|&nbsp;&nbsp; [P0767R1: deprecare is_pod](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0767r1.html)|No|
|&nbsp;&nbsp; [P0768R1: supporto libreria per l'operatore di confronto Spaceship \<=>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0768r1.pdf)|No|
|&nbsp;&nbsp; [P0966R1: non ridurre string::reserve()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2018/p0966r1.html)|No|
|__Funzionalità della libreria standard C++17__|__Supportato__|
|&nbsp;&nbsp;[P0433R2 Integrazione della deduzione del modello per i modelli di classe nella libreria standard](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0433r2.html)<br />&nbsp;&nbsp;[P0739R0 Miglioramento dell'integrazione della deduzione degli argomenti dei modelli di classe nella libreria standard](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0739r0.html)|VS 2017 15.7|
|&nbsp;&nbsp;[P0426R1 Constexpr per char_traits](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0426r1.html)|VS 2017 15.7|
|&nbsp;&nbsp;[P0030R1 hypot (x, y, z)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0030r1.pdf)|VS 2017 15.7|
|&nbsp;&nbsp;[P0220R1 Library Fundamentals V1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0220r1.html)|VS 2017 15.6 <sup>[J](#note_J)</sup>|
|&nbsp;&nbsp;[P0067R5 Conversioni di stringhe elementari](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0067r5.html)|VS 2017 15.7 <sup>[charconv](#note_charconv)</sup>|
|&nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: \<memory_resource >](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#memory.resource.synop)<br />&nbsp;&nbsp;[P0337R0 Eliminazione assegnazione di polymorphic_allocator](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0337r0.html)|VS 2017 15.6|
|&nbsp;&nbsp;[P0024R2 Algoritmi paralleli](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0024r2.html)<br />&nbsp;&nbsp;[P0336R1 Ridenominazione dei criteri di esecuzione parallela](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0336r1.pdf)<br />&nbsp;&nbsp;[P0394R4 Algoritmi paralleli devono avere terminate() per le eccezioni](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0394r4.html)<br />&nbsp;&nbsp;[P0452R1 Unificazione degli algoritmi paralleli \<numeric>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0452r1.html)|VS 2017 15.7|
|&nbsp;&nbsp;[P0226R1 Funzioni matematiche speciali](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0226r1.pdf)|VS 2017 15.7|
|&nbsp;&nbsp;[P0218R1 \<filesystem >](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0218r1.html)<br />&nbsp;&nbsp;[P0219R1 Percorsi relativi per file system](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0219r1.html)<br />&nbsp;&nbsp;[P0317R1 Memorizzazione nella cache della voce di directory per file sytem](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p03179r1.html)<br />&nbsp;&nbsp;[P0392R0 Supporto string_view nei percorsi del file system](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0392r0.pdf)<br />&nbsp;&nbsp;[P0430R2 Supporto di file system diversi da POSIX](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0430r2.pdf)<br />&nbsp;&nbsp;[P0492R2 Risoluzione dei commenti NB per file system](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0492r2.html)|VS 2017 15.7 <sup>[K](#note_K)</sup>|
|&nbsp;&nbsp;[P0003R5 Rimozione specifiche di eccezione dinamiche](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0003r5.html)|VS 2017 15.5 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0005R4 not_fn()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0005r4.html)<br />&nbsp;&nbsp;[P0358R1 Correzioni per not_fn()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0358r1.html)|VS 2017 15.5 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0033R1 Ridefinizione di enable_shared_from_this](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0033r1.html)|VS 2017 15.5 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0083R3 Splicing mappe e set](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0083r3.pdf)<br />&nbsp;&nbsp;[P0508R0 Chiarimento di insert_return_type](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0508r0.html)|VS 2017 15.5 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0174R2 Deprecazione di parti superflue della libreria](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0174r2.html)|VS 2017 15.5 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0302R1 Rimozione supporto allocatore in std::function](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0302r1.html)|VS 2017 15.5 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0414R2 shared_ptr\<T[]>, shared_ptr\<T[N]>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0414r2.html)<br />&nbsp;&nbsp;[P0497R0 Correzione shared_ptr per matrici](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0497r0.html)|VS 2017 15.5 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0521R0 Deprecazione di shared_ptr::unique()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0521r0.html)|VS 2017 15.5 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0607R0 Variabili inline per la libreria standard](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0607r0.html)|VS 2017 15.5 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0618R0 Deprecazione di \<codecvt>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0618r0.html)|VS 2017 15.5 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: ricerca di Boyer-Moore()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#func.searchers.boyer_moore)<br/>&nbsp;&nbsp;[P0253R1 Correzione dei tipi restituiti dal servizio di ricerca](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0253r1.pdf)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0031R0 constexpr per \<array> (nuovamente) e \<iterator>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0031r0.html)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0040R3 Estensione degli strumenti di gestione della memoria](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0040r3.html)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0084R2 Tipo restituito emplace](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0084r2.pdf)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0152R1 atomic::is_always_lock_free](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0152r1.html)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0154R1 hardware_destructive_interference_size e altre](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0154r1.html)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0156R2 Ridenominazione della funzione variadic lock\_guard come scoped\_lock](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0156r2.html)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0258R2 has_unique_object_representations](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0258r2.html)|VS 2017 15.3 <sup>[L](#note_L)</sup>|
|&nbsp;&nbsp;[P0295R0 gcd(), lcm()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0295r0.pdf)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0298R3 std::byte](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0298r3.pdf)|VS 2017 15.3 <sup>[17](#note_17), [byte](#note_byte)</sup>|
|&nbsp;&nbsp;[P0403R1 UDL per \<string_view> ("meow"sv e così via)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0403r1.html)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0418R2 Requisiti per atomic compare_exchange memory_order](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0418r2.html)|VS 2017 15.3 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0435R1 Revisione di common_type](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0435r1.pdf)<br />&nbsp;&nbsp;[P0548R1 Adattamento di common\_type e duration](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0548r1.pdf)|VS 2017 15.3 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0505R0 constexpr per \<chrono > (nuovamente)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0505r0.html)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[P0513R0 Hash di poisoning](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0513r0.pdf)<br />&nbsp;&nbsp;[P0599R1 Hash noexcept](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0599r1.pdf)|VS 2017 15.3 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0516R0 Contrassegno copia di shared_future come noexcept](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0516r0.html)|VS 2017 15.3 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0517R0 Costruzione di future_error da future_errc](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0517r0.html)|VS 2017 15.3 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0558R1 Risoluzione delle incoerenze della classe di base con nome atomic<T>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0558r1.pdf)|VS 2017 15.3 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0604R0 Modifica di is\_callable/result\_of in invoke\_result, is\_invocable, is\_nothrow\_invocable](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0604r0.html)|VS 2017 15.3 <sup>[17](#note_17)</sup>|
|&nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: \<algorithm> sample()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#alg.random.sample)|VS 2017|
|&nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: \<any>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#any)|VS 2017|
|&nbsp;&nbsp;[N4562 Nozioni fondamentali della libreria: \<optional>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4562.html#optional)|VS 2017 |
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
|&nbsp;&nbsp;[N4387 Ottimizzazione di pair e tuple](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4387.html)|VS 2015.2 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[N4508 shared_mutex (non temporizzata)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4508.html)|VS 2015.2 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0004R1 Rimozione di alias iostream deprecati](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0004r1.html)|VS 2015.2 <sup>[rem](#note_rem)</sup>|
|&nbsp;&nbsp;[P0006R0 Modelli di variabile per tratti di tipo (is_same_v e altri)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0006r0.html)|VS 2015.2 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0007R1 as_const()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0007r1.html)|VS 2015.2 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0013R1 Tratti di tipo operatore logico (conjunction e altri)](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0013r1.html)|VS 2015.2 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0074R0 owner_less\<>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0074r0.html)|VS 2015.2 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0092R1 \<chrono> floor(), ceil(), round(), abs()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0092r1.html)|VS 2015.2 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0156R0 Variadic lock_guard](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/p0156r0.html)|VS 2015.2 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[N3911 void_t](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n3911.pdf)|VS 2015 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[N4089 Conversioni sicure in unique_ptr\<T[]>](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4089.pdf)|VS 2015 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[N4169 invoke()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4169.html)|VS 2015 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[N4190 Rimozione auto_ptr, random_shuffle() ed elementi \<functional> precedenti](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4190.htm)|VS 2015 <sup>[rem](#note_rem)</sup>|
|&nbsp;&nbsp;[N4258 Pulizia noexcept](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4258.pdf)|VS 2015 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[N4259 uncaught_exceptions()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4259.pdf)|VS 2015 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[N4277 reference_wrapper facilmente copiabile](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4277.html)|VS 2015 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[N4279 insert_or_assign()/try_emplace() per map/unordered_map](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4279.html)|VS 2015 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[N4280 size(), empty(), data()](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4280.pdf)|VS 2015 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[N4366 Assegnazione unique_ptr vincolata con precisione](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4366.html)|VS 2015 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[N4389 bool_constant](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4389.html)|VS 2015 <sup>[14](#note_14)</sup>|
|&nbsp;&nbsp;[P0063R3 Libreria Standard C11](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0063r3.html)|VS 2015 <sup>[C11](#note_C11), [14](#note_14)</sup>|
|&nbsp;&nbsp;[N4510 Supporto tipi incompleti in vector/list/forward_list](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4510.html)|VS 2013 <sup>[14](#note_14)</sup>|
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

__No__ significa che la funzionalità non è ancora implementata.<br/>
__Parziale__ significa che l'implementazione in Visual Studio 2017 è incompleta. Per altre informazioni, vedere la sezione Note.<br/>
__N/D__ significa che i documenti della proposta non descrivono le funzionalità. Questi documenti hanno modificato il linguaggio dello standard, ma non hanno creato lavoro per gli implementatori. Sono riportati di seguito per motivi di completezza.<br/>
__VS 2010__ indica le funzionalità supportate in Visual Studio 2010.<br/>
__VS 2013__ indica le funzionalità supportate in Visual Studio 2013.<br/>
__VS 2015__ indica le funzionalità supportate in Visual Studio 2015 RTM.<br/>
__VS 2015.2__ e __VS 2015.3__ indicano le funzionalità supportate rispettivamente in Visual Studio 2015 Update 2 e Visual Studio 2015 Update 3.<br/>
__VS 2017__ indica le funzionalità supportate in Visual Studio 2017 RTM.<br/>
__VS 2017 15.3__ indica le funzionalità supportate in Visual Studio 2017 versione 15.3.<br/>
__VS 2017 15.5__ indica le funzionalità supportate in Visual Studio 2017 versione 15.5.<br/>
__VS 2017 15.7__ indica le funzionalità supportate in Visual Studio 2017 versione 15.7.<br/>

### <a name="notes"></a>Note

<a name="note_A"></a>__A__ Nella modalità /std:c++14 le specifiche di eccezione dinamiche non vengono implementate e throw() viene ancora considerato come sinonimo di \_\_declspec(nothrow). In C++17 le specifiche di eccezione dinamiche sono state per lo più rimosse da P0003R5. Vestige: throw() viene deprecato e si comporta come sinonimo di noexcept. Nella modalità /std:c + + 17 MSVC ora si conforma allo standard assegnando a throw() lo stesso comportamento di noexcept, vale a dire l'impostazione avviene tramite terminazione.

L'opzione del compilatore /Zc:noexceptTypes- richiede il comportamento precedente di \_\_declspec(nothrow). Throw() sarà probabilmente rimosso in C++20. Per agevolare la migrazione del codice in risposta a queste modifiche nello standard e nell'implementazione Microsoft, sono stati aggiunti nuovi avvisi del compilatore per problemi relativi alle specifiche di eccezione in **/std:c++17** e **/permissive-**.

<a name="note_B"></a>__B__ Supporto nella modalità /permissive- in Visual Studio 2017 versione 15.7. Vedere [Two-phase name lookup support comes to MSVC](https://blogs.msdn.microsoft.com/vcblog/2017/09/11/two-phase-name-lookup-support-comes-to-msvc/) (Nuovo supporto per la ricerca nome in due fasi in MSV) per altre informazioni.

<a name="note_C"></a>__C__ Il supporto del compilatore per l'espressione SFINAE è sufficiente per la libreria standard a partire da Visual Studio 2015 Update 2. È supportata in Visual Studio 2017 15.7 indipendentemente che la modalità whether /permissive sia impostata. Alcuni bug devono ancora essere corretti. La soluzione alternativa "tipo di tag univoco" non è più necessaria ed è stata rimossa dall'implementazione STL.

<a name="note_D"></a>__D__ Il supporto del compilatore per le regole del preprocessore C99 è incompleto in Visual Studio 2017. Le macro variadic sono supportate, ma sono presenti molti bug nel comportamento del preprocessore.  Il preprocessore è in fase di revisione. In via sperimentale, le modifiche saranno inserite presto nella modalità **/permissive-**.

<a name="note_E"></a>__E__ Contrassegnato come non applicabile perché i compilatori sono consentiti, ma non necessari, per supportare i tipi integer estesi.  Come GCC e Clang, Microsoft ha scelto di non supportarli.

<a name="note_F"></a>__F__ Analogamente, questo elemento è contrassegnato come non applicabile perché i compilatori sono consentiti, ma non richiesti, per implementare questa ottimizzazione.

<a name="note_G"></a>__G__ Supporto disponibile in [/std:c + + 14](./build/reference/std-specify-language-standard-version.md) con un messaggio di avviso che può essere rimosso.

<a name="note_J"></a>__J__ Le funzionalità che non sono state completate in Visual Studio 2015 sono descritte in dettaglio altrove in questa tabella.

<a name="note_K"></a>__K__ Si tratta di un'implementazione completamente nuova, non compatibile con la versione precedente std::experimental, che richiedeva supporto per symlink, correzioni di bug e modifiche nel comportamento richiesto dallo standard. Attualmente, con \<filesystem > sono inclusi il nuovo std::filesystem e il precedente std::experimental::filesystem. Con \<experimental/filesystem> è inclusa solo la precedente implementazione sperimentale. L'implementazione sperimentale sarà RIMOSSA nella prossima versione delle librerie con modifiche di rilievo per l'ABI.

<a name="note_L"></a>__L__ Funzionalità supportata da una funzione intrinseca del compilatore.

<a name="note_14"></a>__14__ Queste funzionalità C++ 17/20 sono sempre abilitate, anche quando si specifica [/std:c + + 14](build/reference/std-specify-language-standard-version.md) (impostazione predefinita). Il motivo è che la funzionalità è stata implementata prima dell'introduzione delle opzioni **/std** oppure a causa dell'imprevista complessità dell'implementazione condizionale.

<a name="note_17"></a>__17__ Queste funzionalità sono abilitate da [/std:c++17](./build/reference/std-specify-language-standard-version.md) (o dall'opzione del compilatore [/std:c++latest](./build/reference/std-specify-language-standard-version.md)).

<a name="note_byte"></a>__byte__ `std::byte` è abilitato da [/std:c++17](./build/reference/std-specify-language-standard-version.md) (o [/std:c++latest](./build/reference/std-specify-language-standard-version.md)), ma poiché è in conflitto con le intestazioni di Windows SDK in alcuni casi, dispone di una macro dettagliata per il rifiuto esplicito. Può essere disabilitato definendo `_HAS_STD_BYTE` come `0`.

<a name="note_C11"></a>__C11__ La libreria CRT universale ha implementato le parti della libreria standard C11 richieste da C++ 17, fatta eccezione per gli identificatori di conversione alternativa E/O `strftime()` C99, `fopen()` in modalità esclusiva C11 e `aligned_alloc()` C11. L'implementazione di quest'ultimo è improbabile, perché C11 specificava `aligned_alloc()` in un modo non compatibile con l'implementazione Microsoft di `free()`. In particolare `free()` deve essere in grado di gestire allocazioni notevolmente allineate.

<a name="note_rem"></a>__rem__ Funzionalità rimosse quando si specifica l'opzione del compilatore [/std:c++17](./build/reference/std-specify-language-standard-version.md) (o [/std:c++latest](./build/reference/std-specify-language-standard-version.md)). Per queste funzionalità sono disponibili macro per il rifiuto esplicito: `_HAS_AUTO_PTR_ETC`, `_HAS_FUNCTION_ALLOCATOR_SUPPORT`, `_HAS_OLD_IOSTREAMS_MEMBERS` e `_HAS_UNEXPECTED`.

<a name="note_charconv"></a>__charconv__  from_chars() e to_chars() sono disponibili per numeri interi. Attualmente si sta lavorando sul virgola mobile from_chars(), affinché sia seguito dal virgola mobile to_chars().

<a name ="note_parallel"></a> __parallel__  La libreria degli algoritmi paralleli di C++17 è completa. Ciò non significa tuttavia che vengono parallelizzati sempre tutti gli algoritmi. Sono stati parallelizzati gli algoritmi più importanti e le firme dei criteri di esecuzione sono disponibili anche quando gli algoritmi non sono parallelizzati. L'intestazione interna centrale dell'implementazione STL (yvals.h) contiene le "note sugli algoritmi paralleli" seguenti: C++ consente a un'implementazione di implementare gli algoritmi paralleli come chiamate agli algoritmi seriali.   Con questa implementazione è possibile eseguire la parallelizzazione di diverse chiamate di algoritmi comuni, ma non di tutti.

Vengono parallelizzati gli algoritmi seguenti:

- adjacent_difference, adjacent_find, all_of, any_of, count, count_if, equal, exclusive_scan, find, find_end, find_first_of, find_if, for_each, for_each_n, inclusive_scan, mismatch, none_of, reduce, remove, remove_if, search, search_n, sort, stable_sort, transform, transform_exclusive_scan, transform_inclusive_scan, transform_reduce.

Di seguito sono specificati gli algoritmi che attualmente non vengono parallelizzati:

- Non esiste un apparente miglioramento delle prestazioni del parallelismo su hardware di destinazione. Tutti gli algoritmi che semplicemente copiano o permutano gli elementi senza diramazioni evidenziano solitamente limiti in termini di larghezza di banda della memoria:
  - copy, copy_backward, copy_n, fill, fill_n, move, move_backward, remove, remove_if, replace, replace_if, reverse, reverse_copy, rotate, rotate_copy, swap_ranges
- Esiste confusione sui requisiti di parallelismo utente, probabilmente anche nella categoria precedente:
  - generate, generate_n
- Parallelismo efficace che si ritiene irrealizzabile:
  - partial_sort, partial_sort_copy
- Non ancora valutato. Il parallelismo potrà essere implementato in una versione futura e rivelarsi utile:
  - copy_if, includes, inplace_merge, is_heap, is_heap_until, is_partitioned, is_sorted, is_sorted_until, lexicographical_compare, max_element, merge, min_element, minmax_element, nth_element, partition_copy, remove_copy, remove_copy_if, replace_copy, replace_copy_if, set_difference, set_intersection, set_symmetric_difference, set_union, stable_partition, unique, unique_copy

## <a name="see-also"></a>Vedere anche

[Riferimenti al linguaggio C++](cpp/cpp-language-reference.md)<br/>
[Libreria standard C++](standard-library/cpp-standard-library-reference.md)<br/>
[Miglioramenti della conformità in Visual Studio 2017](cpp-conformance-improvements-2017.md)<br/>
[Novità di Visual C++ in Visual Studio 2017](what-s-new-for-visual-cpp-in-visual-studio.md)<br/>
[Cronologia delle modifiche di Visual C++ dal 2003 al 2015](porting/visual-cpp-change-history-2003-2015.md)<br/>
[Visual C++: novità dalla versione 2003 alla 2015](porting/visual-cpp-what-s-new-2003-through-2015.md)<br/>
[Blog del team di Visual C++](https://blogs.msdn.microsoft.com/vcblog/)
