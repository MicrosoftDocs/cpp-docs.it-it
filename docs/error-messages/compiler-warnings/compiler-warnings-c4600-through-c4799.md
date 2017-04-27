---
title: C4600 avvisi del compilatore tramite C4799 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4602
- C4603
- C4609
- C4612
- C4613
- C4620
- C4622
- C4629
- C4631
- C4634
- C4635
- C4636
- C4637
- C4638
- C4645
- C4646
- C4655
- C4657
- C4658
- C4662
- C4670
- C4671
- C4672
- C4674
- C4676
- C4678
- C4681
- C4682
- C4685
- C4688
- C4689
- C4690
- C4693
- C4694
- C4695
- C4696
- C4718
- C4719
- C4720
- C4721
- C4722
- C4724
- C4725
- C4728
- C4729
- C4732
- C4739
- C4750
- C4751
- C4752
- C4754
- C4755
- C4757
- C4764
- C4767
- C4770
- C4792
- C4794
dev_langs:
- C++
ms.assetid: 22bd4392-f3be-445c-9f23-6126aebac901
caps.latest.revision: 23
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 4bac7b2942f9d72674b8092dc7bf64174dd3c349
ms.openlocfilehash: 93c5e1f5d6e4615ca9cb022bf301bd73613ca31c
ms.lasthandoff: 04/24/2017

---
# <a name="compiler-warnings-c4600-through-c4799"></a>C4600 avvisi del compilatore tramite C4799
Gli articoli in questa parte della documentazione contengono informazioni su un subset degli avvisi del compilatore Visual C++. È possibile accedere alle informazioni qui o nella finestra di Output in Visual Studio, è possibile selezionare un numero di errore e quindi premere il tasto F1.  
  
