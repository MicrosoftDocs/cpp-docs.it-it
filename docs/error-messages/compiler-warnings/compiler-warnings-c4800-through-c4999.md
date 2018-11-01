---
title: Del compilatore C4800 avvisi tramite C5999
ms.date: 10/24/2018
f1_keywords:
- C4806
- C4807
- C4808
- C4809
- C4810
- C4811
- C4812
- C4813
- C4816
- C4817
- C4822
- C4825
- C4827
- C4837
- C4841
- C4842
- C4843
- C4844
- C4872
- C4880
- C4881
- C4882
- C4900
- C4910
- C4912
- C4913
- C4916
- C4918
- C4920
- C4921
- C4925
- C4926
- C4932
- C4934
- C4935
- C4936
- C4937
- C4938
- C4939
- C4944
- C4947
- C4950
- C4951
- C4952
- C4953
- C4954
- C4955
- C4956
- C4957
- C4958
- C4959
- C4960
- C4961
- C4962
- C4963
- C4966
- C4970
- C4971
- C4972
- C4973
- C4974
- C4981
- C4985
- C4987
- C4988
- C4989
- C4990
- C4991
- C4992
- C4997
- C4998
- C4999
- C5022
- C5023
- C5024
- C5025
- C5026
- C5027
- C5028
- C5029
- C5030
- C5031
- C5032
- C5033
- C5034
- C5035
- C5036
- C5037
- C5039
- C5040
- C5041
- C5042
- C5043
- C5044
- C5045
- C5046
ms.openlocfilehash: 672aa1b0e298be3b6754b1706e721ad6798230ec
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50642858"
---
# <a name="compiler-warnings-c4800-through-c5999"></a>Del compilatore C4800 avvisi tramite C5999

Gli articoli in questa sezione della documentazione illustrano un subset dei messaggi di avviso generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="warning-messages"></a>Messaggi di avviso

