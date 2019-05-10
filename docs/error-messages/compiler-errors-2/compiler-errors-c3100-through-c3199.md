---
title: Errori del compilatore da C3100 a C3199
ms.date: 04/21/2019
f1_keywords:
- C3102
- C3105
- C3107
- C3108
- C3109
- C3111
- C3112
- C3119
- C3122
- C3123
- C3124
- C3125
- C3127
- C3128
- C3129
- C3143
- C3144
- C3146
- C3147
- C3148
- C3151
- C3158
- C3164
- C3165
- C3169
- C3177
- C3178
- C3184
- C3188
- C3191
- C3193
helpviewer_keywords:
- C3102
- C3105
- C3107
- C3108
- C3109
- C3111
- C3112
- C3119
- C3122
- C3123
- C3124
- C3125
- C3127
- C3128
- C3129
- C3143
- C3144
- C3146
- C3147
- C3148
- C3151
- C3158
- C3164
- C3165
- C3169
- C3177
- C3178
- C3184
- C3188
- C3191
- C3193
ms.assetid: 7bc40c2f-6a8d-488a-b665-f39375afee77
ms.openlocfilehash: efa3207a9fdfb81a52bf319a1cbc2da84084b6cd
ms.sourcegitcommit: 283cb64fd7958a6b7fbf0cd8534de99ac8d408eb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2019
ms.locfileid: "64856816"
---
# <a name="compiler-errors-c3100-through-c3199"></a>Errori del compilatore da C3100 a C3199

