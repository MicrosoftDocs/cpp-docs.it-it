---
title: Smart puntatori (C++ moderno) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 909ef870-904c-49b6-b8cd-e9d0b7dc9435
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 4e5883cc7f028c2d64c038a2cdbd9b8365b7e61d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="smart-pointers-modern-c"></a>Puntatori intelligenti (C++ moderno)
Nella programmazione moderna in C++, la libreria Standard include *puntatori intelligenti*, che vengono utilizzati per garantire che i programmi sono disponibili di memoria e risorse di perdite e sono indipendente dalle eccezioni.  
  
## <a name="uses-for-smart-pointers"></a>Utilizzi per i puntatori intelligenti  
 Puntatori intelligenti sono definiti nel `std` spazio dei nomi nel [ \<memoria >](../standard-library/memory.md) file di intestazione. Sono fondamentali per la [RAII](../cpp/objects-own-resources-raii.md) o *Resource Acquisition Is Initialialization* linguaggio di programmazione. L'obiettivo principale di questo linguaggio è assicurare che l'acquisizione delle risorse avvenga contemporaneamente all'inizializzazione dell'oggetto, in modo che tutte le risorse per l'oggetto vengano create e rese disponibili in una riga di codice. In pratica, il principio fondamentale di RAII è assegnare la proprietà delle risorse allocate dall'heap, ad esempio gli handle di oggetti di memoria o di memoria allocati in modo dinamico, a un oggetto allocato dallo stack il cui distruttore contiene il codice per eliminare o liberare la risorsa ed eventuale codice di pulizia associato.  
  
 Nella maggior parte dei casi, quando si inizializza un handle di risorsa o puntatore non elaborato per puntare a una risorsa effettiva, passare immediatamente il puntatore a un puntatore intelligente. Nel linguaggio C++ moderno, i puntatori non elaborati vengono utilizzati esclusivamente in blocchi di codice piccoli con ambito limitato, nei cicli o nelle funzioni di supporto per le quali le prestazioni sono importanti e non può crearsi confusione circa la proprietà.  
  
 Nell'esempio seguente viene fatto un confronto tra una dichiarazione di puntatore non elaborato e una dichiarazione di puntatore intelligente.  
  
 [!code-cpp[smart_pointers_intro#1](../cpp/codesnippet/CPP/smart-pointers-modern-cpp_1.cpp)]  
  
 Come illustrato nell'esempio, un puntatore intelligente è un modello di classe dichiarato nello stack e inizializzato tramite un puntatore non elaborato che punta a un oggetto allocato dall'heap. Dopo essere stato inizializzato, il puntatore intelligente detiene la proprietà del puntatore non elaborato. Ciò significa che il puntatore intelligente è responsabile dell'eliminazione della memoria specificata dal puntatore non elaborato. Il distruttore del puntatore intelligente contiene la chiamata per l'eliminazione e poiché il puntatore intelligente viene dichiarato nello stack, il relativo distruttore viene richiamato quando il puntatore intelligente esce dall'ambito, anche se viene generata un'eccezione in un punto precedente dello stack.  
  
 Accedere al puntatore incapsulato utilizzando gli operatori del puntatore noti, `->` e `*`, di cui verrà eseguito l'overload per restituire il puntatore non elaborato incapsulato.  
  
 Il linguaggio del puntatore intelligente C++ ricorda la creazione di oggetti in linguaggi come C#: prima si crea l'oggetto e poi si permette al sistema di eliminarlo al momento opportuno. La differenza consiste nel fatto che nessun Garbage Collector separato viene eseguito in background. La memoria viene gestita tramite le regole di ambito C++ standard in modo che l'ambiente di runtime risulti più veloce e più efficiente.  
  
> [!IMPORTANT]
>  Creare sempre puntatori intelligenti su una riga di codice separata e mai in un elenco di parametri, in modo da evitare anche le più piccole perdite di risorse dovute a alcune regole di allocazione dell'elenco di parametri.  
  
 L'esempio seguente viene illustrato come un `unique_ptr` il tipo di puntatore intelligente dalla libreria Standard C++ può essere utilizzato per incapsulare un puntatore a un oggetto di grandi dimensioni.  
  
 [!code-cpp[smart_pointers_intro#2](../cpp/codesnippet/CPP/smart-pointers-modern-cpp_2.cpp)]  
  
 Di seguito vengono illustrati i passaggi essenziali per utilizzare i puntatori intelligenti.  
  
1.  Dichiarare il puntatore intelligente come variabile (locale) automatica. (Non utilizzare l'espressione `new` o `malloc` sul puntatore intelligente stesso).  
  
2.  Nel parametro di tipo specificare il tipo di riferimento del puntatore incapsulato.  
  
3.  Passare un puntatore non elaborato a un oggetto `new` nel costruttore del puntatore intelligente. (Alcune funzioni dell'utilità o costruttori del puntatore intelligente eseguono queste operazioni in modo automatico).  
  
4.  Utilizzare gli operatori `->` e `*` sottoposti a overload per accedere all'oggetto.  
  
5.  Consentire al puntatore intelligente di eliminare l'oggetto.  
  
 I puntatori intelligenti sono progettati per essere estremamente efficaci sia in termini di memoria che di prestazioni. Ad esempio, l'unico membro dati in `unique_ptr` è il puntatore incapsulato. Ciò significa che `unique_ptr` è esattamente delle stesse dimensioni del puntatore, ovvero quattro o otto byte. L'accesso al puntatore incapsulato tramite gli operatori * e -> sottoposti a overload del puntatore intelligente non è più lento dell'accesso diretto ai puntatori non elaborati.  
  
 I puntatori intelligenti dispongono di funzioni membro proprie accessibili tramite la notazione "punto". Ad esempio, alcuni puntatori intelligenti della libreria Standard C++ sono una funzione membro di reimpostazione che rilascia la proprietà dell'indicatore di misura. Come illustrato nell'esempio seguente, questa caratteristica è utile quando è necessario liberare memoria di proprietà del puntatore intelligente prima che quest'ultimo esca dall'ambito.  
  
 [!code-cpp[smart_pointers_intro#3](../cpp/codesnippet/CPP/smart-pointers-modern-cpp_3.cpp)]  
  
 I puntatori intelligenti consentono in genere di accedere direttamente al relativo puntatore non elaborato. Puntatori intelligenti della libreria Standard C++ dispongono di un `get` funzione membro a tale scopo, e `CComPtr` ha un pubblico `p` membro della classe. Consentendo l'accesso diretto al puntatore sottostante, è possibile utilizzare il puntatore intelligente per gestire la memoria nel codice e passare il puntatore non elaborato al codice che non supporta i puntatori intelligenti.  
  
 [!code-cpp[smart_pointers_intro#4](../cpp/codesnippet/CPP/smart-pointers-modern-cpp_4.cpp)]  
  
## <a name="kinds-of-smart-pointers"></a>Tipi di puntatori intelligenti  
 Nella sezione seguente vengono riepilogati i diversi tipi di puntatori intelligenti disponibili nell'ambiente di programmazione Windows e ne viene descritto l'utilizzo.  
  
 **Puntatori intelligenti della libreria Standard C++**  
 Utilizzare questi puntatori intelligenti come prima scelta per incapsulare i puntatori in oggetti C++ non aggiornati (POCO, plain old C++ object).  
  
-   `unique_ptr`   
     Consente esattamente un proprietario del puntatore sottostante. Utilizzarlo come scelta predefinita per POCO, a meno che non sia necessario un `shared_ptr`. Può essere spostato a un nuovo proprietario, ma non copiato o condiviso. Sostituisce `auto_ptr`, che è deprecato. Confrontare con `boost::scoped_ptr`. `unique_ptr`è di piccole dimensioni ed efficiente; la dimensione è un puntatore e supporta i riferimenti rvalue per l'inserimento rapido e il recupero da raccolte della libreria Standard C++. File di intestazione: `<memory>`. Per ulteriori informazioni, vedere [procedura: creare e utilizzare istanze unique_ptr](../cpp/how-to-create-and-use-unique-ptr-instances.md) e [classe unique_ptr](../standard-library/unique-ptr-class.md).  
  
-   `shared_ptr`   
     Puntatore intelligente con conteggio dei riferimenti. Utilizzarlo quando si desidera assegnare un puntatore non elaborato a più proprietari, ad esempio quando si restituisce una copia di un puntatore da un contenitore, ma si desidera conservare l'originale. Il puntatore non elaborato non viene eliminato finché tutti i proprietari di `shared_ptr` non sono usciti dall'ambito o non hanno ceduto in altro modo la proprietà. Ha le dimensioni di due puntatori, uno per l'oggetto e uno per il blocco di controllo condiviso che contiene il conteggio dei riferimenti. File di intestazione: `<memory>`. Per ulteriori informazioni, vedere [procedura: creare e utilizzare istanze shared_ptr](../cpp/how-to-create-and-use-shared-ptr-instances.md) e [classe shared_ptr](../standard-library/shared-ptr-class.md).  
  
-   `weak_ptr`   
    Puntatore intelligente per casi speciali da utilizzare insieme a `shared_ptr`. `weak_ptr` fornisce l'accesso a un oggetto di proprietà di una o più istanze di `shared_ptr`, ma non partecipa al conteggio dei riferimenti. Utilizzarlo quando si desidera osservare un oggetto, ma non è necessario che rimanga attivo. Necessario in alcuni casi per interrompere i riferimenti circolari tra istanze di `shared_ptr`. File di intestazione: `<memory>`. Per ulteriori informazioni, vedere [procedura: creare e utilizzare istanze weak_ptr](../cpp/how-to-create-and-use-weak-ptr-instances.md) e [classe weak_ptr](../standard-library/weak-ptr-class.md).  
  
 **Puntatori intelligenti per gli oggetti COM (programmazione Windows classica)**  
 Quando si utilizzano gli oggetti COM, eseguire il wrapping dei puntatori a interfaccia in un tipo di puntatore intelligente appropriato. La libreria ATL (Active Template Library) definisce diversi puntatori intelligenti che assolvono a funzioni diverse. È anche possibile utilizzare il tipo di puntatore intelligente `_com_ptr_t`, utilizzato dal compilatore durante la creazione di classi wrapper da file TLB. Si tratta della scelta migliore quando non si desidera includere i file di intestazione ATL.  
  
 [Classe CComPtr](../atl/reference/ccomptr-class.md)  
 Utilizzarlo solo se non si può utilizzare ATL. Esegue il conteggio dei riferimenti mediante i metodi `AddRef` e `Release`. Per ulteriori informazioni, vedere [procedura: creare e utilizzare CComPtr e CComQIPtr](../cpp/how-to-create-and-use-ccomptr-and-ccomqiptr-instances.md).  
  
 [Classe CComQIPtr](../atl/reference/ccomqiptr-class.md)  
 È simile a `CComPtr`, ma fornisce una sintassi semplificata per chiamare `QueryInterface` su oggetti COM. Per ulteriori informazioni, vedere [procedura: creare e utilizzare CComPtr e CComQIPtr](../cpp/how-to-create-and-use-ccomptr-and-ccomqiptr-instances.md).  
  
 [Classe CComHeapPtr](../atl/reference/ccomheapptr-class.md)  
 Puntatore intelligente a oggetti che utilizzano `CoTaskMemFree` per liberare memoria.  
  
 [Classe CComGITPtr](../atl/reference/ccomgitptr-class.md)  
 Puntatore intelligente per interfacce ottenute dalla tabella di interfaccia globale (GIT).  
  
 [Classe _com_ptr_t](../cpp/com-ptr-t-class.md)  
 È simile a `CComQIPtr` in termini di funzionalità, ma non dipende dalle intestazioni ATL.  
  
 **Puntatori intelligenti per gli oggetti POCO**  
 Oltre ai puntatori intelligenti per gli oggetti COM, ATL definisce i puntatori intelligenti e le raccolte di puntatori intelligenti per gli oggetti POCO. Nella programmazione Windows classica questi tipi sono alternative utili alle raccolte della libreria Standard C++, specialmente quando la portabilità del codice non è necessaria o quando non si desidera combinare i modelli di programmazione della libreria Standard C++ e ATL.  
  
 [Classe CAutoPtr](../atl/reference/cautoptr-class.md)  
 Puntatore intelligente che applica la proprietà univoca trasferendo la proprietà sulla copia. Paragonabile alla classe `std::auto_ptr` deprecata.  
  
 [Classe CHeapPtr](../atl/reference/cheapptr-class.md)  
 Puntatore intelligente per gli oggetti allocati con C [malloc](../c-runtime-library/reference/malloc.md) (funzione).  
  
 [Classe CAutoVectorPtr](../atl/reference/cautovectorptr-class.md)  
 Puntatore intelligente per le matrici allocate tramite `new[]`.  
  
 [Classe CAutoPtrArray](../atl/reference/cautoptrarray-class.md)  
 Classe che incapsula una matrice di elementi `CAutoPtr`.  
  
 [Classe CAutoPtrList](../atl/reference/cautoptrlist-class.md)  
 Classe che incapsula metodi per modificare un elenco di nodi `CAutoPtr`.  
  
## <a name="see-also"></a>Vedere anche  
 [Bentornato a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Libreria standard C++](../standard-library/cpp-standard-library-reference.md)   
