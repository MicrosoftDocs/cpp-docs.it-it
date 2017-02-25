---
title: "Classe CComSafeArray | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComSafeArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Classe CComSafeArray"
ms.assetid: ee349aef-33db-4c85-bd08-5d86a3c9d53a
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 29
---
# Classe CComSafeArray
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe è un wrapper della struttura **SAFEARRAY**.  
  
## Sintassi  
  
```  
template <  
   typename T,  
   VARTYPE _vartype = _ATL_AutomationType< T >::type  
>  
class CComSafeArray  
```  
  
#### Parametri  
 `T`  
 Tipo di dati da memorizzare nella matrice.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSafeArray::CComSafeArray](../Topic/CComSafeArray::CComSafeArray.md)|Costruttore.|  
|[CComSafeArray::~CComSafeArray](../Topic/CComSafeArray::~CComSafeArray.md)|Distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSafeArray::Add](../Topic/CComSafeArray::Add.md)|Aggiunge uno o più elementi o una struttura **SAFEARRAY** a `CComSafeArray`.|  
|[CComSafeArray::Attach](../Topic/CComSafeArray::Attach.md)|Collega una struttura **SAFEARRAY** a un oggetto `CComSafeArray`.|  
|[CComSafeArray::CopyFrom](../Topic/CComSafeArray::CopyFrom.md)|Copia il contenuto di una struttura **SAFEARRAY** nell'oggetto `CComSafeArray`.|  
|[CComSafeArray::CopyTo](../Topic/CComSafeArray::CopyTo.md)|Crea una copia dell'oggetto `CComSafeArray`.|  
|[CComSafeArray::Create](../Topic/CComSafeArray::Create.md)|Crea un oggetto `CComSafeArray`.|  
|[CComSafeArray::Destroy](../Topic/CComSafeArray::Destroy.md)|Elimina un oggetto `CComSafeArray`.|  
|[CComSafeArray::Detach](../Topic/CComSafeArray::Detach.md)|Scollega una struttura **SAFEARRAY** da un oggetto `CComSafeArray`.|  
|[CComSafeArray::GetAt](../Topic/CComSafeArray::GetAt.md)|Recupera un singolo elemento da una matrice unidimensionale.|  
|[CComSafeArray::GetCount](../Topic/CComSafeArray::GetCount.md)|Restituisce il numero di elementi nella matrice.|  
|[CComSafeArray::GetDimensions](../Topic/CComSafeArray::GetDimensions.md)|Restituisce il numero di dimensioni nella matrice.|  
|[CComSafeArray::GetLowerBound](../Topic/CComSafeArray::GetLowerBound.md)|Restituisce il limite inferiore di una determinata dimensione della matrice.|  
|[CComSafeArray::GetSafeArrayPtr](../Topic/CComSafeArray::GetSafeArrayPtr.md)|Restituisce l'indirizzo del membro dati `m_psa`.|  
|[CComSafeArray::GetType](../Topic/CComSafeArray::GetType.md)|Restituisce il tipo di dati memorizzati nella matrice.|  
|[CComSafeArray::GetUpperBound](../Topic/CComSafeArray::GetUpperBound.md)|Restituisce il limite superiore di una determinata dimensione della matrice.|  
|[CComSafeArray::IsSizable](../Topic/CComSafeArray::IsSizable.md)|Verifica se è possibile ridimensionare un oggetto `CComSafeArray`.|  
|[CComSafeArray::MultiDimGetAt](../Topic/CComSafeArray::MultiDimGetAt.md)|Recupera un singolo elemento da una matrice multidimensionale.|  
|[CComSafeArray::MultiDimSetAt](../Topic/CComSafeArray::MultiDimSetAt.md)|Imposta il valore di un elemento in una matrice multidimensionale.|  
|[CComSafeArray::Resize](../Topic/CComSafeArray::Resize.md)|Ridimensiona un oggetto `CComSafeArray`.|  
|[CComSafeArray::SetAt](../Topic/CComSafeArray::SetAt.md)|Imposta il valore di un elemento in una matrice unidimensionale.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSafeArray::operator LPSAFEARRAY](../Topic/CComSafeArray::operator%20LPSAFEARRAY.md)|Esegue il cast di un valore in un puntatore **SAFEARRAY**.|  
|[CComSafeArray::operator](../Topic/CComSafeArray::operator.md)|Recupera un elemento da una matrice.|  
|[CComSafeArray::operator \=](../Topic/CComSafeArray::operator%20=.md)|Operatore di assegnazione.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComSafeArray::m\_psa](../Topic/CComSafeArray::m_psa.md)|Questo membro dati contiene l'indirizzo della struttura **SAFEARRAY**.|  
  
## Note  
 `CComSafeArray` fornisce un wrapper per la classe [SAFEARRAY Data Type](http://msdn.microsoft.com/it-it/9ec8025b-4763-4526-ab45-390c5d8b3b1e), semplificando la creazione e la gestione di matrici unidimensionali e multidimensionali di quasi ogni tipo supportato da VARIANT.  
  
 `CComSafeArray` semplifica il passaggio delle matrici tra processi e fornisce anche protezione aggiuntiva poiché controlla i valori degli indici della matrice rispetto ai limiti superiore e inferiore.  
  
 Il limite inferiore di una classe `CComSafeArray` può iniziare con qualsiasi valore definito dall'utente; tuttavia, le matrici a cui si accede con C\+\+ usano un limite inferiore pari a 0. Altri linguaggi, quali Visual Basic, possono usare altri valori di delimitazione \(ad esempio da \-10 a 10\).  
  
 Usare [CComSafeArray::Create](../Topic/CComSafeArray::Create.md) per creare un oggetto `CComSafeArray` e [CComSafeArray::Destroy](../Topic/CComSafeArray::Destroy.md) per eliminarlo.  
  
 Una classe `CComSafeArray` può contenere i subset di tipi di dati VARIANT seguenti:  
  
|VARTYPE|Descrizione|  
|-------------|-----------------|  
|VT\_I1|char|  
|VT\_I2|short|  
|VT\_I4|int|  
|VT\_I4|long|  
|VT\_I8|longlong|  
|VT\_UI1|byte|  
|VT\_UI2|ushort|  
|VT\_UI4|uint|  
|VT\_UI4|ulong|  
|VT\_UI8|ulonglong|  
|VT\_R4|float|  
|VT\_R8|double|  
|VT\_DECIMAL|Puntatore decimale|  
|VT\_VARIANT|Puntatore Variant|  
|VT\_CY|Currency \(tipo di dati\)|  
  
## Requisiti  
 **Intestazione:** atlsafe.h  
  
## Esempio  
 [!code-cpp[NVC_ATL_Utilities#75](../../atl/codesnippet/CPP/ccomsafearray-class_1.cpp)]  
  
## Vedere anche  
 [SAFEARRAY Data Type](http://msdn.microsoft.com/it-it/9ec8025b-4763-4526-ab45-390c5d8b3b1e)   
 [CComSafeArray::Create](../Topic/CComSafeArray::Create.md)   
 [CComSafeArray::Destroy](../Topic/CComSafeArray::Destroy.md)   
 [Class Overview](../../atl/atl-class-overview.md)