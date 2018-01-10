---
title: Attributi di interfaccia | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords:
- attributes [C++], reference topics
- interface attributes
ms.assetid: 27fcdfee-abce-4585-8b53-ee31635356e8
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5ff84939b3211633e199066e1a38da2e91efb1c8
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="interface-attributes"></a>Attributi di interfaccia
Gli attributi seguenti riguardano la [interfaccia (o Interface)](../cpp/interface.md) parola chiave di C++.  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[async_uuid](../windows/async-uuid.md)|Specifica l'UUID che indica al compilatore MIDL per definire versioni sincrone e asincrone di un'interfaccia COM.|  
|[personalizzato](../windows/custom-cpp.md)|Consente di definire attributi personalizzati.|  
|[dispinterface](../windows/dispinterface.md)|Inserisce un'interfaccia nel file con estensione idl come interfaccia di dispatch.|  
|[dual](../windows/dual.md)|Inserisce un'interfaccia nel file IDL come un'interfaccia duale.|  
|[export](../windows/export.md)|Fa sì che una struttura di dati da inserire nel file IDL.|  
|[helpcontext](../windows/helpcontext.md)|Specifica un ID di contesto che consente di visualizzare informazioni su questo elemento nel file della Guida.|  
|[helpfile](../windows/helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|  
|[helpstring](../windows/helpstring.md)|Specifica una stringa di caratteri utilizzato per descrivere l'elemento a cui viene applicata.|  
|[helpstringcontext](../windows/helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file hlp o chm.|  
|[helpstringdll](../windows/helpstringdll.md)|Specifica il nome della DLL da utilizzare per eseguire la ricerca della stringa di documento (localizzazione).|  
|[hidden](../windows/hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzato in un visualizzatore per utente.|  
|[library_block](../windows/library-block.md)|Inserisce un costrutto di blocco di libreria del file IDL.|  
|[locale](../windows/local-cpp.md)|Consente di usare il compilatore MIDL come generatore di intestazione utilizzato nell'intestazione di interfaccia. Quando utilizzato in una singola funzione, indica una procedura locale per il quale non vengono generati stub.|  
|[nonextensible](../windows/nonextensible.md)|Specifica che il `IDispatch` implementazione include solo le proprietà e metodi elencati nella descrizione dell'interfaccia e non possono essere esteso con altri membri in fase di esecuzione. Questo attributo è valido solo su un [dual](../windows/dual.md) interfaccia.|  
|[odl](../windows/odl.md)|Identifica un'interfaccia come interfaccia oggetto descrizione Language ODL ().|  
|[object](../windows/object-cpp.md)|Identifica un'interfaccia personalizzata.|  
|[oleautomation](../windows/oleautomation.md)|Indica che un'interfaccia è compatibile con l'automazione.|  
|[pointer_default](../windows/pointer-default.md)|Specifica l'attributo di puntatore predefinito per tutti i puntatori ad eccezione dei puntatori di primo livello che vengono visualizzati nell'elenco di parametri.|  
|[ptr](../windows/ptr.md)|Indica un puntatore come un puntatore completo.|  
|[restricted](../windows/restricted.md)|Indica quali membri della raccolta non possono essere chiamati in modo arbitrario.|  
|[UUID](../windows/uuid-cpp-attributes.md)|Fornisce l'ID univoco per la libreria|  
  
 È necessario rispettare queste regole per la definizione di un'interfaccia:  
  
-   Convenzione di chiamata predefinita è [stdcall](../cpp/stdcall.md).  
  
-   Un GUID viene fornito automaticamente se non viene fornito uno.  
  
-   Metodi di overload non sono consentiti.  
  
 Quando non si specifica il [uuid](../windows/uuid-cpp-attributes.md) attributo e utilizza lo stesso nome di interfaccia in progetti di attributo diverso, viene generato lo stesso GUID.  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi per utilizzo](../windows/attributes-by-usage.md)