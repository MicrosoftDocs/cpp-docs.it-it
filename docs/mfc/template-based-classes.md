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
ms.openlocfilehash: 29f5f815b62835aedbca1f79b797f826ea53d83b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370463"
---
# <a name="template-based-classes"></a>Classi basate su modello

In questo articolo vengono illustrate le classi di raccolte basate su modelli indipendenti dai tipi in MFC versione 3.0 e successive. L'utilizzo di questi modelli per creare raccolte indipendenti dai tipi è più pratico e consente di garantire l'indipendenza dai tipi in modo più efficace rispetto all'utilizzo delle classi di raccolte non basate sui modelli.

MFC predefinisce due categorie di raccolte basate su modelli:

- [Classi semplici di matrici, elenchi e mappe](#_core_using_simple_array.2c_.list.2c_.and_map_templates)

   `CArray`, `CList`, `CMap`

- [Matrici, elenchi e mappe di puntatori tipati](#_core_using_typed.2d.pointer_collection_templates)

   `CTypedPtrArray`, `CTypedPtrList`, `CTypedPtrMap`

Le classi di insiemi semplici sono tutte derivate dalla `CObject`classe `CObject`, pertanto ereditano la serializzazione, la creazione dinamica e altre proprietà di . Le classi di raccolte di puntatori tipizzati richiedono di specificare la classe da cui derivare, che deve essere una delle raccolte di puntatori non template predefinite da MFC, ad `CPtrList` esempio o `CPtrArray`. La nuova classe di raccolta eredita dalla classe base specificata e le funzioni membro della nuova classe utilizzano chiamate incapsulate ai membri della classe base per applicare l'indipendenza dai tipi.

Per ulteriori informazioni sui modelli di C, vedere [Modelli](../cpp/templates-cpp.md) nella Guida di riferimento al *linguaggio C.*

## <a name="using-simple-array-list-and-map-templates"></a><a name="_core_using_simple_array.2c_.list.2c_.and_map_templates"></a>Utilizzo di modelli semplici di matrici, elenchi e mappe

Per usare i modelli di raccolta semplici, è necessario conoscere il tipo di dati che è possibile archiviare in queste raccolte e i parametri da usare nelle dichiarazioni di raccolta.

### <a name="simple-array-and-list-usage"></a><a name="_core_simple_array_and_list_usage"></a>Utilizzo semplice di matrici ed elenchi

Le classi di matrice ed elenco semplici, [CArray](../mfc/reference/carray-class.md) e `ARG_TYPE` [CList](../mfc/reference/clist-class.md), accettano due parametri: *TYPE* e . Queste classi possono archiviare qualsiasi tipo di dati, specificato nel parametro *TYPE:*

- Tipi di dati di tipo C, ad esempio **int**, **char**e **float**

- Strutture e classi di C

- Altri tipi definiti

Per comodità ed efficienza, è possibile utilizzare il parametro *ARG_TYPE* per specificare il tipo di argomenti della funzione. In genere, si specifica *ARG_TYPE* come riferimento al tipo denominato nel parametro *TYPE.* Ad esempio:

[!code-cpp[NVC_MFCCollections#1](../mfc/codesnippet/cpp/template-based-classes_1.cpp)]

Nel primo esempio viene dichiarato `myArray`un insieme di matrici, che contiene **int**s. Nel secondo esempio viene dichiarato `myList`un `CPerson` insieme di elenchi, , che archivia oggetti. Alcune funzioni membro delle classi di raccolta accettano argomenti il cui tipo è specificato dal parametro di modello *ARG_TYPE.* Ad esempio, `Add` la funzione `CArray` membro della classe accetta un *argomento ARG_TYPE:*

[!code-cpp[NVC_MFCCollections#2](../mfc/codesnippet/cpp/template-based-classes_2.cpp)]

### <a name="simple-map-usage"></a><a name="_core_simple_map_usage"></a>Utilizzo semplice della mappa

La classe mappa semplice, [CMap](../mfc/reference/cmap-class.md), accetta quattro parametri: *KEY*, *ARG_KEY*, *VALUE*e *ARG_VALUE*. Analogamente alle classi di matrice ed elenco, le classi di mappa possono archiviare qualsiasi tipo di dati. A differenza delle matrici e degli elenchi, che indicizzano e ordinano i dati archiviati, le mappe associano chiavi e valori: si accede a un valore archiviato in una mappa specificando la chiave associata del valore. Il parametro *KEY* consente di specificare il tipo di dati delle chiavi utilizzate per accedere ai dati archiviati nella mappa. Se il tipo di *KEY* è una struttura o una classe, il *parametro ARG_KEY* è in genere un riferimento al tipo specificato in *KEY*. Il parametro *VALUE* consente di specificare il tipo di elementi archiviati nella mappa. Se il tipo di *ARG_VALUE* è una struttura o una classe, il *parametro ARG_VALUE* è in genere un riferimento al tipo specificato in *VALUE*. Ad esempio:

[!code-cpp[NVC_MFCCollections#3](../mfc/codesnippet/cpp/template-based-classes_3.cpp)]

Nel primo `MY_STRUCT` esempio vengono archiviati i valori, essi `MY_STRUCT` eseguito l'accesso tramite chiavi **int** e vengono restituiti gli elementi a cui si accede per riferimento. Nel secondo `CPerson` esempio vengono archiviati `CString` i valori, essi eseguito l'accesso tramite chiavi e vengono restituiti riferimenti agli elementi a cui si accede. Questo esempio potrebbe rappresentare una semplice rubrica, in cui si cercano le persone in base al cognome.

Poiché *KEY* il parametro `CString` KEY è di `LPCSTR`tipo e il parametro *KEY_TYPE* è `CString` di tipo , le `SetAt` chiavi vengono `LPCSTR`archiviate nella mappa come elementi di tipo, ma vi viene fatto riferimento in funzioni quali tramite puntatori di tipo . Ad esempio:

[!code-cpp[NVC_MFCCollections#4](../mfc/codesnippet/cpp/template-based-classes_4.cpp)]

## <a name="using-typed-pointer-collection-templates"></a><a name="_core_using_typed.2d.pointer_collection_templates"></a>Utilizzo di modelli di raccolta di puntatori tipatiUsing Typed-Pointer Collection Templates

Per usare i modelli di raccolta dei puntatori tipizzati, è necessario conoscere i tipi di dati che è possibile archiviare in queste raccolte e i parametri da utilizzare nelle dichiarazioni di raccolta.

### <a name="typed-pointer-array-and-list-usage"></a><a name="_core_typed.2d.pointer_array_and_list_usage"></a>Matrice di puntatori tipizzata e utilizzo dell'elenco

La matrice di puntatori tipizzati e le classi di elenco, [CTypedPtrArray](../mfc/reference/ctypedptrarray-class.md) e [CTypedPtrList](../mfc/reference/ctypedptrlist-class.md), accettano due parametri: *BASE_CLASS* e *TYPE*. Queste classi possono archiviare qualsiasi tipo di dati, specificato nel parametro *TYPE.* Derivano da una delle classi di raccolte non modello che archivia i puntatori; specificare questa classe di base in *BASE_CLASS*. Per le matrici, `CObArray` `CPtrArray`utilizzare o . Per gli elenchi, `CPtrList`utilizzare o `CObList` .

In effetti, quando si dichiara un `CObList`insieme basato su, ad esempio , la nuova classe non solo eredita i membri della relativa classe base, ma dichiara anche una serie di funzioni membro e operatori indipendenti dai tipi aggiuntivi che consentono di fornire l'indipendenza dai tipi incapsulando le chiamate ai membri della classe base. Questi incapsulamenti gestiscono tutte le conversioni di tipi necessarie. Ad esempio:

[!code-cpp[NVC_MFCCollections#5](../mfc/codesnippet/cpp/template-based-classes_5.cpp)]

Nel primo esempio viene dichiarata una `myArray`matrice di `CObArray`puntatori tipizzata, , derivata da . La matrice archivia e `CPerson` restituisce `CPerson` puntatori a `CObject`oggetti (dove è una classe derivata da ). È possibile `CObArray` chiamare qualsiasi funzione membro oppure chiamare `GetAt` `ElementAt` il nuovo type-safe e le funzioni o utilizzare l'operatore indipendente dai **tipi [ ].**

Nel secondo esempio viene dichiarato un `myList`elenco di `CPtrList`puntatori tipizzato, , derivato da . L'elenco archivia e `MY_STRUCT` restituisce puntatori a oggetti. Una classe `CPtrList` basata su viene utilizzata per `CObject`archiviare puntatori a oggetti non derivati da . `CTypedPtrList`dispone di numerose funzioni membro `GetHead` `GetTail`indipendenti `RemoveHead` `RemoveTail`dai `GetNext` `GetPrev`tipi: `GetAt`, , , , , , e .

### <a name="typed-pointer-map-usage"></a><a name="_core_typed.2d.pointer_map_usage"></a>Utilizzo mappa puntatore tipizzato

La classe della mappa del puntatore tipizzato, [CTypedPtrMap](../mfc/reference/ctypedptrmap-class.md), accetta tre parametri: *BASE_CLASS*, *KEY*e *VALUE*. Il *parametro BASE_CLASS* consente di specificare la `CMapPtrToWord` `CMapPtrToPtr`classe `CMapStringToPtr` `CMapWordToPtr`da cui derivare la nuova classe: , , , , , `CMapStringToOb`e così via. *KEY* è analogo *KEY* a `CMap`KEY in : specifica il tipo di chiave utilizzato per le ricerche. *VALUE* è analogo *VALUE* a `CMap`VALUE in : specifica il tipo di oggetto memorizzato nella mappa. Ad esempio:

[!code-cpp[NVC_MFCCollections#6](../mfc/codesnippet/cpp/template-based-classes_6.cpp)]

Il primo esempio è `CMapPtrToPtr` una mappa `CString` basata su : `MY_STRUCT`utilizza chiavi mappate a puntatori a . È possibile cercare un puntatore archiviato `Lookup` chiamando una funzione membro indipendente dai tipi. È possibile utilizzare l'operatore **[ ]** per cercare un puntatore archiviato e aggiungerlo se non viene trovato. È possibile scorrere la mappa utilizzando `GetNextAssoc` la funzione indipendente dai tipi. È inoltre possibile chiamare altre `CMapPtrToPtr`funzioni membro della classe .

Il secondo esempio è `CMapStringToOb` una mappa basata su: usa `CMyObject` chiavi stringa mappate a puntatori archiviati a oggetti. È possibile utilizzare gli stessi membri indipendenti dai tipi descritti nel `CMapStringToOb`paragrafo precedente oppure chiamare i membri della classe .

> [!NOTE]
> Se si specifica una **classe** o un tipo **struct** per il parametro *VALUE,* anziché un puntatore o un riferimento al tipo, la classe o la struttura deve disporre di un costruttore di copia.

Per ulteriori informazioni, vedere [Come creare una raccolta indipendente dai](../mfc/how-to-make-a-type-safe-collection.md)tipi .

## <a name="see-also"></a>Vedere anche

[Raccolte](../mfc/collections.md)
