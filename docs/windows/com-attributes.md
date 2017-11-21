---
title: Attributi COM | Documenti Microsoft
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
- attributes [COM]
- COM, attributes
ms.assetid: 52a5dd70-e8be-4bba-afd6-daf90fe689a0
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: f9cd3657426a2a51a582ab695376287a3e975056
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="com-attributes"></a>Attributi COM
Gli attributi COM inseriscono codice per il supporto di numerose aree dello sviluppo COM e sviluppo in .NET Framework common language runtime. Queste aree vanno dall'implementazione personalizzata dell'interfaccia e il supporto di interfacce esistenti per il supporto degli eventi, metodi e proprietà predefinite. Inoltre, è reperibile il supporto per composito e l'implementazione del controllo ActiveX.  
  
|Attributo|Descrizione|  
|---------------|-----------------|  
|[aggregatable](../windows/aggregatable.md)|Indica che un controllo può essere aggregato da un altro controllo.|  
|[aggregates](../windows/aggregates.md)|Indica che un controllo Aggrega la classe di destinazione.|  
|[coclass](../windows/coclass.md)|Crea un oggetto COM, che è possibile implementare un'interfaccia COM.|  
|[COM_INTERFACE_ENTRY](../windows/com-interface-entry-cpp.md)|Aggiunge una voce di interfaccia a una mappa COM.|  
|[implements_category](../windows/implements-category.md)|Specifica le categorie di componenti implementato per la classe.|  
|[progid](../windows/progid.md)|Definisce il ProgID di un controllo.|  
|[rdx](../windows/rdx.md)|Crea o modifica una chiave del Registro di sistema.|  
|[registration_script](../windows/registration-script.md)|Esegue lo script di registrazione specificata.|  
|[requires_category](../windows/requires-category.md)|Specifica le categorie di componenti necessari per la classe.|  
|[support_error_info](../windows/support-error-info.md)|Supporta la segnalazione errori per l'oggetto di destinazione.|  
|[synchronize](../windows/synchronize.md)|Sincronizza l'accesso a un metodo.|  
|[Threading](../windows/threading-cpp.md)|Specifica il modello di threading per un oggetto COM.|  
|[vi_progid](../windows/vi-progid.md)|Definisce un ProgID indipendenti dalla versione per un controllo.|  
  
## <a name="see-also"></a>Vedere anche  
 [Attributi per gruppo](../windows/attributes-by-group.md)