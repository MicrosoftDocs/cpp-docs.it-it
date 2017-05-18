---
title: Classe CFileTimeSpan | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CFileTimeSpan
- ATLTIME/ATL::CFileTimeSpan
- ATLTIME/ATL::CFileTimeSpan::CFileTimeSpan
- ATLTIME/ATL::CFileTimeSpan::GetTimeSpan
- ATLTIME/ATL::CFileTimeSpan::SetTimeSpan
dev_langs:
- C++
helpviewer_keywords:
- shared classes, CFileTimeSpan
- CFileTimeSpan class
ms.assetid: 5856fb39-9c82-4027-8ccf-8760890491ec
caps.latest.revision: 18
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 8a25bab65d9e5705a71eddde901e747c43a5a002
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
|[CFileTimeSpan::SetTimeSpan](#settimespan)|Chiamare questo metodo per impostare l'intervallo di tempo di `CFileTimeSpan` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileTimeSpan::operator-](#operator_-)|Esegue la sottrazione di un `CFileTimeSpan` oggetto.|  
|[CFileTimeSpan::operator! =](#operator_neq)|Confronta due oggetti `CFileTimeSpan` per stabilirne la disuguaglianza.|  
|[CFileTimeSpan::operator +](#operator_add)|Esegue la somma di un `CFileTimeSpan` oggetto.|  
|[+ = CFileTimeSpan::operator](#operator_add_eq)|Esegue la somma di un `CFileTimeSpan` dell'oggetto e assegnare il risultato all'oggetto corrente.|  
|[CFileTimeSpan::operator&lt;](#operator_lt)|Confronta due `CFileTimeSpan` oggetti per determinare il valore più basso.|  
|[CFileTimeSpan::operator&lt;=](#operator_lt_eq)|Confronta due `CFileTimeSpan` oggetti per determinare l'uguaglianza o il valore più basso.|  
|[CFileTimeSpan::operator =](#operator_eq)|L'operatore di assegnazione.|  
|[CFileTimeSpan::operator =](#operator_-_eq)|Esegue la sottrazione di un `CFileTimeSpan` dell'oggetto e assegnare il risultato all'oggetto corrente.|  
|[CFileTimeSpan::operator = =](#operator_eq_eq)|Confronta due oggetti `CFileTimeSpan` per stabilirne l'uguaglianza.|  
|[CFileTimeSpan::operator&gt;](#operator_gt)|Confronta due `CFileTimeSpan` oggetti per determinare il più elevato.|  
|[CFileTimeSpan::operator&gt;=](#operator_gt_eq)|Confronta due `CFileTimeSpan` oggetti per determinare l'uguaglianza o dimensioni maggiori.|  
  
## <a name="remarks"></a>Note  
 Questa classe fornisce metodi per la gestione dei relativi periodi di tempo riscontrato quando si eseguono operazioni quando un file è stato creato, dell'ultimo accesso o dell'ultima modifica. I metodi di questa classe vengono utilizzati in combinazione con [CFileTime classe](../../atl-mfc-shared/reference/cfiletime-class.md) oggetti.  
  
## <a name="example"></a>Esempio  
 Vedere l'esempio per [CFileTime::Millisecond](../../atl-mfc-shared/reference/cfiletime-class.md#millisecond).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atltime.h  
  
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
 Il `CFileTimeSpan` oggetto può essere creato utilizzando una classe `CFileTimeSpan` dell'oggetto o espresso come valore a 64 bit. Il costruttore predefinito imposta l'intervallo di tempo su 0.  
  
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
 Restituisce **true** se l'elemento cui eseguire il confronto non è uguale al `CFileTimeSpan` oggetto; in caso contrario **false**.  
  
##  <a name="operator_add"></a>CFileTimeSpan::operator +  
 Esegue la somma di un `CFileTimeSpan` oggetto.  
  
```
CFileTimeSpan operator+(CFileTimeSpan span) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 Oggetto `CFileTimeSpan`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un `CFileTimeSpan` dell'oggetto che contiene la somma del tempo due intervalli.  
  
##  <a name="operator_add_eq"></a>+ = CFileTimeSpan::operator  
 Esegue la somma di un `CFileTimeSpan` dell'oggetto e assegna il risultato all'oggetto corrente.  
  
```
CFileTimeSpan& operator+=(CFileTimeSpan span) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 Oggetto `CFileTimeSpan`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la classe aggiornata `CFileTimeSpan` dell'oggetto che contiene la somma del tempo due intervalli.  
  
##  <a name="operator_lt"></a>CFileTimeSpan::operator&lt;  
 Confronta due `CFileTimeSpan` oggetti per determinare il valore più basso.  
  
```
bool operator<(CFileTimeSpan span) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 L'oggetto `CFileTimeSpan` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il primo oggetto è minore di (ovvero, rappresenta un periodo di tempo più breve) al secondo, in caso contrario **false**.  
  
##  <a name="operator_lt_eq"></a>CFileTimeSpan::operator&lt;=  
 Confronta due `CFileTimeSpan` oggetti per determinare l'uguaglianza o il valore più basso.  
  
```
bool operator<=(CFileTimeSpan span) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 L'oggetto `CFileTimeSpan` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il primo oggetto è minore di (ovvero, rappresenta un periodo di tempo più breve) o uguale al secondo, in caso contrario **false**.  
  
##  <a name="operator_eq"></a>CFileTimeSpan::operator =  
 L'operatore di assegnazione.  
  
```
CFileTimeSpan& operator=(const CFileTimeSpan& span) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 Oggetto `CFileTimeSpan`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la classe aggiornata `CFileTimeSpan` oggetto.  
  
##  <a name="operator_-_eq"></a>CFileTimeSpan::operator =  
 Esegue la sottrazione di un `CFileTimeSpan` dell'oggetto e assegna il risultato all'oggetto corrente.  
  
```
CFileTimeSpan& operator-=(CFileTimeSpan span) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 Oggetto `CFileTimeSpan`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la classe aggiornata `CFileTimeSpan` oggetto.  
  
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
 Confronta due `CFileTimeSpan` oggetti per determinare il più elevato.  
  
```
bool operator>(CFileTimeSpan span) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 L'oggetto `CFileTimeSpan` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il primo oggetto è maggiore di (ovvero, rappresenta un periodo di tempo) al secondo, in caso contrario **false**.  
  
##  <a name="operator_gt_eq"></a>CFileTimeSpan::operator&gt;=  
 Confronta due `CFileTimeSpan` oggetti per determinare l'uguaglianza o dimensioni maggiori.  
  
```
bool operator>=(CFileTimeSpan span) const throw();
```  
  
### <a name="parameters"></a>Parametri  
 `span`  
 L'oggetto `CFileTimeSpan` da confrontare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **true** se il primo oggetto è maggiore di (ovvero, rappresenta un periodo di tempo) o uguale al secondo, in caso contrario **false**.  
  
##  <a name="settimespan"></a>CFileTimeSpan::SetTimeSpan  
 Chiamare questo metodo per impostare l'intervallo di tempo di `CFileTimeSpan` oggetto.  
  
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



