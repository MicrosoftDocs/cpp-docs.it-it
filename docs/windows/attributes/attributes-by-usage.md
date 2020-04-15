---
title: Attributi in base all'utilizzo
ms.custom: index-page
ms.date: 10/02/2018
ms.topic: conceptual
helpviewer_keywords:
- attributes [C++/CLI]
ms.assetid: 8be2de10-b1ff-4ca4-a114-75318408593c
ms.openlocfilehash: dcbed019f8cd08ddbf4ab6b4756a59f7fcbabc4b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81361327"
---
# <a name="attributes-by-usage"></a>Attributi in base all'utilizzo

In questo argomento vengono elencati gli attributi in base agli elementi del linguaggio C.

Se un attributo precede un elemento che non si trova nell'ambito dell'attributo, il blocco di attributi viene considerato come un commento.

|Attributo|Descrizione|
|---------------|-----------------|
|[Attributi del modulo](module-attributes.md)|Si applica all'attributo [module.](module-cpp.md)|
|[Attributi di interfaccia](interface-attributes.md)|Si applica alla parola chiave [__interface](../../cpp/interface.md) di C.|
|[Attributi di classe](class-attributes.md)|Si applica alla parola chiave di C.|
|[Attributi del metodoMethod Attributes](method-attributes.md)|Si applica ai metodi in una classe, coclasse o interfaccia.|
|[Attributi del parametro](parameter-attributes.md)|Si applica ai parametri di un metodo in una classe o interfaccia.|
|[Attributi del membro dati](data-member-attributes.md)|Si applica ai membri dati in una classe, coclasse o interfaccia.|
|[Attributi Typedef, Enum, Union e Struct](typedef-enum-union-and-struct-attributes.md)|Si applica alle parole chiave di C.|
|[Attributi della matrice](array-attributes.md)|Si applica a `SAFEARRAY`matrici o s.|
|[Attributi autonomi](stand-alone-attributes.md)|Opera più come una riga di codice, ma non opera su una parola chiave di C. Le istruzioni di attributo autonome richiedono un punto e virgola alla fine della riga.|
|[Attributi personalizzati](custom-attributes-cpp.md)|Consente all'utente di estendere i metadati.|

## <a name="module-attributes"></a>Attributi di modulo

L'attributo seguente può essere applicato solo all'attributo [module.](module-cpp.md)

|Attributo|Descrizione|
|---------------|-----------------|
|[helpstringdll](helpstringdll.md)|Specifica il nome della DLL da utilizzare per eseguire la ricerca di stringhe di documento (localizzazione).|

## <a name="interface-attributes"></a>Attributi di interfaccia

Gli attributi riportati di seguito si applicano [all'interfaccia (o alla parola](../../cpp/interface.md) chiave di __interface) di C.

|Attributo|Descrizione|
|---------------|-----------------|
|[async_uuid](async-uuid.md)|Specifica l'UUID che indica al compilatore MIDL di definire le versioni sincrone e asincrone di un'interfaccia COM.|
|[Personalizzato](custom-cpp.md)|Consente di definire attributi personalizzati.|
|[Dispinterface](dispinterface.md)|Inserisce un'interfaccia nel file con estensione idl come interfaccia di dispatch.|
|[Dual](dual.md)|Inserisce un'interfaccia nel file IDL come interfaccia duale.|
|[Esportazione](export.md)|Fa sì che una struttura di dati venga inserita nel file IDL.|
|[helpcontext](helpcontext.md)|Specifica un ID di contesto che consente all'utente di visualizzare le informazioni su questo elemento nel file della Guida.|
|[Helpfile](helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|
|[helpstring](helpstring.md)|Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata.|
|[helpstringcontext](helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file con estensione hlp o chm.|
|[helpstringdll](helpstringdll.md)|Specifica il nome della DLL da utilizzare per eseguire la ricerca di stringhe di documento (localizzazione).|
|[Nascosto](hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientato all'utente.|
|[library_block](library-block.md)|Inserisce un costrutto all'interno del blocco di libreria del file IDL.|
|[Locale](local-cpp.md)|Consente di utilizzare il compilatore MIDL come generatore di intestazione quando viene utilizzato nell'intestazione dell'interfaccia. Se utilizzato in una singola funzione, definisce una routine locale per la quale non vengono generati stub.|
|[nonextensible](nonextensible.md)|Specifica che `IDispatch` l'implementazione include solo le proprietà e i metodi elencati nella descrizione dell'interfaccia e non può essere estesa con membri aggiuntivi in fase di esecuzione. Questo attributo è valido solo su un'interfaccia [duale.](dual.md)|
|[odl](odl.md)|Identifica un'interfaccia come interfaccia ODL (Object Description Language).|
|[Oggetto](object-cpp.md)|Identifica un'interfaccia personalizzata.|
|[oleautomation](oleautomation.md)|Indica che un'interfaccia è compatibile con l'automazione.|
|[pointer_default](pointer-default.md)|Specifica l'attributo del puntatore predefinito per tutti i puntatori ad eccezione dei puntatori di primo livello visualizzati negli elenchi di parametri.|
|[Ptr](ptr.md)|Designa un puntatore come puntatore completo.|
|[Limitato](restricted.md)|Indica quali membri della libreria non possono essere chiamati arbitrariamente.|
|[uuid](uuid-cpp-attributes.md)|Fornisce l'ID univoco per la libreria|

È necessario osservare queste regole per la definizione di un'interfaccia:You must observe these rules for defining an interface:

- La convenzione di chiamata predefinita è [__stdcall](../../cpp/stdcall.md).

- Se non ne viene fornito uno, viene fornito un GUID.

- Non sono consentiti metodi di overload.

Quando non si specifica l'attributo [uuid](uuid-cpp-attributes.md) e si utilizza lo stesso nome di interfaccia in progetti di attributo diversi, viene generato lo stesso GUID.

## <a name="see-also"></a>Vedere anche

[Attributi di C++ per COM e .NET](cpp-attributes-com-net.md)<br/>
[Attributi per gruppo](attributes-by-group.md)<br/>
[Attributi Riferimento alfabetico](attributes-alphabetical-reference.md)
