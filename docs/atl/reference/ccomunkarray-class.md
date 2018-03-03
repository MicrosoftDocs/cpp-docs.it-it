---
title: Classe CComUnkArray | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComUnkArray
- ATLCOM/ATL::CComUnkArray
- ATLCOM/ATL::CComUnkArray::CComUnkArray
- ATLCOM/ATL::CComUnkArray::Add
- ATLCOM/ATL::CComUnkArray::begin
- ATLCOM/ATL::CComUnkArray::end
- ATLCOM/ATL::CComUnkArray::GetCookie
- ATLCOM/ATL::CComUnkArray::GetUnknown
- ATLCOM/ATL::CComUnkArray::Remove
dev_langs:
- C++
helpviewer_keywords:
- connection points [C++], managing
- CComUnkArray class
ms.assetid: 5fd4b378-a7b5-4cc1-8866-8ab72a73639e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3ca462648a43869b11984e4582c8eb2c3dfaece7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
|[CComUnkArray::end](#end)|Restituisce un puntatore oltre l'ultimo **IUnknown** puntatore nella raccolta.|  
|[CComUnkArray::GetCookie](#getcookie)|Chiamare questo metodo per ottenere il cookie associato a un determinato **IUnknown** puntatore.|  
|[CComUnkArray::GetUnknown](#getunknown)|Chiamare questo metodo per ottenere il **IUnknown** puntatore associata a un cookie specificato.|  
|[CComUnkArray::Remove](#remove)|Chiamare questo metodo per rimuovere un **IUnknown** puntatore dalla matrice.|  
  
## <a name="remarks"></a>Note  
 **CComUnkArray** contiene un numero fisso di **IUnknown** puntatori, ogni punto di un'interfaccia in una connessione. **CComUnkArray** può essere utilizzato come parametro per il [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) classe modello. **CComUnkArray\<1 >** è una specializzazione di modello di **CComUnkArray** che è stata ottimizzata per un punto di connessione.  
  
 Il **CComUnkArray** metodi [iniziare](#begin) e [fine](#end) può essere utilizzato per scorrere tutti i punti di connessione (ad esempio, quando viene generato un evento).  
  
 Vedere [aggiunta di punti di connessione a un oggetto](../../atl/adding-connection-points-to-an-object.md) per informazioni dettagliate su come automatizzare la creazione della connessione puntare proxy.  
  
> [!NOTE]
> **Nota** la classe [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md) viene utilizzato il **Aggiungi classe** procedura guidata durante la creazione di un controllo che dispone di punti di connessione. Se si desidera specificare manualmente il numero di punti di connessione, modificare il riferimento da **CComDynamicUnkArray** a `CComUnkArray<`  *n*  `>`, dove  *n*  è il numero di punti di connessione necessarie.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="add"></a>CComUnkArray::Add  
 Chiamare questo metodo per aggiungere un **IUnknown** puntatore alla matrice.  
  
```
DWORD Add(IUnknown* pUnk);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 Chiamare questo metodo per aggiungere un **IUnknown** puntatore alla matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il cookie associato con il puntatore appena aggiunto, oppure 0 se la matrice non è sufficientemente grande da contenere il nuovo puntatore.  
  
##  <a name="begin"></a>CComUnkArray::begin  
 Restituisce un puntatore all'inizio dell'insieme di **IUnknown** i puntatori a interfaccia.  
  
```
IUnknown**
    begin();
```     
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un **IUnknown** puntatore a interfaccia.  
  
### <a name="remarks"></a>Note  
 La raccolta contiene i puntatori alle interfacce archiviati in locale come **IUnknown**. Si esegue il cast di ogni **IUnknown** l'interfaccia per il tipo di interfaccia reale e quindi chiamare attraverso di esso. Non è necessario eseguire prima una query per l'interfaccia.  
  
 Prima di utilizzare il **IUnknown** interfaccia, è necessario controllare che non sia **NULL**.  
  
##  <a name="ccomunkarray"></a>CComUnkArray::CComUnkArray  
 Costruttore.  
  
```
CComUnkArray();
```  
  
### <a name="remarks"></a>Note  
 Imposta la raccolta per contenere `nMaxSize` **IUnknown** puntatori e inizializza i puntatori ai **NULL**.  
  
##  <a name="end"></a>CComUnkArray::end  
 Restituisce un puntatore oltre l'ultimo **IUnknown** puntatore nella raccolta.  
  
```
IUnknown**
    end();
```     
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un **IUnknown** puntatore a interfaccia.  
  
### <a name="remarks"></a>Note  
 Il `CComUnkArray` metodi **iniziare** e **fine** può essere utilizzato per scorrere tutti i punti di connessione, ad esempio, quando viene generato un evento.  
  
 [!code-cpp[NVC_ATL_COM#44](../../atl/codesnippet/cpp/ccomunkarray-class_1.cpp)]  
  
##  <a name="getcookie"></a>CComUnkArray::GetCookie  
 Chiamare questo metodo per ottenere il cookie associato a un determinato **IUnknown** puntatore.  
  
```
DWORD WINAPI GetCookie(IUnknown** ppFind);
```  
  
### <a name="parameters"></a>Parametri  
 `ppFind`  
 Il **IUnknown** puntatore per cui è richiesto il cookie associato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il cookie associato il **IUnknown** puntatore, oppure 0 se non corrisponde ad alcuna **IUnknown** puntatore è stato trovato.  
  
### <a name="remarks"></a>Note  
 Se è presente più di un'istanza dello stesso **IUnknown** puntatore, questa funzione restituisce il cookie per la prima.  
  
##  <a name="getunknown"></a>CComUnkArray::GetUnknown  
 Chiamare questo metodo per ottenere il **IUnknown** puntatore associata a un cookie specificato.  
  
```
IUnknown* WINAPI GetUnknown(DWORD dwCookie);
```  
  
### <a name="parameters"></a>Parametri  
 `dwCookie`  
 Per il quale il cookie associato **IUnknown** puntatore è obbligatorio.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il **IUnknown** puntatore o NULL se viene rilevato alcun cookie corrispondente.  
  
##  <a name="remove"></a>CComUnkArray::Remove  
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
