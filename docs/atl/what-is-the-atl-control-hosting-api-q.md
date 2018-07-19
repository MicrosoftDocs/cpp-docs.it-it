---
title: Che cos'è la libreria ATL API di Hosting di controllo? | Microsoft Docs
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
ms.openlocfilehash: 2cc85c7ca47d5d1226ffc3089e01c0755ef6c6ac
ms.sourcegitcommit: 26fff80635bd1d51bc51899203fddfea8b29b530
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/05/2018
ms.locfileid: "37850553"
---
# <a name="what-is-the-atl-control-hosting-api"></a>Che cos'è la libreria ATL API di Hosting di controllo?
ATL hosting dei controlli API è il set di funzioni che consente a qualsiasi finestra di agire come un contenitore di controlli ActiveX. Queste funzioni possono essere staticamente o dinamicamente collegato all'interno del progetto perché sono disponibili come codice sorgente ed esposte dal ATL90. Nella tabella seguente sono elencate le funzioni di hosting di controlli.  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|[AtlAxAttachControl](reference/composite-control-global-functions.md#atlaxattachcontrol)|Crea un oggetto host, connetterla alla finestra fornita, quindi associa un controllo esistente.|  
|[AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol)|Crea un oggetto host, connetterla alla finestra fornita, quindi viene caricato un controllo.|  
|[AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic)|Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata, simile a [AtlAxCreateControl](reference/composite-control-global-functions.md#atlaxcreatecontrol).|  
|[AtlAxCreateControlEx](reference/composite-control-global-functions.md#atlaxcreatecontrolex)|Crea un oggetto host, connetterla alla finestra fornita, quindi viene caricato un controllo (consente inoltre di sink di evento per essere configurato).|  
|[AtlAxCreateControlLicEx](reference/composite-control-global-functions.md#atlaxcreatecontrollicex)|Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata, simile a [AtlAxCreateControlLic](reference/composite-control-global-functions.md#atlaxcreatecontrollic).|  
|[AtlAxCreateDialog](reference/composite-control-global-functions.md#atlaxcreatedialog)|Crea una finestra di dialogo non modale da una risorsa finestra di dialogo e restituisce l'handle della finestra.|  
|[AtlAxDialogBox](reference/composite-control-global-functions.md#atlaxdialogbox)|Crea una finestra di dialogo modale da una risorsa finestra di dialogo.|  
|[AtlAxGetControl](reference/composite-control-global-functions.md#atlaxgetcontrol)|Restituisce il `IUnknown` puntatore all'interfaccia del controllo ospitato in una finestra.|  
|[AtlAxGetHost](reference/composite-control-global-functions.md#atlaxgethost)|Restituisce il `IUnknown` puntatore all'interfaccia dell'oggetto host connesso a una finestra.|  
|[AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit)|Inizializza il codice di hosting di controlli.|  
|[AtlAxWinTerm](reference/composite-control-global-functions.md#atlaxwinterm)|Non inizializza il codice di hosting di controlli.|  
  
 Il `HWND` parametri nelle prime tre funzioni devono essere una finestra esistente di (quasi) tutti i tipi. Se si chiama una di queste tre funzioni in modo esplicito (in genere, non devi), non passare un handle a una finestra che funge già da un host (se esegue l'operazione, l'oggetto host esistenti non verranno liberata).  
  
 Le prime sette funzioni chiamano [AtlAxWinInit](reference/composite-control-global-functions.md#atlaxwininit) in modo implicito.  
  
> [!NOTE]
>  L'API di hosting di controlli costituisce la base del supporto ATL per contenimento dei controlli ActiveX. Tuttavia, è in genere necessario chiamare direttamente queste funzioni, se è possibile sfruttare o le funzionalità complete di classi wrapper ATL. Per altre informazioni, vedere [cui classi facilitare ActiveX contenimento di controlli ATL](which-atl-classes-facilitate-activex-control-containment-q.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Domande frequenti sul contenimento di controllo](which-atl-classes-facilitate-activex-control-containment-q.md)
