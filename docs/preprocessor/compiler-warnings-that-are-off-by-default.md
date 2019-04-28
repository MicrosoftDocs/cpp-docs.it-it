---
title: Avvisi del compilatore disattivati per impostazione predefinita
ms.date: 05/30/2018
helpviewer_keywords:
- warnings, compiler
- cl.exe compiler, setting options
ms.assetid: 69809cfb-a38a-4035-b154-283a61938df8
ms.openlocfilehash: ee2b6097a62a8f1030dc631354f96ec7a33d2f11
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62236570"
---
# <a name="compiler-warnings-that-are-off-by-default"></a>Avvisi del compilatore disattivati per impostazione predefinita

Il compilatore supporta gli avvisi che sono stati disabilitate per impostazione predefinita, in quanto la maggior parte degli sviluppatori non risultino utili. In alcuni casi, è un avviso su una scelta stilistiche o su idiomi comuni nel codice precedente. Gli altri avvisi sono relative all'utilizzo di un'estensione Microsoft del linguaggio. In altri casi, questi indicano un'area in cui i programmatori spesso si basano su presupposti non corretti, che possono causare un comportamento imprevisto o non definito. Se abilitata, alcuni di questi avvisi potrebbero apparire più volte nelle intestazioni della libreria. Librerie di runtime C e le librerie standard C++ sono destinate a non generare alcun avviso solo a livello di avviso [/W4](../build/reference/compiler-option-warning-level.md).

## <a name="enable-warnings-that-are-off-by-default"></a>Abilita avvisi disattivati per impostazione predefinita

È possibile abilitare gli avvisi che sono in genere disattivati per impostazione predefinita usando una delle opzioni seguenti:

- **avviso #pragma (impostazione predefinita:** *numero_avviso* **)**

   L'avviso specificato (*numero_avviso*) è abilitato al relativo livello predefinito. La documentazione dell'avviso contiene il livello predefinito dell'avviso.

- **avviso #pragma (** *warning_level* **:** *numero_avviso* **)**

   L'avviso specificato (*numero_avviso*) è abilitata al livello specificato (*warning_level*).

- [/Wall](../build/reference/compiler-option-warning-level.md)

   `/Wall` abilita tutti gli avvisi, inclusi quelli disabilitati per impostazione predefinita. Se si usa questa opzione, è possibile disattivare gli avvisi tramite il [/wd](../build/reference/compiler-option-warning-level.md) opzione.

- [/w*Lnnnn*](../build/reference/compiler-option-warning-level.md)

   Questa opzione Abilita avviso *nnnn* a livello *L*.

## <a name="warnings-that-are-off-by-default"></a>Avvisi disattivati per impostazione predefinita

Gli avvisi seguenti sono stati disabilitate per impostazione predefinita in Visual Studio 2015 e versioni successive:

