---
description: 'Altre informazioni su: Template-Based classi'
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
ms.openlocfilehash: 87b03c649bfb6acf401c3ee78e6db07c1185dff5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97216314"
---
# <a name="template-based-classes"></a>Classi basate su modello

Questo articolo illustra le classi di raccolta basate su modelli indipendenti dai tipi in MFC versione 3,0 e successive. L'uso di questi modelli per creare raccolte indipendenti dai tipi è più pratico e contribuisce a garantire la sicurezza dei tipi in modo più efficace rispetto all'uso di classi di raccolta non basate su modelli.

MFC definisce due categorie di raccolte basate su modelli:

- [Classi semplici di matrici, elenchi e mappe](#_core_using_simple_array.2c_.list.2c_.and_map_templates)

   `CArray`, `CList`, `CMap`

- [Matrici, elenchi e mappe di puntatori tipizzati](#_core_using_typed.2d.pointer_collection_templates)

   `CTypedPtrArray`, `CTypedPtrList`, `CTypedPtrMap`

Le classi di raccolta semplici sono tutte derivate dalla classe `CObject` , quindi ereditano la serializzazione, la creazione dinamica e altre proprietà di `CObject` . Per le classi di raccolta puntatore tipizzato è necessario specificare la classe da cui si deriva, che deve essere una delle raccolte di puntatori non di modello predefinite da MFC, ad esempio `CPtrList` o `CPtrArray` . La nuova classe Collection eredita dalla classe di base specificata e le funzioni membro della nuova classe usano le chiamate incapsulate ai membri della classe base per applicare l'indipendenza dai tipi.

Per ulteriori informazioni sui modelli C++, vedere [modelli](../cpp/templates-cpp.md) in *riferimenti al linguaggio c++*.

## <a name="using-simple-array-list-and-map-templates"></a><a name="_core_using_simple_array.2c_.list.2c_.and_map_templates"></a> Utilizzo di modelli semplici per matrici, elenchi e mappe

Per usare i modelli di raccolta semplici, è necessario conoscere il tipo di dati che è possibile archiviare in queste raccolte e i parametri da usare nelle dichiarazioni di raccolta.

### <a name="simple-array-and-list-usage"></a><a name="_core_simple_array_and_list_usage"></a> Semplice utilizzo di matrici ed elenchi

Le classi Simple array e List, [CArray](../mfc/reference/carray-class.md) e [CList](../mfc/reference/clist-class.md), accettano due parametri: *Type* e `ARG_TYPE` . Queste classi possono archiviare qualsiasi tipo di dati specificato nel parametro di *tipo* :

- Tipi di dati C++ fondamentali, ad esempio **`int`** , **`char`** e **`float`**

- Strutture e classi C++

- Altri tipi definiti dall'utente

Per praticità ed efficienza, è possibile usare il parametro *ARG_TYPE* per specificare il tipo di argomenti della funzione. In genere, si specifica *ARG_TYPE* come riferimento al tipo indicato nel parametro di *tipo* . Ad esempio:

[!code-cpp[NVC_MFCCollections#1](../mfc/codesnippet/cpp/template-based-classes_1.cpp)]

Nel primo esempio viene dichiarata una raccolta di matrici, `myArray` , che contiene **`int`** s. Nel secondo esempio viene dichiarata una raccolta di elenchi, `myList` , in cui vengono archiviati `CPerson` gli oggetti. Alcune funzioni membro delle classi Collection accettano argomenti il cui tipo è specificato dal parametro del modello *ARG_TYPE* . Ad esempio, la `Add` funzione membro della classe `CArray` accetta un argomento *ARG_TYPE* :

[!code-cpp[NVC_MFCCollections#2](../mfc/codesnippet/cpp/template-based-classes_2.cpp)]

### <a name="simple-map-usage"></a><a name="_core_simple_map_usage"></a> Utilizzo mappa semplice

La classe della mappa semplice, [CMap](../mfc/reference/cmap-class.md), accetta quattro parametri *: chiave*, *ARG_KEY*, *valore* e *ARG_VALUE*. Analogamente alle classi Array ed list, le classi Map possono archiviare qualsiasi tipo di dati. A differenza delle matrici e degli elenchi, che indicizzano e ordinano i dati archiviati, Maps associa chiavi e valori: è possibile accedere a un valore archiviato in una mappa specificando la chiave associata del valore. Il parametro *Key* specifica il tipo di dati delle chiavi utilizzate per accedere ai dati archiviati nella mappa. Se il tipo di *chiave* è una struttura o una classe, il parametro *ARG_KEY* è in genere un riferimento al tipo specificato in *Key*. Il parametro *value* specifica il tipo degli elementi archiviati nella mappa. Se il tipo di *ARG_VALUE* è una struttura o una classe, il parametro *ARG_VALUE* è in genere un riferimento al tipo specificato in *value*. Ad esempio:

[!code-cpp[NVC_MFCCollections#3](../mfc/codesnippet/cpp/template-based-classes_3.cpp)]

Il primo esempio Archivia `MY_STRUCT` i valori, li accede per **`int`** chiavi e restituisce `MY_STRUCT` gli elementi a cui si accede per riferimento. Nel secondo esempio vengono archiviati `CPerson` i valori, viene eseguito l'accesso tramite `CString` chiavi e vengono restituiti riferimenti agli elementi a cui si accede. Questo esempio può rappresentare una semplice rubrica, in cui è possibile cercare le persone in base al cognome.

Poiché il parametro *Key* è di tipo `CString` e il *key_type* parametro è di tipo `LPCSTR` , le chiavi vengono archiviate nella mappa come elementi di tipo, `CString` ma vi viene fatto riferimento in funzioni quali `SetAt` tramite puntatori di tipo `LPCSTR` . Ad esempio:

[!code-cpp[NVC_MFCCollections#4](../mfc/codesnippet/cpp/template-based-classes_4.cpp)]

## <a name="using-typed-pointer-collection-templates"></a><a name="_core_using_typed.2d.pointer_collection_templates"></a> Utilizzo di modelli di raccolta Typed-Pointer

Per usare i modelli di raccolta con puntatore tipizzato, è necessario conoscere i tipi di dati che è possibile archiviare in queste raccolte e i parametri da usare nelle dichiarazioni di raccolta.

### <a name="typed-pointer-array-and-list-usage"></a><a name="_core_typed.2d.pointer_array_and_list_usage"></a> Typed-Pointer l'utilizzo di matrici ed elenchi

La matrice del puntatore tipizzato e le classi List, [CTypedPtrArray](../mfc/reference/ctypedptrarray-class.md) e [CTypedPtrList](../mfc/reference/ctypedptrlist-class.md), accettano due parametri: *BASE_CLASS* e *Type*. Queste classi possono archiviare qualsiasi tipo di dati specificato nel parametro di *tipo* . Sono derivati da una delle classi di raccolta non basate su modelli che archivia i puntatori; Questa classe di base viene specificata in *BASE_CLASS*. Per le matrici, usare `CObArray` o `CPtrArray` . Per gli elenchi, usare `CObList` o `CPtrList` .

In effetti, quando si dichiara una raccolta basata su, ad eccezione del fatto `CObList` che la nuova classe non solo eredita i membri della relativa classe di base, ma dichiara anche una serie di funzioni membro indipendenti dai tipi e operatori che consentono di garantire l'indipendenza dai tipi incapsulando le chiamate ai membri della classe base. Questi incapsulamenti gestiscono tutte le necessarie conversioni dei tipi. Ad esempio:

[!code-cpp[NVC_MFCCollections#5](../mfc/codesnippet/cpp/template-based-classes_5.cpp)]

Nel primo esempio viene dichiarata una matrice di puntatori tipizzata, `myArray` , derivata da `CObArray` . La matrice archivia e restituisce puntatori a `CPerson` oggetti (dove `CPerson` è una classe derivata da `CObject` ). È possibile chiamare qualsiasi `CObArray` funzione membro oppure è possibile chiamare le nuove funzioni e indipendenti dai `GetAt` tipi `ElementAt` oppure utilizzare l'operatore type-safe **[]** .

Nel secondo esempio viene dichiarato un elenco di puntatore tipizzato, `myList` , derivato da `CPtrList` . L'elenco Archivia e restituisce puntatori a `MY_STRUCT` oggetti. Una classe basata su `CPtrList` viene utilizzata per archiviare i puntatori a oggetti non derivati da `CObject` . `CTypedPtrList` dispone di un numero di funzioni membro indipendenti dai tipi: `GetHead` , `GetTail` , `RemoveHead` , `RemoveTail` , `GetNext` , `GetPrev` e `GetAt` .

### <a name="typed-pointer-map-usage"></a><a name="_core_typed.2d.pointer_map_usage"></a> Utilizzo della mappa Typed-Pointer

La classe della mappa del puntatore tipizzato, [CTypedPtrMap](../mfc/reference/ctypedptrmap-class.md), accetta tre parametri: *BASE_CLASS*, *Key* e *value*. Il parametro *BASE_CLASS* specifica la classe da cui derivare la nuova classe: `CMapPtrToWord` , `CMapPtrToPtr` , `CMapStringToPtr` , `CMapWordToPtr` , `CMapStringToOb` e così via. La *chiave* è analoga a *Key* in `CMap` : specifica il tipo della chiave utilizzata per le ricerche. Il *valore* è analogo al *valore* in `CMap` : specifica il tipo di oggetto archiviato nella mappa. Ad esempio:

[!code-cpp[NVC_MFCCollections#6](../mfc/codesnippet/cpp/template-based-classes_6.cpp)]

Il primo esempio è una mappa basata su `CMapPtrToPtr` , che usa le `CString` chiavi mappate ai puntatori a `MY_STRUCT` . È possibile cercare un puntatore archiviato chiamando una funzione membro indipendente dai tipi `Lookup` . È possibile utilizzare l'operatore **[]** per cercare un puntatore archiviato e aggiungerlo se non viene trovato. È possibile scorrere la mappa utilizzando la funzione indipendente dai tipi `GetNextAssoc` . È anche possibile chiamare altre funzioni membro della classe `CMapPtrToPtr` .

Il secondo esempio è una mappa basata su `CMapStringToOb` , che usa chiavi di stringa mappate a puntatori archiviati a `CMyObject` oggetti. È possibile usare gli stessi membri indipendenti dai tipi descritti nel paragrafo precedente oppure è possibile chiamare i membri della classe `CMapStringToOb` .

> [!NOTE]
> Se si specifica un **`class`** **`struct`** tipo o per il parametro *value* , anziché un puntatore o un riferimento al tipo, la classe o la struttura deve avere un costruttore di copia.

Per ulteriori informazioni, vedere [come creare una raccolta di Type-Safe](../mfc/how-to-make-a-type-safe-collection.md).

## <a name="see-also"></a>Vedi anche

[raccolte](../mfc/collections.md)
