---
description: 'Altre informazioni su: attributi di interfaccia'
title: Attributi di interfaccia (C++ COM)
ms.date: 10/02/2018
helpviewer_keywords:
- attributes [C++/CLI], reference topics
- interface attributes
ms.assetid: 27fcdfee-abce-4585-8b53-ee31635356e8
ms.openlocfilehash: 4a2584f6d0ad73427c9460cd5ddafb92d11db9b0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97118329"
---
# <a name="interface-attributes"></a>Attributi di interfaccia

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

[Attributi per utilizzo](attributes-by-usage.md)
