---
title: "Classi basate su modello | Microsoft Docs"
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
helpviewer_keywords: 
  - "matrici [C++], classi"
  - "matrici [C++], puntatori"
  - "matrici [C++], basate su modello"
  - "CArray (classe), classi basate su modello"
  - "CList (classe), classi basate su modello"
  - "classi di raccolte, basate su modello"
  - "raccolte, puntatore tipizzato"
  - "CTypedPtrArray (classe), classi basate su modello"
  - "CTypedPtrList (classe), classi basate su modello"
  - "CTypedPtrMap (classe), classi basate su modello"
  - "MFC (classi di raccolte), basate su modello"
  - "puntatori, raccolte di tipi"
  - "classi di raccolte di matrici semplici"
  - "classi di raccolte di elenchi semplici"
  - "raccolte basate su modello semplice"
  - "classi di raccolte basate su modello"
  - "puntatori tipizzati"
  - "puntatori tipizzati, raccolte di"
  - "raccolte indipendenti dai tipi"
ms.assetid: c69fc95b-c8f6-4a99-abed-517c9898ef0c
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi basate su modello
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo illustra le classi di raccolte basate su modelli indipendenti dai tipi nelle versioni di MFC 3,0 e versioni successive.  Utilizzando questi modelli creare raccolte indipendenti dai tipi è più efficace e le guide forniscono l'indipendenza dai tipi in modo efficace utilizzo di classi di raccolte non di base dei modelli.  
  
 MFC predefinisce due categorie di raccolte basate su modelli:  
  
