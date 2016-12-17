---
title: "CMFCFilterChunkValueImpl Class | Microsoft Docs"
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
  - "CMFCFilterChunkValueImpl"
  - "afxwin/CMFCFilterChunkValueImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCFilterChunkValueImpl class"
ms.assetid: 3c833f23-5b88-4d08-9e09-ca6a8aec88bf
caps.latest.revision: 25
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCFilterChunkValueImpl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Si tratta di una classe che semplifica sia il blocco che la logica della coppia di valori di proprietà.  
  
## Sintassi  
  
```  
class CMFCFilterChunkValueImpl : public ATL::IFilterChunkValue;  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCFilterChunkValueImpl::~CMFCFilterChunkValueImpl](../Topic/CMFCFilterChunkValueImpl::~CMFCFilterChunkValueImpl.md)|Destructs l'oggetto.|  
|[CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl](../Topic/CMFCFilterChunkValueImpl::CMFCFilterChunkValueImpl.md)|Crea l'oggetto.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCFilterChunkValueImpl::Clear](../Topic/CMFCFilterChunkValueImpl::Clear.md)|Cancella il ChunkValue.|  
|[CMFCFilterChunkValueImpl::CopyChunk](../Topic/CMFCFilterChunkValueImpl::CopyChunk.md)|Copiare questo blocco a una struttura che descrivono le caratteristiche di un blocco.|  
|[CMFCFilterChunkValueImpl::CopyFrom](../Topic/CMFCFilterChunkValueImpl::CopyFrom.md)|Inizializza il valore del blocco da un altro valore.|  
|[CMFCFilterChunkValueImpl::GetChunkGUID](../Topic/CMFCFilterChunkValueImpl::GetChunkGUID.md)|Recupera il blocco GUID.|  
|[CMFCFilterChunkValueImpl::GetChunkPID](../Topic/CMFCFilterChunkValueImpl::GetChunkPID.md)|Recupera il blocco il PID proprietà \(ID\).|  
|[CMFCFilterChunkValueImpl::GetChunkType](../Topic/CMFCFilterChunkValueImpl::GetChunkType.md)|Ottiene il tipo di blocco.|  
|[CMFCFilterChunkValueImpl::GetString](../Topic/CMFCFilterChunkValueImpl::GetString.md)|Recupera il valore stringa.|  
|[CMFCFilterChunkValueImpl::GetValue](../Topic/CMFCFilterChunkValueImpl::GetValue.md)|Recupera il valore come un propvariant allocato.|  
|[CMFCFilterChunkValueImpl::GetValueNoAlloc](../Topic/CMFCFilterChunkValueImpl::GetValueNoAlloc.md)|\(Valore interno non allocato restituisce\).|  
|[CMFCFilterChunkValueImpl::IsValid](../Topic/CMFCFilterChunkValueImpl::IsValid.md)|Controlla se il valore della proprietà è valido o meno.|  
|[CMFCFilterChunkValueImpl::SetBoolValue](../Topic/CMFCFilterChunkValueImpl::SetBoolValue.md)|Di overload.  Impostare la proprietà della chiave di un valore booleano.|  
|[CMFCFilterChunkValueImpl::SetDwordValue](../Topic/CMFCFilterChunkValueImpl::SetDwordValue.md)|Impostare la proprietà della chiave di un DWORD.|  
|[CMFCFilterChunkValueImpl::SetFileTimeValue](../Topic/CMFCFilterChunkValueImpl::SetFileTimeValue.md)|Impostare la proprietà della chiave di un filetime.|  
|[CMFCFilterChunkValueImpl::SetInt64Value](../Topic/CMFCFilterChunkValueImpl::SetInt64Value.md)|Impostare la proprietà della chiave di un int64.|  
|[CMFCFilterChunkValueImpl::SetIntValue](../Topic/CMFCFilterChunkValueImpl::SetIntValue.md)|Impostare la proprietà sulla chiave in un tipo int.|  
|[CMFCFilterChunkValueImpl::SetLongValue](../Topic/CMFCFilterChunkValueImpl::SetLongValue.md)|Impostare la proprietà della chiave di un LUNGO.|  
|[CMFCFilterChunkValueImpl::SetSystemTimeValue](../Topic/CMFCFilterChunkValueImpl::SetSystemTimeValue.md)|Impostare la proprietà della chiave a uno SystemTime.|  
|[CMFCFilterChunkValueImpl::SetTextValue](../Topic/CMFCFilterChunkValueImpl::SetTextValue.md)|Impostare la proprietà della chiave a una stringa Unicode.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCFilterChunkValueImpl::SetChunk](../Topic/CMFCFilterChunkValueImpl::SetChunk.md)|Una funzione di supporto che imposta le proprietà comuni di blocco.|  
  
## Note  
 Per utilizzare, creare una semplice classe di CMFCFilterChunkValueImpl del tipo  
  
 Esempio:  
  
 Blocco di CMFCFilterChunkValueImpl;  
  
 ora \= chunk.SetBoolValue \(PKEY\_IsAttachment, righe\);  
  
 oppure  
  
 ora \= chunk.SetFileTimeValue \(PKEY\_ItemDate, ftLastModified\);  
  
## Gerarchia di ereditarietà  
 `ATL::IFilterChunkValue`  
  
 [CMFCFilterChunkValueImpl](../../mfc/reference/cmfcfilterchunkvalueimpl-class.md)  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)