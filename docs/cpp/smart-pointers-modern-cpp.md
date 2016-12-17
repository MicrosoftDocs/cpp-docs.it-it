---
title: "Puntatori intelligenti (C++ moderno) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 909ef870-904c-49b6-b8cd-e9d0b7dc9435
caps.latest.revision: 26
caps.handback.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Puntatori intelligenti (C++ moderno)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella programmazione C\+\+ moderna, la libreria standard include i *puntatori intelligenti*, puntatori che aiutano a garantire che i programmi non subiscano perdite di memoria e di risorse e siano protetti dalle eccezioni.  
  
## Utilizzi per i puntatori intelligenti  
 I puntatori intelligenti sono definiti nello spazio dei nomi `std` nel file di intestazione di [\<memoria\>](../standard-library/memory.md).  Sono fondamentali per il linguaggio di programmazione [RAII](../cpp/objects-own-resources-raii.md) \(*Resource Acquisition Is Initialialization*\).  L'obiettivo principale di questo linguaggio è assicurare che l'acquisizione delle risorse avvenga contemporaneamente all'inizializzazione dell'oggetto, in modo che tutte le risorse per l'oggetto vengano create e rese disponibili in una riga di codice.  In pratica, il principio fondamentale di RAII è assegnare la proprietà delle risorse allocate dall'heap, ad esempio gli handle di oggetti di memoria o di memoria allocati in modo dinamico, a un oggetto allocato dallo stack il cui distruttore contiene il codice per eliminare o liberare la risorsa ed eventuale codice di pulizia associato.  
  
 Nella maggior parte dei casi, quando si inizializza un handle di risorsa o puntatore non elaborato per puntare a una risorsa effettiva, passare immediatamente il puntatore a un puntatore intelligente.  Nel linguaggio C\+\+ moderno, i puntatori non elaborati vengono utilizzati esclusivamente in blocchi di codice piccoli con ambito limitato, nei cicli o nelle funzioni di supporto per le quali le prestazioni sono importanti e non può crearsi confusione circa la proprietà.  
  
 Nell'esempio seguente viene fatto un confronto tra una dichiarazione di puntatore non elaborato e una dichiarazione di puntatore intelligente.  
  
 [!code-cpp[smart_pointers_intro#1](../cpp/codesnippet/CPP/smart-pointers-modern-cpp_1.cpp)]  
  
 Come illustrato nell'esempio, un puntatore intelligente è un modello di classe dichiarato nello stack e inizializzato tramite un puntatore non elaborato che punta a un oggetto allocato dall'heap.  Dopo essere stato inizializzato, il puntatore intelligente detiene la proprietà del puntatore non elaborato.  Ciò significa che il puntatore intelligente è responsabile dell'eliminazione della memoria specificata dal puntatore non elaborato.  Il distruttore del puntatore intelligente contiene la chiamata per l'eliminazione e poiché il puntatore intelligente viene dichiarato nello stack, il relativo distruttore viene richiamato quando il puntatore intelligente esce dall'ambito, anche se viene generata un'eccezione in un punto precedente dello stack.  
  
 Accedere al puntatore incapsulato utilizzando gli operatori del puntatore noti, `->` e `*`, di cui verrà eseguito l'overload per restituire il puntatore non elaborato incapsulato.  
  
 Il linguaggio del puntatore intelligente C\+\+ ricorda la creazione di oggetti in linguaggi come C\#: prima si crea l'oggetto e poi si permette al sistema di eliminarlo al momento opportuno.  La differenza consiste nel fatto che nessun Garbage Collector separato viene eseguito in background. La memoria viene gestita tramite le regole di ambito C\+\+ standard in modo che l'ambiente di runtime risulti più veloce e più efficiente.  
  
> [!IMPORTANT]
>  Creare sempre puntatori intelligenti su una riga di codice separata e mai in un elenco di parametri, in modo da evitare anche le più piccole perdite di risorse dovute a alcune regole di allocazione dell'elenco di parametri.  
  
 Di seguito viene illustrato come utilizzare un tipo di puntatore intelligente `unique_ptr` dalla libreria di modelli standard per incapsulare un puntatore in un oggetto di grandi dimensioni.  
  
 [!code-cpp[smart_pointers_intro#2](../cpp/codesnippet/CPP/smart-pointers-modern-cpp_2.cpp)]  
  
 Di seguito vengono illustrati i passaggi essenziali per utilizzare i puntatori intelligenti.  
  
1.  Dichiarare il puntatore intelligente come variabile \(locale\) automatica. \(Non utilizzare l'espressione `malloc` o `new` sul puntatore intelligente stesso\).  
  
2.  Nel parametro di tipo specificare il tipo di riferimento del puntatore incapsulato.  
  
3.  Passare un puntatore non elaborato a un oggetto `new` nel costruttore del puntatore intelligente. \(Alcune funzioni dell'utilità o costruttori del puntatore intelligente eseguono queste operazioni in modo automatico\).  
  
4.  Utilizzare gli operatori `->` e `*` sottoposti a overload per accedere all'oggetto.  
  
5.  Consentire al puntatore intelligente di eliminare l'oggetto.  
  
 I puntatori intelligenti sono progettati per essere estremamente efficaci sia in termini di memoria che di prestazioni.  Ad esempio, l'unico membro dati in `unique_ptr` è il puntatore incapsulato.  Ciò significa che `unique_ptr` è esattamente delle stesse dimensioni del puntatore, ovvero quattro o otto byte.  L'accesso al puntatore incapsulato tramite gli operatori \* e \-\> sottoposti a overload del puntatore intelligente non è più lento dell'accesso diretto ai puntatori non elaborati.  
  
 I puntatori intelligenti dispongono di funzioni membro proprie accessibili tramite la notazione "punto".  Alcuni puntatori intelligenti STL, ad esempio, dispongono di una funzione membro di reimpostazione che rilascia la proprietà del puntatore.  Come illustrato nell'esempio seguente, questa caratteristica è utile quando è necessario liberare memoria di proprietà del puntatore intelligente prima che quest'ultimo esca dall'ambito.  
  
 [!code-cpp[smart_pointers_intro#3](../cpp/codesnippet/CPP/smart-pointers-modern-cpp_3.cpp)]  
  
 I puntatori intelligenti consentono in genere di accedere direttamente al relativo puntatore non elaborato.  I puntatori intelligenti STL dispongono di una funzione membro `get` che assolve a questo scopo e `CComPtr` dispone di un membro della classe `p` pubblica.  Consentendo l'accesso diretto al puntatore sottostante, è possibile utilizzare il puntatore intelligente per gestire la memoria nel codice e passare il puntatore non elaborato al codice che non supporta i puntatori intelligenti.  
  
 [!code-cpp[smart_pointers_intro#4](../cpp/codesnippet/CPP/smart-pointers-modern-cpp_4.cpp)]  
  
## Tipi di puntatori intelligenti  
 Nella sezione seguente vengono riepilogati i diversi tipi di puntatori intelligenti disponibili nell'ambiente di programmazione Windows e ne viene descritto l'utilizzo.  
  
 **Puntatori intelligenti della libreria standard C\+\+**  
 Utilizzare questi puntatori intelligenti come prima scelta per incapsulare i puntatori in oggetti C\+\+ non aggiornati \(POCO, plain old C\+\+ object\).  
  
-   `unique_ptr`    
    Consente esattamente un proprietario del puntatore sottostante.  Utilizzarlo come scelta predefinita per POCO, a meno che non sia necessario un `shared_ptr`.  Può essere spostato a un nuovo proprietario, ma non copiato o condiviso.  Sostituisce `auto_ptr`, che è deprecato.  Confrontare con `boost::scoped_ptr`.  `unique_ptr` è di piccole dimensioni ed efficiente. Presenta le dimensioni di un puntatore e supporta i riferimenti rvalue per l'inserimento e il recupero rapidi dalle raccolte STL.  File di intestazione: `<memory>`.  Per ulteriori informazioni, vedere [Procedura: creare e utilizzare istanze unique\_ptr](../cpp/how-to-create-and-use-unique-ptr-instances.md) e [Classe unique\_ptr](../standard-library/unique-ptr-class.md).  
  
-   `shared_ptr`    
    Puntatore intelligente con conteggio dei riferimenti.  Utilizzarlo quando si desidera assegnare un puntatore non elaborato a più proprietari, ad esempio quando si restituisce una copia di un puntatore da un contenitore, ma si desidera conservare l'originale.  Il puntatore non elaborato non viene eliminato finché tutti i proprietari di `shared_ptr` non sono usciti dall'ambito o non hanno ceduto in altro modo la proprietà.  Ha le dimensioni di due puntatori, uno per l'oggetto e uno per il blocco di controllo condiviso che contiene il conteggio dei riferimenti.  File di intestazione: `<memory>`.  Per ulteriori informazioni, vedere [Procedura: creare e utilizzare istanze shared\_ptr](../cpp/how-to-create-and-use-shared-ptr-instances.md) e [Classe shared\_ptr](../standard-library/shared-ptr-class.md).  
  
-   `weak_ptr`    
    Puntatore intelligente per casi speciali da utilizzare insieme a `shared_ptr`.  `weak_ptr` fornisce l'accesso a un oggetto di proprietà di una o più istanze di `shared_ptr`, ma non partecipa al conteggio dei riferimenti.  Utilizzarlo quando si desidera osservare un oggetto, ma non è necessario che rimanga attivo.  Necessario in alcuni casi per interrompere i riferimenti circolari tra istanze di `shared_ptr`.  File di intestazione: `<memory>`.  Per ulteriori informazioni, vedere [Procedura: creare e utilizzare istanze weak\_ptr](../cpp/how-to-create-and-use-weak-ptr-instances.md) e [Classe weak\_ptr](../standard-library/weak-ptr-class.md).  
  
 **Puntatori intelligenti per oggetti COM \(programmazione Windows classica\)**  
 Quando si utilizzano gli oggetti COM, eseguire il wrapping dei puntatori a interfaccia in un tipo di puntatore intelligente appropriato.  La libreria ATL \(Active Template Library\) definisce diversi puntatori intelligenti che assolvono a funzioni diverse.  È anche possibile utilizzare il tipo di puntatore intelligente `_com_ptr_t`, utilizzato dal compilatore durante la creazione di classi wrapper da file TLB.  Si tratta della scelta migliore quando non si desidera includere i file di intestazione ATL.  
  
 [CComPtr Class](../atl/reference/ccomptr-class.md)  
 Utilizzarlo solo se non si può utilizzare ATL.  Esegue il conteggio dei riferimenti mediante i metodi `Release` e `AddRef`.  Per ulteriori informazioni, vedere [Procedura: creare e utilizzare istanze CComPtr e CComQIPtr](../cpp/how-to-create-and-use-ccomptr-and-ccomqiptr-instances.md).  
  
 [CComQIPtr Class](../atl/reference/ccomqiptr-class.md)  
 È simile a `CComPtr`, ma fornisce una sintassi semplificata per chiamare `QueryInterface` su oggetti COM.  Per ulteriori informazioni, vedere [Procedura: creare e utilizzare istanze CComPtr e CComQIPtr](../cpp/how-to-create-and-use-ccomptr-and-ccomqiptr-instances.md).  
  
 [CComHeapPtr Class](../atl/reference/ccomheapptr-class.md)  
 Puntatore intelligente a oggetti che utilizzano `CoTaskMemFree` per liberare memoria.  
  
 [CComGITPtr Class](../atl/reference/ccomgitptr-class.md)  
 Puntatore intelligente per interfacce ottenute dalla tabella di interfaccia globale \(GIT\).  
  
 [Classe \_com\_ptr\_t](../cpp/com-ptr-t-class.md)  
 È simile a `CComQIPtr` in termini di funzionalità, ma non dipende dalle intestazioni ATL.  
  
 **Puntatori intelligenti ALT per oggetti POCO**  
 Oltre ai puntatori intelligenti per gli oggetti COM, ATL definisce i puntatori intelligenti e le raccolte di puntatori intelligenti per gli oggetti POCO.  Nella programmazione Windows classica questi tipi sono alternative utili alle raccolte STL, specialmente quando la portabilità del codice non è necessaria o quando non si desidera combinare i modelli di programmazione STL e ATL.  
  
 [CAutoPtr Class](../atl/reference/cautoptr-class.md)  
 Puntatore intelligente che applica la proprietà univoca trasferendo la proprietà sulla copia.  Paragonabile alla classe `std::auto_ptr` deprecata.  
  
 [CHeapPtr Class](../atl/reference/cheapptr-class.md)  
 Puntatore intelligente per gli oggetti allocati utilizzando la funzione [malloc](../c-runtime-library/reference/malloc.md) C.  
  
 [CAutoVectorPtr Class](../atl/reference/cautovectorptr-class.md)  
 Puntatore intelligente per le matrici allocate tramite `new[]`.  
  
 [CAutoPtrArray Class](../atl/reference/cautoptrarray-class.md)  
 Classe che incapsula una matrice di elementi `CAutoPtr`.  
  
 [CAutoPtrList Class](../atl/reference/cautoptrlist-class.md)  
 Classe che incapsula metodi per modificare un elenco di nodi `CAutoPtr`.  
  
## Vedere anche  
 [C\+\+](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)   
 [Libreria standard C\+\+](../standard-library/cpp-standard-library-reference.md)   
 [\(NOTINBUILD\)Overview: Memory Management in C\+\+](http://msdn.microsoft.com/it-it/2201885d-3d91-4a6e-aaa6-7a554e0362a8)