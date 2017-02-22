---
title: "CTypedPtrMap Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CTypedPtrMap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTypedPtrMap class"
  - "mappe"
  - "pointer maps"
  - "template classes, CTypedPtrMap class"
  - "type-safe collections"
ms.assetid: 9f377385-c6e9-4471-8b40-8fe220c50164
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CTypedPtrMap Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un "wrapper" indipendente dai tipi per gli oggetti di classi `CMapPtrToPtr`, `CMapPtrToWord`, `CMapWordToPtr`e `CMapStringToPtr`di puntatore\- mapping.  
  
## Sintassi  
  
```  
template< class BASE_CLASS, class KEY, class VALUE >  
class CTypedPtrMap : public BASE_CLASS  
```  
  
#### Parametri  
 `BASE_CLASS`  
 Classe base della classe tipizzata di mapping del puntatore, deve essere una classe di mapping del puntatore \(`CMapPtrToPtr`, `CMapPtrToWord`, `CMapWordToPtr`, o `CMapStringToPtr`\).  
  
 `KEY`  
 Classe dell'oggetto utilizzato come chiave al mapping.  
  
 `VALUE`  
 Classe dell'oggetto archiviato nella mappa.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTypedPtrMap::GetNextAssoc](../Topic/CTypedPtrMap::GetNextAssoc.md)|Ottiene l'elemento seguente per l'iterazione.|  
|[CTypedPtrMap::Lookup](../Topic/CTypedPtrMap::Lookup.md)|Restituisce `KEY` basato su `VALUE`.|  
|[CTypedPtrMap::RemoveKey](../Topic/CTypedPtrMap::RemoveKey.md)|Rimuove un elemento specificato da una chiave.|  
|[CTypedPtrMap::SetAt](../Topic/CTypedPtrMap::SetAt.md)|Inserisce un elemento nella mappa, sostituire un elemento esistente se una chiave corrispondente viene trovata.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTypedPtrMap::operator](../Topic/CTypedPtrMap::operator.md)|Inserisce un elemento nella mappa.|  
  
## Note  
 Quando si utilizza `CTypedPtrMap`, le guide di funzionalità di controllo dei tipi C\+\+ eliminando gli errori causati dai tipi di puntatore non corrispondenti.  
  
 Poiché le funzioni `CTypedPtrMap` sono inline, l'utilizzo di questo modello non influisce in modo significativo la dimensione o la velocità del codice.  
  
 Per ulteriori informazioni su l `CTypedPtrMap`, vedere gli articoli [Raccolte](../../mfc/collections.md) e [Le classi Basate su modelli](../../mfc/template-based-classes.md).  
  
## Gerarchia di ereditarietà  
 `BASE_CLASS`  
  
 `CTypedPtrMap`  
  
## Requisiti  
 **Header:** afxtempl.h  
  
## Vedere anche  
 [L'esempio MFC SI RACCOGLIE](../../top/visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CMapPtrToPtr Class](../../mfc/reference/cmapptrtoptr-class.md)   
 [CMapPtrToWord Class](../../mfc/reference/cmapptrtoword-class.md)   
 [CMapWordToPtr Class](../../mfc/reference/cmapwordtoptr-class.md)   
 [CMapStringToPtr Class](../../mfc/reference/cmapstringtoptr-class.md)