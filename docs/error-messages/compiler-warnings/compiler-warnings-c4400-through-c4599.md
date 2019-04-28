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
ms.openlocfilehash: 7dd09e6f31592f6d4b62b94d8d3256fe1a432010
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62280314"
---
# <a name="compiler-warnings-c4400-through-c4599"></a>Avvisi del compilatore da C4400 a C4599

Gli articoli in questa sezione della documentazione illustrano un subset dei messaggi di avviso generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="warning-messages"></a>Messaggi di avviso

|Avviso|Messaggio|
|-------------|-------------|
|[Avviso del compilatore (livello 1) C4600](compiler-warning-level-1-c4600.md)|#pragma»*nome della macro*': prevista una stringa vuota non valida|
|[Avviso del compilatore (livello 4) C4400](../../error-messages/compiler-warnings/compiler-warning-level-4-c4400.md)|«*tipo*': qualificatori const/volatile su questo tipo non sono supportati|
|[Avviso del compilatore (livello 1) C4401](../../error-messages/compiler-warnings/compiler-warning-level-1-c4401.md)|«*campo di bit*': membro è un campo di bit|
|[Avviso del compilatore (livello 1) C4402](../../error-messages/compiler-warnings/compiler-warning-level-1-c4402.md)|Utilizzare l'operatore PTR|
|[Avviso del compilatore (livello 1) C4403](../../error-messages/compiler-warnings/compiler-warning-level-1-c4403.md)|operatore PTR non valido|
|[Avviso del compilatore (livello 3) C4404](../../error-messages/compiler-warnings/compiler-warning-level-3-c4404.md)|ignorato punto su direttiva|
|[Avviso del compilatore (livello 1) C4405](../../error-messages/compiler-warnings/compiler-warning-level-1-c4405.md)|«*identificatore*': identificatore è una parola riservata|
|[Avviso del compilatore (livello 1) C4406](../../error-messages/compiler-warnings/compiler-warning-level-1-c4406.md)|ignorato operando su direttiva|
|[Avviso del compilatore (livello 1) C4407](../../error-messages/compiler-warnings/compiler-warning-level-1-c4407.md)|eseguire il cast tra diversi puntatore alle rappresentazioni di membro, compilatore potrebbe generare codice non corretto|
|[Avviso del compilatore (livello 4) C4408](../../error-messages/compiler-warnings/compiler-warning-level-4-c4408.md)|anonimo ' struct&#124;union' non ha dichiarato alcun membro dati|
|[Avviso del compilatore (livello 1) C4409](../../error-messages/compiler-warnings/compiler-warning-level-1-c4409.md)|dimensione istruzione non valida|
|[Avviso del compilatore (livello 1) C4410](../../error-messages/compiler-warnings/compiler-warning-level-1-c4410.md)|dimensione operando non valida|
|[Avviso del compilatore (livello 1) C4411](../../error-messages/compiler-warnings/compiler-warning-level-1-c4411.md)|«*identificatore*': simbolo punta al Registro di spostamento|
|[Avviso del compilatore (livello 2) C4412](../../error-messages/compiler-warnings/compiler-warning-level-2-c4412.md)|«*funzione*': funzione firma contiene il tipo '*tipo*'; Gli oggetti di C++ sono non è sicuro passare tra codice pure e misto o nativo.|
|Genera un avviso C4413|'classname::member': membro di riferimento viene inizializzato come elemento temporaneo che non viene mantenuto dopo la chiusura del costruttore|
|[Avviso del compilatore (livello 3) C4414](../../error-messages/compiler-warnings/compiler-warning-level-3-c4414.md)|«*funzione*': salto short a funzione convertito in near|
|Avviso del compilatore (livello 1) C4415|duplicate __declspec(code_seg('*name*'))|
|Avviso del compilatore (livello 1) C4416|__declspec(code_seg(...)) contiene una stringa vuota: ignorato|
|Avviso del compilatore (livello 1) C4417|creazione di un'istanza di modello espliciti non possono avere __declspec(code_seg(...)): ignorato|
|Avviso del compilatore (livello 1) C4418|__declspec(code_seg(...)) ignorato per un'enumerazione|
|Avviso del compilatore (livello 3) C4419|«*simbolo*'non ha alcun effetto se applicato alla classe ref privata'*classe*'.|
|[Avviso del compilatore (livello 1) C4420](../../error-messages/compiler-warnings/compiler-warning-level-1-c4420.md)|'*checked_operator*': operatore non è disponibile, utilizzando '*operatore*'; il controllo di runtime può risultare compromesso|
|Avviso del compilatore (livello 3) C4421|«*parametro*': un parametro di riferimento su una funzione può essere ripristinato è potenzialmente non sicuro|
|Avviso del compilatore (livello 3) C4423|'std:: bad_alloc': verrà rilevato dalla classe ('*tipo*') nella riga *numero*|
|Avviso del compilatore (livello 3) C4424|catch per '*type1*'preceduto da'*type2*' nella riga *numero*; imprevedibile se viene generata un'eccezione di 'std:: bad_alloc', potrebbe verificarsi un comportamento|
|Avviso del compilatore (livello 1) C4425|Non è possibile applicare un'annotazione SAL in '...'|
|Avviso del compilatore (livello 1) C4426|flag di ottimizzazione modificati dopo l'inclusione dell'intestazione, probabilmente a causa di #pragma optimize)|
|Avviso del compilatore (livello 1) C4427|«*operatore*': overflow nella divisione delle costanti. comportamento indefinito|
|[Avviso del compilatore (livello 4) C4429](../../error-messages/compiler-warnings/compiler-warning-level-4-c4429.md)|possibili incompleto o formato non corretto-nomi di caratteri universali|
|[Genera un avviso C4430 (errore)](../../error-messages/compiler-warnings/compiler-warning-c4430.md)|identificatore di tipo mancante, verrà utilizzato int. Nota: C++ non supporta l'impostazione predefinita-int|
|[Avviso del compilatore (livello 4) C4431](../../error-messages/compiler-warnings/compiler-warning-level-4-c4431.md)|identificatore di tipo mancante, verrà utilizzato int. Nota: Default-int non è più supportato in C|
|[Avviso del compilatore (livello 4) C4434](../../error-messages/compiler-warnings/compiler-warning-level-4-c4434.md)|un costruttore statico deve avere accessibilità privata; conversione in accesso privato|
|[Avviso del compilatore (livello 4) C4435](../../error-messages/compiler-warnings/compiler-warning-level-4-c4435.md)|«*derived_class*': Layout dell'oggetto in/vd2 verrà modificato a causa di base virtuale '*base_class*'|
|[Avviso del compilatore (livello 1) C4436](../../error-messages/compiler-warnings/compiler-warning-level-1-c4436.md)|Dynamic\_eseguire il cast da base virtuale '*base_class*'a'*derived_class*' nel costruttore o distruttore potrebbe non riuscire con oggetti parzialmente costruiti|
|[Avviso del compilatore (livello 4) C4437](../../error-messages/compiler-warnings/compiler-warning-level-4-c4437.md)|Dynamic\_eseguire il cast da base virtuale '*base_class*'a'*derived_class*' potrebbe non riuscire in alcuni contesti|
|Genera un avviso C4438|«*funzione*': non può essere chiamato in modo sicuro in /Await: clrcompat modalità. Se '*funzione*' chiamate in CLR può comportare una danneggiamento dell'intestazione CLR|
|[Genera un avviso C4439 (errore)](../../error-messages/compiler-warnings/compiler-warning-c4439.md)|«*funzione*': definizione di funzione con un tipo gestito nella firma deve avere un clrcall convenzione di chiamata|
|[Avviso del compilatore (livello 1) C4440](../../error-messages/compiler-warnings/compiler-warning-level-1-c4440.md)|la chiamata a ridefinizione della convenzione da '*calling_convention1*'a'*calling_convenction2*' ignorato|
|[Avviso del compilatore (livello 1) C4441](../../error-messages/compiler-warnings/compiler-warning-level-1-c4441.md)|convenzione di chiamata di '*calling_convention1*' ignorato. «*calling_convention2*' invece utilizzato|
|Avviso del compilatore (livello 1) C4442|terminatore null incorporato nell'argomento di Annotation.  Valore verrà troncato.|
|Avviso del compilatore (livello 1) C4443|parametro pragma previsto: '0', '1' o '2'|
|Avviso del compilatore (livello 3) C4444|«*identificatore*': unaligned' di livello principale non è implementato in questo contesto|
|[Avviso del compilatore (livello 1) C4445](../../error-messages/compiler-warnings/compiler-warning-level-1-c4445.md)|'*funzione*': in un ' WinRT&#124;gestito ' tipo di un metodo virtuale non può essere privato|
|Avviso del compilatore (livello 1) C4446|«*tipo*': Impossibile mappare il membro '*nome1*' in questo tipo, a causa di un conflitto con il nome del tipo. Il metodo è stato rinominato in '*nome2*'|
|Avviso del compilatore (livello 1) C4447|firma di 'main' trovata senza modello di threading. Si consiglia di utilizzare ' int main (Platform:: Array\<platform:: String ^ > ^ args)'.|
|Genera un avviso C4448|«*tipo*1' non è un'interfaccia predefinita specificata nei metadati. Prelievo: '*type2*', che potrebbe non riuscire in fase di esecuzione.|
|Genera un avviso C4449|«*tipo*' un tipo unsealed deve essere contrassegnato come '[WebHostHidden]'|
|Genera un avviso C4450|«*type1*'deve essere contrassegnato come '[WebHostHidden]' perché deriva da'*type2*»|
|Avviso del compilatore (livello 4) C4451|'classname1::member': Utilizzo della classe di riferimento 'classname2::member' all'interno di questo contesto può portare al marshalling non valido dell'oggetto tra contesti|
|Avviso del compilatore (livello 1) C4452|«*identificatore*': tipo pubblico non può essere in ambito globale. Deve essere in uno spazio dei nomi figlio del nome del file con estensione winmd di output.|
|Avviso del compilatore (livello 1) C4453|«*tipo*': Un tipo '[WebHostHidden]' non deve essere utilizzato sulla superficie pubblicata di un tipo pubblico che non è '[WebHostHidden]'|
|Avviso del compilatore (livello 1) C4454|«*funzione*' è in overload per maggiore del numero di parametri di input senza specificato [DefaultOverload]. Selezione di '*dichiarazione*' come overload predefinito|
|Avviso del compilatore (livello 1) C4455|' operator *operatore*': gli identificatori di suffisso letterale che non iniziano con un carattere di sottolineatura sono riservati|
|[Avviso del compilatore (livello 4) C4456](compiler-warning-level-4-c4456.md)|dichiarazione di '*identificatore*' nasconde la dichiarazione locale precedente|
|[Avviso del compilatore (livello 4) C4457](compiler-warning-level-4-c4457.md)|dichiarazione di '*identificatore*' parametro della funzione verrà nascosto|
|[Avviso del compilatore (livello 4) C4458](compiler-warning-level-4-c4458.md)|dichiarazione di '*identificatore*' membro della classe verrà nascosto|
|[Avviso del compilatore (livello 4) C4459](compiler-warning-level-4-c4459.md)|dichiarazione di '*identificatore*' nasconde la dichiarazione globale|
|[Avviso del compilatore (livello 4) C4460](../../error-messages/compiler-warnings/compiler-warning-level-4-c4460.md)|' WinRT&#124;gestito ' operatore '*operatore*', contiene un parametro passato per riferimento. ' WinRT&#124;gestito ' operatore '*operatore*' ha una semantica diversa dalla C++ operatore '*cpp_operator*', si intendeva passare per valore?|
|[Avviso del compilatore (livello 1) C4461](../../error-messages/compiler-warnings/compiler-warning-level-1-c4461.md)|«*NomeClasse*': questa classe ha un finalizzatore '! *finalizzatore*' ma non un distruttore ' ~*dtor*'|
|[Avviso del compilatore (livello 1, errore) C4462](../../error-messages/compiler-warnings/compiler-warning-level-1-c4462.md)|«*tipo*': non è possibile determinare il GUID del tipo. Il programma potrebbe bloccarsi in fase di esecuzione.|
|[Avviso del compilatore (livello 4) C4463](compiler-warning-level-4-c4463.md)|overflow; assegnazione di '*valore*'al campo di bit che può contenere solo valori compresi'*min_value*'a'*max_value*'|
|[Avviso del compilatore (livello 4) C4464](../../error-messages/compiler-warnings/c4464.md)|percorso di inclusione relativo contiene '.. '|
|[Avviso del compilatore (livello 1) C4470](../../error-messages/compiler-warnings/compiler-warning-level-1-c4470.md)|direttive pragma di controllo a virgola mobile ignorati in /clr|
|[Avviso del compilatore (livello 4) C4471](compiler-warning-level-4-c4471.md)|«*enumerazione*': una dichiarazione con prototipo di un'enumerazione senza ambita deve presentare un tipo sottostante (presupposto int)|
|Avviso del compilatore (livello 1) C4472|'*identifier*' è un'enumerazione nativa: aggiungere un identificatore di accesso (privato/pubblico) per dichiarare un ' WinRT&#124;managed' enum|
|[Avviso del compilatore (livello 1) C4473](c4473.md)|«*funzione*': passati argomenti insufficienti per la stringa di formato|
|Avviso del compilatore (livello 3) C4474|«*funzione*': troppi argomenti passati per la stringa di formato|
|Avviso del compilatore (livello 3) C4475|«*funzione*': modificatore di lunghezza '*modificatore*'non può essere usato con caratteri di campo di tipo'*carattere*' nell'identificatore di formato|
|Avviso del compilatore (livello 3) C4476|«*funzione*': caratteri di campo di tipo sconosciuto '*carattere*' nell'identificatore di formato|
|[Avviso del compilatore (livello 1) C4477](c4477.md)|'*funzione*': stringa di formato '*stringa*'richiede un argomento di tipo'*tipo*', ma l'argomento variadic *numero* ha tipo '*tipo*'|
|Avviso del compilatore (livello 1) C4478|«*funzione*': non è possibile combinare i segnaposto posizionali e non posizionali nella stessa stringa di formato|
|Genera un avviso C4480 (errore)|utilizzata estensione non standard: specifica del tipo sottostante per l'enumerazione '*enumerazione*'|
|[Avviso del compilatore (livello 4) C4481](../../error-messages/compiler-warnings/compiler-warning-level-4-c4481.md)|utilizzata estensione non standard: indicatore di override '*parola chiave*'|
|Genera un avviso C4482|utilizzata estensione non standard: enum '*enumerazione*' utilizzato nel nome completo|
|Avviso del compilatore (livello 1, errore) C4483|Errore di sintassi: prevista la parola chiave C++|
|[Genera un avviso C4484 (errore)](../../error-messages/compiler-warnings/compiler-warning-c4484.md)|«*funzione_override*': metodo di classe di riferimento di base corrisponde a '*funzione_classe_base*', ma non è contrassegnato 'virtual', 'new' o 'override'; verrà utilizzato 'new' (e non 'virtual')|
|[Genera un avviso C4485 (errore)](../../error-messages/compiler-warnings/compiler-warning-c4485.md)|«*funzione_override*': metodo di classe di riferimento di base corrisponde a '*funzione_classe_base*', ma non è contrassegnato 'new' o 'override'; 'new' (e 'virtual') si presuppone che|
|[Avviso del compilatore (livello 1) C4486](../../error-messages/compiler-warnings/compiler-warning-level-1-c4486.md)|«*funzione*': un metodo virtuale privato di una classe di riferimento o una classe di valore deve essere contrassegnato 'sealed'|
|[Avviso del compilatore (livello 4) C4487](../../error-messages/compiler-warnings/compiler-warning-level-4-c4487.md)|«*funzione_classe_derivata*': metodo non virtuale ereditato con corrispondenze '*funzione_classe_base*', ma non è contrassegnato 'new' in modo esplicito|
|[Avviso del compilatore (livello 1) C4488](../../error-messages/compiler-warnings/compiler-warning-level-1-c4488.md)|«*funzione*': richiede '*parola chiave*'keyword per implementare il metodo di interfaccia'*metodo_interfaccia*»|
|[Avviso del compilatore (livello 1) C4489](../../error-messages/compiler-warnings/compiler-warning-level-1-c4489.md)|'*identificatore*': non consentito in metodo di interfaccia '*metodo*'; gli identificatori sono consentiti solo nei metodi della classe ref classe e il valore di sostituzione|
|[Avviso del compilatore (livello 1) C4490](../../error-messages/compiler-warnings/compiler-warning-level-1-c4490.md)|'override': uso non corretto dell'identificatore di override; «*funzione*' corrisponde a un metodo della classe base di riferimento|
|Avviso del compilatore (livello 1) C4491|«*nome*': è un formato di versione IDL non valido|
|Avviso del compilatore (livello 1, errore) C4492|'*function1*': metodo di classe di riferimento di base corrisponde a '*function2*', ma non è contrassegnato 'override'|
|Avviso del compilatore (livello 3, errore) C4493|Espressione DELETE non ha alcun effetto poiché il distruttore di '*tipo*' non dispone di accessibilità 'public'|
|Avviso del compilatore (livello 1) C4494|«*funzione*': Verrà ignorato __declspec(allocator) perché la funzione di tipo restituito non è un puntatore o riferimento|
|Genera un avviso C4495|utilizzata estensione non standard super': sostituire con il nome di classe di base esplicito|
|Genera un avviso C4496|utilizzata estensione non standard 'for each': sostituire con l'istruzione ranged-for|
|Genera un avviso C4497|utilizzata estensione non standard 'sealed': sostituirla con 'final'|
|Genera un avviso C4498|utilizzata estensione non standard: '*estensione*'|
|Avviso del compilatore (livello 4) C4499|«*funzione*': una specializzazione esplicita non può avere una classe di archiviazione (ignorata)»|
|[Avviso del compilatore (livello 1) C4502](../../error-messages/compiler-warnings/compiler-warning-level-1-c4502.md)|«*specifiche di collegamento*' richiede l'uso della parola chiave 'extern' e deve precedere tutti gli altri identificatori|
|[Avviso del compilatore (livello 1) C4503](../../error-messages/compiler-warnings/compiler-warning-level-1-c4503.md)|«*identificatore*': lunghezza nome decorato superata, nome troncato|
|[Avviso del compilatore (livello 4) C4505](../../error-messages/compiler-warnings/compiler-warning-level-4-c4505.md)|«*funzione*': funzione locale senza riferimenti rimossa|
|[Avviso del compilatore (livello 1) C4506](../../error-messages/compiler-warnings/compiler-warning-level-1-c4506.md)|Nessuna definizione per la funzione inline '*funzione*'|
|[Avviso del compilatore (livello 1) C4508](../../error-messages/compiler-warnings/compiler-warning-level-1-c4508.md)|«*funzione*': funzione deve restituire un valore. 'void' verrà restituito il tipo|
|Genera un avviso C4509|utilizzata estensione non standard: '*funzione*' utilizza SEH e '*oggetto*' ha un distruttore|
|[Avviso del compilatore (livello 4) C4510](../../error-messages/compiler-warnings/compiler-warning-level-4-c4510.md)|«*classe*': costruttore predefinito è stato definito in modo implicito come eliminato|
|[Avviso del compilatore (livello 3) C4511](../../error-messages/compiler-warnings/compiler-warning-level-3-c4511.md)|«*classe*': costruttore di copia è stato definito in modo implicito come eliminato|
|[Avviso del compilatore (livello 4) C4512](../../error-messages/compiler-warnings/compiler-warning-level-4-c4512.md)|«*classe*': operatore di assegnazione è stato definito in modo implicito come eliminato|
|[Avviso del compilatore (livello 4) C4513](../../error-messages/compiler-warnings/compiler-warning-level-4-c4513.md)|«*classe*': un distruttore è stato definito in modo implicito come eliminato|
|[Avviso del compilatore (livello 4) C4514](../../error-messages/compiler-warnings/compiler-warning-level-4-c4514.md)|«*funzione*': funzione inline senza riferimenti rimossa|
|[Avviso del compilatore (livello 4) C4515](../../error-messages/compiler-warnings/compiler-warning-level-4-c4515.md)|«*dello spazio dei nomi*': lo spazio dei nomi utilizza se stesso|
|[Avviso del compilatore (livello 4) C4516](../../error-messages/compiler-warnings/compiler-warning-level-4-c4516.md)|'simbolo': le dichiarazioni di accesso sono deprecate. usando le dichiarazioni di membri forniscono un'alternativa migliore|
|[Avviso del compilatore (livello 4) C4517](../../error-messages/compiler-warnings/compiler-warning-level-4-c4517.md)|le dichiarazioni di accesso sono deprecate. usando le dichiarazioni di membri forniscono un'alternativa migliore|
|[Avviso del compilatore (livello 1) C4518](../../error-messages/compiler-warnings/compiler-warning-level-1-c4518.md)|«*identificatore*': identificatore classe di archiviazione o un tipo imprevisto; ignorato|
|Genera un avviso C4519 (errore)|argomenti di modello predefiniti consentiti solo nei modelli di classe|
|[Avviso del compilatore (livello 3) C4521](../../error-messages/compiler-warnings/compiler-warning-level-3-c4521.md)|«*classe*': specificato più di un costruttore di copia|
|[Avviso del compilatore (livello 3) C4522](../../error-messages/compiler-warnings/compiler-warning-level-3-c4522.md)|«*classe*': specificato più di un operatore di assegnazione|
|[Avviso del compilatore (livello 3) C4523](../../error-messages/compiler-warnings/compiler-warning-level-3-c4523.md)|«*classe*': specificato più di un distruttore|
|[Avviso del compilatore (livello 1) C4526](../../error-messages/compiler-warnings/compiler-warning-level-1-c4526.md)|'*funzione*': funzione membro statica non è possibile eseguire l'override di funzioni virtuali '*funzione virtuale*' override ignorata, funzione virtuale verrà nascosta|
|[Avviso del compilatore (livello 1) C4530](../../error-messages/compiler-warnings/compiler-warning-level-1-c4530.md)|Gestore di eccezioni di C++ usato, ma semantica di rimozione non sono abilitati. Specificare /EHsc|
|Avviso del compilatore (livello 1) C4531|Gestione delle eccezioni C++ non è disponibile in Windows CE. Utilizzare la gestione delle eccezioni strutturata|
|[Avviso del compilatore (livello 1) C4532](../../error-messages/compiler-warnings/compiler-warning-level-1-c4532.md)|'continue': salto dal blocco finally/finally' produce un comportamento indefinito durante la gestione della terminazione|
|[Avviso del compilatore (livello 1) C4533](../../error-messages/compiler-warnings/compiler-warning-level-1-c4533.md)|inizializzazione di '*variabile*'ignorata da'*goto label*'|
|[Avviso del compilatore (livello 3) C4534](../../error-messages/compiler-warnings/compiler-warning-level-3-c4534.md)|«*costruttore*'non sarà un costruttore predefinito per 'classe/struct' '*identificatore*' a causa di un argomento predefinito|
|[Avviso del compilatore (livello 3) C4535](../../error-messages/compiler-warnings/compiler-warning-level-3-c4535.md)|chiamante set_se_translator () richiede /EHa|
|[Avviso del compilatore (livello 4) C4536](../../error-messages/compiler-warnings/compiler-warning-level-4-c4536.md)|'*nomeTipo*': nome del tipo supera il limite di metadati di '*character_limit*' caratteri|
|[Avviso del compilatore (livello 1) C4537](../../error-messages/compiler-warnings/compiler-warning-level-1-c4537.md)|«*oggetto*': '.' applicato al tipo non definito dall'utente|
|[Avviso del compilatore (livello 3) C4538](../../error-messages/compiler-warnings/compiler-warning-level-3-c4538.md)|«*tipo*': qualificatori const/volatile su questo tipo non sono supportati|
|[Avviso del compilatore (livello 1) C4540](../../error-messages/compiler-warnings/compiler-warning-level-1-c4540.md)|dynamic_cast usato per convertire in base ambigua o inaccessibile; fase di esecuzione test avrà esito negativo ('*type1*'a'*type2*')|
|[Avviso del compilatore (livello 1) C4541](../../error-messages/compiler-warnings/compiler-warning-level-1-c4541.md)|«*identifier*'usato sul tipo polimorfico'*tipo*' con /GR-. potrebbe verificarsi un comportamento imprevedibile|
|Avviso del compilatore (livello 1) C4542|Viene ignorata la generazione del file di testo inserito, non è possibile scrivere *filetype* file: '*problema*': *messaggio*|
|[Avviso del compilatore (livello 3) C4543](../../error-messages/compiler-warnings/compiler-warning-level-3-c4543.md)|Inserito soppresso dall'attributo di testo ' Nessuna\_injected_text'|
|[Avviso del compilatore (livello 1) C4544](../../error-messages/compiler-warnings/compiler-warning-level-1-c4544.md)|«*dichiarazione*': argomento di modello ignorato in questa dichiarazione di modello predefinito|
|[Avviso del compilatore (livello 1) C4545](../../error-messages/compiler-warnings/compiler-warning-level-1-c4545.md)|l'espressione prima della virgola restituisce una funzione senza elenco di argomenti|
|[Avviso del compilatore (livello 1) C4546](../../error-messages/compiler-warnings/compiler-warning-level-1-c4546.md)|nella chiamata di funzione prima della virgola manca l'elenco degli argomenti|
|[Avviso del compilatore (livello 1) C4547](../../error-messages/compiler-warnings/compiler-warning-level-1-c4547.md)|«*operatore*': operatore prima della virgola non ha effetto; previsto operatore con effetto collaterale|
|[Avviso del compilatore (livello 1) C4548](../../error-messages/compiler-warnings/compiler-warning-level-1-c4548.md)|l'espressione prima della virgola non ha effetto. Prevista espressione con effetto collaterale.|
|[Avviso del compilatore (livello 1) C4549](../../error-messages/compiler-warnings/compiler-warning-level-1-c4549.md)|«*operator*': operatore prima della virgola non ha alcun effetto; si intendeva '*operatore*'?|
|[Avviso del compilatore (livello 1) C4550](../../error-messages/compiler-warnings/compiler-warning-level-1-c4550.md)|espressione restituisce una funzione che non contiene un elenco di argomenti|
|[Avviso del compilatore (livello 1) C4551](../../error-messages/compiler-warnings/compiler-warning-level-1-c4551.md)|elenco di argomenti della funzione chiamata mancante|
|[Avviso del compilatore (livello 1) C4552](../../error-messages/compiler-warnings/compiler-warning-level-1-c4552.md)|«*operatore*': operatore non ha effetto; previsto operatore con effetto collaterale|
|[Avviso del compilatore (livello 1) C4553](../../error-messages/compiler-warnings/compiler-warning-level-1-c4553.md)|«*operatore*': operatore non ha alcun effetto; si intendeva ' operatore?|
|[Avviso del compilatore (livello 3) C4554](../../error-messages/compiler-warnings/compiler-warning-level-3-c4554.md) C4554|«*operatore*': controllare eventuali errori, usare le parentesi per chiarire la precedenza|
|[Avviso del compilatore (livello 1) C4555](../../error-messages/compiler-warnings/compiler-warning-level-1-c4555.md)|l'espressione non ha effetto. Prevista espressione con effetto collaterale|
|[Avviso del compilatore (livello 1) C4556](../../error-messages/compiler-warnings/compiler-warning-level-1-c4556.md)|valore di argomento intrinseco immediato '*valore*'non è compreso nell'intervallo'*lower_bound* - *upper_bound*'|
|[Avviso del compilatore (livello 3) C4557](../../error-messages/compiler-warnings/compiler-warning-level-3-c4557.md)|assume' contiene l'effetto '*effetto*'|
|[Avviso del compilatore (livello 1) C4558](../../error-messages/compiler-warnings/compiler-warning-level-1-c4558.md)|valore dell'operando '*valore*'non è compreso nell'intervallo'*lower_bound* - *upper_bound*'|
|[Avviso del compilatore (livello 4) C4559](../../error-messages/compiler-warnings/compiler-warning-level-4-c4559.md)|«*funzione*': ridefinizione; il __declspec(modifier) guadagni (funzione)|
|[Avviso del compilatore (livello 1) C4561](../../error-messages/compiler-warnings/compiler-warning-level-1-c4561.md)|fastcall' incompatibile con il ' o clr' opzione: conversione da stdcall'|
|Avviso del compilatore (livello 4) C4562|funzioni con prototipo completo sono necessarie con il ' o clr' opzione: conversione (')' in '(void)'|
|[Avviso del compilatore (livello 4) C4564](../../error-messages/compiler-warnings/compiler-warning-level-4-c4564.md)|metodo '*metodo*'di 'class' '*NomeClasse*'definisce parametro predefinito non supportata'*parametro*'|
|[Avviso del compilatore (livello 4) C4565](../../error-messages/compiler-warnings/compiler-warning-level-4-c4565.md)|«*funzione*': ridefinizione; il simbolo era dichiarato in precedenza con __declspec(modifier)|
|[Avviso del compilatore (livello 1) C4566](../../error-messages/compiler-warnings/compiler-warning-level-1-c4566.md)|carattere rappresentato dal nome di carattere universale '*char*' non può essere rappresentato nella tabella codici corrente (*numero*)|
|Avviso del compilatore (livello 1) C4568|«*funzione*': nessun membro corrisponde alla firma dell'override esplicito|
|Avviso del compilatore (livello 3) C4569|«*funzione*': nessun membro corrisponde alla firma dell'override esplicito|
|[Avviso del compilatore (livello 3) C4570](../../error-messages/compiler-warnings/compiler-warning-level-3-c4570.md)|«*tipo*': non è dichiarato in modo esplicito come abstract ma ha funzioni astratte|
|[Avviso del compilatore (livello 4) C4571](../../error-messages/compiler-warnings/compiler-warning-level-4-c4571.md)|Messaggio informativo: catch è cambiata dopo Visual C++ 7.1; le eccezioni strutturate (SEH) non vengono più rilevate|
|[Avviso del compilatore (livello 1) C4572](../../error-messages/compiler-warnings/compiler-warning-level-1-c4572.md)|Attributo [ParamArray] deprecato in /clr, utilizzare '.' In alternativa|
|Avviso del compilatore (livello 1) C4573|l'utilizzo di '*funzione lambda*' richiede il compilatore deve acquisire 'this' ma la modalità di acquisizione predefinita corrente non lo consente|
|Avviso del compilatore (livello 4) C4574|«*Identificatore*'è definito come ' 0': si intendeva usare '#if identifier'?|
|Avviso del compilatore (livello 1) C4575|vectorcall' incompatibile con il ' o clr' opzione: conversione da stdcall'|
|Avviso del compilatore (livello 1, errore) C4576|un tipo tra parentesi seguito da un elenco di inizializzatori è una sintassi di conversione di tipo esplicito non standard|
|Avviso del compilatore (livello 1, impostata su Off) C4577|'noexcept' utilizzato con nessun specificati; la modalità di gestione delle eccezioni terminazione in eccezione non è garantita. Specificare /EHsc|
|Avviso del compilatore (livello 1, errore) C4578|'abs': conversione da '*type1*'a'*type2*', perdita di dati (si intendeva chiamare '*funzione*' o a #include \<cmath >?)|
|[Avviso del compilatore (livello 3) C4580](../../error-messages/compiler-warnings/compiler-warning-level-3-c4580.md)|[attribute] è deprecato; specificare System::Attribute o Platform::Metadata come classe base|
|[Avviso del compilatore (livello 1) C4581](../../error-messages/compiler-warnings/compiler-warning-level-1-c4581.md)|comportamento deprecato: ' "*stringa*"' sostituito con '*stringa*' per elaborare l'attributo|
|Avviso del compilatore (livello 4) C4582|«*tipo*': costruttore non viene chiamato in modo implicito|
|Avviso del compilatore (livello 4) C4583|«*tipo*': un distruttore non viene chiamato in modo implicito|
|[Avviso del compilatore (livello 1) C4584](../../error-messages/compiler-warnings/compiler-warning-level-1-c4584.md)|«*class1*': classe di base*class2*'è già una classe di base di'*class3*»|
|Avviso del compilatore (livello 1, errore) C4585|«*classe*': Un WinRT 'public ref class' deve essere sealed o derivare da una classe unsealed esistente|
|Avviso del compilatore (livello 1, errore) C4586|«*tipo*': Impossibile dichiarare un tipo pubblico in un spazio dei nomi di primo livello chiamato 'Windows'|
|Avviso del compilatore (livello 1) C4587|«*anonymous_structure*': modifica del comportamento: costruttore viene chiamato non è più in modo implicito|
|Avviso del compilatore (livello 1) C4588|«*anonymous_structure*': modifica del comportamento: distruttore viene chiamato non è più in modo implicito|
|Avviso del compilatore (livello 1) C4591|limite di profondità chiamata 'constexpr' delle *numero* superato (/ /constexpr: Depth\<numero >)|
|Avviso del compilatore (livello 3) C4592|«*funzione*': la valutazione di chiamata 'constexpr' non riuscito; la funzione verrà chiamata in fase di esecuzione|
|Avviso del compilatore (livello 1) C4593|'*funzione*': limite di 'constexpr' chiamate valutazione passaggio di '*limite*' superato; usare /constexpr: Steps\<numero > per aumentare il limite|
|Avviso del compilatore (livello 3) C4594|«*tipo*': un distruttore non verrà implicitamente chiamato se viene generata un'eccezione|
|Avviso del compilatore (livello 1) C4595|«*tipo*': modifica del comportamento: distruttore non verrà non è più in modo implicito chiamato se viene generata un'eccezione|
|Avviso del compilatore (livello 4) C4596|«*identificatore*': nome completo non valido nella dichiarazione del membro|
|Avviso del compilatore C4597 (errore)|un comportamento indefinito: offsetof applicato a un membro di una base virtuale|
|Avviso del compilatore (livello 1 e livello 3) C4598|' #include "*intestazione*" ": numero dell'intestazione *numero* nell'intestazione precompilata non corrisponde la compilazione corrente in tale posizione|
|Avviso del compilatore (livello 3) C4599|'*flag* *path*': il numero di argomenti della riga di comando *numero* corrisponde intestazione precompilata|

## <a name="see-also"></a>Vedere anche

[C /C++ del compilatore e compilazione di errori e avvisi degli strumenti](../compiler-errors-1/c-cpp-build-errors.md) \
[Avvisi del compilatore da C4000 - C5999](compiler-warnings-c4000-c5999.md)
