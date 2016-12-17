---
title: "CPtrList Class | Microsoft Docs"
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
  - "CPtrList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPtrList class"
  - "generic lists"
  - "elenchi, generic"
ms.assetid: 4139a09c-4338-4f42-9eea-51336120b43c
caps.latest.revision: 23
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CPtrList Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Supporta elenchi di puntatori void.  
  
## Sintassi  
  
```  
class CPtrList : public CObject  
```  
  
## Membri  
 Le funzioni membro di `CPtrList` sono simili alle funzioni membro di classe [CObList](../../mfc/reference/coblist-class.md).  A causa di questa somiglianze, è possibile utilizzare la documentazione di riferimento di `CObList` per le specifiche della funzione membro.  Ovunque sia visualizzato un puntatore `CObject` come parametro della funzione o valore restituito, sostituire un puntatore a `void`.  
  
 `CObject*& CObList::GetHead() const;`  
  
 ad esempio, converte a  
  
 `void*& CPtrList::GetHead() const;`  
  
## Note  
 `CPtrList` include la macro `IMPLEMENT_DYNAMIC` per supportare l'accesso del tipo run\-time ed eseguire l'operazione di dump dell'oggetto `CDumpContext`.  Se è necessario un dump di singoli elementi dell'elenco dei puntatori, è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
 Gli elenchi del puntatore non possono essere serializzati.  
  
 Quando un oggetto `CPtrList` viene eliminato, oppure quando gli elementi vengono rimossi, solo i puntatori vengono eliminati, non le entità che referenziano.  
  
 Per ulteriori informazioni sull'uso di `CPtrList`, consultare l'articolo [Raccolte](../../mfc/collections.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CPtrList`  
  
## Requisiti  
 **Header:** afxcoll.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CObList Class](../../mfc/reference/coblist-class.md)