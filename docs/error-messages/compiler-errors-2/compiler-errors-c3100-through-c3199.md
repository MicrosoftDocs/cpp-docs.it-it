---
description: 'Altre informazioni su: errori del compilatore C3100 tramite C3199'
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
ms.openlocfilehash: d2398fa8ae783a34662efc361730a5054a982458
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97238713"
---
# <a name="compiler-errors-c3100-through-c3199"></a>Errori del compilatore da C3100 a C3199

Negli articoli di questa sezione della documentazione viene illustrato un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Errore|Message|
|-----------|-------------|
|[Errore del compilatore C3100](compiler-error-c3100.md)|'*Identifier*': qualificatore di attributo sconosciuto|
|[Errore del compilatore C3101](compiler-error-c3101.md)|espressione non valida per l'argomento dell'attributo denominato '*Identifier*'|
|Errore del compilatore C3102|Obsoleta.|
|[Errore del compilatore C3103](compiler-error-c3103.md)|'*Identifier*': argomento denominato ripetuto|
|[Errore del compilatore C3104](compiler-error-c3104.md)|argomento di attributo non valido|
|Errore del compilatore C3105|'*Symbol*': non può essere usato come attributo|
|[Errore del compilatore C3106](compiler-error-c3106.md)|'*attribute*': gli argomenti non denominati devono precedere gli argomenti denominati|
|Errore del compilatore C3107|'*attribute*': Impossibile definire funzioni membro di attributi nativi|
|Errore del compilatore C3108|non è possibile dedurre un tipo perché un elenco di inizializzatori non è un'espressione|
|Errore del compilatore C3109|'*Identifier*': i metodi di interfaccia devono usare la convenzione di chiamata ' __stdcall ' o ' __cdecl '|
|[Errore del compilatore C3110](compiler-error-c3110.md)|'*Function*': Impossibile eseguire l'overload di un metodo di interfaccia com|
|Errore del compilatore C3111|Non è possibile usare un elenco di inizializzatori come argomento predefinito per un parametro di modello|
|Errore del compilatore C3112|'*Interface*': un'interfaccia può essere dichiarata solo nell'ambito globale o dello spazio dei nomi|
|[Errore del compilatore C3113](compiler-error-c3113.md)|' Interface/enum ' non può essere un modello/generico|
|[Errore del compilatore C3114](compiler-error-c3114.md)|'*Identifier*': non è un argomento di attributo denominato valido|
|[Errore del compilatore C3115](compiler-error-c3115.md)|'*attribute*': attributo non consentito in '*construct*'|
|[Errore del compilatore C3116](compiler-error-c3116.md)|'*specifier*': classe di archiviazione non valida per il metodo di interfaccia|
|[Errore del compilatore C3117](compiler-error-c3117.md)|'*Interface*': un'interfaccia può avere una sola classe di base|
|[Errore del compilatore C3118](compiler-error-c3118.md)|'*Interface*': le interfacce non supportano l'ereditarietà virtuale|
|Errore del compilatore C3119|aligns (void) non è consentito|
|[Errore del compilatore C3120](compiler-error-c3120.md)|'*Identifier*': i metodi di interfaccia non possono assumere un elenco di argomenti variabile|
|[Errore del compilatore C3121](compiler-error-c3121.md)|Impossibile modificare il GUID per la classe '*Class*'|
|Errore del compilatore C3122|'*Interface*': un'interfaccia generica WinRT non può avere un GUID|
|Errore del compilatore C3123|L'interfaccia generica WinRT non può avere vincoli|
|Errore del compilatore C3124|' signed char ' non è un tipo di dati WinRT valido. Usare invece ' unsigned char ',' wchar_t ' o ' signed short '.|
|Errore del compilatore C3125|'*Type*': il tipo non può derivare direttamente o indirettamente da' Platform:: Exception '|
|[Errore del compilatore C3126](compiler-error-c3126.md)|Impossibile definire un'Unione '*Union*' all'interno del tipo gestito/WinRT '*Type*'|
|Errore del compilatore C3127|'*Type*': il tratto '*tratto*' può essere usato solo in una classe di riferimento WinRT|
|Errore del compilatore C3128|'*Type*' non contiene un oggetto vtable introdotto da'*Type*'|
|Errore del compilatore C3129|'*Type*': __default_vptr_for_base può essere usato solo in basi e tipi polimorfici definiti localmente|
|[Errore del compilatore C3130](compiler-error-c3130.md)|Errore interno del compilatore: non è stato possibile scrivere nel PDB il blocco di codice inserito|
|[Errore del compilatore C3131](compiler-error-c3131.md)|il progetto deve avere un attributo ' Module ' con una proprietà' name '|
|[Errore del compilatore C3132](compiler-error-c3132.md)|'*Parameter*': le matrici di parametri possono essere applicate solo a un argomento formale di tipo ' array gestito/WinRT unidimensionale '|
|[Errore del compilatore C3133](compiler-error-c3133.md)|Non è possibile applicare attributi a varargs C++|
|[Errore del compilatore C3134](compiler-error-c3134.md)|'*value*': il valore dell'argomento dell'attributo '*argument*' non contiene il tipo '*Type*' valido|
|[Errore del compilatore C3135](compiler-error-c3135.md)|'*Identifier*': una proprietà non può avere un tipo ' const ' o ' volatile '|
|[Errore del compilatore C3136](compiler-error-c3136.md)|'*Interface*': un'interfaccia com può ereditare solo da un'altra interfaccia com,'*Interface*' non è un'interfaccia com|
|[Errore del compilatore C3137](compiler-error-c3137.md)|'*Identifier*': Impossibile inizializzare una proprietà|
|[Errore del compilatore C3138](compiler-error-c3138.md)|'*Identifier*': un'interfaccia '*attribute*' deve ereditare da IDispatch o da un'interfaccia che eredita da IDispatch|
|[Errore del compilatore C3139](compiler-error-c3139.md)|'*Type*': Impossibile esportare un tipo definito dall'utente senza membri|
|[Errore del compilatore C3140](compiler-error-c3140.md)|non è possibile avere più attributi ' Module ' nella stessa unità di compilazione|
|[Errore del compilatore C3141](compiler-error-c3141.md)|'*Interface*': le interfacce supportano solo l'ereditarietà pubblica|
|[Errore del compilatore C3142](compiler-error-c3142.md)|'*Property*': impossibile prendere l'indirizzo di una proprietà|
|Errore del compilatore C3143|'*argument*': l'argomento dell'attributo non può avere più valori|
|Errore del compilatore C3144|'*attribute*': l'attributo richiede argomenti espliciti,'*argument*' è senza nome|
|[Errore del compilatore C3145](compiler-error-c3145.md)|'*Identifier*': la variabile globale o statica non può avere il tipo gestito/WinRT '*Type*'|
|Errore del compilatore C3146|Obsoleta.|
|Errore del compilatore C3147|Obsoleta.|
|Errore del compilatore C3148|Obsoleta.|
|[Errore del compilatore C3149](compiler-error-c3149.md)|'*Type*': non è possibile usare questo tipo qui senza un'*token*' di primo livello|
|[Errore del compilatore C3150](compiler-error-c3150.md)|'*construct*':'*attribute*' può essere applicato solo a una classe, uno struct, un'interfaccia, una matrice o un puntatore|
|Errore del compilatore C3151|Obsoleta.|
|[Errore del compilatore C3152](compiler-error-c3152.md)|'*Function*':'*keyword*' può essere applicato solo a una classe, uno struct o una funzione membro virtuale|
|[Errore del compilatore C3153](compiler-error-c3153.md)|'*Interface*': non è possibile creare un'istanza di un'interfaccia|
|[Errore del compilatore C3154](compiler-error-c3154.md)|Previsto ',' prima dei puntini di sospensione. I puntini di sospensione separati da virgola non sono supportati nelle funzioni di matrice di parametri.|
|[Errore del compilatore C3155](compiler-error-c3155.md)|attributi non consentiti in un indicizzatore di proprietà|
|[Errore del compilatore C3156](compiler-error-c3156.md)|'*Class*': non è possibile avere una definizione locale di un tipo gestito/WinRT|
|[Errore del compilatore C3157](compiler-error-c3157.md)|L'attributo ParamArray può essere applicato solo all'ultimo parametro|
|Errore del compilatore C3158|'*Function*':'*keyword*' può essere applicato solo a una funzione membro virtuale|
|[Errore del compilatore C3159](compiler-error-c3159.md)|'*Identifier*': Impossibile dichiarare una matrice di puntatori al tipo valore|
|[Errore del compilatore C3160](compiler-error-c3160.md)|'*Type*': un membro dati di una classe gestita/WinRT non può avere questo tipo|
|[Errore del compilatore C3161](compiler-error-c3161.md)|'*Interface*': la classe annidata, lo struct o l'interfaccia in un'interfaccia non è valida; l'interfaccia di annidamento in una classe o in uno struct non è valida|
|[Errore del compilatore C3162](compiler-error-c3162.md)|'*Type*': un tipo di riferimento con un distruttore non può essere utilizzato come tipo di membro dati statico '*member*'|
|[Errore del compilatore C3163](compiler-error-c3163.md)|'*Class*': attributi non coerenti con la dichiarazione precedente|
|Errore del compilatore C3164|Obsoleta.|
|Errore del compilatore C3165|'*value*': Impossibile convertire in un valore integrale o a virgola mobile|
|[Errore del compilatore C3166](compiler-error-c3166.md)|Obsoleta. '*Type*': un membro dati di una classe gestita/WinRT non può avere il tipo '*pointer_type* all'interno di *managed_pointer_type*'|
|[Errore del compilatore C3167](compiler-error-c3167.md)|Impossibile inizializzare .NET Framework: assicurarsi che sia installato|
|[Errore del compilatore C3168](compiler-error-c3168.md)|'*Type*': tipo sottostante non valido per enum|
|Errore del compilatore C3169|'*Type*': non è possibile dedurre il tipo per ' auto ' da'*Type*'|
|[Errore del compilatore C3170](compiler-error-c3170.md)|non è possibile avere identificatori di moduli diversi in un progetto|
|[Errore del compilatore C3171](compiler-error-c3171.md)|'*Module*': Impossibile specificare attributi di modulo diversi in un progetto|
|[Errore del compilatore C3172](compiler-error-c3172.md)|'*Identifier*': Impossibile specificare attributi di idl_module diversi in un progetto|
|[Errore del compilatore C3173](compiler-error-c3173.md)|versione non corrispondente nell'Unione IDL|
|[Errore del compilatore C3174](compiler-error-c3174.md)|attributo modulo non specificato|
|[Errore del compilatore C3175](compiler-error-c3175.md)|'*Function*': Impossibile chiamare un metodo di un tipo gestito dalla funzione non gestità *Function*'|
|[Errore del compilatore C3176](compiler-error-c3176.md)|'*Type*': non è possibile dichiarare il tipo di valore locale|
|Errore del compilatore C3177|non è possibile avere una funzione di conversione in un tipo che contiene '*Type*'|
|Errore del compilatore C3178|'*Type*': Impossibile utilizzare ParamArray in una funzione con argomenti predefiniti|
|[Errore del compilatore C3179](compiler-error-c3179.md)|tipo gestito/WinRT senza nome non consentito|
|[Errore del compilatore C3180](compiler-error-c3180.md)|'*Type*': il nome supera il limite di '*Number*' caratteri per i metadati|
|[Errore del compilatore C3181](compiler-error-c3181.md)|'*Type*': operando non valido per l' *operatore*|
|[Errore del compilatore C3182](compiler-error-c3182.md)|'*Type*': la dichiarazione using o la dichiarazione di accesso di un membro non è valida all'interno di un tipo gestito/WinRT|
|[Errore del compilatore C3183](compiler-error-c3183.md)|Impossibile definire una classe, uno struct o un'Unione senza nome all'interno del tipo gestito/WinRT '*Class*'|
|Errore del compilatore C3184|Obsoleta.|
|[Errore del compilatore C3185](compiler-error-c3185.md)|' TypeId ': utilizzato nel tipo gestito/WinRT '*Type*'. utilizzare '*operator*'|
|Errore del compilatore C3186|Obsoleta.|
|[Errore del compilatore C3187](compiler-error-c3187.md)|'*Identifier*': è disponibile solo nel corpo di una funzione|
|Errore del compilatore C3188|Obsoleta.|
|[Errore del compilatore C3189](compiler-error-c3189.md)|' TypeId<*dichiaratore*>': questa sintassi non è più supportata. usare:: typeid|
|[Errore del compilatore C3190](compiler-error-c3190.md)|'*dichiaratore*' con gli argomenti di modello forniti non è la creazione di un'istanza esplicita di alcuna funzione membro di '*Type*'|
|Errore del compilatore C3191|Obsoleta.|
|[Errore del compilatore C3192](compiler-error-c3192.md)|errore di sintassi:' ^' non è un operatore di prefisso (si intendeva ' *'?)|
|Errore del compilatore C3193|'*construct*': richiede l'opzione della riga di comando '/CLR ' o '/ZW '|
|[Errore del compilatore C3194](compiler-error-c3194.md)|'*Type*': un tipo di valore non può avere un operatore di assegnazione|
|[Errore del compilatore C3195](compiler-error-c3195.md)|'*keyword*': è riservato e non può essere usato come membro di una classe di riferimento o di un tipo di valore. Gli operatori CLR/WinRT devono essere definiti utilizzando la parola chiave ' operator '|
|[Errore del compilatore C3196](compiler-error-c3196.md)|'*Identifier*': utilizzato più di una volta|
|[Errore del compilatore C3197](compiler-error-c3197.md)|'*keyword*': può essere usato solo nelle definizioni|
|[Errore del compilatore C3198](compiler-error-c3198.md)|uso non valido di pragma a virgola mobile: fenv_access pragma funziona solo in modalità precisa|
|[Errore del compilatore C3199](compiler-error-c3199.md)|uso non valido di pragma a virgola mobile: le eccezioni non sono supportate in modalità non precisa|

## <a name="see-also"></a>Vedi anche

[Errori e avvisi degli strumenti di compilazione e compilatore C/C++](../compiler-errors-1/c-cpp-build-errors.md) \
[Errori del compilatore da C2000 a C3999](../compiler-errors-1/compiler-errors-c2000-c3999.md)
