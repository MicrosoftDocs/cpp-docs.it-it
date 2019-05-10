---
title: Errori del compilatore da C3400 a C3499
ms.date: 04/21/2019
f1_keywords:
- C3401
- C3402
- C3403
- C3404
- C3405
- C3406
- C3407
- C3410
- C3411
- C3416
- C3419
- C3422
- C3424
- C3425
- C3426
- C3427
- C3428
- C3429
- C3430
- C3431
- C3432
- C3433
- C3434
- C3435
- C3436
- C3437
- C3438
- C3439
- C3440
- C3441
- C3442
- C3443
- C3444
- C3445
- C3446
- C3471
- C3472
- C3473
- C3474
- C3475
- C3476
- C3477
- C3478
- C3479
- C3486
- C3494
- C3497
helpviewer_keywords:
- C3401
- C3402
- C3403
- C3404
- C3405
- C3406
- C3407
- C3410
- C3411
- C3416
- C3419
- C3422
- C3424
- C3425
- C3426
- C3427
- C3428
- C3429
- C3430
- C3431
- C3432
- C3433
- C3434
- C3435
- C3436
- C3437
- C3438
- C3439
- C3440
- C3441
- C3442
- C3443
- C3444
- C3445
- C3446
- C3471
- C3472
- C3473
- C3474
- C3475
- C3476
- C3477
- C3478
- C3479
- C3486
- C3494
- C3497
ms.assetid: a5651dfb-c402-4e01-b3ae-28f371e51d6a
ms.openlocfilehash: 587b28cedb0ab8b11c244be4278c7dc17d1f4247
ms.sourcegitcommit: 283cb64fd7958a6b7fbf0cd8534de99ac8d408eb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2019
ms.locfileid: "64857382"
---
# <a name="compiler-errors-c3400-through-c3499"></a>Errori del compilatore da C3400 a C3499

