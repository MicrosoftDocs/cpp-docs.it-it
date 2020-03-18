---
title: Avvisi del compilatore da C4600 a C4799
ms.date: 04/21/2019
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
- C4728
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
- C4728
- C4732
- C4751
- C4752
- C4755
- C4757
- C4767
- C4770
ms.assetid: 22bd4392-f3be-445c-9f23-6126aebac901
ms.openlocfilehash: 638af32b27f8d66086f3a39b74ecd46fdbb4649d
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79438177"
---
# <a name="compiler-warnings-c4600-through-c4799"></a>Avvisi del compilatore da C4600 a C4799

Negli articoli di questa sezione della documentazione viene illustrato un subset dei messaggi di avviso generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="warning-messages"></a>Messaggi di avviso

|Avviso|Message|
|-------------|-------------|
|[Avviso del compilatore (livello 1) C4600](../../error-messages/compiler-warnings/compiler-warning-level-1-c4600.md)|#pragma ' nome macro ': prevista una stringa non vuota valida|
|[Avviso del compilatore (livello 1) C4602](compiler-warning-level-1-c4602.md)|#pragma pop_macro:' nome macro ' nessun push_macro #pragma precedente per questo identificatore|
|[Avviso del compilatore (livello 1) C4603](compiler-warning-level-1-c4603.md)|'*Identifier*': la macro non è definita o la definizione è diversa dopo l'uso dell'intestazione precompilata|
|Avviso del compilatore (livello 1) C4604|'*Type*': il passaggio di un argomento per valore tra i confini nativi e gestiti richiede un costruttore di copia valido. In caso contrario, il comportamento di runtime non è definito|
|Avviso del compilatore (livello 1) C4605|'/D*macro*' specificato nella riga di comando corrente, ma non è stato specificato quando è stata compilata l'intestazione precompilata|
|[Avviso del compilatore (livello 1) C4606](../../error-messages/compiler-warnings/compiler-warning-level-1-c4606.md)|avviso #pragma:' numero di avviso ' ignorato; Gli avvisi di analisi del codice non sono associati ai livelli di avviso|
|[Avviso del compilatore (livello 3) C4608](../../error-messages/compiler-warnings/compiler-warning-level-3-c4608.md)|'union_member' è già stato inizializzato dal membro di un'altra unione nell'elenco degli inizializzatori, 'union_member'|
|Avviso del compilatore (livello 3, errore) C4609|"*tipo1*" deriva dall'interfaccia predefinita "*Interface*" sul tipo "*tipo2*". Utilizzare un'interfaccia predefinita diversa per '*tipo1*' o interrompere la relazione di base/derivata.|
|[Avviso del compilatore (livello 4) C4610](../../error-messages/compiler-warnings/compiler-warning-level-4-c4610.md)|non è possibile creare un'istanza dell'oggetto ' Class ': il costruttore definito dall'utente è obbligatorio|
|[Avviso del compilatore (livello 4) C4611](../../error-messages/compiler-warnings/compiler-warning-level-4-c4611.md)|l'interazione tra' Function ' C++ e la distruzione di oggetti non è portabile|
|[Avviso del compilatore (livello 1) C4612](compiler-warning-level-1-c4612.md)|errore nel nome del file di inclusione|
|[Avviso del compilatore (livello 1) C4613](compiler-warning-level-1-c4613.md)|'*Symbol*': Impossibile modificare la classe del segmento|
|[Avviso del compilatore (livello 1) C4615](../../error-messages/compiler-warnings/compiler-warning-level-1-c4615.md)|avviso #pragma: tipo di avviso utente sconosciuto|
|[Avviso del compilatore (livello 1) C4616](../../error-messages/compiler-warnings/compiler-warning-level-1-c4616.md)|avviso #pragma: il numero di avviso ' numerò non è un avviso del compilatore valido|
|[Avviso del compilatore (livello 1) C4618](../../error-messages/compiler-warnings/compiler-warning-level-1-c4618.md)|i parametri pragma includono una stringa vuota. Pragma ignorato|
|[Avviso del compilatore (livello 3) C4619](../../error-messages/compiler-warnings/compiler-warning-level-3-c4619.md)|avviso #pragma: nessun numero di avviso '%d'|
|[Avviso del compilatore (livello 1) C4620](compiler-warning-level-1-c4620.md)|nessuna forma suffissa trovata di 'operator ++' per il tipo 'type'. Verrà utilizzata la forma prefissa|
|[Avviso del compilatore (livello 1) C4621](../../error-messages/compiler-warnings/compiler-warning-level-1-c4621.md)|non è stata trovata alcuna forma suffissa di ' operator--' per il tipo ' type ', usando il formato prefisso|
|[Avviso del compilatore (livello 3) C4622](compiler-warning-level-3-c4622.md)|sovrascrittura delle informazioni di debug generate durante la creazione dell'intestazione precompilata nel file oggetto:' file '|
|[Avviso del compilatore (livello 4) C4623](../../error-messages/compiler-warnings/compiler-warning-level-4-c4623.md)|' Derived Class ': il costruttore predefinito è stato definito in modo implicito come eliminato perché un costruttore predefinito della classe di base non è accessibile o è stato eliminato|
|[Avviso del compilatore (livello 1) C4624](../../error-messages/compiler-warnings/compiler-warning-level-1-c4624.md)|' Derived Class ': il distruttore è stato definito in modo implicito come eliminato perché un distruttore della classe base non è accessibile o è stato eliminato|
|[Avviso del compilatore (livello 4) C4625](../../error-messages/compiler-warnings/compiler-warning-level-4-c4625.md)|' Derived Class ': il costruttore di copia è stato definito in modo implicito come eliminato perché un costruttore di copia della classe base non è accessibile o è stato eliminato|
|[Avviso del compilatore (livello 4) C4626](../../error-messages/compiler-warnings/compiler-warning-level-4-c4626.md)|' Derived Class ': l'operatore di assegnazione è stato definito in modo implicito come eliminato perché un operatore di assegnazione della classe base è inaccessibile o è stato eliminato|
|[Avviso del compilatore (livello 1) C4627](../../error-messages/compiler-warnings/compiler-warning-level-1-c4627.md)|'\<Identifier >': ignorato durante la ricerca dell'utilizzo di intestazioni precompilate|
|[Avviso del compilatore (livello 1) C4628](../../error-messages/compiler-warnings/compiler-warning-level-1-c4628.md)|digraph non supportati con -Ze. Sequenza di caratteri ' digraph ' non interpretata come token alternativo per '% s'|
|[Avviso del compilatore (livello 4) C4629](compiler-warning-level-4-c4629.md)|utilizzato digraph; la sequenza di caratteri 'digraph' è stata interpretata come token 'char' (se non è corretto, inserire uno spazio tra i due caratteri)|
|[Avviso del compilatore (livello 1) C4630](../../error-messages/compiler-warnings/compiler-warning-level-1-c4630.md)|' symbol ': identificatore classe di archiviazione ' extern ' non valido nella definizione del membro|
|Avviso del compilatore (livello 2) C4631|MSXML o XPath non disponibile, i commenti ai documenti XML non verranno elaborati. reason|
|[Avviso del compilatore (livello 1) C4632](../../error-messages/compiler-warnings/compiler-warning-level-1-c4632.md)|Commento al documento XML: accesso al file negato: motivo|
|[Avviso del compilatore (livello 3) C4633](../../error-messages/compiler-warnings/compiler-warning-level-3-c4633.md)|Destinazione commento documento XML: errore: motivo|
|[Avviso del compilatore (livello 4) C4634](compiler-warning-level-4-c4634.md)|Destinazione commento al documento XML: Impossibile applicare: motivo|
|[Avviso del compilatore (livello 3) C4635](compiler-warning-level-3-c4635.md)|commento al documento XML di destinazione: XML in formato non valido: motivo|
|[Avviso del compilatore (livello 3) C4636](compiler-warning-level-3-c4636.md)|Commento al documento XML applicato al costrutto: il tag richiede un attributo ' attribute ' non vuoto.|
|[Avviso del compilatore (livello 3 e livello 4) C4637](compiler-warning-level-3-c4637.md)|Destinazione commento al documento XML: \<includere tag > eliminati. Motivo|
|[Avviso del compilatore (livello 3) C4638](compiler-warning-level-3-c4638.md)|Destinazione commento documento XML: riferimento al simbolo sconosciuto ' symbol '.|
|[Avviso del compilatore (livello 4) C4639](../../error-messages/compiler-warnings/compiler-warning-level-4-c4639.md)|Errore MSXML, i commenti ai documenti XML non verranno elaborati. Motivo|
|[Avviso del compilatore (livello 3) C4640](../../error-messages/compiler-warnings/compiler-warning-level-3-c4640.md)|'istanza': la costruzione di oggetti statici locali non è thread-safe|
|[Avviso del compilatore (livello 3) C4641](../../error-messages/compiler-warnings/compiler-warning-level-3-c4641.md)|Il commento al documento XML presenta un riferimento incrociato ambiguo:|
|[Avviso del compilatore (livello 3) C4645](compiler-warning-level-3-c4645.md)|la funzione dichiarata con __declspec(noreturn) ha un'istruzione return|
|[Avviso del compilatore (livello 3) C4646](compiler-warning-level-3-c4646.md)|la funzione dichiarata con __declspec(noreturn) deve restituire un tipo non void|
|Avviso del compilatore (livello 3) C4647|modifica del comportamento: __is_pod (*tipo*) ha un valore diverso nelle versioni precedenti|
|Avviso del compilatore (livello 3) C4648|l'attributo standard ' carries_dependency ' viene ignorato|
|Avviso del compilatore (livello 3) C4649|gli attributi vengono ignorati in questo contesto|
|[Avviso del compilatore (livello 1) C4650](../../error-messages/compiler-warnings/compiler-warning-level-1-c4650.md)|informazioni di debug non presenti nell'intestazione precompilata; saranno disponibili solo i simboli globali dell'intestazione|
|[Avviso del compilatore (livello 1) C4651](../../error-messages/compiler-warnings/compiler-warning-level-1-c4651.md)|' Definition ' specificato per l'intestazione precompilata ma non per la compilazione corrente|
|[Avviso del compilatore (livello 1) C4652](../../error-messages/compiler-warnings/compiler-warning-level-1-c4652.md)|opzione del compilatore ' Option ' non coerente con l'intestazione precompilata; l'opzione della riga di comando corrente eseguirà l'override di quella definita nell'intestazione precompilata|
|[Avviso del compilatore (livello 2) C4653](../../error-messages/compiler-warnings/compiler-warning-level-2-c4653.md)|opzione del compilatore ' Option ' non coerente con l'intestazione precompilata; opzione della riga di comando corrente ignorata|
|Avviso del compilatore (livello 4) C4654|Il codice inserito prima dell'inclusione della riga di intestazione precompilata verrà ignorato. Aggiungere codice all'intestazione precompilata.|
|[Avviso del compilatore (livello 1) C4655](compiler-warning-level-1-c4655.md)|' symbol ': tipo di variabile nuovo rispetto all'ultima compilazione o definito diversamente altrove|
|[Avviso del compilatore (livello 1) C4656](../../error-messages/compiler-warnings/compiler-warning-level-1-c4656.md)|' symbol ': il tipo di dati è nuovo o è stato modificato rispetto all'ultima compilazione oppure è definito diversamente altrove|
|[Avviso del compilatore (livello 1) C4657](compiler-warning-level-1-c4657.md)|l'espressione include un tipo di dati nuovo rispetto alla build più recente|
|Avviso del compilatore (livello 1) C4658|' Function ': prototipo di funzione nuovo rispetto all'ultima compilazione o dichiarato diversamente altrove|
|[Avviso del compilatore (livello 1) C4659](../../error-messages/compiler-warnings/compiler-warning-level-1-c4659.md)|#pragma ' pragma ': l'uso del segmento riservato ' segment ' presenta un comportamento non definito. usare #pragma comment (linker,...)|
|[Avviso del compilatore (livello 1) C4661](../../error-messages/compiler-warnings/compiler-warning-level-1-c4661.md)|' Identifier ': nessuna definizione adatta fornita per la richiesta di creazione di istanze del modello esplicita|
|[Avviso del compilatore (livello 1) C4662](compiler-warning-level-1-c4662.md)|creazione di un'istanza esplicita. La classe modello 'identifier1' non ha definizioni da cui specializzare 'identifier2'|
|[Avviso del compilatore (livello 1) C4667](../../error-messages/compiler-warnings/compiler-warning-level-1-c4667.md)|' Function ': nessun modello di funzione definito che corrisponde alla creazione di istanza forzata|
|[Avviso del compilatore (livello 4) C4668](../../error-messages/compiler-warnings/compiler-warning-level-4-c4668.md)|' symbol ' non è definito come macro del preprocessore, sostituendo con ' 0' per ' Directive '|
|[Avviso del compilatore (livello 1) C4669](../../error-messages/compiler-warnings/compiler-warning-level-1-c4669.md)|' cast ': conversione non affidabile:' Class ' è un oggetto di tipo gestito|
|[Avviso del compilatore (livello 4) C4670](compiler-warning-level-4-c4670.md)|' Identifier ': questa classe di base è inaccessibile|
|Avviso del compilatore (livello 4) C4671|' Identifier ': il costruttore di copia è inaccessibile|
|[Avviso del compilatore (livello 4) C4672](compiler-warning-level-4-c4672.md)|' identificatore1': ambiguo. Precedentemente visto come 'identifier2'|
|[Avviso del compilatore (livello 4) C4673](../../error-messages/compiler-warnings/compiler-warning-level-4-c4673.md)|generando ' Identifier ' i tipi seguenti non verranno considerati nel sito catch|
|[Avviso del compilatore (livello 1) C4674](compiler-warning-level-1-c4674.md)|'method' deve essere dichiarato 'static' e avere esattamente un parametro|
|Avviso del compilatore (livello 4) C4676|'% s': il distruttore è inaccessibile|
|[Avviso del compilatore (livello 1) C4677](../../error-messages/compiler-warnings/compiler-warning-level-1-c4677.md)|' Function ': la firma del membro non privato contiene il tipo privato ' private_type ' dell'assembly|
|[Avviso del compilatore (livello 1) C4678](compiler-warning-level-1-c4678.md)|classe base 'base_type' meno accessibile di 'derived_type'|
|[Avviso del compilatore (livello 1) C4679](../../error-messages/compiler-warnings/compiler-warning-level-1-c4679.md)|' member ': Impossibile importare il membro|
|[Avviso del compilatore (livello 4) C4680](../../error-messages/compiler-warnings/compiler-warning-level-4-c4680.md)|' Class ': la coclasse non specifica un'interfaccia predefinita|
|[Avviso del compilatore (livello 4) C4681](compiler-warning-level-4-c4681.md)|' Class ': la coclasse non specifica un'interfaccia predefinita che è un'origine evento|
|[Avviso del compilatore (livello 4) C4682](compiler-warning-level-4-c4682.md)|' parameter ': nessun attributo di parametro direzionale specificato. il valore predefinito è [in]|
|[Avviso del compilatore (livello 1) C4683](../../error-messages/compiler-warnings/compiler-warning-level-1-c4683.md)|' Function ': l'origine evento ha un parametro ' out''; prestare attenzione durante l'associazione di più gestori di eventi|
|[Avviso del compilatore (livello 1) C4684](../../error-messages/compiler-warnings/compiler-warning-level-1-c4684.md)|' attribute ': avviso. l'attributo può causare la generazione di codice non valido: usare con cautela|
|[Avviso del compilatore (livello 1) C4685](compiler-warning-level-1-c4685.md)|previsto '> >', trovato '>>' durante l'analisi dei parametri di modello|
|[Avviso del compilatore (livello 3) C4686](../../error-messages/compiler-warnings/compiler-warning-level-3-c4686.md)|'tipo-definito dall'utente': possibile modifica del comportamento. Modifica nella convenzione di chiamata per il valore restituito del tipo definito dall'utente.|
|[Avviso del compilatore (errore) C4687](../../error-messages/compiler-warnings/compiler-warning-c4687.md)|' Class ': una classe astratta sealed non può implementare un'interfaccia ' Interface '|
|[Avviso del compilatore (livello 1) C4688](../../error-messages/compiler-warnings/compiler-warning-level-1-c4688.md)|'constraint': l'elenco di vincoli contiene il tipo privato 'type' dell'assembly|
|Avviso del compilatore (livello 1) C4689|'% c': carattere non supportato in #pragma detect_mismatch; #pragma ignorato|
|[Avviso del compilatore (livello 4) C4690](../../error-messages/compiler-warnings/compiler-warning-level-4-c4690.md)|\[ emitidl (pop)]: più estrazioni che push|
|[Avviso del compilatore (livello 1) C4691](../../error-messages/compiler-warnings/compiler-warning-level-1-c4691.md)|' type ': previsto tipo a cui si fa riferimento nell'assembly senza riferimenti ' file ', tipo definito nell'unità di conversione corrente utilizzata|
|[Avviso del compilatore (livello 1) C4692](../../error-messages/compiler-warnings/compiler-warning-level-1-c4692.md)|'funzione': la firma del membro non privato contiene il tipo nativo privato 'tipo_nativo' dell'assembly|
|[Avviso del compilatore (livello 1, errore) C4693](../../error-messages/compiler-warnings/compiler-warning-c4693.md)|' Class ': una classe astratta sealed non può avere membri di istanza ' instance Member '|
|[Avviso del compilatore (livello 1, errore) C4694](../../error-messages/compiler-warnings/compiler-warning-c4694.md)|' Class ': una classe astratta sealed non può avere una classe base ' base_class '|
|Avviso del compilatore (livello 1) C4695|#pragma execution_character_set:' set di caratteri ' non è un argomento supportato. attualmente è supportato solo ' UTF-8'|
|Avviso del compilatore (livello 1) C4696|Opzione/ZBvalue1 non compresa nell'intervallo; presumendo ' value2'|
|[Avviso del compilatore (livello 1 e livello 4) C4700](../../error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4700.md)|utilizzata variabile locale ' name ' non inizializzata|
|[Avviso del compilatore (livello 4) C4701](../../error-messages/compiler-warnings/compiler-warning-level-4-c4701.md)|è stata usata la variabile locale ' name ' potenzialmente non inizializzata|
|[Avviso del compilatore (livello 4) C4702](../../error-messages/compiler-warnings/compiler-warning-level-4-c4702.md)|codice non eseguibile|
|[Avviso del compilatore (livello 4) C4703](../../error-messages/compiler-warnings/compiler-warning-level-4-c4703.md)|è stata usata la variabile puntatore locale '% s'potenzialmente non inizializzata|
|[Avviso del compilatore (livello 4) C4706](../../error-messages/compiler-warnings/compiler-warning-level-4-c4706.md)|assegnazione all'interno di un'espressione condizionale|
|[Avviso del compilatore (livello 4) C4709](../../error-messages/compiler-warnings/compiler-warning-level-4-c4709.md)|operatore virgola all'interno dell'espressione dell'indice della matrice|
|[Avviso del compilatore (livello 4) C4710](../../error-messages/compiler-warnings/compiler-warning-level-4-c4710.md)|'funzione': funzione non resa inline|
|[Avviso del compilatore (livello 1) C4711](../../error-messages/compiler-warnings/compiler-warning-level-1-c4711.md)|funzione ' Function ' selezionata per l'espansione inline automatica|
|[Avviso del compilatore (livello 4) C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md)|funzione ' Function ' contrassegnata come __forceinline non impostata come inline|
|[Avviso del compilatore (livello 1) C4715](../../error-messages/compiler-warnings/compiler-warning-level-1-c4715.md)|' Function ': non tutti i percorsi di controllo restituiscono un valore|
|[Avviso del compilatore (livello 1, errore) C4716](../../error-messages/compiler-warnings/compiler-warning-level-1-c4716.md)|' Function ': deve restituire un valore|
|[Avviso del compilatore (livello 1) C4717](../../error-messages/compiler-warnings/compiler-warning-level-1-c4717.md)|' Function ': ricorsivo su tutti i percorsi di controllo. la funzione provocherà un overflow dello stack di runtime|
|[Avviso del compilatore (livello 4) C4718](compiler-warning-level-4-c4718.md)|' Function Call ': la chiamata ricorsiva non ha effetti collaterali, eliminazione|
|Avviso del compilatore (livello 1) C4719|È stata trovata una costante double quando è stato specificato Qfast. usare ' f ' come suffisso per indicare una precisione singola|
|Avviso del compilatore (livello 2) C4720|report assembler inline:' message '|
|Avviso del compilatore (livello 1) C4721|' Function ': non disponibile come intrinseco|
|[Avviso del compilatore (livello 1) C4722](compiler-warning-level-1-c4722.md)|' Function ': il distruttore non restituisce mai una potenziale perdita di memoria|
|[Avviso del compilatore (livello 3) C4723](../../error-messages/compiler-warnings/compiler-warning-level-3-c4723.md)|potenziale divisione per 0|
|[Avviso del compilatore (livello 3) C4724](compiler-warning-level-3-c4724.md)|possibile mod per 0|
|Avviso del compilatore (livello 3) C4725|l'istruzione potrebbe non risultare corretta per alcuni Pentium|
|[Avviso del compilatore (livello 1) C4727](../../error-messages/compiler-warnings/compiler-warning-level-1-c4727.md)|PCH denominato pch_file con lo stesso timestamp trovato in obj_file_1 e obj_file_2.  Uso del primo PCH.|
|Avviso del compilatore (livello 1) C4728|Opzione/YL-ignorata perché il riferimento PCH è obbligatorio|
|Avviso del compilatore (livello 4) C4729|funzione troppo grande per avvisi basati su grafico del flusso|
|[Avviso del compilatore (livello 1) C4730](../../error-messages/compiler-warnings/compiler-warning-level-1-c4730.md) Avviso del compilatore (livello 1) C4730|' Main ': la combinazione di _m64 ed espressioni a virgola mobile può produrre codice errato|
|[Avviso del compilatore (livello 1) C4731](../../error-messages/compiler-warnings/compiler-warning-level-1-c4731.md)|' pointer ': registro del puntatore del frame ' Register ' modificato dal codice assembly inline|
|Avviso del compilatore (livello 1) C4732|la funzione intrinseca '% s'non è supportata in questa architettura|
|[Avviso del compilatore (livello 1) C4733](../../error-messages/compiler-warnings/compiler-warning-level-1-c4733.md)|Assegnazione dell'assembly inline a' FS: 0': gestore non registrato come gestore sicuro|
|[Avviso del compilatore (livello 3) C4738](../../error-messages/compiler-warnings/compiler-warning-level-3-c4738.md)|archiviazione in memoria del risultato float a 32 bit, possibile riduzione delle prestazioni|
|[Avviso del compilatore (livello 1) C4739](compiler-warning-level-1-c4739.md)|il riferimento alla variabile 'var' supera lo spazio di archiviazione|
|[Avviso del compilatore (livello 4) C4740](../../error-messages/compiler-warnings/compiler-warning-level-4-c4740.md)|il flusso in entrata o in uscita dal codice dell'assembly inline impedisce l'ottimizzazione globale|
|[Avviso del compilatore (livello 1) C4742](../../error-messages/compiler-warnings/compiler-warning-level-1-c4742.md)|' var ' ha un allineamento diverso in ' file1' è file2': numero e numero|
|[Avviso del compilatore (livello 1) C4743](../../error-messages/compiler-warnings/compiler-warning-level-1-c4743.md)|' type ' ha dimensioni diverse in ' file1' è file2': numero e byte numerici|
|[Avviso del compilatore (livello 1) C4744](../../error-messages/compiler-warnings/compiler-warning-level-1-c4744.md)|' var ' ha un tipo diverso in ' file1' è file2':' tipo1' è tipo2'|
|[Avviso del compilatore C4746](../../error-messages/compiler-warnings/compiler-warning-c4746.md)|l'accesso volatile di '*Expression*' è soggetto a/volatile:\<&#124;ISO MS > impostazione. provare a usare __iso_volatile_load funzioni intrinseche/Store|
|[Avviso del compilatore (livello 1) C4747](../../error-messages/compiler-warnings/compiler-warning-level-1-c4747.md)|Chiamata a' EntryPoint ' gestito: il codice gestito non può essere eseguito con il blocco del caricatore, incluso il EntryPoint della DLL e le chiamate raggiunte dal EntryPoint della DLL|
|Avviso del compilatore (livello 4) C4749|supportato in modo condizionale: offsetof applicato al tipo di layout non standard '*Type*'|
|[Avviso del compilatore (livello 1) C4750](compiler-warning-level-1-c4750.md)|'identifier': funzione con _alloca() resa inline in un ciclo|
|Avviso del compilatore (livello 4) C4751|/Arch: AVX non si applica a Intel (R) Streaming SIMD Extensions all'interno dell'assembly inline|
|Avviso del compilatore (livello 4) C4752|sono state trovate Intel (R) Advanced Vector Extensions; provare a usare/Arch: AVX|
|[Avviso del compilatore (livello 4) C4754](compiler-warning-level-4-c4754.md)|Le regole di conversione per operazioni aritmetiche nel confronto in% s (% d) indicano che un ramo non può essere eseguito. Eseguire il cast di '% s'a '% s'(o un tipo simile di% d byte).|
|Avviso del compilatore C4755|Le regole di conversione per operazioni aritmetiche nel confronto in% s (% d) indicano che un ramo non può essere eseguito in una funzione inline. Eseguire il cast di '% s'a '% s'(o un tipo simile di% d byte).|
|[Avviso del compilatore (livello 2) C4756](../../error-messages/compiler-warnings/compiler-warning-level-2-c4756.md)|overflow in aritmetica costante|
|Avviso del compilatore (livello 4) C4757|l'indice è un valore senza segno di grandi dimensioni. si intendeva una costante negativa?|
|[Avviso del compilatore (livello 4) C4764](compiler-warning-level-4-c4764.md)|Impossibile allineare gli oggetti catch a più di 16 byte|
|Avviso del compilatore (livello 4) C4767|il nome di sezione '% s'supera gli 8 caratteri e verrà troncato dal linker|
|Avviso del compilatore (livello 3) C4768|gli attributi __declspec prima della specifica del collegamento vengono ignorati|
|Avviso del compilatore C4770|Enumerazione '*Name*' parzialmente convalidata utilizzata come indice|
|Avviso del compilatore C4771|I limiti devono essere creati usando un puntatore semplice; Funzione intrinseca MPX ignorata|
|[Avviso del compilatore (livello 1, errore) C4772](../../error-messages/compiler-warnings/compiler-warning-level-1-c4772.md)|#import ha fatto riferimento a un tipo da una libreria dei tipi mancante; ' missing_type ' utilizzato come segnaposto|
|Avviso del compilatore (livello 4) C4774|'*String*': la stringa di formato prevista nel *numero* dell'argomento non è un valore letterale stringa|
|Avviso del compilatore (livello 3) C4775|estensione non standard utilizzata nella stringa di formato '*String*' della funzione '*Function*'|
|Avviso del compilatore (livello 1) C4776|'%*character*' non è consentito nella stringa di formato della funzione '*Function*'|
|Avviso del compilatore (livello 4) C4777|'*Function*': la stringa di formato '*String*' richiede un argomento di tipo '*tipo1*', ma il *numero* dell'argomento Variadic è di tipo '*tipo2*'|
|Avviso del compilatore (livello 3) C4778|'*Function*': stringa di formato senza terminazione '*String*'|
|[Avviso del compilatore (livello 1) C4788](../../error-messages/compiler-warnings/compiler-warning-level-1-c4788.md)|' Identifier ': identificatore troncato a' Number ' caratteri|
|[Avviso del compilatore (livello 1) C4789](../../error-messages/compiler-warnings/compiler-warning-level-1-c4789.md)|verrà eseguito l'overrun del buffer 'identifier' di dimensioni pari a N byte; M byte verranno scritti a partire dall'offset L|
|Avviso del compilatore (livello 2) C4792|funzione '% s'dichiarata utilizzando sysimport e a cui viene fatto riferimento dal codice nativo; libreria di importazione obbligatoria per il collegamento|
|[Avviso del compilatore (livello 1 e 3) C4793](../../error-messages/compiler-warnings/compiler-warning-level-1-and-3-c4793.md)|' Function ': funzione compilata come nativa: \ n\t ' Reason '|
|[Avviso del compilatore (livello 1) C4794](compiler-warning-level-1-c4794.md)|il segmento della variabile di archiviazione locale del thread '% s'è stato modificato da '% s'a '% s'|
|[Avviso del compilatore (livello 1) C4799](../../error-messages/compiler-warnings/compiler-warning-level-1-c4799.md)|per la funzione ' Function ' non è disponibile alcuna istruzione EMMS|

## <a name="see-also"></a>Vedere anche

[Errori eC++ avvisi di C/compilatore e strumenti di compilazione](../compiler-errors-1/c-cpp-build-errors.md) \
[Avvisi del compilatore C4000-C5999](compiler-warnings-c4000-c5999.md)
