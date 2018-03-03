---
title: Implementazione guidata interfaccia | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.codewiz.impl.interface.overview
dev_langs:
- C++
helpviewer_keywords:
- Implement Interface Wizard [C++]
ms.assetid: 947c329e-0815-4ca7-835e-c41dfeb75f9e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: d224546eb8bb06421c2e84206e1f4d4dc77f9668
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="implement-interface-wizard"></a>Implementazione guidata interfaccia
Questa procedura guidata implementa un'interfaccia per un oggetto COM. Le implementazioni di interfacce sono inclusi nelle librerie COM disponibili con Visual Studio e Windows. Implementazione dell'interfaccia è associata a un oggetto quando viene creata un'istanza di tale oggetto e fornisce i servizi offerti dall'oggetto.  
  
 Per una descrizione delle interfacce e implementazioni, vedere [interfacce e implementazioni di interfaccia](http://msdn.microsoft.com/library/windows/desktop/ms694356) in Windows SDK.  
  
 **Implementa interfaccia da**  
 Specifica il percorso della libreria dei tipi, da cui viene creata l'interfaccia.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Progetto**|La libreria dei tipi fa parte del progetto.|  
|**Registry**|La libreria dei tipi è registrata nel sistema. Librerie dei tipi registrati sono elencate **librerie dei tipi disponibili**.|  
|**File**|La libreria dei tipi non è necessariamente registrata nel sistema, ma è contenuta in un file. È necessario specificare il percorso del file in **percorso**.|  
  
 **Librerie dei tipi disponibili**  
 Consente di visualizzare le librerie dei tipi disponibili che contiene le definizioni di interfaccia che è possibile implementare. Se si fa clic **File** in **implementa interfaccia da**, questa casella è disponibile per la modifica.  
  
 **Percorso**  
 Visualizza il percorso della libreria dei tipi attualmente selezionato nel **librerie dei tipi disponibili** elenco. Se si seleziona **File** in **implementa interfaccia da**, fare clic sul pulsante con i puntini di sospensione per individuare un file contenente la libreria dei tipi da utilizzare.  
  
 **Interfacce**  
 Visualizza le interfacce le cui definizioni sono contenuti nella libreria dei tipi attualmente selezionata nel **librerie dei tipi disponibili** casella.  
  
> [!NOTE]
>  Le interfacce che hanno lo stesso nome a quelle già implementate dall'oggetto selezionato non vengono visualizzate nel **interfacce** casella.  
  
|Pulsante di trasferimento|Descrizione|  
|---------------------|-----------------|  
|**>**|Aggiunge il **implementare interfacce** il nome dell'interfaccia attualmente selezionato nell'elenco il **interfacce** elenco.|  
|**>>**|Aggiunge il **implementare interfacce** tutti i nomi di interfaccia disponibili nell'elenco il **interfacce** elenco.|  
|**<**|Rimuove il nome dell'interfaccia attualmente selezionato nel **implementare interfacce** elenco.|  
|**<\<**|Rimuove tutti i nomi attualmente nell'interfaccia di **implementare interfacce** elenco.|  
  
 **Implementare le interfacce**  
 Visualizza i nomi delle interfacce di cui si sono scelto di implementare l'oggetto.  
  
> [!NOTE]
>  Se si include più di un'interfaccia che deriva da `IDispatch`, oppure se si tenta di implementare un'interfaccia che deriva da un'altra interfaccia già presente nella classe, quindi è necessario evitare l'ambiguità nelle voci COM_MAP. Vedere [COM_INTERFACE_ENTRY2](../atl/reference/com-interface-entry-macros.md#com_interface_entry2) per ulteriori informazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione di un'interfaccia](../ide/implementing-an-interface-visual-cpp.md)