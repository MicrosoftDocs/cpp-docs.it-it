---
title: "CStringData Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CStringData"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStringData class"
  - "shared classes, CStringData"
ms.assetid: 4e31b5ca-3dbe-4fd5-b692-8211fbfb2593
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 17
---
# CStringData Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe rappresenta i dati di un oggetto stringa.  
  
## Sintassi  
  
```  
  
struct CStringData  
  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[AddRef](../Topic/CStringData::AddRef.md)|Incrementa il conteggio dei riferimenti dell'oggetto dati in formato stringa.|  
|[data](../Topic/CStringData::data.md)|Recupera i dati di tipo carattere di un oggetto stringa.|  
|[IsLocked](../Topic/CStringData::IsLocked.md)|Determina se il buffer dell'oggetto stringa collegato è bloccato.|  
|[IsShared](../Topic/CStringData::IsShared.md)|Determina se il buffer dell'oggetto stringa collegato attualmente è condiviso.|  
|[Blocca](../Topic/CStringData::Lock.md)|Blocca il buffer dell'oggetto stringa collegato.|  
|[Release](../Topic/CStringData::Release.md)|Rilascia l'oggetto stringa specificato.|  
|[Sblocca](../Topic/CStringData::Unlock.md)|Sblocca il buffer dell'oggetto stringa collegato.|  
  
### Membri di dati  
  
|||  
|-|-|  
|[nAllocLength](../Topic/CStringData::nAllocLength.md)|Lunghezza dei dati allocati in `XCHAR`s \(escluso il di terminazione null\)|  
|[nDataLength](../Topic/CStringData::nDataLength.md)|Lunghezza dei dati attualmente utilizzati in `XCHAR`s \(escluso il di terminazione null\)|  
|[nRefs](../Topic/CStringData::nRefs.md)|Il conteggio dei riferimenti corrente dell'oggetto.|  
|[pStringMgr](../Topic/CStringData::pStringMgr.md)|Un puntatore all'amministratore della stringa dell'oggetto stringa.|  
  
## Note  
 Questa classe deve essere utilizzata solo dagli sviluppatori che implementano gli amministratori personalizzati della stringa.  Per ulteriori informazioni sugli amministratori personalizzati di stringa, vedere [Gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md)  
  
 Questa classe incapsula i vari tipi di informazioni e dati associati a un oggetto stringa più elevato, come oggetti [CStringT](../../atl-mfc-shared/reference/cstringt-class.md), [CSimpleStringT](../../atl-mfc-shared/reference/csimplestringt-class.md), o [CFixedStringT](../../atl-mfc-shared/reference/cfixedstringt-class.md).  Ogni oggetto stringa superiore contiene un puntatore al relativo oggetto collegato `CStringData`, consentendo agli oggetti stringa più al passaggio allo stesso oggetto dati in formato stringa.  Questa relazione viene rappresentata dal conteggio dei riferimenti \(`nRefs`l'oggetto `CStringData`.  
  
> [!NOTE]
>  In alcuni casi, un tipo stringa ad esempio **CFixedString**\) non condividerà un oggetto dati in formato stringa con più di un oggetto stringa più elevato.  Per ulteriori informazioni, vedere [Gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md).  
  
 Questi dati sono composti da:  
  
-   Il gestore di memoria \(di tipo\) [IAtlStringMgr](../../atl-mfc-shared/reference/iatlstringmgr-class.md)della stringa.  
  
-   La lunghezza corrente \([nDataLength](../Topic/CStringData::nDataLength.md)\) della stringa.  
  
-   La lunghezza allocata \([nAllocLength](../Topic/CStringData::nAllocLength.md)\) della stringa.  Per motivi di prestazioni, questo può essere diversa da quella corrente della stringa  
  
-   Il conteggio dei riferimenti corrente \([nRefs](../Topic/CStringData::nRefs.md)\) dell'oggetto `CStringData`.  Questo valore viene utilizzato per determinare quanti oggetti stringa condividono questo lo stesso oggetto `CStringData`.  
  
-   Il buffer di caratteri \([dati](../Topic/CStringData::data.md)\) della stringa.  
  
    > [!NOTE]
    >  Il buffer di caratteri dell'oggetto stringa allocata da gestione delle stringhe e viene aggiunto all'oggetto `CStringData`.  
  
## Requisiti  
 **Header:** atlsimpstr.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [ATL\/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)