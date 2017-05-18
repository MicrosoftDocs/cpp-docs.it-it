---
title: Classe CComDynamicUnkArray | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComDynamicUnkArray
- ATLCOM/ATL::CComDynamicUnkArray
- ATLCOM/ATL::CComDynamicUnkArray::CComDynamicUnkArray
- ATLCOM/ATL::CComDynamicUnkArray::Add
- ATLCOM/ATL::CComDynamicUnkArray::begin
- ATLCOM/ATL::CComDynamicUnkArray::clear
- ATLCOM/ATL::CComDynamicUnkArray::end
- ATLCOM/ATL::CComDynamicUnkArray::GetAt
- ATLCOM/ATL::CComDynamicUnkArray::GetCookie
- ATLCOM/ATL::CComDynamicUnkArray::GetSize
- ATLCOM/ATL::CComDynamicUnkArray::GetUnknown
- ATLCOM/ATL::CComDynamicUnkArray::Remove
dev_langs:
- C++
helpviewer_keywords:
- connection points [C++], managing
- CComDynamicUnkArray class
ms.assetid: 202470d7-9a1b-498f-b96d-659d681acd65
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 69fc2c9dbb86f88c85461e765182fd88050521e9
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ccomdynamicunkarray-class"></a>CComDynamicUnkArray (classe)
Questa classe archivia una matrice di **IUnknown** puntatori.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CComDynamicUnkArray
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComDynamicUnkArray::CComDynamicUnkArray](#ccomdynamicunkarray)|Costruttore. Inizializza i valori dell'insieme **NULL** e le dimensioni della raccolta di zero.|  
|[CComDynamicUnkArray:: ~ CComDynamicUnkArray](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComDynamicUnkArray::Add](#add)|Chiamare questo metodo per aggiungere un `IUnknown` puntatore alla matrice.|  
|[CComDynamicUnkArray::begin](#begin)|Restituisce un puntatore al primo `IUnknown` puntatore nella raccolta.|  
|[CComDynamicUnkArray::clear](#clear)|Svuota la matrice.|  
|[CComDynamicUnkArray::end](#end)|Restituisce un puntatore alla prima posizione oltre l'ultimo **IUnknown** puntatore nella raccolta.|  
|[CComDynamicUnkArray::GetAt](#getat)|Recupera l'elemento in corrispondenza dell'indice specificato.|  
|[CComDynamicUnkArray::GetCookie](#getcookie)|Chiamare questo metodo per ottenere il cookie associato a un determinato **IUnknown** puntatore.|  
|[CComDynamicUnkArray::GetSize](#getsize)|Restituisce la lunghezza della matrice.|  
|[CComDynamicUnkArray::GetUnknown](#getunknown)|Chiamare questo metodo per ottenere il **IUnknown** puntatore associata a un cookie specificato.|  
|[CComDynamicUnkArray::Remove](#remove)|Chiamare questo metodo per rimuovere un **IUnknown** puntatore dalla matrice.|  
  
## <a name="remarks"></a>Note  
 **CComDynamicUnkArray** contiene una matrice allocata in modo dinamico di **IUnknown** puntatori, ogni punto di un'interfaccia su una connessione. **CComDynamicUnkArray** può essere utilizzato come parametro per il [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) classe modello.  
  
 Il **CComDynamicUnkArray** metodi [iniziare](#begin) e [end](#end) può essere utilizzato per scorrere tutti i punti di connessione (ad esempio, quando viene generato un evento).  
  
 Vedere [punti di connessione aggiunta a un oggetto](../../atl/adding-connection-points-to-an-object.md) per informazioni dettagliate su come automatizzare la creazione della connessione di punti di proxy.  
  
> [!NOTE]
> **Nota** la classe **CComDynamicUnkArray** viene utilizzato il **Aggiungi classe** guidata durante la creazione di un controllo che dispone di punti di connessione. Se si desidera specificare manualmente il numero di punti di connessione, modificare il riferimento da **CComDynamicUnkArray** a `CComUnkArray<` *n* `>`, dove *n* è il numero di punti di connessione necessarie.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="add"></a>CComDynamicUnkArray::Add  
 Chiamare questo metodo per aggiungere un **IUnknown** puntatore alla matrice.  
  
```
DWORD Add(IUnknown* pUnk);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 Il **IUnknown** puntatore per aggiungere alla matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il cookie associato con il puntatore appena aggiunto.  
  
##  <a name="begin"></a>CComDynamicUnkArray::begin  
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
  
##  <a name="clear"></a>CComDynamicUnkArray::clear  
 Svuota la matrice.  
  
```
void clear();
```  
  
##  <a name="ccomdynamicunkarray"></a>CComDynamicUnkArray::CComDynamicUnkArray  
 Costruttore.  
  
```
CComDynamicUnkArray();
```  
  
### <a name="remarks"></a>Note  
 Imposta le dimensioni della raccolta di zero e inizializza i valori per **NULL**. Il distruttore libera la raccolta, se necessario.  
  
##  <a name="dtor"></a>CComDynamicUnkArray:: ~ CComDynamicUnkArray  
 Distruttore.  
  
```
~CComDynamicUnkArray();
```  
  
### <a name="remarks"></a>Note  
 Libera le risorse allocate dal costruttore della classe.  
  
##  <a name="end"></a>CComDynamicUnkArray::end  
 Restituisce un puntatore alla prima posizione oltre l'ultimo **IUnknown** puntatore nella raccolta.  
  
```
IUnknown**
    end();
```     
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un **IUnknown** puntatore a interfaccia.  
  
##  <a name="getat"></a>CComDynamicUnkArray::GetAt  
 Recupera l'elemento in corrispondenza dell'indice specificato.  
  
```
IUnknown* GetAt(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice dell'elemento da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [IUnknown](http://msdn.microsoft.com/library/windows/desktop/ms680509) interfaccia.  
  
##  <a name="getcookie"></a>CComDynamicUnkArray::GetCookie  
 Chiamare questo metodo per ottenere il cookie associato a un determinato **IUnknown** puntatore.  
  
```
DWORD WINAPI GetCookie(IUnknown** ppFind);
```  
  
### <a name="parameters"></a>Parametri  
 `ppFind`  
 Il **IUnknown** puntatore per il quale è richiesto il cookie associato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il cookie associato il **IUnknown** puntatore, oppure zero se nessuna corrispondenza **IUnknown** puntatore viene trovato.  
  
### <a name="remarks"></a>Note  
 Se esiste più di un'istanza dello stesso **IUnknown** puntatore, questa funzione restituisce il cookie per il primo.  
  
##  <a name="getsize"></a>CComDynamicUnkArray::GetSize  
 Restituisce la lunghezza della matrice.  
  
```
int GetSize() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Lunghezza della matrice.  
  
##  <a name="getunknown"></a>CComDynamicUnkArray::GetUnknown  
 Chiamare questo metodo per ottenere il **IUnknown** puntatore associata a un cookie specificato.  
  
```
IUnknown* WINAPI GetUnknown(DWORD dwCookie);
```  
  
### <a name="parameters"></a>Parametri  
 `dwCookie`  
 Il cookie per il quale l'oggetto associato **IUnknown** puntatore è obbligatorio.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il **IUnknown** puntatore o NULL se viene individuato alcun cookie corrispondente.  
  
##  <a name="remove"></a>CComDynamicUnkArray::Remove  
 Chiamare questo metodo per rimuovere un **IUnknown** puntatore dalla matrice.  
  
```
BOOL Remove(DWORD dwCookie);
```  
  
### <a name="parameters"></a>Parametri  
 `dwCookie`  
 Cookie che fa riferimento il **IUnknown** puntatore da rimuovere dalla matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il puntatore viene rimosso; in caso contrario FALSE.  
  
## <a name="see-also"></a>Vedere anche  
 [CComUnkArray (classe)](../../atl/reference/ccomunkarray-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

