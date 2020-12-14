---
description: 'Altre informazioni su: attributi per utilizzo'
title: Attributi in base all'utilizzo
ms.custom: index-page
ms.date: 10/02/2018
ms.topic: conceptual
helpviewer_keywords:
- attributes [C++/CLI]
ms.assetid: 8be2de10-b1ff-4ca4-a114-75318408593c
ms.openlocfilehash: 7f199ec1ede4cbaeddd46518f29a4b73edb40547
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97247540"
---
# <a name="attributes-by-usage"></a>Attributi in base all'utilizzo

Questo argomento elenca gli attributi secondo gli elementi del linguaggio C++ a cui si applicano.

Se un attributo precede un elemento che non è presente nell'ambito dell'attributo, il blocco di attributi viene considerato come un commento.

|Attributo|Descrizione|
|---------------|-----------------|
|[Attributi modulo](module-attributes.md)|Si applica all'attributo del [modulo](module-cpp.md) .|
|[Attributi di interfaccia](interface-attributes.md)|Si applica alla parola chiave [__interface](../../cpp/interface.md) C++.|
|[Attributi di classe](class-attributes.md)|Si applica alla parola chiave C++.|
|[Attributi di metodo](method-attributes.md)|Si applica ai metodi in una classe, una coclasse o un'interfaccia.|
|[Attributi del parametro](parameter-attributes.md)|Si applica ai parametri di un metodo in una classe o in un'interfaccia.|
|[Attributi dei membri dati](data-member-attributes.md)|Si applica ai membri dati in una classe, una coclasse o un'interfaccia.|
|[Attributi typedef, enum, Union e struct](typedef-enum-union-and-struct-attributes.md)|Si applica alle parole chiave di C++.|
|[Attributi di matrice](array-attributes.md)|Si applica a matrici o `SAFEARRAY` s.|
|[Attributi autonomi](stand-alone-attributes.md)|Funziona in modo più simile a una riga di codice, ma non agisce su una parola chiave C++. Le istruzioni per gli attributi autonomi richiedono un punto e virgola alla fine della riga.|
|[Attributi personalizzati](custom-attributes-cpp.md)|Consente all'utente di estendere i metadati.|

## <a name="module-attributes"></a>Attributi di modulo

L'attributo seguente può essere applicato solo all'attributo [Module](module-cpp.md) .

|Attributo|Descrizione|
|---------------|-----------------|
|[helpstringdll](helpstringdll.md)|Specifica il nome della DLL da usare per eseguire la ricerca di stringhe di documento (localizzazione).|

## <a name="interface-attributes"></a>Attributi di interfaccia

Gli attributi seguenti si applicano alla parola chiave C++ [Interface (o __interface)](../../cpp/interface.md) .

|Attributo|Descrizione|
|---------------|-----------------|
|[async_uuid](async-uuid.md)|Specifica l'UUID che indica al compilatore MIDL di definire versioni sincrone e asincrone di un'interfaccia COM.|
|[personalizzato](custom-cpp.md)|Consente di definire attributi personalizzati.|
|[dispinterface](dispinterface.md)|Inserisce un'interfaccia nel file con estensione idl come interfaccia di dispatch.|
|[Dual](dual.md)|Inserisce un'interfaccia nel file con estensione IDL come interfaccia duale.|
|[esportazione](export.md)|Determina la posizione di una struttura di dati nel file con estensione IDL.|
|[helpcontext](helpcontext.md)|Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento nel file della guida.|
|[helpfile](helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|
|[helpstring](helpstring.md)|Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata.|
|[helpstringcontext](helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file con estensione hlp o CHM.|
|[helpstringdll](helpstringdll.md)|Specifica il nome della DLL da usare per eseguire la ricerca di stringhe di documento (localizzazione).|
|[nascosto](hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientato all'utente.|
|[library_block](library-block.md)|Inserisce un costrutto all'interno del blocco di libreria del file IDL.|
|[locale](local-cpp.md)|Consente di usare il compilatore MIDL come generatore di intestazioni quando viene usato nell'intestazione dell'interfaccia. Se utilizzata in una singola funzione, definisce una procedura locale per la quale non vengono generati stub.|
|[nonextensible](nonextensible.md)|Specifica che l' `IDispatch` implementazione include solo le proprietà e i metodi elencati nella descrizione dell'interfaccia e che non possono essere estesi con membri aggiuntivi in fase di esecuzione. Questo attributo è valido solo in un'interfaccia [duale](dual.md) .|
|[ODL](odl.md)|Identifica un'interfaccia come interfaccia Object Description Language (FAD).|
|[object](object-cpp.md)|Identifica un'interfaccia personalizzata.|
|[oleautomation](oleautomation.md)|Indica che un'interfaccia è compatibile con l'automazione.|
|[pointer_default](pointer-default.md)|Specifica l'attributo del puntatore predefinito per tutti i puntatori ad eccezione dei puntatori di primo livello visualizzati negli elenchi di parametri.|
|[ptr](ptr.md)|Designa un puntatore come puntatore completo.|
|[limitato](restricted.md)|Indica quali membri della libreria non possono essere chiamati in modo arbitrario.|
|[UUID](uuid-cpp-attributes.md)|Fornisce l'ID univoco per la libreria.|

È necessario osservare queste regole per la definizione di un'interfaccia:

- La convenzione di chiamata predefinita è [__stdcall](../../cpp/stdcall.md).

- Se non si specifica un GUID, viene fornito un GUID.

- Non sono consentiti metodi di overload.

Quando non si specifica l'attributo [UUID](uuid-cpp-attributes.md) e si usa lo stesso nome di interfaccia in progetti di attributi diversi, viene generato lo stesso GUID.

## <a name="see-also"></a>Vedi anche

[Attributi di C++ per COM e .NET](cpp-attributes-com-net.md)<br/>
[Attributi per gruppo](attributes-by-group.md)<br/>
[Riferimento alfabetico agli attributi](attributes-alphabetical-reference.md)
