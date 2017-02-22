---
title: "CComVariant Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComVariant"
  - "ATL::CComVariant"
  - "CComVariant"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComVariant class"
  - "VARIANT macro"
  - "VARIANT macro, ATL"
ms.assetid: 4d31149c-d005-44b5-a509-10f84afa2b61
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 29
---
# CComVariant Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe esegue il wrapping del tipo `VARIANT`, fornendo un membro che indica il tipo di dati archiviati.  
  
## Sintassi  
  
```  
  
class CComVariant : public tagVARIANT  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComVariant::CComVariant](../Topic/CComVariant::CComVariant.md)|Costruttore.|  
|[CComVariant::~CComVariant](../Topic/CComVariant::~CComVariant.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComVariant::Attach](../Topic/CComVariant::Attach.md)|Associa **VARIANT**oggetto `CComVariant`.|  
|[CComVariant::ChangeType](../Topic/CComVariant::ChangeType.md)|Converte l'oggetto `CComVariant` in un nuovo tipo.|  
|[CComVariant::Clear](../Topic/CComVariant::Clear.md)|Rimuove l'oggetto `CComVariant`.|  
|[CComVariant::Copy](../Topic/CComVariant::Copy.md)|Copia **VARIANT**oggetto `CComVariant`.|  
|[CComVariant::CopyTo](../Topic/CComVariant::CopyTo.md)|Copiare il contenuto dell'oggetto `CComVariant`.|  
|[CComVariant::Detach](../Topic/CComVariant::Detach.md)|Rimuove **VARIANT** sottostante dall'oggetto `CComVariant`.|  
|[CComVariant::GetSize](../Topic/CComVariant::GetSize.md)|Restituisce le dimensioni in numero di byte del contenuto dell'oggetto `CComVariant`.|  
|[CComVariant::ReadFromStream](../Topic/CComVariant::ReadFromStream.md)|Carica **VARIANT** da un flusso.|  
|[CComVariant::SetByRef](../Topic/CComVariant::SetByRef.md)|Inizializza l'oggetto `CComVariant` e impostare il membro **vt** a **VT\_BYREF**.|  
|[CComVariant::WriteToStream](../Topic/CComVariant::WriteToStream.md)|Salva **VARIANT** sottostante a un flusso.|  
  
### Operatori pubblici  
  
|||  
|-|-|  
|[CComVariant::operator \<](../Topic/CComVariant::operator%20%3C.md)|Indica se l'oggetto `CComVariant` è minore **VARIANT**specificato.|  
|[CComVariant::operator \>](../Topic/CComVariant::operator%20%3E.md)|Indica se l'oggetto `CComVariant` è maggiore **VARIANT**specificato.|  
|[operatore\! \=](../Topic/CComVariant::operator%20!=.md)|Indica se l'oggetto `CComVariant` non è uguale a **VARIANT**specificato.|  
|[operatore \=](../Topic/CComVariant::operator%20=.md)|Assegna un valore all'oggetto `CComVariant`.|  
|[\=\= dell'operatore](../Topic/CComVariant::operator%20==.md)|Indica se l'oggetto `CComVariant` equivale a **VARIANT**specificato.|  
  
## Note  
 `CComVariant` esegue il wrapping del tipo `VARIANT and VARIANTARG`, costituita di unione e di un membro che indicano il tipo di dati archiviati nell'unione.  **VARIANT**oggetti in genere utilizzato in automazione.  
  
 `CComVariant` deriva dal tipo variant in modo che possa essere utilizzato in qualsiasi punto **VARIANT** possa essere utilizzato.  È possibile, ad esempio, utilizzare la macro **V\_VT** per estrarre il tipo `CComVariant` oppure è possibile accedere direttamente al membro **vt** a quanto avviene con **VARIANT**.  
  
## Gerarchia di ereditarietà  
 `tagVARIANT`  
  
 `CComVariant`  
  
## Requisiti  
 **Header:** atlcomcli.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)