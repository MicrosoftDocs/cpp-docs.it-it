---
title: "CAtlArray Class | Microsoft Docs"
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
  - "ATL::CAtlArray"
  - "ATL.CAtlArray"
  - "CAtlArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlArray class"
ms.assetid: 0b503aa8-2357-40af-a326-6654bf1da098
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAtlArray Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe implementa un oggetto matrice.  
  
## Sintassi  
  
```  
  
      template<   
   typename E,  
   class ETraits = CElementTraits< E >   
>  
class CAtlArray  
```  
  
#### Parametri  
 *E*  
 Il tipo di dati da archiviare nella matrice.  
  
 *ETraits*  
 Il codice utilizzato per copiare o spostare elementi.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[Add](../Topic/CAtlArray::Add.md)|Chiamare questo metodo per aggiungere un elemento all'oggetto matrice.|  
|[Append](../Topic/CAtlArray::Append.md)|Chiamare questo metodo per aggiungere il contenuto di una matrice alla fine di un altro.|  
|[AssertValid](../Topic/CAtlArray::AssertValid.md)|Chiamare questo metodo per confermare che l'oggetto matrice è valido.|  
|[CAtlArray](../Topic/CAtlArray::CAtlArray.md)|Costruttore.|  
|[~CAtlArray](../Topic/CAtlArray::~CAtlArray.md)|Il distruttore.|  
|[Copia](../Topic/CAtlArray::Copy.md)|Chiamare questo metodo per copiare elementi di una matrice a un'altra.|  
|[FreeExtra](../Topic/CAtlArray::FreeExtra.md)|Chiamare questo metodo per rimuovere tutti gli elementi vuoti la matrice.|  
|[GetAt](../Topic/CAtlArray::GetAt.md)|Chiamare questo metodo per recuperare un singolo elemento dall'oggetto matrice.|  
|[GetCount](../Topic/CAtlArray::GetCount.md)|Chiamare questo metodo per restituire il numero di elementi archiviati nella matrice.|  
|[GetData](../Topic/CAtlArray::GetData.md)|Chiamare questo metodo per restituire un puntatore al primo elemento della matrice.|  
|[InsertArrayAt](../Topic/CAtlArray::InsertArrayAt.md)|Chiamare questo metodo per inserire una matrice in un altro.|  
|[InsertAt](../Topic/CAtlArray::InsertAt.md)|Chiamare questo metodo per inserire un nuovo elemento \(o più copie di un elemento\) nell'oggetto matrice.|  
|[IsEmpty](../Topic/CAtlArray::IsEmpty.md)|Chiamare questo metodo per verificare se è vuota.|  
|[RemoveAll](../Topic/CAtlArray::RemoveAll.md)|Chiamare questo metodo per rimuovere tutti gli elementi dall'oggetto matrice.|  
|[RemoveAt](../Topic/CAtlArray::RemoveAt.md)|Chiamare questo metodo per eliminare uno o più elementi della matrice.|  
|[SetAt](../Topic/CAtlArray::SetAt.md)|Chiamare questo metodo per impostare il valore di un elemento nell'oggetto matrice.|  
|[SetAtGrow](../Topic/CAtlArray::SetAtGrow.md)|Chiamare questo metodo per impostare il valore di un elemento nell'oggetto matrice, espandendo la matrice come richiesto.|  
|[SetCount](../Topic/CAtlArray::SetCount.md)|Chiamare questo metodo per impostare la dimensione dell'oggetto matrice.|  
  
### Operatori  
  
|||  
|-|-|  
|[operatore &#91;&#93;](../Topic/CAtlArray::operator.md)|Chiamare questo operatore per restituire un riferimento a un elemento della matrice.|  
  
### Definizioni typedef  
  
|||  
|-|-|  
|[INARGTYPE](../Topic/CAtlArray::INARGTYPE.md)|Il tipo di dati da utilizzare per l'aggiunta di elementi della matrice.|  
|[OUTARGTYPE](../Topic/CAtlArray::OUTARGTYPE.md)|Il tipo di dati da utilizzare per recuperare gli elementi della matrice.|  
  
## Note  
 **CAtlArray** fornisce metodi per creare e gestire una matrice di elementi di un tipo definito da.  Sebbene simile alle matrici c standard, l'oggetto **CAtlArray** possa essere ridotti o ingranditi in modo dinamico in base alle esigenze.  L'indice di matrice inizia sempre nella posizione 0 e il limite superiore può essere corretto, o essere consentito per espandersi mentre i nuovi elementi aggiunti.  
  
 Per le matrici con un numero limitato di elementi, la classe [CSimpleArray](../../atl/reference/csimplearray-class.md) ATL può essere utilizzata.  
  
 **CAtlArray** è strettamente correlato alla classe **CArray** di MFC e verrà eseguito in un progetto MFC, anche se senza supporto della serializzazione.  
  
 Per ulteriori informazioni, vedere [Classi di raccolte ATL](../../atl/atl-collection-classes.md).  
  
## Requisiti  
 **Header:** atlcoll.h  
  
## Vedere anche  
 [Esempio MMXSwarm](../../top/visual-cpp-samples.md)   
 [esempio di DynamicConsumer](../../top/visual-cpp-samples.md)   
 [L'esempio UpdatePV](../../top/visual-cpp-samples.md)   
 [Esempio di marquee](../../top/visual-cpp-samples.md)   
 [CArray Class](../../mfc/reference/carray-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)