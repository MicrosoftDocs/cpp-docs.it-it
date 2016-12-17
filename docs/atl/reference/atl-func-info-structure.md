---
title: "_ATL_FUNC_INFO Structure | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_ATL_FUNC_INFO"
  - "ATL::_ATL_FUNC_INFO"
  - "ATL._ATL_FUNC_INFO"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_ATL_FUNC_INFO structure"
  - "ATL_FUNC_INFO structure"
ms.assetid: 441ebe2c-f971-47de-9f52-a258e8d6f88e
caps.latest.revision: 21
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# _ATL_FUNC_INFO Structure
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Contiene informazioni sul tipo utilizzate per descrivere un metodo o una proprietà su un'interfaccia dispatch.  
  
## Sintassi  
  
```  
  
      struct _ATL_FUNC_INFO{  
   CALLCONV cc;  
   VARTYPE vtReturn;  
   SHORT nParams;  
   VARTYPE pVarTypes[_ATL_MAX_VARTYPES];  
};  
```  
  
## Membri  
 **cc**  
 La convenzione di chiamata.  Nell'utilizzo di questa struttura alla classe [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md), questo membro deve essere **CC\_STDCALL**.  `CC_CDECL` è l'unica opzione supportati in Windows CE per il campo `CALLCONV` della struttura `_ATL_FUNC_INFO`.  Qualsiasi altro valore è pertanto non supportato il comportamento indefinito.  
  
 **vtReturn**  
 Il tipo di variant il valore restituito della funzione.  
  
 **nParams**  
 Il numero dei parametri di funzione.  
  
 **pVarTypes**  
 Una matrice di tipi di variant dei parametri di funzione.  
  
## Note  
 Internamente, ATL utilizza questa struttura per conservare informazioni ottenute da una libreria dei tipi.  Potrebbe essere necessario modificare direttamente questa struttura se fornite informazioni sui tipi per un gestore eventi utilizzato con la classe [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) e la macro [SINK\_ENTRY\_INFORMATION](../Topic/SINK_ENTRY_INFO.md).  
  
## Esempio  
 Dato un metodo di interfaccia dispatch definita in IDL:  
  
 [!code-cpp[NVC_ATL_Windowing#139](../../atl/codesnippet/CPP/atl-func-info-structure_1.idl)]  
  
 definire una struttura `_ATL_FUNC_INFO` :  
  
 [!code-cpp[NVC_ATL_Windowing#140](../../atl/codesnippet/CPP/atl-func-info-structure_2.h)]  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [Strutture](../../atl/reference/atl-structures.md)   
 [IDispEventSimpleImpl Class](../../atl/reference/idispeventsimpleimpl-class.md)   
 [SINK\_ENTRY\_INFO](../Topic/SINK_ENTRY_INFO.md)