---
title: C2900 errori del compilatore tramite C2999 | Documenti Microsoft
ms.custom: 
ms.date: 11/17/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2900
- C2901
- C2905
- C2907
- C2915
- C2916
- C2922
- C2924
- C2925
- C2926
- C2938
- C2949
- C2950
- C2954
- C2956
- C2960
- C2961
- C2963
- C2964
- C2965
- C2966
- C2967
- C2968
- C2972
- C2980
- C2981
- C2982
- C2983
- C2984
- C2985
- C2986
- C2987
- C2997
- C2999
helpviewer_keywords:
- C2900
- C2901
- C2905
- C2907
- C2915
- C2916
- C2922
- C2924
- C2925
- C2926
- C2938
- C2949
- C2950
- C2954
- C2956
- C2960
- C2961
- C2963
- C2964
- C2965
- C2966
- C2967
- C2968
- C2972
- C2980
- C2981
- C2982
- C2983
- C2984
- C2985
- C2986
- C2987
- C2997
- C2999
dev_langs: C++
ms.assetid: e3440738-e11b-4878-9ae3-6bc6c53ba461
caps.latest.revision: "16"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9b5e2711b8517a03792cdef312e8cd8ee3b4fe72
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-errors-c2900-through-c2999"></a>C2900 errori del compilatore tramite C2999

