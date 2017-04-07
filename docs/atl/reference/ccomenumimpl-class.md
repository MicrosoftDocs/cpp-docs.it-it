---
title: Classe CComEnumImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComEnumImpl
- ATLCOM/ATL::CComEnumImpl
- ATLCOM/ATL::CComEnumImpl::CComEnumImpl
- ATLCOM/ATL::CComEnumImpl::Clone
- ATLCOM/ATL::CComEnumImpl::Init
- ATLCOM/ATL::CComEnumImpl::Next
- ATLCOM/ATL::CComEnumImpl::Reset
- ATLCOM/ATL::CComEnumImpl::Skip
- ATLCOM/ATL::CComEnumImpl::m_begin
- ATLCOM/ATL::CComEnumImpl::m_dwFlags
- ATLCOM/ATL::CComEnumImpl::m_end
- ATLCOM/ATL::CComEnumImpl::m_iter
- ATLCOM/ATL::CComEnumImpl::m_spUnk
dev_langs:
- C++
helpviewer_keywords:
- CComEnumImpl class
ms.assetid: cc0d8e76-e608-46db-87cd-4c7161fe32d2
caps.latest.revision: 19
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
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 6dc6a8ed6a318642efe58dfb94835d45b2163b54
ms.lasthandoff: 02/24/2017

---
# <a name="ccomenumimpl-class"></a>Classe CComEnumImpl
Questa classe fornisce l'implementazione per un'interfaccia di enumeratore COM in cui sono archiviati gli elementi enumerati in una matrice.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Base,
    const IID* piid, class T, class Copy>  
class ATL_NO_VTABLE CComEnumImpl : public Base
```  
  
#### <a name="parameters"></a>Parametri  
 `Base`  
 Un enumeratore COM ( [IEnumXXXX](https://msdn.microsoft.com/library/ms680089.aspx)) dell'interfaccia.  
  
 `piid`  
 Puntatore all'ID dell'interfaccia dell'enumeratore.  
  
 `T`  
 Il tipo di elemento esposta dall'interfaccia dell'enumeratore.  
  
 `Copy`  
 Un omogenea [copiare criteri classe](../../atl/atl-copy-policy-classes.md).  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComEnumImpl::CComEnumImpl](#ccomenumimpl)|Costruttore.|  
|[CComEnumImpl:: ~ CComEnumImpl](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComEnumImpl::Clone](#clone)|L'implementazione di [IEnumXXXX::Clone](https://msdn.microsoft.com/library/ms690336.aspx).|  
|[CComEnumImpl::Init](#init)|Inizializza l'enumeratore.|  
|[CComEnumImpl::Next](#next)|L'implementazione di [IEnumXXXX::Next](https://msdn.microsoft.com/library/ms695273.aspx).|  
|[CComEnumImpl::Reset](#reset)|L'implementazione di [IEnumXXXX::Reset](https://msdn.microsoft.com/library/ms693414.aspx).|  
|[CComEnumImpl](#skip)|L'implementazione di [IEnumXXXX::Skip](https://msdn.microsoft.com/library/ms690392.aspx).|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComEnumImpl::m_begin](#m_begin)|Puntatore al primo elemento nella matrice.|  
|[CComEnumImpl::m_dwFlags](#m_dwflags)|Copiare flag passati tramite `Init`.|  
|[CComEnumImpl::m_end](#m_end)|Puntatore alla posizione oltre l'ultimo elemento nella matrice.|  
|[CComEnumImpl::m_iter](#m_iter)|Puntatore all'elemento corrente nella matrice.|  
|[CComEnumImpl::m_spUnk](#m_spunk)|Il **IUnknown** puntatore dell'oggetto che fornisce la raccolta viene enumerata.|  
  
## <a name="remarks"></a>Note  
 `CComEnumImpl`fornisce l'implementazione per un'interfaccia di enumeratore COM in cui sono archiviati gli elementi enumerati in una matrice. Questa classe è analoga alla `IEnumOnSTLImpl` classe che fornisce un'implementazione di un'interfaccia di enumeratore basato su un contenitore di libreria Standard C++.  
  
> [!NOTE]
>  Per informazioni dettagliate sulle altre differenze tra `CComEnumImpl` e `IEnumOnSTLImpl`, vedere [CComEnumImpl::Init](#init).  
  
 In genere, sarà *non* è necessario creare la propria classe enumeratore mediante la derivazione da questa implementazione dell'interfaccia. Se si desidera utilizzare un enumeratore specificato ATL basato su una matrice, è più comune per creare un'istanza di [CComEnum](../../atl/reference/ccomenum-class.md).  
  
 Tuttavia, se è necessario fornire un enumeratore personalizzato (ad esempio, uno che espone le interfacce oltre all'interfaccia di enumeratore), è possibile derivare da questa classe. In questo caso, è probabile che sarà necessario eseguire l'override di [CComEnumImpl::Clone](#clone) metodo per fornire la propria implementazione.  
  
 Per ulteriori informazioni, vedere [insiemi ed enumeratori ATL](../../atl/atl-collections-and-enumerators.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Base`  
  
 `CComEnumImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="ccomenumimpl"></a>CComEnumImpl::CComEnumImpl  
 Costruttore.  
  
```
CComEnumImpl();
```  
  
##  <a name="dtor"></a>CComEnumImpl:: ~ CComEnumImpl  
 Distruttore.  
  
```
~CComEnumImpl();
```  
  
##  <a name="init"></a>CComEnumImpl::Init  
 È necessario chiamare questo metodo prima di passare un puntatore a interfaccia dell'enumeratore a qualsiasi client.  
  
```
HRESULT Init(
    T* begin,
    T* end,
    IUnknown* pUnk,
    CComEnumFlags flags = AtlFlagNoCopy);