Gli articoli in questa sezione della documentazione illustrano un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Error|Messaggio|
|-----------|-------------|
|[Errore del compilatore da C3100](compiler-error-c3100.md)|«*identificatore*': qualificatore di attributo sconosciuto|
|[Errore del compilatore C3101](compiler-error-c3101.md)|espressione non valida per l'argomento di attributo denominato '*identificatore*'|
|Errore del compilatore C3102|Obsoleta.|
|[Errore del compilatore C3103](compiler-error-c3103.md)|«*identificatore*': argomento denominato ripetuto|
|[Errore del compilatore C3104](compiler-error-c3104.md)|argomento dell'attributo non valido|
|Errore del compilatore C3105|«*simbolo*': non può essere usato come attributo|
|[Errore del compilatore C3106](compiler-error-c3106.md)|«*attributo*': argomenti non denominati devono precedere gli argomenti denominati|
|Errore del compilatore C3107|«*attributo*': non è possibile definire funzioni membro di attributi nativi|
|Errore del compilatore C3108|non è possibile dedurre un tipo come un elenco di inizializzatori non è un'espressione|
|Errore del compilatore C3109|«*identificatore*': i metodi di interfaccia devono utilizzare stdcall' o cdecl' convenzione di chiamata|
|[Errore del compilatore C3110](compiler-error-c3110.md)|«*funzione*': è possibile eseguire l'overload di un metodo di interfaccia COM|
|Errore del compilatore C3111|Un elenco di inizializzatori non può essere utilizzato come l'argomento predefinito per un parametro di modello|
|Errore del compilatore C3112|«*interfaccia*': un'interfaccia può essere dichiarata solo globale o un ambito dello spazio dei nomi|
|[Errore del compilatore C3113](compiler-error-c3113.md)|un' 'interfaccia/enum' non può essere un modello o generico|
|[Errore del compilatore C3114](compiler-error-c3114.md)|«*identificatore*': argomento di attributo denominato non valida|
|[Errore del compilatore C3115](compiler-error-c3115.md)|«*attributo*': questo attributo non è consentito in '*costruire*»|
|[Errore del compilatore C3116](compiler-error-c3116.md)|«*identificatore*': classe di archiviazione non è valido per il metodo di interfaccia|
|[Errore del compilatore C3117](compiler-error-c3117.md)|«*interfaccia*': un'interfaccia può avere solo una classe di base|
|[Errore del compilatore C3118](compiler-error-c3118.md)|«*interfaccia*': le interfacce non supportano l'ereditarietà virtuale|
|Errore del compilatore C3119|alignas (void) non è consentita|
|[Errore del compilatore C3120](compiler-error-c3120.md)|«*identificatore*': i metodi di interfaccia non possono accettare un elenco di argomenti variabili|
|[Errore del compilatore C3121](compiler-error-c3121.md)|non è possibile cambiare il GUID della classe*classe*'|
|Errore del compilatore C3122|«*interfaccia*': un'interfaccia generica WinRT non può contenere GUID|
|Errore del compilatore C3123|Interfaccia generica WinRT non può includere vincoli|
|Errore del compilatore C3124|'signed char' non è un tipo di dati WinRT valido. Usare invece 'unsigned char', 'wchar_t' o 'signed short'.|
|Errore del compilatore C3125|«*tipo*': tipo non è possibile derivare direttamente o indirettamente da 'Platform:: Exception'|
|[Errore del compilatore C3126](compiler-error-c3126.md)|non è possibile definire un'unione '*unione*'all'interno del tipo gestito o WinRT'*tipo*'|
|Errore del compilatore C3127|«*tipo*': '*tratto*' tratto può essere utilizzato solo in una classe ref WinRT|
|Errore del compilatore C3128|«*tipo*'non ha un vtable introdotto da'*tipo*»|
|Errore del compilatore C3129|«*tipo*': default_vptr_for_base può essere utilizzato solo in basi e tipi polimorfici definiti localmente|
|[Errore del compilatore C3130](compiler-error-c3130.md)|Errore del compilatore interno: non è riuscito a scrivere nel PDB il blocco di codice inserito|
|[Errore del compilatore C3131](compiler-error-c3131.md)|progetto deve avere un attributo 'module' con una proprietà 'name'|
|[Errore del compilatore C3132](compiler-error-c3132.md)|«*parametro*': le matrici di parametri è applicabile solo a un argomento formale di tipo 'matrice unidimensionale gestita o WinRT'|
|[Errore del compilatore C3133](compiler-error-c3133.md)|Non è possibile applicare attributi a varargs di C++|
|[Errore del compilatore C3134](compiler-error-c3134.md)|«*valore*': valore dell'argomento dell'attributo '*argomento*'non dispone di un tipo valido'*tipo*»|
|[Errore del compilatore C3135](compiler-error-c3135.md)|«*identificatore*': una proprietà non può avere un 'const' o 'volatile' di tipo|
|[Errore del compilatore C3136](compiler-error-c3136.md)|«*interface*': un'interfaccia COM può ereditare solo da un'altra interfaccia COM, '*interfaccia*' non è un'interfaccia COM|
|[Errore del compilatore C3137](compiler-error-c3137.md)|«*identificatore*': non è possibile inizializzare una proprietà|
|[Errore del compilatore C3138](compiler-error-c3138.md)|«*identifier*': un '*attributo*' interfaccia deve ereditare da IDispatch o da un'interfaccia che eredita da IDispatch|
|[Errore del compilatore C3139](compiler-error-c3139.md)|«*tipo*': non è possibile esportare un tipo definito dall'utente senza membri|
|[Errore del compilatore C3140](compiler-error-c3140.md)|non può contenere più attributi 'module' nella stessa unità di compilazione|
|[Errore del compilatore C3141](compiler-error-c3141.md)|«*interfaccia*': le interfacce supportano solo l'ereditarietà pubblica|
|[Errore del compilatore C3142](compiler-error-c3142.md)|«*proprietà*': è possibile accettare l'indirizzo di una proprietà|
|Errore del compilatore C3143|«*argomento*': argomento di attributo non può avere più valori|
|Errore del compilatore C3144|«*attributo*': attributo richiede argomenti espliciti, '*argomento*' è senza nome|
|[Errore del compilatore C3145](compiler-error-c3145.md)|«*identifier*': variabile globale o statica non abbia tipo gestito o WinRT '*tipo*»|
|Errore del compilatore C3146|Obsoleta.|
|Errore del compilatore C3147|Obsoleta.|
|Errore del compilatore C3148|Obsoleta.|
|[Errore del compilatore C3149](compiler-error-c3149.md)|«*tipo*': non è possibile usare questo tipo senza un livello superiore '*token*»|
|[Errore del compilatore C3150](compiler-error-c3150.md)|«*costruire*': '*attributo*' può essere applicato solo a una classe, struct, interfaccia, matrice o puntatore|
|Errore del compilatore C3151|Obsoleta.|
|[Errore del compilatore C3152](compiler-error-c3152.md)|«*funzione*': '*parola chiave*' può essere applicato solo a una classe, struct o funzione membro virtuale|
|[Errore del compilatore C3153](compiler-error-c3153.md)|«*interfaccia*': non è possibile creare un'istanza di un'interfaccia|
|[Errore del compilatore C3154](compiler-error-c3154.md)|Previsto ',' prima di puntini di sospensione. I puntini di sospensione non supportata in funzioni di matrice di parametri separati da virgola non.|
|[Errore del compilatore C3155](compiler-error-c3155.md)|atributy nejsou povolené. in un indicizzatore di proprietà|
|[Errore del compilatore C3156](compiler-error-c3156.md)|«*classe*': non è possibile avere una definizione locale di un tipo gestito o WinRT|
|[Errore del compilatore C3157](compiler-error-c3157.md)|Attributo ParamArray può essere applicato solo all'ultimo parametro|
|Errore del compilatore C3158|«*funzione*': '*parola chiave*' può essere applicato solo a una funzione membro virtuale|
|[Errore del compilatore C3159](compiler-error-c3159.md)|«*identificatore*': Impossibile dichiarare matrici di puntatori al tipo di valore|
|[Errore del compilatore C3160](compiler-error-c3160.md)|«*tipo*': un membro dati di una classe gestita o WinRT non può avere questo tipo|
|[Errore del compilatore C3161](compiler-error-c3161.md)|«*interfaccia*': classe, struct o interfaccia in un'interfaccia annidamento non è valida; impossibile annidare un'interfaccia in una classe o struct non è valida|
|[Errore del compilatore C3162](compiler-error-c3162.md)|«*tipo*': un tipo di riferimento che ha un distruttore non può essere usato come tipo di membro dati statici '*membro*»|
|[Errore del compilatore C3163](compiler-error-c3163.md)|«*classe*': attributi non coerenti con la dichiarazione precedente|
|Errore del compilatore C3164|Obsoleta.|
|Errore del compilatore C3165|«*valore*': non è possibile convertire un valore integrale o a virgola mobile|
|[Errore del compilatore C3166](compiler-error-c3166.md)|Obsoleta. '*tipo*': un membro dati di una classe gestita o WinRT non può avere tipo di '*pointer_type* a interni *managed_pointer_type*'|
|[Errore del compilatore C3167](compiler-error-c3167.md)|Impossibile eseguire l'inizializzazione di .NET Framework: assicurarsi che sia installato|
|[Errore del compilatore C3168](compiler-error-c3168.md)|«*tipo*': tipo di enumerazione sottostante non valido|
|Errore del compilatore C3169|«*tipo*': non è possibile dedurre il tipo per 'auto' da '*tipo*»|
|[Errore del compilatore C3170](compiler-error-c3170.md)|non può avere identificatori di moduli diversi in un progetto|
|[Errore del compilatore C3171](compiler-error-c3171.md)|«*modulo*': non è possibile specificare gli attributi di modulo diversi in un progetto|
|[Errore del compilatore C3172](compiler-error-c3172.md)|«*identificatore*': non è possibile specificare attributi idl_module diversi nello stesso progetto|
|[Errore del compilatore C3173](compiler-error-c3173.md)|mancata corrispondenza delle versioni nel merge idl|
|[Errore del compilatore C3174](compiler-error-c3174.md)|attributo del modulo non è stato specificato|
|[Errore del compilatore C3175](compiler-error-c3175.md)|«*funzione*': non è possibile chiamare un metodo di un tipo gestito dalla funzione non gestita '*funzione*»|
|[Errore del compilatore C3176](compiler-error-c3176.md)|«*tipo*': Impossibile dichiarare un tipo valore locale|
|Errore del compilatore C3177|non è possibile avere una funzione di conversione a un tipo che contiene '*tipo*'|
|Errore del compilatore C3178|«*tipo*': Impossibile utilizzare ParamArray in una funzione con argomenti predefiniti|
|[Errore del compilatore C3179](compiler-error-c3179.md)|non è consentito un tipo gestito o WinRT senza nome|
|[Errore del compilatore C3180](compiler-error-c3180.md)|«*tipo*': nome supera il limite di metadati di '*numero*' caratteri|
|[Errore del compilatore C3181](compiler-error-c3181.md)|«*tipo*': operando non valido per *operatore*|
|[Errore del compilatore C3182](compiler-error-c3182.md)|«*tipo*': una dichiarazione di accesso o dichiarazione using di membro non valida all'interno di un tipo gestito o WinRT|
|[Errore del compilatore C3183](compiler-error-c3183.md)|non è possibile definire una classe senza nome, uno struct o unione all'interno del tipo gestito o WinRT '*classe*'|
|Errore del compilatore C3184|Obsoleta.|
|[Errore del compilatore C3185](compiler-error-c3185.md)|'typeid': utilizzato nel tipo gestito o WinRT '*tipo*', utilizzare '*operatore*' invece|
|Errore del compilatore C3186|Obsoleta.|
|[Errore del compilatore C3187](compiler-error-c3187.md)|«*identificatore*': disponibile solo all'interno del corpo di una funzione|
|Errore del compilatore C3188|Obsoleta.|
|[Errore del compilatore C3189](compiler-error-c3189.md)|' typeid <*dichiaratore*>': questa sintassi non è più supportata, use::typeid invece|
|[Errore del compilatore C3190](compiler-error-c3190.md)|«*declarator*'con gli argomenti di modello fornito non è la creazione di istanze esplicite di qualsiasi funzione membro di'*tipo*»|
|Errore del compilatore C3191|Obsoleta.|
|[Errore del compilatore C3192](compiler-error-c3192.md)|Errore di sintassi: ' ^' non è un operatore di prefisso (si intendeva ' *'?)|
|Errore del compilatore C3193|'*costruire*': richiede ' o clr' o ' / ZW' opzione della riga di comando|
|[Errore del compilatore C3194](compiler-error-c3194.md)|«*tipo*': un tipo di valore non può contenere un operatore di assegnazione|
|[Errore del compilatore C3195](compiler-error-c3195.md)|«*parola chiave*': è riservato e non può essere usato come membro di un tipo di classe o il valore di riferimento. Gli operatori CLR o WinRT devono essere definiti usando la parola chiave 'operator'|
|[Errore del compilatore C3196](compiler-error-c3196.md)|«*identificatore*': utilizzato più volte|
|[Errore del compilatore C3197](compiler-error-c3197.md)|«*parola chiave*': può essere usato solo nelle definizioni|
|[Errore del compilatore C3198](compiler-error-c3198.md)|utilizzo non valido di pragma a virgola mobile: il pragma fenv_access funziona solo in modalità precise|
|[Errore del compilatore C3199](compiler-error-c3199.md)|utilizzo non valido di pragma a virgola mobile: le eccezioni non sono supportate in modalità non precise|

## <a name="see-also"></a>Vedere anche

[C /C++ del compilatore e compilazione di errori e avvisi degli strumenti](../compiler-errors-1/c-cpp-build-errors.md) \
[Errori del compilatore da C2000 - C3999](../compiler-errors-1/compiler-errors-c2000-c3999.md)
