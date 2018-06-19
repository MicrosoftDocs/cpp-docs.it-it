---
title: C2700 errori del compilatore C2799 | Documenti Microsoft
ms.custom: ''
ms.date: 11/17/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
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
dev_langs:
- C++
ms.assetid: 6ee257bb-94bc-42b9-af2c-3c73926afba4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8cab784c772b8b0faac2bca2bdc3ff7a3465b551
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33283858"
---
# <a name="compiler-errors-c2700-through-c2799"></a>C2700 errori del compilatore C2799

Gli articoli in questa sezione della documentazione illustrano un subset dei messaggi di errore generati dal compilatore.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## <a name="error-messages"></a>Messaggi di errore

|Error|Messaggio|
|-----------|-------------|
|[Errore del compilatore C2700](compiler-error-c2700.md)|'*tipo*': non può essere generata (per altre informazioni, utilizzare /W4)|
|[Errore del compilatore C2701](compiler-error-c2701.md)|'*funzione*': una funzione modello o generico non può essere un elemento friend di una classe locale|
|[Errore del compilatore C2702](compiler-error-c2702.md)| except non può trovarsi in un blocco di terminazione|
|[Errore del compilatore C2703](compiler-error-c2703.md)|istruzione leave non valido|
|[Errore del compilatore C2704](compiler-error-c2704.md)|'*funzione*': va_start intrinseco ammesso solo in varargs|
|[Errore del compilatore C2705](compiler-error-c2705.md)|'*etichetta*': salto non valido in '*exception_block*' ambito|
|[Errore del compilatore C2706](compiler-error-c2706.md)|except non valido senza try corrispondente (mancante '}' nel blocco try?)|
|[Errore del compilatore C2707](compiler-error-c2707.md)|'*identificatore*': un contesto non valido per una funzione intrinseca|
|[Errore del compilatore C2708](compiler-error-c2708.md)|'*identificatore*': lunghezza in byte effettivi dei parametri è diverso dal precedente chiamata o di riferimento|
|[Errore del compilatore C2709](compiler-error-c2709.md)|'*identificatore*': lunghezza in byte dei parametri formali differente da una dichiarazione precedente|
|[Errore del compilatore C2710](compiler-error-c2710.md)|'*identificatore*': ' declspec (*modificatore*)' può essere applicato solo a una funzione che restituisce un puntatore|
|[Errore del compilatore C2711](compiler-error-c2711.md)|'*funzione*': questa funzione non può essere compilate come gestite, gestita tramite #pragma|
|[Errore del compilatore C2712](compiler-error-c2712.md)|Impossibile utilizzare try in funzioni che richiedono la rimozione di oggetti|
|[Errore del compilatore C2713](compiler-error-c2713.md)|ciascuna funzione è permessa solo una forma di gestione delle eccezioni|
|[Errore del compilatore C2714](compiler-error-c2714.md)|non è consentito alignof(void)|
|[Errore del compilatore C2715](compiler-error-c2715.md)|'*tipo*': Impossibile generare o intercettare questo tipo|
|Errore del compilatore C2716|Obsoleta.|
|Errore del compilatore C2717|Obsoleta.|
|[Errore del compilatore C2718](compiler-error-c2718.md)|'*tipo*': il parametro effettivo con l'allineamento richiesto di *numero* non verrà allineato|
|[Errore del compilatore C2719](compiler-error-c2719.md)|'*parametro*': parametro formale con l'allineamento richiesto di *numero* non verrà allineato|
|[Errore del compilatore C2720](compiler-error-c2720.md)|'*identificatore*': '*identificatore*' identificatore classe di archiviazione non valido per i membri|
|[Errore del compilatore C2721](compiler-error-c2721.md)|'*identificatore*': identificatore classe di archiviazione non valido tra la parola chiave operator e tipo|
|[Errore del compilatore C2722](compiler-error-c2722.md)|'::*operatore*': non valido dopo il comando operator; utilizzare ' operatore *operatore*'|
|[Errore del compilatore C2723](compiler-error-c2723.md)|'*funzione*': '*identificatore*' identificatore non valido nella definizione di funzione|
|[Errore del compilatore C2724](compiler-error-c2724.md)|'*funzione*': non utilizzare 'static' per le funzioni membro definite in ambito file|
|[Errore del compilatore C2725](compiler-error-c2725.md)|'*tipo*': Impossibile generare o intercettare un oggetto gestito o WinRT per valore o riferimento|
|[Errore del compilatore C2726](compiler-error-c2726.md)|'gcnew' può essere utilizzato solo per creare un oggetto con tipo gestito o WinRT|
|Errore del compilatore C2727|Obsoleta.|
|[Errore del compilatore C2728](compiler-error-c2728.md)|'*tipo*': una matrice nativa non può contenere questo tipo|
|C2729 errore del compilatore|Obsoleta.|
|[Errore del compilatore C2730](compiler-error-c2730.md)|'*classe*': non può essere una classe di base di se stesso|
|[Errore del compilatore C2731](compiler-error-c2731.md)|'*funzione*': Impossibile eseguire l'overload di funzione|
|[Errore del compilatore C2732](compiler-error-c2732.md)|specifiche di collegamento contraddicono le precedenti specifiche di '*funzione*'|
|[Errore del compilatore C2733](compiler-error-c2733.md)|'*funzione*': secondo collegamento C della funzione in overload non consentito|
|[Errore del compilatore C2734](compiler-error-c2734.md)|'*identificatore*': necessario inizializzare l'oggetto 'const' Se non è 'extern'|
|[Errore del compilatore C2735](compiler-error-c2735.md)|'*parola chiave*' parola chiave non è consentito nell'identificatore di tipo di parametro formale|
|[Errore del compilatore C2736](compiler-error-c2736.md)|'*parola chiave*' parola chiave non è consentito in un cast|
|Errore del compilatore C2737|'*identificatore*': deve essere inizializzato l'oggetto 'constexpr'|
|[Errore del compilatore C2738](compiler-error-c2738.md)|' operatore *tipo*': è ambiguo o non è un membro di '*classe*'|
|[Errore del compilatore C2739](compiler-error-c2739.md)|'*numero*': le dimensioni di matrice gestita o WinRT esplicite devono essere comprese tra 1 e 32|
|C2740 errore del compilatore|valore dell'operando '*numero*'non compreso nell'intervallo'*lower_bound* - *upper_bound*'|
|C2741 errore del compilatore|Dimensione frame eccessiva|
|C2742 errore del compilatore|Obsoleta.|
|[Errore del compilatore C2743](compiler-error-c2743.md)|'*tipo*': Impossibile intercettare un tipo nativo con distruttore clrcall o costruttore di copia|
|C2744 errore del compilatore|'*operatore*' non è un operatore CLR o WinRT valido|
|[Errore del compilatore C2745](compiler-error-c2745.md)|'*token*': questo token non può essere convertito in un identificatore|
|C2746 errore del compilatore|Obsoleta.|
|C2747 errore del compilatore|Obsoleta.|
|[Errore del compilatore C2748](compiler-error-c2748.md)|creazione di matrice gestita o WinRT occorre specificare la dimensione della matrice o l'inizializzatore di matrice|
|[Errore del compilatore C2749](compiler-error-c2749.md)|'*tipo*': può solo generare o intercettare su un handle a una classe gestita con /CLR: safe|
|[Errore del compilatore C2750](compiler-error-c2750.md)|'*tipo*': Impossibile utilizzare 'new' per il riferimento al tipo; utilizzare 'gcnew'|
|[Errore del compilatore C2751](compiler-error-c2751.md)|'*parametro*': il nome di un parametro di funzione non può essere qualificato.|
|[Errore del compilatore C2752](compiler-error-c2752.md)|'*modello*': più specializzazioni parziali corrispondono all'elenco di argomento di modello|
|[Errore del compilatore C2753](compiler-error-c2753.md)|'*modello*': la specializzazione parziale non può corrispondere a elenco di argomenti del modello principale|
|[Errore del compilatore C2754](compiler-error-c2754.md)|'*modello*': una specializzazione parziale non può avere un parametro di modello non di tipo dipendente|
|[Errore del compilatore C2755](compiler-error-c2755.md)|'*parametro*': parametro di tipo non di una specializzazione parziale deve essere un identificatore semplice|
|[Errore del compilatore C2756](compiler-error-c2756.md)|'*modello*': non consentiti in una specializzazione parziale di argomenti di modello predefiniti|
|[Errore del compilatore C2757](compiler-error-c2757.md)|'*identificatore*': un simbolo con questo nome esiste già e pertanto questo nome non può essere utilizzato come nome dello spazio dei nomi|
|[Errore del compilatore C2758](compiler-error-c2758.md)|'*membro*': un membro di tipo di riferimento deve essere inizializzato|
|C2759 errore del compilatore|i report dell'assembler inline: *error_message*|
|[Errore del compilatore C2760](compiler-error-c2760.md)|Errore di sintassi: previsto '*token1*'not'*token2*'|
|[Errore del compilatore C2761](compiler-error-c2761.md)|'*funzione*': ridichiarazione della funzione membro non consentita|
|[Errore del compilatore C2762](compiler-error-c2762.md)|'*modello*': espressione non valida come argomento di modello per '*parametro*'|
|C2763 errore del compilatore|'*modello*': utilizzo non valido di una valore letterale stringa come argomento di modello per '*parametro*'|
|[Errore del compilatore C2764](compiler-error-c2764.md)|'*parametro*': parametro di modello non utilizzato o deducibile nella specializzazione parziale '*specializzazione*'|
|[Errore del compilatore C2765](compiler-error-c2765.md)|'*funzione*': una specializzazione esplicita di un modello di funzione non può avere argomenti predefiniti|
|[Errore del compilatore C2766](compiler-error-c2766.md)|specializzazione esplicita. '*specializzazione*' è già stato definito|
|[Errore del compilatore C2767](compiler-error-c2767.md)|dimensione non corrispondente della matrice gestita o WinRT: previsto *numero* argomenti - *numero* fornito|
|[Errore del compilatore C2768](compiler-error-c2768.md)|'*funzione*': utilizzo non valido di argomenti di modello espliciti|
|C2769 errore del compilatore|è Impossibile inizializzare la parentesi graffa di una matrice gestita o WinRT in un elenco di inizializzatori di basi/membri|
|[Errore del compilatore C2770](compiler-error-c2770.md)|argomenti di modello o generico esplicita non valido per '*modello*'|
|[Errore del compilatore C2771](compiler-error-c2771.md)|#import consentito solo nell'ambito globale o dello spazio dei nomi|
|C2772 errore del compilatore|Obsoleta.|
|[Errore del compilatore C2773](compiler-error-c2773.md)|#import e #using disponibili solo nel compilatore C++|
|[Errore del compilatore C2774](compiler-error-c2774.md)|'*identificatore*': nessun metodo 'put' è associato a questa proprietà|
|[Errore del compilatore C2775](compiler-error-c2775.md)|'*identificatore*': nessun metodo 'get' è associato a questa proprietà|
|[Errore del compilatore C2776](compiler-error-c2776.md)|per ciascuna proprietà è possibile specificare un solo metodo 'get'|
|[Errore del compilatore C2777](compiler-error-c2777.md)|per ciascuna proprietà è possibile specificare un solo metodo 'put'|
|[Errore del compilatore C2778](compiler-error-c2778.md)|GUID di formato non corretto in __declspec(uuid())|
|[Errore del compilatore C2779](compiler-error-c2779.md)|'*dichiarazione*': i metodi di proprietà possono essere solo associati ai membri dati non statici|
|[Errore del compilatore C2780](compiler-error-c2780.md)|'*dichiarazione*': prevista *numero* argomenti - *numero* fornito|
|[Errore del compilatore C2781](compiler-error-c2781.md)|'*dichiarazione*': prevista almeno *numero* argomento - *numero* fornito|
|[Errore del compilatore C2782](compiler-error-c2782.md)|'*dichiarazione*': parametro di modello o generico '*parametro*' è ambiguo|
|[Errore del compilatore C2783](compiler-error-c2783.md)|'*dichiarazione*': Impossibile dedurre un argomento di modello o generico per '*identificatore*'|
|[Errore del compilatore C2784](compiler-error-c2784.md)|'*dichiarazione*': Impossibile dedurre un argomento di modello o generico per '*type1*'from'*type2*'|
|[Errore del compilatore C2785](compiler-error-c2785.md)|'*dichiarazione1*'e'*dichiarazione2*' hanno tipi restituiti diversi|
|[Errore del compilatore C2786](compiler-error-c2786.md)|'*tipo*': operando non valido per uuidof|
|[Errore del compilatore C2787](compiler-error-c2787.md)|'*identificatore*': nessun GUID è stato associato a questo oggetto|
|[Errore del compilatore C2788](compiler-error-c2788.md)|'*identificatore*': più di un GUID associato all'oggetto|
|C2789 errore del compilatore|'*identificatore*': deve essere inizializzato un oggetto di tipo qualificato da const|
|[Errore del compilatore C2790](compiler-error-c2790.md)|'super': questa parola chiave può essere utilizzata solo all'interno del corpo della funzione membro di classe|
|[Errore del compilatore C2791](compiler-error-c2791.md)|utilizzo non valido di 'super': '*classe*' non ha classi di base|
|[Errore del compilatore C2792](compiler-error-c2792.md)|'super': questa parola chiave deve essere seguita da ':: '|
|[Errore del compilatore C2793](compiler-error-c2793.md)|'*token*': token imprevisto dopo ':: ', identificatore o la parola chiave 'operator' previsto|
|[Errore del compilatore C2794](compiler-error-c2794.md)|'*identificatore*': non è un membro di una classe base diretta o indiretta di '*classe*'|
|[Errore del compilatore C2795](compiler-error-c2795.md)|' super::*identificatore*' non è una funzione membro|
|C2796 errore del compilatore|'ref new' può essere utilizzato solo per creare un'istanza di un tipo WinRT|
|[Errore del compilatore C2797](compiler-error-c2797.md)|(Obsoleto) '*identificatore*': l'inizializzazione elenco all'interno di elenco di inizializzatori di membro o l'inizializzatore di membro dati non statici non implementato|
|[Errore del compilatore C2798](compiler-error-c2798.md)|' super::*identificatore*' è ambiguo|
|C2799 errore del compilatore|'*identificatore*': deve essere inizializzato un oggetto di tipo qualificato da const senza un costruttore predefinito fornito dall'utente|
