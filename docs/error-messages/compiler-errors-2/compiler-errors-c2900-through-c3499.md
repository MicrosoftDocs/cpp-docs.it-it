---
description: 'Altre informazioni su: errori del compilatore da C2900 tramite C2999'
title: Errori del compilatore da C2900 a C2999
ms.date: 04/21/2019
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
ms.assetid: e3440738-e11b-4878-9ae3-6bc6c53ba461
ms.openlocfilehash: 73770588a27bb0f5150f3334f33e0a1c33aa2296
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97238765"
---
# <a name="compiler-errors-c2900-through-c2999"></a>Errori del compilatore da C2900 a C2999

Negli articoli di questa sezione della documentazione viene illustrato un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Errore|Message|
|-----------|-------------|
|Errore del compilatore da C2900|'*dichiaratore*': i modelli di funzione membro nelle classi WinRT devono essere ' private ',' Internal ' o ' protected private '|
|Errore del compilatore C2901|'*Identifier*': un'interfaccia o un delegato generico non può essere pubblico|
|[Errore del compilatore C2902](compiler-error-c2902.md)|'*token*': token imprevisto dopo ' template/Generic '. previsto identificatore|
|[Errore del compilatore C2903](compiler-error-c2903.md)|'*Identifier*': il simbolo non è né un modello di classe/generico né un modello di funzione/generico|
|[Errore del compilatore C2904](compiler-error-c2904.md)|'*Identifier*': nome già utilizzato per un modello nell'ambito corrente|
|Errore del compilatore C2905|Obsoleta.|
|[Errore del compilatore C2906](compiler-error-c2906.md)|'*template*': la specializzazione esplicita richiede ' template <>'|
|Errore del compilatore C2907|l'argomento di registro '*Number*' non specifica un numero di registro valido|
|[Errore del compilatore C2908](compiler-error-c2908.md)|specializzazione esplicita; è già stata creata un'istanza di '*template*'|
|[Errore del compilatore C2909](compiler-error-c2909.md)|'*Identifier*': la creazione di un'istanza esplicita del modello di funzione richiede un tipo restituito|
|[Errore del compilatore C2910](compiler-error-c2910.md)|'*Function*': non può essere specializzato in modo esplicito|
|[Errore del compilatore C2911](compiler-error-c2911.md)|'*member*': Impossibile da dichiarare o definire nell'ambito corrente|
|[Errore del compilatore C2912](compiler-error-c2912.md)|la specializzazione esplicità *Declaration*' non è una specializzazione di un modello di funzione|
|[Errore del compilatore C2913](compiler-error-c2913.md)|specializzazione esplicita; '*Declaration*' non è una specializzazione di un modello di classe|
|[Errore del compilatore C2914](compiler-error-c2914.md)|'*Identifier*': Impossibile dedurre un argomento Template/Generic perché l'argomento della funzione è ambiguo|
|Errore del compilatore C2915|'*Identifier*': Impossibile utilizzare direttamente '*Type*' sulla superficie pubblicata di un tipo WinRT. Usare invece ' Platform:: Object ^' per passare questo tipo|
|Errore del compilatore C2916|'*Identifier*': [FlagsAttribute] deve essere specificato (solo) in un'enumerazione pubblica con un tipo sottostante ' unsigned int '|
|[Errore del compilatore C2917](compiler-error-c2917.md)|'*Identifier*': parametro di modello non valido|
|[Errore del compilatore C2918](compiler-error-c2918.md)|'*Identifier*': Impossibile utilizzare proprietà indicizzate sulla superficie pubblicata di un tipo WinRT|
|[Errore del compilatore C2919](compiler-error-c2919.md)|'*Type*': non è possibile usare gli operatori sulla superficie pubblicata di un tipo WinRT|
|[Errore del compilatore C2920](compiler-error-c2920.md)|ridefinizione:'*Type*': il modello di classe/Generic è già stato dichiarato come '*Declaration*'|
|[Errore del compilatore C2921](compiler-error-c2921.md)|ridefinizione:'*Type*': il modello di classe/generico è stato ridichiarato come '*Declaration*'|
|Errore del compilatore C2922|'*Interface*': un'interfaccia WinRT non può contenere membri statici|
|[Errore del compilatore C2923](compiler-error-c2923.md)|'*Type*':'*Identifier*' non è un argomento di tipo generico o modello valido per il parametro '*Parameter*'|
|Errore del compilatore C2924|argomento di routine __declspec (interrupt) non in R2|
|Errore del compilatore C2925|la routine __declspec (interrupt) non può utilizzare la virgola mobile|
|Errore del compilatore C2926|'*Identifier*': un inizializzatore di membro predefinito non è consentito per un membro di uno struct anonimo all'interno di un'Unione|
|[Errore del compilatore C2927](compiler-error-c2927.md)|'*Identifier*': è necessario chiamare un modello di funzione con almeno un argomento|
|[Errore del compilatore C2928](compiler-error-c2928.md)|creazione di un'istanza esplicita; '*Identifier*' non è una funzione o un membro dati statici della classe modello '*Class*'|
|[Errore del compilatore C2929](compiler-error-c2929.md)|'*dichiaratore*': creazione di un'istanza esplicita; Impossibile forzare ed escludere in modo esplicito la creazione di un'istanza del membro della classe modello|
|[Errore del compilatore C2930](compiler-error-c2930.md)|'*Class*': template-ID/Generic-ID ridefinito come enumeratore di ' enum *Identifier*'|
|[Errore del compilatore C2931](compiler-error-c2931.md)|'*Class1*': template-ID/Generic-ID ridefinito come funzione membro di '*Class2*'|
|[Errore del compilatore C2932](compiler-error-c2932.md)|'*Type*': ID-modello/Generic-ID ridefinito come membro dati di '*Identifier*'|
|[Errore del compilatore C2933](compiler-error-c2933.md)|'*Type*': ID-modello/Generic-ID ridefinito come membro typedef di '*Identifier*'|
|[Errore del compilatore C2934](compiler-error-c2934.md)|'*Type*': template-ID/Generic-ID ridefinito come '*Item*' annidato di '*Identifier*'|
|[Errore del compilatore C2935](compiler-error-c2935.md)|'*Type*': ID-modello/Generic-ID ridefinito come funzione globale|
|[Errore del compilatore C2936](compiler-error-c2936.md)|'*Type*': ID-modello/Generic-ID ridefinito come variabile dati globale|
|[Errore del compilatore C2937](compiler-error-c2937.md)|'*Type*': ID-modello/Generic-ID ridefinito come typedef globale|
|Errore del compilatore C2938|'*Identifier*': non è stato possibile specializzare il modello di alias|
|[Errore del compilatore C2939](compiler-error-c2939.md)|'*Type*': ID-modello/Generic-ID ridefinito come variabile dati locale|
|[Errore del compilatore C2940](compiler-error-c2940.md)|'*Type*': ID-modello/Generic-ID ridefinito come typedef locale|
|[Errore del compilatore C2941](compiler-error-c2941.md)|'*Type*': template-ID/Generic-ID ridefinito come '*Item*' locale|
|[Errore del compilatore C2942](compiler-error-c2942.md)|'*Type*': ID-modello/Generic-ID ridefinito come argomento formale di una funzione|
|[Errore del compilatore C2943](compiler-error-c2943.md)|'*Type*': ID-modello/Generic-ID ridefinito come argomento di tipo di un modello|
|[Errore del compilatore C2944](compiler-error-c2944.md)|'*Type*': ID-modello/Generic-ID ridefinito come argomento valore di un modello|
|[Errore del compilatore C2945](compiler-error-c2945.md)|creazione esplicita di un'istanza non riferita a una specializzazione di una classe modello|
|[Errore del compilatore C2946](compiler-error-c2946.md)|creazione di un'istanza esplicita; '*Type*' non è una specializzazione di classe modello|
|[Errore del compilatore C2947](compiler-error-c2947.md)|previsto ' >' per terminare gli argomenti del modello. trovato '*token*'|
|[Errore del compilatore C2948](compiler-error-c2948.md)|creazione di un'istanza esplicita; identificatore di classe di archiviazione '*specifier*' non consentito sulla specializzazione|
|Errore del compilatore C2949|thread_local non è supportato con/kernel|
|Errore del compilatore C2950|Obsoleta.|
|[Errore del compilatore C2951](compiler-error-c2951.md)|le dichiarazioni template/Generic sono consentite solo nell'ambito globale, dello spazio dei nomi o della classe|
|[Errore del compilatore C2952](compiler-error-c2952.md)|'*Declaration*': modello/dichiarazione generica mancante nell'elenco di parametri template/Generic|
|[Errore del compilatore C2953](compiler-error-c2953.md)|'*Type*': modello di classe già definito|
|Errore del compilatore C2954|argomento di istruzione non compreso nell'intervallo|
|[Errore del compilatore C2955](compiler-error-c2955.md)|'*Type*': l'uso del modello di classe/generico richiede un elenco di argomenti generici/modello|
|Errore del compilatore C2956|la funzione di deallocazione ridimensionata ' operator delete (void *, size_t)' verrebbe scelta come funzione di deallocazione di posizionamento.|
|[Errore del compilatore C2957](compiler-error-c2957.md)|'*token*': delimitatore sinistro non valido: previsto ' <'|
|[Errore del compilatore C2958](compiler-error-c2958.md)|il *delimitatore* sinistro trovato in '*file*(*Line_number*)' non corrisponde correttamente|
|[Errore del compilatore C2959](compiler-error-c2959.md)|una funzione o una classe generica non può essere un membro di un modello|
|Errore del compilatore C2960|Obsoleta.|
|Errore del compilatore C2961|'*Function*': creazioni di istanze esplicite incoerenti. una precedente creazione di un'istanza esplicita non ha specificato '*argument*'|
|[Errore del compilatore C2962](compiler-error-c2962.md)|errore di sintassi:'*token*': prevista fine della definizione della funzione membro della classe modello con '}'|
|Errore del compilatore C2963|Obsoleta.|
|Errore del compilatore C2964|Obsoleta.|
|Errore del compilatore C2965|__declspec (*identificatore*) non è supportato con/kernel|
|Errore del compilatore C2966|'*identificatore1*': deve avere lo stesso __declspec (code_seg (...)) della relativa classe di base '*identifier2*'|
|Errore del compilatore C2967|'*Identifier*': una funzione virtuale che esegue l'override deve avere lo stesso __declspec (code_seg (...)) come funzione virtuale sottoposta a override|
|Errore del compilatore C2968|'*Identifier*': dichiarazione di alias ricorsiva|
|[Errore del compilatore C2969](compiler-error-c2969.md)|errore di sintassi:'*token*': previsto termine della definizione di funzione membro con '}'|
|[Errore del compilatore C2970](compiler-error-c2970.md)|'*Type*': parametro di modello '*Parameter*':'*argument*': un'espressione che include oggetti con collegamento interno non può essere usata come argomento non di tipo|
|[Errore del compilatore C2971](compiler-error-c2971.md)|'*Type*': parametro di modello '*Parameter*':'*argument*': Impossibile utilizzare una variabile con durata di archiviazione non statica come argomento non di tipo|
|Errore del compilatore C2972|'*Type*': parametro di modello '*Parameter*': il tipo di argomento non di tipo non è valido|
|[Errore del compilatore C2973](compiler-error-c2973.md)|'*template*': argomento di modello '*Number*' non valido|
|[Errore del compilatore C2974](compiler-error-c2974.md)|'*Type*': argomento generico o modello non valido per '*Parameter*'. previsto tipo|
|[Errore del compilatore C2975](compiler-error-c2975.md)|'*Type*': argomento di modello non valido per '*Parameter*', espressione costante in fase di compilazione prevista|
|[Errore del compilatore C2976](compiler-error-c2976.md)|'*Type*': numero insufficiente di argomenti/modelli generici|
|[Errore del compilatore C2977](compiler-error-c2977.md)|'*Type*': troppi argomenti di modello/generici|
|[Errore del compilatore C2978](compiler-error-c2978.md)|errore di sintassi: previsto '*keyword1*' o '*keyword2*'; il tipo '*Type*' è stato trovato; i parametri non di tipo non sono supportati in generics|
|[Errore del compilatore C2979](compiler-error-c2979.md)|le specializzazioni esplicite non sono supportate in generics|
|Errore del compilatore C2980|La gestione delle eccezioni C++ non è supportata con/kernel|
|Errore del compilatore C2981|il formato dinamico di '*keyword*' non è supportato con/kernel|
|Errore del compilatore C2982|'*Declaration*': sono state usate __declspec diverse (code_seg (...)): è'*identificatore1*' adesso '*identifier2*'|
|Errore del compilatore C2983|'*Declaration*': tutte le dichiarazioni devono avere un __declspec identico (code_seg (...))|
|Errore del compilatore C2984|Obsoleta.|
|Errore del compilatore C2985|'*argument*': l'argomento __declspec (code_seg (...)) deve essere una sezione di testo|
|Errore del compilatore C2986|'*Identifier*': __declspec (code_seg (...)) può essere applicato solo a una classe o a una funzione|
|Errore del compilatore C2987|una dichiarazione non può avere sia __declspec (code_seg ('*Identifier*')) che __declspec (code_seg ('*value*'))|
|[Errore del compilatore C2988](compiler-error-c2988.md)|dichiarazione/definizione di modello non riconoscibile|
|[Errore del compilatore C2989](compiler-error-c2989.md)|'*Class*': modello di classe/generico già dichiarato come modello non di classe/generico|
|[Errore del compilatore C2990](compiler-error-c2990.md)|'*Class*': modello/generico non di classe già dichiarato come modello di classe/generico|
|[Errore del compilatore C2991](compiler-error-c2991.md)|ridefinizione del parametro template/Generic '*Parameter*'|
|[Errore del compilatore C2992](compiler-error-c2992.md)|'*Class*': elenco di parametri generico o modello non valido o mancante|
|[Errore del compilatore C2993](compiler-error-c2993.md)|'*Type*': tipo non valido per il parametro di modello non di tipo '*Identifier*'|
|[Errore del compilatore C2994](compiler-error-c2994.md)|classe senza nome nell'elenco dei parametri di modello|
|[Errore del compilatore C2995](compiler-error-c2995.md)|'*Declaration*': modello di funzione già definito|
|[Errore del compilatore C2996](compiler-error-c2996.md)|'*Function*': definizione di modello di funzione ricorsiva|
|Errore del compilatore C2997|'*Function*': Impossibile dedurre il limite di matrice da un inizializzatore di membro predefinito|
|[Errore del compilatore C2998](compiler-error-c2998.md)|'*dichiaratore*': non può essere una definizione di modello|
|Errore del compilatore C2999|ERRORE sconosciuto per ulteriori informazioni, scegliere supporto tecnico dal menu? di Visual C++ o aprire il file della Guida relativo al supporto tecnico|

## <a name="see-also"></a>Vedi anche

[Errori e avvisi degli strumenti di compilazione e compilatore C/C++](../compiler-errors-1/c-cpp-build-errors.md) \
[Errori del compilatore da C2000 a C3999](../compiler-errors-1/compiler-errors-c2000-c3999.md)
