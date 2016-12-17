---
title: "Metodo ComPtr::AsIID | Microsoft Docs"
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
  - "client/Microsoft::WRL::ComPtr::AsIID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AsIID (metodo)"
ms.assetid: d5a3cdb2-796d-4410-966a-847c0e8fb226
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo ComPtr::AsIID
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Restituisce un oggetto ComPtr che rappresenta l'interfaccia identificata dall'interfaccia ID specificata.  
  
## Sintassi  
  
```  
WRL_NOTHROW HRESULT AsIID(  
   REFIID riid,  
   _Out_ ComPtr<IUnknown>* p  
) const;  
```  
  
#### Parametri  
 `riid`  
 Un ID di interfaccia.  
  
 `p`  
 Se supportato, un puntatore doppio\- indiretto all'interfaccia specificata dal parametro `riid` ; in caso contrario, un puntatore a IUnknown.  
  
## Valore restituito  
 S\_OK se ha esito positivo; in caso contrario, un HRESULT, che indica l'errore.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe ComPtr](../windows/comptr-class.md)