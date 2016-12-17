---
title: "CPtrArray Class | Microsoft Docs"
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
  - "CPtrArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "matrici [C++], generic"
  - "CPtrArray class"
  - "generic arrays"
ms.assetid: c23b87a3-bf84-49d6-a66b-61e999d0938a
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CPtrArray Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Supporta le matrici dei puntatori a void.  
  
## Sintassi  
  
```  
class CPtrArray : public CObject  
```  
  
## Membri  
 Le funzioni membro `CPtrArray` sono simili alle funzioni membro di classe [CObArray](../../mfc/reference/cobarray-class.md).  A causa di questa somiglianze, è possibile utilizzare la documentazione di riferimento `CObArray` per le specifiche di funzione membro.  Per visualizzare un puntatore `CObject` come un parametro di funzione o valore restituito, sostituire un puntatore a `void`.  
  
 `CObject* CObArray::GetAt( int <nIndex> ) const;`  
  
 ad esempio, converte a  
  
 `void* CPtrArray::GetAt( int <nIndex> ) const;`  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObArray::CObArray](../Topic/CObArray::CObArray.md)|Crea una matrice vuota.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObArray::Add](../Topic/CObArray::Add.md)|Aggiungere un elemento alla fine della matrice, ingrandito la matrice se necessario.|  
|[CObArray::Append](../Topic/CObArray::Append.md)|Aggiunge un'altra matrice alla matrice, ingrandito la matrice se necessario.|  
|[CObArray::Copy](../Topic/CObArray::Copy.md)|Copia un'altra matrice alla matrice, ingrandito la matrice se necessario.|  
|[CObArray::ElementAt](../Topic/CObArray::ElementAt.md)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|  
|[CObArray::FreeExtra](../Topic/CObArray::FreeExtra.md)|Libera la memoria inutilizzata sul limite superiore corrente.|  
|[CObArray::GetAt](../Topic/CObArray::GetAt.md)|Restituisce il valore a un indice specificato.|  
|[CObArray::GetCount](../Topic/CObArray::GetCount.md)|Ottiene il numero di elementi nella matrice.|  
|[CObArray::GetData](../Topic/CObArray::GetData.md)|Consente l'accesso a elementi nella matrice.  Può essere `NULL`.|  
|[CObArray::GetSize](../Topic/CObArray::GetSize.md)|Ottiene il numero di elementi nella matrice.|  
|[CObArray::GetUpperBound](../Topic/CObArray::GetUpperBound.md)|Restituisce il maggiore indice valido.|  
|[CObArray::InsertAt](../Topic/CObArray::InsertAt.md)|Inserire un elemento \(o tutti gli elementi in un'altra matrice\) a un indice specificato.|  
|[CObArray::IsEmpty](../Topic/CObArray::IsEmpty.md)|Determina se la matrice è vuota.|  
|[CObArray::RemoveAll](../Topic/CObArray::RemoveAll.md)|Rimuove tutti gli elementi della matrice.|  
|[CObArray::RemoveAt](../Topic/CObArray::RemoveAt.md)|Rimuove un elemento a un valore specifico.|  
|[CObArray::SetAt](../Topic/CObArray::SetAt.md)|Imposta il valore di indice specificato; matrice non consentita per lo sviluppo.|  
|[CObArray::SetAtGrow](../Topic/CObArray::SetAtGrow.md)|Imposta il valore di indice specificato; ingrandito la matrice se necessario.|  
|[CObArray::SetSize](../Topic/CObArray::SetSize.md)|Imposta il numero di elementi da includere nella matrice.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObArray::operator](../Topic/CObArray::operator.md)|Imposta o ottiene l'elemento all'indice specificato.|  
  
## Note  
 `CPtrArray` include la macro `IMPLEMENT_DYNAMIC` per l'accesso il tipo di runtime ed eseguire il dump a `CDumpContext` un oggetto.  Se è necessario un dump di singoli elementi di matrice di puntatori, è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
> [!NOTE]
>  Prima di utilizzo di una matrice, utilizzare `SetSize` per stabilire le dimensioni e per allocare memoria per.  Se non si utilizza `SetSize`, aggiungere elementi alla matrice in modo che venga ridistribuito e alla copia di frequente.  Il frequente riallocazione e copiare sono inefficaci e possono frammentare la memoria.  
  
 Matrici di puntatore non possono essere serializzati.  
  
 Quando una matrice di puntatore viene eliminato, oppure quando gli elementi vengono rimossi, solo i puntatori vengono rimossi, non le entità che fanno riferimento a.  
  
 Per ulteriori informazioni su l `CPtrArray`, vedere l'articolo [Raccolte](../../mfc/collections.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CPtrArray`  
  
## Requisiti  
 **Header:** afxcoll.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CObArray Class](../../mfc/reference/cobarray-class.md)