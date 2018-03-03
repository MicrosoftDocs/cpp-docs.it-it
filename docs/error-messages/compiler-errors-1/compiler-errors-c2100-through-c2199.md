---
title: Errore del Compilatores C2100 through C2199 | Documenti Microsoft
ms.custom: 
ms.date: 11/17/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2119
- C2123
- C2125
- C2126
- C2127
- C2131
- C2136
- C2176
- C2187
- C2189
helpviewer_keywords:
- C2119
- C2123
- C2125
- C2126
- C2127
- C2131
- C2136
- C2176
- C2187
- C2189
dev_langs:
- C++
ms.assetid: 1ccab076-0954-4386-b959-d3112a6793ae
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: a95a5fd1c85089c45e766fe0bc82a3896bdc3bd2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-errors-c2100-through-c2199"></a>Errore del compilatores C2100 through C2199

Gli articoli in questa sezione della documentazione illustrano un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Error|Messaggio|
|-----------|-------------|
|[Errore del compilatore C2100](compiler-error-c2100.md)|riferimento indiretto non valido|
|[Errore del compilatore C2101](compiler-error-c2101.md)|'&' in costante|
|[Errore del compilatore C2102](compiler-error-c2102.md)|'&' richiede un valore l-value|
|[Errore del compilatore C2103](compiler-error-c2103.md)|'&' nella variabile di registro|
|[Errore del compilatore C2104](compiler-error-c2104.md)|'&' su campo di bit ignorato|
|[Errore del compilatore C2105](compiler-error-c2105.md)|'*operatore*' richiede un l-value|
|[Errore del compilatore C2106](compiler-error-c2106.md)|'*operatore*': operando sinistro deve essere l-value|
|[Errore del compilatore C2107](compiler-error-c2107.md)|indice non valido. riferimento indiretto non consentito|
|[Errore del compilatore C2108](compiler-error-c2108.md)|indice non è di tipo integrale|
|[Errore del compilatore C2109](compiler-error-c2109.md)|indice richiede il tipo di puntatore o matrice|
|[Errore del compilatore C2110](compiler-error-c2110.md)|'+': Impossibile aggiungere due puntatori|
|[Errore del compilatore C2111](compiler-error-c2111.md)|'+': addizione di puntatori richiede un operando integrale|
|[Errore del compilatore C2112](compiler-error-c2112.md)|'-': la sottrazione di puntatori richiede un operando integrale o puntatore|
|[Errore del compilatore C2113](compiler-error-c2113.md)|'-': puntatore può essere sottratto solo da un altro puntatore|
|[Errore del compilatore C2114](compiler-error-c2114.md)|'*operatore*': puntatore a sinistra; richiesto un valore integrale a destra|
|[Errore del compilatore C2115](compiler-error-c2115.md)|'*operatore*': tipi incompatibili|
|[Errore del compilatore C2116](compiler-error-c2116.md)|elenchi di parametri di funzione differenti|
|[Errore del compilatore C2117](compiler-error-c2117.md)|'*identificatore*': overflow dei limiti della matrice|
|[Errore del compilatore C2118](compiler-error-c2118.md)|indice negativo|
|C2119 errore del compilatore|'*identificatore*': il tipo per '*tipo*' non può essere dedotto da un inizializzatore vuoto|
|[Errore del compilatore C2120](compiler-error-c2120.md)|'void' non valido con tutti i tipi|
|[Errore del compilatore C2121](compiler-error-c2121.md)|'#': carattere non valido: probabilmente il risultato di un'espansione di macro|
|[Errore del compilatore C2122](compiler-error-c2122.md)|'*identificatore*': parametro di prototipo nome non valido nell'elenco|
|C2123 errore del compilatore|'*identificatore*': modelli di alias non possono essere specializzati in modo esplicito o parzialmente|
|[Errore del compilatore C2124](compiler-error-c2124.md)|divisione o mod per 0|
|Errore del compilatore C2125|'constexpr' non è compatibile con '*token*'|
|Errore del compilatore C2126|'*identificatore*' non può essere dichiarato con identificatore 'constexpr'|
|Errore del compilatore C2127|'*identificatore*': inizializzazione non ammessa dell'entità 'constexpr' con un'espressione non costante|
|[Errore del compilatore C2128](compiler-error-c2128.md)|'*funzione*': alloc_text/same_seg applicabili solo a funzioni con collegamento C|
|[Errore del compilatore C2129](compiler-error-c2129.md)|funzione statica '*identificatore*' dichiarata ma non definita|
|[Errore del compilatore C2130](compiler-error-c2130.md)|#line prevista una stringa contenente il nome del file '*token*'|
|C2131 errore del compilatore|espressione non dà come risultato una costante|
|[Errore del compilatore C2132](compiler-error-c2132.md)|Errore di sintassi: identificatore imprevisto|
|[Errore del compilatore C2133](compiler-error-c2133.md)|'*identificatore*': dimensione sconosciuta|
|[Errore del compilatore C2134](compiler-error-c2134.md)|'*funzione*': chiamata non produce un'espressione costante|
|[Errore del compilatore C2135](compiler-error-c2135.md)|'*operatore*': operazione su campo di bit non valida|
|C2136 errore del compilatore|creazione del contratto API non consentito|
|[Errore del compilatore C2137](compiler-error-c2137.md)|costante carattere vuota|
|[Errore del compilatore C2138](compiler-error-c2138.md)|non è consentito definire un'enumerazione senza membri|
|[Errore del compilatore C2139](compiler-error-c2139.md)|'*classe*': una classe non definita non è consentita come argomento per il tratto di tipo intrinseco del compilatore '*tratto*'|
|[Errore del compilatore C2140](compiler-error-c2140.md)|'*tipo*': un tipo dipendente da un parametro di tipo generico non è consentito come argomento per il tratto di tipo intrinseco del compilatore '*tratto*'|
|[Errore del compilatore C2141](compiler-error-c2141.md)|overflow della dimensione della matrice|
|[Errore del compilatore C2142](compiler-error-c2142.md)|le dichiarazioni di funzione sono diversi, parametri variabili specificati solo in uno di essi|
|[Errore del compilatore C2143](compiler-error-c2143.md)|Errore di sintassi: manca '*token1*'before'*token2*'|
|[Errore del compilatore C2144](compiler-error-c2144.md)|Errore di sintassi: '*tipo*'deve essere preceduto da'*token2*'|
|[Errore del compilatore C2145](compiler-error-c2145.md)|Errore di sintassi: manca '*token*' prima dell'identificatore|
|[Errore del compilatore C2146](compiler-error-c2146.md)|Errore di sintassi: manca '*token*'prima dell'identificatore'*identificatore*'|
|[Errore del compilatore C2147](compiler-error-c2147.md)|Errore di sintassi: '*token*' è una nuova parola chiave|
|[Errore del compilatore C2148](compiler-error-c2148.md)|dimensione complessiva della matrice non deve superare 0x*valore* byte|
|[Errore del compilatore C2149](compiler-error-c2149.md)|'*identificatore*': campo di bit denominato non può avere larghezza zero|
|[Errore del compilatore C2150](compiler-error-c2150.md)|'*identificatore*': campo di bit deve avere il tipo 'int', 'signed int' o 'unsigned int'|
|[Errore del compilatore C2151](compiler-error-c2151.md)|più di un attributo di linguaggio|
|[Errore del compilatore C2152](compiler-error-c2152.md)|'*identificatore*': i puntatori a funzioni con attributi differenti|
|[Errore del compilatore C2153](compiler-error-c2153.md)|valori letterali integer devono avere almeno una cifra|
|[Errore del compilatore C2154](compiler-error-c2154.md)|'*tipo*': è consentito solo un tipo enumerazione come argomento per il tratto di tipo intrinseco del compilatore '*tratto*'|
|[Errore del compilatore C2155](compiler-error-c2155.md)|'?': operando sinistro aritmetici valido o tipo di puntatore|
|[Errore del compilatore C2156](compiler-error-c2156.md)|pragma deve trovarsi all'esterno della funzione|
|[Errore del compilatore C2157](compiler-error-c2157.md)|'*identificatore*': deve essere dichiarato prima dell'utilizzo in un elenco pragma|
|[Errore del compilatore C2158](compiler-error-c2158.md)|'*tipo*': la direttiva #pragma make_public è attualmente supportata per solo i tipi non modello nativi|
|[Errore del compilatore C2159](compiler-error-c2159.md)|specificata più di una classe di archiviazione|
|[Errore del compilatore C2160](compiler-error-c2160.md)|'##' non può apparire all'inizio della definizione di una macro|
|[Errore del compilatore C2161](compiler-error-c2161.md)|'##' non può apparire alla fine della definizione di una macro|
|[Errore del compilatore C2162](compiler-error-c2162.md)|Previsto parametro formale macro|
|[Errore del compilatore C2163](compiler-error-c2163.md)|'*funzione*': non è disponibile come funzione intrinseca|
|[Errore del compilatore C2164](compiler-error-c2164.md)|'*funzione*': funzione intrinseca non dichiarata|
|[Errore del compilatore C2165](compiler-error-c2165.md)|'*modificatore*': non è possibile modificare i puntatori ai dati|
|[Errore del compilatore C2166](compiler-error-c2166.md)|l'elemento l-value specifica un oggetto const|
|[Errore del compilatore C2167](compiler-error-c2167.md)|'*funzione*': troppi parametri effettivi per una funzione intrinseca|
|[Errore del compilatore C2168](compiler-error-c2168.md)|'*funzione*': parametri insufficienti per una funzione intrinseca|
|[Errore del compilatore C2169](compiler-error-c2169.md)|'*funzione*': non è possibile definire una funzione intrinseca|
|[Errore del compilatore C2170](compiler-error-c2170.md)|'*identificatore*': funzione intrinseca non dichiarata come funzione, non può essere|
|[Errore del compilatore C2171](compiler-error-c2171.md)|'*operatore*': non valido su operandi di tipo '*tipo*'|
|[Errore del compilatore C2172](compiler-error-c2172.md)|'*funzione*': il parametro effettivo non è un puntatore: parametro *numero*|
|[Errore del compilatore C2173](compiler-error-c2173.md)|'*funzione*': il parametro effettivo non è un puntatore: parametro *numero*, elenco di parametri *numero*|
|[Errore del compilatore C2174](compiler-error-c2174.md)|'*funzione*': il parametro effettivo ha tipo 'void': parametro *numero*, elenco di parametri *numero*|
|[Errore del compilatore C2175](compiler-error-c2175.md)|'*internazionali*': impostazioni locali non valido|
|C2176 errore del compilatore|un'istruzione return non può comparire nel gestore di un funzione blocco try associato a un costruttore|
|[Errore del compilatore C2177](compiler-error-c2177.md)|costante troppo grande|
|[Errore del compilatore C2178](compiler-error-c2178.md)|'*identificatore*'non può essere dichiarata con'*identificatore*' identificatore|
|[Errore del compilatore C2179](compiler-error-c2179.md)|'*tipo*': argomento di attributo non è possibile utilizzare parametri di tipo|
|[Errore del compilatore C2180](compiler-error-c2180.md)|espressione di controllo ha tipo '*tipo*'|
|[Errore del compilatore C2181](compiler-error-c2181.md)|else non valido senza if corrispondente|
|[Errore del compilatore C2182](compiler-error-c2182.md)|'*identificatore*': utilizzo non valido del tipo 'void'|
|[Errore del compilatore C2183](compiler-error-c2183.md)|Errore di sintassi: unità di conversione è vuoto|
|[Errore del compilatore C2184](compiler-error-c2184.md)|'*tipo*': tipo non valido per espressione except|
|[Errore del compilatore C2185](compiler-error-c2185.md)|'*identificatore*': allocazione con base non valida|
|[Errore del compilatore C2186](compiler-error-c2186.md)|'*operatore*': operando di tipo 'void' non valido|
|C2187 errore del compilatore|Errore di sintassi: '*token*' imprevisto qui|
|[Errore del compilatore C2188](compiler-error-c2188.md)|'*numero*': troppo grande per caratteri "wide"|
|Errore del compilatore C2189|attributo 'alignas' non può essere applicato a un campo di bit, un parametro di funzione, una dichiarazione di eccezione o una variabile dichiarata con la classe di archiviazione ' register'|
|[Errore del compilatore C2190](compiler-error-c2190.md)|primo elenco di parametri più lungo del secondo|
|[Errore del compilatore C2191](compiler-error-c2191.md)|secondo elenco di parametri più lungo del primo|
|[Errore del compilatore C2192](compiler-error-c2192.md)|parametro '*numero*' dichiarazione diverso|
|[Errore del compilatore C2193](compiler-error-c2193.md)|'*identificatore*': già esistente in un segmento|
|[Errore del compilatore C2194](compiler-error-c2194.md)|'*identificatore*': è un segmento di testo|
|[Errore del compilatore C2195](compiler-error-c2195.md)|'*identificatore*': è un segmento di dati|
|[Errore del compilatore C2196](compiler-error-c2196.md)|valore case '*valore*' già utilizzato.|
|[Errore del compilatore C2197](compiler-error-c2197.md)|'*funzione*': troppi argomenti per chiamata|
|[Errore del compilatore C2198](compiler-error-c2198.md)|'*funzione*': argomenti insufficienti per chiamata|
|[Errore del compilatore C2199](compiler-error-c2199.md)|Errore di sintassi: trovato '*identificatore* (' in ambito globale (si desiderava creare una dichiarazione?)|  