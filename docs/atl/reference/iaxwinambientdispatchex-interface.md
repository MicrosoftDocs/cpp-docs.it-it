---
title: "IAxWinAmbientDispatchEx Interface | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.IAxWinAmbientDispatchEx"
  - "IAxWinAmbientDispatchEx"
  - "ATL::IAxWinAmbientDispatchEx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IAxWinAmbientDispatchEx interface"
ms.assetid: 2c25e079-6128-4278-bc72-b2c6195ba7ef
caps.latest.revision: 25
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IAxWinAmbientDispatchEx Interface
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa interfaccia implementate le proprietà di ambiente aggiuntivi per un controllo ospitato.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
      MIDL_INTERFACE( "B2D0778B - AC99 - 4c58 - A5C8 - E7724E5316B5" )  
IAxWinAmbientDispatchEx : public IAxWinAmbientDispatch  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[SetAmbientDispatch](../Topic/IAxWinAmbientDispatchEx::SetAmbientDispatch.md)|Questo metodo viene chiamato per completareinterfaccia predefinita della proprietà di ambiente con un'interfaccia definita dall'utente.|  
  
## Note  
 Includere questa interfaccia nelle applicazioni collegate staticamente in ATL e attivare i controlli ActiveX, soprattutto controlli ActiveX ATL con proprietà di ambiente.  A esclusione di questa interfaccia genererà questa asserzione: "Si è omesso di passare il LIBID a CComModule::Init?"  
  
 Questa interfaccia è esposta dagli oggetti di hosting di controlli ActiveX ATL.  Derivato da [IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md), `IAxWinAmbientDispatchEx` aggiunge un metodo che consente di completare l'interfaccia di proprietà di ambiente fornita da ATL con uno dei propri.  
  
 [AXHost](https://msdn.microsoft.com/en-us/library/system.windows.forms.axhost.aspx) tenta di caricare le informazioni sui tipi per `IAxWinAmbientDispatch` e `IAxWinAmbientDispatchEx` dalla libreria dei tipi contenente il codice.  
  
 Se si collega a ATL90.dll, **AXHost** carica le informazioni sul tipo dalla libreria dei tipi nella DLL.  
  
 Vedere [Controlli ActiveX di hosting mediante ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) per ulteriori informazioni.  
  
## Requisiti  
 La definizione di questa interfaccia è disponibile in diversi formati, come illustrato nella tabella seguente.  
  
|Tipo di definizione|File|  
|-------------------------|----------|  
|IDL|atliface.idl|  
|Libreria dei tipi|ATL.dll|  
|C\+\+|atliface.h \(anche incluso in ATLBase.h\)|  
  
## Vedere anche  
 [IAxWinAmbientDispatch Interface](../../atl/reference/iaxwinambientdispatch-interface.md)