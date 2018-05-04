---
title: Che cos'è la libreria ATL API di Hosting di controlli? | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- APIs [C++], hosting
- control-hosting API
- controls [ATL], hosting APIs
ms.assetid: 75b27e45-cfba-4950-aa35-96cc7d8da753
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 30b104e21259006da41c236c168431d85b43e0d4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="what-is-the-atl-control-hosting-api"></a>Che cos'è la libreria ATL API di Hosting di controlli?
ATL hosting dei controlli API è il set di funzioni che consente a qualsiasi finestra di agire come un contenitore di controlli ActiveX. Queste funzioni in modo statico o in modo dinamico collegato al progetto poiché sono disponibili come codice sorgente e possibile esposti da ATL90. Le funzioni di hosting di controlli sono elencate nella tabella seguente.  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|[AtlAxAttachControl](reference/composite-control-global-functions.md#atlaxattachcontrol)|Crea un oggetto host, connetterla alla finestra fornita, quindi associa un controllo esistente.|  
|[AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol)|Crea un oggetto host, connetterla alla finestra fornita, quindi viene caricato un controllo.|  
|[AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic)|Crea un controllo ActiveX con licenza, inizializza e ospita nella finestra specificata, simile a [AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol).|  
|[AtlAxCreateControlEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)|Crea un oggetto host, connetterla alla finestra fornita, quindi viene caricato un controllo (consente inoltre il sink di evento da impostare).|  
|[AtlAxCreateControlLicEx](reference/composite-control-global-functions.md#atlaxcreatecontrollicex)|Crea un controllo ActiveX con licenza, inizializza e ospita nella finestra specificata, simile a [AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic).|  
|[AtlAxCreateDialog](reference/composite-control-global-functions.md#atlaxcreatedialog)|Crea una finestra di dialogo non modale da una risorsa finestra di dialogo e restituisce l'handle di finestra.|  
|[AtlAxDialogBox](reference/composite-control-global-functions.md#atlaxdialogbox)|Crea una finestra di dialogo modale da una risorsa finestra di dialogo.|  
|[AtlAxGetControl](reference/composite-control-global-functions.md#atlaxgetcontrol)|Restituisce il **IUnknown** puntatore a interfaccia del controllo ospitato in una finestra.|  
|[AtlAxGetHost](reference/composite-control-global-functions.md#atlaxgethost)|Restituisce il **IUnknown** puntatore a interfaccia dell'oggetto host connesso a una finestra.|  
|[AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit)|Inizializza il codice di hosting di controlli.|  
|[AtlAxWinTerm](reference/composite-control-global-functions.md#atlaxwinterm)|Non inizializza il codice di hosting di controlli.|  
  
 Il `HWND` nelle funzioni per i primi tre parametri devono essere una finestra esistente di (quasi) tutti i tipi. Se si chiama una di queste tre funzioni in modo esplicito (in genere, si dovranno), non passare un handle a una finestra che funge già da un host (in caso contrario, l'oggetto host esistenti non verranno liberata).  
  
 Le prime sette funzioni chiamano [AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit) in modo implicito.  
  
> [!NOTE]
>  L'API di hosting di controlli costituisce la base del supporto ATL per contenimento dei controlli ActiveX. Tuttavia, è in genere necessario chiamare queste funzioni direttamente se sfruttare o le funzionalità complete di classi wrapper ATL. Per ulteriori informazioni, vedere [che ATL classi facilitare contenimento dei controlli ActiveX](which-atl-classes-facilitate-activex-control-containment-q.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Domande frequenti sul contenimento di controllo](which-atl-classes-facilitate-activex-control-containment-q.md)
