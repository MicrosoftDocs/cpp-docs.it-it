---
title: Uso di IDispEventImpl (ATL) | Microsoft Docs
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
ms.openlocfilehash: 38ac64a99c3523f174c62c9788aeab867aa8758b
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37848928"
---
# <a name="using-idispeventimpl"></a>Uso di IDispEventImpl
Quando si usa `IDispEventImpl` per gestire gli eventi, è necessario:  
  
-   Derivare la classe da [IDispEventImpl](../atl/reference/idispeventimpl-class.md).  
  
-   Aggiungere una mappa di sink di eventi alla classe.  
  
-   Aggiungere le voci per il mapping dei sink di evento utilizzando il [macro SINK_ENTRY](reference/composite-control-macros.md#sink_entry) oppure [SINK_ENTRY_EX](reference/composite-control-macros.md#sink_entry_ex) macro.  
  
-   Implementare i metodi che desidera gestire.  
  
-   Notifica e annullare l'origine dell'evento.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente viene illustrato come gestire le `DocumentChange` eventi generati di Word **applicazione** oggetto. Questo evento viene definito come un metodo su di `ApplicationEvents` interfaccia dispatch.  
  
 L'esempio è tratto dal [esempio ATLEventHandling](../visual-cpp-samples.md).  
  
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
  
 L'esempio Usa `#import` per generare i file di intestazione obbligatori da libreria dei tipi di Word. Se si desidera usare questo esempio con altre versioni di Word, è necessario specificare il file dll corretti mso. Ad esempio, Office 2000 fornisce MSO9 e OfficeXP fornisce Mso. dll. Questo codice è semplificato dal file stdafx. h:  
  
 [!code-cpp[NVC_ATL_EventHandlingSample#1](../atl/codesnippet/cpp/using-idispeventimpl_1.h)]  
  
 Il codice seguente viene visualizzato in NotSoSimple. Il codice rilevante è indicato dai commenti:  
  
 [!code-cpp[NVC_ATL_EventHandlingSample#2](../atl/codesnippet/cpp/using-idispeventimpl_2.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione degli eventi](../atl/event-handling-and-atl.md)   
 [Nell'esempio ATLEventHandling](../visual-cpp-samples.md)

