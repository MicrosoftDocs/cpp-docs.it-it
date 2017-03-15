---
title: Classe CComUnkArray | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ATL.CComUnkArray
- ATL.CComUnkArray<nMaxSize>
- ATL::CComUnkArray<nMaxSize>
- ATL::CComUnkArray
- CComUnkArray
dev_langs:
- C++
helpviewer_keywords:
- connection points [C++], managing
- CComUnkArray class
ms.assetid: 5fd4b378-a7b5-4cc1-8866-8ab72a73639e
caps.latest.revision: 17
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
translationtype: Machine Translation
ms.sourcegitcommit: 050e7483670bd32f633660ba44491c8bb3fc462d
ms.openlocfilehash: 94f1062ff3808f527874a8890eca95c9b655b1bf
ms.lasthandoff: 02/24/2017

---
# <a name="ccomunkarray-class"></a>CComUnkArray (classe)
Questa classe Archivia **IUnknown** puntatori ed è progettato per essere utilizzato come parametro per il [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) classe modello.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<unsigned int nMaxSize>
class CComUnkArray
```  
  
#### <a name="parameters"></a>Parametri  
 *nMaxSize*  
 Il numero massimo di **IUnknown** puntatori che possono essere contenuti nella matrice statica.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComUnkArray::CComUnkArray](#ccomunkarray)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComUnkArray::Add](#add)|Chiamare questo metodo per aggiungere un **IUnknown** puntatore alla matrice.|  
|[CComUnkArray::begin](#begin)|Restituisce un puntatore al primo **IUnknown** puntatore nella raccolta.|  
|[CComUnkArray::end](#end)|Restituisce un puntatore alla prima posizione oltre l'ultimo **IUnknown** puntatore nella raccolta.|  
|[CComUnkArray::GetCookie](#getcookie)|Chiamare questo metodo per ottenere il cookie associato a un determinato **IUnknown** puntatore.|  
|[CComUnkArray::GetUnknown](#getunknown)|Chiamare questo metodo per ottenere il **IUnknown** puntatore associata a un cookie specificato.|  
|[CComUnkArray::Remove](#remove)|Chiamare questo metodo per rimuovere un **IUnknown** puntatore dalla matrice.|  
  
## <a name="remarks"></a>Note  
 **CComUnkArray** contiene un numero fisso di **IUnknown** puntatori, ogni punto di un'interfaccia su una connessione. **CComUnkArray** può essere utilizzato come parametro per il [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) classe modello. **CComUnkArray\<1 >** è una specializzazione di modello di **CComUnkArray** che è stata ottimizzata per un punto di connessione.  
  
 Il **CComUnkArray** metodi [iniziare](#begin) e [end](#end) può essere utilizzato per scorrere tutti i punti di connessione (ad esempio, quando viene generato un evento).  
  
 Vedere [punti di connessione aggiunta a un oggetto](../../atl/adding-connection-points-to-an-object.md) per informazioni dettagliate su come automatizzare la creazione della connessione di punti di proxy.  
  
> [!NOTE]
> **Nota** la classe [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md) viene utilizzato il **Aggiungi classe** guidata durante la creazione di un controllo che dispone di punti di connessione. Se si desidera specificare manualmente il numero di punti di connessione, modificare il riferimento da **CComDynamicUnkArray** a `CComUnkArray<` *n* `>`, dove *n* è il numero di punti di connessione necessarie.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="a-nameadda--ccomunkarrayadd"></a><a name="add"></a>CComUnkArray::Add  
 Chiamare questo metodo per aggiungere un **IUnknown** puntatore alla matrice.  
  
```
DWORD Add(IUnknown* pUnk);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 Chiamare questo metodo per aggiungere un **IUnknown** puntatore alla matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il cookie associato il puntatore appena aggiunto, oppure 0 se la matrice non è abbastanza grande per contenere il nuovo puntatore.  
  
