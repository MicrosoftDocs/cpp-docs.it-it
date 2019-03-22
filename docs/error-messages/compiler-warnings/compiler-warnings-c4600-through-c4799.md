---
title: Del compilatore avvisi C4600 a C4799
ms.date: 07/03/2018
f1_keywords:
- C4609
- C4658
- C4671
- C4676
- C4689
- C4695
- C4696
- C4719
- C4720
- C4721
- C4728"
- C4732
- C4751
- C4752
- C4755
- C4757
- C4767
- C4770
helpviewer_keywords:
- C4609
- C4658
- C4671
- C4676
- C4689
- C4695
- C4696
- C4719
- C4720
- C4721
- C4728"
- C4732
- C4751
- C4752
- C4755
- C4757
- C4767
- C4770
ms.assetid: 22bd4392-f3be-445c-9f23-6126aebac901
ms.openlocfilehash: d1b1e06d3a2be71d6386554c704c547c6f2a4672
ms.sourcegitcommit: c1f646c8b72f330fa8cf5ddb0f8f261ba10d16f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2019
ms.locfileid: "58328374"
---
# <a name="compiler-warnings-c4600-through-c4799"></a>Del compilatore avvisi C4600 a C4799

Gli articoli in questa sezione della documentazione illustrano un subset dei messaggi di avviso generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="warning-messages"></a>Messaggi di avviso

