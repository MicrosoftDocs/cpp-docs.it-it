---
title: Utilizza IDispEventImpl (ATL) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
f1_keywords:
- IDispEventImpl
dev_langs:
- C++
helpviewer_keywords:
- IDispEventImpl class, using
ms.assetid: 82d53b61-9d0d-45c5-aff9-2fafa468a9ca
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 520d1129234a26ff6eb4c402154969ad7e166211
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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

