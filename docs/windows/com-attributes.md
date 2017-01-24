---
title: "COM Attributes | Microsoft Docs"
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
  - "attributes [COM]"
  - "COM, attributes"
ms.assetid: 52a5dd70-e8be-4bba-afd6-daf90fe689a0
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COM Attributes
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli attributi COM è invece possibile inserire codice per supportare le numerose aree di sviluppo COM e sviluppo di Common Language Runtime di .NET Framework.  Queste aree variano dall'implementazione di interfaccia e il supporto delle interfacce esistenti a supportare le proprietà predefinite, metodi ed eventi.  Inoltre, il supporto è disponibile per il composito e l'implementazione del controllo ActiveX.  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[cui aggregatable](../windows/aggregatable.md)|indica che un controllo può essere aggregatoe da un altro controllo.|  
|[aggrega](../windows/aggregates.md)|indica che un controllo aggrega la classe di destinazione.|  
|[coclasse](../windows/coclass.md)|crea un oggetto COM, che può implementare un'interfaccia COM.|  
|[com\_interface\_entry](../windows/com-interface-entry-cpp.md)|Aggiunge una voce dell'interfaccia in una mappa COM.|  
|[implements\_category](../windows/implements-category.md)|Specifica ha implementato le categorie componenti per la classe.|  
|[progid](../windows/progid.md)|definisce il ProgID per un controllo.|  
|[rdx](../windows/rdx.md)|Crea o modifica una chiave del Registro di sistema.|  
|[registration\_script](../windows/registration-script.md)|esegue lo script specificato di registrazione.|  
|[requires\_category](../windows/requires-category.md)|Specifica le categorie componenti necessari per la classe.|  
|[support\_error\_information](../windows/support-error-info.md)|Supporta la segnalazione degli errori per l'oggetto di destinazione.|  
|[sincronizzare](../windows/synchronize.md)|Sincronizza l'accesso a un metodo.|  
|[il threading](../windows/threading-cpp.md)|Specifica il modello di threading su un oggetto COM.|  
|[vi\_progid](../windows/vi-progid.md)|definisce un versione\-indipendente ProgID per un controllo.|  
  
## Vedere anche  
 [Attributes by Group](../windows/attributes-by-group.md)