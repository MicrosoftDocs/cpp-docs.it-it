---
title: Errori del compilatore da C2700 a C2799
ms.date: 04/21/2019
f1_keywords:
- C2716
- C2717
- C2727
- C2729
- C2737
- C2740
- C2741
- C2742
- C2744
- C2746
- C2747
- C2759
- C2763
- C2769
- C2772
- C2789
- C2796
- C2799
helpviewer_keywords:
- C2716
- C2717
- C2727
- C2729
- C2737
- C2740
- C2741
- C2742
- C2744
- C2746
- C2747
- C2759
- C2763
- C2769
- C2772
- C2789
- C2796
- C2799
ms.assetid: 6ee257bb-94bc-42b9-af2c-3c73926afba4
ms.openlocfilehash: 174f6a9c8ec9e44deadfca090ba492cb32d53e9f
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87197514"
---
# <a name="compiler-errors-c2700-through-c2799"></a>Errori del compilatore da C2700 a C2799

Negli articoli di questa sezione della documentazione viene illustrato un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Errore|Message|
|-----------|-------------|
|[Errore del compilatore C2700](compiler-error-c2700.md)|'*Type*': non può essere generata (usare/W4 per altre informazioni)|
|[Errore del compilatore C2701](compiler-error-c2701.md)|'*Function*': un modello di funzione/generico non può essere un elemento Friend di una classe locale|
|[Errore del compilatore C2702](compiler-error-c2702.md)| __except non può essere visualizzato nel blocco di terminazione|
|[Errore del compilatore C2703](compiler-error-c2703.md)|istruzione __leave non valida|
|[Errore del compilatore C2704](compiler-error-c2704.md)|'*Function*': __va_start intrinseco consentito solo in varargs|
|[Errore del compilatore C2705](compiler-error-c2705.md)|'*Label*': salto non valido nell'ambito '*exception_block*'|
|[Errore del compilatore C2706](compiler-error-c2706.md)|__except non valido senza __try corrispondente ('}' mancante nel blocco __try?)|
|[Errore del compilatore C2707](compiler-error-c2707.md)|'*Identifier*': contesto non valido per la funzione intrinseca|
|[Errore del compilatore C2708](compiler-error-c2708.md)|'*Identifier*': la lunghezza in byte dei parametri effettivi differisce dalla chiamata o dal riferimento precedente|
|[Errore del compilatore C2709](compiler-error-c2709.md)|'*Identifier*': la lunghezza in byte dei parametri formali differisce dalla dichiarazione precedente|
|[Errore del compilatore C2710](compiler-error-c2710.md)|'*Identifier*':' __declspec (*modificatore*)' può essere applicato solo a una funzione che restituisce un puntatore|
|[Errore del compilatore C2711](compiler-error-c2711.md)|'*Function*': questa funzione non può essere compilata come gestita. provare a usare #pragma non gestita|
|[Errore del compilatore C2712](compiler-error-c2712.md)|Impossibile utilizzare __try in funzioni che richiedono la rimozione di oggetti|
|[Errore del compilatore C2713](compiler-error-c2713.md)|È consentita una sola forma di gestione delle eccezioni per ogni funzione|
|[Errore del compilatore C2714](compiler-error-c2714.md)| `alignof(void)`non è consentito|
|[Errore del compilatore C2715](compiler-error-c2715.md)|'*Type*': non è possibile generare o intercettare questo tipo|
|Errore del compilatore C2716|Obsoleta.|
|Errore del compilatore C2717|Obsoleta.|
|[Errore del compilatore C2718](compiler-error-c2718.md)|'*Type*': il parametro effettivo con l'allineamento richiesto del *numero* non verrà allineato|
|[Errore del compilatore C2719](compiler-error-c2719.md)|'*Parameter*': il parametro formale con l'allineamento richiesto del *numero* non verrà allineato|
|[Errore del compilatore C2720](compiler-error-c2720.md)|'*Identifier*': identificatore classe di archiviazione '*specifier*' non valido nei membri|
|[Errore del compilatore C2721](compiler-error-c2721.md)|'*specifier*': identificatore classe di archiviazione non valido tra il tipo e la parola chiave operator|
|[Errore del compilatore C2722](compiler-error-c2722.md)|'::*operator*': comando dell'operatore seguente non valido; USA *' operatore operator '*|
|[Errore del compilatore C2723](compiler-error-c2723.md)|'*Function*': identificatore '*specifier*' non valido nella definizione di funzione|
|[Errore del compilatore C2724](compiler-error-c2724.md)|'*Function*':' static ' non deve essere usato per le funzioni membro definite in ambito file|
|[Errore del compilatore C2725](compiler-error-c2725.md)|'*Type*': Impossibile generare o intercettare un oggetto gestito/WinRT per valore o riferimento|
|[Errore del compilatore C2726](compiler-error-c2726.md)|' gcnew ' può essere usato solo per creare un oggetto con tipo gestito/WinRT|
|Errore del compilatore C2727|Obsoleta.|
|[Errore del compilatore C2728](compiler-error-c2728.md)|'*Type*': una matrice nativa non può contenere questo tipo|
|Errore del compilatore C2729|Obsoleta.|
|[Errore del compilatore C2730](compiler-error-c2730.md)|'*Class*': non può essere una classe di base di se stessa|
|[Errore del compilatore C2731](compiler-error-c2731.md)|'*Function*': Impossibile eseguire l'overload della funzione|
|[Errore del compilatore C2732](compiler-error-c2732.md)|le specifiche di collegamento contraddicono le specifiche precedenti per '*Function*'|
|[Errore del compilatore C2733](compiler-error-c2733.md)|'*Function*': secondo collegamento C della funzione in overload non consentito|
|[Errore del compilatore C2734](compiler-error-c2734.md)|'*Identifier*': è necessario inizializzare l'oggetto ' const ' se non è' extern '|
|[Errore del compilatore C2735](compiler-error-c2735.md)|parola chiave '*keyword*' non consentita nell'identificatore di tipo di parametro formale|
|[Errore del compilatore C2736](compiler-error-c2736.md)|parola chiave '*keyword*' non consentita nel cast|
|Errore del compilatore C2737|'*Identifier*': l'oggetto ' constExpr ' deve essere inizializzato|
|[Errore del compilatore C2738](compiler-error-c2738.md)|' operator *Type*': è ambiguo o non è un membro di '*Class*'|
|[Errore del compilatore C2739](compiler-error-c2739.md)|'*Number*': le dimensioni della matrice gestita/WinRT esplicita devono essere comprese tra 1 e 32|
|Errore del compilatore C2740|il valore dell'operando '*Number*' non è compreso nell'intervallo '*lower_bound*  -  *upper_bound*'|
|Errore del compilatore C2741|dimensioni del frame troppo grandi|
|Errore del compilatore C2742|Obsoleta.|
|[Errore del compilatore C2743](compiler-error-c2743.md)|'*Type*': Impossibile intercettare un tipo nativo con __clrcall distruttore o un costruttore di copia|
|Errore del compilatore C2744|'*operator*' non è un operatore CLR/WinRT valido|
|[Errore del compilatore C2745](compiler-error-c2745.md)|'*token*': questo token non può essere convertito in un identificatore|
|Errore del compilatore C2746|Obsoleta.|
|Errore del compilatore C2747|Obsoleta.|
|[Errore del compilatore C2748](compiler-error-c2748.md)|la creazione di matrici gestite/WinRT deve avere dimensioni di matrice o inizializzatori di matrici|
|[Errore del compilatore C2749](compiler-error-c2749.md)|'*Type*': può solo generare o intercettare un handle per una classe gestita con/CLR: safe|
|[Errore del compilatore C2750](compiler-error-c2750.md)|'*Type*': non è possibile usare ' New ' nel tipo di riferimento; usare invece ' gcnew '|
|[Errore del compilatore C2751](compiler-error-c2751.md)|'*Parameter*': non è possibile qualificare il nome di un parametro di funzione|
|[Errore del compilatore C2752](compiler-error-c2752.md)|'*template*': più specializzazioni parziali corrispondenti all'elenco di argomenti del modello|
|[Errore del compilatore C2753](compiler-error-c2753.md)|'*template*': la specializzazione parziale non può corrispondere all'elenco di argomenti per il modello primario|
|[Errore del compilatore C2754](compiler-error-c2754.md)|'*template*': una specializzazione parziale non può avere un parametro di modello dipendente non di tipo|
|[Errore del compilatore C2755](compiler-error-c2755.md)|'*Parameter*': un parametro non di tipo di una specializzazione parziale deve essere un identificatore semplice|
|[Errore del compilatore C2756](compiler-error-c2756.md)|'*template*': argomenti di modello predefiniti non consentiti in una specializzazione parziale|
|[Errore del compilatore C2757](compiler-error-c2757.md)|'*Identifier*': esiste già un simbolo con questo nome e pertanto questo nome non può essere usato come nome dello spazio dei nomi|
|[Errore del compilatore C2758](compiler-error-c2758.md)|'*member*': un membro di tipo di riferimento deve essere inizializzato|
|Errore del compilatore C2759|report assembler inline: *ERROR_MESSAGE*|
|[Errore del compilatore C2760](compiler-error-c2760.md)|errore di sintassi: previsto '*token1*' non '*token2*'|
|[Errore del compilatore C2761](compiler-error-c2761.md)|'*Function*': la ridichiarazione della funzione membro non è consentita|
|[Errore del compilatore C2762](compiler-error-c2762.md)|'*template*': espressione non valida come argomento di modello per '*Parameter*'|
|Errore del compilatore C2763|'*template*': utilizzo non valido di un valore letterale stringa come argomento di modello per '*Parameter*'|
|[Errore del compilatore C2764](compiler-error-c2764.md)|'*Parameter*': parametro di modello non utilizzato o deducibile nella specializzazione parziale '*specializzazione*'|
|[Errore del compilatore C2765](compiler-error-c2765.md)|'*Function*': una specializzazione esplicita di un modello di funzione non può avere argomenti predefiniti|
|[Errore del compilatore C2766](compiler-error-c2766.md)|specializzazione esplicita; '*specializzazione*' è già stato definito|
|[Errore del compilatore C2767](compiler-error-c2767.md)|dimensione della matrice gestita/WinRT non corrispondente: *numero di argomenti previsti* : *numero* specificato|
|[Errore del compilatore C2768](compiler-error-c2768.md)|'*Function*': utilizzo non valido di argomenti di modello espliciti|
|Errore del compilatore C2769|non è possibile inizializzare una matrice gestita/WinRT in un elenco di inizializzatori di base/membro|
|[Errore del compilatore C2770](compiler-error-c2770.md)|argomento/i modello esplicito/i generico non valido per '*template*'|
|[Errore del compilatore C2771](compiler-error-c2771.md)|#import consentito solo nell'ambito globale o dello spazio dei nomi|
|Errore del compilatore C2772|Obsoleta.|
|[Errore del compilatore C2773](compiler-error-c2773.md)|#import e #using disponibili solo nel compilatore C++|
|[Errore del compilatore C2774](compiler-error-c2774.md)|'*Identifier*': nessun metodo ' Put ' associato a questa proprietà|
|[Errore del compilatore C2775](compiler-error-c2775.md)|'*Identifier*': nessun metodo ' Get ' associato a questa proprietà|
|[Errore del compilatore C2776](compiler-error-c2776.md)|è possibile specificare un solo metodo ' Get ' per proprietà|
|[Errore del compilatore C2777](compiler-error-c2777.md)|è possibile specificare un solo metodo ' Put ' per proprietà|
|[Errore del compilatore C2778](compiler-error-c2778.md)|GUID in formato non corretto in __declspec (UUID ())|
|[Errore del compilatore C2779](compiler-error-c2779.md)|'*Declaration*': i metodi delle proprietà possono essere associati solo a membri dati non statici|
|[Errore del compilatore C2780](compiler-error-c2780.md)|'*Declaration*': prevede argomenti *numerici* - *numero* fornito|
|[Errore del compilatore C2781](compiler-error-c2781.md)|'*Declaration*' *: prevede almeno* *il numero di argomento specificato*|
|[Errore del compilatore C2782](compiler-error-c2782.md)|'*Declaration*': il parametro template/Generic '*Parameter*' è ambiguo|
|[Errore del compilatore C2783](compiler-error-c2783.md)|'*Declaration*': non è stato possibile dedurre l'argomento Template/Generic per '*Identifier*'|
|[Errore del compilatore C2784](compiler-error-c2784.md)|'*Declaration*': non è stato possibile dedurre l'argomento Template/Generic per '*tipo1*' da'*tipo2*'|
|[Errore del compilatore C2785](compiler-error-c2785.md)|'*dichiarazione1*' è*dichiarazione2*' hanno tipi restituiti diversi|
|[Errore del compilatore C2786](compiler-error-c2786.md)|'*Type*': operando non valido per __uuidof|
|[Errore del compilatore C2787](compiler-error-c2787.md)|'*Identifier*': nessun GUID associato a questo oggetto|
|[Errore del compilatore C2788](compiler-error-c2788.md)|'*Identifier*': più di un GUID associato a questo oggetto|
|Errore del compilatore C2789|'*Identifier*': è necessario inizializzare un oggetto di tipo qualificato da const|
|[Errore del compilatore C2790](compiler-error-c2790.md)|' Super ': questa parola chiave può essere usata solo all'interno del corpo della funzione membro della classe|
|[Errore del compilatore C2791](compiler-error-c2791.md)|uso non valido di ' Super ':'*Class*' non contiene classi base|
|[Errore del compilatore C2792](compiler-error-c2792.md)|' Super ': questa parola chiave deve essere seguita da'::'|
|[Errore del compilatore C2793](compiler-error-c2793.md)|'*token*': token imprevisto dopo '::', è previsto l'identificatore o la parola chiave ' operator '|
|[Errore del compilatore C2794](compiler-error-c2794.md)|'*Identifier*': non è un membro di una classe di base diretta o indiretta di '*Class*'|
|[Errore del compilatore C2795](compiler-error-c2795.md)|' Super::*Identifier*' non è una funzione membro|
|Errore del compilatore C2796|' ref new ' può essere utilizzato solo per creare un'istanza di un tipo WinRT|
|[Errore del compilatore C2797](compiler-error-c2797.md)|Obsoleto '*Identifier*': inizializzazione elenco all'interno dell'elenco di inizializzatori di membri o inizializzatore di membro dati non statici non implementato|
|[Errore del compilatore C2798](compiler-error-c2798.md)|' Super::*Identifier*' è ambiguo|
|Errore del compilatore C2799|'*Identifier*': è necessario inizializzare un oggetto di tipo classe qualificato da const senza un costruttore predefinito fornito dall'utente|

## <a name="see-also"></a>Vedere anche

[Errori e avvisi degli strumenti di compilazione e compilatore C/C++](../compiler-errors-1/c-cpp-build-errors.md) \
[Errori del compilatore da C2000 a C3999](../compiler-errors-1/compiler-errors-c2000-c3999.md)
