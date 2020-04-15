---
title: Puntatori intelligenti (C++ moderno)
ms.date: 11/19/2019
ms.topic: conceptual
ms.assetid: 909ef870-904c-49b6-b8cd-e9d0b7dc9435
ms.openlocfilehash: 0e93ce033649f5654595ae23a5f10da347879718
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365543"
---
# <a name="smart-pointers-modern-c"></a>Puntatori intelligenti (C++ moderno)

Nella moderna programmazione in c,a, la libreria standard include *puntatori intelligenti*, che vengono utilizzati per garantire che i programmi siano privi di perdite di memoria e risorse e siano indipendenti dalle eccezioni.

## <a name="uses-for-smart-pointers"></a>Utilizzi per i puntatori intelligenti

I puntatori intelligenti `std` sono definiti nello spazio dei nomi nel file di intestazione di [ \<>](../standard-library/memory.md) di memoria. Sono fondamentali per il linguaggio di programmazione [RAII](objects-own-resources-raii.md) o *Resource Acquisition Is Initialization.* L'obiettivo principale di questo linguaggio è assicurare che l'acquisizione delle risorse avvenga contemporaneamente all'inizializzazione dell'oggetto, in modo che tutte le risorse per l'oggetto vengano create e rese disponibili in una riga di codice. In pratica, il principio fondamentale di RAII è assegnare la proprietà delle risorse allocate dall'heap, ad esempio gli handle di oggetti di memoria o di memoria allocati in modo dinamico, a un oggetto allocato dallo stack il cui distruttore contiene il codice per eliminare o liberare la risorsa ed eventuale codice di pulizia associato.

Nella maggior parte dei casi, quando si inizializza un handle di risorsa o puntatore non elaborato per puntare a una risorsa effettiva, passare immediatamente il puntatore a un puntatore intelligente. Nel linguaggio C++ moderno, i puntatori non elaborati vengono utilizzati esclusivamente in blocchi di codice piccoli con ambito limitato, nei cicli o nelle funzioni di supporto per le quali le prestazioni sono importanti e non può crearsi confusione circa la proprietà.

Nell'esempio seguente viene fatto un confronto tra una dichiarazione di puntatore non elaborato e una dichiarazione di puntatore intelligente.

