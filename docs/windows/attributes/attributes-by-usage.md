---
title: Attributi in base all'utilizzo
ms.custom: index-page
ms.date: 10/02/2018
ms.topic: conceptual
helpviewer_keywords:
- attributes [C++/CLI]
ms.assetid: 8be2de10-b1ff-4ca4-a114-75318408593c
ms.openlocfilehash: f6567a7866516c09bca03fa9f3d3aa5aa997b6b4
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59038070"
---
# <a name="attributes-by-usage"></a>Attributi in base all'utilizzo

Questo argomento elenca gli attributi in base alla quale vengono applicati gli elementi del linguaggio C++.

Se un attributo precede un elemento che non è nell'ambito dell'attributo, il blocco di attributi viene considerato come un commento.

|Attributo|Descrizione|
|---------------|-----------------|
|[Attributi di modulo](module-attributes.md)|Viene applicata il [modulo](module-cpp.md) attributo.|
|[Attributi di interfaccia](interface-attributes.md)|Viene applicata il [Interface](../../cpp/interface.md) parola chiave di C++.|
|[Attributi di classe](class-attributes.md)|Si applica alla parola chiave C++.|
|[Attributi del metodo](method-attributes.md)|Si applica ai metodi in una classe, coclasse o interfaccia.|
|[Attributi dei parametri](parameter-attributes.md)|Si applica ai parametri di un metodo in una classe o interfaccia.|
|[Attributi del membro dati](data-member-attributes.md)|Si applica ai membri dei dati in una classe, coclasse o interfaccia.|
|[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)|Si applica alle parole chiave C++.|
|[Attributi di matrice](array-attributes.md)|Si applica alle matrici o `SAFEARRAY`s.|
|[Attributi autonomi](stand-alone-attributes.md)|Opera più simile a una riga di codice, ma non agisce su una parola chiave C++. Le istruzioni di attributi autonomi richiedono un punto e virgola alla fine della riga.|
|[Attributi personalizzati](custom-attributes-cpp.md)|Consente all'utente di estendere i metadati.|

## <a name="module-attributes"></a>Attributi di modulo
L'attributo seguente può essere applicato solo per i [modulo](module-cpp.md) attributo.

|Attributo|Descrizione|
|---------------|-----------------|
|[helpstringdll](helpstringdll.md)|Specifica il nome della DLL da usare per eseguire la ricerca della stringa di documento (localizzazione).|

## <a name="interface-attributes"></a>Attributi di interfaccia

Gli attributi seguenti si applicano per la [interfaccia (o Interface)](../../cpp/interface.md) parola chiave di C++.

|Attributo|Descrizione|
|---------------|-----------------|
|[async_uuid](async-uuid.md)|Specifica l'UUID che indica al compilatore MIDL per definire le versioni sincrone e asincrone di un'interfaccia COM.|
|[personalizzati](custom-cpp.md)|Consente di definire attributi personalizzati.|
|[dispinterface](dispinterface.md)|Inserisce un'interfaccia nel file con estensione idl come interfaccia di dispatch.|
|[dual](dual.md)|Inserisce un'interfaccia nel file con estensione idl come interfaccia duale.|
|[esportazione](export.md)|Fa sì che una struttura di dati da inserire nel file IDL.|
|[helpcontext](helpcontext.md)|Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento corrente nel file della Guida.|
|[helpfile](helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|
|[helpstring](helpstring.md)|Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata.|
|[helpstringcontext](helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file con estensione chm o. hlp.|
|[helpstringdll](helpstringdll.md)|Specifica il nome della DLL da usare per eseguire la ricerca della stringa di documento (localizzazione).|
|[hidden](hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientate all'utente.|
|[library_block](library-block.md)|Inserisce un costrutto nel blocco di libreria del file con estensione idl.|
|[locali](local-cpp.md)|Consente di usare il compilatore MIDL come generatore di intestazione quando usato nell'intestazione dell'interfaccia. Se usato in una singola funzione, designa una procedura locale per cui non gli stub vengono generati.|
|[nonextensible](nonextensible.md)|Specifica che il `IDispatch` implementazione include solo le proprietà e i metodi elencati nella descrizione dell'interfaccia e non possono essere estese con membri aggiuntivi in fase di esecuzione. Questo attributo è valido in solo una [duale](dual.md) interfaccia.|
|[odl](odl.md)|Identifica un'interfaccia come interfaccia oggetto Description Language (ODL).|
|[object](object-cpp.md)|Identifica un'interfaccia personalizzata.|
|[oleautomation](oleautomation.md)|Indica che un'interfaccia è compatibile con l'automazione.|
|[pointer_default](pointer-default.md)|Specifica l'attributo di puntatore predefinite per tutti i puntatori ad eccezione dei puntatori di primo livello che vengono visualizzati nell'elenco di parametri.|
|[ptr](ptr.md)|Definisce un puntatore come puntatore completo.|
|[restricted](restricted.md)|Definisce i membri della raccolta non possono essere chiamati in modo arbitrario.|
|[uuid](uuid-cpp-attributes.md)|Fornisce l'ID univoco per la libreria|

È necessario rispettare queste regole per la definizione di un'interfaccia:

- Convenzione di chiamata predefinita è [stdcall](../../cpp/stdcall.md).

- Un GUID viene fornito automaticamente se non viene fornito uno.

- Metodi di overload non sono consentiti.

Se non si specifica la [uuid](uuid-cpp-attributes.md) attributo e usando lo stesso nome di interfaccia nei progetti di attributo diverso, viene generato lo stesso GUID.

## <a name="see-also"></a>Vedere anche

[Attributi di C++ per COM e .NET](cpp-attributes-com-net.md)<br/>
[Attributi per gruppo](attributes-by-group.md)<br/>
[Riferimento alfabetico agli attributi](attributes-alphabetical-reference.md)