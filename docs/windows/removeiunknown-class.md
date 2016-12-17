---
title: "Classe RemoveIUnknown | Microsoft Docs"
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
  - "client/Microsoft::WRL::Details::RemoveIUnknown"
dev_langs: 
  - "C++"
ms.assetid: 998e711a-7d1a-44c6-a016-e6167aa40863
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe RemoveIUnknown
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
template <  
   typename T  
>  
struct RemoveIUnknown;  
  
template <  
   typename T  
>  
class RemoveIUnknown : public T;  
```  
  
#### Parametri  
 `T`  
 Una classe.  
  
## Osservazioni  
 Costruisce un tipo che equivale a un tipo base `IUnknown`, ma è `QueryInterface`non virtuale, `AddRef`e funzioni membro `Release`.  
  
 Per impostazione predefinita, i metodi COM forniscono `QueryInterface`virtuale, `AddRef`e il rilascio dei metodi.  Tuttavia, `ComPtr` non richiede un sovraccarico dei metodi virtuali.  `RemoveIUnknown` elimina il sovraccarico fornendo `QueryInterface`privato e non virtuale, `AddRef`e i metodi `Release`.  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`ReturnType`|Un sinonimo di un tipo equivalente al parametro del template `T` ma dispone di membri non\-virtuali di IUnknown.|  
  
## Gerarchia di ereditarietà  
 `T`  
  
 `RemoveIUnknown`  
  
## Requisiti  
 **Intestazione:** client.h  
  
 **Spazio dei nomi:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)