[!code-cpp[smart_pointers_intro#1](codesnippet/CPP/smart-pointers-modern-cpp_1.cpp)]

Come illustrato nell'esempio, un puntatore intelligente è un modello di classe dichiarato nello stack e inizializzato tramite un puntatore non elaborato che punta a un oggetto allocato dall'heap. Dopo essere stato inizializzato, il puntatore intelligente detiene la proprietà del puntatore non elaborato. Ciò significa che il puntatore intelligente è responsabile dell'eliminazione della memoria specificata dal puntatore non elaborato. Il distruttore del puntatore intelligente contiene la chiamata per l'eliminazione e poiché il puntatore intelligente viene dichiarato nello stack, il relativo distruttore viene richiamato quando il puntatore intelligente esce dall'ambito, anche se viene generata un'eccezione in un punto precedente dello stack.

Accedere al puntatore incapsulato utilizzando gli operatori del puntatore noti, `->` e `*`, di cui verrà eseguito l'overload per restituire il puntatore non elaborato incapsulato.

Il linguaggio del puntatore intelligente C++ ricorda la creazione di oggetti in linguaggi come C#: prima si crea l'oggetto e poi si permette al sistema di eliminarlo al momento opportuno. La differenza consiste nel fatto che nessun Garbage Collector separato viene eseguito in background. La memoria viene gestita tramite le regole di ambito C++ standard in modo che l'ambiente di runtime risulti più veloce e più efficiente.

> [!IMPORTANT]
> Creare sempre puntatori intelligenti su una riga di codice separata e mai in un elenco di parametri, in modo da evitare anche le più piccole perdite di risorse dovute a alcune regole di allocazione dell'elenco di parametri.

Nell'esempio riportato `unique_ptr` di seguito viene illustrato come utilizzare un tipo di puntatore intelligente dalla libreria standard di C, per incapsulare un puntatore a un oggetto di grandi dimensioni.

[!code-cpp[smart_pointers_intro#2](codesnippet/CPP/smart-pointers-modern-cpp_2.cpp)]

Di seguito vengono illustrati i passaggi essenziali per utilizzare i puntatori intelligenti.

1. Dichiarare il puntatore intelligente come variabile (locale) automatica. Non utilizzare la **new** nuova `malloc` o espressione sul puntatore intelligente stesso.

1. Nel parametro di tipo specificare il tipo di riferimento del puntatore incapsulato.

1. Passare un puntatore non elaborato a un **nuovo**oggetto -ed nel costruttore del puntatore intelligente. (Alcune funzioni dell'utilità o costruttori del puntatore intelligente eseguono queste operazioni in modo automatico).

1. Utilizzare gli operatori `->` e `*` sottoposti a overload per accedere all'oggetto.

1. Consentire al puntatore intelligente di eliminare l'oggetto.

I puntatori intelligenti sono progettati per essere estremamente efficaci sia in termini di memoria che di prestazioni. Ad esempio, l'unico membro dati in `unique_ptr` è il puntatore incapsulato. Ciò significa che `unique_ptr` è esattamente delle stesse dimensioni del puntatore, ovvero quattro o otto byte. L'accesso al puntatore incapsulato tramite gli operatori di overload di puntatori intelligenti e -> non è significativamente più lento rispetto all'accesso diretto ai puntatori non elaborati.

I puntatori intelligenti hanno le proprie funzioni membro, a cui si accede utilizzando la notazione "punto". Ad esempio, alcuni puntatori intelligenti della libreria standard di C. Come illustrato nell'esempio seguente, questa caratteristica è utile quando è necessario liberare memoria di proprietà del puntatore intelligente prima che quest'ultimo esca dall'ambito.

[!code-cpp[smart_pointers_intro#3](codesnippet/CPP/smart-pointers-modern-cpp_3.cpp)]

I puntatori intelligenti consentono in genere di accedere direttamente al relativo puntatore non elaborato. I puntatori `get` `CComPtr` `p` intelligenti della libreria standard di C. Consentendo l'accesso diretto al puntatore sottostante, è possibile utilizzare il puntatore intelligente per gestire la memoria nel codice e passare il puntatore non elaborato al codice che non supporta i puntatori intelligenti.

[!code-cpp[smart_pointers_intro#4](codesnippet/CPP/smart-pointers-modern-cpp_4.cpp)]

## <a name="kinds-of-smart-pointers"></a>Tipi di puntatori intelligenti

Nella sezione seguente vengono riepilogati i diversi tipi di puntatori intelligenti disponibili nell'ambiente di programmazione Windows e ne viene descritto l'utilizzo.

### <a name="c-standard-library-smart-pointers"></a>Puntatori intelligenti della libreria standard di C

Utilizzare questi puntatori intelligenti come prima scelta per incapsulare i puntatori in oggetti C++ non aggiornati (POCO, plain old C++ object).

- `unique_ptr`<br/>
   Consente esattamente un proprietario del puntatore sottostante. Utilizzarlo come scelta predefinita per POCO, a meno che non sia necessario un `shared_ptr`. Può essere spostato a un nuovo proprietario, ma non copiato o condiviso. Sostituisce `auto_ptr`, che è deprecato. Confrontare con `boost::scoped_ptr`. `unique_ptr`è piccolo ed efficiente; la dimensione è un puntatore e supporta i riferimenti rvalue per l'inserimento e il recupero rapidi da raccolte di librerie standard di C. File di intestazione: `<memory>`. Per ulteriori informazioni, vedere [Procedura: creare e utilizzare unique_ptr istanze](how-to-create-and-use-unique-ptr-instances.md) e [unique_ptr classe](../standard-library/unique-ptr-class.md).

- `shared_ptr`<br/>
   Puntatore intelligente con conteggio dei riferimenti. Utilizzarlo quando si desidera assegnare un puntatore non elaborato a più proprietari, ad esempio quando si restituisce una copia di un puntatore da un contenitore, ma si desidera conservare l'originale. Il puntatore non elaborato non viene eliminato finché tutti i proprietari di `shared_ptr` non sono usciti dall'ambito o non hanno ceduto in altro modo la proprietà. Ha le dimensioni di due puntatori, uno per l'oggetto e uno per il blocco di controllo condiviso che contiene il conteggio dei riferimenti. File di intestazione: `<memory>`. Per ulteriori informazioni, vedere [Procedura: creare e utilizzare shared_ptr istanze](how-to-create-and-use-shared-ptr-instances.md) e [shared_ptr classe](../standard-library/shared-ptr-class.md).

- `weak_ptr`<br/>
    Puntatore intelligente per casi speciali da utilizzare insieme a `shared_ptr`. `weak_ptr` fornisce l'accesso a un oggetto di proprietà di una o più istanze di `shared_ptr`, ma non partecipa al conteggio dei riferimenti. Utilizzarlo quando si desidera osservare un oggetto, ma non è necessario che rimanga attivo. Necessario in alcuni casi per interrompere i riferimenti circolari tra istanze di `shared_ptr`. File di intestazione: `<memory>`. Per ulteriori informazioni, vedere [Procedura: creare e utilizzare istanze di weak_ptr](how-to-create-and-use-weak-ptr-instances.md) e [weak_ptr Classe](../standard-library/weak-ptr-class.md).

### <a name="smart-pointers-for-com-objects-classic-windows-programming"></a>Puntatori intelligenti per gli oggetti COM (programmazione classica di Windows)

Quando si utilizzano gli oggetti COM, eseguire il wrapping dei puntatori a interfaccia in un tipo di puntatore intelligente appropriato. La libreria ATL (Active Template Library) definisce diversi puntatori intelligenti che assolvono a funzioni diverse. È anche possibile utilizzare il tipo di puntatore intelligente `_com_ptr_t`, utilizzato dal compilatore durante la creazione di classi wrapper da file TLB. Si tratta della scelta migliore quando non si desidera includere i file di intestazione ATL.

[Classe CComPtr](../atl/reference/ccomptr-class.md)<br/>
Utilizzarlo solo se non si può utilizzare ATL. Esegue il conteggio dei riferimenti mediante i metodi `AddRef` e `Release`. Per ulteriori informazioni, vedere [Procedura: creare e utilizzare istanze CComPtr e CComQIPtr](how-to-create-and-use-ccomptr-and-ccomqiptr-instances.md).

[CComQIPtr (classe)](../atl/reference/ccomqiptr-class.md)<br/>
È simile a `CComPtr`, ma fornisce una sintassi semplificata per chiamare `QueryInterface` su oggetti COM. Per ulteriori informazioni, vedere [Procedura: creare e utilizzare istanze CComPtr e CComQIPtr](how-to-create-and-use-ccomptr-and-ccomqiptr-instances.md).

[CComHeapPtr (classe)](../atl/reference/ccomheapptr-class.md)<br/>
Puntatore intelligente a oggetti che utilizzano `CoTaskMemFree` per liberare memoria.

[CComGITPtr (classe)](../atl/reference/ccomgitptr-class.md)<br/>
Puntatore intelligente per interfacce ottenute dalla tabella di interfaccia globale (GIT).

[Classe _com_ptr_t](com-ptr-t-class.md)<br/>
È simile a `CComQIPtr` in termini di funzionalità, ma non dipende dalle intestazioni ATL.

### <a name="atl-smart-pointers-for-poco-objects"></a>Puntatori intelligenti ATL per gli oggetti POCO

Oltre ai puntatori intelligenti per gli oggetti COM, ATL definisce anche i puntatori intelligenti e le raccolte di puntatori intelligenti, per i semplici vecchi oggetti C . Nella programmazione classica di Windows, questi tipi sono alternative utili per le raccolte di librerie standard di C , soprattutto quando la portabilità del codice non è necessaria o quando non si desidera combinare i modelli di programmazione della libreria standard di C , e ATL.

[Classe CAutoPtr](../atl/reference/cautoptr-class.md)<br/>
Puntatore intelligente che applica la proprietà univoca trasferendo la proprietà sulla copia. Paragonabile alla classe `std::auto_ptr` deprecata.

[CHeapPtr (classe)](../atl/reference/cheapptr-class.md)<br/>
Puntatore intelligente per gli oggetti allocati tramite la funzione C [malloc.](../c-runtime-library/reference/malloc.md)

[CAutoVectorPtr (classe)](../atl/reference/cautovectorptr-class.md)<br/>
Puntatore intelligente per le matrici allocate tramite `new[]`.

[Classe CAutoPtrArray](../atl/reference/cautoptrarray-class.md)<br/>
Classe che incapsula una matrice di elementi `CAutoPtr`.

[CAutoPtrList (classe)](../atl/reference/cautoptrlist-class.md)<br/>
Classe che incapsula metodi per modificare un elenco di nodi `CAutoPtr`.

## <a name="see-also"></a>Vedere anche

[Puntatori](pointers-cpp.md)<br/>
[Guida di riferimento al linguaggio C](../cpp/cpp-language-reference.md)<br/>
[Libreria standard di C](../standard-library/cpp-standard-library-reference.md)
