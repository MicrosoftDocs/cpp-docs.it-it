---
title: Utilizza IDispEventImpl (ATL) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IDispEventImpl
dev_langs:
- C++
helpviewer_keywords:
- IDispEventImpl class, using
ms.assetid: 82d53b61-9d0d-45c5-aff9-2fafa468a9ca
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f787fac05e95fff8a974692c3e6fca24561ed222
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-idispeventimpl"></a>Utilizza IDispEventImpl
Quando si utilizza `IDispEventImpl` per gestire gli eventi, è necessario:  
  
-   Derivare la classe da [IDispEventImpl](../atl/reference/idispeventimpl-class.md).  
  
-   Aggiungere una mappa del sink di eventi alla classe.  
  
-   Aggiungere le voci per l'evento sink mappa utilizzando il [macro SINK_ENTRY](reference/composite-control-macros.md#sink_entry) o [SINK_ENTRY_EX](reference/composite-control-macros.md#sink_entry_ex) (macro).  
  
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
  
 [!code-cpp[NVC_ATL_EventHandlingSample#1](../atl/codesnippet/cpp/using-idispeventimpl_1.h)]  
  
 Il codice seguente viene visualizzato in NotSoSimple. Il codice pertinente è indicato dai commenti:  
  
 [!code-cpp[NVC_ATL_EventHandlingSample#2](../atl/codesnippet/cpp/using-idispeventimpl_2.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione degli eventi](../atl/event-handling-and-atl.md)   
 [Nell'esempio ATLEventHandling](../visual-cpp-samples.md)

