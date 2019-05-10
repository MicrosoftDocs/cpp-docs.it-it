---
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
ms.openlocfilehash: 5d443153582921775a72e5af647d65b102b80b0b
ms.sourcegitcommit: 283cb64fd7958a6b7fbf0cd8534de99ac8d408eb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2019
ms.locfileid: "64857227"
---
# <a name="compiler-errors-c2900-through-c2999"></a>Errori del compilatore da C2900 a C2999

Gli articoli in questa sezione della documentazione illustrano un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Error|Messaggio|
|-----------|-------------|
|Errore del compilatore da C2900|«*dichiaratore*': i modelli di funzione membro nelle classi WinRT devono essere 'private', 'internal' o 'protected private'|
|Errore del compilatore C2901|'*identifier*': Un'interfaccia o delegato generico non può essere pubblico|
|[Errore del compilatore C2902](compiler-error-c2902.md)|«*token*': imprevisto token seguente 'modello o generico', previsto un identificatore|
|[Errore del compilatore C2903](compiler-error-c2903.md)|«*identificatore*': simbolo non è un modello di classe o generico né un modello o generico (funzione)|
|[Errore del compilatore C2904](compiler-error-c2904.md)|«*identificatore*': nome già utilizzato per un modello nell'ambito corrente|
|Errore del compilatore C2905|Obsoleta.|
|[Errore del compilatore C2906](compiler-error-c2906.md)|«*modello*': richiede la specializzazione esplicita 'modello <>'|
|Errore del compilatore C2907|l'argomento di registro '*numero*' non specifica un valore valido numero del Registro|
|[Errore del compilatore C2908](compiler-error-c2908.md)|specializzazione esplicita. «*modello*' è già stata creata un'istanza|
|[Errore del compilatore C2909](compiler-error-c2909.md)|«*identificatore*': creazione esplicita di istanza del modello di funzione richiede un tipo restituito|
|[Errore del compilatore C2910](compiler-error-c2910.md)|«*funzione*': non è possibile eseguire la specializzazione esplicita|
|[Errore del compilatore C2911](compiler-error-c2911.md)|«*membro*': non può essere dichiarata o definita nell'ambito corrente|
|[Errore del compilatore C2912](compiler-error-c2912.md)|specializzazione esplicita '*dichiarazione*' non è una specializzazione di un modello di funzione|
|[Errore del compilatore C2913](compiler-error-c2913.md)|specializzazione esplicita. «*dichiarazione*' non è una specializzazione del modello di classe|
|[Errore del compilatore C2914](compiler-error-c2914.md)|«*identificatore*': non è possibile dedurre un argomento di modello/generici come argomento della funzione è ambiguo|
|Errore del compilatore C2915|«*identifier*': '*tipo*' non può essere utilizzato direttamente sulla superficie pubblicata di un tipo WinRT. Utilizzare ' platform:: Object ^' invece di passare questo tipo|
|Errore del compilatore C2916|'*identificatore*': \[FlagsAttribute] può essere specificato solo in un'enumerazione pubblica con un 'unsigned int' tipo sottostante|
|[Errore del compilatore C2917](compiler-error-c2917.md)|«*identificatore*': parametro di modello non valido|
|[Errore del compilatore C2918](compiler-error-c2918.md)|'*identifier*': Impossibile utilizzare proprietà indicizzate sulla superficie pubblicata di un tipo WinRT|
|[Errore del compilatore C2919](compiler-error-c2919.md)|«*tipo*': Impossibile utilizzare operatori sulla superficie pubblicata di un tipo WinRT|
|[Errore del compilatore C2920](compiler-error-c2920.md)|ridefinizione: '*tipo*': modello di classe o generico già dichiarato come*dichiarazione*'|
|[Errore del compilatore C2921](compiler-error-c2921.md)|ridefinizione: '*tipo*': modello di classe o generico è stato ridichiarato come*dichiarazione*'|
|Errore del compilatore C2922|«*interfaccia*': Un'interfaccia WinRT non può contenere membri statici|
|[Errore del compilatore C2923](compiler-error-c2923.md)|«*tipo*': '*identifier*'non è un modello o generico valido argomento tipo per il parametro '*parametro*»|
|Errore del compilatore C2924|argomento della routine declspec non in R2|
|Errore del compilatore C2925|routine declspec non è possibile utilizzare la virgola mobile|
|Errore del compilatore C2926|«*identificatore*': un inizializzatore di membro predefinito non è consentito per un membro di uno struct anonimo all'interno di un'unione|
|[Errore del compilatore C2927](compiler-error-c2927.md)|«*identificatore*': un modello di funzione deve essere chiamato con almeno un argomento|
|[Errore del compilatore C2928](compiler-error-c2928.md)|creazione di un'istanza esplicita. «*identifier*'non è una funzione o un membro dati statici della classe modello'*classe*»|
|[Errore del compilatore C2929](compiler-error-c2929.md)|«*dichiaratore*': creazione esplicita di istanza; in modo esplicito non può forzare e inibire la creazione di istanze del membro di classe modello|
|[Errore del compilatore C2930](compiler-error-c2930.md)|«*classe*': modello-id/generico-id ridefinito come enumeratore di ' enum *identificatore*»|
|[Errore del compilatore C2931](compiler-error-c2931.md)|«*class1*': id modello/generici-id ridefinito come una funzione membro di '*class2*»|
|[Errore del compilatore C2932](compiler-error-c2932.md)|«*tipo*': template-id/generico-id ridefinito come membro dati di '*identificatore*»|
|[Errore del compilatore C2933](compiler-error-c2933.md)|«*tipo*': template-id/generico-id ridefinito come membro typedef di '*identificatore*»|
|[Errore del compilatore C2934](compiler-error-c2934.md)|'*tipo*': id modello/generici-id ridefinito come nidificate '*elemento*'of'*identificatore*'|
|[Errore del compilatore C2935](compiler-error-c2935.md)|«*tipo*': modello-id/generico-id ridefinito come funzione globale|
|[Errore del compilatore C2936](compiler-error-c2936.md)|«*tipo*': id modello/generiche-id ridefinito come variabile dati globale|
|[Errore del compilatore C2937](compiler-error-c2937.md)|«*tipo*': template-id/generico-id ridefinito come typedef globale|
|Errore del compilatore C2938|«*identificatore*': Impossibile specializzare il modello di alias|
|[Errore del compilatore C2939](compiler-error-c2939.md)|«*tipo*': id modello/generici-id ridefinito come variabile dati locale|
|[Errore del compilatore C2940](compiler-error-c2940.md)|«*tipo*': template-id/generico-id ridefinito come typedef locale|
|[Errore del compilatore C2941](compiler-error-c2941.md)|«*tipo*': id modello/generici-id ridefinito come una variabile locale '*elemento*»|
|[Errore del compilatore C2942](compiler-error-c2942.md)|«*tipo*': modello-id/generico-id ridefinito come argomento formale di una funzione|
|[Errore del compilatore C2943](compiler-error-c2943.md)|«*tipo*': modello-id/generico-id ridefinito come argomento di tipo di un modello|
|[Errore del compilatore C2944](compiler-error-c2944.md)|«*tipo*': template-id/generico-id ridefinito come argomento valore di un modello|
|[Errore del compilatore C2945](compiler-error-c2945.md)|creazione esplicita di un'istanza non riferita a una specializzazione di una classe modello|
|[Errore del compilatore C2946](compiler-error-c2946.md)|creazione di un'istanza esplicita. «*tipo*' non è una specializzazione della classe modello|
|[Errore del compilatore C2947](compiler-error-c2947.md)|è previsto ' >' per terminare gli argomenti di modello, trovato '*token*'|
|[Errore del compilatore C2948](compiler-error-c2948.md)|creazione di un'istanza esplicita. Identificatore di classe di archiviazione '*identificatore*' non valido in una specializzazione|
|Errore del compilatore C2949|thread_local non è supportato con /kernel|
|Errore del compilatore C2950|Obsoleta.|
|[Errore del compilatore C2951](compiler-error-c2951.md)|le dichiarazioni di modello/generici sono consentite solo dello spazio dei nomi globale, o ambito di classe|
|[Errore del compilatore C2952](compiler-error-c2952.md)|«*dichiarazione*': dichiarazione di modello/generiche manca l'elenco di parametri di modello/generici|
|[Errore del compilatore C2953](compiler-error-c2953.md)|«*tipo*': modello di classe già definito|
|Errore del compilatore C2954|argomento di istruzione non compreso nell'intervallo|
|[Errore del compilatore C2955](compiler-error-c2955.md)|«*tipo*': utilizzo della classe modello o generico richiede l'elenco di argomenti di modello/generici|
|Errore del compilatore C2956|deallocazione con dimensione funzione 'operator delete (void *, size_t)' verrà scelta come funzione di deallocazione di selezione host.|
|[Errore del compilatore C2957](compiler-error-c2957.md)|«*token*': delimitatore sinistro non valido: previsto ' <»|
|[Errore del compilatore C2958](compiler-error-c2958.md)|sinistra *delimitatore* trovato in '*file*(*line_number*)' non è stata trovata corrispondenza correttamente|
|[Errore del compilatore C2959](compiler-error-c2959.md)|una classe generica o una funzione non può essere un membro di un modello|
|Errore del compilatore C2960|Obsoleta.|
|Errore del compilatore C2961|'*funzione*': creazioni esplicite incoerente una creazione esplicita di istanza precedente non specificava '*argomento*'|
|[Errore del compilatore C2962](compiler-error-c2962.md)|Errore di sintassi: '*token*': prevista una definizione di funzione membro di classe modello per terminare con '}'|
|Errore del compilatore C2963|Obsoleta.|
|Errore del compilatore C2964|Obsoleta.|
|Errore del compilatore C2965|declspec (*identificatore*) non è supportato con /kernel|
|Errore del compilatore C2966|«*identifier1*': deve avere la stessa __declspec(code_seg(...)) come la classe base*identifier2*»|
|Errore del compilatore C2967|«*identificatore*': una funzione virtuale esegue l'override deve avere la stessa __declspec(code_seg(...)) come una funzione virtuale sottoposto a override|
|Errore del compilatore C2968|«*identificatore*': dichiarazione alias ricorsiva|
|[Errore del compilatore C2969](compiler-error-c2969.md)|Errore di sintassi: '*token*': previsto al termine della definizione funzione membro '}'|
|[Errore del compilatore C2970](compiler-error-c2970.md)|'*tipo*': parametro di modello '*parametro*': '*argomento*': non è possibile usare un'espressione che comprende oggetti con collegamento interno come argomento non di tipo|
|[Errore del compilatore C2971](compiler-error-c2971.md)|«*tipo*': parametro di modello '*parametro*': '*argomento*': una variabile con durata di archiviazione non statica non può essere usata come argomento non di tipo|
|Errore del compilatore C2972|«*tipo*': parametro di modello '*parametro*': il tipo di argomento non di tipo non è valido|
|[Errore del compilatore C2973](compiler-error-c2973.md)|«*modello*': argomento di modello non valido '*numero*»|
|[Errore del compilatore C2974](compiler-error-c2974.md)|«*tipo*': argomento di modello/generici non è valido per '*parametro*', tipo previsto|
|[Errore del compilatore C2975](compiler-error-c2975.md)|«*tipo*': argomento di modello non valido per '*parametro*',. prevista espressione costante in fase di compilazione|
|[Errore del compilatore C2976](compiler-error-c2976.md)|«*tipo*': argomenti di modello/generiche insufficienti|
|[Errore del compilatore C2977](compiler-error-c2977.md)|«*tipo*': troppi argomenti di modello/generici|
|[Errore del compilatore C2978](compiler-error-c2978.md)|Errore di sintassi: previsto '*keyword1*'o'*keyword2*', trovato tipo'*tipo*', non di tipo parametri non sono supportati in generics|
|[Errore del compilatore C2979](compiler-error-c2979.md)|le specializzazioni esplicite non sono supportate in generics|
|Errore del compilatore C2980|Gestione delle eccezioni C++ non è supportato con /kernel|
|Errore del compilatore C2981|il formato dinamico di '*parola chiave*' non è supportato con /kernel|
|Errore del compilatore C2982|'*dichiarazione*': __declspec(code_seg(...)) diversa usata: era '*identifier1*"adesso"*identifier2*'|
|Errore del compilatore C2983|«*dichiarazione*': tutte le dichiarazioni devono avere un __declspec(code_seg(...)) identici|
|Errore del compilatore C2984|Obsoleta.|
|Errore del compilatore C2985|«*argomento*': l'argomento __declspec(code_seg(...)) deve essere una sezione di testo|
|Errore del compilatore C2986|«*identificatore*': __declspec(code_seg(...)) può essere applicato solo a una classe o una funzione|
|Errore del compilatore C2987|una dichiarazione non può avere sia declspec (code_seg ('*identifier*')) e declspec (code_seg ('*valore*'))|
|[Errore del compilatore C2988](compiler-error-c2988.md)|modello non riconoscibile dichiarazione/definizione|
|[Errore del compilatore C2989](compiler-error-c2989.md)|«*classe*': modello di classe o generico già dichiarato come un modello non di classe o generico|
|[Errore del compilatore C2990](compiler-error-c2990.md)|«*classe*': modello non di classe o generico già dichiarato come un modello di classe o generico|
|[Errore del compilatore C2991](compiler-error-c2991.md)|ridefinizione del parametro di modello o generico '*parametro*'|
|[Errore del compilatore C2992](compiler-error-c2992.md)|«*classe*': elenco di parametri non validi o mancanti modello/generici|
|[Errore del compilatore C2993](compiler-error-c2993.md)|«*tipo*': tipo non valido per il parametro di modello non di tipo '*identificatore*»|
|[Errore del compilatore C2994](compiler-error-c2994.md)|classe senza nome nell'elenco dei parametri di modello|
|[Errore del compilatore C2995](compiler-error-c2995.md)|«*dichiarazione*': modello di funzione già definito|
|[Errore del compilatore C2996](compiler-error-c2996.md)|«*funzione*': definizione di modello di funzione ricorsiva|
|Errore del compilatore C2997|«*funzione*': limite di matrice non può essere dedotto da un inizializzatore di membro predefinito|
|[Errore del compilatore C2998](compiler-error-c2998.md)|«*dichiaratore*': non può essere una definizione di modello|
|Errore del compilatore C2999|SCONOSCIUTO errore, scegliere supporto tecnico dal menu di Visual C++ o aprire il file della Guida di supporto tecnico per altre informazioni|

## <a name="see-also"></a>Vedere anche

[C /C++ del compilatore e compilazione di errori e avvisi degli strumenti](../compiler-errors-1/c-cpp-build-errors.md) \
[Errori del compilatore da C2000 - C3999](../compiler-errors-1/compiler-errors-c2000-c3999.md)
