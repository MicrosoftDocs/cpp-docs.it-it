---
title: Classe IEnumOnSTLImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IEnumOnSTLImpl
- ATLCOM/ATL::IEnumOnSTLImpl
- ATLCOM/ATL::IEnumOnSTLImpl::Clone
- ATLCOM/ATL::IEnumOnSTLImpl::Init
- ATLCOM/ATL::IEnumOnSTLImpl::Next
- ATLCOM/ATL::IEnumOnSTLImpl::Reset
- ATLCOM/ATL::IEnumOnSTLImpl::Skip
- ATLCOM/ATL::IEnumOnSTLImpl::m_iter
- ATLCOM/ATL::IEnumOnSTLImpl::m_pcollection
- ATLCOM/ATL::IEnumOnSTLImpl::m_spUnk
dev_langs:
- C++
helpviewer_keywords:
- IEnumOnSTLImpl class
ms.assetid: 1789e77b-88b8-447d-a490-806b918912ce
caps.latest.revision: 20
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
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 291993d2914d6082b69bfe7816d7c805e93494c4
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ienumonstlimpl-class"></a>Classe IEnumOnSTLImpl
Questa classe definisce un'interfaccia di enumeratore basata su una raccolta della libreria Standard C++.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Base,
    const IID* piid, class T, class Copy, class CollType>  
class ATL_NO_VTABLE IEnumOnSTLImpl : public Base
```  
  
#### <a name="parameters"></a>Parametri  
 `Base`  
 Un enumeratore COM ( [IEnumXXXX](https://msdn.microsoft.com/library/ms680089.aspx)) dell'interfaccia.  
  
 `piid`  
 Puntatore all'ID dell'interfaccia dell'enumeratore.  
  
 `T`  
 Il tipo di elemento esposta dall'interfaccia dell'enumeratore.  
  
 `Copy`  
 Oggetto [copiare criteri classe](../../atl/atl-copy-policy-classes.md).  
  
 `CollType`  
 Classe contenitore della libreria Standard C++.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IEnumOnSTLImpl::Clone](#clone)|L'implementazione di [IEnumXXXX::Clone](https://msdn.microsoft.com/library/ms690336.aspx).|  
|[IEnumOnSTLImpl::Init](#init)|Inizializza l'enumeratore.|  
|[IEnumOnSTLImpl::Next](#next)|L'implementazione di [IEnumXXXX::Next](https://msdn.microsoft.com/library/ms695273.aspx).|  
|[IEnumOnSTLImpl::Reset](#reset)|L'implementazione di [IEnumXXXX::Reset](https://msdn.microsoft.com/library/ms693414.aspx).|  
|[IEnumOnSTLImpl::Skip](#skip)|L'implementazione di [IEnumXXXX::Skip](https://msdn.microsoft.com/library/ms690392.aspx).|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IEnumOnSTLImpl::m_iter](#m_iter)|Iteratore che rappresenta la posizione corrente dell'enumeratore all'interno della raccolta.|  
|[IEnumOnSTLImpl::m_pcollection](#m_pcollection)|Puntatore al contenitore della libreria Standard C++ che contiene gli elementi da enumerare.|  
|[IEnumOnSTLImpl::m_spUnk](#m_spunk)|Il **IUnknown** puntatore dell'oggetto che fornisce la raccolta.|  
  
## <a name="remarks"></a>Note  
 `IEnumOnSTLImpl`fornisce l'implementazione per un'interfaccia di enumeratore COM in cui sono archiviati gli elementi enumerati in un contenitore compatibile della libreria Standard C++. Questa classe è analoga al [CComEnumImpl](../../atl/reference/ccomenumimpl-class.md) classe che fornisce un'implementazione per un'interfaccia di enumeratore basato su una matrice.  
  
> [!NOTE]
>  Vedere [CComEnumImpl::Init](../../atl/reference/ccomenumimpl-class.md#init) per informazioni dettagliate sulle altre differenze tra `CComEnumImpl` e `IEnumOnSTLImpl`.  
  
 In genere, sarà *non* è necessario creare la propria classe enumeratore mediante la derivazione da questa implementazione dell'interfaccia. Se si desidera utilizzare un enumeratore specificato ATL basato su un contenitore di libreria Standard C++, è più comune per creare un'istanza di [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md), o per creare una classe di raccolte che restituisce un enumeratore derivando da [ICollectionOnSTLImpl](../../atl/reference/icollectiononstlimpl-class.md).  
  
 Tuttavia, se è necessario fornire un enumeratore personalizzato (ad esempio, uno che espone le interfacce oltre all'interfaccia di enumeratore), è possibile derivare da questa classe. In questo caso è probabile che sarà necessario eseguire l'override di [Clone](#clone) metodo per fornire la propria implementazione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Base`  
  
 `IEnumOnSTLImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="init"></a>IEnumOnSTLImpl::Init  
 Inizializza l'enumeratore.  
  
```
HRESULT Init(
    IUnknown* pUnkForRelease,
    CollType& collection);
