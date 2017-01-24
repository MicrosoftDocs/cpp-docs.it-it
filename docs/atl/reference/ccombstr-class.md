---
title: "CComBSTR (classe) | Microsoft Docs"
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
  - "ATL::CComBSTR"
  - "CComBSTR"
  - "ATL.CComBSTR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BSTR, wrapper"
  - "CComBSTR"
  - "CComBSTR (classe)"
ms.assetid: 8fea1879-a05e-47a5-a803-8dec60eaa534
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComBSTR (classe)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe è un wrapper per `BSTR`S.  
  
## Sintassi  
  
```  
  
class CComBSTR  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComBSTR::CComBSTR](../Topic/CComBSTR::CComBSTR.md)|Costruttore.|  
|[CComBSTR::~CComBSTR](../Topic/CComBSTR::~CComBSTR.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComBSTR::Append](../Topic/CComBSTR::Append.md)|Aggiunge una stringa a `m_str`.|  
|[CComBSTR::AppendBSTR](../Topic/CComBSTR::AppendBSTR.md)|Aggiunge `BSTR` a `m_str`.|  
|[CComBSTR::AppendBytes](../Topic/CComBSTR::AppendBytes.md)|Aggiunge un determinato numero di byte a `m_str`.|  
|[CComBSTR::ArrayToBSTR](../Topic/CComBSTR::ArrayToBSTR.md)|Crea `BSTR` dal primo carattere di ogni elemento in un elemento safearray e lo aggiunge all'oggetto `CComBSTR`.|  
|[CComBSTR::AssignBSTR](../Topic/CComBSTR::AssignBSTR.md)|Assegna `BSTR` a `m_str`.|  
|[CComBSTR::Attach](../Topic/CComBSTR::Attach.md)|Associa `BSTR`oggetto `CComBSTR`.|  
|[CComBSTR::BSTRToArray](../Topic/CComBSTR::BSTRToArray.md)|Crea un elemento safearray unidimensionale in base zero, dove ogni elemento della matrice è un carattere dall'oggetto `CComBSTR`.|  
|[CComBSTR::ByteLength](../Topic/CComBSTR::ByteLength.md)|Restituisce la lunghezza `m_str` in byte.|  
|[CComBSTR::Copy](../Topic/CComBSTR::Copy.md)|Restituisce una copia `m_str`.|  
|[CComBSTR::CopyTo](../Topic/CComBSTR::CopyTo.md)|Restituisce una copia `m_str` tramite un parametro **\[out\]**|  
|[CComBSTR::Detach](../Topic/CComBSTR::Detach.md)|Rimuove `m_str` dall'oggetto `CComBSTR`.|  
|[CComBSTR::Empty](../Topic/CComBSTR::Empty.md)|Libera `m_str`.|  
|[CComBSTR::Length](../Topic/CComBSTR::Length.md)|Restituisce la lunghezza `m_str`.|  
|[CComBSTR::LoadString](../Topic/CComBSTR::LoadString.md)|Carica una risorsa di tipo stringa.|  
|[CComBSTR::ReadFromStream](../Topic/CComBSTR::ReadFromStream.md)|Carica un oggetto `BSTR` da un flusso.|  
|[CComBSTR::ToLower](../Topic/CComBSTR::ToLower.md)|Converte la stringa in lettere minuscole.|  
|[CComBSTR::ToUpper](../Topic/CComBSTR::ToUpper.md)|Converte la stringa in lettere maiuscole.|  
|[CComBSTR::WriteToStream](../Topic/CComBSTR::WriteToStream.md)|Salva `m_str` a un flusso.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComBSTR::operator BSTR](../Topic/CComBSTR::operator%20BSTR.md)|Esegue il cast di un oggetto `CComBSTR` a `BSTR`.|  
|[CComBSTR::operator \!](../Topic/CComBSTR::operator%20!.md)|Restituisce `true` o `false`, come se `m_str`è `NULL`.|  
|[CComBSTR::operator \!\=](../Topic/CComBSTR::operator%20!=.md)|Confronta `CComBSTR` con una stringa.|  
|[CComBSTR::operator &](../Topic/CComBSTR::operator%20&.md)|Restituisce l'indirizzo `m_str`.|  
|[CComBSTR::operator \+\=](../Topic/CComBSTR::operator%20+=.md)|Aggiunge `CComBSTR` all'oggetto.|  
|[CComBSTR::operator \<](../Topic/CComBSTR::operator%20%3C.md)|Confronta `CComBSTR` con una stringa.|  
|[CComBSTR::operator \=](../Topic/CComBSTR::operator%20=.md)|Assegna un valore a `m_str`.|  
|[CComBSTR::operator \=\=](../Topic/CComBSTR::operator%20==.md)|Confronta `CComBSTR` con una stringa.|  
|[CComBSTR::operator \>](../Topic/CComBSTR::operator%20%3E.md)|Confronta `CComBSTR` con una stringa.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComBSTR::m\_str](../Topic/CComBSTR::m_str.md)|Contiene `BSTR` associato all'oggetto `CComBSTR`.|  
  
## Note  
 La classe `CComBSTR` è un wrapper per `BSTR`oggetti, che sono stringhe con prefisso di lunghezza.  La lunghezza viene memorizzata come Integer alla posizione di memoria che precede i dati della stringa.  
  
 [BSTR](http://msdn.microsoft.com/it-it/1b2d7d2c-47af-4389-a6b6-b01b7e915228) è con terminazione null dopo l'ultimo carattere conteggiato ma può anche contenere caratteri null incorporati all'interno della stringa.  La lunghezza della stringa dipende dal numero di caratteri, non il primo carattere null.  
  
> [!NOTE]
>  La classe `CComBSTR` fornisce una serie di membri \(costruttori, operatori di assegnazione e operatori di confronto\) che accetta ANSI o le stringhe Unicode come argomenti.  Le versioni ANSI di queste funzioni sono meno efficienti delle controparti Unicode poiché le stringhe Unicode temporanee vengono create spesso internamente.  Per maggiore efficienza, utilizzare le versioni Unicode in possibile.  
  
> [!NOTE]
>  A causa del comportamento migliore di ricerca implementato in Visual Studio. .NET, il codice come `bstr = L"String2" + bstr;`, che è possibile compilare nelle versioni precedenti, deve invece essere implementato come `bstr = CStringW(L"String2") + bstr`.  
  
 Per un elenco di utilizzo `CComBSTR`, vedere [programmazione con CComBSTR](../../atl/programming-with-ccombstr-atl.md).  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)   
 [ATL and MFC String Conversion Macros](../Topic/ATL%20and%20MFC%20String%20Conversion%20Macros.md)