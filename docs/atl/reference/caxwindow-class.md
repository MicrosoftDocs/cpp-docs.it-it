---
title: "CAxWindow Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAxWindowT"
  - "CAxWindow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, hosting di controlli ActiveX"
  - "CAxWindow class"
ms.assetid: 85e79261-43e4-4770-bde0-1ff87f222b0f
caps.latest.revision: 24
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAxWindow Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per modificare una finestra che ospita un controllo ActiveX.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CAxWindow : public CWindow  
  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[AttachControl](../Topic/CAxWindow::AttachControl.md)|Associa un controllo ActiveX esistente all'oggetto `CAxWindow`.|  
|[CAxWindow](../Topic/CAxWindow::CAxWindow.md)|Costruisce un oggetto `CAxWindow`.|  
|[CreateControl](../Topic/CAxWindow::CreateControl.md)|Crea un controllo ActiveX, la inizializza e lo ospita nella finestra `CAxWindow`.|  
|[CreateControlEx](../Topic/CAxWindow::CreateControlEx.md)|Crea un controllo ActiveX e recupera un puntatore a interfaccia \(o puntatori\) dal controllo.|  
|[GetWndClassName](../Topic/CAxWindow::GetWndClassName.md)|\(Proprietà statica\) recupera il nome della classe dell'oggetto predefinito `CAxWindow`.|  
|[QueryControl](../Topic/CAxWindow::QueryControl.md)|Recupera **IUnknown** del controllo ActiveX ospitato.|  
|[QueryHost](../Topic/CAxWindow::QueryHost.md)|Recupera il puntatore **IUnknown** dell'oggetto `CAxWindow`.|  
|[SetExternalDispatch](../Topic/CAxWindow::SetExternalDispatch.md)|Imposta l'interfaccia dispatch esterna utilizzata dall'oggetto `CAxWindow`.|  
|[SetExternalUIHandler](../Topic/CAxWindow::SetExternalUIHandler.md)|Imposta l'interfaccia **IDocHostUIHandler** esterni utilizzata dall'oggetto `CAxWindow`.|  
  
### Operatori  
  
|||  
|-|-|  
|[operatore \=](../Topic/CAxWindow::operator%20=.md)|Assegna **HWND** a un oggetto esistente di**CAxWindow**.|  
  
## Note  
 Questa classe fornisce metodi per modificare una finestra che ospita un controllo ActiveX.  L'inclusione viene fornito da "**AtlAxWin80"**, che esegue il wrapping `CAxWindow`.  
  
 La classe `CAxWindow` viene implementata come specializzazione di una classe `CAxWindowT`.  Questa visualizzazione è dichiarata come:  
  
 `typedef CAxWindowT<CWindow> CAxWindow;`  
  
 Se è necessario modificare la classe di base, è possibile utilizzare `CAxWindowT` e specificare una nuova classe base come argomento di modello.  
  
## Requisiti  
 **Header:** atlwin.h  
  
## Vedere anche  
 [Esempio ATLCON](../../top/visual-cpp-samples.md)   
 [CWindow Class](../../atl/reference/cwindow-class.md)   
 [Nozioni fondamentali sul controllo composito](../../atl/atl-composite-control-fundamentals.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Domande frequenti sul contenimento di controlli](../../atl/atl-control-containment-faq.md)