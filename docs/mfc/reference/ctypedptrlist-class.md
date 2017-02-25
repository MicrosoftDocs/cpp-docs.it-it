---
title: "CTypedPtrList Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CTypedPtrList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTypedPtrList class"
  - "linked lists [C++]"
  - "lists [C++]"
  - "pointer lists"
  - "template classes, CTypedPtrList class"
  - "type-safe collections"
ms.assetid: c273096e-1756-4340-864b-4a08b674a65e
caps.latest.revision: 24
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# CTypedPtrList Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un "wrapper" indipendente dai tipi per gli oggetti di classe `CPtrList`.  
  
## Sintassi  
  
```  
template< class BASE_CLASS, class TYPE >  
class CTypedPtrList : public BASE_CLASS  
```  
  
#### Parametri  
 `BASE_CLASS`  
 Classe base della classe tipizzata dell'elenco del puntatore, deve essere una classe dell'elenco del puntatore \(`CObList` o `CPtrList`\).  
  
 `TYPE`  
 Tipo degli elementi archiviati nell'elenco di classi base.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTypedPtrList::AddHead](../Topic/CTypedPtrList::AddHead.md)|Aggiunge un elemento \(o tutti gli elementi in un altro elenco\) all'inizio dell'elenco \(effettua una nuova intestazione\).|  
|[CTypedPtrList::AddTail](../Topic/CTypedPtrList::AddTail.md)|Aggiunge un elemento \(o tutti gli elementi in un altro elenco\) la parte finale di elenco \(effettua un nuovo elemento tail\).|  
|[CTypedPtrList::GetAt](../Topic/CTypedPtrList::GetAt.md)|Ottiene l'elemento nella posizione specificata.|  
|[CTypedPtrList::GetHead](../Topic/CTypedPtrList::GetHead.md)|Restituisce l'elemento head dell'elenco \(non può essere vuoto.|  
|[CTypedPtrList::GetNext](../Topic/CTypedPtrList::GetNext.md)|Ottiene l'elemento seguente per l'iterazione.|  
|[CTypedPtrList::GetPrev](../Topic/CTypedPtrList::GetPrev.md)|Ottiene l'elemento precedente per l'iterazione.|  
|[CTypedPtrList::GetTail](../Topic/CTypedPtrList::GetTail.md)|Restituisce l'elemento tail di elenco \(non può essere vuoto.|  
|[CTypedPtrList::RemoveHead](../Topic/CTypedPtrList::RemoveHead.md)|Rimuove l'elemento dall'intestazione dell'elenco.|  
|[CTypedPtrList::RemoveTail](../Topic/CTypedPtrList::RemoveTail.md)|Rimuove l'elemento dalla coda dell'elenco.|  
|[CTypedPtrList::SetAt](../Topic/CTypedPtrList::SetAt.md)|Imposta l'elemento nel percorso specificato.|  
  
## Note  
 Quando si utilizza `CTypedPtrList` anziché `CObList` o `CPtrList`, le guide di funzionalità di controllo dei tipi C\+\+ eliminando gli errori causati dai tipi di puntatore non corrispondenti.  
  
 Inoltre, il wrapper `CTypedPtrList` esegue gran parte del cast sarà richiesta che si utilizzi `CObList` o `CPtrList`.  
  
 Poiché le funzioni `CTypedPtrList` sono inline, l'utilizzo di questo modello non influisce in modo significativo la dimensione o la velocità del codice.  
  
 Gli elenchi derivati da `CObList` possono essere serializzati, ma quelli derivati da `CPtrList` non è.  
  
 Quando un oggetto `CTypedPtrList` viene eliminato, oppure quando gli elementi vengono rimossi, solo i puntatori vengono rimossi, non le entità che fanno riferimento a.  
  
 Per ulteriori informazioni su l `CTypedPtrList`, vedere gli articoli [Raccolte](../../mfc/collections.md) e [Le classi Basate su modelli](../../mfc/template-based-classes.md).  
  
## Esempio  
 In questo esempio viene creata un'istanza `CTypedPtrList`, viene aggiunto un oggetto, serializza l'elenco su disco e quindi rimuove l'oggetto:  
  
 [!code-cpp[NVC_MFCCollections#110](../../mfc/codesnippet/CPP/ctypedptrlist-class_1.cpp)]  
  
 [!code-cpp[NVC_MFCCollections#111](../../mfc/codesnippet/CPP/ctypedptrlist-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 `BASE_CLASS`  
  
 `_CTypedPtrList`  
  
 `CTypedPtrList`  
  
## Requisiti  
 **Header:** afxtempl.h  
  
## Vedere anche  
 [L'esempio MFC SI RACCOGLIE](../../top/visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CPtrList Class](../../mfc/reference/cptrlist-class.md)   
 [CObList Class](../../mfc/reference/coblist-class.md)