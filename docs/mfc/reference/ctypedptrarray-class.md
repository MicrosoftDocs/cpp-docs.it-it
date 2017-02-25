---
title: "CTypedPtrArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CTypedPtrArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTypedPtrArray class"
  - "pointer arrays"
ms.assetid: e3ecdf1a-a889-4156-92dd-ddbd36ccd919
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CTypedPtrArray Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un "wrapper" indipendente dai tipi per gli oggetti di classe `CPtrArray` o `CObArray`.  
  
## Sintassi  
  
```  
template< class BASE_CLASS, class TYPE >  
class CTypedPtrArray : public BASE_CLASS  
```  
  
#### Parametri  
 `BASE_CLASS`  
 Classe base della classe tipizzata di matrice di puntatore, deve essere una classe di matrice \(`CObArray` o `CPtrArray`\).  
  
 `TYPE`  
 Tipo degli elementi memorizzati nella matrice della classe base.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTypedPtrArray::Add](../Topic/CTypedPtrArray::Add.md)|Aggiungere un nuovo elemento alla fine di una matrice.  Ingrandito la matrice quando necessario|  
|[CTypedPtrArray::Append](../Topic/CTypedPtrArray::Append.md)|Aggiunge il contenuto di una matrice alla fine di un altro.  Ingrandito la matrice quando necessario|  
|[CTypedPtrArray::Copy](../Topic/CTypedPtrArray::Copy.md)|Copia un'altra matrice alla matrice, ingrandito la matrice se necessario.|  
|[CTypedPtrArray::ElementAt](../Topic/CTypedPtrArray::ElementAt.md)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|  
|[CTypedPtrArray::GetAt](../Topic/CTypedPtrArray::GetAt.md)|Restituisce il valore a un indice specificato.|  
|[CTypedPtrArray::InsertAt](../Topic/CTypedPtrArray::InsertAt.md)|Inserire un elemento \(o tutti gli elementi in un'altra matrice\) a un indice specificato.|  
|[CTypedPtrArray::SetAt](../Topic/CTypedPtrArray::SetAt.md)|Imposta il valore di indice specificato; matrice non consentita per lo sviluppo.|  
|[CTypedPtrArray::SetAtGrow](../Topic/CTypedPtrArray::SetAtGrow.md)|Imposta il valore di indice specificato; ingrandito la matrice se necessario.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTypedPtrArray::operator](../Topic/CTypedPtrArray::operator.md)|Imposta o ottiene l'elemento all'indice specificato.|  
  
## Note  
 Quando si utilizza `CTypedPtrArray` anziché `CPtrArray` o `CObArray`, le guide di funzionalità di controllo dei tipi C\+\+ eliminando gli errori causati dai tipi di puntatore non corrispondenti.  
  
 Inoltre, il wrapper `CTypedPtrArray` esegue gran parte del cast sarà richiesta che si utilizzi `CObArray` o `CPtrArray`.  
  
 Poiché le funzioni `CTypedPtrArray` sono inline, l'utilizzo di questo modello non influisce in modo significativo la dimensione o la velocità del codice.  
  
 Per ulteriori informazioni su l `CTypedPtrArray`, vedere gli articoli [Raccolte](../../mfc/collections.md) e [Le classi Basate su modelli](../../mfc/template-based-classes.md).  
  
## Gerarchia di ereditarietà  
 `BASE_CLASS`  
  
 `CTypedPtrArray`  
  
## Requisiti  
 **Header:** afxtempl.h  
  
## Vedere anche  
 [L'esempio MFC SI RACCOGLIE](../../top/visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CPtrArray Class](../../mfc/reference/cptrarray-class.md)   
 [CObArray Class](../../mfc/reference/cobarray-class.md)