|Avviso|Messaggio|
|-------------|-------------|
|[Avviso del compilatore (livello 3) C4800](compiler-warning-level-3-c4800.md)|«*tipo*': forzare il valore bool 'true' o 'false' (avviso di prestazioni)|
|[Avviso del compilatore (livello 1) C4803](compiler-warning-level-1-c4803.md)|«*metodo*': il metodo raise ha una classe di archiviazione diverso da quello dell'evento, '*evento*»|
|[Avviso del compilatore (livello 1) C4804](compiler-warning-level-1-c4804.md)|«*operazione*': utilizzo non affidabile del tipo 'bool' nell'operazione|
|[Avviso del compilatore (livello 1) C4805](compiler-warning-level-1-c4805.md)|«*operazione*': combinazione non affidabile del tipo '*type1*'e tipo'*type2*' nell'operazione|
|Avviso del compilatore (livello 1) C4806|«*operazione*': operazione non affidabile: nessun valore di tipo '*type1*'promosso al tipo'*type2*' può eguagliare la costante data|
|Avviso del compilatore (livello 1) C4807|«*operazione*': combinazione non affidabile del tipo '*type1*'e firmati campo di bit del tipo'*type2*»|
|Avviso del compilatore (livello 1) C4808|case '*valore*' è non un valore valido per la condizione switch di tipo 'bool'|
|Avviso del compilatore (livello 1) C4809|istruzione switch con etichetta ridondante 'default'; tutte le etichette 'case' possibili|
|Avviso del compilatore (livello 1) C4810|valore di pragma pack(show) == n|
|Avviso del compilatore (livello 1) C4811|valore di pragma conform(forScope, show) == value|
|Avviso del compilatore (livello 1) C4812|tipo di dichiarazione obsoleto: usare '*new_syntax*' invece|
|Avviso del compilatore (livello 1) C4813|«*funzione*': una funzione friend delle classi locali debba essere dichiarata in precedenza|
|Avviso del compilatore (livello 4) C4816|«*param*': parametro contiene una matrice con dimensione zero che verrà troncata (a meno che l'oggetto viene passato per riferimento)|
|Avviso del compilatore (livello 1) C4817|'*membro*': utilizzo non valido di '.' per accedere a questo membro; sostituito con '->' dal compilatore|
|[Avviso del compilatore (livello 1) C4819](compiler-warning-level-1-c4819.md)|Il file contiene un carattere che non può essere rappresentato nella tabella codici corrente (numero). Salvare il file in formato Unicode per evitare la perdita di dati|
|[Avviso del compilatore (livello 4) C4820](compiler-warning-level-4-c4820.md)|«*byte*'byte di spaziatura interna aggiunti dopo costrutto'*member_name*»|
|[Avviso del compilatore (livello 1) C4821](compiler-warning-level-1-c4821.md)|Non è possibile determinare il tipo di codifica Unicode salvare il file con firma (BOM)|
|Avviso del compilatore (livello 1) C4822|'member function': funzione membro della classe locale non ha un corpo|
|[Avviso del compilatore (livello 3) C4823](compiler-warning-level-3-c4823.md)|'*funzione*': utilizza puntatori di blocco di rimozione ma la semantica non è abilitata. È consigliabile usare /EHa.|
|Avviso del compilatore (livello 2) C4826|Conversione da '*type1*'a'*type2*' è con segno esteso. Ciò potrebbe causare un comportamento di runtime imprevisto.|
|Avviso del compilatore (livello 3) C4827|Un metodo 'ToString' pubblico con 0 parametri deve essere contrassegnato come virtuale ed eseguire l'override|
|[Avviso del compilatore (livello 1) C4829](compiler-warning-level-1-c4829.md)|Parametri probabilmente errati per la funzione main. Considerare ' int main (Platform:: Array\<platform:: String ^ > ^ argv)'|
|[Avviso del compilatore (livello 1) C4835](compiler-warning-level-1-c4835.md)|«*variabile*': l'inizializzatore di dati esportati non verrà eseguita fino a quando non viene eseguito per primo codice gestito nell'assembly su host|
|Avviso del compilatore (livello 4) C4837|rilevato trigramma: '?? *carattere*'sostituito da'*carattere*'|
|[Avviso del compilatore (livello 1) C4838](compiler-warning-level-1-c4838.md)|conversione da '*type_1*'a'*type_2*' richiede una conversione di narrowing|
|[Avviso del compilatore (livello 3) C4839](compiler-warning-level-3-c4839.md)|uso non standard della classe*tipo*' come argomento per una funzione variadic|
|[Avviso del compilatore (livello 4) C4840](compiler-warning-level-4-c4840.md)|uso non portabile della classe*tipo*' come argomento per una funzione variadic|
|Avviso del compilatore (livello 4) C4841|estensione non standard: indicatore di membro composto usato in offsetof|
|Avviso del compilatore (livello 4) C4842|il risultato di 'offsetof' applicato a un tipo mediante ereditarietà multipla non è garantito a essere coerente tra versioni diverse del compilatore|
|Genera un avviso C4843|«*type1*': un gestore di eccezioni del riferimento al tipo di matrice o una funzione non è raggiungibile, usare '*type2*' invece|
|Genera un avviso C4844|' export module *module_name*;' è ora la sintassi preferita per dichiarare un'interfaccia del modulo|
|[Avviso del compilatore (livello 4) C4866](c4866.md)| compilatore non può imporre l'ordine di valutazione da sinistra a destra per la chiamata a *nome_operatore*|
|[Avviso (errore) del compilatore C4867](compiler-warning-c4867.md)|«*funzione*': chiamata di funzione senza elenco di argomenti; utilizzare '*chiamare*' per creare un puntatore a membro|
|[Avviso (livello 4) del compilatore C4868](compiler-warning-c4868.md)|«_file_(*line_number*)' compilatore non può imporre l'ordine di valutazione da sinistra a destra nell'elenco di inizializzazione tra parentesi graffe|
|Avviso del compilatore (livello 2) C4872|divisione a virgola mobile per zero rilevato durante la compilazione del grafico chiamate per il Concurrency:: parallel_for_each in: '*posizione*'|
|Avviso del compilatore (livello 1) C4880|esegue il cast da ' const *type_1*'a'*type_2*': il cast di constness lontano da un puntatore o riferimento potrebbe causare un comportamento non definito in una funzione con restrizioni amp|
|Avviso del compilatore (livello 4) C4881|il costruttore e/o il distruttore non verrà richiamato per la variabile tile_static '*variabile*'|
|Avviso del compilatore (livello 1) C4882|il passaggio di funtori con operatori di chiamata non const a Concurrency:: parallel_for_each è deprecato|
|Genera un avviso C4900|Errata corrispondenza tra '*tool1*'version'*version1*"e"*tool2*'version'*version2*'|
|[Avviso del compilatore (livello 1) C4905](compiler-warning-level-1-c4905.md)|cast di stringa letterale wide su "LPSTR"|
|[Avviso del compilatore (livello 1) C4906](compiler-warning-level-1-c4906.md)|cast di stringa letterale su "LPWSTR"|
|Avviso del compilatore (livello 1) C4910|'\<identificatore >: 'dllexport' e 'extern' sono incompatibili in una creazione esplicita di istanza|
|Avviso del compilatore (livello 1) C4912|«*attributo*': attributo ha un comportamento indefinito su un tipo annidato definito dall'utente|
|Avviso del compilatore (livello 4) C4913|l'operatore binario definito dall'utente ',' esiste, ma nessuno degli overload può convertire tutti gli operandi. Verrà utilizzato l'operatore binario ',' incorporato predefinito.|
|Avviso del compilatore (livello 1) C4916|Per avere un dispid, '*descrizione*': deve essere introdotto da un'interfaccia|
|[Avviso del compilatore (livello 1) C4917](compiler-warning-level-1-c4917.md)|«*dichiaratore*': un GUID può solo essere associato a una classe, interfaccia o dello spazio dei nomi|
|Avviso del compilatore (livello 4) C4918|«*carattere*': carattere non valido nell'elenco di ottimizzazione pragma|
|Avviso del compilatore (livello 1) C4920|Enumerazione enum membro member_1 = value_1 già presente in enum'enum ' come member_2 = value_2|
|Avviso del compilatore (livello 3) C4921|«*description*': valore dell'attributo '*attributo*' non deve essere specificato più volte|
|Avviso del compilatore (livello 1) C4925|«*metodo*': Impossibile chiamare il metodo di interfaccia dispatch da script|
|Avviso del compilatore (livello 1) C4926|«*identificatore*': simbolo già definito: attributi ignorati|
|[Avviso del compilatore (livello 1) C4927](compiler-warning-level-1-c4927.md)|conversione non valida; più di una conversione definita dall'utente è state implicitamente applicata|
|[Avviso del compilatore (livello 1) C4928](compiler-warning-level-1-c4928.md)|inizializzazione di copia non valida; sono state implicitamente applicate più conversioni definite dall'utente|
|[Avviso del compilatore (livello 1) C4929](compiler-warning-level-1-c4929.md)|«*file*': libreria dei tipi contiene un elemento union: verrà ignorato il qualificatore 'embedded_idl'|
|[Avviso del compilatore (livello 1) C4930](compiler-warning-level-1-c4930.md)|«*prototipo*': funzione con prototipo non chiamata (era destinata a una definizione di variabile)?|
|[Avviso del compilatore (livello 4) C4931](compiler-warning-level-4-c4931.md)|si suppone che la libreria dei tipi sia stata compilata per puntatori a numero bit|
|Avviso del compilatore (livello 4) C4932|Identifier (*identifier*) e \_identificatori (*identificatore*) non sono distinguibili|
|Avviso del compilatore (livello 1) C4934|'__delegate(multicast)' è deprecata, usare '\_delegate ' invece|
|Avviso del compilatore (livello 1) C4935|Identificatore di accesso assembly modificato da '*accesso*'|
|Avviso del compilatore (livello 1, errore) C4936|questo __declspec è supportato solo con la compilazione con /clr o /clr:pure|
|Avviso del compilatore (livello 4) C4937|«*text1*'e'*text2*'sono indistinguibili come argomenti per'*direttiva*»|
|Avviso del compilatore (livello 4) C4938|«*var*': variabile di riduzione a virgola mobile può causare risultati incoerenti in /fp: strict o #pragma fenv_access|
|Genera un avviso C4939|#pragma vtordisp è deprecato e verrà rimosso in una futura versione di Visual C++|
|Avviso del compilatore (livello 1) C4944|«*simbolo*': non è possibile importare il simbolo da '*assembly1*': come*simbolo*' esiste già nell'ambito corrente|
|[Avviso del compilatore (livello 1) C4945](compiler-warning-level-1-c4945.md)|«*simbolo*': non è possibile importare il simbolo da '*assembly1*': come*simbolo*'è già stato importato da un altro assembly'*assembly2* '|
|[Avviso del compilatore (livello 1) C4946](compiler-warning-level-1-c4946.md)|reinterpret_cast utilizzato tra le classi correlate: '*class1*'e'*class2*'|
|Avviso del compilatore (livello 1) C4947|«*type_or_member*': contrassegnato come obsoleto|
|[Avviso del compilatore (livello 2) C4948](compiler-warning-level-2-c4948.md)|tipo restituito di '*funzione di accesso*' non corrisponde al tipo dell'ultimo parametro del metodo set corrispondente|
|[Avviso del compilatore (livello 1 e livello 4) C4949](compiler-warning-level-1-and-level-4-c4949.md)|pragma 'managed' e 'unmanaged' sono significativi solo quando viene compilato con ' / /CLR [: opzione]'|
|Avviso del compilatore (livello 1, errore) C4950|«*type_or_member*': contrassegnato come obsoleto|
|Avviso del compilatore (livello 1) C4951|«*funzione*' è stato modificato dopo la raccolta dei dati, profilo dati di profilo di funzione non utilizzati|
|Avviso del compilatore (livello 1) C4952|«*funzione*': nessun dato di profilo trovati nel database di programma '*pgd_file*»|
|Avviso del compilatore (livello 1) C4953|Entità incorporata '*funzione*' è stato modificato dopo la raccolta dei dati, profilo dati di profilo non utilizzati|
|Genera un avviso C4954|«*funzione*': non profilate (contiene un'espressione switch __int64)|
|Genera un avviso C4955|«*import2*': importazione ignorata; importazione già eseguita da '*import1*»|
|Avviso del compilatore (livello 1, errore) C4956|«*tipo*': questo tipo non verificabile|
|Avviso del compilatore (livello 1, errore) C4957|«*cast*': cast esplicito da '*cast_from*'a'*cast_to*' non è verificabile|
|Avviso del compilatore (livello 1, errore) C4958|«*operazione*': aritmetica dei puntatori non verificabile|
|Avviso del compilatore (livello 1, errore) C4959|non è possibile definire il tipo non gestito '*tipo*' in /CLR: safe perché l'accesso ai membri produce codice non verificabile|
|Avviso del compilatore (livello 4) C4960|«*funzione*' è troppo grande per la profilatura|
|Avviso del compilatore (livello 1) C4961|Dati di profilo non sottoposti a merge in '.pgd file', ottimizzazioni PGO disabilitate|
|Avviso del compilatore (livello 4) C4962|«*funzione*': ottimizzazioni PGO disabilitate perché le ottimizzazioni provocano l'incoerenza dei dati del profilo|
|Avviso del compilatore (livello 1) C4963|«*descrizione*': nessun dato di profilo trovati; nella compilazione instrumentata sono state utilizzate opzioni del compilatore diverse|
|[Avviso del compilatore (livello 1) C4964](compiler-warning-level-1-c4964.md)|Nessuna opzione di ottimizzazione specificata; info del profilo non verrà raccolti|
|[Avviso del compilatore (livello 1) C4965](compiler-warning-level-1-c4965.md)|casella implicita dell'intero 0. usare un cast esplicito o nullptr|
|Avviso del compilatore (livello 1) C4966|«*funzione*' ha un'annotazione code_seg con nome segmento non supportato, ignorato annotazione|
|Genera un avviso C4970|costruttore di delegato: oggetto di destinazione ignorato perché '*tipo*' è statico|
|Avviso del compilatore (livello 1) C4971|Ordine argomenti: \<oggetto di destinazione >, \<funzione di destinazione > per il costruttore di delegato è deprecato, utilizzare \<funzione di destinazione >, \<oggetto target = "" >|
|Avviso del compilatore (livello 1, errore) C4972|La modifica o il trattamento diretto del risultato di una operazione di unboxing come lvalue non è verificabile|
|Avviso del compilatore (livello 1) C4973|«*simbolo*': contrassegnato come deprecato|
|Avviso del compilatore (livello 1) C4974|«*simbolo*': contrassegnato come deprecato|
|Avviso del compilatore (livello 3) C4981|Warbird: funzione '*funzione*' contrassegnata come forceinline non resa inline perché contiene la semantica delle eccezioni|
|Avviso del compilatore (livello 3) C4985|nome del simbolo ': attributi non presenti nella dichiarazione precedente.|
|[Avviso del compilatore C4986](compiler-warning-c4986.md)|«*dichiarazione*': specifica di eccezione non corrisponde alla dichiarazione precedente|
|Avviso del compilatore (livello 4) C4987|utilizzata estensione non standard: 'throw (...)'|
|Avviso del compilatore (livello 4) C4988|«*variabile*': variabile dichiarata all'esterno ambito classe/funzione|
|Avviso del compilatore (livello 4) C4989|«*tipo*': tipo con definizioni in conflitto.|
|Avviso del compilatore (livello 3) C4990|Warbird: *messaggio*|
|Avviso del compilatore (livello 3) C4991|Warbird: funzione '*funzione*' contrassegnata come forceinline non resa inline perché il livello di protezione di inline è maggiore dell'elemento padre|
|Avviso del compilatore (livello 3) C4992|Warbird: funzione '*funzione*' contrassegnata come forceinline non resa inline perché contiene assembly inline che non possono essere protetti|
|[Avviso del compilatore (livello 3) C4995](compiler-warning-level-3-c4995.md)|«*funzione*': nome contrassegnato come deprecato #pragma|
|[Avviso del compilatore (livello 3) C4996](compiler-warning-level-3-c4996.md)|«*description*': *messaggio*|
|Avviso del compilatore (livello 1) C4997|«*classe*': la coclasse non implementa un'interfaccia COM o una pseudo-interfaccia|
|Avviso del compilatore (livello 1) C4998|PREVISIONE DISATTESA: *aspettativa*(*valore*)|
|Genera un avviso C4999|Avviso sconosciuto scegliere supporto tecnico dal menu di Visual C++ o aprire il file della Guida di supporto tecnico per altre informazioni|
|Genera un avviso C5022|«*tipo*': specificato più di un costruttore di spostamento|
|Genera un avviso C5023|«*tipo*': più operatori di assegnazione spostamento specificati|
|Avviso del compilatore (livello 4) C5024|«*tipo*': spostare costruttore è stato definito in modo implicito come eliminato|
|Avviso del compilatore (livello 4) C5025|«*tipo*': sposta l'operatore di assegnazione è stato definito in modo implicito come eliminato|
|Avviso del compilatore (livello 1 e livello 4) C5026|«*tipo*': spostare costruttore è stato definito in modo implicito come eliminato|
|Avviso del compilatore (livello 1 e livello 4) C5027|«*tipo*': sposta l'operatore di assegnazione è stato definito in modo implicito come eliminato|
|Avviso del compilatore (livello 1) C5028|'*name*': l'allineamento specificato nella dichiarazione precedente (*numero*) non specificato nella definizione|
|Avviso del compilatore (livello 4) C5029|utilizzata estensione non standard: gli attributi di allineamento in C++ si applicano a variabili, membri dati e solo i tipi di tag|
|Avviso del compilatore (livello 3) C5030|attributo '*attributo*' non è riconosciuto|
|Avviso del compilatore (livello 4) C5031|#pragma warning (POP): probabile mancata corrispondenza, si estraggono lo stato di avviso inserito nel file diverso|
|Avviso del compilatore (livello 4) C5032|rilevato #pragma warning (push) non corrispondente warning (POP) #pragma|
|Avviso del compilatore (livello 1) C5033|«*classe di archiviazione*' non è più una classe di archiviazione supportati|
|Genera un avviso C5034|utilizzo della funzione intrinseca '*intrinseco*' determina la funzione *funzione* deve essere compilato come codice guest|
|Genera un avviso C5035|uso di funzionalità '*caratteristica*' determina la funzione *funzione* deve essere compilato come codice guest|
|Avviso del compilatore (livello 1) C5036|conversione del puntatore a funzione varargs durante la compilazione con/Hybrid:x86arm64»*type1*'a'*type2*'|
|Avviso del compilatore C5037 (errore)|«*funzione membro*': una definizione out-of-line di un membro di un modello di classe non può avere argomenti predefiniti|
|[Avviso del compilatore (livello 4) C5038](c5038.md)|membro dati '*membro1*'verrà inizializzato dopo il membro dati'*membro2*'|
|Avviso del compilatore (livello 4) C5039|«*funzione*': puntatore o riferimento alla funzione che potrebbe generare passato alla funzione extern C in - EHc. Se questa funzione genera un'eccezione, può verificarsi un comportamento indefinito.|
|Avviso del compilatore (livello 3) C5040|le specifiche di eccezione dinamiche sono valide solo in c++14 e versioni precedenti; considerando come noexcept (false)|
|Avviso del compilatore (livello 1) C5041|«*definizione*': definizione out-of-line per il membro dati statico constexpr non è necessaria ed è deprecata in c++17|
|Avviso del compilatore (livello 3) C5042|«*dichiarazione*': le dichiarazioni di funzione nell'ambito del blocco non possono essere specificato 'inline' in C++ standard, rimuovere l'identificatore 'inline'|
|Avviso del compilatore (livello 2) C5043|«*specification*': specifica di eccezione non corrisponde alla dichiarazione precedente|
|Avviso del compilatore (livello 4) C5044|Un argomento all'opzione della riga di comando *opzione* punta a un percorso '*percorso*' che non esiste|
|[C5045 avviso del compilatore](c5045.md)|Compilatore inserirà la mitigazione Spectre per il carico di memoria se l'opzione /Qspectre specificato|
|[Avviso del compilatore (livello 2) C5046](c5046.md)|«*funzione*': simbolo relative a tipi con collegamento interno non definito|