|||
|-|-|
|[C4061](../error-messages/compiler-warnings/compiler-warning-level-4-c4061.md) (livello 4)|enumeratore '*identifier*'in un'istruzione switch dell'enum'*enumerazione*' non è gestito in modo esplicito da un'etichetta case|
|[C4062](../error-messages/compiler-warnings/compiler-warning-level-4-c4062.md) (livello 4)|enumeratore '*identifier*'in un'istruzione switch dell'enum'*enumerazione*' non è gestito|
| [C4165](../error-messages/compiler-warnings/compiler-warning-level-1-c4165.md) (livello 1) | 'HRESULT' viene convertito in 'bool'; continuare che questo è ciò che si desidera? |
| [C4191](../error-messages/compiler-warnings/compiler-warning-level-3-c4191.md) (livello 3)|«*operator*': conversione non affidabile da '*type_of_expression*'a'*type_required*»|
|[Avviso C4242](../error-messages/compiler-warnings/compiler-warning-level-4-c4242.md) (livello 4)|'*identifier*': conversione da '*type1*'a'*type2*', perdita di dati|
|[C4254](../error-messages/compiler-warnings/compiler-warning-level-4-c4254.md) (livello 4)|'*operator*': conversione da '*type1*'a'*type2*', perdita di dati|
|[C4255](../error-messages/compiler-warnings/compiler-warning-level-4-c4255.md) (livello 4)|«*funzione*': nessun prototipo di funzione dato: conversione (')' in '(void)'|
|[C4263](../error-messages/compiler-warnings/compiler-warning-level-4-c4263.md) (livello 4)|«*funzione*': funzione membro non esegue l'override di qualsiasi funzione membro virtuale di classe di base|
|[C4264](../error-messages/compiler-warnings/compiler-warning-level-1-c4264.md) (livello 1)|«*funzione_virtuale*': override non disponibile per la funzione membro virtuale dalla base '*classe*'; la funzione è nascosta|
|[C4265](../error-messages/compiler-warnings/compiler-warning-level-3-c4265.md) (livello 3)|«*classe*': classe ha funzioni virtuali, ma il distruttore non virtuale|
|[C4266](../error-messages/compiler-warnings/compiler-warning-level-4-c4266.md) (livello 4)|'*funzione*': override non disponibile per la funzione membro virtuale dalla base '*tipo*'; la funzione è nascosta|
|[C4287](../error-messages/compiler-warnings/compiler-warning-level-3-c4287.md) (livello 3)|«*operatore*': errata corrispondenza tra costanti unsigned/negative|
|[C4289](../error-messages/compiler-warnings/compiler-warning-level-4-c4289.md) (livello 4)|utilizzata estensione non standard: '*var*': variabile di controllo ciclo dichiarata nel ciclo for e viene usato all'esterno dell'ambito del ciclo for|
|[C4296](../error-messages/compiler-warnings/compiler-warning-level-4-c4296.md) (livello 4)|«*operatore*': l'espressione è sempre false|
|[C4339](../error-messages/compiler-warnings/compiler-warning-level-4-c4339.md) (livello 4)|«*tipo*': rilevato l'utilizzo del tipo non definito nei metadati CLR - uso di questo tipo può causare un'eccezione di runtime|
|[C4342](../error-messages/compiler-warnings/compiler-warning-level-1-c4342.md) (livello 1)|modifica del comportamento: '*funzione*' chiamato, ma un operatore membro è stato chiamato nelle versioni precedenti|
|[C4350](../error-messages/compiler-warnings/compiler-warning-level-1-c4350.md) (livello 1)|modifica del comportamento: '*membro1*'chiamato al posto di'*membro2*'|
|[C4355](../error-messages/compiler-warnings/compiler-warning-c4355.md)|"this": utilizzato nell'elenco degli inizializzatori dei membri di base|
|[C4365](../error-messages/compiler-warnings/compiler-warning-level-4-c4365.md) (livello 4)|«*azione*': conversione da '*type_1*'a'*type_2*', mancata corrispondenza tra signed e unsigned|
|C4370 (livello 3)|layout della classe è stato modificato rispetto alla versione precedente del compilatore per migliorare la compressione|
|[C4371](../error-messages/compiler-warnings/c4371.md) (livello 3)|«*NomeClasse*': layout della classe sia stato modificato da una versione precedente del compilatore per migliorare la compressione del membro '*membro*»|
|C4388 (livello 4)|errata corrispondenza tra signed e unsigned|
|[C4412](../error-messages/compiler-warnings/compiler-warning-level-2-c4412.md) (livello 2)|«*funzione*': funzione firma contiene il tipo '*tipo*'; Gli oggetti di C++ sono non è sicuro passare tra codice pure e mista o nativa|
|C4426 (livello 1)|flag di ottimizzazione modificati dopo l'inclusione dell'intestazione, probabilmente a causa di optimize () #pragma <sup>14.1</sup>|
|[C4435](../error-messages/compiler-warnings/compiler-warning-level-4-c4435.md) (livello 4)|«*class1*': Layout dell'oggetto in/vd2 verrà modificato a causa di base virtuale '*class2*'|
|[C4437](../error-messages/compiler-warnings/compiler-warning-level-4-c4437.md) (livello 4)|dynamic_cast dalla base virtuale '*class1*'a'*class2*' potrebbe non riuscire in alcuni contesti|
|C4444 (livello 3)|'__unaligned' di livello superiore non implementato nel contesto|
|[C4464](../error-messages/compiler-warnings/c4464.md) (livello 4)|percorso di inclusione relativo contiene '.. '|
|[C4471](../error-messages/compiler-warnings/compiler-warning-level-4-c4471.md) (livello 4)|una dichiarazione con prototipo di un'enumerazione senza ambita deve presentare un tipo sottostante (presupposto int) <sup>Perm</sup>|
|C4472 (livello 1)|«*identificatore*' è un'enumerazione nativa: aggiungere un identificatore di accesso (privato/pubblico) per dichiarare un'enumerazione gestita|
|[C4514](../error-messages/compiler-warnings/compiler-warning-level-4-c4514.md) (livello 4)|«*funzione*': funzione inline senza riferimenti rimossa|
|[C4536](../error-messages/compiler-warnings/compiler-warning-level-4-c4536.md) (livello 4)|'type name': nome del tipo supera il limite di metadati di '*limite*' caratteri|
|[C4545](../error-messages/compiler-warnings/compiler-warning-level-1-c4545.md) (livello 1)|l'espressione prima della virgola restituisce una funzione senza elenco di argomenti|
|[C4546](../error-messages/compiler-warnings/compiler-warning-level-1-c4546.md) (livello 1)|nella chiamata di funzione prima della virgola manca l'elenco degli argomenti|
|[C4547](../error-messages/compiler-warnings/compiler-warning-level-1-c4547.md) (livello 1)|«*operatore*': operatore prima della virgola non ha effetto; previsto operatore con effetto collaterale|
|[C4548](../error-messages/compiler-warnings/compiler-warning-level-1-c4548.md) (livello 1)|l'espressione prima della virgola non ha effetto. Prevista espressione con effetto collaterale.|
|[C4549](../error-messages/compiler-warnings/compiler-warning-level-1-c4549.md) (livello 1)|«*operator1*': operatore prima della virgola non ha alcun effetto; si intendeva '*operator2*'?|
|[C4555](../error-messages/compiler-warnings/compiler-warning-level-1-c4555.md) (livello 1)|l'espressione non ha effetto. Prevista espressione con effetto collaterale|
|[C4557](../error-messages/compiler-warnings/compiler-warning-level-3-c4557.md) (livello 3)|assume' contiene l'effetto '*effetto*'|
|[C4571](../error-messages/compiler-warnings/compiler-warning-level-4-c4571.md) (livello 4)|Messaggio informativo: catch è cambiata dopo Visual C++ 7.1; le eccezioni strutturate (SEH) non vengono più rilevate|
|C4574 (livello 4)|«*identifier*'è definito come ' 0': si intendeva usare ' #if *identificatore*'?|
|C4577 (livello 1)|'noexcept' utilizzato con nessun specificati; la modalità di gestione delle eccezioni terminazione in eccezione non è garantita. Specificare /EHsc|
|C4582 (livello 4)|«*tipo*': costruttore non viene chiamato in modo implicito|
|C4583 (livello 4)|«*tipo*': un distruttore non viene chiamato in modo implicito|
|C4587 (livello 1)|«*anonymous_structure*': modifica del comportamento: costruttore viene chiamato non è più in modo implicito|
|C4588 (livello 1)|«*anonymous_structure*': modifica del comportamento: distruttore viene chiamato non è più in modo implicito|
|C4596 (livello 4)|«*identifier*': nome completo non valido nella dichiarazione del membro <sup>14.3</sup> <sup>Perm</sup>|
|C4598 (livelli 1 e 3)|' #include "*intestazione*" ": numero dell'intestazione *numero* nell'intestazione precompilata non corrisponde la compilazione corrente in tale posizione <sup>14.3</sup>|
|C4599 (livello 3)|'*opzione* *path*': argomento della riga di comando number *numero* corrisponde intestazione precompilata <sup>14.3</sup>|
|C4605 (livello 1)|' /D*macro*' specificato nella riga di comando corrente, ma non è stato specificato quando è stata compilata intestazione precompilata|
|[C4608](../error-messages/compiler-warnings/compiler-warning-level-3-c4608.md) (livello 3)|«*union_member*'è già stato inizializzato da un altro membro dell'unione nell'elenco di inizializzatori,'*union_member*' <sup>Perm</sup>|
|[C4619](../error-messages/compiler-warnings/compiler-warning-level-3-c4619.md) (livello 3)|#pragma avviso: nessun numero avviso '*numero*'|
|[C4623](../error-messages/compiler-warnings/compiler-warning-level-4-c4623.md) (livello 4)|'classe derivata': impossibile generare il costruttore predefinito poiché un costruttore predefinito della classe base è inaccessibile|
|[C4625](../error-messages/compiler-warnings/compiler-warning-level-4-c4625.md) (livello 4)|'classe derivata': impossibile generare il costruttore di copia poiché un costruttore di copia della classe base è inaccessibile|
|[C4626](../error-messages/compiler-warnings/compiler-warning-level-4-c4626.md) (livello 4)|'classe derivata': impossibile generare l'operatore di assegnazione poiché un operatore di assegnazione della classe base è inaccessibile|
|[C4628](../error-messages/compiler-warnings/compiler-warning-level-1-c4628.md) (livello 1)|digraph non supportati con -Ze. Sequenza di caratteri '*digraph*'non interpretata come token alternativo per'*char*'|
|[C4640](../error-messages/compiler-warnings/compiler-warning-level-3-c4640.md) (livello 3)|«*istanza*': la costruzione di oggetti statici locali non è thread-safe|
| C4643 (livello 4) | Inoltrare la dichiarazione di '*identificatore*' nello spazio dei nomi std non è consentita dallo Standard C++. <sup>15.8</sup> |
|C4647 (livello 3)|modifica del comportamento: is_pod (*tipo*) ha valore diversi nelle versioni precedenti|
|C4654 (livello 4)|Includere codice inserito prima dell'intestazione precompilata riga verrà ignorata. Aggiungere codice all'intestazione precompilata. <sup>14.1</sup>|
|[C4668](../error-messages/compiler-warnings/compiler-warning-level-4-c4668.md) (livello 4)|«*simbolo*'non è definito come una macro del preprocessore. sostituzione con '0' per'*direttive*»|
|[C4682](../error-messages/compiler-warnings/compiler-warning-level-4-c4682.md) (livello 4)|«*simbolo*': nessun attributo di parametro direzionali specificato, verrà utilizzato [in]|
|[C4686](../error-messages/compiler-warnings/compiler-warning-level-3-c4686.md) (livello 3)|«*tipo definito dall'utente*': possibile modifica del comportamento modifica nel tipo definito dall'utente restituiscono la convenzione di chiamata|
|[C4692](../error-messages/compiler-warnings/compiler-warning-level-1-c4692.md) (livello 1)|«*funzione*': firma del membro non privato contiene il tipo nativo privato '*native Type*»|
|[C4710](../error-messages/compiler-warnings/compiler-warning-level-4-c4710.md) (livello 4)|«*funzione*': funzione non resa inline|
|[C4738](../error-messages/compiler-warnings/compiler-warning-level-3-c4738.md) (livello 3)|archiviazione in memoria del risultato float a 32 bit, possibile riduzione delle prestazioni|
|[C4746](../error-messages/compiler-warnings/compiler-warning-c4746.md)|accesso volatile di '*espressione*' è soggetto a /volatile:\<iso&#124;ms > configurazione; è consigliabile usare le funzioni intrinseche iso_volatile_load/store|
|C4749 (livello 4)|supporto condizionale: offsetof applicato al tipo di layout non standard '*tipo*'|
|C4767 (livello 4)|nome della sezione '*simbolo*' contiene più di 8 caratteri e verrà troncata dal linker|
|C4768 (livello 3)|gli attributi declspec prima della specifica di collegamento vengono ignorati|
|C4774 (livello 4)|«*stringa*': prevista nell'argomento stringa di formato *numero* non è una stringa letterale|
|C4777 (livello 4)|'*funzione*': stringa di formato '*stringa*'richiede un argomento di tipo'*type1*', ma l'argomento variadic *numero* ha tipo '*type2*'|
|C4786 (livello 3)|«*simbolo*': nome oggetto troncato a '*numero*' caratteri nelle informazioni di debug|
| [C4800](../error-messages/compiler-warnings/compiler-warning-level-3-c4800.md) (livello 4) | La conversione implicita da '*tipo*' in bool. Possibile perdita di informazioni <sup>16.0</sup> |
|[C4820](../error-messages/compiler-warnings/compiler-warning-level-4-c4820.md) (livello 4)|«*byte*'byte di spaziatura interna aggiunti dopo costrutto'*member_name*»|
| [C4822](../error-messages/compiler-warnings/compiler-warning-level-1-c4822.md) (livello 1) | «*membro*': funzione membro della classe locale non ha un corpo |
|C4826 (livello 2)|Conversione da '*type1*'a'*type2*' è con segno esteso. Ciò potrebbe causare un comportamento di runtime imprevisto.|
|C4837 (livello 4)|rilevato trigramma: '?? *carattere*'sostituito da'*carattere*'|
|C4841 (livello 4)|estensione non standard: indicatore di membro composto usato in offsetof|
|C4842 (livello 4)|il risultato di 'offsetof' applicato a un tipo mediante ereditarietà multipla non è garantito a essere coerente tra versioni diverse del compilatore|
|[C4868](../error-messages/compiler-warnings/compiler-warning-c4868.md) (livello 4)|«_file_(*line_number*)' compilatore non può imporre l'ordine di valutazione da sinistra a destra nell'elenco di inizializzazione tra parentesi graffe|
|[C4905](../error-messages/compiler-warnings/compiler-warning-level-1-c4905.md) (livello 1)|cast di stringa letterale wide su "LPSTR"|
|[C4906](../error-messages/compiler-warnings/compiler-warning-level-1-c4906.md) (livello 1)|cast di stringa letterale su "LPWSTR"|
|[C4917](../error-messages/compiler-warnings/compiler-warning-level-1-c4917.md) (livello 1)|«*dichiaratore*': un GUID può solo essere associato a una classe, interfaccia o dello spazio dei nomi|
|[C4928](../error-messages/compiler-warnings/compiler-warning-level-1-c4928.md) (livello 1)|inizializzazione di copia non valida; sono state implicitamente applicate più conversioni definite dall'utente|
|[C4931](../error-messages/compiler-warnings/compiler-warning-level-4-c4931.md) (livello 4)|si suppone che la libreria dei tipi sia stata compilata per puntatori a numero bit|
|[C4946](../error-messages/compiler-warnings/compiler-warning-level-1-c4946.md) (livello 1)|reinterpret_cast utilizzato tra le classi correlate: '*class1*'e'*class2*'|
|C4962|«*funzione*': ottimizzazioni PGO disabilitate perché le ottimizzazioni provocano l'incoerenza dei dati del profilo|
|[C4986](../error-messages/compiler-warnings/compiler-warning-c4986.md) (livello 4)|«*simbolo*': specifica di eccezione non corrisponde alla dichiarazione precedente|
|C4987 (livello 4)|utilizzata estensione non standard: 'throw (...)'|
|C4988 (livello 4)|«*simbolo*': variabile dichiarata all'esterno ambito classe/funzione|
|C5022|«*tipo*': specificato più di un costruttore di spostamento|
|C5023|«*tipo*': più operatori di assegnazione spostamento specificati|
|C5024 (livello 4)|«*tipo*': spostare costruttore è stato definito in modo implicito come eliminato|
|C5025 (livello 4)|«*tipo*': sposta l'operatore di assegnazione è stato definito in modo implicito come eliminato|
|C5026 (livello 1 e livello 4)|«*tipo*': spostare costruttore è stato definito in modo implicito come eliminato|
|C5027 (livello 1 e livello 4)|«*tipo*': sposta l'operatore di assegnazione è stato definito in modo implicito come eliminato|
|C5029 (livello 4)|utilizzata estensione non standard: gli attributi di allineamento in C++ si applicano a variabili, membri dati e solo i tipi di tag|
|C5031 (livello 4)|#pragma warning (POP): probabile mancata corrispondenza, si estraggono lo stato di avviso inserito nel file diversi <sup>14.1</sup>|
|C5032 (livello 4)|rilevato #pragma warning (push) non corrispondente warning (POP) #pragma <sup>14.1</sup>|
|C5034|utilizzo della funzione intrinseca '*intrinseco*' determina la funzione *funzione* deve essere compilato come codice guest <sup>15.3</sup>|
|C5035|uso di funzionalità '*caratteristica*' determina la funzione *funzione* deve essere compilato come codice guest <sup>15.3</sup>|
|C5036 (livello 1)|conversione del puntatore a funzione varargs durante la compilazione con/Hybrid:x86arm64»*type1*'a'*type2*' <sup>15.3</sup>|
|[C5038](../error-messages/compiler-warnings/c5038.md) (livello 4)|membro dati '*membro1*'verrà inizializzato dopo il membro dati'*membro2*' <sup>15.3</sup>|
|C5039 (livello 4)|«*funzione*': puntatore o riferimento alla funzione che potrebbe generare passato alla funzione extern C in - EHc. Se questa funzione genera un'eccezione, può verificarsi un comportamento indefinito. <sup>15.5</sup>|
|C5042 (livello 3)|«*funzione*': le dichiarazioni di funzione nell'ambito del blocco non possono essere specificato 'inline' in C++ standard, rimuovere l'identificatore 'inline' <sup>15.5</sup>|
|[C5045](../error-messages/compiler-warnings/c5045.md)|Compilatore inserirà la mitigazione Spectre per il carico di memoria se è specificata l'opzione /Qspectre <sup>15.7</sup>|

