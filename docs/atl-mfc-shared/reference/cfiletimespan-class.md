---
title: Classe CFileTimeSpan | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CFileTimeSpan
- ATLTIME/ATL::CFileTimeSpan
- ATLTIME/ATL::CFileTimeSpan::CFileTimeSpan
- ATLTIME/ATL::CFileTimeSpan::GetTimeSpan
- ATLTIME/ATL::CFileTimeSpan::SetTimeSpan
dev_langs: C++
helpviewer_keywords:
- shared classes, CFileTimeSpan
- CFileTimeSpan class
ms.assetid: 5856fb39-9c82-4027-8ccf-8760890491ec
caps.latest.revision: "18"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: da47f0113ec2e36f6df4afa32f6aff84d5ee6dfe
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cfiletimespan-class"></a>Classe CFileTimeSpan
Questa classe fornisce metodi per la gestione dei relativo valori di data e ora associati a un file.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CFileTimeSpan
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileTimeSpan::CFileTimeSpan](#cfiletimespan)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileTimeSpan::GetTimeSpan](#gettimespan)|Chiamare questo metodo per recuperare l'intervallo di tempo dal `CFileTimeSpan` oggetto.|  
|[CFileTimeSpan::SetTimeSpan](#settimespan)|Chiamare questo metodo per impostare l'intervallo di tempo del `CFileTimeSpan` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileTimeSpan::operator-](#operator_-)|Esegue la sottrazione di un `CFileTimeSpan` oggetto.|  
|[CFileTimeSpan::operator! =](#operator_neq)|Confronta due oggetti `CFileTimeSpan` per stabilirne la disuguaglianza.|  
|[CFileTimeSpan::operator +](#operator_add)|Esegue la somma di un `CFileTimeSpan` oggetto.|  
|[+ = CFileTimeSpan::operator](#operator_add_eq)|Esegue la somma di un `CFileTimeSpan` dell'oggetto e assegnare il risultato all'oggetto corrente.|  
|[CFileTimeSpan::operator&lt;](#operator_lt)|Confronta due `CFileTimeSpan` gli oggetti per determinare il minore.|  
|[CFileTimeSpan::operator&lt;=](#operator_lt_eq)|Confronta due `CFileTimeSpan` gli oggetti per determinare l'uguaglianza o il minore.|  
|[CFileTimeSpan::operator =](#operator_eq)|L'operatore di assegnazione.|  
|[CFileTimeSpan::operator =](#operator_-_eq)|Esegue la sottrazione di un `CFileTimeSpan` dell'oggetto e assegnare il risultato all'oggetto corrente.|  
|[CFileTimeSpan::operator = =](#operator_eq_eq)|Confronta due oggetti `CFileTimeSpan` per stabilirne l'uguaglianza.|  
|[CFileTimeSpan::operator&gt;](#operator_gt)|Confronta due `CFileTimeSpan` gli oggetti per determinare il più elevato.|  
|[CFileTimeSpan::operator&gt;=](#operator_gt_eq)|Confronta due `CFileTimeSpan` gli oggetti per determinare l'uguaglianza o il più grande.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce metodi per la gestione relativi periodi di tempo spesso durante l'esecuzione di operazioni di relative quando un file è stato creato, ultimo accesso o dell'ultima modifica. I metodi di questa classe vengono spesso utilizzati in combinazione con [CFileTime classe](../../atl-mfc-shared/reference/cfiletime-class.md) oggetti.  
  
## <a name="example"></a>Esempio  
 Per vedere l'esempio [CFileTime::Millisecond](../../atl-mfc-shared/reference/cfiletime-class.md#millisecond).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atltime. h  
  
##  <a name="cfiletimespan"></a>CFileTimeSpan::CFileTimeSpan  
 Costruttore.  
  
```
CFileTimeSpan() throw();
CFileTimeSpan(const CFileTimeSpan& span) throw();
CFileTimeSpan(LONGLONG nSpan) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 Oggetto `CFileTimeSpan` esistente.  
  
 `nSpan`  
 Un periodo di tempo in millisecondi.  
  
### <a name="remarks"></a>Note  
 Il `CFileTimeSpan` oggetto può essere creato utilizzando una classe `CFileTimeSpan` dell'oggetto o espressa come valore a 64 bit. Il costruttore predefinito imposta l'intervallo di tempo su 0.  
  
##  <a name="gettimespan"></a>CFileTimeSpan::GetTimeSpan  
 Chiamare questo metodo per recuperare l'intervallo di tempo dal `CFileTimeSpan` oggetto.  
  
```
LONGLONG GetTimeSpan() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'intervallo di tempo in millisecondi.  
  
##  <a name="operator_-"></a>CFileTimeSpan::operator-  
 Esegue la sottrazione di un **CFileTimeSpan** oggetto.  
  
```
CFileTimeSpan operator-(CFileTimeSpan span) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 Oggetto `CFileTimeSpan`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un `CFileTimeSpan` oggetto che rappresenta il risultato della differenza tra due intervalli di tempo.  
  
##  <a name="operator_neq"></a>CFileTimeSpan::operator! =  
 Confronta due oggetti `CFileTimeSpan` per stabilirne la disuguaglianza.  
  
```
bool operator!=(CFileTimeSpan span) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 L'oggetto `CFileTimeSpan` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se l'elemento da confrontare non è uguale al `CFileTimeSpan` oggetto; in caso contrario **false**.  
  
##  <a name="operator_add"></a>CFileTimeSpan::operator +  
 Esegue la somma di un `CFileTimeSpan` oggetto.  
  
```
CFileTimeSpan operator+(CFileTimeSpan span) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 Oggetto `CFileTimeSpan`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un `CFileTimeSpan` oggetto contenente la somma dell'ora di due intervalli.  
  
##  <a name="operator_add_eq"></a>+ = CFileTimeSpan::operator  
 Esegue la somma di un `CFileTimeSpan` dell'oggetto e assegna il risultato all'oggetto corrente.  
  
```
CFileTimeSpan& operator+=(CFileTimeSpan span) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 Oggetto `CFileTimeSpan`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'aggiornamento `CFileTimeSpan` oggetto contenente la somma dell'ora di due intervalli.  
  
##  <a name="operator_lt"></a>CFileTimeSpan::operator&lt;  
 Confronta due `CFileTimeSpan` gli oggetti per determinare il minore.  
  
```
bool operator<(CFileTimeSpan span) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 L'oggetto `CFileTimeSpan` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il primo oggetto è minore di (vale a dire, rappresenta un periodo di tempo più breve) al secondo, in caso contrario **false**.  
  
##  <a name="operator_lt_eq"></a>CFileTimeSpan::operator&lt;=  
 Confronta due `CFileTimeSpan` gli oggetti per determinare l'uguaglianza o il minore.  
  
```
bool operator<=(CFileTimeSpan span) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 L'oggetto `CFileTimeSpan` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il primo oggetto è minore di (vale a dire, rappresenta un periodo di tempo più breve) o uguale al secondo, in caso contrario **false**.  
  
##  <a name="operator_eq"></a>CFileTimeSpan::operator =  
 L'operatore di assegnazione.  
  
```
CFileTimeSpan& operator=(const CFileTimeSpan& span) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 Oggetto `CFileTimeSpan`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'aggiornamento `CFileTimeSpan` oggetto.  
  
##  <a name="operator_-_eq"></a>CFileTimeSpan::operator =  
 Esegue la sottrazione di un `CFileTimeSpan` dell'oggetto e assegna il risultato all'oggetto corrente.  
  
```
CFileTimeSpan& operator-=(CFileTimeSpan span) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 Oggetto `CFileTimeSpan`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce l'aggiornamento `CFileTimeSpan` oggetto.  
  
##  <a name="operator_eq_eq"></a>CFileTimeSpan::operator = =  
 Confronta due oggetti `CFileTimeSpan` per stabilirne l'uguaglianza.  
  
```
bool operator==(CFileTimeSpan span) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 L'oggetto `CFileTimeSpan` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se gli oggetti sono uguali; in caso contrario **false**.  
  
##  <a name="operator_gt"></a>CFileTimeSpan::operator&gt;  
 Confronta due `CFileTimeSpan` gli oggetti per determinare il più elevato.  
  
```
bool operator>(CFileTimeSpan span) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 L'oggetto `CFileTimeSpan` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il primo oggetto è maggiore di (vale a dire, rappresenta un periodo di tempo) al secondo, in caso contrario **false**.  
  
##  <a name="operator_gt_eq"></a>CFileTimeSpan::operator&gt;=  
 Confronta due `CFileTimeSpan` gli oggetti per determinare l'uguaglianza o il più grande.  
  
```
bool operator>=(CFileTimeSpan span) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 L'oggetto `CFileTimeSpan` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il primo oggetto è maggiore di (vale a dire, rappresenta un periodo di tempo) o uguale al secondo, in caso contrario **false**.  
  
##  <a name="settimespan"></a>CFileTimeSpan::SetTimeSpan  
 Chiamare questo metodo per impostare l'intervallo di tempo del `CFileTimeSpan` oggetto.  
  
```
void SetTimeSpan(LONGLONG nSpan) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nSpan`  
 Il nuovo valore per l'intervallo di tempo in millisecondi.  
  
## <a name="see-also"></a>Vedere anche  
 [FILETIME](http://msdn.microsoft.com/library/windows/desktop/ms724284)   
 [Classe CFileTime](../../atl-mfc-shared/reference/cfiletime-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)


