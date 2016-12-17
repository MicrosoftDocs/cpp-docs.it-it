---
title: "You must implement IExtenderProviderUnk to extend this object. | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.VS_E_EXT_NONDISPATCHEXTENDEE"
ms.assetid: e0d4087f-9fa9-4fa9-92d9-7aed3103b2d8
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# You must implement IExtenderProviderUnk to extend this object.
L'oggetto Extendee è basato sull'interfaccia IUnknown anziché IDispatch.  
  
### Per correggere l'errore  
  
1.  Assicurarsi che il provider di Extender implementi IExtenderProviderUnk anziché IExtenderProvider.  
  
## Vedere anche  
 <xref:EnvDTE.IExtenderProviderUnk>   
 <xref:EnvDTE.IExtenderProvider>   
 <xref:EnvDTE.ObjectExtenders>