```  
  
### <a name="parameters"></a>Parametri  
 *begin*  
 Puntatore al primo elemento della matrice contenente gli elementi da enumerare.  
  
 `end`  
 Puntatore alla posizione immediatamente successiva all'ultimo elemento della matrice contenente gli elementi da enumerare.  
  
 *pUnk*  
 [in] Il **IUnknown** puntatore di un oggetto che deve essere mantenuto attivo durante il ciclo di vita dell'enumeratore. Passare **NULL** se non esiste alcun oggetto di questo tipo.  
  
 `flags`  
 Flag che specificano se l'enumeratore deve assumere la proprietà della matrice o crearne una copia. I valori possibili sono descritti di seguito.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo solo una volta, inizializzare l'enumeratore, utilizzato, quindi eliminarlo.  
  
 Se si passano i puntatori agli elementi nella matrice contenuti in un altro oggetto (e non deve chiedere l'enumeratore per copiare i dati), è possibile utilizzare il *pUnk* parametro per garantire che l'oggetto e la matrice contiene siano disponibili per fino a quando l'enumeratore necessari. L'enumeratore contiene semplicemente un riferimento COM all'oggetto per mantenerlo attivo. Il riferimento COM viene rilasciato automaticamente quando l'enumeratore viene eliminato.  
  
 Il `flags` parametro consente di specificare come l'enumeratore deve considerare gli elementi della matrice passati. `flags`può assumere uno dei valori di **CComEnumFlags** enumerazione illustrato di seguito:  
  
```  
enum CComEnumFlags  
   {  
   AtlFlagNoCopy = 0,  
   AtlFlagTakeOwnership = 2, // BitOwn  
   AtlFlagCopy = 3           // BitOwn | BitCopy  
   };  
