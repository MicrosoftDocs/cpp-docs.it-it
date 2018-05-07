---
title: C3300 errori del compilatore tramite C3399 | Documenti Microsoft
ms.custom: ''
ms.date: 11/17/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3300
- C3301
- C3302
- C3304
- C3305
- C3306
- C3307
- C3308
- C3310
- C3311
- C3312
- C3313
- C3314
- C3315
- C3316
- C3317
- C3318
- C3319
- C3321
- C3323
- C3324
- C3325
- C3326
- C3327
- C3328
- C3329
- C3330
- C3331
- C3332
- C3335
- C3336
- C3337
- C3338
- C3339
- C3341
- C3343
- C3344
- C3346
- C3348
- C3349
- C3355
- C3357
- C3359
- C3361
- C3362
- C3376
- C3377
- C3378
helpviewer_keywords:
- C3300
- C3301
- C3302
- C3304
- C3305
- C3306
- C3307
- C3308
- C3310
- C3311
- C3312
- C3313
- C3314
- C3315
- C3316
- C3317
- C3318
- C3319
- C3321
- C3323
- C3324
- C3325
- C3326
- C3327
- C3328
- C3329
- C3330
- C3331
- C3332
- C3335
- C3336
- C3337
- C3338
- C3339
- C3341
- C3343
- C3344
- C3346
- C3348
- C3349
- C3355
- C3357
- C3359
- C3361
- C3362
- C3376
- C3377
- C3378
dev_langs:
- C++
ms.assetid: 190b7d29-ffe6-4261-921d-140da1935d00
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4c5976e57e0a3b7f51c9df3fbdf3ebebb08dd1b4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-errors-c3300-through-c3399"></a>C3300 errori del compilatore tramite C3399