```  
  
### <a name="parameters"></a>Parametri  
 `pUnkForRelease`  
 [in] Il **IUnknown** puntatore di un oggetto che deve essere mantenuto attivo durante il ciclo di vita dell'enumeratore. Passare **NULL** se non esiste alcun oggetto di questo tipo.  
  
 `collection`  
 Un riferimento al contenitore di libreria Standard C++ che contiene gli elementi da enumerare.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Se si passa `Init` mantenuto un riferimento a una raccolta in un altro oggetto, è possibile utilizzare il `pUnkForRelease` parametro per garantire che l'oggetto e la raccolta contiene, è disponibile per fino a quando l'enumeratore ha bisogno.  
  
 È necessario chiamare questo metodo prima di passare un puntatore a interfaccia dell'enumeratore a qualsiasi client.  
  
##  <a name="clone"></a>IEnumOnSTLImpl::Clone  
 Questo metodo fornisce l'implementazione di [IEnumXXXX::Clone](https://msdn.microsoft.com/library/ms690336.aspx) metodo mediante la creazione di un oggetto di tipo `CComEnumOnSTL`, inizializzandola con la stessa raccolta e l'iteratore utilizzato dall'oggetto corrente e restituisce l'interfaccia sull'oggetto appena creato.  
  
```
STDMETHOD(Clone)(Base** ppEnum);
```  
  
### <a name="parameters"></a>Parametri  
 `ppEnum`  
 [out] Interfaccia in un nuovo oggetto clonato dell'enumeratore corrente dell'enumeratore.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="m_spunk"></a>IEnumOnSTLImpl::m_spUnk  
 Il **IUnknown** puntatore dell'oggetto che fornisce la raccolta.  
  
```
CComPtr<IUnknown> m_spUnk;
```  
  
### <a name="remarks"></a>Note  
 Questo puntatore intelligente mantiene un riferimento all'oggetto passato a [IEnumOnSTLImpl::Init](#init), assicurando che rimanga attivo durante il ciclo di vita dell'enumeratore.  
  
##  <a name="m_pcollection"></a>IEnumOnSTLImpl::m_pcollection  
 Questo membro fa riferimento alla raccolta che fornisce i dati dell'implementazione dell'interfaccia dell'enumeratore.  
  
```
CollType* m_pcollection;
```  
  
### <a name="remarks"></a>Note  
 Questo membro viene inizializzato da una chiamata a [IEnumOnSTLImpl::Init](#init).  
  
##  <a name="m_iter"></a>IEnumOnSTLImpl::m_iter  
 Questo membro contiene l'iteratore utilizzato per contrassegnare la posizione corrente all'interno della raccolta e passare a elementi successivi.  
  
```
CollType::iterator m_iter;
```  
  
##  <a name="next"></a>IEnumOnSTLImpl::Next  
 Questo metodo fornisce l'implementazione di [IEnumXXXX::Next](https://msdn.microsoft.com/library/ms695273.aspx) metodo.  
  
```
STDMETHOD(Next)(
    ULONG celt,
    T* rgelt,
    ULONG* pceltFetched);
```  
  
### <a name="parameters"></a>Parametri  
 `celt`  
 [in] Il numero di elementi richiesti.  
  
 `rgelt`  
 [out] Matrice da riempire con gli elementi.  
  
 `pceltFetched`  
 [out] Il numero di elementi effettivamente restituiti nella `rgelt`. Può essere minore di `celt` se meno di `celt` elementi rimangono nell'elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="reset"></a>IEnumOnSTLImpl::Reset  
 Questo metodo fornisce l'implementazione di [IEnumXXXX::Reset](https://msdn.microsoft.com/library/ms693414.aspx) metodo.  
  
```
STDMETHOD(Reset)(void);
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="skip"></a>IEnumOnSTLImpl::Skip  
 Questo metodo fornisce l'implementazione di [IEnumXXXX::Skip](https://msdn.microsoft.com/library/ms690392.aspx) metodo.  
  
```
STDMETHOD(Skip)(ULONG celt);
```  
  
### <a name="parameters"></a>Parametri  
 `celt`  
 [in] Il numero di elementi da ignorare.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

