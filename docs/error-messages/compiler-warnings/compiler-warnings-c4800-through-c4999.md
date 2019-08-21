---
title: Avvisi del compilatore da C4800 a C5999
ms.date: 04/21/2019
f1_keywords:
- C4808
- C4809
- C4825
- C4827
- C4837
- C4841
- C4842
- C4843
- C4844
- C4845
- C4846
- C4847
- C4848
- C4872
- C4880
- C4881
- C4882
- C4910
- C4916
- C4921
- C4934
- C4951
- C4954
- C4955
- C4963
- C4966
- C4970
- C4971
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
- C4998
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
- C5047
- C5048
- C5049
- C5050
- C5100
- C5101
- C5102
- C5103
- C5104
- C5105
- C5106
- C5107
helpviewer_keywords:
- C4808
- C4809
- C4825
- C4827
- C4837
- C4841
- C4842
- C4843
- C4844
- C4845
- C4846
- C4847
- C4848
- C4872
- C4880
- C4881
- C4882
- C4910
- C4916
- C4921
- C4934
- C4951
- C4954
- C4955
- C4963
- C4966
- C4970
- C4971
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
- C4998
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
- C5047
- C5048
- C5049
- C5050
- C5100
- C5101
- C5102
- C5103
- C5104
- C5105
- C5106
- C5107
ms.openlocfilehash: ae73d4ba503dfbbc27f91040c31beb91da3b7e54
ms.sourcegitcommit: 9d4ffb8e6e0d70520a1e1a77805785878d445b8a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/20/2019
ms.locfileid: "69631543"
---
# <a name="compiler-warnings-c4800-through-c5999"></a>Avvisi del compilatore da C4800 a C5999

Negli articoli di questa sezione della documentazione viene illustrato un subset dei messaggi di avviso generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="warning-messages"></a>Messaggi di avviso

