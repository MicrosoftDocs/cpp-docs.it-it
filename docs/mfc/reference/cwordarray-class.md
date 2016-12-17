---
title: "CWordArray Class | Microsoft Docs"
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
  - "CWordArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "matrici [C++], indicizzati"
  - "CWordArray class"
  - "indexed arrays"
  - "INT"
  - "UINT"
  - "WORD data type"
ms.assetid: 2ba2c194-2c6c-40ff-9db4-e9dbe57e1f57
caps.latest.revision: 26
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CWordArray Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Supporta le matrici delle parole a 16 bit.  
  
## Sintassi  
  
```  
class CWordArray : public CObject  
```  
  
## Membri  
 Le funzioni membro `CWordArray` sono simili alle funzioni membro di classe [CObArray](../../mfc/reference/cobarray-class.md).  A causa di questa somiglianze, è possibile utilizzare la documentazione di riferimento `CObArray` per le specifiche di funzione membro.  Per visualizzare un puntatore [CObject](../../mfc/reference/cobject-class.md) come un parametro di funzione o valore restituito, sostituire **WORD**.  
  
 `CObject* CObArray::GetAt( int <nIndex> ) const;`  
  
 ad esempio, converte a  
  
 `WORD CWordArray::GetAt( int <nIndex> ) const;`  
  
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
 `CWordArray` include la macro [IMPLEMENT\_SERIAL](../Topic/IMPLEMENT_SERIAL.md) per supportare la serializzazione e il dump degli elementi.  Se una matrice di parole viene archiviata in un archivio, con un operatore di overload di inserimento o con la funzione membro [CObject::Serialize](../Topic/CObject::Serialize.md), ogni elemento, a sua volta, viene serializzato.  
  
> [!NOTE]
>  Prima di utilizzo di una matrice, utilizzare `SetSize` per stabilire le dimensioni e per allocare memoria per.  Se non si utilizza `SetSize`, aggiungere elementi alla matrice in modo che venga ridistribuito e alla copia di frequente.  Il frequente riallocazione e copiare sono inefficaci e possono frammentare la memoria.  
  
 Se è necessario un dump dei singoli elementi nella matrice, è necessario impostare la profondità del contesto di dump a 1 o superiore.  
  
 Per ulteriori informazioni su l `CWordArray`, vedere l'articolo [Raccolte](../../mfc/collections.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CWordArray`  
  
## Requisiti  
 **Header:** afxcoll.h  
  
## Vedere anche  
 [L'esempio MFC SI RACCOGLIE](../../top/visual-cpp-samples.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)