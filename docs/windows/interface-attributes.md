---
title: "Interface Attributes | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attributes [C++], reference topics"
  - "interface attributes"
ms.assetid: 27fcdfee-abce-4585-8b53-ee31635356e8
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Interface Attributes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I seguenti attributi vengono applicati a [interfaccia \(o \_\_interface\)](../cpp/interface.md) Parola chiave C\+\+.  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[async\_uuid](../windows/async-uuid.md)|Specifica il UUID che indica al compilatore MIDL per definire sia le versioni sincrone che asincrone di un'interfaccia COM.|  
|[custom](../windows/custom-cpp.md)|Consente di definire diventi proprietaria degli attributi.|  
|[dispinterface](../windows/dispinterface.md)|Posiziona un'interfaccia nel file IDL come interfaccia dispatch.|  
|[dual](../windows/dual.md)|Posiziona un'interfaccia nel file IDL come interfaccia duale.|  
|[export](../windows/export.md)|Determina una struttura di dati venga inserita nel file IDL.|  
|[helpcontext](../windows/helpcontext.md)|Specifica un ID di contesto che consente di visualizzare le informazioni utente su questo elemento nel file della Guida.|  
|[file di](../windows/helpfile.md)|Imposta il nome del file della Guida per una libreria dei tipi.|  
|[helpstring](../windows/helpstring.md)|Consente di specificare la stringa di caratteri utilizzata per descrivere l'elemento cui è associata.|  
|[helpstringcontext](../windows/helpstringcontext.md)|Specifica l'ID di un argomento della Guida in un file CHM o di .hlp.|  
|[helpstringdll](../windows/helpstringdll.md)|Specifica il nome della DLL da utilizzare per eseguire la ricerca di stringhe di documento \(localizzazione\).|  
|[hidden](../windows/hidden.md)|Indica che l'elemento esiste ma non deve essere visualizzata in un browser orientati a tramite.|  
|[library\_block](../windows/library-block.md)|Inserisce un costrutto nel blocco di libreria del file IDL.|  
|[local](../windows/local-cpp.md)|Consente di utilizzare il compilatore MIDL come generatore di intestazione una volta utilizzato nell'intestazione dell'interfaccia.  Quando viene utilizzato in una singola funzione, definisce una routine locale per il quale non stub viene generato.|  
|[non estensibile](../windows/nonextensible.md)|specifica che `IDispatch` l'implementazione include solo le proprietà e i metodi elencati nella descrizione dell'interfaccia e non può essere estesa con i membri aggiuntivi in fase di esecuzione.  Questo attributo è valido solo su un oggetto [doppio](../windows/dual.md) interfaccia.|  
|[odl](../windows/odl.md)|identifica un'interfaccia come interfaccia \(ODL\) di ODL.|  
|[object](../windows/object-cpp.md)|identifica un'interfaccia personalizzata.|  
|[oleautomation](../windows/oleautomation.md)|Indica che un'interfaccia è compatibile con l'automazione.|  
|[pointer\_default](../windows/pointer-default.md)|Specifica l'attributo predefinito del puntatore per tutti i puntatori a eccezione dei puntatori di livello superiore che vengono visualizzati gli elenchi di parametri.|  
|[stampante](../windows/ptr.md)|definisce un puntatore come puntatore completo.|  
|[restricted](../windows/restricted.md)|Definisce i membri della raccolta non possono essere chiamati in modo arbitrario.|  
|[uuid](../windows/uuid-cpp-attributes.md)|Fornisce ID univoco per la raccolta|  
  
 È necessario rispettare le seguenti regole per la definizione dell'interfaccia:  
  
-   la convenzione di chiamata predefinita è [\_\_stdcall](../cpp/stdcall.md).  
  
-   Un GUID fornito automaticamente se non viene fornito uno.  
  
-   Nessun metodo di overload è consentita.  
  
 In non specificare [uuid](../windows/uuid-cpp-attributes.md) attributo e utilizzando lo stesso nome dell'interfaccia in progetti diversi di attributo, lo stesso GUID viene generato.  
  
## Vedere anche  
 [Attributes by Usage](../windows/attributes-by-usage.md)