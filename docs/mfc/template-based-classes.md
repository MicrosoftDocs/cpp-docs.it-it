---
title: Classi basate su modello | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- type-safe collections
- CTypedPtrList class [MFC], template-based classes
- arrays [MFC], classes
- arrays [MFC], pointers
- typed pointers, collections of
- arrays [MFC], template-based
- CArray class [MFC], template-based classes
- simple template-based collections
- simple array collection classes [MFC]
- typed pointers
- collections, typed-pointer
- CList class [MFC], template-based classes
- collection classes [MFC], template-based
- CTypedPtrMap class [MFC], template-based classes
- pointers, collections of typed
- CTypedPtrArray class [MFC], template-based classes
- MFC collection classes [MFC], template-based
- template-based collection classes [MFC]
- simple list collection classes [MFC]
ms.assetid: c69fc95b-c8f6-4a99-abed-517c9898ef0c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 035a50e039b352775cf0f109310f4dac448cb0a1
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36954647"
---
# <a name="template-based-classes"></a>Classi basate su modello
In questo articolo vengono descritte le classi di raccolta type-safe basate su modelli in MFC versione 3.0 e versioni successive. Utilizzo di questi modelli per creare raccolte indipendenti dai tipi è più conveniente e aiuta a offrire indipendenza dai tipi in modo più efficace rispetto all'utilizzo di classi collection non basate su modelli.  
  
 MFC sono disponibili due categorie di raccolte basate su modelli:  
  
