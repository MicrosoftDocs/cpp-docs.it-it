---
title: "CFixedStringT Class | Microsoft Docs"
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
  - "CFixedStringT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFixedStringT class"
  - "shared classes, CFixedStringT"
ms.assetid: 6d4171ba-3104-493a-a6cc-d515f4ba9a4b
caps.latest.revision: 17
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CFixedStringT Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe rappresenta un oggetto stringa con un buffer di caratteri fisso.  
  
## Sintassi  
  
```  
  
      template< class   
      StringType  
      , int   
      t_nChars  
       >    
class CFixedStringT : private CFixedStringMgr, public StringType  
```  
  
#### Parametri  
 `StringType`  
 Utilizzata come classe base per l'oggetto stringa fisso e può essere qualsiasi tipo base `CStringT`.  Alcuni esempi sono `CString`, `CStringA`e `CStringW`.  
  
 *t\_nChars*  
 Il numero di caratteri memorizzato nel buffer.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFixedStringT::CFixedStringT](../Topic/CFixedStringT::CFixedStringT.md)|Il costruttore per l'oggetto stringa.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFixedStringT::operator \=](../Topic/CFixedStringT::operator%20=.md)|Assegna un valore a un oggetto `CFixedStringT`.|  
  
## Note  
 Questa classe è un esempio di classe personalizzata della stringa basata su `CStringT`.  Sebbene abbastanza simili, le due classi diversi in termini di implementazione.  Le principali differenze tra `CFixedStringT` e `CStringT` sono:  
  
-   Il buffer di caratteri iniziale viene allocato come parte dell'oggetto e ha *t\_nChars*di dimensione.  In questo modo che l'oggetto **CFixedString** assegnato un blocco contiguo di memoria per motivi di prestazioni.  Tuttavia, se il contenuto di un oggetto `CFixedStringT` si compila oltre *i t\_nChars*, il buffer allocato in modo dinamico.  
  
-   Il buffer di caratteri per un oggetto `CFixedStringT` è sempre la stessa lunghezza \(*t\_nChars*\).  Non esiste un limite di dimensione del buffer per gli oggetti `CStringT`.  
  
-   Il gestore di memoria per `CFixedStringT` viene personalizzato in modo che la condivisione di un oggetto [CStringData](../../atl-mfc-shared/reference/cstringdata-class.md) tra due o più il objectsis `CFixedStringT` non consentito.  Gli oggetti di`CStringT` non presentano questa limitazione.  
  
 Per ulteriori informazioni sulla personalizzazione `CFixedStringT` e la gestione della memoria per gli oggetti stringa in genere [Gestione della memoria e CStringT](../../atl-mfc-shared/memory-management-with-cstringt.md)vedere.  
  
## Gerarchia di ereditarietà  
 `IAtlStringMgr`  
  
 `StringType`  
  
 `CFixedStringMgr`  
  
 `CFixedStringT`  
  
## Requisiti  
 **Header:** cstringt.h  
  
## Vedere anche  
 [CStringT Class](../../atl-mfc-shared/reference/cstringt-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [ATL\/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)