---
title: Classi basate su modello
ms.date: 11/04/2016
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
ms.openlocfilehash: 8bd64e1c5efd1f80f43cb3460719326f30d5416c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50557859"
---
# <a name="template-based-classes"></a>Classi basate su modello

Questo articolo illustra le classi di raccolta basata su modello indipendente dai tipi in MFC 3.0 e versioni successive. Usare questi modelli per creare raccolte indipendente dai tipi è più comodo e aiuta a offrire indipendenza dai tipi in modo più efficace rispetto all'uso di classi collection non basate su modelli.

MFC sono disponibili due categorie di raccolte basate su modelli:

- [Semplice array, list e classi map](#_core_using_simple_array.2c_.list.2c_.and_map_templates)

   `CArray`, `CList`, `CMap`

- [Le matrici, elenchi e mappe di puntatori tipizzati](#_core_using_typed.2d.pointer_collection_templates)

   `CTypedPtrArray`, `CTypedPtrList`, `CTypedPtrMap`

Le classi di raccolte semplici sono derivate dalla classe `CObject`, quindi ereditano la serializzazione, la creazione dinamica e altre proprietà di `CObject`. Le classi di raccolta puntatore tipizzato è necessario specificare la classe di derivazione, che deve essere una delle raccolte di puntatore non basate su modelli predefinite da MFC, ad esempio `CPtrList` o `CPtrArray`. La nuova classe di raccolta eredita dalla classe di base specificata e le funzioni membro della nuova classe usano incapsulate chiamate ai membri della classe base per garantire la sicurezza di tipo.

Per altre informazioni sui modelli C++, vedere [modelli](../cpp/templates-cpp.md) nel *riferimenti al linguaggio C++*.

##  <a name="_core_using_simple_array.2c_.list.2c_.and_map_templates"></a> Usando una semplice matrice, elenco e modelli di mappa

Per usare i modelli di raccolta semplice, è necessario conoscere il tipo di dati è possibile archiviare in tali raccolte e i parametri da usare nelle dichiarazioni degli insiemi.

###  <a name="_core_simple_array_and_list_usage"></a> Utilizzo di elenco e matrice semplice

Le classi di elenco e matrice semplice [CArray](../mfc/reference/carray-class.md) e [CList](../mfc/reference/clist-class.md), accettano due parametri: *tipo* e `ARG_TYPE`. Queste classi possono archiviare qualsiasi tipo di dati, quali specifica le *tipo* parametro:

- Tipi di dati C++ fondamentali, ad esempio **int**, **char**, e **float**

- Classi e strutture di C++

- Altri tipi che definiscono

Per motivi di praticità e l'efficienza, è possibile usare la *ARG_TYPE* parametro per specificare il tipo degli argomenti della funzione. In genere, specificano *ARG_TYPE* come riferimento per il tipo è denominato nel *tipo* parametro. Ad esempio:

[!code-cpp[NVC_MFCCollections#1](../mfc/codesnippet/cpp/template-based-classes_1.cpp)]

Nel primo esempio dichiara un insieme di matrici `myArray`, che contiene **int**s. Nel secondo esempio dichiara una raccolta di elenchi `myList`, che archivia `CPerson` oggetti. Alcune funzioni membro delle classi collection accettano argomenti il cui tipo è specificato mediante il *ARG_TYPE* parametro di modello. Ad esempio, il `Add` la funzione membro della classe `CArray` accetta una *ARG_TYPE* argomento:

[!code-cpp[NVC_MFCCollections#2](../mfc/codesnippet/cpp/template-based-classes_2.cpp)]

###  <a name="_core_simple_map_usage"></a> Utilizzo di mapping semplice

La classe map semplice, [CMap](../mfc/reference/cmap-class.md), accetta quattro parametri: *chiave*, *ARG_KEY*, *valore*, e *ARG_VALUE*. Ad esempio le classi matrice ed elenco, le classi di mappe possono archiviare qualsiasi tipo di dati. A differenza di matrici ed elenchi, indicizzano e ordinare i dati archiviati, mappe associano chiavi e valori: accedere a un valore archiviato in una mappa, specificando la relativa chiave del valore. Il *chiave* parametro specifica il tipo di dati delle chiavi utilizzate per accedere ai dati memorizzati nella mappa. Se il tipo della *chiave* è una struttura o una classe, il *ARG_KEY* parametro in genere è un riferimento al tipo specificato *chiave*. Il *valore* parametro specifica il tipo degli elementi memorizzati nella mappa. Se il tipo della *ARG_VALUE* è una struttura o una classe, il *ARG_VALUE* parametro in genere è un riferimento al tipo specificato *valore*. Ad esempio:

[!code-cpp[NVC_MFCCollections#3](../mfc/codesnippet/cpp/template-based-classes_3.cpp)]

Il primo esempio Archivia `MY_STRUCT` valori, consente di accedere a altra **int** chiavi e restituisce accessibili `MY_STRUCT` elementi per riferimento. Il secondo esempio Archivia `CPerson` valori, accede a essi da `CString` tasti e restituisce i riferimenti agli elementi a cui si accede. In questo esempio potrebbe rappresentare una rubrica semplice, in cui è definito il cercare le persone in base al cognome.

Poiché il *chiave* parametro è di tipo `CString` e il *KEY_TYPE* parametro è di tipo `LPCSTR`, le chiavi vengono archiviate nella mappa come elementi di tipo `CString` ma si fa riferimento le funzioni come `SetAt` tramite puntatori di tipo `LPCSTR`. Ad esempio:

[!code-cpp[NVC_MFCCollections#4](../mfc/codesnippet/cpp/template-based-classes_4.cpp)]

##  <a name="_core_using_typed.2d.pointer_collection_templates"></a> Usando i modelli di raccolta di puntatori

Per usare i modelli di puntatore a raccolta, è necessario conoscere quali tipi di dati è possibile archiviare in tali raccolte e i parametri da usare nelle dichiarazioni degli insiemi.

###  <a name="_core_typed.2d.pointer_array_and_list_usage"></a> Matrice di puntatori e l'utilizzo di elenco

Le classi di elenco e matrice di puntatori [CTypedPtrArray](../mfc/reference/ctypedptrarray-class.md) e [CTypedPtrList](../mfc/reference/ctypedptrlist-class.md), accettano due parametri: *BASE_CLASS* e *tipo*. Queste classi possono archiviare qualsiasi tipo di dati, quali specifica le *tipo* parametro. Derivano da una delle classi collection non basate su modelli che archivia i puntatori. si specifica questa classe di base *BASE_CLASS*. Per le matrici, usare `CObArray` o `CPtrArray`. Per gli elenchi, usare `CObList` o `CPtrList`.

In effetti, quando si dichiara una raccolta di base, ad esempio `CObList`, la nuova classe eredita non solo i membri della relativa classe di base, ma anche dichiara un numero di membri indipendente dai tipi aggiuntivi funzioni e operatori che consentono di fornire l'indipendenza dai tipi incapsulando chiamate ai membri della classe base. Questi incapsulamenti gestire tutte le conversioni necessarie. Ad esempio:

[!code-cpp[NVC_MFCCollections#5](../mfc/codesnippet/cpp/template-based-classes_5.cpp)]

Nel primo esempio dichiara una matrice di puntatori `myArray`, derivata da `CObArray`. La matrice vengono archiviati e restituisce i puntatori ai `CPerson` oggetti (dove `CPerson` è una classe derivata da `CObject`). È possibile chiamare tutte `CObArray` funzione membro, oppure è possibile chiamare il nuovo indipendente dai tipi `GetAt` e `ElementAt` tramite le funzioni o usare l'indipendente dai tipi **[]** operatore.

Nel secondo esempio dichiara un elenco con puntatore tipizzato, `myList`, derivata da `CPtrList`. Nell'elenco vengono archiviati e restituisce i puntatori a `MY_STRUCT` oggetti. Una classe di base `CPtrList` viene usato per archiviare i puntatori a oggetti non derivati da `CObject`. `CTypedPtrList` sono disponibili numerose funzioni membro indipendente dai tipi: `GetHead`, `GetTail`, `RemoveHead`, `RemoveTail`, `GetNext`, `GetPrev`, e `GetAt`.

###  <a name="_core_typed.2d.pointer_map_usage"></a> Utilizzo di mappe di puntatori

La classe, mappa di puntatori [CTypedPtrMap](../mfc/reference/ctypedptrmap-class.md), accetta tre parametri: *BASE_CLASS*, *chiave*, e *valore*. Il *BASE_CLASS* parametro specifica la classe da cui deriva la nuova classe: `CMapPtrToWord`, `CMapPtrToPtr`, `CMapStringToPtr`, `CMapWordToPtr`, `CMapStringToOb`e così via. *TASTO* è analoga a *chiave* in `CMap`: Specifica il tipo della chiave usata per le ricerche. *VALORE* è analoga a *valore* in `CMap`: Specifica il tipo di oggetto archiviato nella mappa. Ad esempio:

[!code-cpp[NVC_MFCCollections#6](../mfc/codesnippet/cpp/template-based-classes_6.cpp)]

Il primo esempio è una mappa in base alla `CMapPtrToPtr` : Usa `CString` le chiavi associate a puntatori a `MY_STRUCT`. È possibile cercare un puntatore archiviato chiamando un indipendente dai tipi `Lookup` funzione membro. È possibile usare la **[]** operatore da cercare un puntatore archiviato e aggiungerlo se non viene trovato. Ed è possibile eseguire l'iterazione la mappa utilizzando l'indipendente dai tipi `GetNextAssoc` (funzione). È possibile anche chiamare altri funzioni membro della classe `CMapPtrToPtr`.

Il secondo esempio è una mappa in base alla `CMapStringToOb` , che utilizza chiavi di stringa mappate a stored puntatori a `CMyObject` oggetti. È possibile usare gli stessi membri indipendente dai tipi descritti nel paragrafo precedente, oppure è possibile chiamare i membri della classe `CMapStringToOb`.

> [!NOTE]
>  Se si specifica un **classe** oppure **struct** tipo per il *valore* parametro, anziché a un puntatore o un riferimento al tipo, la classe o struttura deve avere un costruttore di copia.

Per altre informazioni, vedere [come effettuare una raccolta indipendente dai tipi](../mfc/how-to-make-a-type-safe-collection.md).

## <a name="see-also"></a>Vedere anche

[Raccolte](../mfc/collections.md)