-   [Matrice, elencare e classi semplici mappa](#_core_using_simple_array.2c_.list.2c_.and_map_templates)  
  
     `CArray`, `CList`, `CMap`  
  
-   [Matrici, elenchi e le mappe dei puntatori tipizzati](#_core_using_typed.2d.pointer_collection_templates)  
  
     `CTypedPtrArray`, `CTypedPtrList`, `CTypedPtrMap`  
  
 Le classi di raccolte semplici tutte sono derivate dalla classe `CObject`, pertanto ereditano la serializzazione, la creazione dinamica e altre proprietà di `CObject`.  Le classi di raccolte tipizzate del puntatore è necessario specificare la classe derivata da \- che deve essere una delle raccolte del puntatore non template predefinite da MFC, come `CPtrList` o `CPtrArray`.  La nuova classe di raccolte eredita dalla classe base specificata e dalle chiamate incapsulati l'utilizzo delle funzioni membro della nuova classe ai membri della classe base per imporre l'indipendenza dai tipi.  
  
 Per ulteriori informazioni sui modelli C\+\+, vedere [Modelli](../cpp/templates-cpp.md)*in Riferimenti al linguaggio C\+\+*.  
  
##  <a name="_core_using_simple_array.2c_.list.2c_.and_map_templates"></a> Utilizzo di matrice, elenco e modelli semplici mappa  
 Per utilizzare i modelli di raccolta semplici, è necessario conoscere il tipo di dati è possibile archiviare in queste raccolte e i parametri da utilizzare nelle dichiarazioni di raccolta.  
  
###  <a name="_core_simple_array_and_list_usage"></a> Semplice utilizzo di elenco e di matrice  
 Le classi semplici di elenco e di matrice, [CArray](../mfc/reference/carray-class.md) e [CList](../mfc/reference/clist-class.md), accettano due parametri: *TIPO2* e `ARG_TYPE`.  Queste classi possono memorizzare qualsiasi tipo di dati, specificata *nel parametro di tipo* :  
  
-   Tipi di dati elementari C\+\+, ad esempio `int`, `char` e **mobile**  
  
-   Strutture e classi C\+\+  
  
-   Altri tipi che definiscono  
  
 Per praticità e efficienza, è possibile utilizzare il parametro di `ARG_TYPE` per specificare il tipo di argomenti della funzione.  In genere, si specifica `ARG_TYPE` come riferimento al tipo che è stato assegnato *al parametro di tipo*.  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_MFCCollections#1](../mfc/codesnippet/CPP/template-based-classes_1.cpp)]  
  
 Il primo esempio riportato di seguito una raccolta di matrice, `myArray`, che contiene `int`S.  Il secondo esempio riportato di seguito una raccolta di elenchi, `myList`, che archivia gli oggetti di `CPerson`.  Alcune funzioni membro delle classi di raccolte accettano argomenti di tipo è specificato dal parametro di modello di `ARG_TYPE`.  Ad esempio, la funzione membro di **Aggiungi** di classe `CArray` accetta un argomento di `ARG_TYPE` :  
  
 [!code-cpp[NVC_MFCCollections#2](../mfc/codesnippet/CPP/template-based-classes_2.cpp)]  
  
###  <a name="_core_simple_map_usage"></a> Semplice utilizzo della mappa  
 La classe semplice della mappa, [CMap](../mfc/reference/cmap-class.md), accetta quattro parametri: *CHIAVE*, `ARG_KEY`, *è possibile* e `ARG_VALUE`.  Come le classi di elenco e di matrice, le classi di mappa è possibile memorizzare qualsiasi tipo di dati.  A differenza delle matrici ed elenchi, che indice e richiedono i dati contenuti, il membro maps imposta e valori: Si accede a un valore archiviato in una mappa specificando la chiave associata del valore.  Il parametro *PRINCIPALE* specifica il tipo di dati delle chiavi utilizzate per accedere ai dati memorizzati nella mappa.  Se il tipo *di CHIAVE* è una struttura o una classe, il parametro di `ARG_KEY` è in genere un riferimento al tipo specificato in *CHIAVE*.  *Il parametro value* specifica il tipo degli elementi archiviati nella mappa.  Se il tipo di `ARG_VALUE` è una struttura o una classe, il parametro di `ARG_VALUE` è in genere un riferimento al tipo specificato *in POSSIBILE*.  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_MFCCollections#3](../mfc/codesnippet/CPP/template-based-classes_3.cpp)]  
  
 Il primo esempio l'archiviazione dei valori di `MY_STRUCT`, vi accede alle chiavi di `int` e restituisce elementi di accedere `MY_STRUCT` per riferimento.  Nel secondo esempio l'archiviazione dei valori di `CPerson`, accede a esse da chiavi di `CString` e riferimenti viene restituito agli elementi dell'accesso.  Questo esempio potrebbe rappresentare la rubrica semplice, in cui cercare le persone in base al cognome.  
  
 Poiché il parametro *PRINCIPALE* è di tipo `CString` e il parametro *di KEY\_TYPE* è di tipo `LPCSTR`, le chiavi sono archiviate nella mappa come elementi di tipo `CString` ma viene fatto riferimento in funzioni come `SetAt` tramite puntatori di tipo `LPCSTR`.  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_MFCCollections#4](../mfc/codesnippet/CPP/template-based-classes_4.cpp)]  
  
##  <a name="_core_using_typed.2d.pointer_collection_templates"></a> Utilizzo dei modelli della raccolta di Digitare\- puntatore  
 Per utilizzare i modelli raccolta di digitare\- puntatore, è necessario conoscere quali tipi di dati è possibile archiviare in queste raccolte e i parametri da utilizzare nelle dichiarazioni di raccolta.  
  
###  <a name="_core_typed.2d.pointer_array_and_list_usage"></a> Matrice di Digitare\- puntatore e utilizzo dell'elenco  
 Le classi di matrice e dell'elenco di digitare\- puntatore, [CTypedPtrArray](../mfc/reference/ctypedptrarray-class.md) e [CTypedPtrList](../mfc/reference/ctypedptrlist-class.md), accettano due parametri: `BASE_CLASS` e *TIPO2*.  Queste classi possono memorizzare qualsiasi tipo di dati, specificata *nel parametro di tipo*.  Vengono derivate dalle classi di raccolte non template che archivia i puntatori; si specifica questa classe base in `BASE_CLASS`.  Per le matrici, utilizzare `CObArray` o `CPtrArray`.  Per gli elenchi, utilizzare `CObList` o `CPtrList`.  
  
 In effetti, quando si dichiara una raccolta basata su, si supponga `CObList`, la nuova classe eredita non solo i membri della classe base, ma si dichiara una serie di funzioni membro e operatori indipendenti dai tipi aggiuntivi della guida viene garantita l'indipendenza dai tipi incapsulamento delle chiamate ai membri della classe base.  Questi incapsulamenti gestiscono una conversione di tipi necessaria.  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_MFCCollections#5](../mfc/codesnippet/CPP/template-based-classes_5.cpp)]  
  
 Il primo esempio riportato di seguito una matrice di digitare\- puntatore, `myArray`, derivato da `CObArray`.  La matrice file e restituisce i puntatori a oggetti di `CPerson` \(dove `CPerson` è una classe derivata da `CObject`\).  È possibile chiamare qualsiasi funzione membro di `CObArray`, oppure chiamare nuovi `GetAt` e funzioni indipendenti dai tipi di `ElementAt` o utilizzare l'operatore indipendente dai tipi di **\[\]**.  
  
 Il secondo esempio viene dichiarato un elenco di digitare\- puntatore, `myList`, derivato da `CPtrList`.  L'elenco file e restituisce i puntatori a oggetti di `MY_STRUCT`.  Una classe basata su `CPtrList` viene utilizzato per memorizzare i puntatori a oggetti non derivati da `CObject`.  `CTypedPtrList` dispone di diverse funzioni membro indipendenti dai tipi: `GetHead`, `GetTail`, `RemoveHead`, `RemoveTail`, `GetNext`, `GetPrev` e `GetAt`.  
  
###  <a name="_core_typed.2d.pointer_map_usage"></a> Utilizzo della mappa del Digitare\- puntatore  
 La classe della mappa del digitare\- puntatore, [CTypedPtrMap](../mfc/reference/ctypedptrmap-class.md), accetta tre parametri: `BASE_CLASS`, e *CHIAVE* *POSSIBILE*.  Il parametro di `BASE_CLASS` specifica la classe da cui derivare una nuova classe: `CMapPtrToWord`, `CMapPtrToPtr`, `CMapStringToPtr`, `CMapWordToPtr`, `CMapStringToOb`, e così via.  *KEY* è analoga a *KEY* in `CMap`: Specifica il tipo di chiave utilizzata per ricerche.  *Il POSSIBILE* è analogo *STIMARE* in `CMap`: Specifica il tipo di oggetto archiviato nella mappa.  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_MFCCollections#6](../mfc/codesnippet/CPP/template-based-classes_6.cpp)]  
  
 Il primo esempio una mappa basata su **CMapPtrToPt**r \- utilizza le chiavi di `CString` mappate ai puntatori a `MY_STRUCT`.  È possibile trovare un puntatore archiviato chiamando una funzione membro indipendente dai tipi di `Lookup`.  È possibile utilizzare l'operatore di **\[\]** per trovare un puntatore archiviato e aggiungerlo se non completati.  Ed è possibile scorrere la mappa mediante la funzione indipendente dai tipi di `GetNextAssoc`.  È possibile chiamare anche altre funzioni membro di classe `CMapPtrToPtr`.  
  
 Nel secondo esempio è una mappa basata su **CMapStringToO**b \- utilizza le chiavi di stringa mappate ai puntatori archiviati a oggetti di `CMyObject`.  È possibile utilizzare gli stessi membri indipendenti dai tipi descritti nel paragrafo precedente, oppure chiamare i membri di classe `CMapStringToOb`.  
  
> [!NOTE]
>  Se si specifica un tipo di `struct` o di **classe** per *il parametro* value, anziché un puntatore o un riferimento al tipo, la classe o la struttura deve avere un costruttore di copia.  
  
 Per ulteriori informazioni, vedere [Come creare una raccolta indipendente dai tipi](../mfc/how-to-make-a-type-safe-collection.md).  
  
## Vedere anche  
 [Raccolte](../mfc/collections.md)