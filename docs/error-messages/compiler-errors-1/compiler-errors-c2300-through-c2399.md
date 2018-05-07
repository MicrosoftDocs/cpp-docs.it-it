---
title: Errore del compilatores C2300 Through C2399 | Documenti Microsoft
ms.custom: ''
ms.date: 11/17/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2303
- C2304
- C2305
- C2306
- C2314
- C2321
- C2323
- C2328
- C2329
- C2330
- C2331
- C2335
- C2336
- C2339
- C2340
- C2342
- C2343
- C2347
- C2354
- C2358
- C2359
- C2363
- C2366
- C2367
- C2398
- C2399
helpviewer_keywords:
- C2303
- C2304
- C2305
- C2306
- C2314
- C2321
- C2323
- C2328
- C2329
- C2330
- C2331
- C2335
- C2336
- C2339
- C2340
- C2342
- C2343
- C2347
- C2354
- C2358
- C2359
- C2363
- C2366
- C2367
- C2398
- C2399
dev_langs:
- C++
ms.assetid: 07ca45b5-b2f0-4049-837b-40a7a3caed88
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d8b758ce26897d5c2ad8baa176c8a83b2c9954df
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-errors-c2300-through-c2399"></a>Errore del compilatores C2300 Through C2399

Gli articoli in questa sezione della documentazione illustrano un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Error|Messaggio|
|-----------|-------------|
|[Errore del compilatore C2300](compiler-error-c2300.md)|'*classe*': classe non ha un distruttore chiamato ' ~*classe*'|
|[Errore del compilatore C2301](compiler-error-c2301.md)|a sinistra di ' -> ~*identificatore*' deve puntare a una classe, struct o unione|
|[Errore del compilatore C2302](compiler-error-c2302.md)|a sinistra di '. ~*identificatore*' deve avere il tipo di classe, struct o unione|
|C2303 errore del compilatore|Gestione strutturata delle eccezioni non può essere utilizzato in una coroutine|
|C2304 errore del compilatore|'*parola chiave*' non può essere utilizzato all'interno di un blocco catch|
|C2305 errore del compilatore|'*file*' non contiene informazioni di debug per questo modulo|
|C2306 errore del compilatore|'*file*' non contiene le informazioni di debug più recenti per questo modulo|
|[Errore del compilatore C2307](compiler-error-c2307.md)|pragma *direttiva* devono essere spostate all'esterno della funzione se è abilitata per la compilazione incrementale|
|[Errore del compilatore C2308](compiler-error-c2308.md)|concatenazione di stringhe non corrispondenti|
|[Errore del compilatore C2309](compiler-error-c2309.md)|gestore catch è prevista una dichiarazione di eccezione tra parentesi|
|[Errore del compilatore C2310](compiler-error-c2310.md)|i gestori catch devono specificare un tipo|
|[Errore del compilatore C2311](compiler-error-c2311.md)|'*tipo*': individuato da '...' alla riga *numero*|
|[Errore del compilatore C2312](compiler-error-c2312.md)|'*type1*': individuato da '*type2*' sulla riga *numero*|
|[Errore del compilatore C2313](compiler-error-c2313.md)|'*type1*': individuato dal riferimento ('*type2*') nella riga *numero*|
|C2314 errore del compilatore|parola chiave '*keyword1*' è obsoleto: utilizzare '*keyword2*' invece|
|[Errore del compilatore C2315](compiler-error-c2315.md)|'*type1*': riferimento individuato da '*type2*' sulla riga *numero*|
|[Errore del compilatore C2316](compiler-error-c2316.md)|'*tipo*': non può essere intercettato come distruttore e/o costruttore di copia è inaccessibili o eliminati|
|[Errore del compilatore C2317](compiler-error-c2317.md)|'try' blocco con inizio alla riga '*numero*' senza gestori catch|
|[Errore del compilatore C2318](compiler-error-c2318.md)|nessun blocco try associato a questo gestore catch|
|[Errore del compilatore C2319](compiler-error-c2319.md)|'try/catch' deve essere seguito da un'istruzione composta. '{' mancante|
|[Errore del compilatore C2320](compiler-error-c2320.md)|previsto ':' dopo l'identificatore di accesso '*identificatore*'|
|C2321 errore del compilatore|'*identificatore*' è una parola chiave e non può essere utilizzato in questo contesto|
|[Errore del compilatore C2322](compiler-error-c2322.md)|'*identificatore*': l'indirizzo di dllimport '*identificatore*' non è statico|
|C2323 errore del compilatore|'*identificatore*': non membro operator new o funzioni di eliminazione potrebbero non essere dichiarate static o in uno spazio dei nomi diverso da quello globali|
|[Errore del compilatore C2324](compiler-error-c2324.md)|'*identificatore*': imprevisto a destra di ':: ~'|
|[Errore del compilatore C2325](compiler-error-c2325.md)|'*type1*': tipo imprevisto a destra di ' -> ~': previsto '*type2*'|
|[Errore del compilatore C2326](compiler-error-c2326.md)|'*dichiaratore*': funzione non può accedere '*identificatore*'|
|[Errore del compilatore C2327](compiler-error-c2327.md)|'*identificatore*': non è un nome di tipo, statica o enumeratore|
|C2328 errore del compilatore|'*parola chiave*': parola chiave non è ancora supportata.|
|C2329 errore del compilatore|'*identificatore*': ptr64 non disponibile per puntatori a funzioni|
|C2330 errore del compilatore|'implementation_key ()' è valido solo in un'area delimitata da #pragma start_map_region/stop_map_region|
|C2331 errore del compilatore|l'accesso a '*identificatore*'ora definito come'*accessibility1*', in precedenza è stato definito come'*accessibility2*'|
|[Errore del compilatore C2332](compiler-error-c2332.md)|'*typedef*': nome tag mancante|
|[Errore del compilatore C2333](compiler-error-c2333.md)|'*funzione*': errore nella dichiarazione di funzione; corpo di funzione verrà ignorato.|
|[Errore del compilatore C2334](compiler-error-c2334.md)|token imprevisti prima '*token*'; corpo apparente funzione verrà ignorato.|
|C2335 errore del compilatore|'*identificatore*': un tipo non può essere inserito in un elenco di parametri di funzione|
|C2336 errore del compilatore|'*tipo*': tipo non valido|
|[Errore del compilatore C2337](compiler-error-c2337.md)|'*attributo*': attributo non trovato|
|[Errore del compilatore C2338](compiler-error-c2338.md)|*(messaggio di errore dal provider esterno)*|
|C2339 errore del compilatore|'*identificatore*': tipo non valido nell'IDL incorporato.|
|C2340 errore del compilatore|'*identificatore*': 'static' può essere utilizzato solo all'interno di una definizione di classe|
|[Errore del compilatore C2341](compiler-error-c2341.md)|'*sezione*': segmento deve essere definito utilizzando #pragma data_seg, code_seg o sezione precedente da utilizzare|
|C2342 errore del compilatore|Errore di sintassi: conflitto tra qualificatori di tipo|
|C2343 errore del compilatore|'*sezione*': conflitto tra gli attributi di sezione|
|[Errore del compilatore C2344](compiler-error-c2344.md)|align (*numero*): l'allineamento deve essere una potenza di due|
|[Errore del compilatore C2345](compiler-error-c2345.md)|align (*numero*): il valore di allineamento non valido|
|[Errore del compilatore C2346](compiler-error-c2346.md)|'*funzione*' non può essere compilata come nativa: '*spiegazione*'|
|Errore del compilatore C2347|Obsoleta.|
|[Errore del compilatore C2348](compiler-error-c2348.md)|'*tipo*': non è una funzione di aggregazione di tipo C, Impossibile esportarlo nell'IDL incorporato.|
|[Errore del compilatore C2349](compiler-error-c2349.md)|'*funzione*' non possono essere compilate come gestito: '*spiegazione*'; utilizzare #pragma non gestita|
|[Errore del compilatore C2350](compiler-error-c2350.md)|'*identificatore*' non è un membro statico|
|[Errore del compilatore C2351](compiler-error-c2351.md)|sintassi di inizializzazione costruttore C++ obsoleta|
|[Errore del compilatore C2352](compiler-error-c2352.md)|'*identificatore*': chiamata non valida di funzione membro non statica|
|[Errore del compilatore C2353](compiler-error-c2353.md)|Specifica di eccezione non è consentita.|
|Errore del compilatore C2354|Obsoleta.|
|[Errore del compilatore C2355](compiler-error-c2355.md)|'this': riferimento possibile solo all'interno di funzioni membro non statiche o inizializzatori di membri dati non statici|
|[Errore del compilatore C2356](compiler-error-c2356.md)|il segmento di inizializzazione non deve essere modificato durante l'unità di conversione|
|[Errore del compilatore C2357](compiler-error-c2357.md)|'*identificatore*': deve essere una funzione di tipo '*tipo*'|
|C2358 errore del compilatore|'*identificatore*': non è possibile definire una proprietà statica di fuori di una definizione di classe|
|C2359 errore del compilatore|Obsoleta.|
|[Errore del compilatore C2360](compiler-error-c2360.md)|inizializzazione di '*identificatore*' ignorata da un'etichetta 'case'|
|[Errore del compilatore C2361](compiler-error-c2361.md)|inizializzazione di '*identificatore*' ignorata da un'etichetta 'default'|
|[Errore del compilatore C2362](compiler-error-c2362.md)|inizializzazione di '*identificatore*' ignorata da ' goto *etichetta*'|
|C2363 errore del compilatore|funzione di limite numerico intrinseca del compilatore richiede un argomento di stringa letterale|
|[Errore del compilatore C2364](compiler-error-c2364.md)|'*tipo*': tipo non valido per l'attributo personalizzato|
|[Errore del compilatore C2365](compiler-error-c2365.md)|'*member1*': ridefinizione; la definizione precedente era '*member2*'|
|C2366 errore del compilatore|'*identificatore*': ridefinizione; identificatori implementation_key differenti.|
|C2367 errore del compilatore|Obsoleta.|
|[Errore del compilatore C2368](compiler-error-c2368.md)|'*identificatore*': ridefinizione; identificatori di allocazione differenti|
|[Errore del compilatore C2369](compiler-error-c2369.md)|'*identificatore*': ridefinizione; indici differenti|
|[Errore del compilatore C2370](compiler-error-c2370.md)|'*identificatore*': ridefinizione; la classe di archiviazione diverse|
|[Errore del compilatore C2371](compiler-error-c2371.md)|'*identificatore*': ridefinizione; tipi di base differenti|
|[Errore del compilatore C2372](compiler-error-c2372.md)|'*identificatore*': ridefinizione; diversi tipi di riferimento indiretto|
|[Errore del compilatore C2373](compiler-error-c2373.md)|'*identificatore*': ridefinizione; modificatori di tipo differenti|
|[Errore del compilatore C2374](compiler-error-c2374.md)|'*identificatore*': ridefinizione; inizializzazione multipla|
|[Errore del compilatore C2375](compiler-error-c2375.md)|'*identificatore*': ridefinizione; collegamento diverso|
|[Errore del compilatore C2376](compiler-error-c2376.md)|'*identificatore*': ridefinizione; allocazione con base differente|
|[Errore del compilatore C2377](compiler-error-c2377.md)|'*identificatore*': ridefinizione; Impossibile eseguire l'overload typedef con altri simboli|
|[Errore del compilatore C2378](compiler-error-c2378.md)|'*identificatore*': ridefinizione; Impossibile eseguire l'overload simbolo con typedef|
|[Errore del compilatore C2379](compiler-error-c2379.md)|parametro formale *numero* ha un tipo diverso quando promosso|
|[Errore del compilatore C2380](compiler-error-c2380.md)|tipi prima '*identificatore*' (costruttore con tipo restituito o ridefinizione non valida del nome di classe corrente)|
|[Errore del compilatore C2381](compiler-error-c2381.md)|'*identificatore*': ridefinizione. '__declspec(noreturn)' o '[[noreturn]]' è diverso|
|[Errore del compilatore C2382](compiler-error-c2382.md)|'*identificatore*': ridefinizione; specifiche di eccezione differenti|
|[Errore del compilatore C2383](compiler-error-c2383.md)|'*identificatore*': argomenti predefiniti non consentiti su questo simbolo|
|[Errore del compilatore C2384](compiler-error-c2384.md)|'*membro*': non è possibile applicare thread_local o declspec a un membro di una classe gestita o WinRT|
|[Errore del compilatore C2385](compiler-error-c2385.md)|accesso ambiguo di '*membro*'|
|[Errore del compilatore C2386](compiler-error-c2386.md)|'*identificatore*': un simbolo con questo nome esiste già nell'ambito corrente|
|[Errore del compilatore C2387](compiler-error-c2387.md)|'*identificatore*': classe di base ambigua|
|[Errore del compilatore C2388](compiler-error-c2388.md)|'*identificatore*': Impossibile dichiarare un simbolo con __declspec(appdomain) e declspec (Process)|
|[Errore del compilatore C2389](compiler-error-c2389.md)|'*operatore*': operando 'nullptr' non valido|
|[Errore del compilatore C2390](compiler-error-c2390.md)|'*identificatore*': classe di archiviazione errata*identificatore*'|
|[Errore del compilatore C2391](compiler-error-c2391.md)|'*identificatore*': 'friend' non può essere utilizzato durante la definizione di tipo|
|[Errore del compilatore C2392](compiler-error-c2392.md)|'*member1*': restituiti di covariante tipi non supportati nei tipi gestiti o WinRT, altrimenti '*member2*' verrebbe eseguito l'override|
|[Errore del compilatore C2393](compiler-error-c2393.md)|'*simbolo*': Impossibile allocare il simbolo per dominio di applicazione nel segmento '*segmento*'|
|[Errore del compilatore C2394](compiler-error-c2394.md)|'*tipo*:: operatore *operatore*': operatore CLR o WinRT non valido. Almeno un parametro deve essere dei seguenti tipi di: ' t ^', ' t ^ %', ' t ^ &', dove T = '*tipo*'|
|[Errore del compilatore C2395](compiler-error-c2395.md)|'*tipo*:: operatore *operatore*': operatore CLR o WinRT non valido. Almeno un parametro deve essere dei seguenti tipi: ' T' ', ' T' %', ' T' &', ' T' ^', ' t ^ %', ' t ^ &', dove T = '*tipo*'|
|[Errore del compilatore C2396](compiler-error-c2396.md)|'*type1*:: operatore *type2*': funzione di conversione definita dall'utente CLR o WinRT non valido. Deve essere una conversione da o convertire in: ' t ^', ' t ^ %', ' t ^ &', dove T = '*type1*'|
|[Errore del compilatore C2397](compiler-error-c2397.md)|conversione da '*type1*'a'*type2*' richiede una conversione di narrowing|
|C2398 errore del compilatore|Elemento '*numero*': conversione da '*type1*'a'*type2*' richiede una conversione di narrowing|
|C2399 errore del compilatore|Obsoleta.|
