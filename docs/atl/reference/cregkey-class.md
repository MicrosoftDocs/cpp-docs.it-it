---
title: "CRegKey Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CRegKey"
  - "ATL::CRegKey"
  - "ATL.CRegKey"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, Registro di sistema"
  - "CRegKey class"
  - "Registro di sistema, eliminazione di chiavi"
  - "Registro di sistema, eliminazione di valori"
  - "Registro di sistema, scrittura"
ms.assetid: 3afce82b-ba2c-4c1a-8404-dc969e1af74b
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 28
---
# CRegKey Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per la modifica delle voci nel Registro di sistema.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CRegKey  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRegKey::CRegKey](../Topic/CRegKey::CRegKey.md)|Costruttore.|  
|[CRegKey::~CRegKey](../Topic/CRegKey::~CRegKey.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRegKey::Attach](../Topic/CRegKey::Attach.md)|Chiamare questo metodo per associare un HKEYoggetto `CRegKey` impostare l'handle del membro [m\_hKey](../Topic/CRegKey::m_hKey.md) a `hKey`.|  
|[CRegKey::Close](../Topic/CRegKey::Close.md)|Chiamare questo metodo per liberare l'handle del membro [m\_hKey](../Topic/CRegKey::m_hKey.md) e impostarlo SU NULL.|  
|[CRegKey::Create](../Topic/CRegKey::Create.md)|Chiamare questo metodo per creare la chiave specificata, se non esiste come sottochiave `hKeyParent`.|  
|[CRegKey::DeleteSubKey](../Topic/CRegKey::DeleteSubKey.md)|Chiamare questo metodo per rimuovere la chiave specificata dal Registro di sistema.|  
|[CRegKey::DeleteValue](../Topic/CRegKey::DeleteValue.md)|Chiamare questo metodo per rimuovere un campo di valore da [m\_hKey](../Topic/CRegKey::m_hKey.md).|  
|[CRegKey::Detach](../Topic/CRegKey::Detach.md)|Chiamare questo metodo per rimuovere gli handle del membro [m\_hKey](../Topic/CRegKey::m_hKey.md) dall'oggetto `CRegKey` e `m_hKey` stabilito a NULL.|  
|[CRegKey::EnumKey](../Topic/CRegKey::EnumKey.md)|Chiamare questo metodo per enumerare le sottochiavi della chiave del Registro di sistema aperta.|  
|[CRegKey::Flush](../Topic/CRegKey::Flush.md)|Chiamare questo metodo per scrivere tutti attributi della chiave del Registro di sistema definiti nel Registro di sistema.|  
|[CRegKey::GetKeySecurity](../Topic/CRegKey::GetKeySecurity.md)|Chiamare questo metodo per recuperare una copia del descrittore di sicurezza che modo la chiave del Registro di sistema aperta.|  
|[CRegKey::NotifyChangeKeyValue](../Topic/CRegKey::NotifyChangeKeyValue.md)|Questo metodo segnala al chiamante sulle modifiche agli attributi o al contenuto della chiave del Registro di sistema aperta.|  
|[CRegKey::Open](../Topic/CRegKey::Open.md)|Chiamare questo metodo per aprire la chiave specificata e [m\_hKey](../Topic/CRegKey::m_hKey.md) stabilito a un handle di questa chiave.|  
|[CRegKey::QueryBinaryValue](../Topic/CRegKey::QueryBinaryValue.md)|Chiamare questo metodo per recuperare i dati binari per il nome del valore specificato.|  
|[CRegKey::QueryDWORDValue](../Topic/CRegKey::QueryDWORDValue.md)|Chiamare questo metodo per recuperare i dati DWORD per un nome del valore specificato.|  
|[CRegKey::QueryGUIDValue](../Topic/CRegKey::QueryGUIDValue.md)|Chiamare questo metodo per recuperare i dati di GUID per un nome del valore specificato.|  
|[CRegKey::QueryMultiStringValue](../Topic/CRegKey::QueryMultiStringValue.md)|Chiamare questo metodo per recuperare i dati di multistringa per un nome del valore specificato.|  
|[CRegKey::QueryQWORDValue](../Topic/CRegKey::QueryQWORDValue.md)|Chiamare questo metodo per recuperare i dati di QWORD per un nome del valore specificato.|  
|[CRegKey::QueryStringValue](../Topic/CRegKey::QueryStringValue.md)|Chiamare questo metodo per recuperare i dati in formato stringa per un nome del valore specificato.|  
|[CRegKey::QueryValue](../Topic/CRegKey::QueryValue.md)|Chiamare questo metodo per recuperare i dati per il campo del valore specificato [m\_hKey](../Topic/CRegKey::m_hKey.md).  Le versioni precedenti di questo metodo più supportate e non sono contrassegnate come **ATL\_DEPRECATED**.|  
|[CRegKey::RecurseDeleteKey](../Topic/CRegKey::RecurseDeleteKey.md)|Chiamare questo metodo per rimuovere la chiave specificata dal Registro di sistema e in modo esplicito per rimuovere tutte le sottochiavi.|  
|[CRegKey::SetBinaryValue](../Topic/CRegKey::SetBinaryValue.md)|Chiamare questo metodo per impostare il valore binario della chiave del Registro di sistema.|  
|[CRegKey::SetDWORDValue](../Topic/CRegKey::SetDWORDValue.md)|Chiamare questo metodo per impostare il valore DWORD la chiave del Registro di sistema.|  
|[CRegKey::SetGUIDValue](../Topic/CRegKey::SetGUIDValue.md)|Chiamare questo metodo per impostare il valore GUID della chiave del Registro di sistema.|  
|[CRegKey::SetKeySecurity](../Topic/CRegKey::SetKeySecurity.md)|Chiamare questo metodo per impostare la sicurezza della chiave del Registro di sistema.|  
|[CRegKey::SetKeyValue](../Topic/CRegKey::SetKeyValue.md)|Chiamare questo metodo per archiviare i dati in un campo di valore specificato di una chiave specificata.|  
|[CRegKey::SetMultiStringValue](../Topic/CRegKey::SetMultiStringValue.md)|Chiamare questo metodo per impostare il valore di multistringa la chiave del Registro di sistema.|  
|[CRegKey::SetQWORDValue](../Topic/CRegKey::SetQWORDValue.md)|Chiamare questo metodo per impostare il valore di QWORD la chiave del Registro di sistema.|  
|[CRegKey::SetStringValue](../Topic/CRegKey::SetStringValue.md)|Chiamare questo metodo per impostare il valore della stringa della chiave del Registro di sistema.|  
|[CRegKey::SetValue](../Topic/CRegKey::SetValue.md)|Chiamare questo metodo per archiviare i dati nel campo del valore specificato [m\_hKey](../Topic/CRegKey::m_hKey.md).  Le versioni precedenti di questo metodo più supportate e non sono contrassegnate come **ATL\_DEPRECATED**.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRegKey::operator HKEY](../Topic/CRegKey::operator%20HKEY.md)|Converte un oggetto `CRegKey` a un HKEY.|  
|[CRegKey::operator \=](../Topic/CRegKey::operator%20=.md)|Operatore di assegnazione.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRegKey::m\_hKey](../Topic/CRegKey::m_hKey.md)|Contiene l'handle della chiave del Registro di sistema associata all'oggetto `CRegKey`.|  
|[CRegKey::m\_pTM](../Topic/CRegKey::m_pTM.md)|Puntatore all'oggetto `CAtlTransactionManager`|  
  