```  
  
 **AtlFlagNoCopy** indica che la durata della matrice non verrà controllata dall'enumeratore. In questo caso, sarà una matrice statica o l'oggetto identificato da *pUnk* sarà responsabile per il rilascio della matrice quando non è più necessario.  
  
 **AtlFlagTakeOwnership** indica che l'eliminazione della matrice deve essere controllato tramite l'enumeratore. In questo caso, la matrice deve dinamicamente allocata utilizzando **nuova**. L'enumeratore eliminerà la matrice nel relativo distruttore. In genere, è necessario passare il **NULL** per *pUnk*, anche se è ancora possibile passare un puntatore valido se si desidera ricevere una notifica di eliminazione dell'enumeratore per qualche motivo.  
  
 **AtlFlagCopy** indica che una nuova matrice deve essere creata copiando la matrice passata al `Init`. Durata della nuova matrice è di essere controllate dall'enumeratore. L'enumeratore eliminerà la matrice nel relativo distruttore. In genere, è necessario passare il **NULL** per *pUnk*, anche se è ancora possibile passare un puntatore valido se si desidera ricevere una notifica di eliminazione dell'enumeratore per qualche motivo.  
  
> [!NOTE]
>  Il prototipo di questo metodo consente di specificare gli elementi della matrice come tipo **T**, dove **T** è stato definito come parametro di modello per la classe. Questo è lo stesso tipo che viene esposta tramite il metodo di interfaccia COM [CComEnumImpl::Next](#next). L'implicazione di ciò è che, a differenza di [IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md), questa classe non supporta l'archiviazione diversi ed esposti i tipi di dati. Il tipo di dati degli elementi nella matrice deve essere uguale al tipo di dati esposto tramite l'interfaccia COM.  
  
##  <a name="clone"></a>CComEnumImpl::Clone  
 Questo metodo fornisce l'implementazione di [IEnumXXXX::Clone](https://msdn.microsoft.com/library/ms690336.aspx) metodo mediante la creazione di un oggetto di tipo `CComEnum`, inizializzandola con la stessa matrice e iteratori utilizzato dall'oggetto corrente e restituisce l'interfaccia sull'oggetto appena creato.  
  
```
STDMETHOD(Clone)(Base** ppEnum);
```  
  
### <a name="parameters"></a>Parametri  
 `ppEnum`  
 [out] Interfaccia in un nuovo oggetto clonato dell'enumeratore corrente dell'enumeratore.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Si noti che gli enumeratori clonati mai i propri copia (o take ownership) dei dati utilizzati dall'enumeratore originale. Se necessario, enumeratori clonati verranno conserva l'enumeratore originale (tramite un riferimento COM) per garantire che i dati sono disponibili per, purché ne hanno bisogno.  
  
##  <a name="m_spunk"></a>CComEnumImpl::m_spUnk  
 Questo puntatore intelligente mantiene un riferimento all'oggetto passato a [CComEnumImpl::Init](#init), assicurando che rimanga attivo durante il ciclo di vita dell'enumeratore.  
  
```
CComPtr<IUnknown> m_spUnk;
```  
  
##  <a name="m_begin"></a>CComEnumImpl::m_begin  
 Puntatore alla posizione immediatamente successiva all'ultimo elemento della matrice contenente gli elementi da enumerare.  
  
```
T* m_begin;
```  
  
##  <a name="m_end"></a>CComEnumImpl::m_end  
 Puntatore al primo elemento della matrice contenente gli elementi da enumerare.  
  
```
T* m_end;
```  
  
##  <a name="m_iter"></a>CComEnumImpl::m_iter  
 Puntatore all'elemento corrente della matrice contenente gli elementi da enumerare.  
  
```
T* m_iter;
```  
  
##  <a name="m_dwflags"></a>CComEnumImpl::m_dwFlags  
 Il flag passati a [CComEnumImpl::Init](#init).  
  
```
DWORD m_dwFlags;
```  
  
##  <a name="next"></a>CComEnumImpl::Next  
 Questo metodo fornisce l'implementazione di [IEnumXXXX::Next](https://msdn.microsoft.com/library/ms695273.aspx) metodo.  
  
```
STDMETHOD(Next)(ULONG celt, T* rgelt, ULONG* pceltFetched);
```  
  
### <a name="parameters"></a>Parametri  
 `celt`  
 [in] Il numero di elementi richiesti.  
  
 `rgelt`  
 [out] Matrice da riempire con gli elementi.  
  
 `pceltFetched`  
 [out] Il numero di elementi effettivamente restituiti nella `rgelt`. Può essere minore di `celt` se meno di `celt` sono rimasti elementi nell'elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="reset"></a>CComEnumImpl::Reset  
 Questo metodo fornisce l'implementazione di [IEnumXXXX::Reset](https://msdn.microsoft.com/library/ms693414.aspx) metodo.  
  
```
STDMETHOD(Reset)(void);
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="skip"></a>CComEnumImpl  
 Questo metodo fornisce l'implementazione di [IEnumXXXX::Skip](https://msdn.microsoft.com/library/ms690392.aspx) metodo.  
  
```
STDMETHOD(Skip)(ULONG celt);
```  
  
### <a name="parameters"></a>Parametri  
 `celt`  
 [in] Il numero di elementi da ignorare.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Restituisce E_INVALIDARG se `celt` è zero, restituisce S_FALSE se minore `celt` vengono restituiti gli elementi, in caso contrario restituisce S_OK.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)   
 [Classe CComEnum](../../atl/reference/ccomenum-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