Gli articoli in questa sezione della documentazione illustrano un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Error|Messaggio|
|-----------|-------------|
|C3300 errore del compilatore|'*simbolo*': formato non corretto per IDL '*valore*'|
|C3301 errore del compilatore|'*coclasse*': coclasse non può essere un '*simbolo*' interfaccia|
|C3302 errore del compilatore|'*identificatore*': identificatore contiene più di *numero* caratteri|
|[Errore del compilatore C3303](compiler-error-c3303.md)|'*attributo*': attributo utilizzabile solo con '*tipo*'|
|Errore del compilatore C3304|Obsoleta.|
|Errore del compilatore C3305|Obsoleta.|
|C3306 errore del compilatore|'*modello*': classe senza nome modello o generico non è consentito.|
|C3307 errore del compilatore|'*modulo*': Impossibile creare il modulo IDL|
|C3308 errore del compilatore|' *funzione*': indirizzare chiamata tramite la classe importata non è supportata|
|[Errore del compilatore C3309](compiler-error-c3309.md)|'*macro*/*parola chiave*': nome del modulo non può essere una macro o una parola chiave|
|C3310 errore del compilatore|'*identificatore*': conflitto di nomi di modulo|
|C3311 errore del compilatore|attributo module deve essere definito in ambito globale|
|C3312 errore del compilatore|non richiamabile '*identificatore*'funzione trovato per il tipo'*tipo*'|
|C3313 errore del compilatore|'*identificatore*': variabile non può avere il tipo '*tipo*'|
|C3314 errore del compilatore|'*simbolo*': tipo non supportato IDL modulo|
|C3315 errore del compilatore|' *funzione*': deve essere una funzione membro|
|C3316 errore del compilatore|'*tipo*': una matrice di dimensioni sconosciute non può essere utilizzata in un intervallo basato su un istruzione for|
|C3317 errore del compilatore|'*identificatore*': una funzione in overload non può essere utilizzata come l'espressione in un intervallo basato su un per istruzione|
|C3318 errore del compilatore|'*tipo*': una matrice non può avere un tipo di elemento che contiene 'auto'|
|C3319 errore del compilatore|Obsoleta.|
|[Errore del compilatore C3320](compiler-error-c3320.md)|'*tipo*': tipo non può avere lo stesso nome alla proprietà 'name' del modulo|
|C3321 errore del compilatore|un elenco di inizializzatori non è previsto in questo contesto|
|[Errore del compilatore C3322](compiler-error-c3322.md)|'*proprietà*': non è una proprietà valida per l'attributo '*attributo*'|
|C3323 errore del compilatore|'alignas' e '__declspec(align)' non sono consentiti in dichiarazioni di funzione|
|C3324 errore del compilatore|'*proprietà*': proprietà presente più volte nell'attributo '*attributo*'|
|C3325 errore del compilatore|'*attributo*': attributo ha troppi argomenti|
|C3326 errore del compilatore|'*valore*': non è un valore valido per la proprietà '*proprietà*'dell'attributo'*attributo*'|
|C3327 errore del compilatore|'*proprietà*': specificare un valore per la proprietà dell'attributo '*attributo*'|
|C3328 errore del compilatore|'*attributo*': attributo non ha argomenti sufficienti|
|C3329 errore del compilatore|Errore di sintassi: previsto '*token1*'not'*token2*'|
|C3330 errore del compilatore|' *funzione*': una funzione non può restituire una matrice '*tipo*'|
|C3331 errore del compilatore|'*identificatore*': gli attributi dei parametri sono consentiti solo le interfacce COM e coclassi|
|C3332 errore del compilatore|'*proprietà*': proprietà non è coerente, di grammatica '*proprietà*' è richiesto e ha un valore predefinito|
|[Errore del compilatore C3333](compiler-error-c3333.md)|'*libreria*': Impossibile #import libreria dei tipi danneggiata|
|[Errore del compilatore C3334](compiler-error-c3334.md)|impossibile eseguire #import su una libreria dei tipi danneggiata|
|C3335 errore del compilatore|'*identificatore*': può esistere al massimo una sola interfaccia predefinita per di una coclasse*classe*'|
|C3336 errore del compilatore|Questa operazione deve essere eseguita nell'ambito di classe|
|C3337 errore del compilatore|'*identificatore*': defaultvtable deve essere un'origine evento per di una coclasse*classe*'|
|C3338 errore del compilatore|'*identificatore*': può esistere al massimo una sola interfaccia predefinita che è anche un'origine evento per di una coclasse*classe*'|
|C3339 errore del compilatore|il parametro di modello richiede 'class' o 'typename' dopo l'elenco di parametri|
|[Errore del compilatore C3340](compiler-error-c3340.md)|'*identificatore*': interfaccia non può essere sia 'restricted' che 'default' nella coclasse*classe*'|
|C3341 errore del compilatore|'*interfaccia*': un'interfaccia defaultvtable deve essere 'dual' o 'custom'|
|[Errore del compilatore C3342](compiler-error-c3342.md)|'*identificatore*': attributo ambiguo|
|C3343 errore del compilatore|'*classe*::*nome*': identificatore di attributo ha troppi caratteri|
|C3344 errore del compilatore|non è possibile definire una specializzazione esplicita né una specializzazione parziale di '*simbolo*'|
|[Errore del compilatore C3345](compiler-error-c3345.md)|'*nome*': identificatore non valido per il nome del modulo|
|C3346 errore del compilatore|dichiarazione esportata in ambito non spazio dei nomi|
|[Errore del compilatore C3347](compiler-error-c3347.md)|'*argomento*': argomento obbligatorio non specificato nell'attributo *asttribute*|
|C3348 errore del compilatore|i modelli esportati non fanno parte degli standard C++ correnti|
|C3349 errore del compilatore|'*classe*::*membro*': attributo multicast è già stata implementata dal provider *provider*|
|[Errore del compilatore C3350](compiler-error-c3350.md)|' *funzione*': un costruttore di delegato richiede *numero* argomenti|
|[Errore del compilatore C3351](compiler-error-c3351.md)|' *funzione*': se si passa un'istanza di oggetto NULL a un costruttore di delegato, è inoltre necessario passare l'indirizzo di una funzione membro statica|
|[Errore del compilatore C3352](compiler-error-c3352.md)|'*funzione*': la funzione specificata non corrisponde al tipo delegato '*tipo*'|
|[Errore del compilatore C3353](compiler-error-c3353.md)|'*identificatore*': un delegato può essere creato solo da una funzione globale o una funzione membro di un tipo gestito o WinRT|
|[Errore del compilatore C3354](compiler-error-c3354.md)|'*identificatore*': la funzione utilizzata per creare un delegato non può avere il tipo restituito '*tipo*'|
|C3355 errore del compilatore|'*classe*::*membro*': attributo multicast è in ascolto del provider '*provider1*', ma viene implementato dal provider '*provider2*'|
|[Errore del compilatore C3356](compiler-error-c3356.md)|'*identificatore*': non è possibile chiamare un attributo multicast con un nome completo|
|C3357 errore del compilatore|'*attributo*': attributo ambiguo, è necessario utilizzare il nome completo|
|[Errore del compilatore C3358](compiler-error-c3358.md)|'*simbolo*': simbolo non trovato|
|C3359 errore del compilatore|'*specializzazione*': Impossibile specializzare il modello|
|[Errore del compilatore C3360](compiler-error-c3360.md)|'*stringa*': non è possibile creare *nome*|
|C3361 errore del compilatore|Nessun contesto in cui si desidera *azione*|
|C3362 errore del compilatore|'*classe*::*membro*': attributo multicast non è stata implementata|
|[Errore del compilatore C3363](compiler-error-c3363.md)|'*identificatore*': 'typeid' può essere applicato solo a un tipo|
|[Errore del compilatore C3364](compiler-error-c3364.md)|' *funzione*': argomento non valido per il costruttore di delegato; destinazione di delegato deve essere un puntatore a una funzione membro|
|[Errore del compilatore C3365](compiler-error-c3365.md)|operatore '*operatore*': operandi differenti di tipo '*tipo*'e'*tipo*'|
|[Errore del compilatore C3366](compiler-error-c3366.md)|'*membro*': i membri dati statici dei tipi gestiti o WinRT devono essere definiti all'interno della definizione di classe|
|[Errore del compilatore C3367](compiler-error-c3367.md)|' *funzione*': non è possibile utilizzare una funzione statica per creare un delegato non associato|
|[Errore del compilatore C3368](compiler-error-c3368.md)|'*dichiaratore*': convenzione di chiamata non valida per IDL|
|[Errore del compilatore C3369](compiler-error-c3369.md)|'*modulo*': idl_module già definito|
|[Errore del compilatore C3370](compiler-error-c3370.md)|'*modulo*': idl_module non ancora definito|
|[Errore del compilatore C3371](compiler-error-c3371.md)|'idl_module': solo la proprietà 'name' è ammessa in questo contesto|
|[Errore del compilatore C3372](compiler-error-c3372.md)|è necessario specificare almeno 1 interfaccia per l'attributo '*attributo*' su una coclasse|
|[Errore del compilatore C3373](compiler-error-c3373.md)|attributo '*attributo*' non accetta argomenti tranne su una coclasse|
|[Errore del compilatore C3374](compiler-error-c3374.md)|Impossibile accettare l'indirizzo di ' *funzione*' Se non si crea l'istanza del delegato|
|[Errore del compilatore C3375](compiler-error-c3375.md)|'*funzione*': funzione di delegato ambigua|
|Errore C3376 errore del compilatore|'*modello*': sono consentiti solo i modelli di membro dati statici|
|C3377 errore del compilatore|'decltype (Auto)' non è consentita in un'espressione new|
|Errore C3378 errore del compilatore|una dichiarazione può essere esportata solo da un'unità di interfaccia del modulo|
|[Errore del compilatore C3379](compiler-error-c3379.md)|'*classe*': una classe annidata non può avere un identificatore di accesso assembly come parte della relativa dichiarazione|
|[Errore del compilatore C3380](compiler-error-c3380.md)|'*identificatore*': identificatore di accesso assembly non valido solo 'public' o 'private' sono consentite.|
|[Errore del compilatore C3381](compiler-error-c3381.md)|'*identificatore*': gli identificatori di accesso assembly sono disponibili solo in codice compilato con un'opzione /clr|
|[Errore del compilatore C3382](compiler-error-c3382.md)|'sizeof' non supportato con /clr:safe|
|[Errore del compilatore C3383](compiler-error-c3383.md)|'operator new' non supportato con /clr:safe|
|[Errore del compilatore C3384](compiler-error-c3384.md)|'*tipo*': i vincoli value e ref si escludono a vicenda|
|[Errore del compilatore C3385](compiler-error-c3385.md)|' *funzione*': una funzione che ha un attributo personalizzato DllImport non può restituire un'istanza di una classe|
|[Errore del compilatore C3386](compiler-error-c3386.md)|'*tipo*': /__declspec a un tipo gestito o WinRT|
|[Errore del compilatore C3387](compiler-error-c3387.md)|'*membro*': /__declspec a un membro di un tipo gestito o WinRT|
|[Errore del compilatore C3388](compiler-error-c3388.md)|'*token*': non consentito come vincolo, presupponendo che '*valore*' per continuare l'analisi|
|[Errore del compilatore C3389](compiler-error-c3389.md)|declspec (*identificatore*) non può essere utilizzato con /clr: pure o /CLR: safe|
|[Errore del compilatore C3390](compiler-error-c3390.md)|'*tipo*': argomento di tipo non valido per il parametro generico '*parametro*'del generico'*generic_type*', deve essere un tipo di riferimento|
|[Errore del compilatore C3391](compiler-error-c3391.md)|'*tipo*': argomento di tipo non valido per il parametro generico '*parametro*'del generico'*generic_type*', deve essere un tipo di valore non nullable|
|[Errore del compilatore C3392](compiler-error-c3392.md)|'*tipo*': argomento di tipo non valido per il parametro generico '*parametro*'del generico'*generic_type*', deve avere un costruttore pubblico senza parametri|
|[Errore del compilatore C3393](compiler-error-c3393.md)|Errore di sintassi nella clausola constraint: '*identificatore*' non è un tipo|
|[Errore del compilatore C3394](compiler-error-c3394.md)|Errore di sintassi nella clausola constraint: trovato '*simbolo*' previsto un tipo|
|[Errore del compilatore C3395](compiler-error-c3395.md)|' *funzione*': dllexport non può essere applicato a una funzione con la clrcall convenzione di chiamata|
|[Errore del compilatore C3396](compiler-error-c3396.md)|'*classe*. *membro*': attributo personalizzato non trovato in '*dello spazio dei nomi*'|
|[Errore del compilatore C3397](compiler-error-c3397.md)|Inizializzazione aggregata non consentita in argomenti predefiniti|
|[Errore del compilatore C3398](compiler-error-c3398.md)|'*operatore*': Impossibile convertire da '*tipo*'a'*tipo*'. L'espressione di origine deve essere un simbolo funzione|
|[Errore del compilatore C3399](compiler-error-c3399.md)|'*tipo*': Impossibile specificare argomenti durante la creazione di un'istanza di un parametro generico|
