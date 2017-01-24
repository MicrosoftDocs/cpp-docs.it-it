---
title: "Supporto delle funzionalit&#224; C++11/14/17 (C++ moderno) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: dd2d5cbc-caf5-4a11-a057-8c365decba4e
caps.latest.revision: 59
caps.handback.revision: 56
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Supporto delle funzionalit&#224; C++11/14/17 (C++ moderno)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo descrive le funzionalità di C\+\+11\/14\/17 in Visual C\+\+.  
  
##  <a name="top"></a> Contenuto dell'articolo  
  
-   [Elenco delle funzionalità di C++11](#featurelist)  
  
    -   [Tabella delle funzionalità del linguaggio core C++11](#corelanguagetable)  
  
    -   [Tabella delle funzionalità del linguaggio core C++11: concorrenza](#concurrencytable)  
  
    -   [Funzionalità del linguaggio core C++11: C99](#c99table)  
  
-   [Funzionalità del linguaggio di base C++14](#cpp14table)  
  
-   [Funzionalità del linguaggio di base C++17 proposte](#cpp17table)  
  
-   [Guida alle tabelle delle funzionalità](#tableguide)  
  
    -   [Riferimenti rvalue](#rvref)  
  
    -   [Lambda](#lambdas)  
  
    -   [decltype](#decltype)  
  
    -   [Enumerazioni fortemente tipizzate/dichiarate con prototipo](#stronglytyped)  
  
    -   [Allineamento](#alignment)  
  
    -   [Tipi semplici e tipi layout standard](#standardlayout)  
  
    -   [Funzioni impostate come predefinite e funzioni eliminate](#defaultedanddeleted)  
  
    -   [override e finale](#overrideandfinal)  
  
    -   [Elementi atomici e altro](#atomics)  
  
    -   [__func__ e regole di preprocessore C99](#c99)  
  
-   [Funzionalità della libreria standard](#stl)  
  
##  <a name="featurelist"></a> Elenco delle funzionalità di C\+\+11  
 Visual C\+\+ implementa la maggior parte delle funzionalità della specifica del [linguaggio di base C\+\+11](http://go.microsoft.com/fwlink/p/?LinkID=235092), nonché molte delle funzionalità della libreria C\+\+14 e alcune funzionalità proposte per C\+\+17. La tabella seguente contiene l'elenco delle funzionalità del linguaggio di base C\+\+11\/14\/17 e il rispettivo stato di implementazione in Visual C\+\+ in Visual Studio 2010, [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)], [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)] e Visual Studio 2015.  
  
###  <a name="corelanguagetable"></a> Tabella delle funzionalità del linguaggio core C\+\+11  
  
|[Funzionalità del linguaggio di base C\+\+11](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2009/n2869.html)|Visual Studio 2010|Visual Studio 2012|[!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)]|Visual Studio 2015|  
|-----------------------------------------------------------------------------------------------------------------------|------------------------|------------------------|--------------------------------------------------------------|------------------------|  
|Riferimenti rvalue [v0.1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2004/n1610.html), [v1.0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n2118.html), [v2.0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2009/n2844.html), [v2.1](http://www.open-std.org/jtc1/sc22/wg21/docs/cwg_defects.html), [v3.0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2010/n3053.html)|v2.0|v2.1\*|v2.1\*|v3.0|  
|[ref\-qualifiers](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2439.htm)|No|No|No|Sì|  
|[Inizializzatori di membri dati non statici](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2756.htm)|No|No|[Sì](../cpp/uniform-initialization-and-delegating-constructors.md)|Sì|  
|Modelli variadic [v0.9](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2242.pdf), [v1.0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2555.pdf)|No|No|[Sì](../cpp/ellipses-and-variadic-templates.md)|Sì|  
|[Elenchi di inizializzatori](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2672.htm)|No|No|[Sì](../cpp/uniform-initialization-and-delegating-constructors.md)|Sì|  
|[static\_assert](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2004/n1720.html)|Sì|Sì|Sì|Sì|  
|auto [v0.9](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n1984.pdf), [v1.0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2546.htm)|v1.0|v1.0|v1.0|Sì|  
|[Tipi restituiti finali](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2541.htm)|Sì|Sì|Sì|Sì|  
|Espressioni lambda [v0.9](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2550.pdf), [v1.0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2658.pdf), [v1.1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2009/n2927.pdf)|v1.0|v1.1|v1.1|Sì|  
|decltype [v1.0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2343.pdf), [v1.1](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2011/n3276.pdf)|v1.0|v1.1\*\*|v1.1|Sì|  
|[Parentesi angolari di chiusura](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2005/n1757.html)|Sì|Sì|Sì|Sì|  
|[Argomenti di modello predefiniti per i modelli di funzione](http://www.open-std.org/jtc1/sc22/wg21/docs/cwg_defects.html)|No|No|Sì|Sì|  
|[Espressione SFINAE](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2634.html)|No|No|No|No|  
|[Modelli di alias](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2258.pdf)|No|No|[Sì](../cpp/aliases-and-typedefs-cpp.md)|Sì|  
|[Extern templates](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n1987.htm)|Sì|Sì|Sì|Sì|  
|[nullptr](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2431.pdf)|Sì|Sì|Sì|Sì|  
|[Enumerazioni fortemente tipizzate](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2347.pdf)|Partial|Sì|Sì|Sì|  
|[Enumerazioni dichiarate con prototipo](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2764.pdf)|No|Sì|Sì|Sì|  
|[Attributi](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2761.pdf)|No|No|No|Sì|  
|[constexpr](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2235.pdf)|No|No|No|Sì|  
|[Allineamento](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2341.pdf)|TR1|Partial|Partial|Sì|  
|[Delega dei costruttori](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n1986.pdf)|No|No|[Sì](../cpp/uniform-initialization-and-delegating-constructors.md)|Sì|  
|[Ereditarietà dei costruttori](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2540.htm)|No|No|No|Sì|  
|[Operatori di conversione espliciti](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2437.pdf)|No|No|Sì|Sì|  
|[char16\_t\/char32\_t](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2249.html)|No|No|No|Sì|  
|[Valori letterali stringa Unicode](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2442.htm)|No|No|No|Sì|  
|[Valori letterali stringa non elaborati](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2442.htm)|No|No|[Sì](../cpp/string-and-character-literals-cpp.md)|Sì|  
|[Nomi di caratteri universali in valori letterali](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2170.html)|No|No|No|Sì|  
|[Valori letterali definiti dall'utente](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2765.pdf)|No|No|No|Sì|  
|[Tipi semplici e tipi layout standard](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2342.htm)|No|Sì|Sì|Sì|  
|[Funzioni impostate come predefinite e funzioni eliminate](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2346.htm)|No|No|[Sì\*](../cpp/explicitly-defaulted-and-deleted-functions.md)|Sì|  
|[Dichiarazioni Friend estese](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2005/n1791.pdf)|Sì|Sì|Sì|Sì|  
|[Sizeof esteso](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2253.html)|No|No|No|Sì|  
|[Spazi dei nomi inline](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2535.htm)|No|No|No|Sì|  
|[Unioni senza restrizioni](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2544.pdf)|No|No|No|Sì|  
|[Tipi locali e senza nome come argomenti di modello](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2657.htm)|Sì|Sì|Sì|Sì|  
|[Ciclo for basato su intervallo](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2009/n2930.html)|No|Sì|Sì|Sì|  
|override e finale [v0.8](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2009/n2928.htm), [v0.9](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2010/n3206.htm), [v1.0](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2011/n3272.htm)|Partial|Sì|Sì|Sì|  
|[Supporto GC minimo](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2670.htm)|Sì|Sì|Sì|Sì|  
|[noexcept](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2010/n3050.html)|No|No|No|Sì|  
  
 \[[Contenuto dell'articolo](#top)\]  
  
###  <a name="concurrencytable"></a> Tabella delle funzionalità del linguaggio core C\+\+11: concorrenza  
  
|Funzionalità del linguaggio core C\+\+11: concorrenza|Visual Studio 2010|Visual Studio 2012|[!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)]|Visual Studio 2015|  
|-----------------------------------------------------------|------------------------|------------------------|--------------------------------------------------------------|------------------------|  
|[Punti di sequenza ripetuti](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2239.html)|N\/D|N\/D|N\/D|Sì|  
|[Elementi atomici](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2427.html)|No|Sì|Sì|Sì|  
|[Scambio e confronto efficaci](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2748.html)|No|Sì|Sì|Sì|  
|[Limiti bidirezionali](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2752.htm)|No|Sì|Sì|Sì|  
|[Modello di memoria](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2429.htm)|N\/D|N\/D|N\/D|Sì|  
|[Ordine di dipendenza dei dati](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2664.htm)|No|Sì|Sì|Sì|  
|[Ordine di dipendenza dei dati: annotazione di funzione](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2782.htm)|No|No|No|Sì|  
|[exception\_ptr](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2179.html)|Sì|Sì|Sì|Sì|  
|[quick\_exit](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2440.htm)|No|No|No|Sì|  
|[Elementi atomici nei gestori di segnale](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2547.htm)|No|No|No|No|  
|[Archiviazione locale di thread](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2659.htm)|Partial|Partial|Partial|Sì|  
|[Statistiche chiave](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2008/n2660.htm)|No|No|No|Sì|  
  
 \[[Contenuto dell'articolo](#top)\]  
  
###  <a name="c99table"></a> Funzionalità del linguaggio core C\+\+11: C99  
  
|Funzionalità del linguaggio core C\+\+11: C99|Visual Studio 2010|Visual Studio 2012|[!INCLUDE[vs_dev12](../atl-mfc-shared/includes/vs_dev12_md.md)]|Visual Studio 2015|  
|---------------------------------------------------|------------------------|------------------------|--------------------------------------------------------------|------------------------|  
|[\_\_func\_\_](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2007/n2340.htm)|Partial|Partial|Partial|Sì|  
|[Preprocessore C99](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2004/n1653.htm)|Partial|Partial|Partial|Partial|  
|[long long](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2005/n1811.pdf)|Sì|Sì|Sì|Sì|  
|[Tipi integer estesi](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n1988.pdf)|N\/D|N\/D|N\/D|N\/D|  
  
 \[[Contenuto dell'articolo](#top)\]  
  
###  <a name="cpp14table"></a> Funzionalità del linguaggio di base C\+\+14  
  
||||  
|-|-|-|  
|Funzionalità|Visual Studio 2013|Visual Studio 2015|  
|Formulazione perfezionata per le conversioni contestuali|Sì|Sì|  
|Valori letterali binari|No|Sì|  
|Tipi restituiti auto e decltype\(auto\)|No|Sì|  
|init\-captures|No|Sì|  
|Espressioni lambda generiche|No|Sì|  
|Modelli di variabile|No|No|  
|constexpr esteso|No|No|  
|NSDMI per le aggregazioni|No|No|  
|Possibilità di evitare\/fondere allocazioni|No|No|  
|Attributi \[\[deprecated\]\]|No|No|  
|Allocazione con dimensioni fisse|No|Sì|  
|Separatori di cifre|No|Sì|  
  
###  <a name="cpp17table"></a> Funzionalità del linguaggio di base C\+\+17 proposte  
  
||||  
|-|-|-|  
|Funzionalità|Visual Studio 2013|Visual Studio 2015|  
|Nuove regole per l'automazione con braced\-init\-list|No|No|  
|Asserzione statica concisa|No|No|  
|typename in parametri di modello|No|No|  
|Rimozione di trigrammi|Sì|Sì|  
|Definizioni di spazi dei nomi annidati|No|No|  
|N4259 std::uncaught\_exceptions\(\)|No|No|  
|N4261 Correzione delle conversioni di qualificazione|No|No|  
|N4266 Attributi per spazi dei nomi ed enumeratori|No|No|  
|N4267 Valori letterali carattere u8|No|No|  
|N4268 Possibilità di consentire più argomenti di modello non di tipo|No|No|  
|N4295 Espressioni di riduzione|No|No|  
|await\/resume|No|Sì|  
  
##  <a name="tableguide"></a> Guida alle tabelle delle funzionalità  
  
###  <a name="rvref"></a> Riferimenti rvalue  
  
> [!NOTE]
>  Le designazioni di versione \(v0.1, v1.0, v2.0, v2.1, v3.0\) usate nelle descrizioni seguenti hanno il solo scopo di mostrare l'evoluzione del linguaggio C\+\+11. Lo standard stesso non le usa.  
  
 [N1610 "Informazioni sull'inizializzazione degli oggetti classe per rvalue"](http://go.microsoft.com/fwlink/p/?LinkID=235093) è un primo tentativo di abilitare la semantica di spostamento senza riferimenti rvalue.  Ai fini di questa discussione, si parlerà di "riferimenti rvalue v0.1". È stato sostituito da "riferimenti rvalue [v1.0](http://go.microsoft.com/fwlink/p/?LinkID=235094)." I "riferimenti rvalue [v2.0](http://go.microsoft.com/fwlink/p/?LinkID=235095)", ovvero il concetto su cui si basa il lavoro in Visual C\+\+ in Visual Studio 2010, impediscono l'associazione tra i riferimenti rvalue e i riferimenti lvalue, risolvendo quindi un problema di sicurezza molto importante.  "I riferimenti rvalue [v2.1](http://go.microsoft.com/fwlink/p/?LinkID=235096)" perfezionano ulteriormente questa regola.  Prendere in considerazione `vector<string>::push_back()`, con gli overload `push_back(const string&)` e `push_back(string&&)`e la chiamata a `v.push_back("strval")`.  L'espressione `"strval"` è un valore letterale stringa e un lvalue.  \(Altri valori letterali, ad esempio l'intero 1729, sono rvalue, ma i valori letterali stringa sono speciali perché rappresentano matrici\).  Le regole dei "riferimenti rvalue v2.0" stabiliscono che `string&&` non può essere associato a `"strval"` perché `"strval"` è un lvalue, di conseguenza `push_back(const string&)` è l'unico overload possibile.  Le conseguenze sarebbero la creazione di un oggetto `std::string`temporaneo, la sua copia nel vettore e infine l'eliminazione dell'oggetto `std::string` temporaneo, una procedura poco efficiente. Le regole dei "riferimenti rvalue v2.1" riconoscono che l'associazione di `string&&` a `"strval"` creerebbe un oggetto `std::string`temporaneo rvalue.  Di conseguenza, sono possibili sia `push_back(const string&)` sia `push_back(string&&)`, ma `push_back(string&&)` è preferibile.  Viene costruito un oggetto `std::string` temporaneo, che verrà spostato nel vettore.  Questa procedura è più efficiente.  
  
 "I riferimenti rvalue [v3.0](http://go.microsoft.com/fwlink/p/?LinkID=235097)" aggiungono nuove regole per generare automaticamente i costruttori di spostamento e gli operatori di assegnazione di spostamento in determinate condizioni. Proposta implementata in Visual Studio 2015.  
  
 \[[Contenuto dell'articolo](#top)\]  
  
###  <a name="lambdas"></a> Lambda  
 Dopo l'inserimento delle [funzioni lambda](../cpp/lambda-expressions-in-cpp.md) nel documento di lavoro \([versione "0.9"](http://go.microsoft.com/fwlink/p/?LinkID=235098)\) e l'aggiunta delle espressioni lambda modificabili \([versione "1.0"](http://go.microsoft.com/fwlink/p/?LinkID=235099)\), il comitato di standardizzazione ha revisionato l'espressione. Da qui sono state prodotte le espressioni lambda [versione "1.1"](http://go.microsoft.com/fwlink/p/?LinkID=235100), ora pienamente supportate.  La definizione delle espressioni lambda v1.1 chiarisce cosa dovrebbe accadere in casi estremi come il riferimento a membri statici o a espressioni lambda annidate.  In questo modo, si risolvono i problemi generati dalle espressioni lambda complesse.  Le espressioni lambda sono ora convertibili in puntatori a funzione.  Questo non è presente nella definizione N2927, ma è comunque inteso come parte delle espressioni lambda v1.1.[C\+\+11](http://go.microsoft.com/fwlink/p/?LinkID=235092) **5.1.2 \[expr.prim.lambda\]\/6** presenta la seguente descrizione: "Il tipo di chiusura di una `lambda-expression` con nessuna `lambda-capture` ha una funzione di conversione const non esplicita non virtuale pubblica per puntare alla funzione con lo stesso parametro e gli stessi tipi restituiti dell'operatore di chiamata di funzione del tipo di chiusura. Il valore restituito dalla funzione di conversione sarà l'indirizzo di una funzione che, quando richiamata, avrà lo stesso effetto di quando viene richiamato l'operatore di chiamata di funzione del tipo di chiusura.  \(L'implementazione di [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] è ancora migliore perché rende le espressioni lambda indipendenti dallo stato convertibili in puntatori funzione che usano convenzioni di chiamata arbitrarie.  Questo è importante quando si usano API che si aspettano elementi come i puntatori funzione `__stdcall`\).  
  
 \[[Contenuto dell'articolo](#top)\]  
  
###  <a name="decltype"></a> decltype  
 Dopo l'inserimento di decltype nel documento di lavoro \([versione 1.0](http://go.microsoft.com/fwlink/p/?LinkID=235101)\), è stata apportata una piccola, ma importante correzione dell'ultimo minuto \([versione 1.1](http://go.microsoft.com/fwlink/p/?LinkID=235102)\).  Tale modifica riveste molta importanza per i programmatori che lavorano su STL e Boost.  
  
 \[[Contenuto dell'articolo](#top)\]  
  
###  <a name="stronglytyped"></a> Enumerazioni fortemente tipizzate\/dichiarate con prototipo  
 Le [enumerazioni fortemente tipizzate](http://go.microsoft.com/fwlink/p/?LinkID=235103) sono in parte supportate in Visual C\+\+ in Visual Studio 2010 \(in particolare, la parte sui tipi sottostanti specificati in modo esplicito\). Ora sono completamente implementate in Visual Studio, così come la semantica C\+\+11 per le [enumerazioni dichiarate con prototipo](http://go.microsoft.com/fwlink/p/?LinkID=235104).  
  
 \[[Contenuto dell'articolo](#top)\]  
  
###  <a name="alignment"></a> Allineamento  
 Le parole chiave del linguaggio core `alignas`\/`alignof` contenute nella [proposta di allineamento](http://go.microsoft.com/fwlink/p/?LinkID=235105) inserita nel documento di lavoro sono implementate in Visual Studio 2015.  Visual C\+\+ in Visual Studio 2010 aveva `aligned_storage` da TR1. In [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] sono state aggiunte le parole chiave `aligned_union` e `std::align()` alla libreria standard e sono stati corretti alcuni problemi significativi in [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)].  
  
 \[[Contenuto dell'articolo](#top)\]  
  
###  <a name="standardlayout"></a> Tipi semplici e tipi layout standard  
 Le modifiche esposte da [N2342 "POD riconfigurati; Risoluzione del problema principale 568 \(Revisione 5\)"](http://go.microsoft.com/fwlink/p/?LinkID=235106) sono le aggiunte di `is_trivial` e `is_standard_layout` a `<type_traits>` della libreria di modelli standard.  \(N2342 ha rielaborato molte delle definizioni del linguaggio core, ma non sono state necessarie modifiche del compilatore\).  Questi tratti di tipo sono disponibili in Visual C\+\+ in Visual Studio 2010, ma duplicano semplicemente `is_pod`. Ecco perché nella tabella riportata sopra in questo documento il supporto viene indicato come non disponibile.  Sono ora sono basati sugli hook del compilatore progettati per fornire risposte precise.  
  
 Il [common\_type\<\>](../standard-library/common-type-class.md) di STL ha ricevuto una correzione da molto tempo auspicata in [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)].  La specifica C\+\+11 per `common_type<>` presenta delle conseguenze impreviste e indesiderate, in particolare induce `common_type<int, int>::type` a restituire `int&&`. Quindi, [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)] implementa la [risoluzione proposta per il problema 2141](http://go.microsoft.com/fwlink/p/?LinkId=320075) del gruppo di lavoro della libreria che induce `common_type<int, int>::type` a restituire `int`.  
  
 Come effetto collaterale di questa modifica, il case di identità non funziona più \(`common_type<T>` non restituisce sempre il tipo `T`\). Ciò è conforme alla Proposta, ma interrompe il codice basato sul comportamento precedente.  
  
 Se è necessario un tratto di tipo identità, non usare l'elemento `std::identity` non standard definito in `<type_traits>`, perché non funzionerà con `<void>`. Diversamente, implementare un tratto di tipo di identità per le proprie esigenze. Di seguito è riportato un esempio:  
  
```cpp  
template <typename T> struct Identity { typedef T type; };  
  
```  
  
> [!NOTE]
>  Per altre modifiche importanti, vedere [Modifiche importanti in Visual C\+\+ 2015](../porting/visual-cpp-change-history-2003-20151.md).  
  
 \[[Contenuto dell'articolo](#top)\]  
  
###  <a name="defaultedanddeleted"></a> Funzioni impostate come predefinite e funzioni eliminate  
 Ora sono supportate, ma con questa eccezione: per le funzioni impostate come predefinite, l'utilizzo di `=default` per richiedere costruttori di spostamento per i membri e operatori di assegnazione di spostamento non è supportato. Le copie e gli spostamenti non interagiscono con precisione come indicato dallo standard, ad esempio l'eliminazione degli spostamenti dovrebbe anche eliminare le copie, ma questo non avviene in [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)].  
  
 Per informazioni sull'uso delle funzioni impostate come predefinite e sulle funzioni eliminate, vedere [Funzioni](../cpp/functions-cpp.md).  
  
 \[[Contenuto dell'articolo](#top)\]  
  
###  <a name="overrideandfinal"></a> override e finale  
 L'evoluzione è avvenuta rapidamente ma con qualche complicazione. In origine, nella [versione 0.8](http://go.microsoft.com/fwlink/p/?LinkID=235108) esistevano gli attributi \[\[`override`\]\], \[\[`hiding`\]\] e \[\[`base_check`\]\]   Nella [versione 0.9](http://go.microsoft.com/fwlink/p/?LinkID=235109) gli attributi sono stati eliminati e sostituiti con parole chiave contestuali.  Infine, nella [versione 1.0](http://go.microsoft.com/fwlink/p/?LinkID=235110), sono stati ridotti a "`final`" nelle classi e a "`override`" e "`final`" nelle funzioni.  Si tratta di un'estensione verso l'alto perché Visual C\+\+ in Visual Studio 2010 supporta già questa sintassi di "`override`" sulle funzioni e ha una semantica abbastanza simile a quella di C\+\+11.  Anche "`final`" è supportato, ma con la formulazione diversa "sealed".  L'ortografia e la semantica standard di "`override`" e "`final`" sono ora completamente supportate. Per altre informazioni, vedere [Identificatore override](../cpp/override-specifier.md) e [Identificatore final](../cpp/final-specifier.md).  
  
 \[[Contenuto dell'articolo](#top)\]  
  
###  <a name="atomics"></a> Elementi atomici e altro  
 Gli [elementi atomici](http://go.microsoft.com/fwlink/p/?LinkID=235111), lo [scambio e confronto efficaci](http://go.microsoft.com/fwlink/p/?LinkID=235112), i [limiti bidirezionali](http://go.microsoft.com/fwlink/p/?LinkID=235113) e l'[ordinamento delle dipendenze dei dati](http://go.microsoft.com/fwlink/p/?LinkID=235114) specificano il sistema della libreria standard, che è ora implementato.  
  
 **Intestazioni STL correlate:** [\<atomic\>](../standard-library/atomic.md), [\<chrono\>](../standard-library/chrono.md), [\<condition\_variable\>](../standard-library/condition-variable.md), [\<future\>](../standard-library/future.md), [\<mutex\>](../standard-library/mutex.md), [\<ratio\>](../standard-library/ratio.md), [\<scoped\_allocator\>](../standard-library/scoped-allocator.md) e [\<thread\>](../standard-library/thread.md).  
  
 \[[Contenuto dell'articolo](#top)\]  
  
###  <a name="c99"></a> \_\_func\_\_ e regole di preprocessore C99  
 Nella tabella [Funzionalità del linguaggio core C++11: C99](#c99table) è elencata l'implementazione "parziale" per due elementi. Per l'identificatore predefinito `__func__` è indicato "Parziale" poiché è fornito supporto per le estensioni non standard `__FUNCDNAME__`, `__FUNCSIG__` e `__FUNCTION__`. Per altre informazioni, vedere [Macro predefinite](../preprocessor/predefined-macros.md). Per le regole di preprocessore C99 è indicato "Parziale" poiché sono supportate le *macro variadic*. Per altre informazioni, vedere [Macro variadic](../preprocessor/variadic-macros.md).  
  
 \[[Contenuto dell'articolo](#top)\]  
  
###  <a name="stl"></a> Funzionalità della libreria standard  
 Riguarda il linguaggio core. Come per la libreria standard C\+\+11, non è disponibile una vera e propria tabella di confronto delle funzionalità, anche se in [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] è stata implementata con due eccezioni.  Innanzitutto, quando una funzionalità della libreria dipende da funzionalità mancanti nel compilatore, viene simulata, ad esempio vengono simulati i modelli variadic per `make_shared<T>()`, oppure non viene implementata. Esistono solo alcuni casi, in particolare `<initializer_list>`, che sono stati completamente implementati in [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)].  Con pochissime eccezioni, C99 è stato implementato nelle intestazioni del wrapper C\+\+ e di [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)] fornite. Per altre informazioni, vedere il [Supporto della libreria C99 in Visual Studio 2013](http://go.microsoft.com/fwlink/p/?LinkId=321308).  
  
 Di seguito è riportato un elenco parziale delle modifiche in [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] e [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)]:  
  
 **Ubicazione:** come richiesto da C\+\+11, `emplace()`\/`emplace_front()`\/`emplace_back()`\/`emplace_hint()`\/`emplace_after()` sono implementati in tutti i contenitori di numeri "arbitrari" di argomenti \(vedere la sezione "Variadics simulate"\).  Ad esempio, `vector<T>` presenta "`template <typename... Args> void emplace_back(Args&&... args)`", che costruisce direttamente un elemento di tipo T nella parte posteriore del vettore da un numero arbitrario di argomenti arbitrari, inoltrati perfettamente.  Questo processo potrebbe risultare più efficace rispetto a `push_back(T&&)`, il quale comporterebbe una costruzione e una distruzione di spostamento aggiuntive.  
  
 **Variadics:** in [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] è disponibile uno schema per la simulazione dei modelli di variadic. In [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)], le simulazioni non sono più disponibili e le **variadics sono implementate completamente**. Se il codice si basa sul comportamento precedente di variadics simulate, è necessario correggerlo. Tuttavia, il passaggio a modelli di variadic reali ha contribuito a **migliorare i tempi di compilazione** e a ridurre il **consumo di memoria del compilatore**.  
  
 **Operatori di conversione espliciti:** nel linguaggio core gli operatori di conversione espliciti rappresentano una funzionalità generale, ad esempio è possibile disporre di `explicit operator MyClass()`. Tuttavia, la libreria standard usa attualmente un'unica forma, `explicit operator bool()`, che rende le classi verificabili in modo booleano. \("`operator bool()`" normale è notoriamente pericoloso\). In precedenza, Visual C\+\+ simulava `explicit operator bool()` con `operator pointer-to-member()`, cosa che ha creato diversi problemi e piccole inefficienze. La soluzione alternativa che prevedeva l'uso di un "valore booleano fittizio" è stata completamente rimossa.  
  
 **Casualità:** `uniform_int_distribution` è ora completamente imparziale e `shuffle()` viene implementato in `<algorithm>`, che accetta direttamente i generatori di numeri casuali uniformi come `mersenne_twister`.  
  
 **Resistenza agli operatori address\-of in overload:** le versioni C\+\+98\/03 impediscono a un elemento di un contenitore STL di eseguire l'overload del proprio operatore address\-of.  Questo è ciò che fanno le classi come `CComPtr`, per cui si sono rese necessarie le classi di supporto come `CAdapt` per proteggere STL da tali overload.  Durante lo sviluppo di Visual C\+\+ in Visual Studio 2010, le modifiche a STL causavano il rifiuto degli operatori address\-of sottoposti a overload in più situazioni. C\+\+11 ha modificato i requisiti per rendere accettabili gli operatori address\- of sottoposti a overload. In C\+\+11 e Visual C\+\+ in Visual Studio 2010 viene fornita la funzione di supporto `std::addressof()` che può ottenere l'indirizzo effettivo di un oggetto indipendentemente dall'overload degli operatori.  Prima del rilascio di Visual C\+\+ in Visual Studio 2010, è stato effettuato il tentativo di sostituire le occorrenze di "`&elem`" con "`std::addressof(elem)`", che offre una resistenza appropriata.[!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] è andato oltre, in modo che le classi che sono in rapporto di overload con il rispettivo operatore address\-of possano essere usate in STL.  
  
 **In [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] si è andati oltre C\+\+11 in diversi modi:**  
  
 **Iteratori SCARY**: come consentito, ma non richiesto dal linguaggio C\+\+11 standard, gli iteratori SCARY sono stati implementati, come descritto nell'articolo [N2911 relativo alla riduzione delle dipendenze in classi generiche per lo sviluppo di programmi di dimensioni più piccole](http://go.microsoft.com/fwlink/p/?LinkID=235115) e più veloci e nell'articolo [N2980 relativo all'inizializzazione e all'assegnazione dell'iteratore SCARY, revisione 1](http://go.microsoft.com/fwlink/p/?LinkID=235116).  
  
 **Filesystem**: è stata aggiunta l'intestazione `<filesystem>` dalla [proposta TR2](http://go.microsoft.com/fwlink/p/?LinkID=235117). Tale intestazione rende disponibili `recursive_directory_iterator` e altre interessanti funzionalità.  Prima che il lavoro su TR2 fosse bloccato dato il ritardo di C\+\+0x e il passaggio a C\+\+11, la proposta 2006 fu derivata da [Boost.Filesystem V2](http://go.microsoft.com/fwlink/p/?LinkID=235118). In seguito si è passati a Boost.Filesystem V3, implementato in Visual Studio 2015.  
  
 E un'ottimizzazione molto importante.  Tutti i contenitori presentano ora dimensioni ottimali, date le relative rappresentazioni.  Questo fa riferimento agli oggetti contenitore stessi, non al relativo contenuto puntato.  Ad esempio, `std::vector` contiene tre puntatori non elaborati.  In Visual C\+\+ in Visual Studio 2010, la modalità di rilascio x86 `std::vector` è a 16 byte.  In [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] è a 12 byte, ovvero dimensioni ridotte ottimali.  Si tratta di un grande vantaggio: se nel programma sono presenti 100.000 vettori, [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] consente di risparmiare 400.000 byte.  Un utilizzo ridotto della memoria consente di risparmiare spazio e tempo.  
  
 Questo risultato è stato ottenuto evitando l'archiviazione di allocatori e comparatori vuoti, perché `std::allocator` e `std::less` sono indipendenti dallo stato.  \(Queste ottimizzazioni sono possibili anche per gli allocatori\/comparatori personalizzati, purché siano indipendenti dallo stato.  Ovviamente, non è possibile evitare l'archiviazione di allocatori\/comparatori dipendenti dallo stato, ma questi sono molto rari\).  
  
 **In [!INCLUDE[cpp_dev12_long](../build/reference/includes/cpp_dev12_long_md.md)] sono state implementate alcune funzionalità principali della libreria C\+\+14:**  
  
-   "Funtori di operatori trasparenti" `less<>`, `greater<>`, `plus<>`, `multiplies<>` e così via.  
  
-   `make_unique<T>(args...)` e `make_unique<T[]>(n)`  
  
-   Funzioni non membro `cbegin()`\/`cend()`, `rbegin()`\/`rend()` e `crbegin()``crend()`.  
  
 \[[Contenuto dell'articolo](#top)\]  
  
## Vedere anche  
 [C\+\+](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)   
 [Espressioni lambda](../cpp/lambda-expressions-in-cpp.md)   
 [Istruzione for basata su intervallo \(C\+\+\)](../cpp/range-based-for-statement-cpp.md)   
 [Libreria standard C\+\+](../standard-library/cpp-standard-library-reference.md)   
 [Blog del team di Visual C\+\+](http://blogs.msdn.com/b/vcblog/)   
 [Novità in Visual C\+\+](../top/what-s-new-for-visual-cpp-in-visual-studio-2015.md)   
 [Modifiche importanti in Visual C\+\+ 2015](../porting/visual-cpp-change-history-2003-20151.md)