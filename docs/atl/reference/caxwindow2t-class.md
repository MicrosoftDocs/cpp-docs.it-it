---
title: "CAxWindow2T Class | Microsoft Docs"
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
  - "ATL::CAxWindow2T<TBase>"
  - "ATL::CAxWindow2T"
  - "CAxWindow2T"
  - "ATL.CAxWindow2T<TBase>"
  - "ATL.CAxWindow2T"
  - "CAxWindow2"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAxWindow2 class"
ms.assetid: b87bc943-7991-4537-b902-2138d7f4d837
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAxWindow2T Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per modificare una finestra che ospita un controllo ActiveX e dispone anche di supporto per ospitare controlli ActiveX con licenza.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template <   
class TBase= CWindow   
>  
class CAxWindow2T :   
public CAxWindowT< TBase >  
```  
  
#### Parametri  
 *TBase*  
 La classe da cui deriva `CAxWindowT`.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAxWindow2T::CAxWindow2T](../Topic/CAxWindow2T::CAxWindow2T.md)|Costruisce un oggetto `CAxWindow2T`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAxWindow2T::Create](../Topic/CAxWindow2T::Create.md)|Crea una finestra host.|  
|[CAxWindow2T::CreateControlLic](../Topic/CAxWindow2T::CreateControlLic.md)|Crea un controllo ActiveX con licenza, la inizializza e lo ospita nella finestra specificata.|  
|[CAxWindow2T::CreateControlLicEx](../Topic/CAxWindow2T::CreateControlLicEx.md)|Crea un controllo ActiveX con licenza, la inizializza, lo ospita nella finestra specificata e recupera un puntatore a interfaccia \(o puntatori\) dal controllo.|  
|[CAxWindow2T::GetWndClassName](../Topic/CAxWindow2T::GetWndClassName.md)|Metodo statico che recupera il nome della classe della finestra.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAxWindow2T::operator \=](../Topic/CAxWindow2T::operator%20=.md)|Assegna `HWND` a un oggetto esistente `CAxWindow2T`.|  
  
## Note  
 `CAxWindow2T` fornisce metodi per modificare una finestra che ospita un controllo ActiveX.  `CAxWindow2T` dispone anche di supporto per ospitare controlli ActiveX con licenza.  L'inclusione viene fornito da "**AtlAxWinLic80**", che esegue il wrapping `CAxWindow2T`.  
  
 La classe `CAxWindow2` viene implementata come specializzazione di una classe `CAxWindow2T`.  Questa visualizzazione è dichiarata come:  
  
 `typedef CAxWindow2T <CWindow> CAxWindow2;`  
  
> [!NOTE]
>  i membri di`CAxWindowT` documentati in [CAxWindow](../../atl/reference/caxwindow-class.md).  
  
 Vedere [Controlli ActiveX di hosting mediante ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che utilizza i membri di questa classe.  
  
## Gerarchia di ereditarietà  
 `TBase`  
  
 `CAxWindowT`  
  
 `CAxWindow2T`  
  
## Requisiti  
 **Header:** atlwin.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)   
 [Domande frequenti sul contenimento di controlli](../../atl/atl-control-containment-faq.md)