<sup>14.1</sup> questo avviso non è disponibile a partire da Visual Studio 2015 Update 1.<br/>
<sup>14.3</sup> questo avviso non è disponibile a partire da Visual Studio 2015 Update 3.<br/>
<sup>15.3</sup> questo avviso non è disponibile a partire da Visual Studio 2017 versione 15.3.<br/>
<sup>15.5</sup> questo avviso non è disponibile a partire da Visual Studio 2017 versione 15.5.<br/>
<sup>Versione 15.7</sup> questo avviso non è disponibile a partire da Visual Studio 2017 versione 15.7.<br/>
<sup>15.8</sup> questo avviso non è disponibile a partire da Visual Studio 2017 versione 15.8.<br/>
::: moniker range=">= vs-2019"
<sup>16.0</sup> questo avviso non è disponibile a partire da Visual Studio 2019 RTM.<br/>
::: moniker-end
<sup>Perm</sup> questo avviso è disattivato, a meno che il [/PERMISSIVE--](../build/reference/permissive-standards-conformance.md) è impostata l'opzione del compilatore.<br/>

## <a name="warnings-off-by-default-in-earlier-versions"></a>Avvisi disattivata per impostazione predefinita nelle versioni precedenti

Questi avvisi sono stati disattivata per impostazione predefinita nelle versioni del compilatore prima di Visual Studio 2015:

|||
|-|-|
|[C4302](../error-messages/compiler-warnings/compiler-warning-level-2-c4302.md) (livello 2)|«*conversione*': troncamento da '*type1*'a'*type2*»|
|[C4311](../error-messages/compiler-warnings/compiler-warning-level-1-c4311.md) (livello 1)|«*variabile*': troncamento puntatore da '*tipo*'a'*tipo*»|
|[C4312](../error-messages/compiler-warnings/compiler-warning-level-1-c4312.md) (livello 1)|«*operazione*': conversione da '*type1*'a'*type2*' di dimensioni maggiori|
|[C4319](../error-messages/compiler-warnings/compiler-warning-level-1-c4319.md) (livello 1)|«*operator*': zero estensione '*type1*'a'*type2*' di dimensioni maggiori|

Questo avviso è disattivato per impostazione predefinita nelle versioni del compilatore prima di Visual Studio 2012:

|||
|-|-|
|[C4431](../error-messages/compiler-warnings/compiler-warning-level-4-c4431.md) (livello 4)|identificatore di tipo mancante, verrà utilizzato int. Nota: Default-int non è più supportato in C|

## <a name="see-also"></a>Vedere anche

[warning](../preprocessor/warning.md)