|Avviso|Messaggio|
|-------------|------------|
|[Avviso del compilatore (livello 4) C4800](compiler-warning-level-3-c4800.md)| Conversione implicita da'*Type*' a bool. Possibile perdita di informazioni |
|[Avviso del compilatore (livello 1) C4803](compiler-warning-level-1-c4803.md)|'*Method*': il metodo Raise ha una classe di archiviazione diversa da quella dell'evento,'*Event*'|
|[Avviso del compilatore (livello 1) C4804](compiler-warning-level-1-c4804.md)|'*Operation*': utilizzo non sicuro del tipo ' bool ' nell'operazione|
|[Avviso del compilatore (livello 1) C4805](compiler-warning-level-1-c4805.md)|'*Operation*': combinazione non affidabile del tipo '*tipo1*' e del tipo '*tipo2*' nell'operazione|
|[Avviso del compilatore (livello 1) C4806](compiler-warning-level-1-c4806.md)|'*Operation*': operazione non affidabile: nessun valore di tipo '*tipo1*' promosso al tipo '*tipo2*' può essere uguale alla costante specificata|
|[Avviso del compilatore (livello 1) C4807](compiler-warning-level-1-c4807.md)|'*Operation*': combinazione non affidabile del tipo '*tipo1*' e del campo di bit signed di tipo '*tipo2*'|
|Avviso del compilatore (livello 1) C4808|il caso '*value*' non è un valore valido per la condizione switch di tipo ' bool '|
|Avviso del compilatore (livello 1) C4809|l'etichetta ' default ' dell'istruzione switch è ridondante; vengono fornite tutte le etichette ' case ' possibili|
|[Avviso del compilatore (livello 1) C4810](compiler-warning-level-1-c4810.md)|valore di pragma pack(show) == n|
|[Avviso del compilatore (livello 1) C4811](compiler-warning-level-1-c4811.md)|valore di pragma conform(forScope, show) == value|
|[Avviso del compilatore (livello 1) C4812](compiler-warning-level-1-c4812.md)|stile di dichiarazione obsoleto: usare '*new_syntax*'|
|[Avviso del compilatore (livello 1) C4813](compiler-warning-level-1-c4813.md)|'*Function*': una funzione Friend di una classe locale deve essere stata dichiarata in precedenza|
|[Avviso del compilatore (livello 4) C4816](compiler-warning-level-4-c4816.md)|'*param*': il parametro ha una matrice di dimensioni zero che verrà troncata, a meno che l'oggetto non venga passato per riferimento|
|[Avviso del compilatore (livello 1) C4817](compiler-warning-level-1-c4817.md)|'*member*': utilizzo non valido di ' .' per accedere a questo membro; il compilatore è stato sostituito con '->'|
|[Avviso del compilatore (livello 1) C4819](compiler-warning-level-1-c4819.md)|Il file contiene un carattere che non può essere rappresentato nella tabella codici corrente (numero). Salvare il file in formato Unicode per evitare la perdita di dati|
|[Avviso del compilatore (livello 4) C4820](compiler-warning-level-4-c4820.md)|riempimentobyte ' bytes ' aggiunto dopo il costrutto '*MEMBER_NAME*'|
|[Avviso del compilatore (livello 1) C4821](compiler-warning-level-1-c4821.md)|Impossibile determinare il tipo di codifica Unicode. salvare il file con la firma (BOM)|
|[Avviso del compilatore (livello 1) C4822](compiler-warning-level-1-c4822.md)|' member function ': la funzione membro della classe locale non dispone di un corpo|
|[Avviso del compilatore (livello 3) C4823](compiler-warning-level-3-c4823.md)|'*Function*': USA puntatori di blocco ma la semantica di rimozione non è abilitata. Prendere in considerazione l'uso di/EHa|
|Avviso del compilatore (livello 2) C4826|La conversione da'*tipo1*' a'*tipo2*' ha un segno esteso. Questo potrebbe causare un comportamento imprevisto in fase di esecuzione.|
|Avviso del compilatore (livello 3) C4827|Un metodo ' ToString ' pubblico con 0 parametri deve essere contrassegnato come virtuale ed eseguire l'override|
|[Avviso del compilatore (livello 1) C4829](compiler-warning-level-1-c4829.md)|Parametri probabilmente errati per la funzione main. Considerare ' int Main (Platform:: array\<Platform:: String ^ > ^ argv)'|
|[Avviso del compilatore (livello 1) C4835](compiler-warning-level-1-c4835.md)|'*Variable*': l'inizializzatore per i dati esportati non verrà eseguito finché il codice gestito non viene eseguito per la prima volta nell'assembly host|
|Avviso del compilatore (livello 4) C4837|è stato rilevato un trigramma:'?? *carattere*' sostituito da'*carattere*'|
|[Avviso del compilatore (livello 1) C4838](compiler-warning-level-1-c4838.md)|la conversione da'*TYPE_1*' a'*TYPE_2*' richiede una conversione verso un tipo di caratteri più piccolo|
|[Avviso del compilatore (livello 3) C4839](compiler-warning-level-3-c4839.md)|uso non standard della classe '*Type*' come argomento di una funzione Variadic|
|[Avviso del compilatore (livello 4) C4840](compiler-warning-level-4-c4840.md)|uso non portabile della classe '*Type*' come argomento di una funzione Variadic|
|Avviso del compilatore (livello 4) C4841|utilizzata estensione non standard: indicatore di membro composto usato in offsetof|
|Avviso del compilatore (livello 4) C4842|il risultato di ' offsetof ' applicato a un tipo che usa l'ereditarietà multipla non è garantito che sia coerente tra le versioni del compilatore|
|Avviso del compilatore C4843|'*tipo1*': Un gestore di eccezioni di riferimento a un tipo di matrice o di funzione non è raggiungibile. utilizzare '*tipo2*'|
|Avviso del compilatore C4844|' Export module *module_name*;' è ora la sintassi preferita per dichiarare un'interfaccia di modulo|
| Avviso del compilatore (livello 4) C4845 | '\_\|\|\|\[declspec (No\_initAll)'vieneignoratosenonèstatospecificato'/d1initall0123]'nellarigadicomando\_\_ |
| Avviso del compilatore (livello 4) C4846 | '*value*' non è un argomento valido per '/d1initall ': flag della riga di comando ignorato |
| Avviso del compilatore (livello 4) C4847 | '\_declspec\_(No\_init\_All)' può essere applicato solo a una funzione, a un tipo di classe o a una variabile locale: ignorata |
| Avviso del compilatore (livello 1) C4848 | il supporto per l'attributo standard\_'\_nessun indirizzo univoco ' in c++ 17 e versioni precedenti è un'estensione del fornitore |
|[Avviso del compilatore (livello 4) C4866](c4866.md)| il compilatore non può applicare l'ordine di valutazione da sinistra a destra per la chiamata a *operator_name*|
|[Avviso del compilatore (errore) avviso C4867](compiler-warning-c4867.md)|'*Function*': chiamata di funzione mancante nell'elenco degli argomenti; usare "*Call*" per creare un puntatore al membro|
|[Avviso del compilatore (livello 4) C4868](compiler-warning-c4868.md)|il compilatore '_file_(*Line_number*)' non può applicare l'ordine di valutazione da sinistra a destra nell'elenco di inizializzazione tra parentesi graffe|
|Avviso del compilatore (livello 2) C4872|divisione a virgola mobile per zero rilevata durante la compilazione del grafico delle chiamate per la concorrenza::p arallel_for_each in:'*location*'|
|Avviso del compilatore (livello 1) C4880|cast da' const *TYPE_1*' a'*TYPE_2*': il cast di const da un puntatore o un riferimento può causare un comportamento indefinito in una funzione con restrizioni amp|
|Avviso del compilatore (livello 4) C4881|il costruttore e/o il distruttore non verranno richiamati per la variabile tile_static '*Variable*'|
|Avviso del compilatore (livello 1) C4882|passaggio di funtori con operatori di chiamata non const alla concorrenza::p arallel_for_each è deprecato|
|[Avviso del compilatore C4900](compiler-warning-level-1-c4900.md)|Mancata corrispondenza tra'*strumento1*' versione '*Version1*' è*Tool2*' versione '*Version2*'|
|[Avviso del compilatore (livello 1) C4905](compiler-warning-level-1-c4905.md)|cast di stringa letterale wide su "LPSTR"|
|[Avviso del compilatore (livello 1) C4906](compiler-warning-level-1-c4906.md)|cast di stringa letterale su "LPWSTR"|
|[Avviso del compilatore (livello 1) C4910](compiler-warning-level-1-c4910.md)|'\<Identifier >:' _ _ declspec (dllexport)' è extern ' sono incompatibili in una creazione di istanza esplicita|
|[Avviso del compilatore (livello 1) C4912](compiler-warning-level-1-c4912.md)|'*attribute*': l'attributo presenta un comportamento non definito su un tipo definito dall'utente annidato|
|[Avviso del compilatore (livello 4) C4913](compiler-warning-level-4-c4913.md)|l'operatore binario definito dall'utente ',' esiste, ma nessuno degli overload può convertire tutti gli operandi. Verrà utilizzato l'operatore binario ',' incorporato predefinito.|
|Avviso del compilatore (livello 1) C4916|per avere un DISPID,'*Description*': deve essere introdotto da un'interfaccia|
|[Avviso del compilatore (livello 1) C4917](compiler-warning-level-1-c4917.md)|'dichiaratore ': un GUID può essere associato solo a una classe, un'interfaccia o uno spazio dei nomi|
|[Avviso del compilatore (livello 4) C4918](compiler-warning-level-4-c4918.md)|'*character*': carattere non valido nell'elenco di ottimizzazione pragma|
|[Avviso del compilatore (livello 1) C4920](compiler-warning-level-1-c4920.md)|enum enum member member_1 = value_1 già visualizzato in enum enum As member_2 = value_2|
|Avviso del compilatore (livello 3) C4921|'*Description*': il valore dell'attributo '*attribute*' non deve essere specificato come Multiply|
|[Avviso del compilatore (livello 1) C4925](compiler-warning-level-1-c4925.md)|'*Method*': Impossibile chiamare il metodo Dispatch da script|
|[Avviso del compilatore (livello 1) C4926](compiler-warning-level-1-c4926.md)|'*Identifier*': simbolo già definito: attributi ignorati|
|[Avviso del compilatore (livello 1) C4927](compiler-warning-level-1-c4927.md)|conversione non valida; è stata applicata in modo implicito più di una conversione definita dall'utente|
|[Avviso del compilatore (livello 1) C4928](compiler-warning-level-1-c4928.md)|inizializzazione di copia non valida; sono state implicitamente applicate più conversioni definite dall'utente|
|[Avviso del compilatore (livello 1) C4929](compiler-warning-level-1-c4929.md)|'*file*': libreria dei tipi contiene un'Unione. il qualificatore ' embedded_idl ' verrà ignorato|
|[Avviso del compilatore (livello 1) C4930](compiler-warning-level-1-c4930.md)|'*Prototype*': funzione con prototipo non chiamata. è prevista una definizione di variabile?|
|[Avviso del compilatore (livello 4) C4931](compiler-warning-level-4-c4931.md)|si suppone che la libreria dei tipi sia stata compilata per puntatori a numero bit|
|[Avviso del compilatore (livello 4) C4932](compiler-warning-level-4-c4932.md)|__identifier (*Identifier*) e \_evidenzia (*Identifier*) non sono distinguibili|
|Avviso del compilatore (livello 1) C4934|' __delegate (multicast)' è deprecato. usare '\__delegate '|
|[Avviso del compilatore (livello 1) C4935](compiler-warning-level-1-c4935.md)|identificatore di accesso assembly modificato da'*Access*'|
|[Avviso del compilatore (livello 1, errore) C4936](compiler-warning-c4936.md)|questo __declspec è supportato solo con la compilazione con /clr o /clr:pure|
|[Avviso del compilatore (livello 4) C4937](compiler-warning-level-4-c4937.md)|'*Text1*' è*text2*' non sono distinguibili come argomenti per '*Directive*'|
|[Avviso del compilatore (livello 4) C4938](compiler-warning-level-4-c4938.md)|'*var*': La variabile di riduzione a virgola mobile può causare risultati incoerenti in/FP: Strict o #pragma fenv_access|
|[Avviso del compilatore C4939](compiler-warning-level-1-c4939.md)|#pragma vtordisp è deprecato e verrà rimosso in una futura versione di Visual C++|
|[Avviso del compilatore (livello 1) C4944](compiler-warning-level-1-c4944.md)|'*Symbol*': non è possibile importare il simbolo da'*Assembly1*': perché'*Symbol*' esiste già nell'ambito corrente|
|[Avviso del compilatore (livello 1) C4945](compiler-warning-level-1-c4945.md)|'*Symbol*': non è possibile importare il simbolo da'*Assembly1*': perché'*Symbol*' è già stato importato da un altro assembly '*Assembly2*'|
|[Avviso del compilatore (livello 1) C4946](compiler-warning-level-1-c4946.md)|reinterpret_cast utilizzato tra le classi correlate:'*Class1*' è*Class2*'|
|[Avviso del compilatore (livello 1) C4947](compiler-warning-level-1-c4947.md)|'*type_or_member*': contrassegnato come obsoleto|
|[Avviso del compilatore (livello 2) C4948](compiler-warning-level-2-c4948.md)|il tipo restituito di '*funzione di accesso*' non corrisponde all'ultimo tipo di parametro del setter corrispondente|
|[Avviso del compilatore (livello 1 e livello 4) C4949](compiler-warning-level-1-and-level-4-c4949.md)|i pragma ' Managed ' è unmanaged ' sono significativi solo se compilati con '/CLR [: Option]'|
|[Avviso del compilatore (livello 1, errore) C4950](compiler-warning-c4950.md)|'*type_or_member*': contrassegnato come obsoleto|
|[Avviso del compilatore (livello 1) C4951](compiler-warning-level-1-c4951.md)|'*Function*' è stato modificato dopo la raccolta dei dati di profilo, dati di profilo della funzione non utilizzati|
|[Avviso del compilatore (livello 1) C4952](compiler-warning-level-1-c4952.md)|'*Function*': non sono stati trovati dati di profilo nel database di programma '*pgd_file*'|
|[Avviso del compilatore (livello 1) C4953](compiler-warning-level-1-c4953.md)|'*Function*' inline è stato modificato dopo la raccolta dei dati di profilo, dati di profilo non utilizzati|
|Avviso del compilatore C4954|'*Function*': non profilato (contiene un'espressione switch __int64)|
|Avviso del compilatore C4955|'*IMPORT2*': importazione ignorata; importazione già eseguita da'*IMPORT1*'|
|[Avviso del compilatore (livello 1, errore) C4956](compiler-warning-c4956.md)|'*Type*': tipo non verificabile|
|[Avviso del compilatore (livello 1, errore) C4957](compiler-warning-c4957.md)|'*cast*': cast esplicito da'*cast_from*' a'*cast_to*' non verificabile|
|[Avviso del compilatore (livello 1, errore) C4958](compiler-warning-c4958.md)|'*Operation*': aritmetica dei puntatori non verificabile|
|[Avviso del compilatore (livello 1, errore) C4959](compiler-warning-c4959.md)|Impossibile definire il tipo '*Type*' non gestito in/CLR: safe perché l'accesso ai membri produce codice non verificabile|
|[Avviso del compilatore (livello 4) C4960](compiler-warning-level-4-c4960.md)|'*Function*' è troppo grande per essere profilato|
|[Avviso del compilatore (livello 1) C4961](compiler-warning-c4961.md)|Dati di profilo non sottoposti a merge in '.pgd file', ottimizzazioni PGO disabilitate|
|[Avviso del compilatore (livello 4) C4962](compiler-warning-c4962.md)|'*Function*': Ottimizzazioni PGO disabilitate perché le ottimizzazioni provocano l'incoerenza dei dati di profilo|
|Avviso del compilatore (livello 1) C4963|'*Description*': non sono stati trovati dati di profilo; sono state usate opzioni del compilatore diverse nella compilazione instrumentata|
|[Avviso del compilatore (livello 1) C4964](compiler-warning-level-1-c4964.md)|Nessuna opzione di ottimizzazione specificata. le informazioni sul profilo non verranno raccolte|
|[Avviso del compilatore (livello 1) C4965](compiler-warning-level-1-c4965.md)|casella implicita di Integer 0; usare nullptr o cast esplicito|
|Avviso del compilatore (livello 1) C4966|'*Function*' contiene l'annotazione __code_seg con nome di segmento non supportato, annotazione ignorata|
|Avviso del compilatore C4970|Costruttore delegato: oggetto di destinazione ignorato perché'*Type*' è statico|
|Avviso del compilatore (livello 1) C4971|Ordine degli argomenti \<: l'oggetto di \<destinazione >, la funzione di destinazione > per il costruttore \<di delegato è deprecata. usare la funzione di destinazione >, oggetto di \<destinazione = "" >|
|[Avviso del compilatore (livello 1, errore) C4972](compiler-warning-c4972.md)|La modifica o il trattamento diretto del risultato di una operazione di unboxing come lvalue non è verificabile|
|Avviso del compilatore (livello 1) C4973|'*Symbol*': contrassegnato come deprecato|
|Avviso del compilatore (livello 1) C4974|'*Symbol*': contrassegnato come deprecato|
|Avviso del compilatore (livello 3) C4981|Warbird: funzione '*Function*' contrassegnata come __forceinline non impostata come inline perché contiene la semantica delle eccezioni|
|[Avviso del compilatore C4984](compiler-warning-c4984.md)|' If constExpr ' è un'estensione del linguaggio C++ 17|
|Avviso del compilatore (livello 3) C4985|'*symbol_name*': attributi non presenti nella dichiarazione precedente.|
|[Avviso del compilatore C4986](compiler-warning-c4986.md)|'*Declaration*': la specifica di eccezione non corrisponde alla dichiarazione precedente|
|Avviso del compilatore (livello 4) C4987|utilizzata estensione non standard: 'throw (...)'|
|Avviso del compilatore (livello 4) C4988|'*Variable*': variabile dichiarata al di fuori dell'ambito di classe/funzione|
|Avviso del compilatore (livello 4) C4989|'*Type*': tipo con definizioni in conflitto.|
|Avviso del compilatore (livello 3) C4990|Warbird: *messaggio*|
|Avviso del compilatore (livello 3) C4991|Warbird: funzione '*Function*' contrassegnata come __forceinline non impostata come inline perché il livello di protezione di inline è maggiore dell'elemento padre|
|Avviso del compilatore (livello 3) C4992|Warbird: funzione '*Function*' contrassegnata come __forceinline non impostata come inline perché contiene assembly inline che non possono essere protetti|
|[Avviso del compilatore (livello 3) C4995](compiler-warning-level-3-c4995.md)|'*Function*': il nome è stato contrassegnato come #pragma deprecato|
|[Avviso del compilatore (livello 3) C4996](compiler-warning-level-3-c4996.md)|'*deprecated-Declaration*': *Deprecation-Message* (o "è stato dichiarato deprecato")|
|[Avviso del compilatore (livello 1) C4997](compiler-warning-level-1-c4997.md)|'*Class*': la coclasse non implementa un'interfaccia com o una pseudo-interfaccia|
|Avviso del compilatore (livello 1) C4998|PREVISIONE non riuscita: *previsione*(*valore*)|
|[Avviso del compilatore C4999](compiler-warning-level-1-c4999.md)|Avviso sconosciuto per altre informazioni, scegliere supporto C++ tecnico dal menu? o aprire il file della Guida relativo al supporto tecnico|
|Avviso del compilatore C5022|'*Type*': specificati più costruttori di spostamento|
|Avviso del compilatore C5023|'*Type*': sono stati specificati più operatori di assegnazione di spostamento|
|Avviso del compilatore (livello 4) C5024|'*Type*': il costruttore di spostamento è stato definito in modo implicito come eliminato|
|Avviso del compilatore (livello 4) C5025|'*Type*': l'operatore di assegnazione di spostamento è stato definito in modo implicito come eliminato|
|Avviso del compilatore (livello 1 e livello 4) C5026|'*Type*': il costruttore di spostamento è stato definito in modo implicito come eliminato|
|Avviso del compilatore (livello 1 e livello 4) C5027|'*Type*': l'operatore di assegnazione di spostamento è stato definito in modo implicito come eliminato|
|Avviso del compilatore (livello 1) C5028|'*nome*': L'allineamento specificato nella dichiarazione precedente (*numero*) non è stato specificato nella definizione|
|Avviso del compilatore (livello 4) C5029|utilizzata estensione non standard: gli attributi di C++ allineamento in si applicano solo a variabili, membri dati e tipi di tag|
|Avviso del compilatore (livello 3) C5030|l'attributo '*attribute*' non è riconosciuto|
|Avviso del compilatore (livello 4) C5031|avviso di #pragma (pop): probabile mancata corrispondenza, schiocco dello stato di avviso inserito in un file diverso|
|Avviso del compilatore (livello 4) C5032|rilevato #pragma avviso (push) senza #pragma avviso corrispondente (pop)|
|Avviso del compilatore (livello 1) C5033|'*Storage-Class*' non è più una classe di archiviazione supportata|
|Avviso del compilatore C5034|l'uso di '*intrinsic*' intrinseco causa la compilazione della *funzione* di funzione come codice Guest|
|Avviso del compilatore C5035|l'uso della funzionalità'*feature*' comporta la compilazione della *funzione* di funzione come codice Guest|
|Avviso del compilatore (livello 1) C5036|conversione del puntatore a funzione varargs durante la compilazione con/Hybrid: x86arm64'*tipo1*' in '*tipo2*'|
|Avviso del compilatore (errore) C5037|'*member-function*': una definizione out-of-line di un membro di un modello di classe non può avere argomenti predefiniti|
|[Avviso del compilatore (livello 4) C5038](c5038.md)|il membro dati '*member1*' verrà inizializzato dopo il membro dati '*membro2*'|
|Avviso del compilatore (livello 4) C5039|'*Function*': puntatore o riferimento a una funzione potenzialmente generata passata alla funzione extern C in-EHC. Se questa funzione genera un'eccezione, può verificarsi un comportamento non definito.|
|Avviso del compilatore (livello 3) C5040|le specifiche di eccezione dinamiche sono valide solo in C++ 14 e versioni precedenti. trattamento come noexcept (false)|
|Avviso del compilatore (livello 1) C5041|'*Definition*': la definizione out-of-line per il membro dati statico constExpr non è necessaria ed è deprecata in c++ 17|
|Avviso del compilatore (livello 3) C5042|'*Declaration*': le dichiarazioni di funzione nell'ambito del blocco non possono essere specificate come ' inline ' nello standard C++; Rimuovi identificatore ' inline '|
|Avviso del compilatore (livello 2) C5043|'*Specification*': la specifica di eccezione non corrisponde alla dichiarazione precedente|
|Avviso del compilatore (livello 4) C5044|Un argomento dell' *opzione* della riga di comando punta a un percorso '*path*' che non esiste|
|[Avviso del compilatore C5045](c5045.md)|Il compilatore inserirà la mitigazione Spectre per il carico di memoria se è stata specificata l'opzione/Qspectre|
|[Avviso del compilatore (livello 2) C5046](c5046.md)|'*Function*': Simbolo che interessa il tipo con collegamento interno non definito|
| Avviso del compilatore (livello 1) C5047 | l'uso di non \_standard\_ \_se esiste con moduli non è supportato |
| Avviso del compilatore (livello 1) C5048 | L'uso della macro' macroname ' può produrre output non deterministici |
| Avviso del compilatore (livello 1) C5049 | '*String*': L'incorporamento di un percorso completo può produrre output dipendente dal computer |
| Avviso del compilatore (livello 1) C5050 | Possibile ambiente incompatibile durante l'importazione del modulo '*module_name*': *problema* |
| Avviso del compilatore (livello 1) C5100 | \_\_Gli\_argomenti\_ vasonoriservatiperl'\_ uso in macro Variadic |
| Avviso del compilatore (livello 1) C5101 | l'uso della direttiva per il preprocessore in un elenco di argomenti macro simile a una funzione è un comportamento non definito |
| Avviso del compilatore (livello 1) C5102 | la definizione macro '*value*' della riga di comando non valida verrà ignorata |
| Avviso del compilatore (livello 1) C5103 | Se si incolla '*token1*' è*token2*' non si ottiene un token di pre-elaborazione valido |
| Avviso del compilatore (livello 1) C5104 | '*String1*#*string2*' è stato trovato nell'elenco delle macro sostituzioni. si intendeva '*String1*"" #*string2*'? |
| Avviso del compilatore (livello 1) C5105 | l'espansione della macro che produce ' defined ' presenta un comportamento non definito |
| Avviso del compilatore (livello 1) C5106 | macro ridefinita con nomi di parametro diversi |
| Avviso del compilatore (livello 1) C5107 | manca il carattere '*char*' di terminazione |

## <a name="see-also"></a>Vedere anche

[Errori eC++ avvisi di C/compilatore e strumenti di compilazione](../compiler-errors-1/c-cpp-build-errors.md) \
[Avvisi del compilatore C4000-C5999](compiler-warnings-c4000-c5999.md)
