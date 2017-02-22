---
title: "CObArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CObArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "matrici [C++], tipo Object"
  - "matrici [C++], puntatori"
  - "CObArray class"
  - "matrici di oggetti, CObArray class"
ms.assetid: 27894efd-2370-4776-9ed9-24a98492af17
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 22
---
# CObArray Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Supporta le matrici di puntatori a `CObject`.  
  
## Sintassi  
  
```  
class CObArray : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObArray::CObArray](../Topic/CObArray::CObArray.md)|Crea una matrice vuota per puntatori a `CObject`.|  
  
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
|[CObArray::GetData](../Topic/CObArray::GetData.md)|Consente l'accesso a elementi nella matrice.  Può essere **NULL**.|  
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
 Queste matrici di oggetti sono simili alle matrici c, ma possono essere ridotti o ingranditi in modo dinamico in base alle esigenze.  
  
 Gli indici di matrice iniziano sempre nella posizione 0.  È possibile decidere se correggere il limite superiore o consentire la matrice si espande quando si aggiungono elementi al limite corrente.  Viene allocata memoria in modo contiguo al limite superiore, anche se alcuni elementi sono null.  
  
 In Win32, la dimensione di un oggetto `CObArray` è limitata solo alla memoria disponibile.  
  
 Come matrice di tipo c, il tempo di accesso per un elemento indicizzato `CObArray` è costante e è indipendente dalla dimensione della matrice.  
  
 `CObArray` include la macro `IMPLEMENT_SERIAL` per supportare la serializzazione e il dump degli elementi.  Se una matrice di puntatori a `CObject` viene archiviata in un archivio, con l'operatore di overload di inserimento o con la funzione membro `Serialize`, ogni elemento `CObject`, a sua volta, viene serializzato al relativo indice della matrice.  
  
 Se è necessario un dump degli elementi `CObject` dell'utente in una matrice, è necessario impostare la profondità dell'oggetto `CDumpContext` a 1 o superiore.  
  
 Quando un oggetto `CObArray` viene eliminato, oppure quando gli elementi vengono rimossi, solo i puntatori `CObject` vengono eliminati, non oggetti che fanno riferimento.  
  
> [!NOTE]
>  Prima di utilizzo di una matrice, utilizzare `SetSize` per stabilire le dimensioni e per allocare memoria per.  Se non si utilizza `SetSize`, aggiungere elementi alla matrice in modo che venga ridistribuito e alla copia di frequente.  Il frequente riallocazione e copiare sono inefficaci e possono frammentare la memoria.  
  
 La derivazione della classe di matrice è simile alla derivazione dell'elenco.  Per informazioni dettagliate sulla derivazione di una classe per scopi specifici dell'elenco, vedere l'articolo [Raccolte](../../mfc/collections.md).  
  
> [!NOTE]
>  È necessario utilizzare la macro `IMPLEMENT_SERIAL` nell'implementazione della classe derivata se si desidera serializzare la matrice.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CObArray`  
  
## Requisiti  
 **Header:** afxcoll.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CStringArray Class](../../mfc/reference/cstringarray-class.md)   
 [CPtrArray Class](../../mfc/reference/cptrarray-class.md)   
 [CByteArray Class](../../mfc/reference/cbytearray-class.md)   
 [CWordArray Class](../../mfc/reference/cwordarray-class.md)   
 [CDWordArray Class](../../mfc/reference/cdwordarray-class.md)