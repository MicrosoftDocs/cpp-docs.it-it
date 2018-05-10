---
title: Gli avvisi del compilatore dalla versione del compilatore | Documenti Microsoft
ms.custom: ''
ms.date: 01/31/2018
ms.technology:
- devlang-cpp
ms.topic: error-reference
dev_langs:
- C++
helpviewer_keywords:
- warnings, by compiler version
- cl.exe compiler, setting warning options
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 789121e3adb42cb74087339bb33bb82cb7604a10
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warnings-by-compiler-version"></a>Avvisi del compilatore dalla versione del compilatore

Il compilatore può eliminare gli avvisi introdotti dopo una versione specificata utilizzando il [/WV.](../../build/reference/compiler-option-warning-level.md) l'opzione del compilatore. Ciò è utile per la gestione del processo di compilazione quando si introduce una nuova versione del set di strumenti e si desidera evitare temporaneamente nuovi avvisi. Questa opzione non elimina i nuovi messaggi di errore. Si consiglia di non si elimina tutti i nuovi avvisi in modo permanente. È consigliabile compilare sempre al massimo livello di avviso regolare, __/W4__e rimuovere il __/WV.__ opzione nella compilazione appena possibile. 

Queste versioni del compilatore introdotti nuovi avvisi:

| Prodotto | Numero di versione del compilatore |
|-|-|
| Visual C++ 2002 | 13.00.9466 |
| Visual C++ 2003 | 13.10.3077 |
| Visual C++ 2005 | 14.00.50727.762 |
| Visual C++ 2008 | 15.00.21022.08 |
| Visual C++ 2010 | 16.00.40219.01 |
| Visual C++ 2012 | 17.00.51106.1 |
| Visual C++ 2013 | 18.00.21005.1 |
| Visual C++ 2015 RTM | 19.00.23026.0 |
| Visual C++ 2015 Update 1 | 19.00.23506.0 |
| Visual C++ 2015 Update 2 | 19.00.23918.0 |
| Visual C++ 2015 Update 3 | 19.00.24215.1 |
| Visual C++ 2017 RTM | 19.10.24903.0 |
| Visual C++ 2017 versione 15.1 | 19.10.25017.0 |
| Visual C++ 2017 versione 15.3 | 19.11.25506.0 |
| Visual C++ 2017 versione 15,5 | 19.12.25827.0 |

È possibile specificare solo il numero principale, i numeri principali e secondari o la versione principale e secondario e numeri di build per il __/WV.__ opzione. Il compilatore segnala tutti gli avvisi che corrispondono alle versioni che iniziano con il numero specificato ed Elimina tutti gli avvisi per le versioni maggiore del numero specificato. Ad esempio, __/Wv:17__ segnala tutti gli avvisi introdotti in o prima di qualsiasi versione di Visual Studio 2012 ed Elimina tutti gli avvisi introdotti da qualsiasi compilatore da Visual Studio 2013 (versione 18) o versione successiva. Per eliminare gli avvisi introdotti in Visual Studio 2015 update 2 e versioni successive, è possibile utilizzare __/Wv:19.00.23506__. Utilizzare __/Wv:19.11__ per segnalare tutti gli avvisi introdotti in qualsiasi versione di Visual Studio precedenti a Visual Studio 2017 versione 15,5, ma non visualizza avvisi introdotti in Visual Studio 2017 15,5 e versioni successive.

Le sezioni seguenti elencano gli avvisi introdotti da ogni versione di Visual C++ che è possibile eliminare utilizzando il __/WV.__ l'opzione del compilatore. Il __/WV.__ opzione non è possibile esclusione di avvisi che non sono elencati, che le versioni specificate del compilatore precedenti.

## <a name="warnings-introduced-in-visual-c-2017-version-155-compiler-version-1912258270"></a>Avvisi introdotti in Visual C++ 2017 versione 15,5 (versione del compilatore 19.12.25827.0)

Questi avvisi e tutti gli avvisi nelle versioni più recenti vengono eliminati utilizzando l'opzione del compilatore __/Wv:19.11__.

|||
|-|-|
C5044|Un argomento per l'opzione della riga di comando *opzione* punta a un percorso '*percorso*' non esiste

## <a name="warnings-introduced-in-visual-c-2017-version-153-compiler-version-1911255060"></a>Avvisi introdotti in Visual C++ 2017 versione 15.3 (versione del compilatore 19.11.25506.0)

Questi avvisi e tutti gli avvisi nelle versioni più recenti vengono eliminati utilizzando l'opzione del compilatore __/Wv:19.10__.

|||
|-|-|
C4843|'*type1*': un gestore di eccezioni di riferimento al tipo di matrice o una funzione non è raggiungibile, utilizzare '*type2*' invece
C4844|' esportazione modulo *nome_modulo*;' è ora la sintassi preferita per un modulo di interfaccia di dichiarazione
C5039|'*funzione*': puntatore o riferimento a potenzialmente generare funzione passato alla funzione extern C sotto - /EHc. Se questa funzione genera un'eccezione, può verificarsi un comportamento indefinito.
C5040|le specifiche di eccezione dinamiche sono valide solo in C++ 14 e versioni precedenti; considerando come noexcept (false)
C5041|'*definizione*': definizione out-of-line per un membro dati statici constexpr non è necessario ed è deprecato in C++ 17
C5042|'*dichiarazione*': le dichiarazioni di funzione nell'ambito del blocco non possono essere specificato come 'inline' in C++ standard, rimuovere l'identificatore 'inline'
C5043|'*specifica*': specifica di eccezione non corrisponde alla dichiarazione precedente

## <a name="warnings-introduced-in-visual-c-2017-version-151-compiler-version-1910250170"></a>Avvisi introdotti in Visual C++ 2017 versione 15.1 (versione del compilatore 19.10.25017.0)

Questi avvisi e tutti gli avvisi nelle versioni più recenti vengono eliminati utilizzando l'opzione del compilatore __/Wv:19.10.24903__.

|||
|-|-|
C4597|un comportamento indefinito: *descrizione*
C4604|'*tipo*': passaggio di argomento per valore attraverso il limite nativo e gestito richiede il costruttore di copia valida. In caso contrario non è definito il comportamento di runtime
C4749|supportato in modo condizionale: *descrizione*
C4768|gli attributi di declspec prima specifica di collegamento vengono ignorati
C4834|eliminazione di un valore restituito di funzione con l'attributo 'nodiscard'
C4841|estensione non standard: *estensione*
C4842|il risultato di 'offsetof' applicato a un tipo con ereditarietà multipla non è garantito la coerenza tra le versioni del compilatore
C4869|'nodiscard' può essere applicato solo alle classi, enumerazioni e funzioni con tipo restituito non void
C5033|'*-classe di archiviazione*' non è più una classe di archiviazione supportati
C5034|utilizzo di funzione intrinseca '*intrinseco*' funzione *funzione* verrà compilato come codice guest
C5035|utilizzo della funzionalità '*funzionalità*' funzione *funzione* verrà compilato come codice guest
C5036|varargs funzione di conversione di puntatore durante la compilazione con /hybrid:x86arm64 '*type1*'a'*type2*'
C5037|'*funzione membro*': una definizione out-of-line di un membro di un modello di classe non può avere argomenti predefiniti
C5038|membro dati '*member1*'initialized dopo il membro dati'*member2*'

## <a name="warnings-introduced-in-visual-c-2017-rtm-compiler-version-191024903"></a>Avvisi introdotti in Visual C++ 2017 RTM (versione del compilatore 19.10.24903)

