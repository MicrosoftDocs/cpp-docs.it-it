---
title: Del compilatore C3200 errori tramite C3299 | Documenti Microsoft
ms.custom: ''
ms.date: 11/17/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3220
- C3221
- C3245
- C3249
- C3250
- C3256
- C3257
- C3258
- C3259
- C3260
- C3261
- C3263
- C3267
- C3281
- C3294
helpviewer_keywords:
- C3220
- C3221
- C3245
- C3249
- C3250
- C3256
- C3257
- C3258
- C3259
- C3260
- C3261
- C3263
- C3267
- C3281
- C3294
dev_langs:
- C++
ms.assetid: 6b3104f6-63bc-4823-b6f3-b8a16be4b87f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 831f51981ff72a67a55698693514dce0a3d87535
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33283819"
---
# <a name="compiler-errors-c3200-through-c3299"></a>Del compilatore C3200 errori tramite C3299

Gli articoli in questa sezione della documentazione illustrano un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Error|Messaggio|
|-----------|-------------|
|[Errore del compilatore C3200](compiler-error-c3200.md)|'*tipo*': argomento non valido per il parametro di modello '*parametro*', previsto un modello di classe|
|[Errore del compilatore C3201](compiler-error-c3201.md)|l'elenco di parametri di modello per il modello di classe '*modello*'non corrisponde all'elenco dei parametri per il parametro di modello'*parametro*'|
|[Errore del compilatore C3202](compiler-error-c3202.md)|'*identificatore*': valore predefinito non valido previsto di argomenti, un modello di classe|
|[Errore del compilatore C3203](compiler-error-c3203.md)|'*identificatore*': Impossibile utilizzare modello o generico di classe non specializzato come argomento di modello o generico per il parametro di modello o generico '*parametro*', previsto un tipo reale|
|[Errore del compilatore C3204](compiler-error-c3204.md)|'*funzione*' non può essere chiamato dall'interno di un blocco catch|
|[Errore del compilatore C3205](compiler-error-c3205.md)|elenco di argomenti per il parametro di modello '*identificatore*' mancante|
|[Errore del compilatore C3206](compiler-error-c3206.md)|'*funzione*': argomento di modello/generici non valido per '*modello*', elenco di argomenti di modello o generico mancante nel modello di classe o generico '*tipo*'|
|[Errore del compilatore C3207](compiler-error-c3207.md)|'*funzione*': argomento di modello non valido per '*parametro*', previsto modello di classe|
|[Errore del compilatore C3208](compiler-error-c3208.md)|'*funzione*': elenco di parametri di modello per il modello di classe '*modello*'non corrisponde all'elenco dei parametri per il parametro di modello'*parametro*'|
|[Errore del compilatore C3209](compiler-error-c3209.md)|'*tipo*': classe generica deve essere una classe gestita o WinRT|
|[Errore del compilatore C3210](compiler-error-c3210.md)|'*identificatore*': dichiarazione di accesso può essere applicata solo a un membro di classe di base|
|[Errore del compilatore C3211](compiler-error-c3211.md)|'*funzione*': la specializzazione esplicita utilizza una sintassi di specializzazione parziale, utilizzare invece <> modello|
|[Errore del compilatore C3212](compiler-error-c3212.md)|'*funzione*': una specializzazione esplicita di un membro di modello deve essere un membro di una specializzazione esplicita|
|[Errore del compilatore C3213](compiler-error-c3213.md)|classe di base*classe*'è meno accessibile di'*derived_class*'|
|[Errore del compilatore C3214](compiler-error-c3214.md)|'*argomento*': argomento di tipo non valido per il parametro generico '*parametro*'del generico'*tipo*', non soddisfa i vincoli '*vincolo*'|
|[Errore del compilatore C3215](compiler-error-c3215.md)|'*constraint1*': parametro di tipo generico già vincolato da '*vincolo2*'|
|[Errore del compilatore C3216](compiler-error-c3216.md)|vincolo deve essere un parametro generico, non '*tipo*'|
|[Errore del compilatore C3217](compiler-error-c3217.md)|'*parametro*': parametro generico non può essere vincolato in questa dichiarazione|
|[Errore del compilatore C3218](compiler-error-c3218.md)|'*tipo*': tipo non consentito come vincolo|
|[Errore del compilatore C3219](compiler-error-c3219.md)|'*parametro*': parametro generico non può essere vincolato da non interfacce multiple: '*tipo*'|
|C3220 errore del compilatore|'*interfaccia*': interfaccia non può avere un progid|
|C3221 errore del compilatore|'*membro*': più 'default' e 'casi' attributi in un membro non consentiti|
|[Errore del compilatore C3222](compiler-error-c3222.md)|'*funzione*': Impossibile dichiarare argomenti predefiniti per il membro di un tipo gestito o WinRT o funzioni generiche|
|[Errore del compilatore C3223](compiler-error-c3223.md)|'*proprietà*': Impossibile applicare 'typeid' a una proprietà|
|[Errore del compilatore C3224](compiler-error-c3224.md)|'*tipo*': accetta nessuna classe generica in overload*numero*' argomenti di tipo generico|
|[Errore del compilatore C3225](compiler-error-c3225.md)|argomento di tipo generico per '*argomento*'non può essere'*tipo*', deve essere un tipo di valore o un handle a un tipo riferimento|
|[Errore del compilatore C3226](compiler-error-c3226.md)|Dichiarazione di modello non consentita all'interno di una dichiarazione generica|
|[Errore del compilatore C3227](compiler-error-c3227.md)|'*tipo*': Impossibile utilizzare '*operatore*' per allocare un tipo generico|
|[Errore del compilatore C3228](compiler-error-c3228.md)|'*funzione*': argomento di tipo generico per '*argomento*'non può essere'*tipo*', deve essere un tipo di valore o tipo di handle|
|[Errore del compilatore C3229](compiler-error-c3229.md)|'*tipo*': non sono consentiti riferimenti indiretti in un parametro di tipo generico|
|[Errore del compilatore C3230](compiler-error-c3230.md)|'*funzione*': argomento tipo modello per '*argomento*' non può contenere un parametro di tipo generico: '*tipo*'|
|[Errore del compilatore C3231](compiler-error-c3231.md)|'*tipo*': argomento di tipo modello non è possibile utilizzare un parametro di tipo generico|
|[Errore del compilatore C3232](compiler-error-c3232.md)|'*parametro*': un parametro di tipo generico non può essere utilizzato in un nome completo|
|[Errore del compilatore C3233](compiler-error-c3233.md)|'*tipo*': parametro di tipo generico già vincolato|
|[Errore del compilatore C3234](compiler-error-c3234.md)|una classe generica non può derivare da un parametro di tipo generico|
|[Errore del compilatore C3235](compiler-error-c3235.md)|'*specializzazione*': la specializzazione esplicita o parziale di una classe generica non è consentita.|
|[Errore del compilatore C3236](compiler-error-c3236.md)|creazione di istanza esplicita di un elemento CLR generico non consentita|
|[Errore del compilatore C3237](compiler-error-c3237.md)|'*classe*': una classe generica non può essere un attributo personalizzato|
|[Errore del compilatore C3238](compiler-error-c3238.md)|'*tipo*': un tipo con questo nome già inoltrato all'assembly '*assembly*'|
|[Errore del compilatore C3239](compiler-error-c3239.md)|'*tipo*': puntatore a puntatore interno/di blocco non consentito da common language runtime|
|[Errore del compilatore C3240](compiler-error-c3240.md)|'*identificatore*': deve essere una funzione membro astratta non in overload di '*tipo*'|
|[Errore del compilatore C3241](compiler-error-c3241.md)|'*membro*': questo metodo non è stato introdotto da '*interfaccia*'|
|[Errore del compilatore C3242](compiler-error-c3242.md)|'*funzione*': è possibile ignorare in modo esplicito solo le funzioni virtuali|
|[Errore del compilatore C3243](compiler-error-c3243.md)|Nessuna delle funzioni in overload è introdotta da '*interfaccia*'|
|[Errore del compilatore C3244](compiler-error-c3244.md)|'*membro*': questo metodo è stato introdotto da '*interface1*'non da'*interface2*'|
|C3245 errore del compilatore|'*funzione*': utilizzo di un modello di variabile richiede l'elenco di argomenti di modello|
|[Errore del compilatore C3246](compiler-error-c3246.md)|'*classe*': non può ereditare da '*base_class*"così com'è stato dichiarato come'*ereditarietà*'|
|[Errore del compilatore C3247](compiler-error-c3247.md)|'*coclasse*': una coclasse non può ereditare da un'altra coclasse*base_class*'|
|[Errore del compilatore C3248](compiler-error-c3248.md)|Obsoleta. '*funzione*': funzione dichiarata come 'sealed' non può essere sottoposto a override da '*funzione*'|
|C3249 errore del compilatore|istruzione non valida o l'espressione secondaria per la funzione 'constexpr'|
|C3250 errore del compilatore|'*dichiarazione*': dichiarazione non è consentita nel corpo della funzione 'constexpr'|
|[Errore del compilatore C3251](compiler-error-c3251.md)|impossibile chiamare un metodo di una classe base su un'istanza di tipo valore|
|[Errore del compilatore C3252](compiler-error-c3252.md)|'*funzione*': non è possibile ridurre l'accessibilità di un metodo virtuale in un tipo gestito o WinRT|
|[Errore del compilatore C3253](compiler-error-c3253.md)|'*funzione*': errore dell'override esplicito|
|[Errore del compilatore C3254](compiler-error-c3254.md)|'*funzione*': classe contiene un override esplicito '*funzione*', ma non deriva da un'interfaccia che contiene la dichiarazione di funzione|
|[Errore del compilatore C3255](compiler-error-c3255.md)|'*tipo*': Impossibile allocare dinamicamente l'oggetto tipo di valore nell'heap nativo|
|C3256 errore del compilatore|'*funzione*': utilizzo di una variabile non produce un'espressione costante|
|Errore del compilatore C3257|Obsoleta.|
|Errore del compilatore C3258|Obsoleta.|
|C3259 errore del compilatore|le funzioni 'constexpr' possono avere solo un'istruzione return|
|C3260 errore del compilatore|'*token*': ignorato token imprevisti prima del corpo dell'espressione lambda|
|Errore del compilatore C3261|una funzione che restituisce una matrice gestita o WinRT deve avere una parentesi di matrice alla fine della dichiarazione: '*identificatore*(...) []'|
|[Errore del compilatore C3262](compiler-error-c3262.md)|indicizzazione matrice non valida: *numero* dimensioni specificate per *numero*-dimensionale '*tipo*'|
|C3263 errore del compilatore|Obsoleta.|
|[Errore del compilatore C3264](compiler-error-c3264.md)|'*identificatore*': un costruttore di classe non può avere un tipo restituito|
|[Errore del compilatore C3265](compiler-error-c3265.md)|Impossibile dichiarare un '*managed_construct*'in una funzione non gestita'*unmanaged_construct*'|
|[Errore del compilatore C3266](compiler-error-c3266.md)|'*funzione*': un costruttore di classe deve avere un elenco di parametri 'void'|
|Errore del compilatore C3267|Obsoleta.|
|[Errore del compilatore C3268](compiler-error-c3268.md)|'*funzione*': una funzione generica o una funzione membro di una classe generica non può avere un elenco di parametri variabile|
|[Errore del compilatore C3269](compiler-error-c3269.md)|'*funzione*': una funzione membro di un tipo gestito o WinRT non può essere dichiarata con '...'|
|[Errore del compilatore C3270](compiler-error-c3270.md)|'*campo*': l'attributo FieldOffset può essere utilizzato solo nel contesto di StructLayout(LayoutKind::Explicit)|
|[Errore del compilatore C3271](compiler-error-c3271.md)|'*campo*': valore non valido '*numero*' per l'attributo FieldOffset|
|[Errore del compilatore C3272](compiler-error-c3272.md)|'*simbolo*': il simbolo richiede FieldOffset, poiché è un membro di struct o classe *type_name* definito con StructLayout(LayoutKind::Explicit)|
|[Errore del compilatore C3273](compiler-error-c3273.md)|'*parola chiave*': non consentito in un blocco try C++|
|[Errore del compilatore C3274](compiler-error-c3274.md)|infine /&#95;&#95;senza corrispondenza infine provare|
|[Errore del compilatore C3275](compiler-error-c3275.md)|'*identificatore*': non è possibile utilizzare questo simbolo senza qualificatore|
|[Errore del compilatore C3276](compiler-error-c3276.md)|'*parola chiave*': uscire da infine /&#95;&#95;infine blocco produce un comportamento indefinito durante la gestione delle terminazioni|
|[Errore del compilatore C3277](compiler-error-c3277.md)|non è possibile definire un enum non gestito '*enumerazione*'interno gestito'*tipo*'|
|[Errore del compilatore C3278](compiler-error-c3278.md)|chiamata dell'interfaccia o metodo puro diretta '*funzione*' avrà esito negativo in fase di esecuzione|
|[Errore del compilatore C3279](compiler-error-c3279.md)|le specializzazioni parziali ed esplicite e le creazioni di istanze esplicite di modelli di classe dichiarati nello spazio dei nomi cli non sono consentite|
|[Errore del compilatore C3280](compiler-error-c3280.md)|'*funzione*': una funzione membro di un tipo gestito non può essere compilata come una funzione non gestita|
|Errore del compilatore C3281|'*funzione*': operatore globale non può avere il tipo gestito o WinRT '*tipo*' nella firma|
|[Errore del compilatore C3282](compiler-error-c3282.md)|elenchi di parametri generici possono apparire solo in funzioni, struct o classi gestite o WinRT|
|[Errore del compilatore C3283](compiler-error-c3283.md)|'*interfaccia*': un'interfaccia non può avere un costruttore di istanza|
|[Errore del compilatore C3284](compiler-error-c3284.md)|i vincoli per il parametro generico '*parametro*'della funzione'*dichiaratore*'deve corrispondere ai vincoli per il parametro generico'*parametro*'della funzione'*dichiaratore*'|
|[Errore del compilatore C3285](compiler-error-c3285.md)|per ogni istruzione non può funzionare con variabili di tipo '*tipo*'|
|[Errore del compilatore C3286](compiler-error-c3286.md)|'*identificatore*': una variabile di iterazione non può avere identificatori di classe di archiviazione|
|[Errore del compilatore C3287](compiler-error-c3287.md)|il tipo '*tipo*' (tipo restituito di GetEnumerator) deve avere una funzione membro MoveNext pubblica adatta e una proprietà Current pubblica|
|[Errore del compilatore C3288](compiler-error-c3288.md)|'*tipo*': risoluzione di riferimento non valida di un tipo di handle|
|[Errore del compilatore C3289](compiler-error-c3289.md)|'*identificatore*': una proprietà trivial non può essere indicizzata.|
|[Errore del compilatore C3290](compiler-error-c3290.md)|'*tipo*': una proprietà trivial non può avere il tipo di riferimento|
|[Errore del compilatore C3291](compiler-error-c3291.md)|'default': non può essere il nome di una proprietà semplice|
|[Errore del compilatore C3292](compiler-error-c3292.md)|impossibile riaprire lo spazio dei nomi cli|
|[Errore del compilatore C3293](compiler-error-c3293.md)|'*identificatore*': usare 'default' per accedere alla proprietà predefinita (indicizzatore) per la classe*classe*'|
|Errore del compilatore C3294|Obsoleta.|
|[Errore del compilatore C3295](compiler-error-c3295.md)|' #pragma *identificatore*' può essere utilizzato solo globale o l'ambito dello spazio dei nomi|
|[Errore del compilatore C3296](compiler-error-c3296.md)|'*identificatore*': una proprietà con questo nome esiste già|
|[Errore del compilatore C3297](compiler-error-c3297.md)|' *vincolo2*': non è possibile utilizzare ' *constraint1*' come vincolo poiché ' *constraint1*' contiene il vincolo value|
|[Errore del compilatore C3298](compiler-error-c3298.md)|' *constraint1*': Impossibile utilizzare ' *vincolo2*' come vincolo poiché ' *vincolo2*' contiene il vincolo ref e ' *constraint1*' contiene il vincolo value|
|[Errore del compilatore C3299](compiler-error-c3299.md)|' *funzione*': Impossibile specificare vincoli poiché vengono ereditati dal metodo base|
