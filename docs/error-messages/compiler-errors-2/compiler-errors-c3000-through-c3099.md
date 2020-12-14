---
description: 'Altre informazioni su: errori del compilatore C3000 tramite C3099'
title: Errori del compilatore da C3000 a C3099
ms.date: 04/21/2019
f1_keywords:
- C3051
- C3061
- C3064
- C3067
- C3074
- C3078
- C3079
- C3081
- C3082
- C3086
- C3088
- C3089
- C3090
- C3091
- C3092
- C3093
- C3098
helpviewer_keywords:
- C3051
- C3061
- C3064
- C3067
- C3074
- C3078
- C3079
- C3081
- C3082
- C3086
- C3088
- C3089
- C3090
- C3091
- C3092
- C3093
- C3098
ms.assetid: 01b7b9cb-b351-4b5a-8cb0-1fcddb08d2ab
ms.openlocfilehash: ce4e088a1d69da20cae87fd9b824ddef4769c8da
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97238700"
---
# <a name="compiler-errors-c3000-through-c3099"></a>Errori del compilatore da C3000 a C3099

Negli articoli di questa sezione della documentazione viene illustrato un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Errore|Message|
|-----------|-------------|
|Errore del compilatore C3000|Obsoleta.|
|[Errore del compilatore C3001](compiler-error-c3001.md)|'*Message*': previsto un nome di direttiva OpenMP|
|[Errore del compilatore C3002](compiler-error-c3002.md)|'*name1* *name2*': più nomi di direttiva OpenMP|
|[Errore del compilatore C3003](compiler-error-c3003.md)|'*Directive*': nomi di direttiva OpenMP non consentiti dopo clausole di direttiva|
|[Errore del compilatore C3004](compiler-error-c3004.md)|'*clause*': clausola non valida nella direttiva '*Directive*' OpenMP|
|[Errore del compilatore C3005](compiler-error-c3005.md)|'*Message*': rilevato token imprevisto nella direttiva '*Directive*' OpenMP|
|[Errore del compilatore C3006](compiler-error-c3006.md)|'*clause*': la clausola nella direttiva '*Directive*' OpenMP manca un argomento previsto|
|[Errore del compilatore C3007](compiler-error-c3007.md)|'*clause*': la clausola nella direttiva '*Directive*' OpenMP non accetta un argomento|
|[Errore del compilatore C3008](compiler-error-c3008.md)|'*argument*': nell'argomento manca ')' di chiusura nella direttiva '*Directive*' OpenMP|
|[Errore del compilatore C3009](compiler-error-c3009.md)|'*Label*': salto nel blocco strutturato OpenMP non consentito|
|[Errore del compilatore C3010](compiler-error-c3010.md)|'*Label*': salto dal blocco strutturato OpenMP non consentito|
|[Errore del compilatore C3011](compiler-error-c3011.md)|assembly inline non consentito direttamente in un'area parallela|
|[Errore del compilatore C3012](compiler-error-c3012.md)|'*Function*': funzione intrinseca non consentita direttamente in un'area parallela|
|[Errore del compilatore C3013](compiler-error-c3013.md)|'*clause*': la clausola può essere presente solo una volta nella direttiva '*Directive*' OpenMP|
|[Errore del compilatore C3014](compiler-error-c3014.md)|previsto un ciclo for dopo la direttiva '*Directive*' OpenMP|
|[Errore del compilatore C3015](compiler-error-c3015.md)|l'inizializzazione nell'istruzione 'for' OpenMP non ha un formato valido|
|[Errore del compilatore C3016](compiler-error-c3016.md)|'*Identifier*': la variabile di indice nell'istruzione ' for ' OpenMP deve avere un tipo integrale signed|
|[Errore del compilatore C3017](compiler-error-c3017.md)|il formato del test di terminazione nell'istruzione 'for' OpenMP non è valido|
|[Errore del compilatore C3018](compiler-error-c3018.md)|'*Identifier*': il test o l'incremento ' for ' OpenMP deve utilizzare la variabile di indice '*Variable*'|
|[Errore del compilatore C3019](compiler-error-c3019.md)|il formato dell'incremento nell'istruzione ' for ' OpenMP non è valido|
|[Errore del compilatore C3020](compiler-error-c3020.md)|'*Variable*': Impossibile modificare la variabile di indice del ciclo ' for ' OpenMP nel corpo del ciclo|
|[Errore del compilatore C3021](compiler-error-c3021.md)|'*argument*': argomento vuoto nella direttiva '*Directive*' OpenMP|
|[Errore del compilatore C3022](compiler-error-c3022.md)|'*Directive*': tipo di pianificazione '*Directive*' non valido nella direttiva '*Directive*' OpenMP|
|[Errore del compilatore C3023](compiler-error-c3023.md)|'*argument*': rilevato token imprevisto nell'argomento della clausola '*Directive*' OpenMP|
|[Errore del compilatore C3024](compiler-error-c3024.md)|' Schedule (Runtime)': espressione chunk_size non consentita|
|[Errore del compilatore C3025](compiler-error-c3025.md)|'*clause*': prevista espressione integrale|
|[Errore del compilatore C3026](compiler-error-c3026.md)|'*clause*': l'espressione costante deve essere positiva|
|[Errore del compilatore C3027](compiler-error-c3027.md)|'*clause*': prevista espressione aritmetica o puntatore|
|[Errore del compilatore C3028](compiler-error-c3028.md)|'*member*': è possibile usare solo una variabile o un membro dati statici in una clausola di condivisione dati|
|[Errore del compilatore C3029](compiler-error-c3029.md)|'*Symbol*': può apparire solo una volta nelle clausole di condivisione dati in una direttiva OpenMP|
|[Errore del compilatore C3030](compiler-error-c3030.md)|'*Identifier*': la variabile nella clausola/direttiva '*Directive*' non può avere un tipo riferimento|
|[Errore del compilatore C3031](compiler-error-c3031.md)|'*Identifier*': la variabile nella clausola ' reduction ' deve avere un tipo aritmetico scalare|
|[Errore del compilatore C3032](compiler-error-c3032.md)|'*Identifier*': la variabile nella clausola '*clause*' non può avere il tipo incompleto '*Type*'|
|[Errore del compilatore C3033](compiler-error-c3033.md)|'*Identifier*': la variabile nella clausola '*clause*' non può avere un tipo const|
|[Errore del compilatore C3034](compiler-error-c3034.md)|La direttiva '*Directive*' OpenMP non può essere annidata direttamente nella direttiva '*Directive*'|
|[Errore del compilatore C3035](compiler-error-c3035.md)|la direttiva 'ordered' OpenMP deve essere associata direttamente a una direttiva 'for' o 'parallel for' con la clausola 'ordered'|
|[Errore del compilatore C3036](compiler-error-c3036.md)|'*clause*': token di operatore non valido nella clausola ' reduction ' OpenMP|
|[Errore del compilatore C3037](compiler-error-c3037.md)|'*Identifier*': la variabile nella clausola '*clause*' deve essere condivisa nel contesto di inclusione|
|[Errore del compilatore C3038](compiler-error-c3038.md)|'*Identifier*': la variabile nella clausola ' private ' non può essere una variabile di riduzione nel contesto di inclusione|
|[Errore del compilatore C3039](compiler-error-c3039.md)|'*Identifier*': la variabile di indice nell'istruzione ' for ' OpenMP non può essere una variabile di riduzione|
|[Errore del compilatore C3040](compiler-error-c3040.md)|'*Identifier*': il tipo di variabile nella clausola ' reduction ' non è compatibile con l'operatore di riduzione '*operator*'|
|[Errore del compilatore C3041](compiler-error-c3041.md)|'*Identifier*': la variabile nella clausola ' copyprivate ' deve essere privata nel contesto di inclusione|
|[Errore del compilatore C3042](compiler-error-c3042.md)|le clausole ' copyprivate ' è nowait ' non possono essere visualizzate insieme nella direttiva '*Directive*' OpenMP|
|[Errore del compilatore C3043](compiler-error-c3043.md)|la direttiva 'critical' OpenMP non può essere annidata in una direttiva 'critical' con lo stesso nome|
|[Errore del compilatore C3044](compiler-error-c3044.md)|' section ': consentita solo annidata direttamente in una direttiva ' sections ' OpenMP|
|[Errore del compilatore C3045](compiler-error-c3045.md)|Prevista un'istruzione composta dopo la direttiva 'sections' OpenMP seguente. '{' mancante|
|[Errore del compilatore C3046](compiler-error-c3046.md)|Blocco strutturato mancante in un'area '#pragma omp sections' OpenMP|
|[Errore del compilatore C3047](compiler-error-c3047.md)|Un blocco strutturato in un'area 'sections' OpenMP deve essere preceduto da '#pragma omp section'|
|[Errore del compilatore C3048](compiler-error-c3048.md)|Formato non valido dell'espressione successiva a '#pragma omp atomic'|
|[Errore del compilatore C3049](compiler-error-c3049.md)|'*argument*': argomento non valido nella clausola ' default ' OpenMP|
|[Errore del compilatore C3050](compiler-error-c3050.md)|'*Class*': una classe di riferimento non può ereditare da'*Identifier*'|
|Errore del compilatore C3051|Obsoleta.|
|[Errore del compilatore C3052](compiler-error-c3052.md)|'*Identifier*': la variabile non appare in una clausola di condivisione dati in una clausola default (None)|
|[Errore del compilatore C3053](compiler-error-c3053.md)|'*Identifier*':' threadprivate ' è valido solo per gli elementi di dati globali o statici|
|[Errore del compilatore C3054](compiler-error-c3054.md)|'#pragma omp parallel' non è attualmente supportata in una classe o funzione generica|
|[Errore del compilatore C3055](compiler-error-c3055.md)|'*Identifier*': Impossibile fare riferimento al simbolo prima di utilizzarlo nella direttiva ' threadprivate '|
|[Errore del compilatore C3056](compiler-error-c3056.md)|'*Identifier*': il simbolo non si trova nello stesso ambito della direttiva ' threadprivate '|
|[Errore del compilatore C3057](compiler-error-c3057.md)|'*Identifier*': l'inizializzazione dinamica dei simboli ' threadprivate ' non è attualmente supportata|
|[Errore del compilatore C3058](compiler-error-c3058.md)|'*Identifier*': simbolo non dichiarato come ' threadprivate ' prima dell'utilizzo nella clausola ' copyin '|
|[Errore del compilatore C3059](compiler-error-c3059.md)|'*Identifier*': Impossibile utilizzare il simbolo ' threadprivate ' nella clausola '*clause*'|
|[Errore del compilatore C3060](compiler-error-c3060.md)|'*Identifier*': una funzione Friend non può essere definita all'interno di una classe usando un nome completo (può solo essere dichiarata)|
|Errore del compilatore C3061|operatore '*operator*': non consentito nell'enumerazione '*Type*' con il tipo sottostante '*Type*'|
|[Errore del compilatore C3062](compiler-error-c3062.md)|'*Identifier*': l'enumeratore richiede un valore perché il tipo sottostante è'*Type*'|
|[Errore del compilatore C3063](compiler-error-c3063.md)|operatore '*operator*': tutti gli operandi devono avere lo stesso tipo di enumerazione|
|Errore del compilatore C3064|'*Identifier*': deve essere un tipo semplice o risolverlo in uno|
|[Errore del compilatore C3065](compiler-error-c3065.md)|la dichiarazione di proprietà in ambito non di classe non è consentita|
|[Errore del compilatore C3066](compiler-error-c3066.md)|è possibile chiamare un oggetto di questo tipo con questi argomenti in più modi|
|Errore del compilatore C3067|Impossibile utilizzare un elenco di inizializzatori con l'operatore predefinito []|
|[Errore del compilatore C3068](compiler-error-c3068.md)|'*Identifier*': una funzione ' Naked ' non può contenere oggetti che richiedono la rimozione se si è verificata un'eccezione C++|
|[Errore del compilatore C3069](compiler-error-c3069.md)|operatore '*operator*': non consentito per il tipo di enumerazione|
|[Errore del compilatore C3070](compiler-error-c3070.md)|'*Identifier*': la proprietà non ha un metodo ' set '|
|[Errore del compilatore C3071](compiler-error-c3071.md)|l'operatore '*operator*' può essere applicato solo a un'istanza di una classe di riferimento o a un tipo di valore|
|[Errore del compilatore C3072](compiler-error-c3072.md)|non è possibile applicare l'operatore '*operator*' a un'istanza di una classe ref. usare l'operatore '%' unario per convertire un'istanza di una classe di riferimento in un tipo di handle|
|[Errore del compilatore C3073](compiler-error-c3073.md)|'*Identifier*': la classe di riferimento non ha un costruttore di copia definito dall'utente|
|Errore del compilatore C3074|non è possibile inizializzare una matrice con un inizializzatore tra parentesi|
|[Errore del compilatore C3075](compiler-error-c3075.md)|'*Identifier*': non è possibile incorporare un'istanza di un tipo di riferimento,'*Type*', in un tipo di valore|
|[Errore del compilatore C3076](compiler-error-c3076.md)|'*Identifier*': non è possibile incorporare un'istanza di un tipo di riferimento,'*Type*', in un tipo nativo|
|[Errore del compilatore C3077](compiler-error-c3077.md)|'*Identifier*': un finalizzatore può essere solo un membro di un tipo riferimento|
|Errore del compilatore C3078|le dimensioni della matrice devono essere specificate nelle nuove espressioni|
|Errore del compilatore C3079|non è possibile usare un elenco di inizializzatori come operando destro di questo operatore di assegnazione|
|[Errore del compilatore C3080](compiler-error-c3080.md)|'*finalizer*': un finalizzatore non può avere un oggetto Storage-Class-specifier|
|Errore del compilatore C3081|Obsoleta.|
|Errore del compilatore C3082|Obsoleta.|
|[Errore del compilatore C3083](compiler-error-c3083.md)|'*Identifier*': il simbolo a sinistra di '::' deve essere un tipo|
|[Errore del compilatore C3084](compiler-error-c3084.md)|'*Identifier*': un distruttore o un finalizzatore non può essere '*keyword*'|
|[Errore del compilatore C3085](compiler-error-c3085.md)|'*Identifier*': un costruttore non può essere '*keyword*'|
|Errore del compilatore C3086|' std:: initializer_list ' non è stato trovato: è necessario #include \<initializer_list>|
|[Errore del compilatore C3087](compiler-error-c3087.md)|'*Identifier*': la chiamata di '*Declaration*' Inizializza già questo membro|
|Errore del compilatore C3088|'*Class*': il costruttore di attributo deve avere argomenti formali denominati|
|Errore del compilatore C3089|'*Identifier*': il nome del parametro non corrisponde al nome di un membro dati|
|Errore del compilatore C3090|'*Class*': la classe Attribute non può essere un modello|
|Errore del compilatore C3091|'*Class*': la classe Attribute non può avere classi base|
|Errore del compilatore C3092|'*Class*': il membro della classe Attribute non può essere un campo di bit,' static ' o ' const '|
|Errore del compilatore C3093|'*Type*': tipo non consentito per il membro della classe Attribute '*member*'|
|[Errore del compilatore C3094](compiler-error-c3094.md)|'*attribute*': uso anonimo non consentito|
|[Errore del compilatore C3095](compiler-error-c3095.md)|'*attribute*': l'attributo non può essere ripetuto|
|[Errore del compilatore C3096](compiler-error-c3096.md)|'*attribute*': attributo consentito solo in membri dati di classi Attribute|
|[Errore del compilatore C3097](compiler-error-c3097.md)|'*attribute*': l'attributo deve avere ambito ' assembly:' o ' Module:'|
|Errore del compilatore C3098|'*Identifier*': l'attributo non ha costruttori definiti dall'utente|
|[Errore del compilatore C3099](compiler-error-c3099.md)|'*keyword*': usare [System:: AttributeUsageAttribute]/[Windows:: Foundation:: Metadata:: AttributeUsageAttribute] per gli attributi managed/WinRT|

## <a name="see-also"></a>Vedi anche

[Errori e avvisi degli strumenti di compilazione e compilatore C/C++](../compiler-errors-1/c-cpp-build-errors.md) \
[Errori del compilatore da C2000 a C3999](../compiler-errors-1/compiler-errors-c2000-c3999.md)
