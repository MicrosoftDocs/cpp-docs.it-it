---
title: "CStrBufT Class | Microsoft Docs"
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
  - "ATL::CStrBufT<TCharType>"
  - "ATL.CStrBufT"
  - "CStrBufT"
  - "ATL::CStrBufT"
  - "ATL.CStrBufT<TCharType>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStrBufT class"
  - "shared classes, CStrBufT"
  - "stringhe [C++], custom memory management"
ms.assetid: 6b50fa8f-87e8-4ed4-a229-157ce128710f
caps.latest.revision: 17
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CStrBufT Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce la pulizia automatica delle risorse per `GetBuffer` e le chiamate `ReleaseBuffer` su `CStringT` oggetto esistente.  
  
## Sintassi  
  
```  
  
      template<  
   typename TCharType  
>  
class CStrBufT  
```  
  
#### Parametri  
 *TCharType*  
 Il tipo di carattere della classe `CStrBufT`.  ad esempio uno dei seguenti:  
  
-   `char` \(per le stringhe di caratteri ANSI\)  
  
-   `wchar_t` \(per le stringhe di caratteri Unicode\)  
  
-   **TCHAR** \(sia per ANSI che le stringhe di caratteri Unicode\)  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`PCXSTR`|Un puntatore a una stringa costante.|  
|`PXSTR`|Un puntatore a una stringa.|  
|`StringType`|Il tipo di stringa del buffer deve essere modificato dalle specializzazioni del modello di classe.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStrBufT::CStrBufT](../Topic/CStrBufT::CStrBufT.md)|Il costruttore per l'oggetto del buffer di stringa.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStrBufT::SetLength](../Topic/CStrBufT::SetLength.md)|Imposta la lunghezza del buffer di caratteri dell'oggetto stringa collegato.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStrBufT::operator PCXSTR](../Topic/CStrBufT::operator%20PCXSTR.md)|Recupera un puntatore **const** il buffer di caratteri dell'oggetto stringa collegato.|  
|[CStrBufT::operator PXSTR](../Topic/CStrBufT::operator%20PXSTR.md)|Recupera un puntatore a un buffer di caratteri dell'oggetto stringa collegato.|  
  
### Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStrBufT::AUTO\_LENGTH](../Topic/CStrBufT::AUTO_LENGTH.md)|Determinare automaticamente la nuova lunghezza della stringa alla versione.|  
|[CStrBufT::SET\_LENGTH](../Topic/CStrBufT::SET_LENGTH.md)|Impostare la lunghezza dell'oggetto stringa in fase di GetBuffer|  
  
## Note  
 La classe viene utilizzata come classe wrapper per sostituire le chiamate a [GetBuffer](../Topic/CSimpleStringT::GetBuffer.md) e [ReleaseBuffer](../Topic/CSimpleStringT::ReleaseBuffer.md), o [GetBufferSetLength](../Topic/CSimpleStringT::GetBufferSetLength.md) e `ReleaseBuffer`.  
  
 Principalmente progettata come classe di supporto, `CStrBufT` fornisce un modo pratico per uno sviluppatore funzioni con il buffer di caratteri di un oggetto stringa senza preoccuparsi di come o quando si chiama `ReleaseBuffer`.  Ciò è possibile poiché l'oggetto wrapper chiude naturalmente di ambito nel caso di un'eccezione o di un multiplo proveniente i percorsi di codice; visualizzare il relativo distruttore liberato la risorsa di tipo stringa.  
  
## Requisiti  
 **Header:** atlsimpstr.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [ATL\/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)