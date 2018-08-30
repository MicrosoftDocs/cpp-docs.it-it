---
title: Classe IEnumOnSTLImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 15f0b26c5c86d023d98d6a13e6b92518756a3179
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43206206"
---
# <a name="ienumonstlimpl-class"></a>Classe IEnumOnSTLImpl
Questa classe definisce un'interfaccia dell'enumeratore basata su una raccolta della libreria Standard C++.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Base,
    const IID* piid, class T, class Copy, class CollType>  
class ATL_NO_VTABLE IEnumOnSTLImpl : public Base
```  
  
#### <a name="parameters"></a>Parametri  
 *base*  
 Enumeratore COM. Visualizzare [IEnumString](/windows/desktop/api/objidl/nn-objidl-ienumstring) per un esempio.
  
 *piid*  
 Un puntatore all'ID di interfaccia di interfaccia dell'enumeratore.  
  
 *T*  
 Il tipo di elemento esposto dall'interfaccia dell'enumeratore.  
  
 *Copia*  
 Oggetto [copiare criteri classe](../../atl/atl-copy-policy-classes.md).  
  
 *CollType*  
 Classe contenitore della libreria Standard C++.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IEnumOnSTLImpl::Clone](#clone)|L'implementazione di **Clone**.|  
|[IEnumOnSTLImpl::Init](#init)|Inizializza l'enumeratore.|  
|[IEnumOnSTLImpl::Next](#next)|L'implementazione di **successivo**.|  
|[IEnumOnSTLImpl::Reset](#reset)|L'implementazione di **reimpostare**.|  
|[IEnumOnSTLImpl::Skip](#skip)|L'implementazione di **Skip**.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IEnumOnSTLImpl::m_iter](#m_iter)|Iteratore che rappresenta la posizione corrente dell'enumeratore nella raccolta.|  
|[IEnumOnSTLImpl::m_pcollection](#m_pcollection)|Puntatore al contenitore della libreria Standard C++ che contiene gli elementi da enumerare.|  
|[IEnumOnSTLImpl::m_spUnk](#m_spunk)|Il `IUnknown` puntatore dell'oggetto che fornisce la raccolta.|  
  
## <a name="remarks"></a>Note  
 `IEnumOnSTLImpl` fornisce l'implementazione di un'interfaccia dell'enumeratore COM in cui sono archiviati gli elementi vengono enumerati in un contenitore della libreria Standard C++ compatibile con. Questa classe è analoga per il [CComEnumImpl](../../atl/reference/ccomenumimpl-class.md) (classe), che fornisce un'implementazione per un'interfaccia dell'enumeratore basato su una matrice.  
  
> [!NOTE]
>  Visualizzare [CComEnumImpl::Init](../../atl/reference/ccomenumimpl-class.md#init) per informazioni dettagliate sulle altre differenze tra `CComEnumImpl` e `IEnumOnSTLImpl`.  
  
 In genere, verrà *non* necessario creare una classe enumerator mediante la derivazione da questa implementazione dell'interfaccia. Se si desidera utilizzare un enumeratore fornito ATL dal basato su un contenitore della libreria Standard C++, è più comune per creare un'istanza di [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md), o per creare una classe collection che restituisce un enumeratore derivando dal [ICollectionOnSTLImpl](../../atl/reference/icollectiononstlimpl-class.md).  
  
 Tuttavia, se è necessario fornire un enumeratore personalizzato (ad esempio, uno che espone le interfacce oltre all'interfaccia dell'enumeratore), è possibile derivare da questa classe. In questo caso è probabile che sarà necessario eseguire l'override di [Clone](#clone) metodo per fornire la propria implementazione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `Base`  
  
 `IEnumOnSTLImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
##  <a name="init"></a>  IEnumOnSTLImpl::Init  
 Inizializza l'enumeratore.  
  
```
HRESULT Init(
    IUnknown* pUnkForRelease,
    CollType& collection);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnkForRelease*  
 [in] Il `IUnknown` puntatore di un oggetto che deve essere mantenuto attivo nel corso della durata dell'enumeratore. Passare NULL se tale oggetto non esiste.  
  
 *collection*  
 Un riferimento al contenitore della libreria Standard C++ che contiene gli elementi da enumerare.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Se si passa `Init` mantenuto un riferimento a una raccolta in un altro oggetto, è possibile usare il *pUnkForRelease* parametro per garantire che l'oggetto e la raccolta contiene, sia disponibile per, purché l'enumeratore ha bisogno.  
  
 È necessario chiamare questo metodo prima di passare un puntatore all'interfaccia dell'enumeratore a qualsiasi client.  
  
##  <a name="clone"></a>  IEnumOnSTLImpl::Clone  
 Questo metodo fornisce l'implementazione del **Clone** metodo tramite la creazione di un oggetto di tipo `CComEnumOnSTL`, inizializzandola con la stessa raccolta e iteratore utilizzato dall'oggetto corrente e la restituzione dell'interfaccia sull'appena oggetto creato.  
  
```
STDMETHOD(Clone)(Base** ppEnum);
```  
  
### <a name="parameters"></a>Parametri  
 *ppEnum*  
 [out] Interfaccia dell'enumeratore per un oggetto appena creato verrà duplicato dell'enumeratore corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
##  <a name="m_spunk"></a>  IEnumOnSTLImpl::m_spUnk  
 Il `IUnknown` puntatore dell'oggetto che fornisce la raccolta.  
  
```
CComPtr<IUnknown> m_spUnk;
```  
  
### <a name="remarks"></a>Note  
 Questo puntatore intelligente mantiene un riferimento all'oggetto passato a [IEnumOnSTLImpl::Init](#init), garantire che rimane attivo durante il ciclo di vita dell'enumeratore.  
  
##  <a name="m_pcollection"></a>  IEnumOnSTLImpl::m_pcollection  
 Questo membro fa riferimento alla raccolta che fornisce i dati dell'implementazione dell'interfaccia dell'enumeratore.  
  
```
CollType* m_pcollection;
```  
  
### <a name="remarks"></a>Note  
 Questo membro viene inizializzato da una chiamata a [IEnumOnSTLImpl::Init](#init).  
  
##  <a name="m_iter"></a>  IEnumOnSTLImpl::m_iter  
 Questo membro contiene l'iteratore utilizzato per contrassegnare la posizione corrente all'interno della raccolta e spostarsi tra gli elementi successivi.  
  
```
CollType::iterator m_iter;
```  
  
##  <a name="next"></a>  IEnumOnSTLImpl::Next  
 Questo metodo fornisce l'implementazione del **successivo** (metodo).  
  
```
STDMETHOD(Next)(
    ULONG celt,
    T* rgelt,
    ULONG* pceltFetched);
```  
  
### <a name="parameters"></a>Parametri  
 *celt*  
 [in] Il numero di elementi richiesti.  
  
 *rgelt*  
 [out] Matrice da compilare con gli elementi.  
  
 *pceltFetched*  
 [out] Il numero di elementi effettivamente restituiti nella *rgelt*. Può essere minore *celt* se meno *celt* elementi rimangono nell'elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
##  <a name="reset"></a>  IEnumOnSTLImpl::Reset  
 Questo metodo fornisce l'implementazione del **reimpostare** (metodo).  
  
```
STDMETHOD(Reset)(void);
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
##  <a name="skip"></a>  IEnumOnSTLImpl::Skip  
 Questo metodo fornisce l'implementazione del **Skip** (metodo).  
  
```
STDMETHOD(Skip)(ULONG celt);
```  
  
### <a name="parameters"></a>Parametri  
 *celt*  
 [in] Il numero di elementi da ignorare.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)
