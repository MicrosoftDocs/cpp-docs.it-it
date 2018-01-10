---
title: Quali classi ATL semplificano contenimento dei controlli ActiveX? | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- hosting controls using ATL
- ActiveX control containers [C++], ATL control hosting
ms.assetid: 803a4605-7f4c-4139-8638-49d8783d31b0
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 880c7bd52476614a4356690aff2fda286e9f3aef
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="which-atl-classes-facilitate-activex-control-containment"></a>Quali classi ATL semplificano contenimento dei controlli ActiveX?
Codice di hosting di controlli ATL non richiede l'utilizzo di classi ATL. è possibile creare semplicemente un **"AtlAxWin80"** finestra e utilizzare l'API di hosting di controlli eventualmente (per ulteriori informazioni, vedere **che cos'è l'API di Hosting del controllo ATL**. Tuttavia, le classi seguenti rendono le funzionalità di contenimento più facile da utilizzare.  
  
|Classe|Descrizione|  
|-----------|-----------------|  
|[CAxWindow](../atl/reference/caxwindow-class.md)|Esegue il wrapping di un **"AtlAxWin80"** finestra, fornendo i metodi per la creazione della finestra, creazione di un controllo e/o il collegamento di un controllo alla finestra e il recupero di puntatori a interfaccia per l'oggetto host.|  
|[CAxWindow2T](../atl/reference/caxwindow2t-class.md)|Esegue il wrapping di un **"Atlaxwin80"** finestra, fornendo i metodi per la creazione della finestra, creazione di un controllo e/o il collegamento di un controllo concesso in licenza alla finestra e il recupero di puntatori a interfaccia per l'oggetto host.|  
|[CComCompositeControl](../atl/reference/ccomcompositecontrol-class.md)|Funge da classe base per classi di controlli ActiveX in base a una risorsa finestra di dialogo. Tali controlli possono contenere altri controlli ActiveX.|  
|[CAxDialogImpl](../atl/reference/caxdialogimpl-class.md)|Funge da classe base per classi di finestre di dialogo in base a una risorsa finestra di dialogo. Tali finestre di dialogo possono contenere controlli ActiveX.|  
|[CWindow](../atl/reference/cwindow-class.md)|Fornisce un metodo, [GetDlgControl](../atl/reference/cwindow-class.md#getdlgcontrol), verrà restituito un puntatore a interfaccia per un controllo, l'ID della finestra host specificato. Inoltre, i wrapper di API Windows esposti da `CWindow` in genere semplificare la gestione delle finestre.|  
  
## <a name="see-also"></a>Vedere anche  
 [Domande frequenti sul contenimento di controllo](../atl/atl-control-containment-faq.md)