-   [Semplice array, list e classi di mappe](#_core_using_simple_array.2c_.list.2c_.and_map_templates)  
  
     `CArray`, `CList`, `CMap`  
  
-   [Le matrici, elenchi e mappe di puntatori tipizzati](#_core_using_typed.2d.pointer_collection_templates)  
  
     `CTypedPtrArray`, `CTypedPtrList`, `CTypedPtrMap`  
  
 Le classi collection semplici sono derivate dalla classe `CObject`, quindi ereditano la serializzazione, la creazione dinamica e altre proprietà di `CObject`. Le classi di raccolta puntatore tipizzato è necessario specificare la classe di derivazione, che deve essere una delle raccolte di puntatore non basate su modelli definite in MFC, ad esempio `CPtrList` o `CPtrArray`. La nuova classe collection eredita dalla classe di base specificata e le funzioni membro della nuova classe utilizzare chiamate incapsulate ai membri della classe base per imporre l'indipendenza dai tipi.  
  
 Per ulteriori informazioni sui modelli C++, vedere [modelli](../cpp/templates-cpp.md) nel *riferimenti al linguaggio C++*.  
  
##  <a name="_core_using_simple_array.2c_.list.2c_.and_map_templates"></a> Utilizzo semplice matrice, elenco e modelli di mappa  
 Per utilizzare i modelli di raccolta semplice, è necessario conoscere il tipo di dati è possibile archiviare in tali raccolte e i parametri da utilizzare nelle dichiarazioni insieme.  
  
###  <a name="_core_simple_array_and_list_usage"></a> Utilizzo di elenco e matrice semplice  
 Le classi di elenco e matrici semplici [CArray](../mfc/reference/carray-class.md) e [CList](../mfc/reference/clist-class.md), accettano due parametri: *tipo* e `ARG_TYPE`. Queste classi possono archiviare qualsiasi tipo di dati, specificare nel *tipo* parametro:  
  
-   Tipi di dati C++ fondamentali, ad esempio **int**, **char**, e **float**  
  
-   Classi e strutture di C++  
  
-   Altri tipi che definiscono  
  
 Per comodità e l'efficienza, è possibile usare il *ARG_TYPE* parametro per specificare il tipo di argomenti della funzione. In genere, si specifica *ARG_TYPE* come riferimento per il tipo è denominato nel *tipo* parametro. Ad esempio:  
  
 [!code-cpp[NVC_MFCCollections#1](../mfc/codesnippet/cpp/template-based-classes_1.cpp)]  
  
 Il primo esempio dichiara una matrice dell'insieme `myArray`, che contiene **int**s. Nel secondo esempio dichiara una raccolta di elenchi `myList`, che archivia `CPerson` oggetti. Alcune funzioni membro delle classi collection accettano argomenti il cui tipo è specificato mediante il *ARG_TYPE* parametro di modello. Ad esempio, il `Add` funzione membro della classe `CArray` accetta un *ARG_TYPE* argomento:  
  
 [!code-cpp[NVC_MFCCollections#2](../mfc/codesnippet/cpp/template-based-classes_2.cpp)]  
  
###  <a name="_core_simple_map_usage"></a> Utilizzo di mappe semplici  
 Classe map semplice, [CMap](../mfc/reference/cmap-class.md), accetta quattro parametri: *chiave*, *ARG_KEY*, *valore*, e *ARG_VALUE*. Ad esempio le classi matrice ed elenco, le classi di mappe possono archiviare qualsiasi tipo di dati. A differenza delle matrici e gli elenchi di indice e ordinare i dati archiviati al loro interno, le mappe associano chiavi e valori: accedere a un valore archiviato in una mappa, specificando la relativa chiave del valore. Il *chiave* parametro specifica il tipo di dati delle chiavi utilizzate per accedere ai dati memorizzati nella mappa. Se il tipo di *chiave* è una struttura o una classe, la *ARG_KEY* parametro viene in genere un riferimento al tipo specificato *chiave*. Il *valore* parametro specifica il tipo degli elementi memorizzati nella mappa. Se il tipo di *ARG_VALUE* è una struttura o una classe, la *ARG_VALUE* parametro viene in genere un riferimento al tipo specificato *valore*. Ad esempio:  
  
 [!code-cpp[NVC_MFCCollections#3](../mfc/codesnippet/cpp/template-based-classes_3.cpp)]  
  
 Il primo esempio memorizza `MY_STRUCT` valori, accede a essi **int** chiavi e accessibili restituisce `MY_STRUCT` elementi per riferimento. Il secondo esempio Archivia `CPerson` valori, accede a essi `CString` avere chiavi e restituisce i riferimenti agli elementi a cui si accede. In questo esempio potrebbe rappresentare una rubrica semplice, in cui è definito il cercare persone in base al cognome.  
  
 Poiché il *chiave* parametro è di tipo `CString` e il *KEY_TYPE* parametro è di tipo `LPCSTR`, le chiavi vengono archiviate nella mappa come elementi di tipo `CString` ma viene fatto riferimento in funzioni, ad esempio `SetAt` tramite puntatori di tipo `LPCSTR`. Ad esempio:  
  
 [!code-cpp[NVC_MFCCollections#4](../mfc/codesnippet/cpp/template-based-classes_4.cpp)]  
  
##  <a name="_core_using_typed.2d.pointer_collection_templates"></a> Utilizzo di modelli di raccolta con puntatore tipizzato  
 Per utilizzare i modelli di raccolta con puntatore tipizzato, è necessario conoscere quali tipi di dati è possibile archiviare in tali raccolte e i parametri da utilizzare nelle dichiarazioni insieme.  
  
###  <a name="_core_typed.2d.pointer_array_and_list_usage"></a> Utilizzo di elenco e matrice di puntatori  
 Le classi di elenco e matrice di puntatori [CTypedPtrArray](../mfc/reference/ctypedptrarray-class.md) e [CTypedPtrList](../mfc/reference/ctypedptrlist-class.md), accettano due parametri: *BASE_CLASS* e *tipo*. Queste classi possono archiviare qualsiasi tipo di dati, specificare nel *tipo* parametro. Derivano da una delle classi collection non basate su modelli che archivia i puntatori; specificare questa classe di base *BASE_CLASS*. Per le matrici, utilizzare `CObArray` o `CPtrArray`. Per gli elenchi, usare `CObList` o `CPtrList`.  
  
 In effetti, quando si dichiara una raccolta di base, ad esempio `CObList`, la nuova classe eredita non solo i membri della relativa classe base, ma contiene anche la dichiarazione di un numero di membri indipendente dai tipi aggiuntivi funzioni e operatori che consentono di fornire indipendenza incapsulando chiamate ai membri della classe base. Questi incapsulamenti gestire tutte le conversioni necessarie. Ad esempio:  
  
 [!code-cpp[NVC_MFCCollections#5](../mfc/codesnippet/cpp/template-based-classes_5.cpp)]  
  
 Il primo esempio dichiara una matrice, puntatore tipizzato `myArray`, derivata da `CObArray`. La matrice vengono archiviati e restituisce i puntatori ai `CPerson` oggetti (in cui `CPerson` è una classe derivata da `CObject`). È possibile chiamare tutte `CObArray` funzione membro, oppure è possibile chiamare il nuovo indipendente dai tipi `GetAt` e `ElementAt` tramite le funzioni o usare indipendente dai tipi **[]** operatore.  
  
 Nel secondo esempio dichiara un elenco con puntatore tipizzato, `myList`, derivata da `CPtrList`. Nell'elenco vengono archiviati e restituisce i puntatori a `MY_STRUCT` oggetti. Una classe base `CPtrList` viene usato per archiviare i puntatori a oggetti non derivati da `CObject`. `CTypedPtrList` include un numero di funzioni membro indipendente dai tipi: `GetHead`, `GetTail`, `RemoveHead`, `RemoveTail`, `GetNext`, `GetPrev`, e `GetAt`.  
  
###  <a name="_core_typed.2d.pointer_map_usage"></a> Utilizzo di mappe di puntatori  
 Classe della mappa di puntatori [CTypedPtrMap](../mfc/reference/ctypedptrmap-class.md), accetta tre parametri: *BASE_CLASS*, *chiave*, e *valore*. Il *BASE_CLASS* parametro specifica la classe da cui derivare la nuova classe: `CMapPtrToWord`, `CMapPtrToPtr`, `CMapStringToPtr`, `CMapWordToPtr`, `CMapStringToOb`e così via. *TASTO* è analoga a *chiave* in `CMap`: Specifica il tipo della chiave usata per le ricerche. *VALORE* è analoga a *valore* in `CMap`: Specifica il tipo di oggetto archiviato nella mappa. Ad esempio:  
  
 [!code-cpp[NVC_MFCCollections#6](../mfc/codesnippet/cpp/template-based-classes_6.cpp)]  
  
 Il primo esempio è una mappa in base alle `CMapPtrToPtr` : Usa `CString` chiavi associate a puntatori a `MY_STRUCT`. È possibile cercare un puntatore archiviato chiamando un indipendente dai tipi `Lookup` funzione membro. È possibile usare il **[]** operatore per cercare un puntatore archiviato e aggiungerlo se non viene trovato. Ed è possibile eseguire l'iterazione la mappa utilizzando indipendente dai tipi `GetNextAssoc` (funzione). È possibile anche chiamare altre funzioni membro della classe `CMapPtrToPtr`.  
  
 Il secondo esempio è una mappa in base alle `CMapStringToOb` : Usa chiavi di stringa mappate a stored puntatori a `CMyObject` oggetti. È possibile utilizzare gli stessi membri indipendente dai tipi descritti nel paragrafo precedente, oppure è possibile chiamare i membri di classe `CMapStringToOb`.  
  
> [!NOTE]
>  Se si specifica un **classe** oppure **struct** tipo per il *valore* parametro, anziché un puntatore o un riferimento per il tipo, la classe o struttura deve avere un costruttore di copia.  
  
 Per altre informazioni, vedere [come creare una raccolta indipendente dai tipi](../mfc/how-to-make-a-type-safe-collection.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Raccolte](../mfc/collections.md)

