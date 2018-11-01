---
title: Errori del compilatore C2200 C2299
ms.date: 11/17/2017
f1_keywords:
- C2202
- C2209
- C2210
- C2211
- C2214
- C2215
- C2221
- C2225
- C2230
- C2235
- C2237
- C2239
- C2240
- C2257
- C2260
- C2263
- C2265
- C2269
- C2278
- C2281
- C2282
- C2288
- C2291
- C2294
helpviewer_keywords:
- C2202
- C2209
- C2210
- C2211
- C2214
- C2215
- C2221
- C2225
- C2230
- C2235
- C2237
- C2239
- C2240
- C2257
- C2260
- C2263
- C2265
- C2269
- C2278
- C2281
- C2282
- C2288
- C2291
- C2294
ms.assetid: 9b36d11b-9510-4390-96f1-0c9235124d14
ms.openlocfilehash: b41887e941796e7f8f2f919ed76fbaaa624227ab
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50432526"
---
# <a name="compiler-errors-c2200-through-c2299"></a>Errori del compilatore C2200 C2299

Gli articoli in questa sezione della documentazione illustrano un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Error|Messaggio|
|-----------|-------------|
|[Errore del compilatore C2200](compiler-error-c2200.md)|«*funzione*': funzione già definita|
|[Errore del compilatore C2201](compiler-error-c2201.md)|«*identificatore*': deve avere un collegamento esterno per essere esportate o importate|
|C2202 errore del compilatore|«*funzione*': non tutti i percorsi di controllo restituiscono un valore|
|[Errore del compilatore C2203](compiler-error-c2203.md)|Elimina operatore non è possibile specificare i limiti di matrice|
|[Errore del compilatore C2204](compiler-error-c2204.md)|«*tipo*': trovata all'interno delle parentesi definizione di tipo|
|[Errore del compilatore C2205](compiler-error-c2205.md)|«*identificatore*': Impossibile inizializzare variabili extern con ambito blocco|
|[Errore del compilatore C2206](compiler-error-c2206.md)|«*funzione*': typedef non può essere utilizzato per la definizione di funzione|
|[Errore del compilatore C2207](compiler-error-c2207.md)|«*membro*': un membro di un modello di classe non può acquisire un tipo di funzione|
|[Errore del compilatore C2208](compiler-error-c2208.md)|«*tipo*': nessun membro definito mediante questo tipo|
|C2209 errore del compilatore|«*identificatore*': gli alias non possono essere utilizzati nelle dichiarazioni dei costruttori|
|C2210 errore del compilatore|«*identificatore*': le espansioni di pacchetto non possono essere utilizzate come argomenti dei parametri non compressi in modelli di alias|
|C2211 errore del compilatore|Un distruttore non virtuale in una classe di riferimento derivato da una classe di riferimento con un distruttore pubblico deve inoltre essere pubblico|
|[Errore del compilatore C2212](compiler-error-c2212.md)|«*identificatore*': based non disponibile per i puntatori a funzioni|
|[Errore del compilatore C2213](compiler-error-c2213.md)|«*identificatore*': argomento non valido per based|
|C2214 errore del compilatore|i puntatori basati su 'void' richiedono l'utilizzo di: >|
|C2215 errore del compilatore|«*parola chiave*' non può essere usato con ' / /arch: SSE»|
|[Errore del compilatore C2216](compiler-error-c2216.md)|«*keyword1*'non può essere usato con'*keyword2*»|
|[Errore del compilatore C2217](compiler-error-c2217.md)|«*attribute1*'richiede'*attribute2*»|
|[Errore del compilatore C2218](compiler-error-c2218.md)|«*calltype*' non può essere usato con ' / arch:IA32»|
|[Errore del compilatore C2219](compiler-error-c2219.md)|Errore di sintassi: qualificatore di tipo deve essere successiva a ' *'|
|[Errore del compilatore C2220](compiler-error-c2220.md)|Avviso considerato come errore - non»*filetype*' file generato|
|Errore del compilatore C2221|Obsoleta.|
|[Errore del compilatore C2222](compiler-error-c2222.md)|tipo non previsto '*tipo*': prevista una classe di base o membro|
|[Errore del compilatore C2223](compiler-error-c2223.md)|a sinistra di ' ->*identificatore*' deve puntare a struct/union|
|[Errore del compilatore C2224](compiler-error-c2224.md)|a sinistra di '. *identificatore*' deve avere un tipo struct/union|
|C2225 errore del compilatore|Obsoleta.|
|[Errore del compilatore C2226](compiler-error-c2226.md)|Errore di sintassi: tipo non previsto '*tipo*'|
|[Errore del compilatore C2227](compiler-error-c2227.md)|a sinistra di ' ->*identificatore*' deve puntare al tipo di classe/struttura, unione o generico|
|[Errore del compilatore C2228](compiler-error-c2228.md)|a sinistra di '. *identificatore*' deve avere una classe, struct o unione|
|[Errore del compilatore C2229](compiler-error-c2229.md)|classe, struct o unione '*tipo*' dispone di una matrice di dimensioni zero non valida|
|C2230 errore del compilatore|Impossibile trovare il modulo '*nome*'|
|[Errore del compilatore C2231](compiler-error-c2231.md)|'. *identificatore*': operando sinistro punta a 'classe/struct/union', utilizzare '->'|
|[Errore del compilatore C2232](compiler-error-c2232.md)|' ->*identificatore*': operando sinistro ha 'il tipo classe/struct/union'. utilizzare|
|[Errore del compilatore C2233](compiler-error-c2233.md)|«*identificatore*': le matrici di oggetti che contengono matrici di dimensioni zero non sono valide|
|[Errore del compilatore C2234](compiler-error-c2234.md)|*Identificatore*': le matrici di riferimenti non sono valide|
|C2235 errore del compilatore|Obsoleta.|
|[Errore del compilatore C2236](compiler-error-c2236.md)|token imprevisto '*token*'. È stato probabilmente omesso un ';'.|
|C2237 errore del compilatore|dichiarazione di più moduli|
|[Errore del compilatore C2238](compiler-error-c2238.md)|token imprevisti prima '*token*'|
|C2239 errore del compilatore|«*funzione*': tentativo di eliminare una funzione dllexport|
|C2240 errore del compilatore|Obsoleta.|
|[Errore del compilatore C2241](compiler-error-c2241.md)|«*identificatore*': l'accesso al membro è limitato|
|[Errore del compilatore C2242](compiler-error-c2242.md)|il nome typedef non può seguire una classe, struttura o unione|
|[Errore del compilatore C2243](compiler-error-c2243.md)|«*conversion_type*': conversione da '*type1*'a'*type2*' esistente ma inaccessibile|
|[Errore del compilatore C2244](compiler-error-c2244.md)|«*identificatore*': trovata una corrispondenza tra la definizione di funzione e una dichiarazione esistente|
|[Errore del compilatore C2245](compiler-error-c2245.md)|funzione membro non esistente '*funzione*' specificata come friend (firma della funzione membro non corrisponde ad alcun overload)|
|[Errore del compilatore C2246](compiler-error-c2246.md)|«*identificatore*': membro dati statici non valido in una classe definita localmente|
|[Errore del compilatore C2247](compiler-error-c2247.md)|'*identifier*' non è accessibile perché '*class1*'utilizzi'*identificatore*' da cui ereditare'*class2*'|
|[Errore del compilatore C2248](compiler-error-c2248.md)|'*identifier*': non è possibile accedere *accessibilità* *membro* dichiarato nella classe*classe*'|
|[Errore del compilatore C2249](compiler-error-c2249.md)|'*identifier*': nessun percorso accessibile *accessibilità* *membro* dichiarato nella base virtuale '*classe*'|
|[Errore del compilatore C2250](compiler-error-c2250.md)|«*identifier*': ereditarietà ambigua di *classe*::*membro*»|
|[Errore del compilatore C2251](compiler-error-c2251.md)|spazio dei nomi '*dello spazio dei nomi*'non è un membro'*identifier*'-si intendeva '*membro*'?|
|[Errore del compilatore C2252](compiler-error-c2252.md)|creazione di un'istanza esplicita di un modello può verificarsi solo nell'ambito dello spazio dei nomi|
|[Errore del compilatore C2253](compiler-error-c2253.md)|«*funzione*': identificatore pure o override abstract identificatore consentita solo con funzioni virtuali|
|[Errore del compilatore C2254](compiler-error-c2254.md)|«*funzione*': identificatore pure o override abstract non consentito con funzioni friend l'identificatore|
|[Errore del compilatore C2255](compiler-error-c2255.md)|«*elemento*': non consentito all'esterno di una definizione di classe|
|[Errore del compilatore C2256](compiler-error-c2256.md)|utilizzo non valido dell'identificatore friend su '*funzione*'|
|C2257 errore del compilatore|«*identificatore*': identificatore non è consentito nel tipo restituito finale|
|[Errore del compilatore C2258](compiler-error-c2258.md)|sintassi pure non valida. Deve essere '= 0'.|
|[Errore del compilatore C2259](compiler-error-c2259.md)|«*classe*': Impossibile creare un'istanza di classe astratta|
|C2260 errore del compilatore|«*identificatore*': identificatore di assembly friend InternalsVisibleToAttribute non valido|
|[Errore del compilatore C2261](compiler-error-c2261.md)|«*stringa*': riferimento all'assembly non è valido e non può essere risolto|
|[Errore del compilatore C2262](compiler-error-c2262.md)|«*identificatore*': nelle dichiarazioni InternalsVisibleTo non è possibile specificare una versione, impostazioni cultura o architettura del processore specificato|
|C2263 errore del compilatore|Obsoleta.|
|[Errore del compilatore C2264](compiler-error-c2264.md)|«*funzione*': errore nella dichiarazione o definizione di funzione; non viene chiamato (funzione)|
|Errore del compilatore C2265|Obsoleta.|
|[Errore del compilatore C2266](compiler-error-c2266.md)|«*identificatore*': riferimento a una matrice con dimensioni non costanti non è valido|
|[Errore del compilatore C2267](compiler-error-c2267.md)|«*funzione*': le funzioni statiche con ambito blocco non sono valide|
|[Errore del compilatore C2268](compiler-error-c2268.md)|«*funzione*' è un supporto di librerie predefinito del compilatore. Supporti di librerie non supportati con l'opzione /GL; compilare il file oggetto '*filename*' senza /GL.|
|C2269 errore del compilatore|non è possibile creare un puntatore o riferimento a un tipo di funzione qualificato (richiede il puntatore a membro)|
|[Errore del compilatore C2270](compiler-error-c2270.md)|«*funzione*': modificatori non consentiti per funzioni non membro|
|[Errore del compilatore C2271](compiler-error-c2271.md)|«*funzione*': new e delete non può avere modificatori di elenchi formali|
|[Errore del compilatore C2272](compiler-error-c2272.md)|«*funzione*': modificatori non consentiti per le funzioni membro statiche|
|[Errore del compilatore C2273](compiler-error-c2273.md)|«*tipo*': non valido a destra dell'operatore '->'|
|[Errore del compilatore C2274](compiler-error-c2274.md)|«*tipo*': non valido a destra di '.' operatore|
|[Errore del compilatore C2275](compiler-error-c2275.md)|«*tipo*': utilizzo non valido di questo tipo come espressione|
|[Errore del compilatore C2276](compiler-error-c2276.md)|«*operatore*': operazione non valida in espressione di funzione membro associata|
|[Errore del compilatore C2277](compiler-error-c2277.md)|«*funzione*': Impossibile accettare l'indirizzo di questa funzione membro|
|C2278 errore del compilatore|Obsoleta.|
|[Errore del compilatore C2279](compiler-error-c2279.md)|Specifica di eccezione non può trovarsi in una dichiarazione typedef|
|[Errore del compilatore C2280](compiler-error-c2280.md)|«*classe*::*funzione*': tentativo di fare riferimento a una funzione eliminata|
|C2281 errore del compilatore|«*classe*::*funzione*': una funzione può essere eliminata solo nella prima dichiarazione|
|C2282 errore del compilatore|«*function1*'non è possibile eseguire l'override'*function2*»|
|[Errore del compilatore C2283](compiler-error-c2283.md)|«*identificatore*': identificatore pure o override abstract non consentito nella classe/struttura senza nome identificatore|
|Errore del compilatore C2284|«*funzione*': argomento non valido per la funzione intrinseca, parametro *numero*|
|[Errore del compilatore C2285](compiler-error-c2285.md)|i puntatori alla rappresentazione membri già determinata - pragma ignorato|
|[Errore del compilatore C2286](compiler-error-c2286.md)|i puntatori ai membri di '*identifier*' rappresentazione è già impostata su *ereditarietà* -dichiarazione ignorata.|
|[Errore del compilatore C2287](compiler-error-c2287.md)|«*identifier*': rappresentazione di ereditarietà: '*inheritiance*'è meno generica obbligatorio'*ereditarietà*»|
|C2288 errore del compilatore|Obsoleta.|
|[Errore del compilatore C2289](compiler-error-c2289.md)|stesso qualificatore di tipo utilizzato più di una volta|
|[Errore del compilatore C2290](compiler-error-c2290.md)|Sintassi di C++ 'asm' ignorata. Usare __asm.|
|C2291 errore del compilatore|Uno spazio dei nomi anonimo non può essere esportato.|
|[Errore del compilatore C2292](compiler-error-c2292.md)|'*identifier*': rappresentazione di ereditarietà caso migliore: *inheritance1*' dichiarata ma '*Inheritance2 dei*' obbligatorio|
|[Errore del compilatore C2293](compiler-error-c2293.md)|«*identificatore*': non è consentito avere una variabile membro come identificatore based.|
|C2294 errore del compilatore|non è possibile esportare il simbolo '*identificatore*' perché contiene un collegamento interno|
|[Errore del compilatore C2295](compiler-error-c2295.md)|caratteri di escape '*carattere*': non è valido nella definizione macro|
|[Errore del compilatore C2296](compiler-error-c2296.md)|«*operator*': operando sinistro è di tipo '*tipo*»|
|[Errore del compilatore C2297](compiler-error-c2297.md)|«*operator*': operando destro è di tipo '*tipo*»|
|[Errore del compilatore C2298](compiler-error-c2298.md)|manca la chiamata al puntatore associato alla funzione membro|
|[Errore del compilatore C2299](compiler-error-c2299.md)|«*funzione*': modifica del comportamento: una specializzazione esplicita non può essere un costruttore di copia o operatore di assegnazione di copia|
