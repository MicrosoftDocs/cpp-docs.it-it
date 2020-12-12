---
description: 'Altre informazioni su: avvisi del compilatore disattivati per impostazione predefinita'
title: Avvisi del compilatore disattivati per impostazione predefinita
ms.date: 08/29/2019
helpviewer_keywords:
- warnings, compiler
- cl.exe compiler, setting options
ms.assetid: 69809cfb-a38a-4035-b154-283a61938df8
ms.openlocfilehash: 5bc482d12026bb8358d773be6a0c8b32cc2317fc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97269380"
---
# <a name="compiler-warnings-that-are-off-by-default"></a>Avvisi del compilatore disattivati per impostazione predefinita

Il compilatore supporta gli avvisi che sono disattivati per impostazione predefinita, perché la maggior parte degli sviluppatori non li trova utili. In alcuni casi, avvertono una scelta stilistica o informazioni sugli idiomi comuni nel codice meno recente. Altri avvisi sono relativi all'uso di un'estensione Microsoft per la lingua. Alcuni avvisi indicano un'area in cui i programmatori spesso si basano su presupposti non corretti, che possono causare un comportamento imprevisto o non definito. Se tutti questi avvisi sono abilitati, alcuni possono essere visualizzati più volte nelle intestazioni della libreria. Le librerie di runtime C e le librerie standard C++ hanno lo scopo di non generare avvisi solo a livello di avviso [/W4](../build/reference/compiler-option-warning-level.md).

## <a name="enable-warnings-that-are-off-by-default"></a>Abilitare gli avvisi che sono disattivati per impostazione predefinita

È possibile abilitare gli avvisi normalmente disattivati per impostazione predefinita utilizzando una delle seguenti opzioni:

- **avviso #pragma (impostazione predefinita:** *warning_number* **)**

   L'avviso specificato (*warning_number*) è abilitato al livello predefinito. La documentazione dell'avviso contiene il livello predefinito dell'avviso.

- **avviso #pragma (** *warning_level* **:** *warning_number* **)**

   L'avviso specificato (*warning_number*) è abilitato al livello specificato (*warning_level*).

- [/Wall](../build/reference/compiler-option-warning-level.md)

   `/Wall` abilita tutti gli avvisi, inclusi quelli disabilitati per impostazione predefinita. Se si utilizza questa opzione, è possibile disattivare singoli avvisi utilizzando l'opzione [/WD.](../build/reference/compiler-option-warning-level.md) .

- [*Lnnnn* /w](../build/reference/compiler-option-warning-level.md)

   Questa opzione Abilita l'avviso *nnnn* al livello *L*.

## <a name="warnings-that-are-off-by-default"></a>Avvisi disattivati per impostazione predefinita

Gli avvisi seguenti sono disattivati per impostazione predefinita in Visual Studio 2015 e versioni successive:

