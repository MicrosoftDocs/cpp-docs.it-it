---
title: "COleSafeArray Class | Microsoft Docs"
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
  - "COleSafeArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "matrici [C++], safe"
  - "COleSafeArray class"
  - "ODBC, safe arrays"
  - "safe arrays"
ms.assetid: f45a5224-5f48-40ec-9ddd-287ef9740150
caps.latest.revision: 22
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COleSafeArray Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Classe per funzionare con le matrici di tipo e dalla dimensione arbitraria.  
  
## Sintassi  
  
```  
class COleSafeArray : public tagVARIANT  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleSafeArray::COleSafeArray](../Topic/COleSafeArray::COleSafeArray.md)|Costruisce un oggetto `COleSafeArray`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleSafeArray::AccessData](../Topic/COleSafeArray::AccessData.md)|Recupera un puntatore ai dati di matrice.|  
|[COleSafeArray::AllocData](../Topic/COleSafeArray::AllocData.md)|Alloca memoria per la matrice.|  
|[COleSafeArray::AllocDescriptor](../Topic/COleSafeArray::AllocDescriptor.md)|Alloca memoria per il descrittore sicuro di matrice.|  
|[COleSafeArray::Attach](../Topic/COleSafeArray::Attach.md)|Controllo consente della matrice esistente **VARIANT**oggetto `COleSafeArray`.|  
|[COleSafeArray::Clear](../Topic/COleSafeArray::Clear.md)|Libera tutti i dati in **VARIANT**sottostante.|  
|[COleSafeArray::Copy](../Topic/COleSafeArray::Copy.md)|Crea una copia di una matrice esistente.|  
|[COleSafeArray::Create](../Topic/COleSafeArray::Create.md)|Crea una matrice protetta.|  
|[COleSafeArray::CreateOneDim](../Topic/COleSafeArray::CreateOneDim.md)|Crea un oggetto unidimensionale `COleSafeArray`.|  
|[COleSafeArray::Destroy](../Topic/COleSafeArray::Destroy.md)|Elimina una matrice esistente.|  
|[COleSafeArray::DestroyData](../Topic/COleSafeArray::DestroyData.md)|Elimina i dati in una matrice protetta.|  
|[COleSafeArray::DestroyDescriptor](../Topic/COleSafeArray::DestroyDescriptor.md)|Elimina un descrittore di una matrice protetta.|  
|[COleSafeArray::Detach](../Topic/COleSafeArray::Detach.md)|Rimuove la matrice **VARIANT** dall'oggetto `COleSafeArray` in modo che i dati non siano stati sbloccati\).|  
|[COleSafeArray::GetByteArray](../Topic/COleSafeArray::GetByteArray.md)|Copia il contenuto della matrice protetta in [CByteArray](../../mfc/reference/cbytearray-class.md).|  
|[COleSafeArray::GetDim](../Topic/COleSafeArray::GetDim.md)|Restituisce il numero di dimensioni della matrice.|  
|[COleSafeArray::GetElement](../Topic/COleSafeArray::GetElement.md)|Recupera un singolo elemento di matrice protetta.|  
|[COleSafeArray::GetElemSize](../Topic/COleSafeArray::GetElemSize.md)|Restituisce la dimensione, in byte, di un elemento in una matrice protetta.|  
|[COleSafeArray::GetLBound](../Topic/COleSafeArray::GetLBound.md)|Restituisce il limite inferiore per qualsiasi dimensione di una matrice protetta.|  
|[COleSafeArray::GetOneDimSize](../Topic/COleSafeArray::GetOneDimSize.md)|Restituisce il numero di elementi nell'oggetto unidimensionale `COleSafeArray`.|  
|[COleSafeArray::GetUBound](../Topic/COleSafeArray::GetUBound.md)|Restituisce il limite superiore per qualsiasi dimensione di una matrice protetta.|  
|[COleSafeArray::Lock](../Topic/COleSafeArray::Lock.md)|Incrementa il conteggio dei blocchi di una matrice e posiziona un puntatore ai dati della matrice nel descrittore di matrice.|  
|[COleSafeArray::PtrOfIndex](../Topic/COleSafeArray::PtrOfIndex.md)|Restituisce un puntatore all'elemento indicizzato.|  
|[COleSafeArray::PutElement](../Topic/COleSafeArray::PutElement.md)|Assegna un singolo elemento della matrice.|  
|[COleSafeArray::Redim](../Topic/COleSafeArray::Redim.md)|Modifica meno significativo \(il più a destra\) associato a una matrice protetta.|  
|[COleSafeArray::ResizeOneDim](../Topic/COleSafeArray::ResizeOneDim.md)|Modifica il numero di elementi in un oggetto unidimensionale `COleSafeArray`.|  
|[COleSafeArray::UnaccessData](../Topic/COleSafeArray::UnaccessData.md)|Decrementa il conteggio dei blocchi di una matrice e invalidato il puntatore recuperato da `AccessData`.|  
|[COleSafeArray::Unlock](../Topic/COleSafeArray::Unlock.md)|Decrementa il conteggio dei blocchi di una matrice in modo che possa essere liberata o ridimensionata.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleSafeArray::operator LPCVARIANT](../Topic/COleSafeArray::operator%20LPCVARIANT.md)|Si accede alla struttura sottostante **VARIANT** dell'oggetto `COleSafeArray`.|  
|[COleSafeArray::operator LPVARIANT](../Topic/COleSafeArray::operator%20LPVARIANT.md)|Si accede alla struttura sottostante **VARIANT** dell'oggetto `COleSafeArray`.|  
|[COleSafeArray::operator \=](../Topic/COleSafeArray::operator%20=.md)|Valori delle copie di un oggetto `COleSafeArray` \(**SAFEARRAY**, **VARIANT**, `COleVariant`, o matrice `COleSafeArray` \).|  
|[COleSafeArray::operator \=\=](../Topic/COleSafeArray::operator%20==.md)|Confronta due matrici variabili \(**SAFEARRAY**, **VARIANT**, `COleVariant`, o `COleSafeArray` \).|  
|[COleSafeArray::operator \<\<](../Topic/COleSafeArray::operator%20%3C%3C.md)|Restituisce il contenuto di un oggetto `COleSafeArray` al contesto di dump.|  
  
## Note  
 `COleSafeArray` deriva dalla struttura di OLE **VARIANT**.  Le funzioni membro OLE **SAFEARRAY** sono disponibili tramite `COleSafeArray`nonché un insieme di funzioni membro specificamente progettato per le matrici unidimensionali di byte.  
  
## Gerarchia di ereditarietà  
 `tagVARIANT`  
  
 `COleSafeArray`  
  
## Requisiti  
 **Header:** afxdisp.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleVariant Class](../../mfc/reference/colevariant-class.md)   
 [CRecordset Class](../../mfc/reference/crecordset-class.md)   
 [CDatabase Class](../../mfc/reference/cdatabase-class.md)