Questi avvisi e tutti gli avvisi nelle versioni più recenti vengono eliminati utilizzando l'opzione del compilatore __/Wv:19.00__.

|||
|-|-|
C4468|'fallthrough': attributo deve essere seguito da un'etichetta case o un'etichetta predefinita
C4698|'*funzionalità*' è solo a scopo di valutazione e è soggette a modifiche o aggiornamenti in futuro la rimozione.
C4839|utilizzo non standard ' classe*classe*' come argomento a una funzione variadic
C4840|utilizzo non portabili di classe*classe*' come argomento a una funzione variadic

## <a name="warnings-introduced-in-visual-c-2015-update-3-compiler-version-1900242151"></a>Avvisi introdotti in Visual C++ 2015 Update 3 (versione del compilatore 19.00.24215.1)

Questi avvisi e tutti gli avvisi nelle versioni più recenti vengono eliminati utilizzando l'opzione del compilatore __/Wv:19.00.23918__.

|||
|-|-|
C4467|utilizzo di attributi ATL è deprecato
C4596|'*nome*': il nome completo non valido nella dichiarazione di membro
C4598|' #include \< *intestazione*\>': il numero di intestazione *numero* nel *origine* non corrisponde a *origine* in cui posizione
C4599|'*argomento*': *origine* argomento number *numero* non corrisponde a *origine*

## <a name="warnings-introduced-in-visual-c-2015-update-2-compiler-version-1900239180"></a>Avvisi introdotti in Visual C++ 2015 Update 2 (versione del compilatore 19.00.23918.0)

Questi avvisi e tutti gli avvisi nelle versioni più recenti vengono eliminati utilizzando l'opzione del compilatore __/Wv:19.00.23506__.

|||
|-|-|
C4466|Non è stato possibile eseguire elisione dell'heap della coroutine
C4595|'*classe*': non membro operator new o delete funzioni non possono essere dichiarate inline
C4828|Il file contiene un carattere a partire dall'offset 0 x*valore* che non è valido nel set di caratteri di origine corrente (tabella codici *numero*).
C4868|compilatore non può imporre l'ordine di valutazione da sinistra a destra nell'elenco di inizializzatori tra parentesi graffe

## <a name="warnings-introduced-in-visual-c-2015-update-1-compiler-version-1900235060"></a>Avvisi introdotti in Visual C++ 2015 Update 1 (versione del compilatore 19.00.23506.0)

Questi avvisi e tutti gli avvisi nelle versioni più recenti vengono eliminati utilizzando l'opzione del compilatore __/Wv:19.00.23026__.

|||
|-|-|
C4426|flag di ottimizzazione modificati dopo l'inclusione dell'intestazione, potrebbe essere dovuto a optimize () #pragma
C4654|Includere codice inserito prima dell'intestazione precompilata riga verrà ignorata. Aggiungere codice all'intestazione precompilata.
C5031|#pragma warning (POP): probabile mancata corrispondenza, visualizzazione dello stato di avviso inserito nel file diverso
C5032|rilevato #pragma warning non corrispondente warning (POP) #pragma

## <a name="warnings-introduced-in-visual-c-2015-rtm-compiler-version-1900230260"></a>Avvisi introdotti in Visual C++ 2015 RTM (versione del compilatore 19.00.23026.0)

Questi avvisi e tutti gli avvisi nelle versioni più recenti vengono eliminati utilizzando l'opzione del compilatore __/WV: 18__.

