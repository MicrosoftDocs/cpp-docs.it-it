---
title: Del compilatore C4800 avvisi tramite C5999 | Documenti Microsoft
ms.date: 05/30/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
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
- C4840
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
dev_langs:
- C++
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 06c4d65fe7b6ab2b0238c3a4e4cd081e2dc011b5
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "34704750"
---
# <a name="compiler-warnings-c4800-through-c5999"></a>Del compilatore C4800 avvisi tramite C5999

Gli articoli in questa sezione della documentazione illustrano un subset dei messaggi di avviso generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="warning-messages"></a>Messaggi di avviso

|Avviso|Messaggio|
|-------------|-------------|
|[Avviso del compilatore (livello 3) C4800](compiler-warning-level-3-c4800.md)|'*tipo*': imposto valore booleano 'true' o 'false' (avviso di prestazioni)|
|[Avviso del compilatore (livello 1) C4803](compiler-warning-level-1-c4803.md)|'*metodo*': il metodo raise ha una classe di archiviazione diversa da quella dell'evento, '*evento*'|
|[Avviso del compilatore (livello 1) C4804](compiler-warning-level-1-c4804.md)|'*operazione*': utilizzo non affidabile del tipo 'bool' nell'operazione|
|[Avviso del compilatore (livello 1) C4805](compiler-warning-level-1-c4805.md)|'*operazione*': combinazione non affidabile del tipo '*type1*'e tipo'*type2*' nell'operazione|
|Avviso del compilatore (livello 1) C4806|'*operazione*': operazione non affidabile: nessun valore di tipo '*type1*'promosso al tipo'*type2*' può eguagliare la costante data|
|Avviso del compilatore (livello 1) C4807|'*operazione*': combinazione non affidabile del tipo '*type1*'e firma il campo di bit di tipo'*type2*'|
|Avviso del compilatore (livello 1) C4808|case '*valore*' non è un valore valido per la condizione switch di tipo 'bool'|
|Avviso del compilatore (livello 1) C4809|istruzione switch è l'etichetta 'default' ridondanti. vengono concesse tutte le etichette 'case' possibili|
|Avviso del compilatore (livello 1) C4810|valore di pragma pack(show) == n|
|Avviso del compilatore (livello 1) C4811|valore di pragma conform(forScope, show) == value|
|Avviso del compilatore (livello 1) C4812|tipo di dichiarazione obsoleto: utilizzare '*new_syntax*' invece|
|Avviso del compilatore (livello 1) C4813|'*funzione*': una funzione friend delle classi locali debba essere dichiarata in precedenza|
|Avviso del compilatore (livello 4) C4816|'*param*': parametro contiene una matrice con dimensione zero che verrà troncata (a meno che l'oggetto viene passato per riferimento)|
|Avviso del compilatore (livello 1) C4817|'*membro*': utilizzo non valido di '.' per accedere al membro; sostituito con '->' dal compilatore|
|[Avviso del compilatore (livello 1) C4819](compiler-warning-level-1-c4819.md)|Il file contiene un carattere che non può essere rappresentato nella tabella codici corrente (numero). Salvare il file in formato Unicode per evitare la perdita di dati|
|[Avviso del compilatore (livello 4) C4820](compiler-warning-level-4-c4820.md)|'*byte*'byte di riempimento aggiunti dopo costrutto'*member_name*'|
|[Avviso del compilatore (livello 1) C4821](compiler-warning-level-1-c4821.md)|Impossibile determinare il tipo di codifica Unicode, salvare il file con firma (BOM)|
|Avviso del compilatore (livello 1) C4822|'member function': funzione membro della classe locale non ha un corpo|
|[Avviso del compilatore (livello 3) C4823](compiler-warning-level-3-c4823.md)|'*funzione*': utilizza puntatori di blocco ma rimozione semantica non è abilitata. È consigliabile utilizzare /EHa|
|Avviso del compilatore (livello 2) C4826|Conversione da '*type1*'a'*type2*' è con segno esteso. Ciò potrebbe causare un comportamento di runtime imprevisto.|
|Avviso del compilatore (livello 3) C4827|Un metodo 'ToString' pubblico con 0 parametri deve essere contrassegnato come virtuale ed eseguire l'override|
|[Avviso del compilatore (livello 1) C4829](compiler-warning-level-1-c4829.md)|Parametri probabilmente errati per la funzione main. Considerare ' int main (Platform:: Array\<platform:: String ^ > ^ argv)'|
|[Avviso del compilatore (livello 1) C4835](compiler-warning-level-1-c4835.md)|'*variabile*': l'inizializzatore dei dati esportati non verrà eseguita fino a quando il codice gestito viene eseguito per prima nell'assembly su host|
|Avviso del compilatore (livello 4) C4837|rilevato trigramma: '? *carattere*'sostituito da'*carattere*'|
|[Avviso del compilatore (livello 1) C4838](compiler-warning-level-1-c4838.md)|conversione da '*type_1*'a'*type_2*' richiede una conversione di narrowing|
|[Avviso del compilatore (livello 3) C4839](compiler-warning-level-3-c4839.md)|utilizzo non standard ' classe*tipo*' come argomento a una funzione variadic|
|Avviso del compilatore (livello 4) C4840|utilizzo non portabili di classe*tipo*' come argomento a una funzione variadic|
|Avviso del compilatore (livello 4) C4841|estensione non standard: identificatore di membro composta utilizzato in offsetof|
|Avviso del compilatore (livello 4) C4842|il risultato di 'offsetof' applicato a un tipo con ereditarietà multipla non è garantito la coerenza tra le versioni del compilatore|
|Avviso C4843 del compilatore|'*type1*': un gestore di eccezioni di riferimento al tipo di matrice o una funzione non è raggiungibile, utilizzare '*type2*' invece|
|Avviso C4844 del compilatore|' esportazione modulo *nome_modulo*;' è ora la sintassi preferita per un modulo di interfaccia di dichiarazione|
|[Avviso (errore) del compilatore C4867](compiler-warning-c4867.md)|'*funzione*': chiamata di funzione senza elenco di argomenti; utilizzare '*chiamare*' per creare un puntatore a membro|
|[Compilatore (livello 4) Avviso C4868](compiler-warning-c4868.md)|'_file_(*riga numero*)' compilatore non può imporre l'ordine di valutazione da sinistra a destra nell'elenco di inizializzazione tra parentesi graffe|
|Avviso del compilatore (livello 2) C4872|divisione a virgola mobile per zero rilevato durante la compilazione del grafico chiamate per il Concurrency:: parallel_for_each in: '*percorso*'|
|Avviso del compilatore (livello 1) C4880|esegue il cast da ' const *type_1*'a'*type_2*': cast di constness da un puntatore o riferimento lontano può comportare un comportamento non definito in una funzione con restrizioni amp|
|Avviso del compilatore (livello 4) C4881|il costruttore e/o il distruttore non verrà richiamato per la variabile tile_static '*variabile*'|
|Avviso del compilatore (livello 1) C4882|il passaggio di funtori con operatori di chiamata non const a Concurrency:: parallel_for_each è deprecato|
|Avviso C4900 del compilatore|Errata corrispondenza tra '*tool1*'version'*version1*'e'*tool2*'version'*version2*'|
|[Avviso del compilatore (livello 1) C4905](compiler-warning-level-1-c4905.md)|cast di stringa letterale wide su "LPSTR"|
|[Avviso del compilatore (livello 1) C4906](compiler-warning-level-1-c4906.md)|cast di stringa letterale su "LPWSTR"|
|Avviso del compilatore (livello 1) C4910|'\<identificatore >: 'dllexport' e 'extern' sono incompatibili in un'istanza esplicita|
|Avviso del compilatore (livello 1) C4912|'*attributo*': attributo ha un comportamento indefinito su un tipo definito dall'utente annidati|
|Avviso del compilatore (livello 4) C4913|l'operatore binario definito dall'utente ',' esiste, ma nessuno degli overload può convertire tutti gli operandi. Verrà utilizzato l'operatore binario ',' incorporato predefinito.|
|Avviso del compilatore (livello 1) C4916|Per avere un dispid, '*descrizione*': deve essere introdotto da un'interfaccia|
|[Avviso del compilatore (livello 1) C4917](compiler-warning-level-1-c4917.md)|'*dichiaratore*': un GUID può solo essere associato a una classe, interfaccia o spazio dei nomi|
|Avviso del compilatore (livello 4) C4918|'*carattere*': carattere non valido nell'elenco di ottimizzazione pragma|
|Avviso del compilatore (livello 1) C4920|enum enum membro member_1 = value_1 già presente in enum'enum ' come member_2 = value_2|
|Avviso del compilatore (livello 3) C4921|'*descrizione*': valore dell'attributo '*attributo*' non deve essere specificato più volte|
|Avviso del compilatore (livello 1) C4925|'*metodo*': Impossibile chiamare il metodo di interfaccia dispatch tramite script|
|Avviso del compilatore (livello 1) C4926|'*identificatore*': simbolo già definito: attributi ignorati|
|[Avviso del compilatore (livello 1) C4927](compiler-warning-level-1-c4927.md)|conversione non valida. più di una conversione definita dall'utente è state implicitamente applicata|
|[Avviso del compilatore (livello 1) C4928](compiler-warning-level-1-c4928.md)|inizializzazione di copia non valida; sono state implicitamente applicate più conversioni definite dall'utente|
|[Avviso del compilatore (livello 1) C4929](compiler-warning-level-1-c4929.md)|'*file*': libreria dei tipi contiene un elemento union: verrà ignorato il qualificatore 'embedded_idl'|
|[Avviso del compilatore (livello 1) C4930](compiler-warning-level-1-c4930.md)|'*prototipo*': funzione con prototipo non chiamata (è destinata a una definizione di variabile)?|
|[Avviso del compilatore (livello 4) C4931](compiler-warning-level-4-c4931.md)|si suppone che la libreria dei tipi sia stata compilata per puntatori a numero bit|
|Avviso del compilatore (livello 4) C4932|Identifier (*identificatore*) e \__identifier (*identificatore*) non sono distinguibili|
|Avviso del compilatore (livello 1) C4934|'__delegate(multicast)' è deprecata, utilizzare '\_delegate ' invece|
|Avviso del compilatore (livello 1) C4935|Identificatore di accesso assembly modificato da '*accesso*'|
|Avviso del compilatore (livello 1, errore) C4936|questo __declspec è supportato solo con la compilazione con /clr o /clr:pure|
|Avviso del compilatore (livello 4) C4937|'*text1*'e'*text2*'sono indistinguibili come argomenti per'*direttiva*'|
|Avviso del compilatore (livello 4) C4938|'*var*': variabile di riduzione a virgola mobile può causare risultati incoerenti in /fp: strict o fenv_access #pragma|
|Avviso C4939 del compilatore|#pragma vtordisp è deprecato e verrà rimosso in una futura versione di Visual C++|
|Avviso del compilatore (livello 1) C4944|'*simbolo*': Impossibile importare il simbolo da '*assembly1*': come*simbolo*' esiste già nell'ambito corrente|
|[Avviso del compilatore (livello 1) C4945](compiler-warning-level-1-c4945.md)|'*simbolo*': Impossibile importare il simbolo da '*assembly1*': come*simbolo*'è già stato importato da un altro assembly'*assembly2* '|
|[Avviso del compilatore (livello 1) C4946](compiler-warning-level-1-c4946.md)|reinterpret_cast utilizzato tra le classi correlate: '*class1*'e'*class2*'|
|Avviso del compilatore (livello 1) C4947|'*type_or_member*': contrassegnato come obsoleto|
|[Avviso del compilatore (livello 2) C4948](compiler-warning-level-2-c4948.md)|tipo restituito di '*della funzione di accesso*' non corrisponde al tipo dell'ultimo parametro della funzione set corrispondente|
|[Avviso del compilatore (livello 1 e livello 4) C4949](compiler-warning-level-1-and-level-4-c4949.md)|pragma 'managed' e 'unmanaged' sono significativi solo se compilati con ' / /CLR [: opzione]'|
|Avviso del compilatore (livello 1, errore) C4950|'*type_or_member*': contrassegnato come obsoleto|
|Avviso del compilatore (livello 1) C4951|'*funzione*' è stato modificato dopo la raccolta dei dati di profilo dati di profilo di funzione non utilizzati|
|Avviso del compilatore (livello 1) C4952|'*funzione*': dati di profilo non trovato nel database di programma '*pgd_file*'|
|Avviso del compilatore (livello 1) C4953|Inline '*funzione*' è stato modificato dopo la raccolta dei dati di profilo dati di profilo non utilizzati|
|Avviso C4954 del compilatore|'*funzione*': profilatura non eseguita (contiene un'espressione switch Int64)|
|Avviso C4955 del compilatore|'*import2*': importazione ignorata; importazione già eseguita da '*import1*'|
|Avviso del compilatore (livello 1, errore) C4956|'*tipo*': tipo non verificabile|
|Avviso del compilatore (livello 1, errore) C4957|'*cast*': cast esplicito da '*cast_from*'a'*cast_to*' non è verificabile|
|Avviso del compilatore (livello 1, errore) C4958|'*operazione*': aritmetica dei puntatori non verificabile|
|Avviso del compilatore (livello 1, errore) C4959|non è possibile definire il tipo non gestito '*tipo*' in /CLR: safe perché l'accesso ai membri produce codice non verificabile|
|Avviso del compilatore (livello 4) C4960|'*funzione*' è troppo grande per il profiling|
|Avviso del compilatore (livello 1) C4961|Dati di profilo non sottoposti a merge in '.pgd file', ottimizzazioni PGO disabilitate|
|Avviso del compilatore (livello 4) C4962|'*funzione*': ottimizzazioni PGO disabilitate perché le ottimizzazioni provocano l'incoerenza i dati di profilo|
|Avviso del compilatore (livello 1) C4963|'*descrizione*': dati di profilo non trovati; nella compilazione instrumentata utilizzate opzioni del compilatore diverse|
|[Avviso del compilatore (livello 1) C4964](compiler-warning-level-1-c4964.md)|Nessuna opzione di ottimizzazione specificata; informazioni sul profilo non verranno raccolti|
|[Avviso del compilatore (livello 1) C4965](compiler-warning-level-1-c4965.md)|boxing implicito dell'integer 0; utilizzare nullptr o un cast esplicito|
|Avviso del compilatore (livello 1) C4966|'*funzione*' dispone di un'annotazione code_seg con nome segmento non supportato, annotazione ignorato|
|Avviso C4970 del compilatore|costruttore di delegato: oggetto di destinazione ignorato poiché '*tipo*' è statico|
|Avviso del compilatore (livello 1) C4971|Ordine argomenti: \<oggetto di destinazione >, \<funzione di destinazione > per il costruttore di delegato è obsoleto, utilizzare \<funzione di destinazione >, \<oggetto di destinazione = "" >|
|Avviso del compilatore (livello 1, errore) C4972|La modifica o il trattamento diretto del risultato di una operazione di unboxing come lvalue non è verificabile|
|Avviso del compilatore (livello 1) C4973|'*simbolo*': contrassegnato come obsoleto|
|Avviso del compilatore (livello 1) C4974|'*simbolo*': contrassegnato come obsoleto|
|Avviso del compilatore (livello 3) C4981|Warbird: funzione '*funzione*' contrassegnata come forceinline non resa inline perché contiene semantica delle eccezioni|
|Avviso del compilatore (livello 3) C4985|nome del simbolo ': attributi non presenti nella dichiarazione precedente.|
|[Avviso del compilatore C4986](compiler-warning-c4986.md)|'*dichiarazione*': specifica di eccezione non corrisponde alla dichiarazione precedente|
|Avviso del compilatore (livello 4) C4987|utilizzata estensione non standard: 'throw (...)'|
|Avviso del compilatore (livello 4) C4988|'*variabile*': variabile dichiarata di fuori ambito di classe/funzione|
|Avviso del compilatore (livello 4) C4989|'*tipo*': tipo con definizioni in conflitto.|
|Avviso del compilatore (livello 3) C4990|Warbird: *messaggio*|
|Avviso del compilatore (livello 3) C4991|Warbird: funzione '*funzione*' contrassegnata come forceinline non resa inline perché il livello di protezione di inline è maggiore dell'elemento padre|
|Avviso del compilatore (livello 3) C4992|Warbird: funzione '*funzione*' contrassegnata come forceinline non resa inline perché contiene assembly inline che non possono essere protetti|
|[Avviso del compilatore (livello 3) C4995](compiler-warning-level-3-c4995.md)|'*funzione*': nome contrassegnato come obsoleto #pragma|
|[Avviso del compilatore (livello 3) C4996](compiler-warning-level-3-c4996.md)|'*descrizione*': *messaggio*|
|Avviso del compilatore (livello 1) C4997|'*classe*': la coclasse non implementa un'interfaccia COM o una pseudo-interfaccia|
|Avviso del compilatore (livello 1) C4998|PREVISIONE DISATTESA: *previsione*(*valore*)|
|C4999 avviso del compilatore|Avviso sconosciuto scegliere supporto tecnico dal menu della Guida di Visual C++ o aprire il file della Guida di supporto tecnico per ulteriori informazioni|
|Avviso C5022 del compilatore|'*tipo*': specificato più di un costruttore di spostamento|
|Avviso C5023 del compilatore|'*tipo*': specificati più operatori di assegnazione|
|Avviso del compilatore (livello 4) C5024|'*tipo*': spostamento costruttore è stato definito in modo implicito come eliminato|
|Avviso del compilatore (livello 4) C5025|'*tipo*': spostare l'operatore di assegnazione è stato definito in modo implicito come eliminato|
|Avviso del compilatore (livello 1 e livello 4) C5026|'*tipo*': spostamento costruttore è stato definito in modo implicito come eliminato|
|Avviso del compilatore (livello 1 e livello 4) C5027|'*tipo*': spostare l'operatore di assegnazione è stato definito in modo implicito come eliminato|
|Avviso del compilatore (livello 1) C5028|'*nome*': l'allineamento specificato nella dichiarazione precedente (*numero*) non specificato nella definizione|
|Avviso del compilatore (livello 4) C5029|utilizzata estensione non standard: gli attributi di allineamento in C++ si applicano a variabili, membri dati e solo i tipi di tag|
|Avviso del compilatore (livello 3) C5030|attributo '*attributo*' non è riconosciuto|
|Avviso del compilatore (livello 4) C5031|#pragma warning (POP): probabile mancata corrispondenza, visualizzazione dello stato di avviso inserito nel file diverso|
|Avviso del compilatore (livello 4) C5032|rilevato #pragma warning non corrispondente warning (POP) #pragma|
|Avviso del compilatore (livello 1) C5033|'*-classe di archiviazione*' non è più una classe di archiviazione supportati|
|Avviso C5034 del compilatore|utilizzo di funzione intrinseca '*intrinseco*' funzione *funzione* verrà compilato come codice guest|
|Avviso C5035 del compilatore|utilizzo della funzionalità '*funzionalità*' funzione *funzione* verrà compilato come codice guest|
|Avviso del compilatore (livello 1) C5036|varargs funzione di conversione di puntatore durante la compilazione con /hybrid:x86arm64 '*type1*'a'*type2*'|
|Avviso del compilatore C5037 (errore)|'*funzione membro*': una definizione out-of-line di un membro di un modello di classe non può avere argomenti predefiniti|
|[Avviso del compilatore (livello 4) C5038](c5038.md)|membro dati '*member1*'initialized dopo il membro dati'*member2*'|
|Avviso del compilatore (livello 4) C5039|'*funzione*': puntatore o riferimento a potenzialmente generare funzione passato alla funzione extern C sotto - /EHc. Se questa funzione genera un'eccezione, può verificarsi un comportamento indefinito.|
|Avviso del compilatore (livello 3) C5040|le specifiche di eccezione dinamiche sono valide solo in C++ 14 e versioni precedenti; considerando come noexcept (false)|
|Avviso del compilatore (livello 1) C5041|'*definizione*': definizione out-of-line per un membro dati statici constexpr non è necessario ed è deprecato in C++ 17|
|Avviso del compilatore (livello 3) C5042|'*dichiarazione*': le dichiarazioni di funzione nell'ambito del blocco non possono essere specificato come 'inline' in C++ standard, rimuovere l'identificatore 'inline'|
|Avviso del compilatore (livello 2) C5043|'*specifica*': specifica di eccezione non corrisponde alla dichiarazione precedente|
|Avviso del compilatore (livello 4) C5044|Un argomento per l'opzione della riga di comando *opzione* punta a un percorso '*percorso*' non esiste|