Gli articoli in questa sezione della documentazione illustrano un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Error|Messaggio|
|-----------|-------------|
|C2900 errore del compilatore|'*dichiaratore*': i modelli di funzione membro nelle classi WinRT devono essere 'private', 'internal' o 'protected private'|
|Errore del compilatore C2901|'*identificatore*': un'interfaccia o delegato generico non può essere pubblico|
|[Errore del compilatore C2902](compiler-error-c2902.md)|'*token*': imprevisto token seguente 'modello o generico', previsto identificatore|
|[Errore del compilatore C2903](compiler-error-c2903.md)|'*identificatore*': simbolo non è un modello di classe o generico né una funzione modello o generico|
|[Errore del compilatore C2904](compiler-error-c2904.md)|'*identificatore*': nome già utilizzato per un modello nell'ambito corrente|
|C2905 errore del compilatore|Obsoleta.|
|[Errore del compilatore C2906](compiler-error-c2906.md)|'*modello*': 'modello <>' richiede la specializzazione esplicita|
|Errore del compilatore C2907|l'argomento di registro '*numero*' non specifica un numero di registro|
|[Errore del compilatore C2908](compiler-error-c2908.md)|specializzazione esplicita. '*modello*' è già stata creata un'istanza|
|[Errore del compilatore C2909](compiler-error-c2909.md)|'*identificatore*': creazione esplicita di istanza di modello di funzione richiede un tipo restituito|
|[Errore del compilatore C2910](compiler-error-c2910.md)|'*funzione*': Impossibile specializzare in modo esplicito|
|[Errore del compilatore C2911](compiler-error-c2911.md)|'*membro*': impossibile da dichiarare o definire nell'ambito corrente|
|[Errore del compilatore C2912](compiler-error-c2912.md)|specializzazione esplicita '*dichiarazione*' non è una specializzazione di un modello di funzione|
|[Errore del compilatore C2913](compiler-error-c2913.md)|specializzazione esplicita. '*dichiarazione*' non è una specializzazione del modello di classe|
|[Errore del compilatore C2914](compiler-error-c2914.md)|'*identificatore*': Impossibile dedurre un argomento di modello o generico come argomento della funzione è ambiguo|
|C2915 errore del compilatore|'*identificatore*': '*tipo*' non può essere utilizzato direttamente sulla superficie pubblicata di un tipo WinRT. Utilizzare ' platform:: Object ^' invece di passare questo tipo|
|C2916 errore del compilatore|'*identificatore*': [FlagsAttribute] () può essere specificato solo in un'enumerazione pubblica con un 'unsigned int' tipo sottostante|
|[Errore del compilatore C2917](compiler-error-c2917.md)|'*identificatore*': parametro di modello non valido|
|[Errore del compilatore C2918](compiler-error-c2918.md)|'*identificatore*': Impossibile utilizzare proprietà indicizzate sulla superficie pubblicata di un tipo WinRT|
|[Errore del compilatore C2919](compiler-error-c2919.md)|'*tipo*': Impossibile utilizzare operatori sulla superficie pubblicata di un tipo WinRT|
|[Errore del compilatore C2920](compiler-error-c2920.md)|ridefinizione: '*tipo*': modello di classe o generico già dichiarato come*dichiarazione*'|
|[Errore del compilatore C2921](compiler-error-c2921.md)|ridefinizione: '*tipo*': modello di classe o generico è stato ridichiarato come*dichiarazione*'|
|C2922 errore del compilatore|'*interfaccia*': un'interfaccia WinRT non può contenere membri statici|
|[Errore del compilatore C2923](compiler-error-c2923.md)|'*tipo*': '*identificatore*'è un argomento di tipo di modello o generico valido per il parametro'*parametro*'|
|C2924 errore del compilatore|argomento di routine declspec non in R2|
|C2925 errore del compilatore|routine declspec non è possibile utilizzare la virgola mobile|
|Errore del compilatore C2926|'*identificatore*': non è consentito un inizializzatore di membro predefinito per un membro di uno struct anonimo all'interno di un'unione|
|[Errore del compilatore C2927](compiler-error-c2927.md)|'*identificatore*': un modello di funzione deve essere chiamato con almeno un argomento|
|[Errore del compilatore C2928](compiler-error-c2928.md)|creazione di un'istanza esplicita. '*identificatore*'non è una funzione o un membro dati statici della classe modello'*classe*'|
|[Errore del compilatore C2929](compiler-error-c2929.md)|'*dichiaratore*': creazione esplicita di istanza, in modo esplicito non può forzare e inibire la creazione di istanze del membro di classe modello|
|[Errore del compilatore C2930](compiler-error-c2930.md)|'*classe*': modello-id, generico-id ridefinito come enumeratore di ' enum *identificatore*'|
|[Errore del compilatore C2931](compiler-error-c2931.md)|'*class1*': modello-id, generico-id ridefinito come funzione membro di '*class2*'|
|[Errore del compilatore C2932](compiler-error-c2932.md)|'*tipo*': modello-id, generico-id ridefinito come membro dati di '*identificatore*'|
|[Errore del compilatore C2933](compiler-error-c2933.md)|'*tipo*': modello-id, generico-id ridefinito come membro typedef di '*identificatore*'|
|[Errore del compilatore C2934](compiler-error-c2934.md)|'*tipo*': template-id, generico-id ridefinito come un tipo annidato '*elemento*'of'*identificatore*'|
|[Errore del compilatore C2935](compiler-error-c2935.md)|'*tipo*': id modello/generici-id ridefinito come funzione globale|
|[Errore del compilatore C2936](compiler-error-c2936.md)|'*tipo*': modello-id, generico-id ridefinito come variabile dati globale|
|[Errore del compilatore C2937](compiler-error-c2937.md)|'*tipo*': id modello/generici-id ridefinito come typedef globale|
|C2938 errore del compilatore|'*identificatore*': Impossibile specializzare il modello di alias|
|[Errore del compilatore C2939](compiler-error-c2939.md)|'*tipo*': modello-id, generico-id ridefinito come variabile dati locale|
|[Errore del compilatore C2940](compiler-error-c2940.md)|'*tipo*': id modello/generici-id ridefinito come typedef locale|
|[Errore del compilatore C2941](compiler-error-c2941.md)|'*tipo*': modello-id, generico-id ridefinito come una variabile locale '*elemento*'|
|[Errore del compilatore C2942](compiler-error-c2942.md)|'*tipo*': id modello/generici-id ridefinito come argomento formale di una funzione|
|[Errore del compilatore C2943](compiler-error-c2943.md)|'*tipo*': template-id, generico-id ridefinito come argomento di tipo di un modello|
|[Errore del compilatore C2944](compiler-error-c2944.md)|'*tipo*': modello-id, generico-id ridefinito come argomento valore di un modello|
|[Errore del compilatore C2945](compiler-error-c2945.md)|creazione esplicita di un'istanza non riferita a una specializzazione di una classe modello|
|[Errore del compilatore C2946](compiler-error-c2946.md)|creazione di un'istanza esplicita. '*tipo*' non è una specializzazione della classe modello|
|[Errore del compilatore C2947](compiler-error-c2947.md)|previsto ' >' per terminare gli argomenti di modello, trovato '*token*'|
|[Errore del compilatore C2948](compiler-error-c2948.md)|creazione di un'istanza esplicita. Identificatore di classe di archiviazione '*identificatore*' non valido in una specializzazione|
|Errore del compilatore C2949|thread_local non è supportato con /kernel|
|Errore del compilatore C2950|Obsoleta.|
|[Errore del compilatore C2951](compiler-error-c2951.md)|le dichiarazioni di modello/generici sono consentite solo spazio dei nomi globale, o ambito di classe|
|[Errore del compilatore C2952](compiler-error-c2952.md)|'*dichiarazione*': dichiarazione di modello o generico manca l'elenco di parametri di modello o generico|
|[Errore del compilatore C2953](compiler-error-c2953.md)|'*tipo*': modello di classe è già stato definito.|
|Errore del compilatore C2954|argomento di istruzione non compreso nell'intervallo|
|[Errore del compilatore C2955](compiler-error-c2955.md)|'*tipo*': utilizzo del modello di classe o generico richiede l'elenco di argomenti di modello o generico|
|C2956 errore del compilatore|deallocazione con dimensione funzione 'operator delete (void *, size_t)' verrà scelta come funzione di deallocazione di posizionamento.|
|[Errore del compilatore C2957](compiler-error-c2957.md)|'*token*': delimitatore sinistro non valido: previsto ' <'|
|[Errore del compilatore C2958](compiler-error-c2958.md)|sinistra *delimitatore* trovato in '*file*(*riga numero*)' non è stata trovata corrispondenza correttamente|
|[Errore del compilatore C2959](compiler-error-c2959.md)|una classe generica o una funzione non può essere un membro di un modello|
|C2960 errore del compilatore|Obsoleta.|
|C2961 errore del compilatore|'*funzione*': incoerente creazioni di istanze esplicite, creazione di un'istanza esplicita precedente non specificava '*argomento*'|
|[Errore del compilatore C2962](compiler-error-c2962.md)|Errore di sintassi: '*token*': prevista una definizione di funzione membro di classe di modello per terminare con '}'|
|Errore del compilatore C2963|Obsoleta.|
|Errore del compilatore C2964|Obsoleta.|
|C2965 errore del compilatore|declspec (*identificatore*) non è supportato con /kernel|
|C2966 errore del compilatore|'*identifier1*': deve avere la stessa __declspec(code_seg(...)) come la classe base*identifier2*'|
|C2967 errore del compilatore|'*identificatore*': una funzione virtuale esegue l'override deve avere la stessa __declspec(code_seg(...)) come una funzione virtuale sottoposta a override|
|C2968 errore del compilatore|'*identificatore*': dichiarazione alias ricorsiva|
|[Errore del compilatore C2969](compiler-error-c2969.md)|Errore di sintassi: '*token*': prevista una definizione della funzione membro e terminare con '}'|
|[Errore del compilatore C2970](compiler-error-c2970.md)|'*tipo*': parametro di modello '*parametro*': '*argomento*': un'espressione che comprende oggetti con collegamento interno non può essere utilizzata come argomento non di tipo|
|[Errore del compilatore C2971](compiler-error-c2971.md)|'*tipo*': parametro di modello '*parametro*': '*argomento*': una variabile con durata di archiviazione non statica non può essere utilizzata come argomento non di tipo|
|C2972 errore del compilatore|'*tipo*': parametro di modello '*parametro*': il tipo di argomento di tipo non è valido|
|[Errore del compilatore C2973](compiler-error-c2973.md)|'*modello*': argomento di modello non valido '*numero*'|
|[Errore del compilatore C2974](compiler-error-c2974.md)|'*tipo*': argomento di modello/generici non valido per '*parametro*', tipo previsto|
|[Errore del compilatore C2975](compiler-error-c2975.md)|'*tipo*': argomento di modello non valido per '*parametro*', è prevista un'espressione costante in fase di compilazione|
|[Errore del compilatore C2976](compiler-error-c2976.md)|'*tipo*': numero insufficiente di argomenti di modello o generico|
|[Errore del compilatore C2977](compiler-error-c2977.md)|'*tipo*': troppi argomenti di modello o generico|
|[Errore del compilatore C2978](compiler-error-c2978.md)|Errore di sintassi: previsto '*keyword1*'o'*keyword2*', trovato il tipo'*tipo*'; tipo non parametri non sono supportati in generics|
|[Errore del compilatore C2979](compiler-error-c2979.md)|le specializzazioni esplicite non sono supportate in generics|
|C2980 errore del compilatore|Gestione delle eccezioni C++ non è supportato con /kernel|
|C2981 errore del compilatore|il formato dinamico di '*parola chiave*' non è supportato con /kernel|
|C2982 errore del compilatore|'*dichiarazione*': diversi __declspec(code_seg(...)) utilizzato: era '*identifier1*'ora'*identifier2*'|
|C2983 errore del compilatore|'*dichiarazione*': tutte le dichiarazioni devono avere un __declspec(code_seg(...)) identici|
|C2984 errore del compilatore|Obsoleta.|
|C2985 errore del compilatore|'*argomento*': l'argomento __declspec(code_seg(...)) deve essere una sezione di testo|
|C2986 errore del compilatore|'*identificatore*': __declspec(code_seg(...)) può essere applicato solo a una classe o una funzione|
|C2987 errore del compilatore|una dichiarazione non può avere sia declspec (code_seg ('*identificatore*')) e declspec (code_seg ('*valore*'))|
|[Errore del compilatore C2988](compiler-error-c2988.md)|dichiarazione/definizione di modello non riconoscibile|
|[Errore del compilatore C2989](compiler-error-c2989.md)|'*classe*': modello di classe o generico già dichiarato come un modello o generico non classe|
|[Errore del compilatore C2990](compiler-error-c2990.md)|'*classe*': modello non di classe o generico già dichiarato come un modello di classe o generico|
|[Errore del compilatore C2991](compiler-error-c2991.md)|ridefinizione del parametro di modello o generico '*parametro*'|
|[Errore del compilatore C2992](compiler-error-c2992.md)|'*classe*': elenco di parametri di modello/generici non valido o mancante|
|[Errore del compilatore C2993](compiler-error-c2993.md)|'*tipo*': tipo non valido per il parametro di modello non di tipo '*identificatore*'|
|[Errore del compilatore C2994](compiler-error-c2994.md)|classe senza nome nell'elenco dei parametri di modello|
|[Errore del compilatore C2995](compiler-error-c2995.md)|'*dichiarazione*': modello di funzione è già stato definito.|
|[Errore del compilatore C2996](compiler-error-c2996.md)|'*funzione*': definizione di modello di funzione ricorsiva|
|C2997 errore del compilatore|'*funzione*': il limite della matrice non può essere dedotto da un inizializzatore di membro predefinito|
|[Errore del compilatore C2998](compiler-error-c2998.md)|'*dichiaratore*': non può essere una definizione di modello|
|Errore del compilatore C2999|. Errore sconosciuto scegliere supporto tecnico dal menu di Visual C++ o aprire il file della Guida di supporto tecnico per ulteriori informazioni|
