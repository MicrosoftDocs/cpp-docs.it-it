---
title: Avvisi del compilatore da C4400 a C4599
ms.date: 04/21/2019
f1_keywords:
- C4413
- C4415
- C4416
- C4417
- C4418
- C4419
- C4421
- C4423
- C4424
- C4425
- C4426
- C4427
- C4438
- C4442
- C4443
- C4444
- C4446
- C4447
- C4448
- C4449
- C4450
- C4452
- C4453
- C4454
- C4455
- C4472
- C4474
- C4475
- C4476
- C4478
- C4480
- C4482
- C4483
- C4491
- C4492
- C4493
- C4494
- C4495
- C4496
- C4497
- C4498
- C4499
- C4509
- C4519
- C4531
- C4542
- C4562
- C4568
- C4569
- C4573
- C4574
- C4575
- C4582
- C4583
- C4585
- C4586
- C4587
- C4588
- C4591
- C4592
- C4593
- C4594
- C4595
helpviewer_keywords:
- C4413
- C4415
- C4416
- C4417
- C4418
- C4419
- C4421
- C4423
- C4424
- C4425
- C4426
- C4427
- C4438
- C4442
- C4443
- C4444
- C4446
- C4447
- C4448
- C4449
- C4450
- C4451
- C4452
- C4453
- C4454
- C4455
- C4456
- C4457
- C4459
- C4472
- C4474
- C4475
- C4476
- C4478
- C4480
- C4482
- C4483
- C4491
- C4492
- C4493
- C4494
- C4495
- C4496
- C4497
- C4498
- C4499
- C4509
- C4519
- C4531
- C4542
- C4562
- C4568
- C4569
- C4573
- C4574
- C4575
- C4582
- C4583
- C4585
- C4586
- C4587
- C4588
- C4591
- C4592
- C4593
- C4594
- C4595
ms.assetid: b07850a5-ae89-48ea-bf9a-f0e30939f9b9
ms.openlocfilehash: d1a4da3d5e721c85879441a53ef4bc00549b587d
ms.sourcegitcommit: 389c559918d9bfaf303d262ee5430d787a662e92
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/24/2019
ms.locfileid: "71230490"
---
# <a name="compiler-warnings-c4400-through-c4599"></a>Avvisi del compilatore da C4400 a C4599

Negli articoli di questa sezione della documentazione viene illustrato un subset dei messaggi di avviso generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="warning-messages"></a>Messaggi di avviso

