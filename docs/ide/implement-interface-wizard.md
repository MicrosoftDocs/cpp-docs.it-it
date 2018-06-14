---
title: Implementazione guidata interfaccia | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- vc.codewiz.impl.interface.overview
dev_langs:
- C++
helpviewer_keywords:
- Implement Interface Wizard [C++]
ms.assetid: 947c329e-0815-4ca7-835e-c41dfeb75f9e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: bf2ddf83b7a03f8d4e01b61f82e46e0d26a5547b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33340541"
---
# <a name="implement-interface-wizard"></a>Implementazione guidata interfaccia
Questa procedura guidata consente di implementare un'interfaccia per un oggetto COM. Nelle librerie COM disponibili con Visual Studio e Windows sono incluse implementazioni di diverse interfacce. L'implementazione dell'interfaccia è associata a un oggetto quando viene creata un'istanza di tale oggetto e vengono offerti i relativi servizi.  
  
 Per dettagli su interfacce e implementazioni, vedere [Interfaces and Interface Implementations](http://msdn.microsoft.com/library/windows/desktop/ms694356) (Interfacce e implementazioni di interfacce) in Windows SDK.  
  
 **Implementa interfaccia da**  
 Specifica il percorso della libreria dei tipi, da cui viene creata l'interfaccia.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Progetto**|La libreria dei tipi fa parte del progetto.|  
|**Registry**|La libreria dei tipi è registrata nel sistema. Le librerie dei tipi registrate sono elencate in **Available type libraries** (Librerie dei tipi disponibili).|  
|**File**|La libreria dei tipi non è necessariamente registrata nel sistema ma è contenuta in un file. È necessario specificare il percorso del file in **Percorso**.|  
  
 **Available type libraries** (Librerie dei tipi disponibili)  
 Visualizza le librerie dei tipi disponibili contenenti le definizioni delle interfacce che è possibile implementare. Se si fa clic su **File** in **Implementa interfaccia da**, questa casella non è disponibile per la modifica.  
  
 **Posizione**  
 Visualizza il percorso della libreria dei tipi attualmente selezionata nell'elenco **Available type libraries** (Librerie dei tipi disponibili). Se si seleziona **File** in **Implementa interfaccia da**, fare clic sul pulsante con i puntini di sospensione per individuare un file contenente la libreria dei tipi da usare.  
  
 **Interfacce**  
 Visualizza le interfacce le cui definizioni sono contenute nella libreria dei tipi attualmente selezionata nella casella **Available type libraries** (Librerie dei tipi disponibili).  
  
> [!NOTE]
>  Le interfacce che hanno lo stesso nome di quelle già implementate dall'oggetto selezionato non vengono visualizzate nella casella **Interfacce**.  
  
|Pulsante di trasferimento|Descrizione|  
|---------------------|-----------------|  
|**>**|Aggiunge all'elenco **Implementa interfacce** il nome dell'interfaccia attualmente selezionata nell'elenco **Interfacce**.|  
|**>>**|Aggiunge all'elenco **Implementa interfacce** tutti i nomi delle interfacce disponibili nell'elenco **Interfacce**.|  
|**<**|Rimuove il nome dell'interfaccia attualmente selezionata dall'elenco **Implementa interfacce**.|  
|**<\<**|Rimuove tutti i nomi delle interfacce attualmente inclusi nell'elenco **Implementa interfacce**.|  
  
 **Implementa interfacce**  
 Visualizza i nomi delle interfacce selezionate per l'implementazione nell'oggetto.  
  
> [!NOTE]
>  Se si include più di un'interfaccia che deriva da `IDispatch`, oppure se si tenta di implementare un'interfaccia che deriva da un'altra interfaccia già presente nella classe, è necessario evitare l'ambiguità nelle voci COM_MAP. Per altre informazioni, vedere [COM_INTERFACE_ENTRY2](../atl/reference/com-interface-entry-macros.md#com_interface_entry2).  
  
## <a name="see-also"></a>Vedere anche  
 [Implementazione di un'interfaccia](../ide/implementing-an-interface-visual-cpp.md)