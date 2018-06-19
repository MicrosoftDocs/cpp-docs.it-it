---
title: Utilizzo di IDispEventSimpleImpl (ATL) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
f1_keywords:
- IDispEventSimpleImpl
dev_langs:
- C++
helpviewer_keywords:
- IDispEventSimpleImpl class, using
ms.assetid: 8640ad1a-4bd0-40a5-b5e4-7322685d7aab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0cdef5012288b7f5f17040f73dfac5ec1f90d4f0
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32361950"
---
# <a name="using-idispeventsimpleimpl"></a>Utilizzo di IDispEventSimpleImpl
Quando si utilizza `IDispEventSimpleImpl` per gestire gli eventi, è necessario:  
  
-   Derivare la classe da [IDispEventSimpleImpl](../atl/reference/idispeventsimpleimpl-class.md).  
  
-   Aggiungere una mappa del sink di eventi alla classe.  
  
-   Definire [le strutture ATL_FUNC_INFO](../atl/reference/atl-func-info-structure.md) strutture che descrive gli eventi.  
  
-   Aggiungere le voci per l'evento sink mappa utilizzando il [macro SINK_ENTRY_INFO](reference/composite-control-macros.md#sink_entry_info) (macro).  
  
-   Implementare i metodi che desidera gestire.  
  
-   Notifica e annullare gli avvisi per l'origine evento.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come gestire il **DocumentChange** evento generato da Word **applicazione** oggetto. Questo evento viene definito come un metodo sul **ApplicationEvents** interfaccia dispatch.  
  
 L'esempio è tratto di [esempio ATLEventHandling](../visual-cpp-samples.md).  
  
 `[`  
  
 `uuid(000209F7-0000-0000-C000-000000000046),`  
  
 `hidden`  
  
 `]`  
  
 `dispinterface ApplicationEvents {`  
  
 `properties:`  
  
 `methods:`  
  
 `[id(0x00000001), restricted, hidden]`  
  
 `void Startup();`  
  
 `[id(0x00000002)]`  
  
 `void Quit();`  
  
 `[id(0x00000003)]`  
  
 `void DocumentChange();`  
  
 `};`  
  
 Nell'esempio viene utilizzato `#import` per generare i file di intestazione richiesta dalla libreria dei tipi di Word. Se si desidera utilizzare questo esempio con altre versioni di Word, è necessario specificare il file dll mso corretto. Ad esempio, Office 2000 fornisce MSO9 e OfficeXP fornisce Mso. Questo codice è semplificato dal stdafx. h:  
  
 [!code-cpp[NVC_ATL_EventHandlingSample#1](../atl/codesnippet/cpp/using-idispeventsimpleimpl_1.h)]  
  
 L'unica informazione dalla libreria dei tipi effettivamente utilizzata in questo esempio è il CLSID della parola **applicazione** oggetto e l'IID del **ApplicationEvents** interfaccia. Questa informazione viene utilizzata solo in fase di compilazione.  
  
 Il codice seguente viene visualizzato in Simple.h. Il codice pertinente è indicato dai commenti:  
  
 [!code-cpp[NVC_ATL_EventHandlingSample#3](../atl/codesnippet/cpp/using-idispeventsimpleimpl_2.h)]  
  
 Il codice seguente è tratto Simple. cpp:  
  
 [!code-cpp[NVC_ATL_EventHandlingSample#4](../atl/codesnippet/cpp/using-idispeventsimpleimpl_3.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione degli eventi](../atl/event-handling-and-atl.md)   
 [Nell'esempio ATLEventHandling](../visual-cpp-samples.md)

