---
title: Attributi di interfaccia | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- attributes [C++/CLI], reference topics
- interface attributes
ms.assetid: 27fcdfee-abce-4585-8b53-ee31635356e8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 850646e2dda1f226eff7c921dd3fe9f85595ca69
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44317654"
---
# <a name="interface-attributes"></a>Attributi di interfaccia

Gli attributi seguenti si applicano per la [interfaccia (o Interface)](../cpp/interface.md) parola chiave di C++.

|Attributo|Descrizione|
|---------------|-----------------|
|[async_uuid](../windows/async-uuid.md)|Specifica l'UUID che indica al compilatore MIDL per definire le versioni sincrone e asincrone di un'interfaccia COM.|
|[custom](../windows/custom-cpp.md)|Consente di definire attributi personalizzati.|
|[dispinterface](../windows/dispinterface.md)|Inserisce un'interfaccia nel file con estensione idl come interfaccia di dispatch.|
|[dual](../windows/dual.md)|Inserisce un'interfaccia nel file con estensione idl come interfaccia duale.|
|[export](../windows/export.md)|Fa sì che una struttura di dati da inserire nel file IDL.|
|[helpcontext](../windows/helpcontext.md)|Specifica un ID di contesto che consente all'utente di visualizzare informazioni sull'elemento corrente nel file della Guida.|
|[helpfile](../windows/helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|
|[helpstring](../windows/helpstring.md)|Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata.|
|[helpstringcontext](../windows/helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file con estensione chm o. hlp.|
|[helpstringdll](../windows/helpstringdll.md)|Specifica il nome della DLL da usare per eseguire la ricerca della stringa di documento (localizzazione).|
|[hidden](../windows/hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un browser orientate all'utente.|
|[library_block](../windows/library-block.md)|Inserisce un costrutto nel blocco di libreria del file con estensione idl.|
|[local](../windows/local-cpp.md)|Consente di usare il compilatore MIDL come generatore di intestazione quando usato nell'intestazione dell'interfaccia. Se usato in una singola funzione, designa una procedura locale per cui non gli stub vengono generati.|
|[nonextensible](../windows/nonextensible.md)|Specifica che il `IDispatch` implementazione include solo le proprietà e i metodi elencati nella descrizione dell'interfaccia e non possono essere estese con membri aggiuntivi in fase di esecuzione. Questo attributo è valido in solo una [duale](../windows/dual.md) interfaccia.|
|[odl](../windows/odl.md)|Identifica un'interfaccia come interfaccia oggetto Description Language (ODL).|
|[object](../windows/object-cpp.md)|Identifica un'interfaccia personalizzata.|
|[oleautomation](../windows/oleautomation.md)|Indica che un'interfaccia è compatibile con l'automazione.|
|[pointer_default](../windows/pointer-default.md)|Specifica l'attributo di puntatore predefinite per tutti i puntatori ad eccezione dei puntatori di primo livello che vengono visualizzati nell'elenco di parametri.|
|[ptr](../windows/ptr.md)|Definisce un puntatore come puntatore completo.|
|[restricted](../windows/restricted.md)|Definisce i membri della raccolta non possono essere chiamati in modo arbitrario.|
|[uuid](../windows/uuid-cpp-attributes.md)|Fornisce l'ID univoco per la libreria|

È necessario rispettare queste regole per la definizione di un'interfaccia:

- Convenzione di chiamata predefinita è [stdcall](../cpp/stdcall.md).

- Un GUID viene fornito automaticamente se non viene fornito uno.

- Metodi di overload non sono consentiti.

Se non si specifica la [uuid](../windows/uuid-cpp-attributes.md) attributo e usando lo stesso nome di interfaccia nei progetti di attributo diverso, viene generato lo stesso GUID.

## <a name="see-also"></a>Vedere anche

[Attributi per utilizzo](../windows/attributes-by-usage.md)