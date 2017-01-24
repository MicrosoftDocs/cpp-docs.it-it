---
title: "CStringArray Class | Microsoft Docs"
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
  - "CStringArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "matrici [C++], stringhe"
  - "CStringArray class"
  - "string arrays"
  - "stringhe [C++], raccolte"
ms.assetid: 6c637e06-bba8-4c08-b0fc-cf8cb067ce34
caps.latest.revision: 24
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CStringArray Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Supporta matrici di oggetti [CString](../../atl-mfc-shared/using-cstring.md).  
  
## Sintassi  
  
```  
class CStringArray : public CObject  
```  
  
## Membri  
 Le funzioni membro di `CStringArray` sono simili alle funzioni membro della classe [CObArray](../../mfc/reference/cobarray-class.md).  Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CObArray`.  Ogni volta che un puntatore `CObject` appare come valore restituito, sostituire con un oggetto [CString](../../atl-mfc-shared/using-cstring.md) \(non un puntatore [CString](../../atl-mfc-shared/using-cstring.md)\).  Ogni volta che un puntatore `CObject` appare come parametro di funzione, sostituire con un `LPCTSTR`.  
  
 `CObject* CObArray::GetAt( int <nIndex> ) const;`  
  
 ad esempio, si converte in  
  
 `CString CStringArray::GetAt( int <nIndex> ) const;`  
  
 e  
  
 `void SetAt( int <nIndex>, CObject* <newElement> )`  
  
 si converte in  
  
 `void SetAt( int <nIndex>, LPCTSTR <newElement> )`  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObArray::CObArray](../Topic/CObArray::CObArray.md)|Costruisce una matrice vuota.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObArray::Add](../Topic/CObArray::Add.md)|Aggiunge un elemento alla fine della matrice; se necessario, aumenta le dimensioni della matrice.|  
|[CObArray::Append](../Topic/CObArray::Append.md)|Accoda alla matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|  
|[CObArray::Copy](../Topic/CObArray::Copy.md)|Copia nella matrice un'altra matrice; se necessario, aumenta le dimensioni della matrice.|  
|[CObArray::ElementAt](../Topic/CObArray::ElementAt.md)|Restituisce un riferimento temporaneo al puntatore dell'elemento nella matrice.|  
|[CObArray::FreeExtra](../Topic/CObArray::FreeExtra.md)|Libera tutta la memoria non utilizzata oltre limite il superiore corrente.|  
|[CObArray::GetAt](../Topic/CObArray::GetAt.md)|Restituisce il valore in corrispondenza di un indice specificato.|  
|[CObArray::GetCount](../Topic/CObArray::GetCount.md)|Ottiene il numero di elementi nella matrice.|  
|[CObArray::GetData](../Topic/CObArray::GetData.md)|Consente l'accesso a tutti gli elementi nella matrice.  Può essere **NULL**.|  
|[CObArray::GetSize](../Topic/CObArray::GetSize.md)|Ottiene il numero di elementi nella matrice.|  
|[CObArray::GetUpperBound](../Topic/CObArray::GetUpperBound.md)|Restituisce il massimo indice valido.|  
|[CObArray::InsertAt](../Topic/CObArray::InsertAt.md)|Inserisce un elemento \(o tutti gli elementi di un'altra matrice\) in corrispondenza di un indice specificato.|  
|[CObArray::IsEmpty](../Topic/CObArray::IsEmpty.md)|Determina se la matrice è vuota.|  
|[CObArray::RemoveAll](../Topic/CObArray::RemoveAll.md)|Rimuove tutti gli elementi dalla matrice.|  
|[CObArray::RemoveAt](../Topic/CObArray::RemoveAt.md)|Rimuove un elemento in corrispondenza di un indice specificato.|  
|[CObArray::SetAt](../Topic/CObArray::SetAt.md)|Imposta il valore per un indice specificato; l'aumento di dimensioni della matrice non è consentito.|  
|[CObArray::SetAtGrow](../Topic/CObArray::SetAtGrow.md)|Imposta il valore per un indice specificato; se necessario, aumenta le dimensioni della matrice.|  
|[CObArray::SetSize](../Topic/CObArray::SetSize.md)|Imposta il numero di elementi che la matrice deve contenere.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CObArray::operator](../Topic/CObArray::operator.md)|Imposta o ottiene l'elemento in corrispondenza dell'indice specificato.|  
  
## Note  
 `CStringArray` incorpora la macro `IMPLEMENT_SERIAL` per supportare la serializzazione e il dump dei relativi elementi.  Se una matrice di oggetti `CString` viene memorizzata in un archivio, con un operatore di inserimento di overload o con la funzione membro `Serialize`, ogni elemento viene serializzato a turno.  
  
> [!NOTE]
>  Prima di usare una matrice, usare `SetSize` per determinarne le dimensioni e allocare la necessaria memoria.  Se non si usa `SetSize`, l'aggiunta di elementi alla matrice ne causa la riallocazione e la copia frequente.  Le operazioni di riallocazione e copia frequenti sono inefficienti e possono frammentare la memoria.  
  
 Se è necessario un dump di singoli elementi di tipo stringa nella matrice, è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
 Quando una matrice `CString` viene eliminata o i relativi elementi vengono rimossi, viene liberata la memoria di stringa appropriata.  
  
 Per altre informazioni sull'uso di `CStringArray`, vedere l'articolo [Raccolte](../../mfc/collections.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CStringArray`  
  
## Requisiti  
 **Intestazione:** afxcoll.h  
  
## Vedere anche  
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)