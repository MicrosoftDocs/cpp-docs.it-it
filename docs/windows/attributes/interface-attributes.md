---
title: Attributi di interfaccia (C++ COM)
ms.date: 10/02/2018
helpviewer_keywords:
- attributes [C++/CLI], reference topics
- interface attributes
ms.assetid: 27fcdfee-abce-4585-8b53-ee31635356e8
ms.openlocfilehash: 8218ccb66c6be9edef5d7de751a73bf4753d069f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62409317"
---
# <a name="interface-attributes"></a>Attributi di interfaccia

Gli attributi seguenti si applicano per la [interfaccia (o Interface)](../../cpp/interface.md) C++ (parola chiave).

|Attributo|Descrizione|
|---------------|-----------------|
|[async_uuid](async-uuid.md)|Specifica l'UUID che indica al compilatore MIDL per definire le versioni sincrone e asincrone di un'interfaccia COM.|
|[custom](custom-cpp.md)|Consente di definire attributi personalizzati.|
|[dispinterface](dispinterface.md)|Inserisce un'interfaccia nel file con estensione idl come interfaccia di dispatch.|
|[dual](dual.md)|Inserisce un'interfaccia nel file con estensione idl come interfaccia duale.|
|[export](export.md)|Fa sì che una struttura di dati da inserire nel file IDL.|
|[helpcontext](helpcontext.md)|Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento corrente nel file della Guida.|
|[helpfile](helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|
|[helpstring](helpstring.md)|Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata.|
|[helpstringcontext](helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file con estensione chm o. hlp.|
|[helpstringdll](helpstringdll.md)|Specifica il nome della DLL da usare per eseguire la ricerca della stringa di documento (localizzazione).|
|[hidden](hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientate all'utente.|
|[library_block](library-block.md)|Inserisce un costrutto nel blocco di libreria del file con estensione idl.|
|[local](local-cpp.md)|Consente di usare il compilatore MIDL come generatore di intestazione quando usato nell'intestazione dell'interfaccia. Se usato in una singola funzione, designa una procedura locale per cui non gli stub vengono generati.|
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

[Attributi per utilizzo](attributes-by-usage.md)