> [!NOTE]
>  Non tutti [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] errore o avviso è documentato in MSDN. In molti casi, il messaggio di diagnostica fornisce tutte le informazioni che sono disponibile. Se si ritiene che un messaggio di errore richieda una spiegazione aggiuntiva, è possibile informarne Microsoft. È possibile utilizzare la forma di commenti e suggerimenti in questa pagina o passare alla barra dei menu in Visual Studio e scegliere **Guida**, **segnalare un Bug**, o è possibile inviare un report di suggerimenti o bug in [Microsoft Connect](http://connect.microsoft.com/VisualStudio).  
  
È possibile trovare assistenza per errori e avvisi nei forum pubblici MSDN. Il [del linguaggio Visual C++](http://go.microsoft.com/fwlink/?LinkId=158195) forum è a domande e discussioni sul [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] sintassi del linguaggio e compilatore. Il [generali di Visual C++](http://go.microsoft.com/fwlink/?LinkId=158194) forum è per domande su [!INCLUDE[vcprvc](../../build/includes/vcprvc_md.md)] che non sono trattati in altri forum. È inoltre possibile trovare informazioni su errori e avvisi in [Overflow dello Stack](http://stackoverflow.com/).  
  
## <a name="in-this-section"></a>Contenuto della sezione  
  
|Avviso|Messaggio|  
|-------------|-------------|  
|[Avviso del compilatore (livello 1) C4600](../../error-messages/compiler-warnings/compiler-warning-level-1-c4600.md)|#pragma 'macro name': prevista una stringa vuota non valida|  
|Avviso del compilatore (livello 1) C4602|#pragma pop_macro: 'macro name' Nessun push_macro #pragma precedente per questo identificatore|  
|Avviso del compilatore (livello 1) C4603|'\<identificatore >': macro non è definita o la definizione è diversa dopo l'utilizzo di un'intestazione precompilata|  
|[Avviso del compilatore (livello 1) C4606](../../error-messages/compiler-warnings/compiler-warning-level-1-c4606.md)|#avviso pragma: 'numero di avviso' ignorato. Avvisi dell'analisi codice non sono associati ai livelli di avviso|  
|[Avviso del compilatore (livello 3) C4608](../../error-messages/compiler-warnings/compiler-warning-level-3-c4608.md)|'union_member' è già stato inizializzato dal membro di un'altra unione nell'elenco degli inizializzatori, 'union_member'|  
|Avviso del compilatore (livello 3) C4609|'%$S s' deriva dall'interfaccia predefinita '%$S s' nel tipo '%$S'. Utilizzare una differente interfaccia predefinita per '%$S' o interrompere la relazione base/derivata.|  
|[Avviso del compilatore (livello 4) C4610](../../error-messages/compiler-warnings/compiler-warning-level-4-c4610.md)|non è possibile creare istanze oggetto 'class': costruttore richiesto definito dall'utente|  
|[Avviso del compilatore (livello 4) C4611](../../error-messages/compiler-warnings/compiler-warning-level-4-c4611.md)|interazione tra 'function' e l'eliminazione degli oggetti C++ non è portabile|  
|Avviso del compilatore (livello 1) C4612|errore nel nome del file di inclusione|  
|Avviso del compilatore (livello 1) C4613|'%$S': impossibile modificare la classe del segmento|  
|[Avviso del compilatore (livello 1) C4615](../../error-messages/compiler-warnings/compiler-warning-level-1-c4615.md)|#avviso pragma: tipo di avviso utente sconosciuto|  
|[Avviso del compilatore (livello 1) C4616](../../error-messages/compiler-warnings/compiler-warning-level-1-c4616.md)|#avviso pragma: numero di avviso 'number' non è un avviso del compilatore valido|  
|[Avviso del compilatore (livello 1) C4618](../../error-messages/compiler-warnings/compiler-warning-level-1-c4618.md)|i parametri di pragma comprendono una stringa vuota. Pragma ignorato|  
|[Avviso del compilatore (livello 3) C4619](../../error-messages/compiler-warnings/compiler-warning-level-3-c4619.md)|#avviso pragma: nessun numero avviso 'number'|  
|Avviso del compilatore (livello 1) C4620|nessuna forma suffissa trovata di 'operator ++' per il tipo 'type'. Verrà utilizzata la forma prefissa|  
|[Avviso del compilatore (livello 1) C4621](../../error-messages/compiler-warnings/compiler-warning-level-1-c4621.md)|Nessuna forma suffissa di 'operator': trovata per il tipo 'type', utilizzata la forma prefissa|  
|Avviso del compilatore (livello 3) C4622|sovrascrittura delle informazioni di debug generate durante la creazione dell'intestazione precompilata nel file oggetto: 'file'|  
|[Avviso del compilatore (livello 4) C4623](../../error-messages/compiler-warnings/compiler-warning-level-4-c4623.md)|'derived class': costruttore predefinito è stato definito in modo implicito come eliminato perché un costruttore predefinito della classe base è inaccessibile o eliminati|  
|[Avviso del compilatore (livello 1) C4624](../../error-messages/compiler-warnings/compiler-warning-level-1-c4624.md)|'derived class': un distruttore è stato definito in modo implicito come eliminato perché un distruttore della classe base è inaccessibile o eliminati|  
|[Avviso del compilatore (livello 4) C4625](../../error-messages/compiler-warnings/compiler-warning-level-4-c4625.md)|'derived class': costruttore di copia è stato definito in modo implicito come eliminato perché un costruttore di copia della classe di base è inaccessibile o eliminati|  
|[Avviso del compilatore (livello 4) C4626](../../error-messages/compiler-warnings/compiler-warning-level-4-c4626.md)|'derived class': operatore di assegnazione è stato definito in modo implicito come eliminato perché un operatore di assegnazione della classe di base è inaccessibile o eliminati|  
|[Avviso del compilatore (livello 1) C4627](../../error-messages/compiler-warnings/compiler-warning-level-1-c4627.md)|'\<identificatore >': ignorato durante la ricerca dell'utilizzo di intestazione precompilata|  
|[Avviso del compilatore (livello 1) C4628](../../error-messages/compiler-warnings/compiler-warning-level-1-c4628.md)|digraph non supportati con -Ze. Sequenza di caratteri 'digraph' non interpretata come token alternativo per '%s'|  
|Avviso del compilatore (livello 4) C4629|utilizzato digraph; la sequenza di caratteri 'digraph' è stata interpretata come token 'char' (se non è corretto, inserire uno spazio tra i due caratteri)|  
|[Avviso del compilatore (livello 1) C4630](../../error-messages/compiler-warnings/compiler-warning-level-1-c4630.md)|'symbol': identificatore classe di archiviazione 'extern' non valido nella definizione di membro|  
|Avviso del compilatore (livello 2) C4631|MSXML o XPath non disponibile, i commenti ai documenti XML non verranno elaborati. motivo|  
|[Avviso del compilatore (livello 1) C4632](../../error-messages/compiler-warnings/compiler-warning-level-1-c4632.md)|Commento al documento XML: file - accesso negato: motivo|  
|[Avviso del compilatore (livello 3) C4633](../../error-messages/compiler-warnings/compiler-warning-level-3-c4633.md)|Destinazione del commento documento XML: errore: motivo|  
|Avviso del compilatore (livello 4) C4634|Destinazione del commento documento XML: Impossibile applicare: motivo|  
|Avviso del compilatore (livello 3) C4635|commento al documento XML di destinazione: XML in formato non valido: motivo|  
|Avviso del compilatore (livello 3) C4636|Commento al documento XML applicato a construct: tag richiede l'attributo non vuoto 'attribute'.|  
|Avviso del compilatore (livello 3 e livello 4) C4637|Destinazione del commento documento XML: \<includono > tag rimossi. Motivo|  
|Avviso del compilatore (livello 3) C4638|Destinazione del commento documento XML: riferimento al simbolo sconosciuto 'symbol'.|  
|[Avviso del compilatore (livello 4) C4639](../../error-messages/compiler-warnings/compiler-warning-level-4-c4639.md)|Errore MSXML, documento XML non verranno elaborati i commenti. Motivo|  
|[Avviso del compilatore (livello 3) C4640](../../error-messages/compiler-warnings/compiler-warning-level-3-c4640.md)|'istanza': la costruzione di oggetti statici locali non è thread-safe|  
|[Avviso del compilatore (livello 3) C4641](../../error-messages/compiler-warnings/compiler-warning-level-3-c4641.md)|commento al documento XML con riferimento incrociato ambiguo:|  
|Avviso del compilatore (livello 3) C4645|la funzione dichiarata con __declspec(noreturn) ha un'istruzione return|  
|Avviso del compilatore (livello 3) C4646|la funzione dichiarata con __declspec(noreturn) deve restituire un tipo non void|  
|[Avviso del compilatore (livello 1) C4650](../../error-messages/compiler-warnings/compiler-warning-level-1-c4650.md)|informazioni di debug non presenti nell'intestazione precompilata. Saranno disponibili solo i simboli globali presenti nell'intestazione|  
|[Avviso del compilatore (livello 1) C4651](../../error-messages/compiler-warnings/compiler-warning-level-1-c4651.md)|'definizione' specificato per l'intestazione precompilata ma non per la compilazione corrente|  
|[Avviso del compilatore (livello 1) C4652](../../error-messages/compiler-warnings/compiler-warning-level-1-c4652.md)|opzione del compilatore 'option' non è coerente con l'intestazione precompilata. opzione della riga di comando corrente avrà priorità su quanto definito nell'intestazione precompilata|  
|[Avviso del compilatore (livello 2) C4653](../../error-messages/compiler-warnings/compiler-warning-level-2-c4653.md)|opzione del compilatore 'option' non è coerente con l'intestazione precompilata. opzione della riga di comando corrente ignorata|  
|Avviso del compilatore (livello 1) C4655|'symbol': tipo di variabile nuovo rispetto all'ultima compilazione o definito diversamente altrove|  
|[Avviso del compilatore (livello 1) C4656](../../error-messages/compiler-warnings/compiler-warning-level-1-c4656.md)|'symbol': tipo dati nuovo o è stato modificato rispetto all'ultima compilazione o definito diversamente altrove|  
|Avviso del compilatore (livello 1) C4657|l'espressione utilizza un tipo dati nuovo rispetto all'ultima compilazione|  
|Avviso del compilatore (livello 1) C4658|'function': prototipo di funzione nuovo rispetto all'ultima compilazione o dichiarato diversamente altrove|  
|[Avviso del compilatore (livello 1) C4659](../../error-messages/compiler-warnings/compiler-warning-level-1-c4659.md)|#pragma 'pragma': utilizzo del segmento riservato 'segmento' produce un comportamento indefinito, è necessario utilizzare #pragma comment (linker,...)|  
|[Avviso del compilatore (livello 1) C4661](../../error-messages/compiler-warnings/compiler-warning-level-1-c4661.md)|'identifier': nessuna definizione adatta fornita per la richiesta di creazione di un'istanza di modello espliciti|  
|Avviso del compilatore (livello 1) C4662|creazione di un'istanza esplicita. La classe modello 'identifier1' non ha definizioni da cui specializzare 'identifier2'|  
|[Avviso del compilatore (livello 1) C4667](../../error-messages/compiler-warnings/compiler-warning-level-1-c4667.md)|'function': Nessun modello di funzione definito corrisponde creazione di istanza forzata|  
|[Avviso del compilatore (livello 4) C4668](../../error-messages/compiler-warnings/compiler-warning-level-4-c4668.md)|'simbolo' non è definito come macro del preprocessore, sostituzione con '0' per 'directive'|  
|[Avviso del compilatore (livello 1) C4669](../../error-messages/compiler-warnings/compiler-warning-level-1-c4669.md)|'cast': conversione non affidabile: 'class' è un oggetto di tipo gestito|  
|Avviso del compilatore (livello 4) C4670|'identifier': questa classe di base è inaccessibile|  
|Avviso del compilatore (livello 4) C4671|'identifier': il costruttore di copia è inaccessibile|  
|Avviso del compilatore (livello 4) C4672|'identifier1': ambiguo. Precedentemente visto come 'identifier2'|  
|[Avviso del compilatore (livello 4) C4673](../../error-messages/compiler-warnings/compiler-warning-level-4-c4673.md)|generare i seguenti tipi di 'identifier' non verrà considerata sito di rilevamento|  
|Avviso del compilatore (livello 1) C4674|'method' deve essere dichiarato 'static' e avere esattamente un parametro|  
|Avviso del compilatore (livello 4) C4676|'%s': il distruttore è inaccessibile|  
|[Avviso del compilatore (livello 1) C4677](../../error-messages/compiler-warnings/compiler-warning-level-1-c4677.md)|'function': la firma del membro non privato contiene il tipo privato 'tipo_privato'|  
|Avviso del compilatore (livello 1) C4678|classe base 'base_type' meno accessibile di 'derived_type'|  
|[Avviso del compilatore (livello 1) C4679](../../error-messages/compiler-warnings/compiler-warning-level-1-c4679.md)|'member': Impossibile importare il membro|  
|[Avviso del compilatore (livello 4) C4680](../../error-messages/compiler-warnings/compiler-warning-level-4-c4680.md)|'class': la coclasse non specifica un'interfaccia predefinita|  
|Avviso del compilatore (livello 4) C4681|'class': la coclasse non specifica un'interfaccia predefinita che è un'origine evento|  
|Avviso del compilatore (livello 4) C4682|'parameter': nessun attributo parametro direzionale specificato, verrà utilizzato [in]|  
|[Avviso del compilatore (livello 1) C4683](../../error-messages/compiler-warnings/compiler-warning-level-1-c4683.md)|'function': origine evento è 'out', parametro. Prestare attenzione durante l'associazione di più gestori eventi|  
|[Avviso del compilatore (livello 1) C4684](../../error-messages/compiler-warnings/compiler-warning-level-1-c4684.md)|'attribute': avviso. attributo può comportare la generazione di codice non valido: utilizzare con cautela|  
|Avviso del compilatore (livello 1) C4685|previsto '> >', trovato '>>' durante l'analisi dei parametri di modello|  
|[Avviso del compilatore (livello 3) C4686](../../error-messages/compiler-warnings/compiler-warning-level-3-c4686.md)|'tipo-definito dall'utente': possibile modifica del comportamento. Modifica nella convenzione di chiamata per il valore restituito del tipo definito dall'utente.|  
|[Avviso del compilatore C4687](../../error-messages/compiler-warnings/compiler-warning-c4687.md)|'class': una classe astratta sealed non può implementare un'interfaccia 'interface'|  
|Avviso del compilatore (livello 1) C4688|'constraint': l'elenco di vincoli contiene il tipo privato 'type' dell'assembly|  
|Avviso del compilatore (livello 1) C4689|'%c': carattere non supportato in #pragma detect_mismatch. #pragma ignorato|  
|Avviso del compilatore (livello 4) C4690|[emitidl (pop)]: più estrazioni che inserimenti|  
|[Avviso del compilatore (livello 1) C4691](../../error-messages/compiler-warnings/compiler-warning-level-1-c4691.md)|'type': tipo di riferimento previsto nell'assembly senza riferimenti 'file', tipo definito in unità di conversione corrente utilizzato|  
|[Avviso del compilatore (livello 1) C4692](../../error-messages/compiler-warnings/compiler-warning-level-1-c4692.md)|'funzione': la firma del membro non privato contiene il tipo nativo privato 'tipo_nativo' dell'assembly|  
|Avviso del compilatore (livello 1) C4693|'class': una classe astratta sealed non può avere qualsiasi istanza membri 'istanza member'|  
|Avviso del compilatore (livello 1) C4694|'class': una classe astratta sealed non può avere una classe base 'base_class'|  
|Avviso del compilatore (livello 1) C4695|#pragma execution_character_set: 'character set' non è un argomento supportato: attualmente solo 'UTF-8' è supportato|  
|Avviso del compilatore (livello 1) C4696|/ Opzione ZBvalue1 fuori intervallo. Supponendo che 'valore2'|  
|[Avviso del compilatore (livello 1 e livello 4) C4700](../../error-messages/compiler-warnings/compiler-warning-level-1-and-level-4-c4700.md)|variabile locale non inizializzata 'nome' utilizzato|  
|[Avviso del compilatore (livello 4) C4701](../../error-messages/compiler-warnings/compiler-warning-level-4-c4701.md)|potenzialmente non inizializzata utilizzata variabile locale 'nome'|  
|[Avviso del compilatore (livello 4) C4702](../../error-messages/compiler-warnings/compiler-warning-level-4-c4702.md)|codice non eseguibile|  
|[Avviso del compilatore (livello 4) C4703](../../error-messages/compiler-warnings/compiler-warning-level-4-c4703.md)|utilizzata variabile puntatore locale non inizializzata '%s'|  
|[Avviso del compilatore (livello 4) C4706](../../error-messages/compiler-warnings/compiler-warning-level-4-c4706.md)|assegnazione all'interno di un'espressione condizionale|  
|[Avviso del compilatore (livello 4) C4709](../../error-messages/compiler-warnings/compiler-warning-level-4-c4709.md)|operatore virgola all'interno di un'espressione che definisce l'indice di una matrice|  
|[Avviso del compilatore (livello 4) C4710](../../error-messages/compiler-warnings/compiler-warning-level-4-c4710.md)|'funzione': funzione non resa inline|  
|[Avviso del compilatore (livello 1) C4711](../../error-messages/compiler-warnings/compiler-warning-level-1-c4711.md)|funzione 'funzione' selezionata per l'espansione inline automatica|  
|[Avviso del compilatore (livello 4) C4714](../../error-messages/compiler-warnings/compiler-warning-level-4-c4714.md)|funzione 'funzione' contrassegnata come forceinline non resa inline|  
|[Avviso del compilatore (livello 1) C4715](../../error-messages/compiler-warnings/compiler-warning-level-1-c4715.md)|'function': non tutti i percorsi di controllo restituiscono un valore|  
|[Avviso del compilatore (livello 1) C4716](../../error-messages/compiler-warnings/compiler-warning-level-1-c4716.md)|'function': deve restituire un valore|  
|[Avviso del compilatore (livello 1) C4717](../../error-messages/compiler-warnings/compiler-warning-level-1-c4717.md)|'function': funzione ricorsiva su tutti i percorsi di controllo, provocherà un overflow dello stack di runtime|  
|Avviso del compilatore (livello 4) C4718|'function call': chiamata ricorsiva non ha effetti collaterali, eliminazione|  
|Avviso del compilatore (livello 1) C4719|Trovata costante double con Qfast specificato. Utilizzare il suffisso 'f' per indicare la precisione singola.|  
|Avviso del compilatore (livello 2) C4720|rapporti assembler inline: 'message'|  
|Avviso del compilatore (livello 1) C4721|'function': non è disponibile come funzione intrinseca|  
|Avviso del compilatore (livello 1) C4722|'function': il distruttore non restituisce mai un valore, potenziale perdita di memoria|  
|[Avviso del compilatore (livello 3) C4723](../../error-messages/compiler-warnings/compiler-warning-level-3-c4723.md)|possibile divisione per 0|  
|Avviso del compilatore (livello 3) C4724|possibile mod per 0|  
|Avviso del compilatore (livello 3) C4725|l'istruzione potrebbe non risultare corretta per alcuni Pentium|  
|[Avviso del compilatore (livello 1) C4727](../../error-messages/compiler-warnings/compiler-warning-level-1-c4727.md)|PCH denominato file_pch con lo stesso timestamp trovato in file_obj_1 e file_obj_2.  Tramite il primo PCH.|  
|Avviso del compilatore (livello 1) C4728|Opzione /Yl- ignorata perché il riferimento PCH è necessario|  
|Avviso del compilatore (livello 4) C4729|funzione troppo grande per avvisi basati su grafico del flusso|  
|[Compilatore avviso (livello 1) C4730](../../error-messages/compiler-warnings/compiler-warning-level-1-c4730.md)avviso del compilatore (livello 1) C4730|'main': miste m64 e a virgola mobile espressioni possono generare codice non corretto|  
|[Avviso del compilatore (livello 1) C4731](../../error-messages/compiler-warnings/compiler-warning-level-1-c4731.md)|'pointer': frame registro dei puntatori 'Registra' modificato da codice assembly inline|  
|Avviso del compilatore (livello 1) C4732|intrinseco '%s' non supportato in questa architettura|  
|[Avviso del compilatore (livello 1) C4733](../../error-messages/compiler-warnings/compiler-warning-level-1-c4733.md)|Assegnazione dell'assembly inline a 'FS:0': gestore non registrato come sicuro|  
|[Avviso del compilatore (livello 3) C4738](../../error-messages/compiler-warnings/compiler-warning-level-3-c4738.md)|archiviazione in memoria del risultato float a 32 bit, possibile riduzione delle prestazioni|  
|Avviso del compilatore (livello 1) C4739|il riferimento alla variabile 'var' supera lo spazio di archiviazione|  
|[Avviso del compilatore (livello 4) C4740](../../error-messages/compiler-warnings/compiler-warning-level-4-c4740.md)|il flusso in entrata o in uscita del codice dell'assembly inline impedisce l'ottimizzazione globale|  
|[Avviso del compilatore (livello 1) C4742](../../error-messages/compiler-warnings/compiler-warning-level-1-c4742.md)|'var' ha un diverso allineamento in 'file1' e 'file2': numero e il numero|  
|[Avviso del compilatore (livello 1) C4743](../../error-messages/compiler-warnings/compiler-warning-level-1-c4743.md)|'type' ha una diversa dimensione in 'file1' e 'file2': numero e del numero di byte|  
|[Avviso del compilatore (livello 1) C4744](../../error-messages/compiler-warnings/compiler-warning-level-1-c4744.md)|'var' ha un tipo diverso in 'file1' e 'file2': 'type1' e 'type2'|  
|[Avviso del compilatore C4746](../../error-messages/compiler-warnings/compiler-warning-c4746.md)|accesso volatile di '%[NULL] s'è soggetto a /volatile:\<iso &#124; ms > impostazione; considerare l'utilizzo di funzioni intrinseche iso_volatile_load/store|  
|[Avviso del compilatore (livello 1) C4747](../../error-messages/compiler-warnings/compiler-warning-level-1-c4747.md)|La chiamata gestita 'punto di ingresso': il codice gestito potrebbe non essere eseguito in blocco del caricatore, inclusi il punto di ingresso DLL e le chiamate raggiunte dal punto di ingresso DLL|  
|Avviso del compilatore (livello 1) C4750|'identifier': funzione con _alloca() resa inline in un ciclo|  
|Avviso del compilatore (livello 4) C4751|/arch:AVX non si applica a Intel(R) Streaming SIMD Extensions nell'assembly inline|  
|Avviso del compilatore (livello 4) C4752|trovate estensioni Intel(R) Advanced Vector Extension. Provare a utilizzare /arch:AVX|  
|Avviso del compilatore (livello 4) C4754|Regole di conversione per operazioni aritmetiche nel confronto in DISATTESA indicano che un ramo non può essere eseguito. Eseguire il cast di "%s" per "%s" (o un tipo simile di %d byte).|  
|Avviso C4755 del compilatore|Regole di conversione per operazioni aritmetiche nel confronto in DISATTESA indicano che un ramo non può essere eseguito in una funzione inline. Eseguire il cast di "%s" per "%s" (o un tipo simile di %d byte).|  
|[Avviso del compilatore (livello 2) C4756](../../error-messages/compiler-warnings/compiler-warning-level-2-c4756.md)|overflow durante operazioni aritmetiche su costanti|  
|Avviso del compilatore (livello 4) C4757|indice con valore unsigned troppo grande. Si desiderava utilizzare una costante negativa?|  
|Avviso del compilatore (livello 4) C4764|Impossibile allineare oggetti catch a un numero di byte maggiore di 16|  
|Avviso del compilatore (livello 4) C4767|la lunghezza del nome sezione '%s' supera gli 8 caratteri e verrà troncata dal linker|  
|Avviso C4770 del compilatore|enum '%s' convalidato parzialmente usato come indice|  
|[Avviso del compilatore (livello 1) C4772](../../error-messages/compiler-warnings/compiler-warning-level-1-c4772.md)|#importazione a cui fa riferimento un tipo da una libreria dei tipi mancanti; 'tipo_mancante' come segnaposto|  
|[Avviso del compilatore (livello 1) C4788](../../error-messages/compiler-warnings/compiler-warning-level-1-c4788.md)|'identifier': identificatore troncato a 'number' caratteri|  
|[Avviso del compilatore (livello 1) C4789](../../error-messages/compiler-warnings/compiler-warning-level-1-c4789.md)|verrà eseguito l'overrun del buffer 'identifier' di dimensioni pari a N byte; M byte verranno scritti a partire dall'offset L|  
|Avviso del compilatore (livello 2) C4792|la funzione '%s' è stata dichiarata utilizzando sysimport e vi si è fatto riferimento dal codice nativo; richiesto collegamento alla libreria di importazione|  
|[Avviso del compilatore (livello 1 e 3) C4793](../../error-messages/compiler-warnings/compiler-warning-level-1-and-3-c4793.md)|'function': funzione compilata come nativa: \n\t'reason'|  
|Avviso del compilatore (livello 1) C4794|segmento della variabile di archiviazione locale di thread '%s' modificato da '%s' a '%s'|  
|[Avviso del compilatore (livello 1) C4799](../../error-messages/compiler-warnings/compiler-warning-level-1-c4799.md)|funzione 'function' non contiene istruzioni EMMS|
