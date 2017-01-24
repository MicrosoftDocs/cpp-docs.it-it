---
title: "CAtlFileMapping Class | Microsoft Docs"
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
  - "ATL::CAtlFileMapping<T>"
  - "ATL.CAtlFileMapping"
  - "ATL::CAtlFileMapping"
  - "CAtlFileMapping"
  - "ATL.CAtlFileMapping<T>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlFileMapping class"
ms.assetid: 899fc058-e05e-48b5-aca9-340403bb9e26
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAtlFileMapping Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe rappresenta un file mappato alla memoria, aggiungendo un operatore di cast ai metodi [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md).  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template <  
typename T= char  
>  
class CAtlFileMapping :  
public CAtlFileMappingBase  
```  
  
#### Parametri  
 `T`  
 Il tipo di dati utilizzati per l'operatore di cast.  
  
## Membri  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlFileMapping::operator T\*](../Topic/CAtlFileMapping::operator%20T*.md)|Consente la conversione implicita di oggetti `CAtlFileMapping` a `T`**\***.|  
  
## Note  
 Questa classe fornisce un singolo operatore di cast per consentire la conversione implicita di oggetti `CAtlFileMapping` a `T`**\***.  Altri membri vengono forniti dalla classe base, [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md).  
  
## Gerarchia di ereditarietà  
 [CAtlFileMappingBase](../../atl/reference/catlfilemappingbase-class.md)  
  
 `CAtlFileMapping`  
  
## Requisiti  
 **Header:** atlfile.h  
  
## Vedere anche  
 [CAtlFileMappingBase Class](../../atl/reference/catlfilemappingbase-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)