|||
|-|-|
C4427|'*errore*': overflow nella divisione delle costanti, un comportamento non definito
C4438|'*tipo*': non può essere chiamato in modo sicuro in /Await: clrcompat modalità. Se '*tipo*' chiamate a CLR potrebbero risultare danneggiamento dell'intestazione CLR
C4455|' operatore *nome*': gli identificatori di suffisso letterale che non iniziano con un carattere di sottolineatura sono riservati
C4456|dichiarazione di '*nome*' nasconde la dichiarazione locale precedente
C4457|dichiarazione di '*nome*' parametro della funzione verrà nascosto
C4458|dichiarazione di '*nome*' nasconde il membro della classe
C4459|dichiarazione di '*nome*' nasconde una dichiarazione globale
C4462|'*tipo*': Impossibile determinare il GUID del tipo. Il programma potrebbe bloccarsi in fase di esecuzione.
C4463|overflow; l'assegnazione di *valore* campo di bit che può contenere solo valori da *valore* a *valore*
C4473|'*funzione*': argomenti insufficienti passati per la stringa di formato
C4474|'*funzione*': troppi argomenti passati per la stringa di formato
C4475|'*funzione*': modificatore di lunghezza '*modificatore*'non può essere utilizzato con caratteri di campo di tipo'*carattere*' nell'identificatore di formato
C4476|'*funzione*': carattere del campo del tipo sconosciuto '*carattere*' nell'identificatore di formato
C4477|'*funzione*': stringa di formato '*stringa*'richiede un argomento di tipo'*tipo*', ma l'argomento variadic *numero* è di tipo '*tipo*'
C4478|'*funzione*': non è possibile combinare i segnaposto posizionali e non posizionali nella stessa stringa di formato
C4494|'*tipo*': ignorato allocator la funzione di tipo restituito non è un puntatore o riferimento
C4495|utilizzata estensione non standard super': sostituire con il nome di classe di base esplicito
C4496|utilizzata estensione non standard 'for each': sostituire con l'istruzione ranged-for
C4497|utilizzata estensione non standard 'sealed': sostituirla con 'final'
C4498|utilizzata estensione non standard: '*estensione*'
C4499|'*specializzazione*': una specializzazione esplicita non può avere una classe di archiviazione (ignorata)
C4576|un tipo tra parentesi seguito da un elenco di inizializzatori è una sintassi di conversione di tipo esplicito non standard
C4577|'noexcept' utilizzato con nessun eccezioni modalità specificata. chiusura in caso di eccezione non è garantito. Specificare /EHsc
C4578|'abs': conversione da '*tipo*'a'*tipo*', perdita di dati (si intendeva chiamare '*nome*' o a #include <cmath>?)
C4582|'*tipo*': costruttore non viene chiamato in modo implicito
C4583|'*tipo*': un distruttore non viene chiamato in modo implicito
C4587|'*tipo*': modifica del comportamento: costruttore viene chiamato non è più in modo implicito
C4588|'*tipo*': modifica del comportamento: distruttore viene chiamato non è più in modo implicito
C4589|Costruttore di classe astratta*tipo*'Ignora l'inizializzatore della classe di base virtuale'*tipo*'
C4591|il limite di profondità di chiamata 'constexpr' *numero* superato (/ /constexpr: Depth<NUMBER>)
C4592|'*tipo*': simbolo verrà dinamicamente inizializzato (limitazione dell'implementazione)
C4593|'*tipo*': 'constexpr' limite passaggio valutazione delle chiamate di *valore* superato; usare /constexpr<NUMBER> per aumentare il limite
C4647|modifica del comportamento: is_pod (*tipo*) ha valore diverso nelle versioni precedenti
C4648|l'attributo standard 'carries_dependency' viene ignorato
C4649|gli attributi vengono ignorati in questo contesto
C4753|Impossibile trovare i limiti per il puntatore. Funzione intrinseca MPX verrà ignorata
C4771|Limiti devono essere creati usando un puntatore di tipo semplice Funzione intrinseca MPX verrà ignorata
C4774|'*descrizione*': prevista nell'argomento stringa di formato *numero* non è una stringa letterale
C4775|utilizzata estensione non standard nella stringa di formato '*stringa*'della funzione'*funzione*'
C4776|' %*carattere*'non è consentito nella stringa di formato della funzione'*funzione*'
C4777|'*descrizione*': stringa di formato '*stringa*'richiede un argomento di tipo'*tipo*', ma l'argomento variadic *numero* è di tipo '*tipo*'
C4778|'*descrizione*': formato stringa non completo '*stringa*'
C4838|conversione da '*tipo*'a'*tipo*' richiede una conversione di narrowing
C5022|'*tipo*': specificato più di un costruttore di spostamento
C5023|'*tipo*': specificati più operatori di assegnazione
C5024|'*dichiarazione*': spostamento costruttore è stato definito in modo implicito come eliminato
C5025|'*dichiarazione*': spostare l'operatore di assegnazione è stato definito in modo implicito come eliminato
C5026|'*tipo*': spostamento costruttore è stato definito in modo implicito come eliminato
C5027|'*tipo*': spostare l'operatore di assegnazione è stato definito in modo implicito come eliminato
C5028|'*nome*': l'allineamento specificato nella dichiarazione precedente (*numero*) non specificato nella definizione
C5029|utilizzata estensione non standard: gli attributi di allineamento in C++ si applicano a variabili, membri dati e solo i tipi di tag
C5030|attributo '*attributo*' non è riconosciuto

## <a name="warnings-introduced-in-visual-c-2013-compiler-version-1800210051"></a>Avvisi introdotti in Visual C++ 2013 (versione del compilatore 18.00.21005.1)

Questi avvisi e tutti gli avvisi nelle versioni più recenti vengono eliminati utilizzando l'opzione del compilatore __/Wv:17__.

|||
|-|-|
C4301|'*tipo*': funzione virtual in override differisce da solo '*dichiarazione*' da un qualificatore const/volatile
C4316|'*tipo*': oggetto allocato nell'heap potrebbe non essere allineato *numero*
C4380|'*tipo*': non è possibile deprecare un costruttore predefinito
C4388|'*token*': mancata corrispondenza signed e unsigned
C4423|'std:: bad_alloc': verrà rilevato dalla classe ('*tipo*') nella riga *numero*
C4424|catch per '*tipo*'preceduto da'*tipo*' nella riga *numero*; imprevedibile se viene generata un'eccezione di 'std:: bad_alloc', potrebbe verificarsi un comportamento
C4425|Impossibile applicare un'annotazione SAL a '...'
C4464|il percorso include relativo contiene '... '
C4575|vectorcall' incompatibile con il ' o clr' opzione: la conversione in stdcall'
C4609|'*tipo*'deriva dall'interfaccia predefinita'*tipo*'nel tipo'*tipo*'. Utilizzare una differente interfaccia predefinita per '*tipo*', o interrompere la relazione base/derivata.
C4754|Regole di conversione per operazioni aritmetiche nel confronto in *descrizione*(*numero*) indicano che un ramo non può essere eseguito. Cast '*tipo*'a'*tipo*' (o un tipo simile di *numero* byte).
C4755|Regole di conversione per operazioni aritmetiche nel confronto in *descrizione*(*numero*) indicano che un ramo non può essere eseguito in una funzione inline. Cast '*tipo*'a'*tipo*' (o un tipo simile di *numero* byte).
C4767|nome della sezione '*nome*' contiene più di 8 caratteri e verrà troncato dal linker
C4770|parzialmente convalidata enum '*nome*' utilizzato come indice
C4827|Un metodo 'ToString' pubblico con 0 parametri deve essere contrassegnato come virtuale ed eseguire l'override
C4882|il passaggio di funtori con operatori di chiamata non const a Concurrency:: parallel_for_each è deprecato
C4973|'*tipo*': contrassegnato come obsoleto
C4974|'*tipo*': contrassegnato come obsoleto
C4981|Warbird: funzione '*dichiarazione*' contrassegnata come forceinline non resa inline perché contiene semantica delle eccezioni
C4990|Warbird: *messaggio*
C4991|Warbird: funzione '*dichiarazione*' contrassegnata come forceinline non resa inline perché il livello di protezione di inline è maggiore dell'elemento padre
C4992|Warbird: funzione '*dichiarazione*' contrassegnata come forceinline non resa inline perché contiene assembly inline che non possono essere protetti

## <a name="warnings-introduced-in-visual-c-2012-compiler-version-1700511061"></a>Avvisi introdotti in Visual C++ 2012 (versione del compilatore 17.00.51106.1)

Questi avvisi e tutti gli avvisi nelle versioni più recenti vengono eliminati utilizzando l'opzione del compilatore __/Wv:16__.

|||
|-|-|
C4330|attributo '*attributo*'per la sezione'*sezione*' ignorato
C4415|duplicato declspec (code_seg ('*nome*'))
C4416|__declspec(code_seg(...)) contiene una stringa vuota: ignorato
C4417|creazione di un'istanza di modello espliciti non può avere __declspec(code_seg(...)): ignorato
C4418|__declspec(code_seg(...)) ignorato per un'enumerazione
C4419|'*nome*'non ha alcun effetto se applicato alla classe ref privata'*tipo*'.
C4435|'*tipo*': layout dell'oggetto in /vd2 verrà modificato a causa della base virtuale '*tipo*'
C4436|dynamic_cast dalla base virtuale '*tipo*'a'*tipo*' nel costruttore o distruttore potrebbe non riuscire con l'oggetto costruito parzialmente
C4437|dynamic_cast dalla base virtuale '*tipo*'a'*tipo*' potrebbe non riuscire in alcuni contesti
C4443|parametro pragma previsto: '0', '1' o '2'
C4446|'*tipo*': Impossibile mappare il membro '*nome*' in questo tipo, a causa di conflitti con il nome del tipo. Il metodo è stato rinominato in '*nome*'
C4447|firma di 'main' trovata senza modello di threading. È consigliabile utilizzare ' int main (Platform:: Array\<platform:: String ^ > ^ args)'.
C4448|'*tipo*' non dispone di un'interfaccia predefinita specificata nei metadati. Prelievo: '*tipo*', che potrebbe non riuscire in fase di esecuzione.
C4449|'*tipo*' un tipo non sealed deve essere contrassegnato come '[WebHostHidden]'
C4450|'*tipo*'deve essere contrassegnato come '[WebHostHidden]' perché deriva da'*tipo*'
C4451|'*tipo*': utilizzo di classe di riferimento '*tipo*' all'interno di questo contesto può portare al marshalling non valido dell'oggetto tra contesti
C4452|'*tipo*': tipo pubblico non può essere in ambito globale. Deve essere in uno spazio dei nomi che è un elemento figlio del nome del file con estensione winmd di output.
C4453|'*tipo*': un tipo '[WebHostHidden]' non deve essere utilizzato sulla superficie pubblicata di un tipo pubblico che non è '[WebHostHidden]'
C4454|'*tipo*' viene eseguito l'overload più il numero di parametri di input senza specificato [DefaultOverload]. Prelievo '*dichiarazione*' come overload predefinito
C4471|'*nome*': una dichiarazione con prototipo di un'enumerazione senza ambita deve avere un tipo sottostante (presupposto int)
C4472|'*nome*' è un'enumerazione nativa: aggiungere un identificatore di accesso (privato/pubblico) per dichiarare un'enumerazione gestita o WinRT
C4492|'*tipo*': il metodo di classe di riferimento di base di corrispondenze '*tipo*', ma non è contrassegnato 'override'
C4493|Espressione DELETE non ha alcun effetto poiché il distruttore di '*tipo*' non dispone di accessibilità 'public'
C4585|'*tipo*': classe non sealed A WinRT 'public ref class' deve essere sealed o derivare da un oggetto esistente
C4586|'*tipo*': Impossibile dichiarare un tipo pubblico in uno spazio dei nomi principale chiamato 'Windows'
C4695|#pragma execution_character_set: '*argomento*' non è un argomento supportato: attualmente solo 'UTF-8' è supportato
C4703|variabile puntatore locale potenzialmente non inizializzata '*nome*' utilizzato
C4728|Opzione /Yl-ignorata perché è necessario il riferimento PCH
C4745|accesso volatile di '*nome*' non può essere applicata a causa della dimensione
C4746|accesso volatile di '*nome*' è soggetto a /volatile:\<iso\|ms > impostazione; considerare l'utilizzo di funzioni intrinseche iso_volatile_load/store
C4872|divisione a virgola mobile per zero rilevato durante la compilazione del grafico chiamate per il Concurrency:: parallel_for_each in: '*descrizione*'
C4880|esegue il cast da '*tipo*'a'*tipo*': cast di constness da un puntatore o riferimento lontano può comportare un comportamento non definito in una funzione con restrizioni amp
C4881|il costruttore e/o il distruttore non verrà richiamato per la variabile tile_static '*tipo*'
C4966|'*descrizione*' dispone di un'annotazione code_seg con nome segmento non supportato, annotazione ignorato
C4988|'*tipo*': variabile dichiarata di fuori ambito di classe/funzione
C4989|'*descrizione*': tipo con definizioni in conflitto.

## <a name="warnings-introduced-in-visual-c-2010-compiler-version-16004021901"></a>Avvisi introdotti in Visual C++ 2010 (versione del compilatore 16.00.40219.01)

Questi avvisi e tutti gli avvisi nelle versioni più recenti vengono eliminati utilizzando l'opzione del compilatore __/Wv:15__.

|||
|-|-|
C4352|'*nome*': funzione intrinseca già definita
C4573|l'utilizzo di '*tipo*' richiede il compilatore deve acquisire 'this' ma non lo consente la modalità di acquisizione predefinita corrente
C4574|'*nome*'è definito per essere ' 0': si intendeva usare ' #if *nome*'?
C4689|'*carattere*': carattere non supportato in detect_mismatch #pragma; #pragma ignorato
C4751|/arch flag AVX non si applica a Intel (r) Streaming SIMD Extensions nell'assembly inline
C4752|trovare Intel (r) Advanced Vector Extensions; è consigliabile utilizzare il flag AVX di /arch appropriato
C4837|rilevato trigramma: '? *carattere*'sostituito da'*carattere*'
C4986|'*dichiarazione*': specifica di eccezione non corrisponde alla dichiarazione precedente
C4987|utilizzata estensione non standard: 'throw (...)'

## <a name="warnings-introduced-in-visual-c-2008-compiler-version-15002102208"></a>Avvisi introdotti in Visual C++ 2008 (versione del compilatore 15.00.21022.08)

Questi avvisi e tutti gli avvisi nelle versioni più recenti vengono eliminati utilizzando l'opzione del compilatore __/Wv:14__.

|||
|-|-|
C4396|'*tipo*': non è possibile utilizzare l'identificatore inline quando una dichiarazione friend fa riferimento a una specializzazione di un modello di funzione
C4413|'*dichiarazione*': membro di riferimento viene inizializzato con una password temporanea che non viene mantenuto dopo la chiusura del costruttore
C4491|'*descrizione*': è un formato di versione IDL non valido
C4603|'*nome*': macro non è definita o la definizione è diversa dopo l'utilizzo di un'intestazione precompilata
C4627|'*descrizione*': ignorato durante la ricerca dell'utilizzo di intestazione precompilata
C4750|'*descrizione*': funzione con alloca () resa inline in un ciclo
C4910|'*tipo*': 'dllexport' e 'extern' sono incompatibili in un'istanza esplicita
C4985|'*dichiarazione*': attributi non presenti nella dichiarazione precedente.

## <a name="warnings-introduced-in-visual-c-2005-compiler-version-140050727762"></a>Avvisi introdotti in Visual C++ 2005 (versione del compilatore 14.00.50727.762)

Questi avvisi e tutti gli avvisi nelle versioni più recenti vengono eliminati utilizzando l'opzione del compilatore __/Wv:13__.

|||
|-|-|
C4000|Avviso sconosciuto scegliere supporto tecnico dal menu della Guida di Visual C++ o aprire il file della Guida di supporto tecnico per ulteriori informazioni
C4272|'*tipo*': è contrassegnato come declspec; durante l'importazione di una funzione, specificare la convenzione di chiamata nativa.
C4333|'*espressione*': shift a destra misura eccessiva. perdita di dati
C4334|'*espressione*': risultato dello shift a 32 bit convertito in modo implicito a 64 bit (si intendeva eseguire lo shift a 64 bit?)
C4335|Rilevato formato di file Mac: convertire il file di origine in formato DOS o UNIX
C4342|modifica del comportamento: '*tipo*' chiamato, ma in versioni precedenti è stato chiamato un operatore membro
C4350|modifica del comportamento: '*dichiarazione*'chiamato al posto di'*dichiarazione*'
C4357|argomento di matrice di parametri trovato nell'elenco di argomenti formali per delegato '*dichiarazione*'ignorato durante la generazione'*tipo*'
C4358|'*espressione*': tipo restituito di delegati combinati non è 'void'; valore restituito è indefinito
C4359|'*tipo*': identificatore di allineamento è inferiore all'allineamento effettivo (*numero*) e verrà ignorato.
C4362|'*tipo*': allineamento maggiore di 8 byte non è supportato da Common Language Runtime
C4364|#using per l'assembly '*nome*' trovato in precedenza in *descrizione*(*numero*) senza l'attributo as_friend; as_friend non applicato
C4365|'*espressione*': conversione da '*tipo*'a'*tipo*', mancata corrispondenza signed e unsigned
C4366|Il risultato dell'operatore unario '*operatore*' operatore potrebbe essere non allineato
C4367|Conversione da '*tipo*'a'*tipo*' potrebbe causare l'eccezione di disallineamento del tipo di dati
C4368|Impossibile definire '*nome*'come membro del gestita'*tipo*': tipi misti non supportati
C4369|'*tipo*': valore dell'enumeratore '*numero*'non può essere rappresentato come'*tipo*', valore è'*numero*'
C4374|'*dichiarazione*': il metodo di interfaccia non essere implementato dal metodo non virtuale '*dichiarazione*'
C4375|metodo non pubblico '*dichiarazione*'non esegue l'override'*dichiarazione*'
C4376|Identificatore di accesso '*identificatore*:' non è più supportata: utilizzare '*identificatore*:' invece
C4377|tipi nativi sono privati per impostazione predefinita. -d1PrivateNativeTypes è deprecato
C4378|È necessario ottenere puntatori di funzione per eseguire gli inizializzatori; prendere in considerazione System::ModuleHandle::ResolveMethodHandle
C4379|Versione *versione* di common language runtime non è supportato da questo compilatore. Utilizzando questa versione può causare risultati imprevisti
C4381|'*dichiarazione*': il metodo di interfaccia non essere implementato dal metodo non pubblico '*dichiarazione*'
C4382|generazione di '*tipo*': un tipo con distruttore clrcall o costruttore di copia può essere rilevato solo in /clr: pura modulo
C4383|'*tipo*': il significato della dereferenziazione di un handle può variare quando definito dall'utente '*operatore*' operatore esiste; scrivere l'operatore come funzione statica per essere esplicito dell'operando
C4384|#pragma '*direttiva*' deve essere utilizzato solo in ambito globale
C4393|'*tipo*': const non ha alcun effetto *descrizione* (membro dati); ignorata
C4394|'*tipo*': simbolo per dominio di applicazione non dovrebbe essere contrassegnato con declspec (*valore*)
C4395|'*tipo*': funzione membro verrà richiamata su una copia del membro dati initonly '*tipo*'
C4397|DefaultCharSetAttribute ignorato
C4398|'*tipo*': oggetto globale per processo potrebbe non funzionare correttamente con più domini di applicazione; è consigliabile utilizzare __declspec(appdomain)
C4399|'*tipo*': simbolo per processo non dovrebbe essere contrassegnato con declspec (*valore*) quando compilato con /clr: pure
C4400|'*tipo*': qualificatori const/volatile per questo tipo non sono supportati.
C4412|'*dichiarazione*': funzione firma contiene il tipo '*tipo*'; Gli oggetti di C++ sono non è sicuro passare tra codice pure e misto o nativo.
C4429|possibili incompleto o formato non corretto a nomi di caratteri universali
C4430|identificatore di tipo mancante, verrà utilizzato int. Nota: In C++ non supportati int predefinito
C4431|identificatore di tipo mancante, verrà utilizzato int. Nota: default-int non è più supportato in C++
C4434|un costruttore statico deve avere accessibilità privata; conversione in accesso privato
C4439|'*tipo*': definizione di funzione con un tipo gestito nella firma deve avere un clrcall convenzione di chiamata
C4441|convenzione di chiamata di '*convenzione*' ignorato. '*convenzione*' utilizzato
C4445|'*dichiarazione*': in un tipo gestito o WinRT un metodo virtuale non può essere privato
C4460|Operatore CLR o WinRT '*tipo*', contiene un parametro passato per riferimento. Operatore CLR o WinRT '*operatore*'ha una semantica diversa da quella dell'operatore C++'*operatore*', probabilmente si intendeva passare per valore?
C4461|'*tipo*': questa classe ha un finalizzatore '! *tipo*' ma non un distruttore ' ~*tipo*'
C4470|direttive pragma di controllo a virgola mobile ignorati in /clr
C4480|utilizzata estensione non standard: specifica del tipo sottostante di enum '*tipo*'
C4481|utilizzata estensione non standard: identificatore di override '*identificatore*'
C4482|utilizzata estensione non standard: enum '*tipo*' utilizzato nel nome qualificato
C4483|Errore di sintassi: prevista la parola chiave C++
C4484|'*tipo*': il metodo di classe di riferimento di base di corrispondenze '*tipo*', ma non è contrassegnato 'virtual', 'new' o 'override'; verrà utilizzato 'new' (e non 'virtual')
C4485|'*tipo*': il metodo di classe di riferimento di base di corrispondenze '*tipo*', ma non è contrassegnato 'new' o 'override'; 'new' (e 'virtual') equivale a
C4486|'*tipo*': un metodo virtuale privato di una classe di riferimento o una classe di valore deve essere contrassegnato 'sealed'
C4487|'*tipo*': il metodo non virtuale ereditato con corrispondenze '*tipo*' ma non è contrassegnato 'new' in modo esplicito
C4488|'*tipo*': richiede '*(parola chiave)*'parola chiave per implementare il metodo di interfaccia'*tipo*'
C4489|'*(parola chiave)*': non è consentito il metodo di interfaccia '*nome*'; gli identificatori sono consentiti solo metodi della classe ref classe e il valore di sostituzione
C4490|'*parola chiave*': utilizzo non corretto dell'identificatore di override; '*tipo*' non corrisponde a un metodo della classe base di riferimento
C4538|'*tipo*': qualificatori const/volatile per questo tipo non sono supportati.
C4559|'*tipo*': ridefinizione; declspec miglioramenti di funzione (*valore*)
C4565|'*tipo*': ridefinizione; il simbolo era dichiarato in precedenza con declspec (*valore*)
C4566|carattere rappresentato dal nome di carattere universale '*carattere*' non può essere rappresentato nella tabella codici corrente (*numero*)
C4568|'*tipo*': nessun membro corrisponde alla firma dell'override esplicito
C4569|'*tipo*': nessun membro corrisponde alla firma dell'override esplicito
C4570|'*tipo*': non è dichiarato in modo esplicito come abstract ma ha funzioni astratte
C4571|Messaggio informativo: catch è cambiata dopo Visual C++ 7.1; le eccezioni strutturate (SEH) non vengono più rilevate
C4572|L'attributo [ParamArray] è deprecato in /clr, utilizzare '...' invece
C4580|[attribute] è deprecata. Specificare invece *specificato*Attribute come classe di base
C4581|comportamento deprecato: ' "*nome*"' sostituito con '*nome*' per elaborare l'attributo
C4606|avviso #pragma: '*numero*' ignorato. Avvisi dell'analisi codice non sono associati ai livelli di avviso
C4631|MSXML o XPath non disponibile, i commenti ai documenti XML non verranno elaborati. *description*
C4632|Commento al documento XML: *descrizione* -accesso negato: *descrizione*
C4633|Commento al documento XML*descrizione*: errore: *descrizione*
C4634|Commento al documento XML*descrizione*: Impossibile applicare: *descrizione*
C4635|Commento al documento XML*descrizione*:-formato XML errato: *descrizione*
C4636|Commento al documento XML*descrizione*: il tag richiede non vuoto '*descrizione*' attributo.
C4637|Commento al documento XML*descrizione*: <include> tag eliminati. *description*
C4638|Commento al documento XML*descrizione*: riferimento al simbolo sconosciuto '*descrizione*'.
C4639|Errore MSXML, documento XML non verranno elaborati i commenti. *description*
C4641|Commento al documento XML con riferimento incrociato ambiguo: 
C4678|classe di base*dichiarazione*'è meno accessibile di'*nome*'
C4679|'*descrizione*': Impossibile importare il membro
C4687|'*tipo*': una classe astratta sealed non può implementare un'interfaccia '*tipo*'
C4688|'*nome*': elenco di vincoli contiene il tipo privato '*dichiarazione*'
C4690|[ emitidl ( pop ) ]: più estrazioni che inserimenti
C4691|'*tipo*': tipo di riferimento previsto senza riferimenti *modulo* '*descrizione*', tipo definito in unità di conversione corrente utilizzato
C4692|'*nome*': la firma del membro non privato contiene il tipo nativo privato '*dichiarazione*'
C4693|'*tipo*': una classe astratta sealed non può avere i membri di istanza*nome*'
C4694|'*tipo*': una classe astratta sealed non può avere una classe base*tipo*'
C4720|rapporti assembler inline: '*descrizione*'
C4721|'*descrizione*': non è disponibile come funzione intrinseca
C4722|'*descrizione*': il distruttore non restituisce mai un valore, potenziale perdita di memoria
C4726|ARM arch4/4T supporta solo ' < cpsr_f > o < spsr_f >' con valore immediato
C4727|PCH denominato *nome* con lo stesso timestamp trovato *nome* e *nome*.  Tramite il primo PCH.
C4729|funzione troppo grande per avvisi basati su grafico del flusso
C4730|'*descrizione*': miste m64 e a virgola mobile espressioni possono generare codice non corretto
C4731|'*descrizione*': registro dei puntatori di frame '*registrare*' modificato da codice assembly inline
C4732|funzione intrinseca '*intrinseco*' non è supportata in questa architettura
C4733|Assegnazione dell'assembly inline a "FS: 0": gestore non registrato come sicuro
C4734|Più di 64 KB di numeri di riga in un formato COFF debug sezione info; interrompere l'emissione di numeri di riga di debug COFF per il modulo '*modulo*'
C4738|archiviazione in memoria del risultato float a 32 bit, possibile riduzione delle prestazioni
C4739|riferimento alla variabile '*variabile*' supera lo spazio di archiviazione
C4740|flusso interno o all'esterno di codice dell'assembly inline impedisce l'ottimizzazione globale
C4742|'*variabile*'ha un diverso allineamento '*percorso*'e'*percorso*': *numero* e *numero*
C4743|'*nome*'ha una diversa dimensione '*percorso*'e'*percorso*': *numero* e *numero* byte
C4744|'*nome*'ha un tipo diverso '*percorso*'e'*percorso*': '*tipo*'e'*tipo*'
C4747|La chiamata gestita '*tipo*': il codice gestito potrebbe non essere eseguito in blocco del caricatore, inclusi il punto di ingresso DLL e le chiamate raggiunte dal punto di ingresso DLL
C4761|dimensione integrale non corrispondente nell'argomento. conversione fornita
C4764|Non è possibile allineare oggetti catch a un numero di byte maggiore di 16
C4788|'*identificatore*': identificatore troncato a '*numero*' caratteri
C4789|buffer '*nome*' della dimensione *numero* byte verranno eseguito l'overrun del; *numero* byte verranno scritti a partire dall'offset *numero*
C4801|Valore restituito per riferimento non verificabile: *descrizione*
C4819|Il file contiene un carattere non può essere rappresentato nella tabella codici corrente (*numero*). Salvare il file in formato Unicode per evitare la perdita di dati
C4826|Conversione da '*tipo*'a'*tipo*' è con segno esteso. Ciò potrebbe causare un comportamento di runtime imprevisto.
C4829|Parametri probabilmente errati per la funzione main. Considerare ' int main (Platform:: Array\<platform:: String ^ > ^ argv)'
C4835|'*tipo*': l'inizializzatore dei dati esportati non verrà eseguita fino a quando il codice gestito viene eseguito per prima nell'assembly su host
C4867|'*tipo*': sintassi non standard; utilizzare '&' per creare un puntatore a membro
C4936|questo __declspec è supportato solo con la compilazione con /clr o /clr:pure
C4937|'*nome*'e'*nome*'sono indistinguibili come argomenti per'*opzione*'
C4938|'*tipo*': variabile di riduzione a virgola mobile può causare risultati incoerenti in /fp: strict o fenv_access #pragma
C4939|#pragma vtordisp è deprecato e verrà rimosso in una futura versione di Visual C++
C4947|'*tipo*': contrassegnato come obsoleto
C4949|pragma 'managed' e 'unmanaged' sono significativi solo se compilati con ' / /CLR [: opzione]'
C4950|'*tipo*': contrassegnato come obsoleto
C4955|'*descrizione*': importazione ignorata; importazione già eseguita da '*origine*'
C4956|'*tipo*': tipo non verificabile
C4957|'*espressione*': cast esplicito da '*tipo*'a'*tipo*' non è verificabile
C4958|'*espressione*': aritmetica dei puntatori non verificabile
C4959|non è possibile definire non gestito *classe* '*tipo*' in /CLR: safe perché l'accesso ai membri produce codice non verificabile
C4960|'*descrizione*' è troppo grande per il profiling
C4961|Dati di profilo non è Stati Uniti '*percorso*', ottimizzazioni PGO disabilitate
C4962|'*descrizione*': ottimizzazioni PGO disabilitate perché le ottimizzazioni provocano l'incoerenza i dati di profilo
C4963|'*descrizione*': dati di profilo non trovati; nella compilazione instrumentata utilizzate opzioni del compilatore diverse
C4964|Nessuna opzione di ottimizzazione specificata; informazioni sul profilo non verranno raccolti
C4965|boxing implicito dell'integer 0; utilizzare nullptr o un cast esplicito
C4970|costruttore di delegato: oggetto di destinazione ignorato poiché '*dichiarazione*' è statico
C4971|Ordine argomenti: \<oggetto di destinazione >, \<funzione di destinazione > per il costruttore di delegato è obsoleto, utilizzare \<funzione di destinazione >, \<oggetto di destinazione >
C4972|La modifica o il trattamento diretto del risultato di una operazione di unboxing come lvalue non è verificabile

## <a name="warnings-introduced-in-visual-c-2003-compiler-version-13103077"></a>Avvisi introdotti in Visual C++ 2003 (versione del compilatore 13.10.3077)

Questi avvisi e tutti gli avvisi nelle versioni più recenti vengono eliminati utilizzando l'opzione del compilatore __/Wv:13.00.9466__.

|||
|-|-|
C4343|ottimizzare #pragma (*descrizione*, impostata su off) esegue l'override dell'opzione /Og
C4344|modifica del comportamento: utilizzo dei risultati di argomenti di modello espliciti nella chiamata a '*dichiarazione*'
C4346|'*tipo*': nome dipendente non è un tipo
C4348|'*dichiarazione*': ridefinizione del parametro predefinito: parametro *numero*
C4356|'*tipo*': membro dati statici non possa essere inizializzato tramite classi derivate
C4408|anonimo *struct* non ha dichiarato alcun membro dati
C4544|'*dichiarazione*': argomento di modello ignorato in questa dichiarazione di modello predefinito
C4545|l'espressione prima della virgola restituisce una funzione senza elenco di argomenti
C4546|nella chiamata di funzione prima della virgola manca l'elenco degli argomenti
C4547|'*espressione*': operatore prima della virgola non ha effetto; previsto operatore con effetto collaterale
C4548|l'espressione prima della virgola non ha effetto. Prevista espressione con effetto collaterale.
C4549|'*espressione*': operatore prima della virgola non ha alcun effetto; si intendeva '*espressione*'?
C4628|digraph non supportati con -Ze. Sequenza di caratteri '*sequenza*'non interpretata come token alternativo per'*token*'
C4629|utilizzato digraph; la sequenza di caratteri '*sequenza*'interpretata come token'*token*' (se diverso da quello desiderato, inserire uno spazio tra i due caratteri)
C4671|'*descrizione*': il costruttore di copia è inaccessibile
C4676|'*descrizione*': il distruttore è inaccessibile
C4677|'*nome*': la firma del membro non privato contiene il tipo privato '*dichiarazione*'
C4686|'*tipo*': possibile modifica del comportamento, modifica nel tipo definito dall'utente restituiscono la convenzione di chiamata
C4812|tipo di dichiarazione obsoleto: utilizzare '*tipo*::*nome*' invece
C4813|'*tipo*': una funzione friend delle classi locali debba essere dichiarata in precedenza
C4821|Impossibile determinare il tipo di codifica Unicode, salvare il file con firma (BOM)
C4822|'*tipo*': funzione membro della classe locale non ha un corpo
C4823|'*tipo*': utilizza puntatori di blocco ma rimozione semantica non è abilitata. È consigliabile utilizzare /EHa
C4913|l'operatore binario definito dall'utente ',' esiste, ma nessuno degli overload può convertire tutti gli operandi. Verrà utilizzato l'operatore binario ',' incorporato predefinito.
C4948|tipo restituito di '*dichiarazione*' non corrisponde al tipo dell'ultimo parametro della funzione set corrispondente
C4951|'*descrizione*' è stato modificato dopo la raccolta dei dati di profilo dati di profilo di funzione non utilizzati
C4952|'*descrizione*': dati di profilo non trovato nel database di programma '*descrizione*'
C4953|Inline '*descrizione*' è stato modificato dopo la raccolta dei dati di profilo dati di profilo non utilizzati
C4954|'*descrizione*': profilatura non eseguita (contiene un'espressione switch Int64)

## <a name="warnings-introduced-in-visual-c-2002-compiler-version-13009466"></a>Avvisi introdotti in Visual C++ 2002 (versione del compilatore 13.00.9466)

Questi avvisi e tutti gli avvisi nelle versioni più recenti vengono eliminati utilizzando l'opzione del compilatore __/Wv:12__.

|||
|-|-|
C4096|'*tipo*': non è un'interfaccia COM di interfaccia, non verrà inviata all'IDL
C4097|parametro pragma previsto: 'restore' o 'off'
C4165|'HRESULT' viene convertito in 'bool'; continuare che questo è ciò che si desidera?
C4183|'*nome*': tipo restituito mancante; si presuppone che sia una funzione membro restituisce 'int'
C4199|*description*
C4255|'*nome*': nessun prototipo di funzione dato: conversione (')' in '(void)'
C4256|'*dichiarazione*': costruttore di classe con basi virtuali ha '...'; chiamate potrebbero non essere compatibili con le versioni precedenti di Visual C++
C4258|'*nome*': definizione dal ciclo for ignorata; viene utilizzata la definizione di ambito di inclusione
C4263|'*dichiarazione*': funzione membro non esegue l'override di qualsiasi funzione membro virtuale della classe base
C4264|'*dichiarazione*': override non disponibile per la funzione membro virtuale dalla base '*classe*'; la funzione è nascosta
C4265|'*tipo*': classe ha funzioni virtuali, ma il distruttore non virtuale istanze di questa classe nImpossibile eliminare correttamente
C4266|'*dichiarazione*': override non disponibile per la funzione membro virtuale dalla base '*classe*'; la funzione è nascosta
C4267|'*espressione*': conversione da 'size_t' a '*tipo*', perdita di dati
C4274|#ident ignorata. vedere la documentazione di #pragma comment (exestr, 'string')
C4277|elemento importato '*tipo*::*nome*' esiste come membro dati e come membro funzione; membro dati ignorato
C4278|'*nome*': identificatore nella libreria dei tipi '*descrizione*' è già una macro; utilizzare il qualificatore 'rename'
C4279|'*nome*': identificatore nella libreria dei tipi '*descrizione*' è una parola chiave, utilizzare il qualificatore 'rename'
C4287|'*espressione*': errata corrispondenza tra costanti unsigned/negative
C4288|utilizzata estensione non standard: '*nome*': variabile di controllo ciclo dichiarata nel ciclo for e utilizzata all'esterno dell'ambito del ciclo per; è in conflitto con la dichiarazione nell'ambito esterno
C4289|utilizzata estensione non standard: '*nome*': variabile di controllo ciclo dichiarata nel ciclo for viene utilizzata all'esterno dell'ambito del ciclo for
C4293|'*espressione*': calcolo shift negativo o troppo grande, un comportamento indefinito
C4295|'*tipo*': matrice è troppo piccola per includere un carattere di terminazione null
C4296|'*espressione*': espressione è sempre *valore*
C4297|'*tipo*': non generare un'eccezione benché ciò non presuppone che le funzioni
C4298|'*nome*': identificatore nella libreria dei tipi '*descrizione*' è già una macro; rinominare in ' _*nome*'
C4299|'*nome*': identificatore nella libreria dei tipi '*descrizione*' è una parola chiave, la ridenominazione di ' _*nome*'
C4302|'*espressione*': troncamento da '*tipo*'a'*tipo*'
C4303|*conversione* da '*tipo*'a'*tipo*' è deprecata, utilizzare static_cast, try_cast o dynamic_cast.
C4314|parametro pragma previsto: '32' o '64'
C4315|'*tipo*': puntatore 'this' per il membro '*tipo*' potrebbe non essere allineato *numero* come previsto dal costruttore
C4318|passaggio di costante zero come lunghezza a memset
C4319|'*espressione*': zero estensione '*tipo*'a'*tipo*' di dimensioni maggiori
C4321|la generazione automatica di un IID di interfaccia '*tipo*'
C4322|la generazione automatica di un CLSID per la classe*tipo*'
C4323|riutilizzo di un CLSID registrato per la classe*tipo*'
C4324|'*tipo*': è stato applicato un riempimento struttura all'identificatore di allineamento
C4325|gli attributi per la sezione standard '*descrizione*' ignorato
C4326|tipo restituito di '*nome*'deve essere'*tipo*'anziché'*tipo*'
C4327|'*espressione*': allineamento del riferimento indiretto di LHS (*numero*) è maggiore di RHS (*numero*)
C4328|'*descrizione*': allineamento del riferimento indiretto del parametro formale *numero* (*numero*) è maggiore di allineamento dell'argomento effettivo (*numero*)
C4329|l'identificatore di allineamento viene ignorato nell'enumerazione
C4336|Importazione libreria dei tipi di riferimenti incrociati '*libreria*'prima di importare'*descrizione*'
C4337|libreria dei tipi di riferimenti incrociati '*libreria*'in'*descrizione*' viene automaticamente importato
C4338|#pragma *descrizione*: sezione standard '*sezione*' viene utilizzato
C4339|'*tipo*': rilevato l'utilizzo di un tipo non definito nei metadati CLR o WinRT - uso di questo tipo può causare un'eccezione di runtime
C4353|utilizzata estensione non standard: costante 0 come espressione di funzione.  Utilizzare invece NOOP' funzione intrinseca
C4370|'*dichiarazione*': il layout della classe è stato modificato da una versione precedente del compilatore per migliorare la compressione
C4371|'*dichiarazione*': il layout della classe sia stato modificato da una versione precedente del compilatore per migliorare la compressione del membro '*membro*'
C4373|'*tipo*': funzione virtuale esegue l'override*dichiarazione*', le versioni precedenti del compilatore non hanno eseguito l'override se i parametri si differenziavano solo per i qualificatori const/volatile
C4387|'*descrizione*': è stata considerata
C4389|'*espressione*': mancata corrispondenza signed e unsigned
C4391|'*dichiarazione*': tipo restituito non corretto per la funzione intrinseca, previsto '*tipo*'
C4392|'*dichiarazione*': numero errato di argomenti per una funzione intrinseca, previsto '*numero*' argomenti
C4407|eseguire il cast tra puntatore diversi per le rappresentazioni di membro, compilatore potrebbe generare codice non corretto
C4420|'*nome*': operatore non è disponibile, utilizzando '*nome*'; il controllo di runtime può essere compromesso
C4440|ridefinizione della convenzione di chiamata '*descrizione*'a'*descrizione*' ignorato
C4442|terminatore null incorporato nell'argomento di Annotation.  Valore verrà troncato.
C4444|'*nome*': unaligned' di livello superiore non è implementata in questo contesto
C4526|'*tipo*': funzione membro statica non è possibile eseguire l'override di funzioni virtuali '*dichiarazione*' override ignorato, funzione virtuale verrà nascosto
C4531|Gestione delle eccezioni C++ non è disponibile per Windows CE. Utilizzare la gestione delle eccezioni strutturata
C4532|'*descrizione*': salto da *infine* blocco di un comportamento indefinito durante la gestione della terminazione
C4533|inizializzazione di '*dichiarazione*' ignorata da ' goto *dichiarazione*'
C4534|'*dichiarazione*' non è un costruttore predefinito per *classe* '*tipo*' a causa dell'argomento predefinito
C4535|set_se_translator () chiamata richiede /EHa
C4536|'*descrizione*': nome del tipo supera il limite di metadati di '*numero*' caratteri
C4537|'*dichiarazione*': '.' applicato al tipo non definito dall'utente
C4542|Impossibile generare un file di testo inserito, non è possibile scrivere *tipo* file: '*filename*': *errore*
C4543|Inserito soppresso dall'attributo di testo ' Nessuna\_injected_text'
C4555|l'espressione non ha effetto. Prevista espressione con effetto collaterale
C4557|assume' contiene l'effetto '*effetto*'
C4558|valore dell'operando '*numero*'non compreso nell'intervallo'*numero* - *numero*'
C4561|fastcall' incompatibile con il ' o clr' opzione: la conversione in stdcall'
C4562|sono necessarie con funzioni con prototipo completo di ' o clr' opzione: conversione (')' in '(void)'
C4564|metodo '*nome*' di *classe* '*tipo*'definisce parametro predefinito non supportato'*parametro*'
C4584|'*tipo*': classe di base*dichiarazione*'è già una classe di base di'*dichiarazione*'
C4608|Inizializzazione di più membri dell'unione: '*tipo*'e'*tipo*'
C4619|avviso #pragma: nessun numero avviso '*numero*'
C4623|'*tipo*': costruttore predefinito è stato definito in modo implicito come eliminato
C4624|'*tipo*': un distruttore è stato definito in modo implicito come eliminato
C4625|'*tipo*': costruttore di copia è stato definito in modo implicito come eliminato
C4626|'*tipo*': operatore di assegnazione è stato definito in modo implicito come eliminato
C4645|funzione dichiarata con 'noreturn' contiene un'istruzione return
C4646|funzione dichiarata con 'noreturn' è un tipo restituito non void
C4659|#pragma '*descrizione*': utilizzo del segmento riservato '*nome*' ha un comportamento indefinito. utilizzare #pragma comment (linker,...)
C4667|'*dichiarazione*': Nessun modello di funzione definito corrisponde creazione di istanza forzata
C4668|'*nome*'non è definito come macro del preprocessore, sostituzione con '0' per'*valore*'
C4669|'*espressione*': conversione non affidabile: '*tipo*' è un oggetto di tipo gestito o WinRT
C4674|'*nome*' deve essere dichiarato come 'static' e avere esattamente un parametro
C4680|'*tipo*': la coclasse non specifica un'interfaccia predefinita
C4681|'*tipo*': la coclasse non specifica un'interfaccia predefinita che è un'origine evento
C4682|'*tipo*': nessun attributo parametro direzionale specificato, verrà utilizzato [in]
C4683|'*dichiarazione*': origine evento è 'out', parametro, prestare attenzione nello stabilire associazioni a più gestori eventi
C4684|'*descrizione*': avviso. attributo può comportare la generazione di codice non valido: utilizzare con cautela
C4685|previsto '> >', trovato '>>' durante l'analisi dei parametri di modello
C4700|variabile locale non inizializzata '*nome*' utilizzato
C4701|variabile locale potenzialmente non inizializzata '*nome*' utilizzato
C4702|codice non raggiungibile
C4711|funzione '*nome*' selezionata per l'espansione inline automatica
C4714|funzione '*dichiarazione*' contrassegnata come forceinline non resa inline
C4715|'*funzione*': non tutti i percorsi di controllo restituiscono un valore
C4716|'*funzione*': deve restituire un valore
C4717|'*funzione*': funzione ricorsiva su tutti i percorsi di controllo, provocherà un overflow dello stack di runtime
C4718|'*funzione*': chiamata ricorsiva non ha effetti collaterali, eliminazione
C4719|Trovata con Qfast specificato. utilizzare 'f' come suffisso per indicare la precisione singola costante double
C4723|possibile divisione per 0
C4724|possibile mod per 0
C4725|l'istruzione potrebbe non risultare corretta per alcuni Pentium
C4757|indice è un valore senza segno di grandi dimensioni, si intendeva una costante negativa?
C4772|#import a cui fa riferimento un tipo da una libreria dei tipi mancanti; '*descrizione*' utilizzato come segnaposto
C4792|funzione '*funzione*' dichiarata utilizzando sysimport e a cui viene fatto riferimento dal codice nativo; importazione richiesto collegamento alla libreria
C4794|segmento della variabile di archiviazione locale di thread '*nome*'modificato da'*segmento*'a'*segmento*'
C4798|codice nativo generato per funzione p-code '*nome*' con gestore di eccezioni o semantica di rimozione
C4799|funzione '*nome*' non contiene istruzioni EMMS
C4803|'*dichiarazione*': il metodo raise ha una classe di archiviazione diversa da quella dell'evento, '*dichiarazione*'
C4810|valore di pragma pack (Show) = = *numero*
C4811|valore di pragma conform (forScope, show) = = *valore*
C4820|'*tipo*': '*numero*' byte di riempimento aggiunti dopo *tipo* '*tipo*'
C4905|stringa letterale Wide eseguire il cast a '*tipo*'
C4906|cast di stringa letterale su "*tipo*'
C4912|'*attributo*': attributo ha un comportamento indefinito su un tipo definito dall'utente annidati
C4916|Per avere un dispid, '*tipo*': deve essere introdotto da un'interfaccia
C4917|'*tipo*': un GUID può solo essere associato a una classe, interfaccia o spazio dei nomi
C4918|'*carattere*': carattere non valido nell'elenco di ottimizzazione pragma
C4920|enumerazione *nome* membro *nome*=*numero* già presente in enum *nome* come *nome* = *numero*
C4921|'*nome*': valore dell'attributo '*valore*' non deve essere specificato più volte
C4925|'*dichiarazione*': Impossibile chiamare il metodo di interfaccia dispatch tramite script
C4926|'*dichiarazione*': simbolo già definito: attributi ignorati
C4927|conversione non valida. più di una conversione definita dall'utente è state implicitamente applicata
C4928|inizializzazione di copia non valida; sono state implicitamente applicate più conversioni definite dall'utente
C4929|'*descrizione*': libreria dei tipi contiene un elemento union: verrà ignorato il qualificatore 'embedded_idl'
C4930|'*dichiarazione*': funzione con prototipo non chiamata (è destinata a una definizione di variabile)?
C4931|si suppone che la libreria dei tipi è stata compilata per *numero*-bit i puntatori
C4932|Identifier (*descrizione*) e Identifier (*descrizione*) non sono distinguibili
C4934|'__delegate(multicast)' è deprecata, utilizzare Delegate' invece
C4935|Identificatore di accesso assembly modificato da '*descrizione*'
C4944|'*nome*': Impossibile importare il simbolo da '*origine*': come*dichiarazione*' esiste già nell'ambito corrente
C4945|'*nome*': Impossibile importare il simbolo da '*origine*': come*dichiarazione*'è già stato importato da un altro assembly'*origine*'
C4946|reinterpret_cast utilizzato tra le classi correlate: '*dichiarazione*'e'*dichiarazione*'
C4995|'*nome*': nome contrassegnato come obsoleto #pragma
C4996|'*problema*': *descrizione*
C4997|'*tipo*': la coclasse non implementa un'interfaccia COM o una pseudo-interfaccia
C4998|PREVISIONE DISATTESA: *descrizione*(*numero*)

## <a name="see-also"></a>Vedere anche
[L'opzione del compilatore /WV.](../../build/reference/compiler-option-warning-level.md)
[avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md)
[avviso](../../preprocessor/warning.md)