## Note  
 `CRegKey` fornisce metodi per creare ed eliminare le chiavi e i valori nel Registro di sistema.  Il Registro di sistema sono un set specifico di installazione\- definizioni per i componenti di sistema, quali i numeri di versione del software, i mapping logico \(fisici di hardware installato e oggetti COM.  
  
 `CRegKey` fornisce un'interfaccia di programmazione nel Registro di sistema per il computer.  Ad esempio, aprire una chiave del Registro di sistema specifico, chiamare `CRegKey::Open`.  Per recuperare o modificare un valore di dati, una chiamata `CRegKey::QueryValue` o `CRegKey::SetValue`, rispettivamente.  Per chiudere una chiave, chiamare `CRegKey::Close`.  
  
 Quando si chiude una chiave, i dati del Registro di sistema vengono scritti \(scaricata\) sul disco rigido.  Questo processo può richiedere alcuni secondi.  Se l'applicazione deve esplicitamente scrivere i dati del Registro di sistema sul disco rigido, è possibile chiamare la funzione Win32 [RegFlushKey](http://msdn.microsoft.com/library/windows/desktop/ms724867).  Tuttavia, **RegFlushKey** utilizza molte risorse di sistema e deve essere chiamato solo quando è assolutamente necessario.  
  
> [!IMPORTANT]
>  Tutti i metodi che consentono al chiamante di specificare un percorso del Registro di sistema hanno la possibilità di leggere dati che non attendibili.  I metodi che utilizzano [RegQueryValueEx](http://msdn.microsoft.com/library/windows/desktop/ms724911) devono prendere in considerazione che questa funzione in modo esplicito non gestisce le stringhe che siano con terminazione null.  Entrambi i termini devono essere archiviati dal codice chiamante.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Vedere anche  
 [Esempio DCOM](../../top/visual-cpp-samples.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [Registry Overview](http://msdn.microsoft.com/library/windows/desktop/ms724871)   
 [Registry Functions](http://msdn.microsoft.com/library/windows/desktop/ms724875)   
 [Registry Value Types](http://msdn.microsoft.com/library/windows/desktop/ms724884)