Gli articoli in questa sezione della documentazione illustrano un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Error|Messaggio|
|-----------|-------------|
|[Errore del compilatore C3400](compiler-error-c3400.md)|dipendenza di vincolo circolare con '*constraint1*'e'*constraint2*'|
|Errore del compilatore C3401|«*identificatore*': identificatore di accesso assembly non valido - solo 'privata' è consentito nei modelli di classe|
|Errore del compilatore C3402|«*funzione*': non è possibile risolvere l'overload tranne che nell'ambito corrente|
|Errore del compilatore C3403|non è possibile usare thread_local con /clr: pure o /CLR: safe|
|Errore del compilatore C3404|«*costruire*': errore di sintassi imprevisto|
|Errore del compilatore C3405|«*funzione*': Impossibile risolvere l'overload senza un descrittore completo|
|Errore del compilatore C3406|«*parola chiave*': non è possibile usare in un identificatore di tipo elaborato|
|Errore del compilatore C3407|«*tipo*' non può essere utilizzato in questo contesto|
|[Errore del compilatore C3408](compiler-error-c3408.md)|«*attributo*': attributo non è consentito nelle definizioni di modello|
|[Errore del compilatore C3409](compiler-error-c3409.md)|blocco attributi vuoto non consentito|
|Errore del compilatore C3410|«*identifier*': il tipo di istanza esplicita '*tipo*'non corrisponde al tipo del modello di variabile'*tipo*»|
|Errore del compilatore C3411|«*tipo*' non è valido come dimensioni di matrice perché non è un tipo integer|
|[Errore del compilatore C3412](compiler-error-c3412.md)|«*specializzazione*': Impossibile specializzare il modello nell'ambito corrente|
|[Errore del compilatore C3413](compiler-error-c3413.md)|«*modello*': creazione esplicita di istanza non valido|
|[Errore del compilatore C3414](compiler-error-c3414.md)|«*funzione*': non è possibile definire la funzione membro importata|
|[Errore del compilatore C3415](compiler-error-c3415.md)|più»*sezione*' sezioni con attributi differenti ('0 x*valore*')|
|Errore del compilatore C3416|Obsoleta.|
|[Errore del compilatore C3417](compiler-error-c3417.md)|«*dichiaratore*': i tipi di valore non possono contenere funzioni membro speciali definite dall'utente|
|[Errore del compilatore C3418](compiler-error-c3418.md)|Identificatore di accesso '*identificatore*' non è supportato|
|Errore del compilatore C3419|Obsoleta.|
|[Errore del compilatore C3420](compiler-error-c3420.md)|«*funzione*': un finalizzatore non può essere virtuale|
|[Errore del compilatore C3421](compiler-error-c3421.md)|'*funzione*': non è possibile chiamare il finalizzatore per questa classe in quanto inaccessibile o inesistente|
|Errore del compilatore C3422|«*dichiarazione*': tipi non corrispondenti*tipo*"e"*tipo*»|
|Errore del compilatore C3423|Obsoleta.|
|Errore del compilatore C3424|«*tipo*': non è consentito un cast di tipo funzione a un tipo di matrice|
|Errore del compilatore C3425|non è possibile generare il puntatore all'oggetto di tipo incompleto '*tipo*'|
|Errore del compilatore C3426|non è possibile generare l'oggetto di tipo incompleto '*tipo*'|
|Errore del compilatore C3427|«*contesto*': '*parola chiave*' non può essere usato con layout_version (*numero*)|
|Errore del compilatore C3428|«*contesto*': '*parola chiave*' può essere applicato solo a definizioni o dichiarazioni di classe|
|Errore del compilatore C3429|«*contesto*': '*parola chiave*' non può essere applicato a un'unione|
|Errore del compilatore C3430|un'enumerazione con ambito deve avere un nome|
|Errore del compilatore C3431|«*identifier*': *type1* non può essere dichiarata come *type2*|
|Errore del compilatore C3432|«*identificatore*': una dichiarazione con prototipo di un'enumerazione senza ambita deve presentare un tipo sottostante|
|Errore del compilatore C3433|«*identifier*': tutte le dichiarazioni di enumerazione deve avere lo stesso tipo sottostante, è stato '*type1*"adesso"*type2*»|
|Errore del compilatore C3434|«*contesto*': valore dell'enumeratore '*numero*'non può essere rappresentato come'*tipo*', il valore è'*numero*»|
|Errore del compilatore C3435|set di caratteri '*nome*' non è supportato|
|Errore del compilatore C3436|#pragma setlocale non è supportata quando è stato specificato /source-charset, /execution-charset o /utf-8|
|Errore del compilatore C3437|#pragma execution_character_set non è supportata quando è stato specificato /source-charset, /execution-charset o /utf-8|
|Errore del compilatore C3438|«*contesto*': '*valore*' non può essere applicato a una classe gestita o WinRT|
|Errore del compilatore C3439|layout_version (*numero*): numero di versione non valido|
|Errore del compilatore C3440|«*dichiarazione*': layout_version (*numero*) compatibile con una dichiarazione precedente|
|Errore del compilatore C3441|«*dichiarazione*': '*parola chiave*' non può essere applicato dopo che è stata definita la classe|
|Errore del compilatore C3442|Inizializzazione di più membri dell'unione: '*membro1*'e'*membro2*'|
|Errore del compilatore C3443|L'inizializzatore di membro predefinito per '*classe*' è ricorsivo|
|Errore del compilatore C3444|Classe aggregata vuota*classe*'deve essere inizializzata con'{}'|
|[Errore del compilatore C3445](compiler-error-c3445.md)|Copia-list-initialization di '*tipo*' non è possibile usare un costruttore esplicito|
|[Errore del compilatore C3446](compiler-error-c3446.md)|«*classe*': un inizializzatore di membro predefinito non è consentito per un membro di una classe di valori|
|Errore del compilatore C3447|Obsoleta.|
|Errore del compilatore C3448|Obsoleta.|
|Errore del compilatore C3449|Obsoleta.|
|[Errore del compilatore C3450](compiler-error-c3450.md)|«*tipo*': non è un attributo; Impossibile specificare [System:: AttributeUsageAttribute] / [Windows::Foundation::Metadata::AttributeUsageAttribute]|
|[Errore del compilatore C3451](compiler-error-c3451.md)|«*attributo*': non è possibile applicare l'attributo non gestito a '*tipo*»|
|[Errore del compilatore C3452](compiler-error-c3452.md)|membro argomento di elenco non costante|
|[Errore del compilatore C3453](compiler-error-c3453.md)|'*attributo*': attributo non applicato per il qualificatore '*qualificatore*' non corrisponde|
|[Errore del compilatore C3454](compiler-error-c3454.md)|[attribute] non consentito in una dichiarazione di classe|
|[Errore del compilatore C3455](compiler-error-c3455.md)|«*attributo*': nessuno dei costruttori di attributo corrispondente agli argomenti|
|[Errore del compilatore C3456](compiler-error-c3456.md)|[origine\_annotation_attribute] non consentito nella dichiarazione di classe gestita o WinRT|
|[Errore del compilatore C3457](compiler-error-c3457.md)|«*attributo*': attributo non supporta argomenti non denominati|
|[Errore del compilatore C3458](compiler-error-c3458.md)|' [*attributo*]': attributo ' [*attributo*]' già specificato per '*identificatore*'|
|[Errore del compilatore C3459](compiler-error-c3459.md)|' [*attributo*]': attributo consentito solo su indicizzatore di classe (proprietà indicizzata predefinita)|
|[Errore del compilatore C3460](compiler-error-c3460.md)|«*tipo*': è possibile inoltrare solo un tipo definito dall'utente|
|[Errore del compilatore C3461](compiler-error-c3461.md)|«*tipo*': è possibile inoltrare solo un tipo gestito o WinRT|
|[Errore del compilatore C3462](compiler-error-c3462.md)|«*tipo*': è possibile inoltrare solo un tipo importato|
|[Errore del compilatore C3463](compiler-error-c3463.md)|«*tipo*': tipo non consentito nell'attributo 'implements'|
|[Errore del compilatore C3464](compiler-error-c3464.md)|«*tipo*' non può essere inoltrato un tipo annidato|
|[Errore del compilatore C3465](compiler-error-c3465.md)|usare tipo '*tipo*'è necessario fare riferimento all'assembly'*assembly*'|
|[Errore del compilatore C3466](compiler-error-c3466.md)|«*tipo*': Impossibile inoltrare una specializzazione di una classe generica|
|[Errore del compilatore C3467](compiler-error-c3467.md)|«*tipo*': questo tipo già inoltrato|
|[Errore del compilatore C3468](compiler-error-c3468.md)|«*tipo*': è possibile inoltrare solo un tipo a un assembly: '*identificatore*' non è un assembly|
|[Errore del compilatore C3469](compiler-error-c3469.md)|«*tipo*': Impossibile inoltrare una classe generica|
|[Errore del compilatore C3470](compiler-error-c3470.md)|«*classe*': una classe non può avere sia un indicizzatore (proprietà indicizzata predefinita) e un operatore]|
|Errore del compilatore C3471|nuovo nome del modulo *name* (set nella riga di comando) è in conflitto con quello precedente *nome*|
|Errore del compilatore C3472|nuovo nome di file di output *nomefile* (set nella riga di comando) è in conflitto con il nome file precedente *nomefile*|
|Errore del compilatore C3473|Nessun output percorso o modulo nome specificato.|
|Errore del compilatore C3474|Impossibile aprire il file di output '*filename*'|
|Errore del compilatore C3475|Errore di sintassi nel file di input '*filename*'|
|Errore del compilatore C3476|Impossibile aprire il file '*filename*' per l'input|
|Errore del compilatore C3477|un'espressione lambda non può trovarsi in un contesto non valutato|
|Errore del compilatore C3478|«*identificatore*': una matrice non può essere acquisita per copia|
|Errore del compilatore C3479|Le annotazioni SAL su espressioni lambda non sono supportate|
|[Errore del compilatore C3480](compiler-error-c3480.md)|«*variabile*': deve essere una variabile di acquisizione lambda in un ambito contenitore (funzione)|
|[Errore del compilatore C3481](compiler-error-c3481.md)|«*identificatore*': variabile di acquisizione lambda non trovata|
|[Errore del compilatore C3482](compiler-error-c3482.md)|è possibile utilizzare 'this' come acquisizione di espressioni lambda solo all'interno di una funzione membro non statica|
|[Errore del compilatore C3483](compiler-error-c3483.md)|«*identificatore*' fa già parte dell'elenco di acquisizione lambda|
|[Errore del compilatore C3484](compiler-error-c3484.md)|Errore di sintassi: previsto '->' prima del tipo restituito|
|[Errore del compilatore C3485](compiler-error-c3485.md)|una definizione di espressione lambda non può contenere qualificatori di tipo const o volatile|
|Errore del compilatore C3486|Obsoleta.|
|[Errore del compilatore C3487](compiler-error-c3487.md)|«*tipo*': tutte restituire espressioni devono essere dedotte dallo stesso tipo: in precedenza era '*tipo*»|
|[Errore del compilatore C3488](compiler-error-c3488.md)|' &*identificatore*' non è consentita quando la modalità di acquisizione predefinita è per riferimento|
|[Errore del compilatore C3489](compiler-error-c3489.md)|' &*identificatore*' è obbligatorio quando la modalità di acquisizione predefinita è per copia|
|[Errore del compilatore C3490](compiler-error-c3490.md)|«*identificatore*' non può essere modificato perché si accede tramite un oggetto const|
|[Errore del compilatore C3491](compiler-error-c3491.md)|«*identificatore*': una da copia acquisizione non può essere modificata in un'espressione lambda non modificabile|
|[Errore del compilatore C3492](compiler-error-c3492.md)|«*identificatore*': non è possibile acquisire un membro di un'unione anonima|
|[Errore del compilatore C3493](compiler-error-c3493.md)|«*identificatore*' non è possibile acquisire in modo implicito perché non è stata specificata alcuna modalità di acquisizione predefinita|
|Errore del compilatore C3494|'this' non è possibile acquisire in modo esplicito perché una modalità di acquisizione di inclusione non lo consente|
|[Errore del compilatore C3495](compiler-error-c3495.md)|«*identificatore*': identificatore nell'acquisizione deve essere una variabile con durata di archiviazione automatica dichiarata nell'ambito di portata dell'espressione lambda|
|[Errore del compilatore C3496](compiler-error-c3496.md)|'this' viene sempre acquisito per valore. '&' verrà ignorato|
|Errore del compilatore C3497|Impossibile costruire un'istanza di un'espressione lambda|
|[Errore del compilatore C3498](compiler-error-c3498.md)|«*identificatore*': non è possibile acquisire una variabile con un tipo gestito o WinRT|
|[Errore del compilatore C3499](compiler-error-c3499.md)|un'espressione lambda specificata in modo che il tipo restituito sia void non può restituire un valore|

## <a name="see-also"></a>Vedere anche

[C /C++ del compilatore e compilazione di errori e avvisi degli strumenti](../compiler-errors-1/c-cpp-build-errors.md) \
[Errori del compilatore da C2000 - C3999](../compiler-errors-1/compiler-errors-c2000-c3999.md)