|Avviso|Message|
|-|-|
|[C4061](../error-messages/compiler-warnings/compiler-warning-level-4-c4061.md) (livello 4)|l'enumeratore '*Identifier*' in un'opzione dell'*enumerazione ' Enumeration*' non viene gestito in modo esplicito da un'etichetta case|
|[C4062](../error-messages/compiler-warnings/compiler-warning-level-4-c4062.md) (livello 4)|l'enumeratore '*Identifier*' in un'opzione dell'*enumerazione ' Enumeration*' non viene gestito|
| [C4165](../error-messages/compiler-warnings/compiler-warning-level-1-c4165.md) (livello 1) | ' HRESULT ' verrà convertito in ' bool '; si è certi che questo sia il risultato desiderato? |
| [C4191](../error-messages/compiler-warnings/compiler-warning-level-3-c4191.md) (livello 3)|'*operator*': conversione non affidabile da'*type_of_expression*' a'*type_required*'|
|[C4242](../error-messages/compiler-warnings/compiler-warning-level-4-c4242.md) (livello 4)|'*Identifier*': conversione da'*tipo1*' a'*tipo2*', possibile perdita di dati|
|[C4254](../error-messages/compiler-warnings/compiler-warning-level-4-c4254.md) (livello 4)|'*operator*': conversione da'*tipo1*' a'*tipo2*', possibile perdita di dati|
|[C4255](../error-messages/compiler-warnings/compiler-warning-level-4-c4255.md) (livello 4)|'*Function*': nessun prototipo di funzione fornito: conversione di ' ()' in ' (void)'|
|[C4263](../error-messages/compiler-warnings/compiler-warning-level-4-c4263.md) (livello 4)|'*Function*': la funzione membro non esegue l'override di nessuna funzione membro virtuale della classe di base|
|[C4264](../error-messages/compiler-warnings/compiler-warning-level-1-c4264.md) (livello 1)|'*virtual_function*': Nessun override disponibile per la funzione membro virtuale dalla base '*Class*'; funzione nascosta|
|[C4265](../error-messages/compiler-warnings/compiler-warning-level-3-c4265.md) (livello 3)|'*Class*': la classe dispone di funzioni virtuali, ma il distruttore non è virtuale|
|[C4266](../error-messages/compiler-warnings/compiler-warning-level-4-c4266.md) (livello 4)|'*Function*': Nessun override disponibile per la funzione membro virtuale dalla base '*Type*'; funzione nascosta|
|[C4287](../error-messages/compiler-warnings/compiler-warning-level-3-c4287.md) (livello 3)|'*operator*': mancata corrispondenza di costanti non firmate/negative|
|[C4289](../error-messages/compiler-warnings/compiler-warning-level-4-c4289.md) (livello 4)|utilizzata estensione non standard:'*var*': la variabile di controllo del ciclo dichiarata nel ciclo for viene utilizzata all'esterno dell'ambito del ciclo for|
|[C4296](../error-messages/compiler-warnings/compiler-warning-level-4-c4296.md) (livello 4)|'*operator*': l'espressione è sempre false|
|[C4339](../error-messages/compiler-warnings/compiler-warning-level-4-c4339.md) (livello 4)|'*Type*': è stato rilevato un tipo non definito nei metadati CLR. l'uso di questo tipo può causare un'eccezione in fase di esecuzione|
|[C4342](../error-messages/compiler-warnings/compiler-warning-level-1-c4342.md) (livello 1)|modifica del comportamento: è stato chiamato '*Function*', ma nelle versioni precedenti è stato chiamato un operatore membro|
|[C4350](../error-messages/compiler-warnings/compiler-warning-level-1-c4350.md) (livello 1)|modifica del comportamento: è stato chiamato '*member1*' anziché'*membro2*'|
|[C4355](../error-messages/compiler-warnings/compiler-warning-c4355.md)|"this": utilizzato nell'elenco degli inizializzatori dei membri di base|
|[C4365](../error-messages/compiler-warnings/compiler-warning-level-4-c4365.md) (livello 4)|'*Action*': conversione da'*TYPE_1*' a'*TYPE_2*', mancata corrispondenza tra signed e unsigned|
|C4370 (livello 3)|layout della classe è stato modificato rispetto alla versione precedente del compilatore per migliorare la compressione|
|[C4371](../error-messages/compiler-warnings/c4371.md) (livello 3)|'*NomeClasse*': è possibile che il layout della classe sia stato modificato rispetto a una versione precedente del compilatore a causa di una migliore compressione del membro '*member*'|
|C4388 (livello 4)|errata corrispondenza tra signed e unsigned|
|[C4412](../error-messages/compiler-warnings/compiler-warning-level-2-c4412.md) (livello 2)|'*Function*': la firma della funzione contiene il tipo '*Type*'; Gli oggetti C++ non sono sicuri per passare tra codice puro e misto o nativo|
|C4426 (livello 1)|i flag di ottimizzazione modificati dopo l'inclusione dell'intestazione potrebbero essere dovuti a #pragma optimize () <sup>14,1</sup>|
|[C4435](../error-messages/compiler-warnings/compiler-warning-level-4-c4435.md) (livello 4)|'*Class1*': il layout dell'oggetto in/vd2 cambierà a causa della base virtuale '*Class2*'|
|[C4437](../error-messages/compiler-warnings/compiler-warning-level-4-c4437.md) (livello 4)|dynamic_cast dalla base virtuale '*Class1*' a'*Class2*' potrebbe non riuscire in alcuni contesti|
|C4444 (livello 3)|'__unaligned' di livello superiore non implementato nel contesto|
|[C4464](../error-messages/compiler-warnings/c4464.md) (livello 4)|il percorso di inclusione relativo contiene '. .'|
|[C4471](../error-messages/compiler-warnings/compiler-warning-level-4-c4471.md) (livello 4)|una dichiarazione con stato di un'enumerazione senza ambito deve avere un tipo sottostante (presupposto int) <sup>Perm</sup>|
|C4472 (livello 1)|'*Identifier*' è un'enumerazione nativa: aggiungere un identificatore di accesso (privato/pubblico) per dichiarare un'enumerazione gestita|
|[C4514](../error-messages/compiler-warnings/compiler-warning-level-4-c4514.md) (livello 4)|'*Function*': funzione inline senza riferimenti rimossa|
|[C4536](../error-messages/compiler-warnings/compiler-warning-level-4-c4536.md) (livello 4)|' type name ': il nome del tipo supera il limite di caratteri '*limit*' per i metadati|
|[C4545](../error-messages/compiler-warnings/compiler-warning-level-1-c4545.md) (livello 1)|l'espressione prima della virgola restituisce una funzione senza elenco di argomenti|
|[C4546](../error-messages/compiler-warnings/compiler-warning-level-1-c4546.md) (livello 1)|nella chiamata di funzione prima della virgola manca l'elenco degli argomenti|
|[C4547](../error-messages/compiler-warnings/compiler-warning-level-1-c4547.md) (livello 1)|'*operator*': l'operatore prima della virgola non ha alcun effetto; operatore previsto con effetto collaterale|
|[C4548](../error-messages/compiler-warnings/compiler-warning-level-1-c4548.md) (livello 1)|l'espressione prima della virgola non ha effetto. Prevista espressione con effetto collaterale.|
|[C4549](../error-messages/compiler-warnings/compiler-warning-level-1-c4549.md) (livello 1)|'*operator1*': l'operatore prima della virgola non ha alcun effetto; si intendeva '*operator2*'?|
|[C4555](../error-messages/compiler-warnings/compiler-warning-level-1-c4555.md) (livello 1)|l'espressione non ha effetto. Prevista espressione con effetto collaterale|
|[C4557](../error-messages/compiler-warnings/compiler-warning-level-3-c4557.md) (livello 3)|' __assume ' contiene l'effetto '*Effect*'|
|[C4571](../error-messages/compiler-warnings/compiler-warning-level-4-c4571.md) (livello 4)|informativo: la semantica di catch (...) è cambiata da Visual C++ 7,1; le eccezioni strutturate (SEH) non vengono più rilevate|
|C4574 (livello 4)|'*Identifier*' è definito come ' 0': si intendeva usare ' #if *Identifier*'?|
|C4577 (livello 1)|' noexcept ' usato senza la modalità di gestione delle eccezioni specificata. la chiusura dell'eccezione non è garantita. Specificare/EHsc|
|C4582 (livello 4)|'*Type*': il costruttore non è stato chiamato in modo implicito|
|C4583 (livello 4)|'*Type*': il distruttore non è stato chiamato in modo implicito|
|C4587 (livello 1)|'*anonymous_structure*': modifica del comportamento: il costruttore non viene più chiamato in modo implicito|
|C4588 (livello 1)|'*anonymous_structure*': modifica del comportamento: il distruttore non viene più chiamato in modo implicito|
|[C4596](../error-messages/compiler-warnings/c4596.md) (livello 4)|'*Identifier*': nome completo non valido nella dichiarazione del membro <sup>14,3</sup> <sup>Perm</sup>|
|C4598 (livello 1 e livello 3)|' #include '*intestazione*"': numero di intestazione *. il numero* nell'intestazione precompilata non corrisponde alla compilazione corrente nella posizione <sup>14,3</sup>|
|C4599 (livello 3)|'*Option* *path*': il numero di argomenti della riga di *comando non corrisponde* all'intestazione precompilata <sup>14,3</sup>|
|C4605 (livello 1)|'/D *macro*' specificato nella riga di comando corrente, ma non è stato specificato quando è stata compilata l'intestazione precompilata|
|[C4608](../error-messages/compiler-warnings/compiler-warning-level-3-c4608.md) (livello 3)|'*union_member*' è già stato inizializzato da un altro membro dell'Unione nell'elenco degli inizializzatori, <sup>Perm</sup> '*union_member*'|
|[C4619](../error-messages/compiler-warnings/compiler-warning-level-3-c4619.md) (livello 3)|avviso #pragma: nessun numero di avviso '*Number*'|
|[C4623](../error-messages/compiler-warnings/compiler-warning-level-4-c4623.md) (livello 4)|'classe derivata': impossibile generare il costruttore predefinito poiché un costruttore predefinito della classe base è inaccessibile|
|[C4625](../error-messages/compiler-warnings/compiler-warning-level-4-c4625.md) (livello 4)|'classe derivata': impossibile generare il costruttore di copia poiché un costruttore di copia della classe base è inaccessibile|
|[C4626](../error-messages/compiler-warnings/compiler-warning-level-4-c4626.md) (livello 4)|'classe derivata': impossibile generare l'operatore di assegnazione poiché un operatore di assegnazione della classe base è inaccessibile|
|[C4628](../error-messages/compiler-warnings/compiler-warning-level-1-c4628.md) (livello 1)|digraph non supportati con -Ze. La sequenza di caratteri '*digraph*' non è stata interpretata come token alternativo per '*char*'|
|[C4640](../error-messages/compiler-warnings/compiler-warning-level-3-c4640.md) (livello 3)|'*instance*': la costruzione di oggetti statici locali non è thread-safe|
| C4643 (livello 4) | Lo standard C++ non è consentito per la dichiarazione di "*Identifier*" in base allo spazio dei nomi std. <sup>15.8</sup> |
|C4647 (livello 3)|modifica del comportamento: __is_pod (*tipo*) ha un valore diverso nelle versioni precedenti|
|C4654 (livello 4)|Il codice inserito prima dell'inclusione della riga di intestazione precompilata verrà ignorato. Aggiungere codice all'intestazione precompilata. <sup>14,1</sup>|
|[C4668](../error-messages/compiler-warnings/compiler-warning-level-4-c4668.md) (livello 4)|'*Symbol*' non è definito come macro del preprocessore, sostituendo con ' 0' per '*Directives*'|
|[C4682](../error-messages/compiler-warnings/compiler-warning-level-4-c4682.md) (livello 4)|'*Symbol*': nessun attributo di parametro direzionale specificato. il valore predefinito è [in]|
|[C4686](../error-messages/compiler-warnings/compiler-warning-level-3-c4686.md) (livello 3)|'*tipo definito dall'utente*': possibile modifica del comportamento. modifica nella convenzione di chiamata return UDT|
|[C4692](../error-messages/compiler-warnings/compiler-warning-level-1-c4692.md) (livello 1)|'*Function*': la firma del membro non privato contiene il tipo nativo privato '*NATIVE_TYPE*' dell'assembly|
|[C4710](../error-messages/compiler-warnings/compiler-warning-level-4-c4710.md) (livello 4)|'*Function*': funzione non inline|
|[C4738](../error-messages/compiler-warnings/compiler-warning-level-3-c4738.md) (livello 3)|archiviazione in memoria del risultato float a 32 bit, possibile riduzione delle prestazioni|
|[C4746](../error-messages/compiler-warnings/compiler-warning-c4746.md)|l'accesso volatile di '*Expression*' è soggetto a/volatile: \<iso&#124;ms> setting. provare a usare __iso_volatile_load funzioni intrinseche/Store|
|C4749 (livello 4)|supportato in modo condizionale: offsetof applicato al tipo di layout non standard '*Type*'|
|C4767 (livello 4)|il nome di sezione '*Symbol*' è più lungo di 8 caratteri e verrà troncato dal linker|
|C4768 (livello 3)|gli attributi __declspec prima della specifica del collegamento vengono ignorati|
|C4774 (livello 4)|'*String*': la stringa di formato prevista nel *numero* dell'argomento non è un valore letterale stringa|
|C4777 (livello 4)|'*Function*': la stringa di formato '*String*' richiede un argomento di tipo '*tipo1*', ma il *numero* dell'argomento Variadic è di tipo '*tipo2*'|
|C4786 (livello 3)|'*Symbol*': il nome dell'oggetto è stato troncato a'*Number*' caratteri nelle informazioni di debug|
| [C4800](../error-messages/compiler-warnings/compiler-warning-level-3-c4800.md) (livello 4) | Conversione implicita da'*Type*' a bool. Possibile perdita di informazioni <sup>16,0</sup> |
|[C4820](../error-messages/compiler-warnings/compiler-warning-level-4-c4820.md) (livello 4)|riempimento byte '*bytes*' aggiunto dopo il costrutto '*MEMBER_NAME*'|
| [C4822](../error-messages/compiler-warnings/compiler-warning-level-1-c4822.md) (livello 1) | '*member*': la funzione membro della classe locale non dispone di un corpo |
|C4826 (livello 2)|La conversione da'*tipo1*' a'*tipo2*' ha un segno esteso. Questo potrebbe causare un comportamento imprevisto in fase di esecuzione.|
|C4837 (livello 4)|è stato rilevato un trigramma:'?? *carattere*' sostituito da'*carattere*'|
|C4841 (livello 4)|utilizzata estensione non standard: indicatore di membro composto usato in offsetof|
|C4842 (livello 4)|il risultato di ' offsetof ' applicato a un tipo che usa l'ereditarietà multipla non è garantito che sia coerente tra le versioni del compilatore|
|[C4868](../error-messages/compiler-warnings/compiler-warning-c4868.md) (livello 4)|il compilatore '_file_(*Line_number*)' non può applicare l'ordine di valutazione da sinistra a destra nell'elenco di inizializzazione tra parentesi graffe|
|[C4905](../error-messages/compiler-warnings/compiler-warning-level-1-c4905.md) (livello 1)|cast di stringa letterale wide su "LPSTR"|
|[C4906](../error-messages/compiler-warnings/compiler-warning-level-1-c4906.md) (livello 1)|cast di stringa letterale su "LPWSTR"|
|[C4917](../error-messages/compiler-warnings/compiler-warning-level-1-c4917.md) (livello 1)|'*dichiaratore*': un GUID può essere associato solo a una classe, un'interfaccia o uno spazio dei nomi|
|[C4928](../error-messages/compiler-warnings/compiler-warning-level-1-c4928.md) (livello 1)|inizializzazione di copia non valida; sono state implicitamente applicate più conversioni definite dall'utente|
|[C4931](../error-messages/compiler-warnings/compiler-warning-level-4-c4931.md) (livello 4)|si suppone che la libreria dei tipi sia stata compilata per puntatori a numero bit|
|[C4946](../error-messages/compiler-warnings/compiler-warning-level-1-c4946.md) (livello 1)|reinterpret_cast usato tra le classi correlate:'*Class1*' è *Class2*'|
|C4962|'*Function*': ottimizzazioni PGO disabilitate perché le ottimizzazioni provocano l'incoerenza dei dati di profilo|
|[C4986](../error-messages/compiler-warnings/compiler-warning-c4986.md) (livello 4)|'*Symbol*': la specifica dell'eccezione non corrisponde alla dichiarazione precedente|
|C4987 (livello 4)|utilizzata estensione non standard: 'throw (...)'|
|C4988 (livello 4)|'*Symbol*': variabile dichiarata al di fuori dell'ambito di classe/funzione|
|C5022|'*Type*': specificati più costruttori di spostamento|
|C5023|'*Type*': sono stati specificati più operatori di assegnazione di spostamento|
|C5024 (livello 4)|'*Type*': il costruttore di spostamento è stato definito in modo implicito come eliminato|
|C5025 (livello 4)|'*Type*': l'operatore di assegnazione di spostamento è stato definito in modo implicito come eliminato|
|C5026 (livello 1 e livello 4)|'*Type*': il costruttore di spostamento è stato definito in modo implicito come eliminato|
|C5027 (livello 1 e livello 4)|'*Type*': l'operatore di assegnazione di spostamento è stato definito in modo implicito come eliminato|
|C5029 (livello 4)|utilizzata estensione non standard: gli attributi di allineamento in C++ si applicano solo a variabili, membri dati e tipi di tag|
|C5031 (livello 4)|avviso di #pragma (pop): probabile mancata corrispondenza, visualizzazione dello stato di avviso inserito in un file diverso <sup>14,1</sup>|
|C5032 (livello 4)|rilevato #pragma avviso (push) senza #pragma avviso corrispondente (pop) <sup>14,1</sup>|
|C5034|l'uso di '*intrinsic*' intrinseco causa la compilazione della *funzione function-name* come codice Guest <sup>15,3</sup>|
|C5035|Se si usa la funzionalità'*feature*', il *nome della funzione* funzione viene compilato come codice Guest <sup>15,3</sup>|
|C5036 (livello 1)|conversione del puntatore a funzione varargs durante la compilazione con/Hybrid: x86arm64'*tipo1*' in '*tipo2*' <sup>15,3</sup>|
|[C5038](../error-messages/compiler-warnings/c5038.md) (livello 4)|il membro dati '*member1*' verrà inizializzato dopo il membro dati '*membro2*' <sup>15,3</sup>|
|C5039 (livello 4)|'*Function*': puntatore o riferimento a una funzione potenzialmente generata passata alla funzione extern C in-EHC. Se questa funzione genera un'eccezione, può verificarsi un comportamento non definito. <sup>15,5</sup>|
|C5042 (livello 3)|'*Function*': le dichiarazioni di funzione nell'ambito del blocco non possono essere specificate come ' inline ' in C++ standard. Rimuovi identificatore ' inline ' <sup>15,5</sup>|
|[C5045](../error-messages/compiler-warnings/c5045.md)|Il compilatore inserirà la mitigazione Spectre per il carico di memoria se l'opzione/Qspectre è specificata <sup>15,7</sup>|

