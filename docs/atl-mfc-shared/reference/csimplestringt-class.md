---
title: "CSimpleStringT Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CSimpleStringT"
  - "ATL::CSimpleStringT"
  - "ATL::CSimpleStringT<BaseType>"
  - "ATL.CSimpleStringT<BaseType>"
  - "CSimpleStringT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSimpleStringT class"
  - "shared classes, CSimpleStringT"
  - "stringhe [C++], ATL (classe)"
ms.assetid: 15814fcb-5b8f-4425-a97e-3b61fc9b48d8
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 20
---
# CSimpleStringT Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe rappresenta un oggetto `CSimpleStringT`.  
  
## Sintassi  
  
```  
  
      template <typename   
      BaseType  
      >  
class CSimpleStringT  
```  
  
#### Parametri  
 `BaseType`  
 Il tipo di carattere della classe string.  ad esempio uno dei seguenti:  
  
-   `char` \(per le stringhe di caratteri ANSI\).  
  
-   `wchar_t` \(per le stringhe di caratteri Unicode\).  
  
-   **TCHAR** \(sia per ANSI che le stringhe di caratteri Unicode\).  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleStringT::PCXSTR](../Topic/CSimpleStringT::PCXSTR.md)|Un puntatore a una stringa costante.|  
|[CSimpleStringT::PXSTR](../Topic/CSimpleStringT::PXSTR.md)|Un puntatore a una stringa.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleStringT::CSimpleStringT](../Topic/CSimpleStringT::CSimpleStringT.md)|Costruisce oggetti `CSimpleStringT` in diversi modi.|  
|[CSimpleStringT::~CSimpleStringT](../Topic/CSimpleStringT::~CSimpleStringT.md)|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleStringT::Append](../Topic/CSimpleStringT::Append.md)|Aggiunge un oggetto `CSimpleStringT` a un oggetto esistente `CSimpleStringT`.|  
|[CSimpleStringT::AppendChar](../Topic/CSimpleStringT::AppendChar.md)|Aggiunge un carattere a un oggetto esistente `CSimpleStringT`.|  
|[CSimpleStringT::CopyChars](../Topic/CSimpleStringT::CopyChars.md)|Copia un carattere o i caratteri a un'altra stringa.|  
|[CSimpleStringT::CopyCharsOverlapped](../Topic/CSimpleStringT::CopyCharsOverlapped.md)|Copia un carattere o i caratteri con un'altra stringa in cui i buffer si sovrappongono.|  
|[CSimpleStringT::Empty](../Topic/CSimpleStringT::Empty.md)|Forza una stringa per avere una lunghezza pari a zero.|  
|[CSimpleStringT::FreeExtra](../Topic/CSimpleStringT::FreeExtra.md)|Libera la memoria aggiuntiva allocata in precedenza dall'oggetto stringa.|  
|[CSimpleStringT::GetAllocLength](../Topic/CSimpleStringT::GetAllocLength.md)|Recupera una dimensione allocata di un oggetto `CSimpleStringT`.|  
|[CSimpleStringT::GetAt](../Topic/CSimpleStringT::GetAt.md)|Restituisce il carattere nella posizione specificata.|  
|[CSimpleStringT::GetBuffer](../Topic/CSimpleStringT::GetBuffer.md)|Restituisce un puntatore ai caratteri `CSimpleStringT`.|  
|[CSimpleStringT::GetBufferSetLength](../Topic/CSimpleStringT::GetBufferSetLength.md)|Restituisce un puntatore ai caratteri `CSimpleStringT`, troncante alla lunghezza specificata.|  
|[CSimpleStringT::GetLength](../Topic/CSimpleStringT::GetLength.md)|Restituisce il numero di caratteri in un oggetto `CSimpleStringT`.|  
|[CSimpleStringT::GetManager](../Topic/CSimpleStringT::GetManager.md)|Recupera il gestore di memoria dell'oggetto `CSimpleStringT`.|  
|[CSimpleStringT::GetString](../Topic/CSimpleStringT::GetString.md)|Recuperare la stringa di caratteri|  
|[CSimpleStringT::IsEmpty](../Topic/CSimpleStringT::IsEmpty.md)|Verifica se un oggetto `CSimpleStringT` non contiene caratteri.|  
|[CSimpleStringT::LockBuffer](../Topic/CSimpleStringT::LockBuffer.md)|Disabilita il conteggio dei riferimenti e garantisce la stringa nel buffer.|  
|[CSimpleStringT::Preallocate](../Topic/CSimpleStringT::Preallocate.md)|Alloca una quantità di memoria specifica per il buffer di caratteri.|  
|[CSimpleStringT::ReleaseBuffer](../Topic/CSimpleStringT::ReleaseBuffer.md)|Controllo delle versioni del buffer restituito da `GetBuffer`.|  
|[CSimpleStringT::ReleaseBufferSetLength](../Topic/CSimpleStringT::ReleaseBufferSetLength.md)|Controllo delle versioni del buffer restituito da `GetBuffer`.|  
|[CSimpleStringT::SetAt](../Topic/CSimpleStringT::SetAt.md)|Imposta un carattere a una posizione specificata.|  
|[CSimpleStringT::SetManager](../Topic/CSimpleStringT::SetManager.md)|Imposta il gestore di memoria di un oggetto `CSimpleStringT`.|  
|[CSimpleStringT::SetString](../Topic/CSimpleStringT::SetString.md)|Imposta la stringa di un oggetto `CSimpleStringT`.|  
|[CSimpleStringT::StringLength](../Topic/CSimpleStringT::StringLength.md)|Restituisce il numero di caratteri della stringa specificata.|  
|[CSimpleStringT::Truncate](../Topic/CSimpleStringT::Truncate.md)|Tronca la stringa a una lunghezza specificata.|  
|[CSimpleStringT::UnlockBuffer](../Topic/CSimpleStringT::UnlockBuffer.md)|Abilita il conteggio dei riferimenti e liberare la stringa nel buffer.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleStringT::operator PCXSTR](../Topic/CSimpleStringT::operator%20PCXSTR.md)|Accede direttamente ai caratteri archiviati in un oggetto `CSimpleStringT` come stringa di tipo c.|  
|[CSimpleStringT::operator](../Topic/CSimpleStringT::operator.md)|Restituisce il carattere in una posizione specificata alla sostituzione dell'operatore per `GetAt`.|  
|[CSimpleStringT::operator \+\=](../Topic/CSimpleStringT::operator%20+=.md)|Concatena una nuova stringa alla fine di una stringa esistente.|  
|[CSimpleStringT::operator \=](../Topic/CSimpleStringT::operator%20=.md)|Assegna un valore a un oggetto `CSimpleStringT`.|  
  
## Note  
 `CSimpleStringT` è la classe base per le varie classi di stringa supportati da Visual C\+\+.  Fornisce supporto minimo a gestione della memoria dell'oggetto e di modifica di base del buffer.  Per gli oggetti stringa più avanzati, vedere [classe di CStringT](../../atl-mfc-shared/reference/cstringt-class.md).  
  
## Requisiti  
 **Header:** atlsimpstr.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [ATL\/MFC Shared Classes](../../atl-mfc-shared/atl-mfc-shared-classes.md)