---
title: C2500 errori del compilatore a C2599 | Documenti Microsoft
ms.custom: ''
ms.date: 11/17/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2501
- C2508
- C2515
- C2519
- C2520
- C2522
- C2525
- C2527
- C2536
- C2538
- C2539
- C2546
- C2547
- C2559
- C2560
- C2564
- C2565
- C2576
- C2578
- C2580
- C2590
- C2591
- C2595
- C2596
helpviewer_keywords:
- C2501
- C2508
- C2515
- C2519
- C2520
- C2522
- C2525
- C2527
- C2536
- C2538
- C2539
- C2546
- C2547
- C2559
- C2560
- C2564
- C2565
- C2576
- C2578
- C2580
- C2590
- C2591
- C2595
- C2596
dev_langs:
- C++
ms.assetid: a869aaed-e9f6-49e3-b273-00ea7f45bed7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 994f29009294e6b49851a817a5872fcaa122b153
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33284264"
---
# <a name="compiler-errors-c2500-through-c2599"></a>C2500 errori del compilatore a C2599

Gli articoli in questa sezione della documentazione illustrano un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Error|Messaggio|
|-----------|-------------|
|[Errore del compilatore C2500](compiler-error-C2500.md)|'*identifier1*': '*identifier2*' è già una classe base diretta|
|C2501 errore del compilatore|'*identificatore*': ' declspec (*identificatore*)' può essere applicato solo a struct, unioni, classi o membri di campo di bit senza segno|
|[Errore del compilatore C2502](compiler-error-C2502.md)|'*identificatore*': troppi modificatori di accesso nella classe di base|
|[Errore del compilatore C2503](compiler-error-C2503.md)|'*classe*': le classi base non possono contenere matrici di dimensioni zero|
|[Errore del compilatore C2504](compiler-error-C2504.md)|'*classe*': classe base non definita|
|[Errore del compilatore C2505](compiler-error-C2505.md)|'*simbolo*': ' declspec (*identificatore*)' può essere applicato solo a dichiarazioni o definizioni di oggetti globali o membri dati statici|
|[Errore del compilatore C2506](compiler-error-C2506.md)|'*membro*': ' declspec (*identificatore*)' non è possibile applicare a questo simbolo|
|[Errore del compilatore C2507](compiler-error-C2507.md)|'*identificatore*': troppi modificatori virtual nella classe di base|
|C2508 errore del compilatore|'*identificatore*': ' declspec (*identificatore1*)' non può essere combinato con ' declspec (*identificatore2*)'|
|[Errore del compilatore C2509](compiler-error-C2509.md)|'*identificatore*': funzione membro non dichiarata '*classe*'|
|[Errore del compilatore C2510](compiler-error-C2510.md)|'*identificatore*': a sinistra di ':: ' deve essere una classe/struttura/unione|
|[Errore del compilatore C2511](compiler-error-C2511.md)|'*identificatore*': membro funzione overload non trovata in '*classe*'|
|[Errore del compilatore C2512](compiler-error-C2512.md)|'*identificatore*': non è disponibile alcun costruttore predefinito appropriato|
|[Errore del compilatore C2513](compiler-error-C2513.md)|' * tipo ': nessuna variabile dichiarata prima '='|
|[Errore del compilatore C2514](compiler-error-C2514.md)|'*classe*': classe non ha costruttori|
|C2515 errore del compilatore|'*identificatore*': 'vtguard' può essere applicato solo a definizioni o dichiarazioni di classe|
|[Errore del compilatore C2516](compiler-error-C2516.md)|'*classe*': non è una classe base valida|
|[Errore del compilatore C2517](compiler-error-C2517.md)|'*identificatore*': a destra di ':: ' non è definito|
|[Errore del compilatore C2518](compiler-error-C2518.md)|parola chiave '*parola chiave*' non valido nell'elenco delle classi base; verrà ignorata|
|C2519 errore del compilatore|'*identificatore*': gli attributi WinRT possono contenere solo campi pubblici|
|C2520 errore del compilatore|'*classe*': nessun costruttore non esplicito disponibile per la conversione implicita|
|[Errore del compilatore C2521](compiler-error-C2521.md)|un distruttore/finalizzatore non accetta alcun argomento|
|C2522 errore del compilatore|'*identificatore*': identificatore di Overload non può essere utilizzato in '*identifier1*'perché è già specificato in'*identifier2*'|
|[Errore del compilatore C2523](compiler-error-C2523.md)|'*classe*:: ~*identificatore*': mancata corrispondenza del tag distruttore/finalizzatore|
|[Errore del compilatore C2524](compiler-error-C2524.md)|'*identificatore*': un distruttore/finalizzatore deve avere un elenco di parametri 'void'|
|C2525 errore del compilatore|'*identificatore*': il parametro '*identifier1*'denominato'*identifier2*' sulla base di funzione e deve corrispondere in un'implementazione pubblicata|
|[Errore del compilatore C2526](compiler-error-C2526.md)|'*identifier1*': funzione con collegamento C non può restituire classe C++*identifier2*'|
|C2527 errore del compilatore|'*identificatore*': Impossibile specificare DefaultOverload sia '*function1*'e'*function2*'. Rimuovere una specifica o rinominare la funzione durante l'implementazione|
|[Errore del compilatore C2528](compiler-error-C2528.md)|'*identificatore*': puntatore a riferimento non valido|
|[Errore del compilatore C2529](compiler-error-C2529.md)|'*identificatore*': riferimento a riferimento non valido|
|[Errore del compilatore C2530](compiler-error-C2530.md)|'*identificatore*': i riferimenti devono essere inizializzati|
|[Errore del compilatore C2531](compiler-error-C2531.md)|'*identificatore*': riferimento a un bit campo non valido|
|[Errore del compilatore C2532](compiler-error-C2532.md)|'*identificatore*': modificatore non valido per riferimento|
|[Errore del compilatore C2533](compiler-error-C2533.md)|'*identificatore*': costruttori non possono avere un tipo restituito|
|[Errore del compilatore C2534](compiler-error-C2534.md)|'*identificatore*': costruttore non può restituire un valore|
|[Errore del compilatore C2535](compiler-error-C2535.md)|'*identificatore*': funzione membro già definita o dichiarata|
|Errore del compilatore C2536|Obsoleta.|
|[Errore del compilatore C2537](compiler-error-C2537.md)|'*identificatore*': specifiche di collegamento non valido|
|Errore del compilatore C2538|Obsoleta.|
|Errore del compilatore C2539|Obsoleta.|
|[Errore del compilatore C2540](compiler-error-C2540.md)|espressione non costante come limite di matrice|
|[Errore del compilatore C2541](compiler-error-C2541.md)|'*identificatore*': Impossibile eliminare gli oggetti che non sono puntatori|
|[Errore del compilatore C2542](compiler-error-C2542.md)|'*identificatore*': oggetto di classe non ha un costruttore per l'inizializzazione|
|[Errore del compilatore C2543](compiler-error-C2543.md)|previsto ']' per l'operatore '[]'|
|[Errore del compilatore C2544](compiler-error-C2544.md)|previsto ')' per l'operatore '()'|
|[Errore del compilatore C2545](compiler-error-C2545.md)|'*operatore*': Impossibile trovare sottoposti a overload l'operatore|
|C2546 errore del compilatore|'*identificatore*': quando un tipo viene definito in un assembly di interoperabilità primario sia un assembly di interoperabilità primario è necessario fare riferimento innanzitutto no-PIA|
|C2547 errore del compilatore|'*identificatore*': tutti i parametri di un metodo pubblicato devono essere denominati in modo esplicito nella dichiarazione|
|[Errore del compilatore C2548](compiler-error-C2548.md)|'*funzione*': valore predefinito mancante per il parametro *parametro*|
|[Errore del compilatore C2549](compiler-error-C2549.md)|conversione definita dall'utente non è possibile specificare un tipo restituito|
|[Errore del compilatore C2550](compiler-error-C2550.md)|'*identificatore*': gli elenchi di inizializzatori di costruttore sono consentiti solo nella definizione del costruttore|
|[Errore del compilatore C2551](compiler-error-C2551.md)|il tipo 'void *' richiede un cast esplicito|
|[Errore del compilatore C2552](compiler-error-C2552.md)|'*identificatore*': non aggregati non possono essere inizializzati con un elenco di inizializzatori|
|[Errore del compilatore C2553](compiler-error-C2553.md)|'*tipo* *derived_class*::*funzione*': tipo restituito della funzione virtual in override differisce da '*tipo* *base_ classe*::*funzione*'|
|[Errore del compilatore C2555](compiler-error-C2555.md)|'*derived_class*::*funzione*': funzione virtual in override restituito di tipo covariante e differisce non da '*base_class*::*funzione*'|
|[Errore del compilatore C2556](compiler-error-C2556.md)|'*type1* *classe*::*funzione*': funzione in overload differisce solo per il tipo restituito da '*type2* *classe*::*funzione*'|
|[Errore del compilatore C2557](compiler-error-C2557.md)|'*identificatore*': Impossibile inizializzare i membri privati e protetti senza un costruttore|
|[Errore del compilatore C2558](compiler-error-C2558.md)|classe*classe*': nessun costruttore di copia disponibile o costruttore di copia dichiarato 'explicit'|
|C2559 errore del compilatore|'*identificatore*': Impossibile eseguire l'overload di una funzione membro senza qualificatore di riferimento con una funzione membro con qualificatore di riferimento|
|C2560 errore del compilatore|'*identificatore*': Impossibile eseguire l'overload di una funzione membro con qualificatore di riferimento con una funzione membro senza qualificatore di riferimento|
|[Errore del compilatore C2561](compiler-error-C2561.md)|'*funzione*': funzione deve restituire un valore|
|[Errore del compilatore C2562](compiler-error-C2562.md)|'*funzione*': funzione 'void' restituisce un valore|
|[Errore del compilatore C2563](compiler-error-C2563.md)|mancata corrispondenza nell'elenco di parametri formali|
|Errore del compilatore C2564|Obsoleta.|
|C2565 errore del compilatore|'*identificatore*': qualificatore di riferimento non è valido per costruttori e distruttori|
|[Errore del compilatore C2566](compiler-error-C2566.md)|funzione in overload in espressione condizionale|
|[Errore del compilatore C2567](compiler-error-C2567.md)|Impossibile aprire metadati in '*filename*', *possible_reason*|
|[Errore del compilatore C2568](compiler-error-C2568.md)|'*identificatore*': Impossibile risolvere l'overload della funzione|
|[Errore del compilatore C2569](compiler-error-C2569.md)|'*identificatore*': Impossibile utilizzare enum/union come classe di base|
|[Errore del compilatore C2570](compiler-error-C2570.md)|'*identificatore*': un'unione non può avere classi base|
|[Errore del compilatore C2571](compiler-error-C2571.md)|'*identificatore*': funzione virtuale non consentita nell'unione '*unione*'|
|[Errore del compilatore C2572](compiler-error-C2572.md)|'*funzione*': ridefinizione dell'argomento predefinito: parametro *numero*|
|[Errore del compilatore C2573](compiler-error-C2573.md)|'*classe*': Impossibile eliminare puntatori a oggetti di questo tipo; la classe non dispone di alcun overload senza posizione per 'operator delete'. Utilizzo:: eliminare o aggiungere 'operatore delete(void*)' alla classe|
|[Errore del compilatore C2574](compiler-error-C2574.md)|'*distruttore*': non può essere dichiarato static|
|[Errore del compilatore C2575](compiler-error-C2575.md)|'*identificatore*': solo funzioni membro e basi possono essere virtuali|
|C2576 errore del compilatore|'*identificatore*': non può introdurre un nuovo metodo virtuale come 'public'. Si consiglia di rendere il metodo non virtuale oppure modificare l'accessibilità a 'internal' o 'protected private'|
|[Errore del compilatore C2577](compiler-error-C2577.md)|'*identificatore*': un distruttore/finalizzatore non può avere un tipo restituito|
|C2578 errore del compilatore|'*classe*': tipo non può avere un 'protected' o un costruttore 'protected public'|
|[Errore del compilatore C2579](compiler-error-C2579.md)|Impossibile risolvere il tipo *tipo* (*offset*). È previsto *filename*|
|C2580 errore del compilatore|'*identificatore*': più versioni di un funzioni membro speciali impostate come predefinite non sono consentite.|
|[Errore del compilatore C2581](compiler-error-C2581.md)|'*tipo*': statico ' operator =' non è valida (funzione)|
|[Errore del compilatore C2582](compiler-error-C2582.md)|' operatore *operatore*'funzione non è disponibile in'*tipo*'|
|[Errore del compilatore C2583](compiler-error-C2583.md)|'*identificatore*': ' const/volatile' puntatore 'this' non è valido per costruttori e distruttori|
|[Errore del compilatore C2584](compiler-error-C2584.md)|'*classe*': classe base diretta '*base_class2*' non è accessibile; già base di '*base_class1*'|
|[Errore del compilatore C2585](compiler-error-C2585.md)|la conversione esplicita a '*tipo*' è ambiguo|
|[Errore del compilatore C2586](compiler-error-C2586.md)|sintassi di conversione definito dall'utente errata: riferimenti indiretti non validi|
|[Errore del compilatore C2587](compiler-error-C2587.md)|'*identificatore*': Impossibile utilizzare una variabile locale come parametro predefinito|
|[Errore del compilatore C2588](compiler-error-C2588.md)|':: ~*identificatore*': distruttore/finalizzatore globale non valido|
|[Errore del compilatore C2589](compiler-error-C2589.md)|'*identificatore*': token non valido a destra di ':: '|
|C2590 errore del compilatore|'*identificatore*': solo un costruttore può avere un elenco di inizializzatori di basi/membri|
|C2591 errore del compilatore|ExclusiveTo non può utilizzare '*tipo*' come argomento. Solo un 'ref class' è un argomento valido|
|[Errore del compilatore C2592](compiler-error-C2592.md)|'*classe*': '*base_class2*'ereditato'*base_class1*' e non può essere specificato nuovamente|
|[Errore del compilatore C2593](compiler-error-C2593.md)|' operatore *identificatore*' è ambiguo|
|[Errore del compilatore C2594](compiler-error-C2594.md)|'*operatore*': conversioni ambigue da '*type1*'a'*type2*'|
|C2595 errore del compilatore|'*identificatore*' WinRT di un tipo di attributo deve essere sealed|
|C2596 errore del compilatore|'*identificatore*' un campo attributo WinRT può essere solo un 'public enum class', 'int', 'unsigned int', 'bool', 'Platform:: Type', 'Platform:: String' o 'Windows:: Foundation:: HResult'|
|[Errore del compilatore C2597](compiler-error-C2597.md)|riferimento non valido al membro non statico '*identificatore*'|
|[Errore del compilatore C2598](compiler-error-C2598.md)|Specifica di collegamento deve essere in ambito globale|
|[Errore del compilatore C2599](compiler-error-C2599.md)|'*identificatore*': la dichiarazione con prototipo di un'enumerazione gestita o WinRT non è consentita.|  