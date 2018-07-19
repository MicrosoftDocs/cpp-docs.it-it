---
title: Classe CComUnkArray | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 90622638c2cf26c8d34ec9b584611f91bc1836f4
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37883983"
---
# <a name="ccomunkarray-class"></a>Classe CComUnkArray
Questa classe Archivia `IUnknown` puntatori ed è progettato per essere utilizzato come parametro per il [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) classe modello.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<unsigned int nMaxSize>
class CComUnkArray
```  
  
#### <a name="parameters"></a>Parametri  
 *nMaxSize*  
 Il numero massimo di `IUnknown` puntatori che possono essere contenuti nella matrice statica.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComUnkArray::CComUnkArray](#ccomunkarray)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComUnkArray::Add](#add)|Chiamare questo metodo per aggiungere un `IUnknown` puntatore alla matrice.|  
|[CComUnkArray::begin](#begin)|Restituisce un puntatore al primo `IUnknown` puntatore nella raccolta.|  
|[CComUnkArray::end](#end)|Restituisce un puntatore alla prima posizione oltre l'ultimo `IUnknown` puntatore nella raccolta.|  
|[CComUnkArray::GetCookie](#getcookie)|Chiamare questo metodo per recuperare il cookie associato un determinato `IUnknown` puntatore.|  
|[CComUnkArray::GetUnknown](#getunknown)|Chiamare questo metodo per ottenere il `IUnknown` puntatore associato a un cookie specificato.|  
|[CComUnkArray::Remove](#remove)|Chiamare questo metodo per rimuovere un `IUnknown` puntatore dalla matrice.|  
  
## <a name="remarks"></a>Note  
 `CComUnkArray` contiene un numero fisso di `IUnknown` puntatori, ogni punto di un'interfaccia in una connessione. `CComUnkArray` può essere utilizzato come parametro per il [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) classe modello. `CComUnkArray<1>` è una specializzazione di modello di `CComUnkArray` che è stato ottimizzato per un punto di connessione.  
  
 Il `CComUnkArray` metodi [begin](#begin) e [end](#end) può essere utilizzato per scorrere tutti i punti di connessione (ad esempio, quando viene generato un evento).  
  
 Visualizzare [aggiunta di punti di connessione a un oggetto](../../atl/adding-connection-points-to-an-object.md) punto proxy di per informazioni dettagliate su come automatizzare la creazione della connessione.  
  
> [!NOTE]
> **Nota** della classe [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md) viene usato per il **Aggiungi classe** guidata durante la creazione di un controllo che offre punti di connessione. Se si desidera specificare manualmente il numero di punti di connessione, modificare il riferimento dal `CComDynamicUnkArray` al `CComUnkArray<` *n* `>`, dove *n* è il numero di punti di connessione Obbligatorio.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="add"></a>  CComUnkArray::Add  
 Chiamare questo metodo per aggiungere un `IUnknown` puntatore alla matrice.  
  
```
DWORD Add(IUnknown* pUnk);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnk*  
 Chiamare questo metodo per aggiungere un `IUnknown` puntatore alla matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il cookie associato con il puntatore appena aggiunto oppure 0 se la matrice non è sufficientemente grande da contenere il nuovo puntatore.  
  
##  <a name="begin"></a>  CComUnkArray::begin  
 Restituisce un puntatore all'inizio della raccolta di `IUnknown` puntatori a interfaccia.  
  
```
IUnknown**
    begin();
```     
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `IUnknown` puntatore a interfaccia.  
  
### <a name="remarks"></a>Note  
 La raccolta contiene i puntatori alle interfacce archiviati in locale come `IUnknown`. Si esegue il cast di ogni `IUnknown` interfaccia per il tipo di interfaccia reale e quindi chiamare attraverso di esso. Non è necessaria eseguire una query per l'interfaccia prima di tutto.  
  
 Prima di usare il `IUnknown` interfaccia, è necessario verificare che non è NULL.  
  
##  <a name="ccomunkarray"></a>  CComUnkArray::CComUnkArray  
 Costruttore.  
  
```
CComUnkArray();
```  
  
### <a name="remarks"></a>Note  
 Imposta la raccolta che contenga `nMaxSize` `IUnknown` i puntatori e inizializza i puntatori a NULL.  
  
##  <a name="end"></a>  CComUnkArray::end  
 Restituisce un puntatore alla prima posizione oltre l'ultimo `IUnknown` puntatore nella raccolta.  
  
```
IUnknown**
    end();
```     
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `IUnknown` puntatore a interfaccia.  
  
### <a name="remarks"></a>Note  
 Il `CComUnkArray` metodi `begin` e `end` può essere utilizzato per scorrere in ciclo tutti i punti di connessione, ad esempio, quando viene generato un evento.  
  
 [!code-cpp[NVC_ATL_COM#44](../../atl/codesnippet/cpp/ccomunkarray-class_1.cpp)]  
  
##  <a name="getcookie"></a>  CComUnkArray::GetCookie  
 Chiamare questo metodo per recuperare il cookie associato un determinato `IUnknown` puntatore.  
  
```
DWORD WINAPI GetCookie(IUnknown** ppFind);
```  
  
### <a name="parameters"></a>Parametri  
 *ppFind*  
 Il `IUnknown` puntatore per cui è richiesto il cookie associato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il cookie associato con il `IUnknown` puntatore o 0 se non corrisponde ad alcuna `IUnknown` puntatore viene trovato.  
  
### <a name="remarks"></a>Note  
 Se sono presenti più istanze dello stesso `IUnknown` puntatore, questa funzione restituisce il cookie per il primo.  
  
##  <a name="getunknown"></a>  CComUnkArray::GetUnknown  
 Chiamare questo metodo per ottenere il `IUnknown` puntatore associato a un cookie specificato.  
  
```
IUnknown* WINAPI GetUnknown(DWORD dwCookie);
```  
  
### <a name="parameters"></a>Parametri  
 *dwCookie*  
 Per il quale il cookie associato `IUnknown` puntatore è obbligatorio.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il `IUnknown` puntatore, o NULL se nessun cookie corrisponda viene trovato.  
  
##  <a name="remove"></a>  CComUnkArray::Remove  
 Chiamare questo metodo per rimuovere un `IUnknown` puntatore dalla matrice.  
  
```
BOOL Remove(DWORD dwCookie);
```  
  
### <a name="parameters"></a>Parametri  
 *dwCookie*  
 Il cookie che fa riferimento il `IUnknown` puntatore da rimuovere dalla matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il puntatore viene rimosso, FALSE in caso contrario.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md)   
 [Panoramica della classe](../../atl/atl-class-overview.md)