##  <a name="a-namebegina--ccomunkarraybegin"></a><a name="begin"></a>CComUnkArray::begin  
 Restituisce un puntatore all'inizio dell'insieme di **IUnknown** i puntatori all'interfaccia.  
  
```
IUnknown**
    begin();
```     
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un **IUnknown** puntatore a interfaccia.  
  
### <a name="remarks"></a>Note  
 La raccolta contiene puntatori alle interfacce archiviati localmente come **IUnknown**. Si esegue il cast di ogni **IUnknown** interfaccia per il tipo di interfaccia reali e quindi chiamare attraverso di esso. Non è necessario eseguire prima una query per l'interfaccia.  
  
 Prima di utilizzare il **IUnknown** interfaccia, è necessario controllare che non sia **NULL**.  
  
##  <a name="a-nameccomunkarraya--ccomunkarrayccomunkarray"></a><a name="ccomunkarray"></a>CComUnkArray::CComUnkArray  
 Costruttore.  
  
```
CComUnkArray();
```  
  
### <a name="remarks"></a>Note  
 Imposta la raccolta per contenere `nMaxSize` **IUnknown** puntatori e inizializza i puntatori ai **NULL**.  
  
##  <a name="a-nameenda--ccomunkarrayend"></a><a name="end"></a>CComUnkArray::end  
 Restituisce un puntatore alla prima posizione oltre l'ultimo **IUnknown** puntatore nella raccolta.  
  
```
IUnknown**
    end();
```     
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un **IUnknown** puntatore a interfaccia.  
  
### <a name="remarks"></a>Note  
 Il `CComUnkArray` metodi **iniziare** e **end** può essere utilizzato per scorrere in ciclo tutti punti di connessione, ad esempio, quando viene generato un evento.  
  
 [!code-cpp[NVC_ATL_COM&#44;](../../atl/codesnippet/cpp/ccomunkarray-class_1.cpp)]  
  
##  <a name="a-namegetcookiea--ccomunkarraygetcookie"></a><a name="getcookie"></a>CComUnkArray::GetCookie  
 Chiamare questo metodo per ottenere il cookie associato a un determinato **IUnknown** puntatore.  
  
```
DWORD WINAPI GetCookie(IUnknown** ppFind);
```  
  
### <a name="parameters"></a>Parametri  
 `ppFind`  
 Il **IUnknown** puntatore per il quale è richiesto il cookie associato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il cookie associato il **IUnknown** puntatore, oppure 0 se nessuna corrispondenza **IUnknown** puntatore viene trovato.  
  
### <a name="remarks"></a>Note  
 Se esiste più di un'istanza dello stesso **IUnknown** puntatore, questa funzione restituisce il cookie per il primo.  
  
##  <a name="a-namegetunknowna--ccomunkarraygetunknown"></a><a name="getunknown"></a>CComUnkArray::GetUnknown  
 Chiamare questo metodo per ottenere il **IUnknown** puntatore associata a un cookie specificato.  
  
```
IUnknown* WINAPI GetUnknown(DWORD dwCookie);
```  
  
### <a name="parameters"></a>Parametri  
 `dwCookie`  
 Il cookie per il quale l'oggetto associato **IUnknown** puntatore è obbligatorio.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il **IUnknown** puntatore o NULL se viene individuato alcun cookie corrispondente.  
  
##  <a name="a-nameremovea--ccomunkarrayremove"></a><a name="remove"></a>CComUnkArray::Remove  
 Chiamare questo metodo per rimuovere un **IUnknown** puntatore dalla matrice.  
  
```
BOOL Remove(DWORD dwCookie);
```  
  
### <a name="parameters"></a>Parametri  
 `dwCookie`  
 Cookie che fa riferimento il **IUnknown** puntatore da rimuovere dalla matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** se il puntatore viene rimosso, **FALSE** in caso contrario.  
  
## <a name="see-also"></a>Vedere anche  
 [CComDynamicUnkArray (classe)](../../atl/reference/ccomdynamicunkarray-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

