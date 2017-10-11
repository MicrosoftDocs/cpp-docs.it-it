---
title: C3000 errori del compilatore tramite C3099 | Documenti Microsoft
ms.custom: 
ms.date: 04/21/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
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
dev_langs:
- C++
ms.assetid: 01b7b9cb-b351-4b5a-8cb0-1fcddb08d2ab
caps.latest.revision: 1
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 59ac61f0ae50f3a6b1d7170ea0b965c3bb8d0fe2
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-errors-c3000-through-c3099"></a>C3000 errori del compilatore tramite C3099
Gli articoli in questa parte della documentazione contengono informazioni su una sottosezione degli errori del compilatore di Visual C++. È possibile accedere alle informazioni qui o nella finestra **Output** in Visual Studio è possibile selezionare un numero di errore e quindi scegliere il tasto F1.  
  
> [!NOTE]
>  Non tutti [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] errore è documentato in MSDN. In molti casi, il messaggio di diagnostica fornisce tutte le informazioni che sono disponibile. Se si ritiene che un messaggio di errore richieda una spiegazione aggiuntiva, è possibile informarne Microsoft. È possibile utilizzare la forma di commenti e suggerimenti in questa pagina o passare alla barra dei menu in Visual Studio e scegliere **Guida**, **segnalare un Bug**, o è possibile inviare un report di suggerimenti o bug in [Microsoft Connect](http://connect.microsoft.com/VisualStudio).  
  
 È possibile trovare assistenza per errori e avvisi nei forum pubblici MSDN. Il [del linguaggio Visual C++](http://go.microsoft.com/fwlink/?LinkId=158195) forum è a domande e discussioni sul [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] sintassi del linguaggio e compilatore. Il [generali di Visual C++](http://go.microsoft.com/fwlink/?LinkId=158194) forum è per domande su [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] che non sono trattati in altri forum. È inoltre possibile trovare informazioni su errori e avvisi in [Overflow dello Stack](http://stackoverflow.com/).  
  
|Errore|Messaggio|  
|-----------|-------------|  
|C3000 errore del compilatore|Obsoleta.|  
|[Errore del compilatore C3001](compiler-error-c3001.md)|'*messaggio*': previsto un nome di direttiva OpenMP|  
|[Errore del compilatore C3002](compiler-error-c3002.md)|'*nome1* *nome2*': più nomi di direttiva OpenMP|  
|[Errore del compilatore C3003](compiler-error-c3003.md)|'*direttiva*': i nomi di direttiva OpenMP non consentiti dopo clausole di direttiva|  
|[Errore del compilatore C3004](compiler-error-c3004.md)|'*clausola*': clausola non valida nella OpenMP '*direttiva*' (direttiva)|  
|[Errore del compilatore C3005](compiler-error-c3005.md)|'*messaggio*': rilevato token imprevisto nella OpenMP '*direttiva*' (direttiva)|  
|[Errore del compilatore C3006](compiler-error-c3006.md)|'*clausola*': clausola nella direttiva OpenMP '*direttiva*' manca un argomento previsto|  
|[Errore del compilatore C3007](compiler-error-c3007.md)|'*clausola*': clausola nella direttiva OpenMP '*direttiva*' non accetta un argomento|  
|[Errore del compilatore C3008](compiler-error-c3008.md)|*argomento*': argomento manca chiusura ')' su OpenMP '*direttiva*' (direttiva)|  
|[Errore del compilatore C3009](compiler-error-c3009.md)|'*etichetta*': salto nel blocco strutturato OpenMP non consentito|  
|[Errore del compilatore C3010](compiler-error-c3010.md)|'*etichetta*': salto dal blocco strutturato OpenMP non consentito|  
|[Errore del compilatore C3011](compiler-error-c3011.md)|assembly inline non consentito direttamente in un'area parallela|  
|[Errore del compilatore C3012](compiler-error-c3012.md)|'*funzione*': funzione intrinseca non consentita direttamente in un'area parallela|  
|[Errore del compilatore C3013](compiler-error-c3013.md)|'*clausola*': clausola può apparire solo una volta nella OpenMP '*direttiva*' (direttiva)|  
|[Errore del compilatore C3014](compiler-error-c3014.md)|previsto un ciclo for dopo OpenMP '*direttiva*' (direttiva)|  
|[Errore del compilatore C3015](compiler-error-c3015.md)|l'inizializzazione nell'istruzione 'for' OpenMP non ha un formato valido|  
|[Errore del compilatore C3016](compiler-error-c3016.md)|'*identificatore*': variabile di indice nell'OpenMP 'istruzione for' deve avere un tipo integrale firmato|  
|[Errore del compilatore C3017](compiler-error-c3017.md)|il formato del test di terminazione nell'istruzione 'for' OpenMP non è valido|  
|[Errore del compilatore C3018](compiler-error-c3018.md)|'*identificatore*': 'for' test o l'incremento OpenMP deve utilizzare la variabile di indice '*variabile*'|  
|[Errore del compilatore C3019](compiler-error-c3019.md)|incremento 'istruzione for' OpenMP non ha un formato|  
|[Errore del compilatore C3020](compiler-error-c3020.md)|'*variabile*': variabile di indice OpenMP 'ciclo for' non può essere modificata nel corpo del ciclo|  
|[Errore del compilatore C3021](compiler-error-c3021.md)|'*argomento*': argomento è vuoto in OpenMP '*direttiva*' (direttiva)|  
|[Errore del compilatore C3022](compiler-error-c3022.md)|'*direttiva*': tipo di pianificazione non valido di '*direttiva*'on 'OpenMP*direttiva*' (direttiva)|  
|[Errore del compilatore C3023](compiler-error-c3023.md)|'*argomento*': rilevato token imprevisto nell'argomento per OpenMP '*direttiva*' clausola|  
|[Errore del compilatore C3024](compiler-error-c3024.md)|'Schedule (Runtime)': espressione chunk_size non consentita|  
|[Errore del compilatore C3025](compiler-error-c3025.md)|'*clausola*': prevista espressione integrale|  
|[Errore del compilatore C3026](compiler-error-c3026.md)|'*clausola*': espressione costante deve essere positiva|  
|[Errore del compilatore C3027](compiler-error-c3027.md)|'*clausola*': prevista espressione aritmetica o del puntatore|  
|[Errore del compilatore C3028](compiler-error-c3028.md)|'*membro*': solo un membro dati statici o variabili può essere utilizzato in una clausola di condivisione dei dati|  
|[Errore del compilatore C3029](compiler-error-c3029.md)|'*simbolo*': può apparire una sola volta nella condivisione di dati clausole di una direttiva OpenMP|  
|[Errore del compilatore C3030](compiler-error-c3030.md)|'*identificatore*': variabile '*direttiva*' clausola/direttiva non può avere un tipo riferimento|  
|[Errore del compilatore C3031](compiler-error-c3031.md)|'*identificatore*': variabile nella clausola 'reduction' deve avere un tipo aritmetico scalare|  
|[Errore del compilatore C3032](compiler-error-c3032.md)|'*identificatore*': variabile '*clausola*'clausola non può avere il tipo incompleto'*tipo*'|  
|[Errore del compilatore C3033](compiler-error-c3033.md)|'*identificatore*': variabile '*clausola*' clausola non può avere un tipo const|  
|[Errore del compilatore C3034](compiler-error-c3034.md)|OpenMP '*direttiva*'direttiva non può essere direttamente annidata'*direttiva*' (direttiva)|  
|[Errore del compilatore C3035](compiler-error-c3035.md)|la direttiva 'ordered' OpenMP deve essere associata direttamente a una direttiva 'for' o 'parallel for' con la clausola 'ordered'|  
|[Errore del compilatore C3036](compiler-error-c3036.md)|'*clausola*': token di operatore non valido nella clausola 'reduction' OpenMP|  
|[Errore del compilatore C3037](compiler-error-c3037.md)|'*identificatore*': variabile '*clausola*' clausola deve essere condivisa nel contesto di inclusione|  
|[Errore del compilatore C3038](compiler-error-c3038.md)|'*identificatore*': la variabile nella clausola 'privata' non può essere una variabile di riduzione nel contesto di inclusione|  
|[Errore del compilatore C3039](compiler-error-c3039.md)|'*identificatore*': variabile di indice nell'OpenMP 'istruzione for' non può essere una variabile di riduzione|  
|[Errore del compilatore C3040](compiler-error-c3040.md)|'*identificatore*': variabile è di tipo nella clausola 'reduction' incompatibile con l'operatore di riduzione '*operatore*'|  
|[Errore del compilatore C3041](compiler-error-c3041.md)|'*identificatore*': la variabile nella clausola 'copyprivate' deve essere privata nel contesto di inclusione|  
|[Errore del compilatore C3042](compiler-error-c3042.md)|le clausole 'copyprivate' e 'nowait' non possono apparire contemporaneamente nella OpenMP '*direttiva*' (direttiva)|  
|[Errore del compilatore C3043](compiler-error-c3043.md)|la direttiva 'critical' OpenMP non può essere annidata in una direttiva 'critical' con lo stesso nome|  
|[Errore del compilatore C3044](compiler-error-c3044.md)|'section': consentita solo annidata direttamente in una direttiva 'sections' OpenMP|  
|[Errore del compilatore C3045](compiler-error-c3045.md)|Prevista un'istruzione composta dopo la direttiva 'sections' OpenMP seguente. '{' mancante|  
|[Errore del compilatore C3046](compiler-error-c3046.md)|Blocco strutturato mancante in un'area '#pragma omp sections' OpenMP|  
|[Errore del compilatore C3047](compiler-error-c3047.md)|Un blocco strutturato in un'area 'sections' OpenMP deve essere preceduto da '#pragma omp section'|  
|[Errore del compilatore C3048](compiler-error-c3048.md)|Formato non valido dell'espressione successiva a '#pragma omp atomic'|  
|[Errore del compilatore C3049](compiler-error-c3049.md)|'*argomento*': argomento non valido nella clausola 'default' OpenMP|  
|[Errore del compilatore C3050](compiler-error-c3050.md)|'*classe*': una classe di riferimento non può ereditare da '*identificatore*'|  
|C3051 errore del compilatore|Obsoleta.|  
|[Errore del compilatore C3052](compiler-error-c3052.md)|'*identificatore*': la variabile non appare in una clausola di condivisione dei dati in una clausola default (None)|  
|[Errore del compilatore C3053](compiler-error-c3053.md)|'*identificatore*': 'threadprivate' è valido per gli elementi di dati globali o statici|  
|[Errore del compilatore C3054](compiler-error-c3054.md)|'#pragma omp parallel' non è attualmente supportata in una classe o funzione generica|  
|[Errore del compilatore C3055](compiler-error-c3055.md)|'*identificatore*': non è possibile fare riferimento al simbolo prima di utilizzarlo nella direttiva 'threadprivate'|  
|[Errore del compilatore C3056](compiler-error-c3056.md)|'*identificatore*': simbolo non è presente nello stesso ambito della direttiva 'threadprivate'|  
|[Errore del compilatore C3057](compiler-error-c3057.md)|'*identificatore*': l'inizializzazione dinamica dei simboli 'threadprivate' non è attualmente supportato|  
|[Errore del compilatore C3058](compiler-error-c3058.md)|'*identificatore*': simbolo non dichiarato 'threadprivate' prima che venga utilizzato nella clausola 'copyin'|  
|[Errore del compilatore C3059](compiler-error-c3059.md)|'*identificatore*': simbolo 'threadprivate' non può essere utilizzato nel '*clausola*' clausola|  
|[Errore del compilatore C3060](compiler-error-c3060.md)|'*identificatore*': una funzione friend non può essere definita all'interno di una classe con un nome completo (può solo essere dichiarata)|  
|C3061 errore del compilatore|operatore '*operatore*': non consentito nell'enumerazione '*tipo*'con tipo sottostante'*tipo*'|  
|[Errore del compilatore C3062](compiler-error-c3062.md)|'*identificatore*': enumeratore richiede un valore poiché il tipo sottostante è '*tipo*'|  
|[Errore del compilatore C3063](compiler-error-c3063.md)|operatore '*operatore*': tutti gli operandi devono avere lo stesso tipo di enumerazione|  
|C3064 errore del compilatore|'*identificatore*': deve essere un tipo semplice o risolversi in un|  
|[Errore del compilatore C3065](compiler-error-c3065.md)|la dichiarazione di proprietà in ambito non di classe non è consentita|  
|[Errore del compilatore C3066](compiler-error-c3066.md)|Esistono diversi modi, che un oggetto di questo tipo può essere chiamato con questi argomenti|  
|C3067 errore del compilatore|un elenco di inizializzatori non può essere utilizzato con l'operatore predefinito]|  
|[Errore del compilatore C3068](compiler-error-c3068.md)|'*identificatore*': una funzione 'naked' non può contenere oggetti che richiedono la rimozione se si è verificata un'eccezione C++|  
|[Errore del compilatore C3069](compiler-error-c3069.md)|operatore '*operatore*': non consentito per il tipo di enumerazione|  
|[Errore del compilatore C3070](compiler-error-c3070.md)|'*identificatore*': proprietà non dispone di un metodo 'set'|  
|[Errore del compilatore C3071](compiler-error-c3071.md)|operatore '*operatore*' può essere applicato solo a un'istanza di una classe di riferimento o un tipo di valore|  
|[Errore del compilatore C3072](compiler-error-c3072.md)|operatore '*operatore*' non è possibile applicare a un'istanza di un utilizzo della classe ref classe l'operatore unario '%' per convertire un'istanza di un riferimento a un tipo di handle|  
|[Errore del compilatore C3073](compiler-error-c3073.md)|'*identificatore*': classe di riferimento dispone di un costruttore di copia definito dall'utente|  
|C3074 errore del compilatore|Impossibile inizializzare una matrice con un inizializzatore tra parentesi|  
|[Errore del compilatore C3075](compiler-error-c3075.md)|'*identificatore*': non è possibile incorporare un'istanza di un tipo riferimento, '*tipo*', in un tipo di valore|  
|[Errore del compilatore C3076](compiler-error-c3076.md)|'*identificatore*': non è possibile incorporare un'istanza di un tipo riferimento, '*tipo*', in un tipo nativo|  
|[Errore del compilatore C3077](compiler-error-c3077.md)|'*identificatore*': un finalizzatore può essere solo un membro di un tipo riferimento|  
|C3078 errore del compilatore|dimensione di matrice deve essere specificata nelle espressioni di nuovo|  
|C3079 errore del compilatore|Impossibile utilizzare un elenco di inizializzatori come operando destro dell'operatore di assegnazione|  
|[Errore del compilatore C3080](compiler-error-c3080.md)|'*finalizzatore*': un finalizzatore non può avere un identificatore di classe di archiviazione|  
|C3081 errore del compilatore|Obsoleta.|  
|Errore del compilatore C3082|Obsoleta.|  
|[Errore del compilatore C3083](compiler-error-c3083.md)|'*identificatore*': il simbolo a sinistra di un ':: ' deve essere un tipo|  
|[Errore del compilatore C3084](compiler-error-c3084.md)|'*identificatore*': un distruttore/finalizzatore non può essere '*parola chiave*'|  
|[Errore del compilatore C3085](compiler-error-c3085.md)|'*identificatore*': un costruttore non può essere '*parola chiave*'|  
|C3086 errore del compilatore|Impossibile trovare 'std:: initializer_list': è necessario #include < initializer_list >|  
|[Errore del compilatore C3087](compiler-error-c3087.md)|'*identificatore*': chiamata di '*dichiarazione*' Inizializza già questo membro|  
|C3088 errore del compilatore|'*classe*': costruttore di attributo deve avere argomenti formali denominati|  
|C3089 errore del compilatore|'*identificatore*': nome del parametro non corrisponde il nome di qualsiasi membro dati|  
|C3090 errore del compilatore|'*classe*': classe attribute non può essere un modello|  
|C3091 errore del compilatore|'*classe*': classe attribute non può avere classi base|  
|C3092 errore del compilatore|'*classe*': membro della classe attribute non può essere un po' di campo, 'static' o 'const'|  
|C3093 errore del compilatore|'*tipo*': tipo non consentito per il membro di classe di attributo '*membro*'|  
|[Errore del compilatore C3094](compiler-error-c3094.md)|'*attributo*': uso anonimo non consentito|  
|[Errore del compilatore C3095](compiler-error-c3095.md)|'*attributo*': attributo non può essere ripetuto|  
|[Errore del compilatore C3096](compiler-error-c3096.md)|'*attributo*': attributo consentito di classi attribute solo i membri dati|  
|[Errore del compilatore C3097](compiler-error-c3097.md)|'*attributo*': attributo deve avere ambito ' assembly:' o ' module:'|  
|C3098 errore del compilatore|'*identificatore*': attributo non presenta alcun costruttore definito dall'utente|  
|[Errore del compilatore C3099](compiler-error-c3099.md)|'*parola chiave*': usare [System:: AttributeUsageAttribute] / [Windows::Foundation::Metadata::AttributeUsageAttribute] per gli attributi gestiti o WinRT|  