<sup>14,1</sup> questo avviso è disponibile a partire da Visual Studio 2015 Update 1. \
<sup>14,3</sup> questo avviso è disponibile a partire da Visual Studio 2015 Update 3. \
<sup>15,3</sup> questo avviso è disponibile a partire da Visual Studio 2017 versione 15,3. \
<sup>15,5</sup> questo avviso è disponibile a partire da Visual Studio 2017 versione 15,5. \
<sup>15,7</sup> questo avviso è disponibile a partire da Visual Studio 2017 versione 15,7. \
<sup>15,8</sup> questo avviso è disponibile a partire da Visual Studio 2017 versione 15,8. \
<sup>16,0</sup> questo avviso è disponibile a partire da Visual Studio 2019 RTM. \
<sup>Perm</sup> Questo avviso è disattivato a meno che non sia stata impostata l'opzione del compilatore [/permissive-](../build/reference/permissive-standards-conformance.md) .

## <a name="warnings-off-by-default-in-earlier-versions"></a>Avvisi disattivati per impostazione predefinita nelle versioni precedenti

Questi avvisi erano disattivati per impostazione predefinita nelle versioni del compilatore precedenti a Visual Studio 2015:

|Avviso|Message|
|-|-|
|[C4302](../error-messages/compiler-warnings/compiler-warning-level-2-c4302.md) (livello 2)|'*conversion*': troncamento da'*tipo1*' a'*tipo2*'|
|[C4311](../error-messages/compiler-warnings/compiler-warning-level-1-c4311.md) (livello 1)|'*Variable*': troncamento puntatore da'*Type*' a'*Type*'|
|[C4312](../error-messages/compiler-warnings/compiler-warning-level-1-c4312.md) (livello 1)|'*Operation*': conversione da'*tipo1*' a'*tipo2*' di dimensioni maggiori|
|[C4319](../error-messages/compiler-warnings/compiler-warning-level-1-c4319.md) (livello 1)|'*operator*': zero che estende '*tipo1*' a'*tipo2*' di dimensioni maggiori|

Questo avviso è disattivato per impostazione predefinita nelle versioni del compilatore precedenti a Visual Studio 2012:

|Avviso|Message|
|-|-|
|[C4431](../error-messages/compiler-warnings/compiler-warning-level-4-c4431.md) (livello 4)|identificatore di tipo mancante, verrà utilizzato int. Nota: default-int non è più supportato in C++|

## <a name="see-also"></a>Vedi anche

[warning](../preprocessor/warning.md)
