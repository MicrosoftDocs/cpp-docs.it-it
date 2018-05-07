---
title: Del compilatore C2800 errori a C2899 | Documenti Microsoft
ms.custom: ''
ms.date: 11/17/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2816
- C2820
- C2822
- C2826
- C2832
- C2836
- C2837
- C2840
- C2841
- C2848
- C2851
- C2852
- C2853
- C2866
- C2880
- C2887
- C2889
- C2895
- C2899
helpviewer_keywords:
- C2816
- C2820
- C2822
- C2826
- C2832
- C2836
- C2837
- C2840
- C2841
- C2848
- C2851
- C2852
- C2853
- C2866
- C2880
- C2887
- C2889
- C2895
- C2899
dev_langs:
- C++
ms.assetid: e5de1e92-746a-4315-a331-c5d9efb76dbb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: dc85ab15a262a5f4976fcdc7278401a0d9a128d1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-errors-c2800-through-c2899"></a>Del compilatore C2800 errori a C2899

Gli articoli in questa sezione della documentazione illustrano un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Error|Messaggio|
|-----------|-------------|
|[Errore del compilatore C2800](compiler-error-c2800.md)|' operatore *operatore*' Impossibile eseguire l'overload|
|[Errore del compilatore C2801](compiler-error-c2801.md)|'*membro*' deve essere un membro non statico|
|[Errore del compilatore C2802](compiler-error-c2802.md)|membro statico ' operatore *operatore*' non ha parametri formali|
|[Errore del compilatore C2803](compiler-error-c2803.md)|' operatore *operatore*' deve avere almeno un parametro formale di tipo classe|
|[Errore del compilatore C2804](compiler-error-c2804.md)|binario ' operatore *operatore*' ha troppi parametri|
|[Errore del compilatore C2805](compiler-error-c2805.md)|binario ' operatore *operatore*' ha parametri sufficienti|
|[Errore del compilatore C2806](compiler-error-c2806.md)|' operatore *operatore*' ha troppi parametri formali|
|[Errore del compilatore C2807](compiler-error-c2807.md)|il secondo parametro della forma suffissa di ' operator *operatore*' deve essere 'int'|
|[Errore del compilatore C2808](compiler-error-c2808.md)|unario ' operatore *operatore*' ha troppi parametri formali|
|[Errore del compilatore C2809](compiler-error-c2809.md)|' operatore *operatore*' non ha parametri formali|
|[Errore del compilatore C2810](compiler-error-c2810.md)|'*interfaccia*': un'interfaccia può ereditare solo da un'altra interfaccia|
|[Errore del compilatore C2811](compiler-error-c2811.md)|'*type1*': non può ereditare da '*type2*', una classe di riferimento può ereditare solo da una classe di riferimento o una classe di interfaccia|
|[Errore del compilatore C2812](compiler-error-c2812.md)|#import non è supportato con /clr: pure e /CLR: safe|
|[Errore del compilatore C2813](compiler-error-c2813.md)|#import non supportato con /MP|
|[Errore del compilatore C2814](compiler-error-c2814.md)|'*membro*': un tipo nativo non può essere annidato all'interno di un tipo gestito o WinRT '*classe*'|
|[Errore del compilatore C2815](compiler-error-c2815.md)|'operator delete': il primo parametro formale deve essere ' void *', ma '* tipo *' è stata utilizzata|
|C2816 errore del compilatore|Obsoleta.|
|[Errore del compilatore C2817](compiler-error-c2817.md)|tipo restituito per 'operator delete' deve essere 'void'|
|[Errore del compilatore C2818](compiler-error-c2818.md)|applicazione di 'operator ->' di overload è ricorsiva tramite il tipo '*classe*'|
|[Errore del compilatore C2819](compiler-error-c2819.md)|tipo '*classe*' non ha un membro di overload 'operator ' ->|
|C2820 errore del compilatore|Obsoleta.|
|[Errore del compilatore C2821](compiler-error-c2821.md)|il primo parametro formale di 'operator new' deve essere 'size_t'|
|C2822 errore del compilatore|rimozione locale non è supportata in questa piattaforma|
|[Errore del compilatore C2823](compiler-error-c2823.md)|non è valido un modello o generico (typedef)|
|[Errore del compilatore C2824](compiler-error-c2824.md)|il tipo restituito per 'operator new' deve essere ' void *'|
|[Errore del compilatore C2825](compiler-error-c2825.md)|'*identificatore*': deve essere una classe o spazio dei nomi quando seguito da ':: '|
|Errore del compilatore C2826|Obsoleta.|
|[Errore del compilatore C2827](compiler-error-c2827.md)|' operatore *operatore*' non può essere sottoposto a override a livello globale con forma unaria|
|[Errore del compilatore C2828](compiler-error-c2828.md)|' operatore *operatore*' non può essere sottoposto a override a livello globale con forma binaria|
|[Errore del compilatore C2829](compiler-error-c2829.md)|' operatore *operatore*' non può avere un elenco di parametri variabile|
|[Errore del compilatore C2830](compiler-error-c2830.md)|solo i parametri di posizione per 'operator new' possono avere valori predefiniti|
|[Errore del compilatore C2831](compiler-error-c2831.md)|' operatore *operatore*' non può avere parametri predefiniti|
|C2832 errore del compilatore|'*identificatore*': un tipo di riferimento non può essere inizializzato dal valore|
|[Errore del compilatore C2833](compiler-error-c2833.md)|' operatore *token*' non è un tipo o un operatore riconosciuto|
|[Errore del compilatore C2834](compiler-error-c2834.md)|' operatore *operatore*' deve essere qualificato a livello globale|
|[Errore del compilatore C2835](compiler-error-c2835.md)|conversione definita dall'utente '*tipo*' non accetta parametri formali|
|C2836 errore del compilatore|'*identificatore*': membro di un solo dati non statici di un'unione potrebbe avere un inizializzatore di membro predefinito|
|Errore del compilatore C2837|'*funzione*': Impossibile utilizzare direttive OpenMP e #pragma loop (hint_parallel) nella stessa funzione|
|[Errore del compilatore C2838](compiler-error-c2838.md)|'*identificatore*': il nome completo non valido nella dichiarazione di membro|
|[Errore del compilatore C2839](compiler-error-c2839.md)|tipo restituito non valido '*tipo*' di overload 'operator ->'|
|Errore del compilatore C2840|argomento di istruzione non costante|
|C2841 errore del compilatore|registrare l'argomento non costante|
|[Errore del compilatore C2842](compiler-error-c2842.md)|'*classe*': un tipo gestito o WinRT non può definire il proprio 'operator new' o 'operator delete'|
|[Errore del compilatore C2843](compiler-error-c2843.md)|'*membro*': Impossibile accettare l'indirizzo di un membro dati non statico o il metodo di un tipo gestito o WinRT|
|[Errore del compilatore C2844](compiler-error-c2844.md)|'*identificatore*': non può essere un membro di interfaccia '*interfaccia*'|
|[Errore del compilatore C2845](compiler-error-c2845.md)|'*tipo*': aritmetica dei puntatori non consentita per questo tipo|
|[Errore del compilatore C2846](compiler-error-c2846.md)|'*interfaccia*': un'interfaccia non può avere un costruttore|
|[Errore del compilatore C2847](compiler-error-c2847.md)|Impossibile applicare sizeof a tipo gestito o WinRT '*classe*'|
|C2848 errore del compilatore|'*classe*': un tipo gestito o WinRT non può essere un membro di un'unione|
|[Errore del compilatore C2849](compiler-error-c2849.md)|'*interfaccia*': un'interfaccia non può avere un distruttore|
|[Errore del compilatore C2850](compiler-error-c2850.md)|'*costruire*': consentito solo in ambito file, potrebbe non essere in un costrutto annidato|
|C2851 errore del compilatore|'*enum*': un'enumerazione WinRT pubblica può utilizzare solo 'int' o 'unsigned int' come tipo di base|
|C2852 errore del compilatore|'*identificatore*': solo i membri di dati possono essere inizializzati all'interno di una classe|
|C2853 errore del compilatore|'*identificatore*': un membro dati non statici non può avere un tipo che contiene 'auto'|
|[Errore del compilatore C2854](compiler-error-c2854.md)|Errore di sintassi in #pragma hdrstop|
|[Errore del compilatore C2855](compiler-error-c2855.md)|opzione della riga di comando '*opzione*' non è coerente con l'intestazione precompilata|
|[Errore del compilatore C2856](compiler-error-c2856.md)|#pragma hdrstop non può trovarsi all'interno di un blocco #if|
|[Errore del compilatore C2857](compiler-error-c2857.md)|' #include ' specificata con il /Yc istruzione*filename* opzione della riga di comando non è stato trovato nel file di origine|
|[Errore del compilatore C2858](compiler-error-c2858.md)|opzione della riga di comando ' /Yc (/Fd*filename*)' non è coerente con l'intestazione precompilata, utilizzato ' /Fd*filename*'|
|[Errore del compilatore C2859](compiler-error-c2859.md)|*filename* non è il *filetype* file che è stato utilizzato quando è stata creata questa intestazione precompilata, ricreare l'intestazione precompilata.|
|[Errore del compilatore C2860](compiler-error-c2860.md)|'void' non può essere un tipo di argomento, ad eccezione di '(void)'|
|[Errore del compilatore C2861](compiler-error-c2861.md)|'*dichiarazione*': non è possibile definire una funzione membro di interfaccia|
|[Errore del compilatore C2862](compiler-error-c2862.md)|'*interfaccia*': un'interfaccia può avere solo membri pubblici|
|[Errore del compilatore C2863](compiler-error-c2863.md)|'*interfaccia*': un'interfaccia non può avere elementi Friend|
|[Errore del compilatore C2864](compiler-error-c2864.md)|'*identificatore*': una variabile membro o un modello di dati statici con un inizializzatore in classe deve avere un tipo integrale const non volatile|
|[Errore del compilatore C2865](compiler-error-c2865.md)|'*operatore*': confronto non valido per l'oggetto, puntatore o handle|
|Errore del compilatore C2866|Obsoleta.|
|[Errore del compilatore C2867](compiler-error-c2867.md)|'*identificatore*': non è uno spazio dei nomi|
|[Errore del compilatore C2868](compiler-error-c2868.md)|'*identificatore*': sintassi non valida per la dichiarazione using; previsto nome completo|
|[Errore del compilatore C2869](compiler-error-c2869.md)|'*identificatore*': è già stato definito per uno spazio dei nomi|
|[Errore del compilatore C2870](compiler-error-c2870.md)|'*identificatore*': la definizione dello spazio dei nomi deve comparire in ambito file o immediatamente all'interno di un'altra definizione di spazio dei nomi|
|[Errore del compilatore C2871](compiler-error-c2871.md)|'*identificatore*': non esiste uno spazio dei nomi con questo nome|
|[Errore del compilatore C2872](compiler-error-c2872.md)|'*identificatore*': simbolo ambiguo|
|[Errore del compilatore C2873](compiler-error-c2873.md)|'*simbolo*': simbolo non può essere utilizzato in una dichiarazione using|
|[Errore del compilatore C2874](compiler-error-c2874.md)|la dichiarazione using comporta una dichiarazione multipla di '*identificatore*'|
|[Errore del compilatore C2875](compiler-error-c2875.md)|la dichiarazione using comporta una dichiarazione multipla di '*classe*::*identificatore*'|
|[Errore del compilatore C2876](compiler-error-c2876.md)|'*classe*::*membro*': non tutti gli overload sono accessibili|
|[Errore del compilatore C2877](compiler-error-c2877.md)|'*membro*'non è accessibile da '*classe*'|
|[Errore del compilatore C2878](compiler-error-c2878.md)|'*identificatore*': un spazio dei nomi o classe con questo nome non esiste|
|[Errore del compilatore C2879](compiler-error-c2879.md)|'*identificatore*': solo uno spazio dei nomi può essere assegnato un nome alternativo per una definizione di alias dello spazio dei nomi|
|C2880 errore del compilatore|SWI o HVC richiede una costante valida come primo argomento (numero SWI)|
|[Errore del compilatore C2881](compiler-error-c2881.md)|'*identificatore*': è già utilizzato come alias per '*classe*'|
|[Errore del compilatore C2882](compiler-error-c2882.md)|'*identificatore*': utilizzo non valido dell'identificatore dello spazio dei nomi nell'espressione|
|[Errore del compilatore C2883](compiler-error-c2883.md)|'*funzione*': dichiarazione di funzione è in conflitto con '*identificatore*' introdotto dalla dichiarazione using|
|[Errore del compilatore C2884](compiler-error-c2884.md)|'*identificatore*': introdotto dalla dichiarazione using in conflitto con la funzione locale '*funzione*'|
|[Errore del compilatore C2885](compiler-error-c2885.md)|'*classe*::*identificatore*': dichiarazione using non valida nell'ambito di classe non|
|[Errore del compilatore C2886](compiler-error-c2886.md)|'*classe*::*identificatore*': simbolo non può essere utilizzato in una dichiarazione using di membri|
|C2887 errore del compilatore|SWI o HVC non può avere più di cinque argomenti (numero SWI, r0 - r3)|
|[Errore del compilatore C2888](compiler-error-c2888.md)|'*identificatore*': simbolo non può essere definito nello spazio dei nomi '*dello spazio dei nomi*'|
|C2889 errore del compilatore|'*classe*': un tipo di classe gestita o WinRT non può essere una classe base virtuale|
|[Errore del compilatore C2890](compiler-error-c2890.md)|'*classe*': una classe di riferimento può avere solo una classe di base non di interfaccia|
|[Errore del compilatore C2891](compiler-error-c2891.md)|'*parametro*': Impossibile accettare l'indirizzo di un parametro di modello|
|[Errore del compilatore C2892](compiler-error-c2892.md)|classe locale non deve avere modelli di membro|
|[Errore del compilatore C2893](compiler-error-c2893.md)|Impossibile specializzare il modello di funzione '*modello*'|
|[Errore del compilatore C2894](compiler-error-c2894.md)|modelli non possono essere dichiarati con collegamento 'c'|
|C2895 errore del compilatore|'*dichiarazione*': Impossibile creare in modo esplicito un'istanza di un modello di funzione che è stato dichiarato con dllimport|
|[Errore del compilatore C2896](compiler-error-c2896.md)|'*function1*': non è possibile utilizzare una funzione modello o generico '*function2*' come argomento di funzione|
|[Errore del compilatore C2897](compiler-error-c2897.md)|un distruttore/finalizzatore non può essere un modello di funzione|
|[Errore del compilatore C2898](compiler-error-c2898.md)|'*dichiarazione*': i modelli di funzione membro non possono essere virtuali|
|Errore del compilatore C2899|Obsoleta.|