|Avviso|Messaggio|
|-------------|-------------|
|[Avviso del compilatore (livello 1) C4600](compiler-warning-level-1-c4600.md)|#pragma '*Nome macro*': prevista una stringa non vuota valida|
|[Avviso del compilatore (livello 4) C4400](../../error-messages/compiler-warnings/compiler-warning-level-4-c4400.md)|'*Type*': i qualificatori const/volatile di questo tipo non sono supportati|
|[Avviso del compilatore (livello 1) C4401](../../error-messages/compiler-warnings/compiler-warning-level-1-c4401.md)|'*bit*': il membro è un campo di bit|
|[Avviso del compilatore (livello 1) C4402](../../error-messages/compiler-warnings/compiler-warning-level-1-c4402.md)|è necessario utilizzare l'operatore PTR|
|[Avviso del compilatore (livello 1) C4403](../../error-messages/compiler-warnings/compiler-warning-level-1-c4403.md)|operatore PTR non valido|
|[Avviso del compilatore (livello 3) C4404](../../error-messages/compiler-warnings/compiler-warning-level-3-c4404.md)|periodo sulla direttiva ignorato|
|[Avviso del compilatore (livello 1) C4405](../../error-messages/compiler-warnings/compiler-warning-level-1-c4405.md)|'*Identifier*': l'identificatore è una parola riservata|
|[Avviso del compilatore (livello 1) C4406](../../error-messages/compiler-warnings/compiler-warning-level-1-c4406.md)|operando sulla direttiva ignorata|
|[Avviso del compilatore (livello 1) C4407](../../error-messages/compiler-warnings/compiler-warning-level-1-c4407.md)|cast tra diverse rappresentazioni di puntatore a membro, il compilatore potrebbe generare codice non corretto|
|[Avviso del compilatore (livello 4) C4408](../../error-messages/compiler-warnings/compiler-warning-level-4-c4408.md)|' struct&#124;Union ' anonimo non ha dichiarato alcun membro dati|
|[Avviso del compilatore (livello 1) C4409](../../error-messages/compiler-warnings/compiler-warning-level-1-c4409.md)|Dimensioni istruzioni non valide|
|[Avviso del compilatore (livello 1) C4410](../../error-messages/compiler-warnings/compiler-warning-level-1-c4410.md)|dimensioni non valide per l'operando|
|[Avviso del compilatore (livello 1) C4411](../../error-messages/compiler-warnings/compiler-warning-level-1-c4411.md)|'*Identifier*': il simbolo viene risolto nel registro di spostamento|
|[Avviso del compilatore (livello 2) C4412](../../error-messages/compiler-warnings/compiler-warning-level-2-c4412.md)|'*Function*': la firma della funzione contiene il tipo '*Type*'; C++ gli oggetti non sono sicuri di passare tra codice puro e misto o nativo.|
|Avviso del compilatore C4413|' NomeClasse:: Member ': il membro di riferimento è inizializzato su un oggetto temporaneo che non viene mantenuto dopo la chiusura del costruttore|
|[Avviso del compilatore (livello 3) C4414](../../error-messages/compiler-warnings/compiler-warning-level-3-c4414.md)|'*Function*': breve salto alla funzione convertita in near|
|Avviso del compilatore (livello 1) C4415|duplicato _ _ declspec (code_seg ('*Name*'))|
|Avviso del compilatore (livello 1) C4416|_ _ declspec (code_seg (...)) contiene una stringa vuota: ignorata|
|Avviso del compilatore (livello 1) C4417|una creazione di istanza di modello esplicita non può avere _ _ declspec (code_seg (...)): ignorata|
|Avviso del compilatore (livello 1) C4418|_ _ declspec (code_seg (...)) ignorato in un'enumerazione|
|Avviso del compilatore (livello 3) C4419|'*Symbol*' non ha effetto se applicato alla classe di riferimento privata '*Class*'.|
|[Avviso del compilatore (livello 1) C4420](../../error-messages/compiler-warnings/compiler-warning-level-1-c4420.md)|'*checked_operator*': operatore non disponibile con '*operator*'; il controllo in fase di esecuzione può essere compromesso|
|Avviso del compilatore (livello 3) C4421|'*Parameter*': un parametro di riferimento in una funzione ripristinabile è potenzialmente non sicuro|
|Avviso del compilatore (livello 3) C4423|' std:: bad_alloc ': verrà rilevata dalla classe ('*Type*') per il *numero* di riga|
|Avviso del compilatore (livello 3) C4424|catch per '*tipo1*' preceduto da'*tipo2*' al *numero*di riga; un comportamento imprevedibile può verificarsi se viene generata l'eccezione ' std:: bad_alloc '|
|Avviso del compilatore (livello 1) C4425|Non è possibile applicare un'annotazione SAL a'.. .'|
|Avviso del compilatore (livello 1) C4426|i flag di ottimizzazione modificati dopo l'inclusione dell'intestazione potrebbero essere dovuti a #pragma optimize ()|
|Avviso del compilatore (livello 1) C4427|'*operator*': overflow in una divisione costante, comportamento non definito|
|[Avviso del compilatore (livello 4) C4429](../../error-messages/compiler-warnings/compiler-warning-level-4-c4429.md)|possibile nome di caratteri universali incompleto o non corretto|
|[Avviso del compilatore (errore) C4430](../../error-messages/compiler-warnings/compiler-warning-c4430.md)|identificatore di tipo mancante, verrà utilizzato int. Nota: C++non supporta default-int|
|[Avviso del compilatore (livello 4) C4431](../../error-messages/compiler-warnings/compiler-warning-level-4-c4431.md)|identificatore di tipo mancante, verrà utilizzato int. Nota: C non supporta più default-int|
|[Avviso del compilatore (livello 4) C4434](../../error-messages/compiler-warnings/compiler-warning-level-4-c4434.md)|un costruttore statico deve avere accessibilità privata; modifica dell'accesso privato|
|[Avviso del compilatore (livello 4) C4435](../../error-messages/compiler-warnings/compiler-warning-level-4-c4435.md)|'*Derived_Class*': Il layout dell'oggetto in/vd2 cambierà a causa della base virtuale '*BASE_CLASS*'|
|[Avviso del compilatore (livello 1) C4436](../../error-messages/compiler-warnings/compiler-warning-level-1-c4436.md)|il\_cast dinamico dalla base virtuale '*BASE_CLASS*' a'*Derived_Class*' nel costruttore o nel distruttore potrebbe non riuscire con un oggetto costruito parzialmente|
|[Avviso del compilatore (livello 4) C4437](../../error-messages/compiler-warnings/compiler-warning-level-4-c4437.md)|il\_cast dinamico dalla base virtuale '*BASE_CLASS*' a'*Derived_Class*' potrebbe non riuscire in alcuni contesti|
|Avviso del compilatore C4438|'*Function*': Impossibile chiamare in modo sicuro in modalità/await: clrcompat. Se "*Function*" chiama il CLR, può causare il danneggiamento della testa di CLR|
|[Avviso del compilatore (errore) C4439](../../error-messages/compiler-warnings/compiler-warning-c4439.md)|'*Function*': la definizione di funzione con un tipo gestito nella firma deve avere una convenzione di chiamata clrcall|
|[Avviso del compilatore (livello 1) C4440](../../error-messages/compiler-warnings/compiler-warning-level-1-c4440.md)|ridefinizione della convenzione di chiamata da'*calling_convention1*' a'*calling_convenction2*' ignorata|
|[Avviso del compilatore (livello 1) C4441](../../error-messages/compiler-warnings/compiler-warning-level-1-c4441.md)|la convenzione di chiamata di '*calling_convention1*' è stata ignorata; utilizzato '*calling_convention2*'|
|Avviso del compilatore (livello 1) C4442|terminatore null incorporato nell'argomento __annotation.  Il valore verrà troncato.|
|Avviso del compilatore (livello 1) C4443|parametro pragma previsto:' 0',' 1' o ' 2'|
|Avviso del compilatore (livello 3) C4444|'*Identifier*': il livello principale ' __unaligned ' non è implementato in questo contesto|
|[Avviso del compilatore (livello 1) C4445](../../error-messages/compiler-warnings/compiler-warning-level-1-c4445.md)|'*Function*': in un tipo '&#124;WinRT Managed ' un metodo virtuale non può essere privato|
|Avviso del compilatore (livello 1) C4446|'*Type*': Impossibile eseguire il mapping del membro '*name1*' in questo tipo, a causa di un conflitto con il nome del tipo. Il metodo è stato rinominato in '*name2*'|
|Avviso del compilatore (livello 1) C4447|è stata trovata la firma ' Main ' senza il modello di Threading. Provare a usare "int Main (Platform::\<array Platform:: String ^ > ^ args)".|
|Avviso del compilatore C4448|'*Type*1' non dispone di un'interfaccia predefinita specificata nei metadati. Picking:'*tipo2*', che potrebbe non riuscire in fase di esecuzione.|
|Avviso del compilatore C4449|'*Type*' un tipo non sealed deve essere contrassegnato come ' [WebHostHidden]'|
|Avviso del compilatore C4450|'*tipo1*' deve essere contrassegnato come ' [WebHostHidden]' perché deriva da'*tipo2*'|
|Avviso del compilatore (livello 4) C4451|' nomeclasse1:: Member ': L'utilizzo della classe di riferimento ' nomeclasse2:: Member ' all'interno di questo contesto può causare il marshalling non valido dell'oggetto tra contesti|
|Avviso del compilatore (livello 1) C4452|'*Identifier*': il tipo pubblico non può trovarsi in un ambito globale. Deve trovarsi in uno spazio dei nomi figlio del nome del file con estensione WinMD di output.|
|Avviso del compilatore (livello 1) C4453|'*Type*': Impossibile utilizzare un tipo ' [WebHostHidden]' sulla superficie pubblicata di un tipo pubblico diverso da' [WebHostHidden]'|
|Avviso del compilatore (livello 1) C4454|'*Function*' è sottoposto a overload da un numero di parametri di input superiore al numero di parametri di input senza che sia stato specificato [DefaultOverload]. Selezione di '*Declaration*' come overload predefinito|
|Avviso del compilatore (livello 1) C4455|' operator *operator*': gli identificatori di suffisso letterale che non iniziano con un carattere di sottolineatura sono riservati|
|[Avviso del compilatore (livello 4) C4456](compiler-warning-level-4-c4456.md)|la dichiarazione di '*Identifier*' nasconde la dichiarazione locale precedente|
|[Avviso del compilatore (livello 4) C4457](compiler-warning-level-4-c4457.md)|la dichiarazione di '*Identifier*' nasconde il parametro della funzione|
|[Avviso del compilatore (livello 4) C4458](compiler-warning-level-4-c4458.md)|la dichiarazione di '*Identifier*' nasconde il membro della classe|
|[Avviso del compilatore (livello 4) C4459](compiler-warning-level-4-c4459.md)|la dichiarazione di '*Identifier*' nasconde la dichiarazione globale|
|[Avviso del compilatore (livello 4) C4460](../../error-messages/compiler-warnings/compiler-warning-level-4-c4460.md)|' Operator&#124;' gestito da WinRT, con parametro passato per riferimento. L'operatore&#124; *' operator '* gestito da WinRT ha una semantica diversa C++ rispetto all'operatore '*cpp_operator*'. si intendeva passare per valore?|
|[Avviso del compilatore (livello 1) C4461](../../error-messages/compiler-warnings/compiler-warning-level-1-c4461.md)|'*NomeClasse*': questa classe ha un finalizzatore '! *finalizzatore*' ma nessun distruttore ' ~*dtor*'|
|[Avviso del compilatore (livello 1, errore) C4462](../../error-messages/compiler-warnings/compiler-warning-level-1-c4462.md)|'*Type*': non è possibile determinare il GUID del tipo. Il programma potrebbe bloccarsi in fase di esecuzione.|
|[Avviso del compilatore (livello 4) C4463](compiler-warning-level-4-c4463.md)|overflow assegnazione di '*value*' a un campo di bit che può conservare solo i valori da'*MIN_VALUE*' a'*MAX_VALUE*'|
|[Avviso del compilatore (livello 4) C4464](../../error-messages/compiler-warnings/c4464.md)|il percorso di inclusione relativo contiene '. .'|
|[Avviso del compilatore (livello 1) C4470](../../error-messages/compiler-warnings/compiler-warning-level-1-c4470.md)|pragma di controllo a virgola mobile ignorati in/CLR|
|[Avviso del compilatore (livello 4) C4471](compiler-warning-level-4-c4471.md)|'*Enumeration*': una dichiarazione con stato di un'enumerazione senza ambito deve avere un tipo sottostante (presupposto int)|
|Avviso del compilatore (livello 1) C4472|'*Identifier*' è un'enumerazione nativa: aggiungere un identificatore di accesso (privato/pubblico) per dichiarare un'enumerazione&#124;' WinRT Managed '|
|[Avviso del compilatore (livello 1) C4473](c4473.md)|'*Function*': argomenti insufficienti passati per la stringa di formato|
|Avviso del compilatore (livello 3) C4474|'*Function*': sono stati passati troppi argomenti per la stringa di formato|
|Avviso del compilatore (livello 3) C4475|'*Function*': non è possibile usare il modificatore di lunghezza '*Modifier*' con il carattere del campo di tipo '*character*' nell'identificatore di formato|
|Avviso del compilatore (livello 3) C4476|'*Function*': carattere '*character*' del campo di tipo sconosciuto nell'identificatore di formato|
|[Avviso del compilatore (livello 1) C4477](c4477.md)|'*Function*': la stringa di formato '*String*' richiede un argomento di tipo '*Type*', ma il *numero* dell'argomento Variadic è di tipo '*Type*'|
|Avviso del compilatore (livello 1) C4478|'*Function*': non è possibile combinare i segnaposto posizionali e non posizionali nella stessa stringa di formato|
|Avviso del compilatore (errore) C4480|usata estensione non standard: specifica del tipo sottostante per l'*enumerazione ' Enumeration*'|
|[Avviso del compilatore (livello 4) C4481](../../error-messages/compiler-warnings/compiler-warning-level-4-c4481.md)|utilizzata estensione non standard: identificatore di override '*keyword*'|
|Avviso del compilatore C4482|utilizzata estensione non standard: enumerazione '*Enumeration*' utilizzata nel nome completo|
|Avviso del compilatore (livello 1, errore) C4483|errore di sintassi: C++ prevista parola chiave|
|[Avviso del compilatore (errore) C4484](../../error-messages/compiler-warnings/compiler-warning-c4484.md)|'*override_function*': corrisponde al metodo della classe di riferimento di base '*base_class_function*', ma non è contrassegnato ' Virtual ',' New ' o ' override '; si presuppone ' New ' (e non ' Virtual ')|
|[Avviso del compilatore (errore) C4485](../../error-messages/compiler-warnings/compiler-warning-c4485.md)|'*override_function*': corrisponde al metodo della classe di riferimento di base '*base_class_function*', ma non è contrassegnato ' New ' o ' override '; si presuppone ' New ' (è Virtual ')|
|[Avviso del compilatore (livello 1) C4486](../../error-messages/compiler-warnings/compiler-warning-level-1-c4486.md)|'*Function*': un metodo virtuale privato di una classe di riferimento o di una classe di valori deve essere contrassegnato come ' sealed '|
|[Avviso del compilatore (livello 4) C4487](../../error-messages/compiler-warnings/compiler-warning-level-4-c4487.md)|'*derived_class_function*': corrisponde al metodo non virtuale ereditato '*base_class_function*', ma non è contrassegnato in modo esplicito come ' New '|
|[Avviso del compilatore (livello 1) C4488](../../error-messages/compiler-warnings/compiler-warning-level-1-c4488.md)|'*Function*': richiede la parola chiave '*keyword*' per implementare il metodo di interfaccia '*interface_method*'|
|[Avviso del compilatore (livello 1) C4489](../../error-messages/compiler-warnings/compiler-warning-level-1-c4489.md)|'*specifier*': non consentito nel metodo di interfaccia '*Method*'; gli identificatori di override sono consentiti solo nei metodi della classe di riferimento e della classe di valori|
|[Avviso del compilatore (livello 1) C4490](../../error-messages/compiler-warnings/compiler-warning-level-1-c4490.md)|' override ': utilizzo non corretto dell'identificatore di override; '*Function*' non corrisponde a un metodo della classe di riferimento di base|
|Avviso del compilatore (livello 1) C4491|'*Name*': ha un formato di versione IDL non valido|
|Avviso del compilatore (livello 1, errore) C4492|'*funzione1*': corrisponde al metodo della classe di riferimento di base '*funzione2*', ma non è contrassegnato ' override '|
|Avviso del compilatore (livello 3, errore) C4493|l'espressione delete non ha effetto perché il distruttore di '*Type*' non dispone dell'accessibilità' Public '|
|Avviso del compilatore (livello 1) C4494|'*Function*': L'oggetto _ _ declspec (allocator) verrà ignorato perché il tipo restituito della funzione non è un puntatore o un riferimento|
|Avviso del compilatore C4495|è stata usata l'estensione non standard ' __super ': Replace con il nome esplicito della classe base|
|Avviso del compilatore C4496|è stata usata l'estensione non standard ' for each ': Replace con l'istruzione ranged-for|
|Avviso del compilatore C4497|è stata usata l'estensione non standard ' sealed ': sostituire con ' final '|
|Avviso del compilatore C4498|utilizzata estensione non standard:'*Extension*'|
|Avviso del compilatore (livello 4) C4499|'*Function*': una specializzazione esplicita non può avere una classe di archiviazione (ignorata)|
|[Avviso del compilatore (livello 1) C4502](../../error-messages/compiler-warnings/compiler-warning-level-1-c4502.md)|'*Specification di collegamento*' richiede l'uso della parola chiave ' extern ' e deve precedere tutti gli altri identificatori|
|[Avviso del compilatore (livello 1) C4503](../../error-messages/compiler-warnings/compiler-warning-level-1-c4503.md)|'*Identifier*': lunghezza del nome decorata superata. il nome è stato troncato|
|[Avviso del compilatore (livello 4) C4505](../../error-messages/compiler-warnings/compiler-warning-level-4-c4505.md)|'*Function*': funzione locale senza riferimenti rimossa|
|[Avviso del compilatore (livello 1) C4506](../../error-messages/compiler-warnings/compiler-warning-level-1-c4506.md)|Nessuna definizione per la funzione inline '*Function*'|
|[Avviso del compilatore (livello 1) C4508](../../error-messages/compiler-warnings/compiler-warning-level-1-c4508.md)|'*Function*': la funzione deve restituire un valore. viene utilizzato il tipo restituito ' void '|
|Avviso del compilatore C4509|utilizzata estensione non standard:'*Function*' utilizza SEH è*Object*' con distruttore|
|[Avviso del compilatore (livello 4) C4510](../../error-messages/compiler-warnings/compiler-warning-level-4-c4510.md)|'*Class*': il costruttore predefinito è stato definito in modo implicito come eliminato|
|[Avviso del compilatore (livello 3) C4511](../../error-messages/compiler-warnings/compiler-warning-level-3-c4511.md)|'*Class*': il costruttore di copia è stato definito in modo implicito come eliminato|
|[Avviso del compilatore (livello 4) C4512](../../error-messages/compiler-warnings/compiler-warning-level-4-c4512.md)|'*Class*': l'operatore di assegnazione è stato definito in modo implicito come eliminato|
|[Avviso del compilatore (livello 4) C4513](../../error-messages/compiler-warnings/compiler-warning-level-4-c4513.md)|'*Class*': il distruttore è stato definito in modo implicito come eliminato|
|[Avviso del compilatore (livello 4) C4514](../../error-messages/compiler-warnings/compiler-warning-level-4-c4514.md)|'*Function*': funzione inline senza riferimenti rimossa|
|[Avviso del compilatore (livello 4) C4515](../../error-messages/compiler-warnings/compiler-warning-level-4-c4515.md)|'*namespace*': lo spazio dei nomi utilizza se stesso|
|[Avviso del compilatore (livello 4) C4516](../../error-messages/compiler-warnings/compiler-warning-level-4-c4516.md)|' Class:: symbol ': le dichiarazioni di accesso sono deprecate. le dichiarazioni using del membro forniscono un'alternativa migliore|
|[Avviso del compilatore (livello 4) C4517](../../error-messages/compiler-warnings/compiler-warning-level-4-c4517.md)|le dichiarazioni di accesso sono deprecate. le dichiarazioni using del membro forniscono un'alternativa migliore|
|[Avviso del compilatore (livello 1) C4518](../../error-messages/compiler-warnings/compiler-warning-level-1-c4518.md)|'*specifier*': gli identificatori di tipo o la classe di archiviazione non sono previsti qui; ignorato|
|Avviso del compilatore (errore) C4519|gli argomenti di modello predefiniti sono consentiti solo in un modello di classe|
|[Avviso del compilatore (livello 3) C4521](../../error-messages/compiler-warnings/compiler-warning-level-3-c4521.md)|'*Class*': specificati più costruttori di copia|
|[Avviso del compilatore (livello 3) C4522](../../error-messages/compiler-warnings/compiler-warning-level-3-c4522.md)|'*Class*': specificati più operatori di assegnazione|
|[Avviso del compilatore (livello 3) C4523](../../error-messages/compiler-warnings/compiler-warning-level-3-c4523.md)|'*Class*': specificati più distruttori|
|[Avviso del compilatore (livello 1) C4526](../../error-messages/compiler-warnings/compiler-warning-level-1-c4526.md)|'*Function*': la funzione membro statica non può eseguire l'override della funzione virtuale ' override*della funzione virtuale '* ignorata. la funzione virtuale sarà nascosta|
|[Avviso del compilatore (livello 1) C4530](../../error-messages/compiler-warnings/compiler-warning-level-1-c4530.md)|C++utilizzato gestore di eccezioni, ma la semantica di rimozione non è abilitata. Specificare/EHsc|
|Avviso del compilatore (livello 1) c4531|C++gestione delle eccezioni non disponibile in Windows CE. Usare la gestione delle eccezioni strutturata|
|[Avviso del compilatore (livello 1) C4532](../../error-messages/compiler-warnings/compiler-warning-level-1-c4532.md)|' continue ': il salto dal blocco ' __finally/Finally ' presenta un comportamento non definito durante la gestione della terminazione|
|[Avviso del compilatore (livello 1) C4533](../../error-messages/compiler-warnings/compiler-warning-level-1-c4533.md)|l'inizializzazione di '*Variable*' è stata ignorata da'*goto Label*'|
|[Avviso del compilatore (livello 3) C4534](../../error-messages/compiler-warnings/compiler-warning-level-3-c4534.md)|'*Constructor*' non sarà un costruttore predefinito per ' Class/struct ''*Identifier*' a causa dell'argomento predefinito|
|[Avviso del compilatore (livello 3) C4535](../../error-messages/compiler-warnings/compiler-warning-level-3-c4535.md)|la chiamata a _set_se_translator () richiede/EHa|
|[Avviso del compilatore (livello 4) C4536](../../error-messages/compiler-warnings/compiler-warning-level-4-c4536.md)|'*typeName*': il nome del tipo supera il limite dei metadati di '*character_limit*'|
|[Avviso del compilatore (livello 1) C4537](../../error-messages/compiler-warnings/compiler-warning-level-1-c4537.md)|'*Object*':' .' applicato a un tipo non definito dall'utente|
|[Avviso del compilatore (livello 3) C4538](../../error-messages/compiler-warnings/compiler-warning-level-3-c4538.md)|'*Type*': i qualificatori const/volatile di questo tipo non sono supportati|
|[Avviso del compilatore (livello 1) C4540](../../error-messages/compiler-warnings/compiler-warning-level-1-c4540.md)|dynamic_cast utilizzato per la conversione in base inaccessibile o ambigua; il test in fase di esecuzione avrà esito negativo (da'*tipo1*' a'*tipo2*')|
|[Avviso del compilatore (livello 1) C4541](../../error-messages/compiler-warnings/compiler-warning-level-1-c4541.md)|'*Identifier*' usato nel tipo polimorfico '*Type*' con/gr-; potrebbe verificarsi un comportamento imprevedibile|
|Avviso del compilatore (livello 1) C4542|La generazione del file di testo inserito Unito non è stata ignorata. Impossibile scrivere il file *FileType* :'*problema*': *messaggio*|
|[Avviso del compilatore (livello 3) C4543](../../error-messages/compiler-warnings/compiler-warning-level-3-c4543.md)|Testo inserito eliminato dall'attributo ' No\_injected_text '|
|[Avviso del compilatore (livello 1) C4544](../../error-messages/compiler-warnings/compiler-warning-level-1-c4544.md)|'*Declaration*': argomento di modello predefinito ignorato in questa dichiarazione di modello|
|[Avviso del compilatore (livello 1) C4545](../../error-messages/compiler-warnings/compiler-warning-level-1-c4545.md)|l'espressione prima della virgola restituisce una funzione senza elenco di argomenti|
|[Avviso del compilatore (livello 1) C4546](../../error-messages/compiler-warnings/compiler-warning-level-1-c4546.md)|nella chiamata di funzione prima della virgola manca l'elenco degli argomenti|
|[Avviso del compilatore (livello 1) C4547](../../error-messages/compiler-warnings/compiler-warning-level-1-c4547.md)|'*operator*': l'operatore prima della virgola non ha alcun effetto; operatore previsto con effetto collaterale|
|[Avviso del compilatore (livello 1) C4548](../../error-messages/compiler-warnings/compiler-warning-level-1-c4548.md)|l'espressione prima della virgola non ha effetto. Prevista espressione con effetto collaterale.|
|[Avviso del compilatore (livello 1) C4549](../../error-messages/compiler-warnings/compiler-warning-level-1-c4549.md)|'*operator*': l'operatore prima della virgola non ha alcun effetto; si intendeva '*operator*'?|
|[Avviso del compilatore (livello 1) C4550](../../error-messages/compiler-warnings/compiler-warning-level-1-c4550.md)|l'espressione restituisce una funzione in cui manca un elenco di argomenti|
|[Avviso del compilatore (livello 1) C4551](../../error-messages/compiler-warnings/compiler-warning-level-1-c4551.md)|chiamata di funzione mancante elenco di argomenti|
|[Avviso del compilatore (livello 1) C4552](../../error-messages/compiler-warnings/compiler-warning-level-1-c4552.md)|'*operator*': l'operatore non ha alcun effetto; operatore previsto con effetto collaterale|
|[Avviso del compilatore (livello 1) C4553](../../error-messages/compiler-warnings/compiler-warning-level-1-c4553.md)|'*operator*': l'operatore non ha alcun effetto; si intendeva ' operatore?|
|[Avviso del compilatore (livello 3) C4554](../../error-messages/compiler-warnings/compiler-warning-level-3-c4554.md) C4554|'*operator*': controllare la precedenza degli operatori per un errore possibile. usare le parentesi per chiarire la precedenza|
|[Avviso del compilatore (livello 1) C4555](../../error-messages/compiler-warnings/compiler-warning-level-1-c4555.md)|l'espressione non ha effetto. Prevista espressione con effetto collaterale|
|[Avviso del compilatore (livello 1) C4556](../../error-messages/compiler-warnings/compiler-warning-level-1-c4556.md)|il valore dell'argomento intrinseco immediato '*value*' non è compreso nell'intervallo '*lower_bound* - *upper_bound*'|
|[Avviso del compilatore (livello 3) C4557](../../error-messages/compiler-warnings/compiler-warning-level-3-c4557.md)|' __assume ' contiene l'effetto '*Effect*'|
|[Avviso del compilatore (livello 1) C4558](../../error-messages/compiler-warnings/compiler-warning-level-1-c4558.md)|il valore dell'operando '*value*' non è compreso nell'intervallo '*lower_bound* - *upper_bound*'|
|[Avviso del compilatore (livello 4) C4559](../../error-messages/compiler-warnings/compiler-warning-level-4-c4559.md)|'*Function*': ridefinizione. la funzione ottiene _ _ declspec (modificatore)|
|[Avviso del compilatore (livello 1) C4561](../../error-messages/compiler-warnings/compiler-warning-level-1-c4561.md)|' __fastcall ' incompatibile con l'opzione '/CLR ': conversione in ' stdcall '|
|Avviso del compilatore (livello 4) C4562|le funzioni con prototipo completo sono necessarie con l'opzione '/CLR ': conversione di ' ()' in ' (void)'|
|[Avviso del compilatore (livello 4) C4564](../../error-messages/compiler-warnings/compiler-warning-level-4-c4564.md)|il metodo '*Method*' della classe ' Class ''*NomeClasse*' definisce il parametro predefinito '*Parameter*' non supportato|
|[Avviso del compilatore (livello 4) C4565](../../error-messages/compiler-warnings/compiler-warning-level-4-c4565.md)|'*Function*': ridefinizione. il simbolo è stato dichiarato in precedenza con _ _ declspec (modificatore)|
|[Avviso del compilatore (livello 1) C4566](../../error-messages/compiler-warnings/compiler-warning-level-1-c4566.md)|il carattere rappresentato dal nome di caratteri universali '*char*' non può essere rappresentato nella tabella codici corrente (*numero*)|
|Avviso del compilatore (livello 1) C4568|'*Function*': nessun membro corrisponde alla firma dell'override esplicito|
|Avviso del compilatore (livello 3) C4569|'*Function*': nessun membro corrisponde alla firma dell'override esplicito|
|[Avviso del compilatore (livello 3) C4570](../../error-messages/compiler-warnings/compiler-warning-level-3-c4570.md)|'*Type*': non è dichiarato in modo esplicito come abstract ma ha funzioni astratte|
|[Avviso del compilatore (livello 4) C4571](../../error-messages/compiler-warnings/compiler-warning-level-4-c4571.md)|informativo: la semantica di catch (...) C++ è cambiata da Visual 7,1; le eccezioni strutturate (SEH) non vengono più rilevate|
|[Avviso del compilatore (livello 1) C4572](../../error-messages/compiler-warnings/compiler-warning-level-1-c4572.md)|L'attributo [ParamArray] è deprecato in/CLR, utilizzare '.. .' invece|
|Avviso del compilatore (livello 1) C4573|per l'utilizzo di '*lambda Function*' è necessario che il compilatore acquisisca ' This ', ma la modalità di acquisizione predefinita corrente non la consente|
|Avviso del compilatore (livello 4) C4574|'*Identifier*' è definito come ' 0': si intendeva usare ' #if Identifier '?|
|Avviso del compilatore (livello 1) C4575|' __vectorcall ' incompatibile con l'opzione '/CLR ': conversione in ' stdcall '|
|Avviso del compilatore (livello 1, errore) C4576|un tipo racchiuso tra parentesi seguito da un elenco di inizializzatori è una sintassi di conversione di tipi esplicita non standard|
|[Avviso del compilatore (livello 1, disattivato) C4577](../../error-messages/compiler-warnings/compiler-warning-level-1-c4577.md)|' noexcept ' usato senza la modalità di gestione delle eccezioni specificata. la chiusura dell'eccezione non è garantita. Specificare/EHsc|
|Avviso del compilatore (livello 1, errore) C4578|' ABS ': conversione da'*tipo1*' a'*tipo2*'. possibile perdita di dati (si intendeva chiamare '*Function*' o #include \<cmath >?)|
|[Avviso del compilatore (livello 3) C4580](../../error-messages/compiler-warnings/compiler-warning-level-3-c4580.md)|[attribute] è deprecato; specificare System::Attribute o Platform::Metadata come classe base|
|[Avviso del compilatore (livello 1) C4581](../../error-messages/compiler-warnings/compiler-warning-level-1-c4581.md)|comportamento deprecato:' "*stringa*"' sostituita con '*String*' per elaborare l'attributo|
|Avviso del compilatore (livello 4) C4582|'*Type*': il costruttore non è stato chiamato in modo implicito|
|Avviso del compilatore (livello 4) C4583|'*Type*': il distruttore non è stato chiamato in modo implicito|
|[Avviso del compilatore (livello 1) C4584](../../error-messages/compiler-warnings/compiler-warning-level-1-c4584.md)|'*Class1*': la classe base '*Class2*' è già una classe di base di '*Class3*'|
|Avviso del compilatore (livello 1, errore) C4585|'*Class*': Una classe di riferimento pubblica ' WinRT ' deve essere sealed o derivare da una classe non sealed esistente|
|Avviso del compilatore (livello 1, errore) C4586|'*Type*': Un tipo pubblico non può essere dichiarato in uno spazio dei nomi di primo livello denominato ' Windows '|
|Avviso del compilatore (livello 1) C4587|'*anonymous_structure*': modifica del comportamento: il costruttore non viene più chiamato in modo implicito|
|Avviso del compilatore (livello 1) C4588|'*anonymous_structure*': modifica del comportamento: il distruttore non viene più chiamato in modo implicito|
|Avviso del compilatore (livello 1) C4591|è stato superato il limite di profondità della chiamata ' constExpr ' del *numero* (\</constExpr: numero di profondità >)|
|Avviso del compilatore (livello 3) C4592|'*Function*': la valutazione della chiamata a' constExpr ' non è riuscita; la funzione verrà chiamata in fase di esecuzione|
|Avviso del compilatore (livello 1) C4593|'*Function*': è stato superato il limite del passaggio di valutazione della chiamata ' constExpr ' di '*limit*'; usare/constExpr: Steps\<number > per aumentare il limite|
|Avviso del compilatore (livello 3) C4594|'*Type*': il distruttore non verrà chiamato in modo implicito se viene generata un'eccezione|
|Avviso del compilatore (livello 1) C4595|'*Type*': modifica del comportamento: il distruttore non verrà più chiamato in modo implicito se viene generata un'eccezione|
|[Avviso del compilatore (livello 4) C4596](../../error-messages/compiler-warnings/c4596.md)|'*Identifier*': nome completo non valido nella dichiarazione di membro|
|Avviso del compilatore (errore) C4597|comportamento non definito: offsetof applicato a un membro di una base virtuale|
|Avviso del compilatore (livello 1 e livello 3) C4598|' #include '*intestazione*"': il *numero* di intestazione nell'intestazione precompilata non corrisponde alla compilazione corrente in tale posizione|
|Avviso del compilatore (livello 3) C4599|'*flag* *path*': *numero* di argomento della riga di comando non corrispondente all'intestazione precompilata|

## <a name="see-also"></a>Vedere anche

[Errori eC++ avvisi di C/compilatore e strumenti di compilazione](../compiler-errors-1/c-cpp-build-errors.md) \
[Avvisi del compilatore C4000-C5999](compiler-warnings-c4000-c5999.md)