|Avviso|Messaggio|
|-------------|-------------|
|[Avviso del compilatore (livello 1) C4600](../../error-messages/compiler-warnings/compiler-warning-level-1-c4600.md)|#pragma 'macro name': prevista una stringa vuota non valida|
|[Avviso del compilatore (livello 1) C4602](compiler-warning-level-1-c4602.md)|#pragma pop_macro: 'macro name' Nessuna #pragma push_macro per questo identificatore|
|[Avviso del compilatore (livello 1) C4603](compiler-warning-level-1-c4603.md)|«*identificatore*': non è definita macro o definizione è diversa dopo l'utilizzo di un'intestazione precompilata|
|Avviso del compilatore (livello 1) C4604|«*tipo*': passaggio dell'argomento per valore tra limite nativo e gestito richiede costruttore di copia valido. In caso contrario, non è definito il comportamento di runtime|
|Avviso del compilatore (livello 1) C4605|' /D*macro*' specificato nella riga di comando corrente, ma non è stato specificato quando è stata compilata intestazione precompilata|
|[Avviso del compilatore (livello 1) C4606](../../error-messages/compiler-warnings/compiler-warning-level-1-c4606.md)|avviso #pragma: 'numero di avviso' ignorato. Avvisi dell'analisi codice non sono associati livelli di avviso|
|[Avviso del compilatore (livello 3) C4608](../../error-messages/compiler-warnings/compiler-warning-level-3-c4608.md)|'union_member' è già stato inizializzato dal membro di un'altra unione nell'elenco degli inizializzatori, 'union_member'|
|Avviso del compilatore (livello 3, errore) C4609|«*type1*'deriva dall'interfaccia predefinita'*interfaccia*'nel tipo'*type2*'. Utilizzare una differente interfaccia predefinita per '*type1*', oppure interrompere la relazione base/derivata.|
|[Avviso del compilatore (livello 4) C4610](../../error-messages/compiler-warnings/compiler-warning-level-4-c4610.md)|oggetto 'class' non è mai possibile creare istanze - necessario un costruttore definito dall'utente|
|[Avviso del compilatore (livello 4) C4611](../../error-messages/compiler-warnings/compiler-warning-level-4-c4611.md)|interazione tra 'function' e l'eliminazione degli oggetti C++ non è portabile|
|[Avviso del compilatore (livello 1) C4612](compiler-warning-level-1-c4612.md)|errore nel nome del file di inclusione|
|[Avviso del compilatore (livello 1) C4613](compiler-warning-level-1-c4613.md)|«*simbolo*': Impossibile modificare la classe del segmento|
|[Avviso del compilatore (livello 1) C4615](../../error-messages/compiler-warnings/compiler-warning-level-1-c4615.md)|avviso #pragma: tipo di avviso utente sconosciuto|
|[Avviso del compilatore (livello 1) C4616](../../error-messages/compiler-warnings/compiler-warning-level-1-c4616.md)|avviso #pragma: numero di avviso 'number' non è un avviso del compilatore valido|
|[Avviso del compilatore (livello 1) C4618](../../error-messages/compiler-warnings/compiler-warning-level-1-c4618.md)|parametri di pragma comprendono una stringa vuota. pragma ignorato|
|[Avviso del compilatore (livello 3) C4619](../../error-messages/compiler-warnings/compiler-warning-level-3-c4619.md)|avviso #pragma: nessun numero di avviso '%d'|
|[Avviso del compilatore (livello 1) C4620](compiler-warning-level-1-c4620.md)|nessuna forma suffissa trovata di 'operator ++' per il tipo 'type'. Verrà utilizzata la forma prefissa|
|[Avviso del compilatore (livello 1) C4621](../../error-messages/compiler-warnings/compiler-warning-level-1-c4621.md)|Nessuna forma suffissa di 'operator': trovata per il tipo 'type', forma prefissa|
|[Avviso del compilatore (livello 3) C4622](compiler-warning-level-3-c4622.md)|sovrascrittura delle informazioni di debug generate durante la creazione dell'intestazione precompilata nel file oggetto: 'file'|
|[Avviso del compilatore (livello 4) C4623](../../error-messages/compiler-warnings/compiler-warning-level-4-c4623.md)|'derived class': costruttore predefinito è stato definito in modo implicito come eliminato perché un costruttore predefinito della classe base è inaccessibile o eliminati|
|[Avviso del compilatore (livello 1) C4624](../../error-messages/compiler-warnings/compiler-warning-level-1-c4624.md)|'derived class': un distruttore è stato definito in modo implicito come eliminato perché un distruttore della classe base è inaccessibile o eliminati|
|[Avviso del compilatore (livello 4) C4625](../../error-messages/compiler-warnings/compiler-warning-level-4-c4625.md)|'derived class': costruttore di copia è stato definito in modo implicito come eliminato perché un costruttore di copia della classe di base è inaccessibile o eliminati|
|[Avviso del compilatore (livello 4) C4626](../../error-messages/compiler-warnings/compiler-warning-level-4-c4626.md)|'derived class': operatore di assegnazione è stato definito in modo implicito come eliminato perché un operatore di assegnazione della classe di base è inaccessibile o eliminati|
|[Avviso del compilatore (livello 1) C4627](../../error-messages/compiler-warnings/compiler-warning-level-1-c4627.md)|'\<identificatore >': ignorato durante la ricerca utilizzo di intestazione precompilata|
|[Avviso del compilatore (livello 1) C4628](../../error-messages/compiler-warnings/compiler-warning-level-1-c4628.md)|digraph non supportati con -Ze. Sequenza di caratteri 'digraph' non interpretata come token alternativo per '%s'|
|[Avviso del compilatore (livello 4) C4629](compiler-warning-level-4-c4629.md)|utilizzato digraph; la sequenza di caratteri 'digraph' è stata interpretata come token 'char' (se non è corretto, inserire uno spazio tra i due caratteri)|
|[Avviso del compilatore (livello 1) C4630](../../error-messages/compiler-warnings/compiler-warning-level-1-c4630.md)|'symbol': identificatore classe di archiviazione 'extern' non valido nella definizione del membro|
|Avviso del compilatore (livello 2) C4631|MSXML o XPath non disponibile, i commenti ai documenti XML non verranno elaborati. motivo|
|[Avviso del compilatore (livello 1) C4632](../../error-messages/compiler-warnings/compiler-warning-level-1-c4632.md)|Commento al documento XML: file - accesso negato: motivo|
|[Avviso del compilatore (livello 3) C4633](../../error-messages/compiler-warnings/compiler-warning-level-3-c4633.md)|Destinazione commento documento XML: errore: motivo|
|[Avviso del compilatore (livello 4) C4634](compiler-warning-level-4-c4634.md)|Destinazione commento documento XML: Impossibile applicare: motivo|
|[Avviso del compilatore (livello 3) C4635](compiler-warning-level-3-c4635.md)|commento al documento XML di destinazione: XML in formato non valido: motivo|
|[Avviso del compilatore (livello 3) C4636](compiler-warning-level-3-c4636.md)|Commento al documento XML applicato per costruire: tag richiede l'attributo 'attribute' non è vuoto.|
|[Avviso del compilatore (livello 3 e livello 4) C4637](compiler-warning-level-3-c4637.md)|Documento XML di destinazione commento: \<includono > tag rimossi. Motivo|
|[Avviso del compilatore (livello 3) C4638](compiler-warning-level-3-c4638.md)|Documento XML di destinazione commento: riferimento al simbolo sconosciuto 'symbol'.|
|[Avviso del compilatore (livello 4) C4639](../../error-messages/compiler-warnings/compiler-warning-level-4-c4639.md)|Errore MSXML, documento XML non verranno elaborati i commenti. Motivo|
|[Avviso del compilatore (livello 3) C4640](../../error-messages/compiler-warnings/compiler-warning-level-3-c4640.md)|'istanza': la costruzione di oggetti statici locali non è thread-safe|
|[Avviso del compilatore (livello 3) C4641](../../error-messages/compiler-warnings/compiler-warning-level-3-c4641.md)|Commento al documento XML con riferimento incrociato ambiguo:|
|[Avviso del compilatore (livello 3) C4645](compiler-warning-level-3-c4645.md)|la funzione dichiarata con __declspec(noreturn) ha un'istruzione return|
|[Avviso del compilatore (livello 3) C4646](compiler-warning-level-3-c4646.md)|la funzione dichiarata con __declspec(noreturn) deve restituire un tipo non void|
|Avviso del compilatore (livello 3) C4647|modifica del comportamento: is_pod (*tipo*) ha valore diversi nelle versioni precedenti|
|Avviso del compilatore (livello 3) C4648|l'attributo standard 'carries_dependency' viene ignorato|
|Avviso del compilatore (livello 3) C4649|gli attributi vengono ignorati in questo contesto|
|[Avviso del compilatore (livello 1) C4650](../../error-messages/compiler-warnings/compiler-warning-level-1-c4650.md)|informazioni di debug non nell'intestazione precompilata. solo i simboli globali presenti l'intestazione saranno disponibili|
|[Avviso del compilatore (livello 1) C4651](../../error-messages/compiler-warnings/compiler-warning-level-1-c4651.md)|'definizione' specificato per l'intestazione precompilata ma non per la compilazione corrente|
|[Avviso del compilatore (livello 1) C4652](../../error-messages/compiler-warnings/compiler-warning-level-1-c4652.md)|opzione del compilatore 'option' non è coerente con l'intestazione precompilata. l'opzione della riga di comando corrente avrà priorità su quanto definito nell'intestazione precompilata|
|[Avviso del compilatore (livello 2) C4653](../../error-messages/compiler-warnings/compiler-warning-level-2-c4653.md)|opzione del compilatore 'option' non è coerente con l'intestazione precompilata. opzione della riga di comando corrente ignorata|
|Avviso del compilatore (livello 4) C4654|Includere codice inserito prima dell'intestazione precompilata riga verrà ignorata. Aggiungere codice all'intestazione precompilata.|
|[Avviso del compilatore (livello 1) C4655](compiler-warning-level-1-c4655.md)|'symbol': tipo di variabile nuovo rispetto all'ultima compilazione o definito diversamente altrove|
|[Avviso del compilatore (livello 1) C4656](../../error-messages/compiler-warnings/compiler-warning-level-1-c4656.md)|'symbol': tipo di dati nuovo o è stato modificato rispetto all'ultima compilazione o definito diversamente altrove|
|[Avviso del compilatore (livello 1) C4657](compiler-warning-level-1-c4657.md)|l'espressione utilizza un tipo di dati che rappresenta una novità rispetto all'ultima compilazione|
|Avviso del compilatore (livello 1) C4658|'function': prototipo di funzione nuovo rispetto all'ultima compilazione o dichiarato diversamente altrove|
|[Avviso del compilatore (livello 1) C4659](../../error-messages/compiler-warnings/compiler-warning-level-1-c4659.md)|#pragma 'pragma': utilizzo del segmento riservato 'segment' ha un comportamento non definito, è necessario utilizzare #pragma comment (linker,...)|
|[Avviso del compilatore (livello 1) C4661](../../error-messages/compiler-warnings/compiler-warning-level-1-c4661.md)|'identifier': nessuna definizione adatta fornita per la richiesta di creazione di un'istanza di modello espliciti|
|[Avviso del compilatore (livello 1) C4662](compiler-warning-level-1-c4662.md)|creazione di un'istanza esplicita. La classe modello 'identifier1' non ha definizioni da cui specializzare 'identifier2'|
|[Avviso del compilatore (livello 1) C4667](../../error-messages/compiler-warnings/compiler-warning-level-1-c4667.md)|'function': Nessun modello di funzione definito corrisponde alla creazione di istanza forzata|
|[Avviso del compilatore (livello 4) C4668](../../error-messages/compiler-warnings/compiler-warning-level-4-c4668.md)|'symbol' non è definito come una macro del preprocessore. sostituzione con '0' per 'directive'|
|[Avviso del compilatore (livello 1) C4669](../../error-messages/compiler-warnings/compiler-warning-level-1-c4669.md)|'cast': conversione non affidabile: 'class' è un oggetto di tipo gestito|
|[Avviso del compilatore (livello 4) C4670](compiler-warning-level-4-c4670.md)|'identifier': questa classe di base è inaccessibile|
|Avviso del compilatore (livello 4) C4671|'identifier': il costruttore di copia non è accessibile|
|[Avviso del compilatore (livello 4) C4672](compiler-warning-level-4-c4672.md)|'identifier1': ambiguo. Precedentemente visto come 'identifier2'|
|[Avviso del compilatore (livello 4) C4673](../../error-messages/compiler-warnings/compiler-warning-level-4-c4673.md)|generare i tipi seguenti di 'identifier' non verrà considerata sito di rilevamento|
|[Avviso del compilatore (livello 1) C4674](compiler-warning-level-1-c4674.md)|'method' deve essere dichiarato 'static' e avere esattamente un parametro|
|Avviso del compilatore (livello 4) C4676|'%s'': il distruttore è inaccessibile|
|[Avviso del compilatore (livello 1) C4677](../../error-messages/compiler-warnings/compiler-warning-level-1-c4677.md)|'function': firma del membro non privato contiene il tipo privato dell'assembly 'tipo_privato'|
|[Avviso del compilatore (livello 1) C4678](compiler-warning-level-1-c4678.md)|classe base 'base_type' meno accessibile di 'derived_type'|
|[Avviso del compilatore (livello 1) C4679](../../error-messages/compiler-warnings/compiler-warning-level-1-c4679.md)|'member': Impossibile importare il membro|
|[Avviso del compilatore (livello 4) C4680](../../error-messages/compiler-warnings/compiler-warning-level-4-c4680.md)|'class': la coclasse non specifica un'interfaccia predefinita|
|[Avviso del compilatore (livello 4) C4681](compiler-warning-level-4-c4681.md)|'class': la coclasse non specifica un'interfaccia predefinita che è un'origine evento|
|[Avviso del compilatore (livello 4) C4682](compiler-warning-level-4-c4682.md)|'parameter': nessun attributo di parametro direzionali specificato, verrà utilizzato [in]|
|[Avviso del compilatore (livello 1) C4683](../../error-messages/compiler-warnings/compiler-warning-level-1-c4683.md)|'function': origine evento è un 'out'-parametro. Prestare attenzione nello stabilire associazioni a più gestori eventi|
|[Avviso del compilatore (livello 1) C4684](../../error-messages/compiler-warnings/compiler-warning-level-1-c4684.md)|'attribute': AVVISO IMPORTANTE! attributo può comportare la generazione di codice non valido: utilizzare con cautela|
|[Avviso del compilatore (livello 1) C4685](compiler-warning-level-1-c4685.md)|previsto '> >', trovato '>>' durante l'analisi dei parametri di modello|
|[Avviso del compilatore (livello 3) C4686](../../error-messages/compiler-warnings/compiler-warning-level-3-c4686.md)|'tipo-definito dall'utente': possibile modifica del comportamento. Modifica nella convenzione di chiamata per il valore restituito del tipo definito dall'utente.|
|[Avviso (errore) del compilatore C4687](../../error-messages/compiler-warnings/compiler-warning-c4687.md)|'class': una classe astratta sealed non può implementare un'interfaccia 'interface'|
|[Avviso del compilatore (livello 1) C4688](../../error-messages/compiler-warnings/compiler-warning-level-1-c4688.md)|'constraint': l'elenco di vincoli contiene il tipo privato 'type' dell'assembly|
|Avviso del compilatore (livello 1) C4689|'%c'': carattere in detect_mismatch #pragma; non supportato #pragma ignorato|
|[Avviso del compilatore (livello 4) C4690](../../error-messages/compiler-warnings/compiler-warning-level-4-c4690.md)|\[ emitidl (pop)]: più estrazioni che inserimenti|
|[Avviso del compilatore (livello 1) C4691](../../error-messages/compiler-warnings/compiler-warning-level-1-c4691.md)|'type': tipo di riferimento previsto nell'assembly privo di riferimento 'file', tipo definito in unità di conversione corrente utilizzato|
|[Avviso del compilatore (livello 1) C4692](../../error-messages/compiler-warnings/compiler-warning-level-1-c4692.md)|'funzione': la firma del membro non privato contiene il tipo nativo privato 'tipo_nativo' dell'assembly|
|[Avviso del compilatore (livello 1, errore) C4693](../../error-messages/compiler-warnings/compiler-warning-c4693.md)|'class': una classe astratta sealed non può avere qualsiasi istanza membri 'istanza member'|
|[Avviso del compilatore (livello 1, errore) C4694](../../error-messages/compiler-warnings/compiler-warning-c4694.md)|'class': una classe astratta sealed non può avere una classe di base 'base_class'|
|Avviso del compilatore (livello 1) C4695|#pragma execution_character_set: 'set di caratteri' non è un argomento supportato: è supportata attualmente solo 'UTF-8'|
|Avviso del compilatore (livello 1) C4696|/ Opzione ZBvalue1 compreso nell'intervallo; Supponendo che 'valore2'|
|[Avviso del compilatore (livello 1 e livello 4) C4700](../../error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4700.md)|variabile locale non inizializzata 'nome' utilizzato|
|[Avviso del compilatore (livello 4) C4701](../../error-messages/compiler-warnings/compiler-warning-level-4-c4701.md)|variabile locale potenzialmente non inizializzata 'nome' utilizzato|
|[Avviso del compilatore (livello 4) C4702](../../error-messages/compiler-warnings/compiler-warning-level-4-c4702.md)|codice non eseguibile|
|[Avviso del compilatore (livello 4) C4703](../../error-messages/compiler-warnings/compiler-warning-level-4-c4703.md)|variabile puntatore locale potenzialmente non inizializzata '%[NULL] s'è utilizzato|
|[Avviso del compilatore (livello 4) C4706](../../error-messages/compiler-warnings/compiler-warning-level-4-c4706.md)|assegnazione all'interno di espressione condizionale|
|[Avviso del compilatore (livello 4) C4709](../../error-messages/compiler-warnings/compiler-warning-level-4-c4709.md)|operatore virgola all'interno di espressione di indice di matrice|
|[Avviso del compilatore (livello 4) C4710](../../error-messages/compiler-warnings/compiler-warning-level-4-c4710.md)|'funzione': funzione non resa inline|
|[Avviso del compilatore (livello 1) C4711](../../error-messages/compiler-warnings/compiler-warning-level-1-c4711.md)|funzione 'funzione' selezionata per l'espansione inline automatica|
|[Avviso del compilatore (livello 4) C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md)|funzione 'funzione' contrassegnata come forceinline non resa inline|
|[Avviso del compilatore (livello 1) C4715](../../error-messages/compiler-warnings/compiler-warning-level-1-c4715.md)|'function': non tutti i percorsi di controllo restituiscono un valore|
|[Del compilatore Warning (level 1, errore) C4716](../../error-messages/compiler-warnings/compiler-warning-level-1-c4716.md)|'function': deve restituire un valore|
|[Avviso del compilatore (livello 1) C4717](../../error-messages/compiler-warnings/compiler-warning-level-1-c4717.md)|'function': funzione ricorsiva su tutti i percorsi di controlli, provocherà un overflow dello stack di runtime|
|[Avviso del compilatore (livello 4) C4718](compiler-warning-level-4-c4718.md)|'function call': chiamata ricorsiva non ha effetti collaterali, l'eliminazione|
|Avviso del compilatore (livello 1) C4719|Trovata con Qfast specificato. utilizzare 'f' come suffisso per indicare con precisione singola e costante double|
|Avviso del compilatore (livello 2) C4720|rapporto assembler inline: 'message'|
|Avviso del compilatore (livello 1) C4721|'function': non disponibile come intrinseco|
|[Avviso del compilatore (livello 1) C4722](compiler-warning-level-1-c4722.md)|'function': il distruttore non restituisce mai un valore, potenziale perdita di memoria|
|[Avviso del compilatore (livello 3) C4723](../../error-messages/compiler-warnings/compiler-warning-level-3-c4723.md)|possibile divisione per 0|
|[Avviso del compilatore (livello 3) C4724](compiler-warning-level-3-c4724.md)|possibile mod per 0|
|Avviso del compilatore (livello 3) C4725|l'istruzione potrebbe non risultare corretta per alcuni Pentium|
|[Avviso del compilatore (livello 1) C4727](../../error-messages/compiler-warnings/compiler-warning-level-1-c4727.md)|PCH denominato file_pch con lo stesso timestamp trovato in file_obj_1 e file_obj_2.  Tramite il primo PCH.|
|Avviso del compilatore (livello 1) C4728|Opzione /Yl-ignorata perché il riferimento PCH è obbligatorio|
|Avviso del compilatore (livello 4) C4729|funzione troppo grande per avvisi basati su grafico del flusso|
|[Compilatore avviso (livello 1) C4730](../../error-messages/compiler-warnings/compiler-warning-level-1-c4730.md)avviso del compilatore (livello 1) C4730|'main': miste _m64 e a virgola mobile le espressioni possono generare codice non corretto|
|[Avviso del compilatore (livello 1) C4731](../../error-messages/compiler-warnings/compiler-warning-level-1-c4731.md)|'pointer': registro dei puntatori 'register' modificato da codice assembly inline dei frame|
|Avviso del compilatore (livello 1) C4732|funzione intrinseca '%s'' non è supportata in questa architettura|
|[Avviso del compilatore (livello 1) C4733](../../error-messages/compiler-warnings/compiler-warning-level-1-c4733.md)|Assegnazione dell'assembly inline a 'FS:0': gestore non registrato come sicuro|
|[Avviso del compilatore (livello 3) C4738](../../error-messages/compiler-warnings/compiler-warning-level-3-c4738.md)|archiviazione in memoria del risultato float a 32 bit, possibile riduzione delle prestazioni|
|[Avviso del compilatore (livello 1) C4739](compiler-warning-level-1-c4739.md)|il riferimento alla variabile 'var' supera lo spazio di archiviazione|
|[Avviso del compilatore (livello 4) C4740](../../error-messages/compiler-warnings/compiler-warning-level-4-c4740.md)|flusso interno o all'esterno di codice dell'assembly inline impedisce l'ottimizzazione globale|
|[Avviso del compilatore (livello 1) C4742](../../error-messages/compiler-warnings/compiler-warning-level-1-c4742.md)|'var' ha un diverso allineamento in "file1" e "file2": numero e il numero|
|[Avviso del compilatore (livello 1) C4743](../../error-messages/compiler-warnings/compiler-warning-level-1-c4743.md)|'type' ha una diversa dimensione in "file1" e "file2": numero e il numero di byte|
|[Avviso del compilatore (livello 1) C4744](../../error-messages/compiler-warnings/compiler-warning-level-1-c4744.md)|'var' ha un tipo diverso in "file1" e "file2": 'type1' e 'type2'|
|[Avviso del compilatore C4746](../../error-messages/compiler-warnings/compiler-warning-c4746.md)|accesso volatile di '*espressione*' è soggetto a /volatile:\<iso&#124;ms > configurazione; è consigliabile usare le funzioni intrinseche iso_volatile_load/store|
|[Avviso del compilatore (livello 1) C4747](../../error-messages/compiler-warnings/compiler-warning-level-1-c4747.md)|Chiamare il metodo gestito 'punto di ingresso': Codice gestito potrebbe non essere eseguito in blocco del caricatore, inclusi il punto di ingresso DLL e le chiamate raggiunte dal punto di ingresso DLL|
|Avviso del compilatore (livello 4) C4749|supporto condizionale: offsetof applicato al tipo di layout non standard '*tipo*'|
|[Avviso del compilatore (livello 1) C4750](compiler-warning-level-1-c4750.md)|'identifier': funzione con _alloca() resa inline in un ciclo|
|Avviso del compilatore (livello 4) C4751|/arch: AVX non si applica a Intel (r) Streaming SIMD Extensions nell'assembly inline|
|Avviso del compilatore (livello 4) C4752|trovato Intel (r) Advanced Vector Extensions; è consigliabile usare /arch: AVX|
|[Avviso del compilatore (livello 4) C4754](compiler-warning-level-4-c4754.md)|Le regole di conversione per operazioni aritmetiche nel confronto in DISATTESA indicano che un ramo non può essere eseguito. Eseguire il cast di '%s'' a '%s'' (o un tipo simile %d byte).|
|Genera un avviso C4755|Le regole di conversione per operazioni aritmetiche nel confronto in DISATTESA indicano che un ramo non può essere eseguito in una funzione inline. Eseguire il cast di '%s'' a '%s'' (o un tipo simile %d byte).|
|[Avviso del compilatore (livello 2) C4756](../../error-messages/compiler-warnings/compiler-warning-level-2-c4756.md)|overflow durante operazioni aritmetiche su costanti|
|Avviso del compilatore (livello 4) C4757|indice è un grande valore senza segno, si desiderava una costante negativa?|
|[Avviso del compilatore (livello 4) C4764](compiler-warning-level-4-c4764.md)|Può non allineare oggetti catch a maggiore di 16 byte|
|Avviso del compilatore (livello 4) C4767|nome della sezione '%s'' è superiore a 8 caratteri e verrà troncata dal linker|
|Avviso del compilatore (livello 3) C4768|gli attributi declspec prima della specifica di collegamento vengono ignorati|
|Genera un avviso C4770|l'enumerazione convalidata parzialmente '*nome*' utilizzata come indice|
|Genera un avviso C4771|Limiti devono essere creati usando un puntatore semplice. Funzione intrinseca MPX verrà ignorata|
|[Del compilatore Warning (level 1, errore) C4772](../../error-messages/compiler-warnings/compiler-warning-level-1-c4772.md)|#import fatto riferimento a un tipo da una libreria dei tipi mancanti; 'tipo_mancante' come segnaposto|
|Avviso del compilatore (livello 4) C4774|«*stringa*': prevista nell'argomento stringa di formato *numero* non è una stringa letterale|
|Avviso del compilatore (livello 3) C4775|utilizzata estensione non standard nella stringa di formato '*stringa*'della funzione'*funzione*'|
|Avviso del compilatore (livello 1) C4776|' %*carattere*'non è consentita nella stringa di formato della funzione'*funzione*'|
|Avviso del compilatore (livello 4) C4777|'*funzione*': stringa di formato '*stringa*'richiede un argomento di tipo'*type1*', ma l'argomento variadic *numero* ha tipo '*type2*'|
|Avviso del compilatore (livello 3) C4778|«*funzione*': non ha terminazione stringa di formato '*stringa*»|
|[Avviso del compilatore (livello 1) C4788](../../error-messages/compiler-warnings/compiler-warning-level-1-c4788.md)|'identifier': identificatore troncato a 'number' caratteri|
|[Avviso del compilatore (livello 1) C4789](../../error-messages/compiler-warnings/compiler-warning-level-1-c4789.md)|verrà eseguito l'overrun del buffer 'identifier' di dimensioni pari a N byte; M byte verranno scritti a partire dall'offset L|
|Avviso del compilatore (livello 2) C4792|la funzione '%s'' dichiarata utilizzando sysimport e fare riferimento dal codice nativo; richiesto collegamento alla libreria di importazione|
|[Avviso del compilatore (livello 1 e 3) C4793](../../error-messages/compiler-warnings/compiler-warning-level-1-and-3-c4793.md)|'function': funzione compilata come nativa: \n\t'reason'|
|[Avviso del compilatore (livello 1) C4794](compiler-warning-level-1-c4794.md)|segmento della risorsa di archiviazione locale di thread variabile '%s' modificato da '%[NULL] s'a '%s'|
|[Avviso del compilatore (livello 1) C4799](../../error-messages/compiler-warnings/compiler-warning-level-1-c4799.md)|funzione 'function' non è contiene istruzioni EMMS|