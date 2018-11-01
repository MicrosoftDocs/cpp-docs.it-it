---
title: Classe CAxWindow2T
ms.date: 11/04/2016
f1_keywords:
- CAxWindow2T
- ATLWIN/ATL::CAxWindow2T
- ATLWIN/ATL::CAxWindow2T::CAxWindow2T
- ATLWIN/ATL::CAxWindow2T::Create
- ATLWIN/ATL::CAxWindow2T::CreateControlLic
- ATLWIN/ATL::CAxWindow2T::CreateControlLicEx
- ATLWIN/ATL::CAxWindow2T::GetWndClassName
helpviewer_keywords:
- CAxWindow2 class
ms.assetid: b87bc943-7991-4537-b902-2138d7f4d837
ms.openlocfilehash: 3e28bfe15c55342cbdfb50b125243c170ba97698
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50665431"
---
# <a name="caxwindow2t-class"></a>Classe CAxWindow2T

Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX e include anche il supporto per l'hosting di controlli ActiveX con licenza.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <class TBase = CWindow>
    class CAxWindow2T :
    public CAxWindowT<TBase>
```

#### <a name="parameters"></a>Parametri

*TBase*<br/>
La classe da cui `CAxWindowT` deriva.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAxWindow2T::CAxWindow2T](#caxwindow2t)|Costruisce un oggetto `CAxWindow2T`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAxWindow2T::Create](#create)|Crea una finestra host.|
|[CAxWindow2T::CreateControlLic](#createcontrollic)|Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata.|
|[CAxWindow2T::CreateControlLicEx](#createcontrollicex)|Crea un controllo ActiveX con licenza, lo inizializza, lo ospita nella finestra specificata e recupera un puntatore di interfaccia (o puntatori) dal controllo.|
|[CAxWindow2T::GetWndClassName](#getwndclassname)|Metodo statico che recupera il nome della classe della finestra.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAxWindow2T::operator =](#operator_eq)|Assegna un oggetto HWND esistente `CAxWindow2T` oggetto.|

## <a name="remarks"></a>Note

`CAxWindow2T` fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX. `CAxWindow2T` è inoltre supportata per l'hosting di controlli ActiveX con licenza. L'hosting viene fornito da " **Atlaxwin80**", che è stato eseguito il wrapping `CAxWindow2T`.

Classe `CAxWindow2` viene implementato come una specializzazione del `CAxWindow2T` classe. Questa specializzazione viene dichiarata come:

`typedef CAxWindow2T <CWindow> CAxWindow2;`

> [!NOTE]
> `CAxWindowT` i membri sono documentati in [CAxWindow](../../atl/reference/caxwindow-class.md).

Visualizzare [Hosting ActiveX controlli tramite AXHost di ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che usa i membri di questa classe.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`TBase`

`CAxWindowT`

`CAxWindow2T`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="caxwindow2t"></a>  CAxWindow2T::CAxWindow2T

Costruisce un oggetto `CAxWindow2T`.

```
CAxWindow2T(HWND  hWnd = NULL) : CAxWindowT<TBase>(hWnd)
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
Handle di una finestra esistente.

##  <a name="create"></a>  CAxWindow2T::Create

Crea una finestra host.

```
HWND Create(
    HWND hWndParent,
    _U_RECT rect = NULL,
    LPCTSTR szWindowName = NULL,
    DWORD dwStyle = 0,
    DWORD dwExStyle = 0,
    _U_MENUorID MenuOrID = 0U,
    LPVOID lpCreateParam = NULL);
```

### <a name="remarks"></a>Note

`CAxWindow2T::Create` le chiamate [CWindow::Create](../../atl/reference/cwindow-class.md#create) con il LPCTSTR *lpstrWndClass* parametro impostato per la classe della finestra che fornisce l'hosting di controlli (`AtlAxWinLic80`).

Vedere `CWindow::Create` per una descrizione dei parametri e valore restituito.

**Nota** se viene utilizzato 0 come valore per il *MenuOrID* parametro, è necessario specificarlo come 0U (valore predefinito) per evitare un errore del compilatore.

### <a name="example"></a>Esempio

Visualizzare [Hosting ActiveX controlli tramite AXHost di ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che usa `CAxWindow2T::Create`.

##  <a name="createcontrollic"></a>  CAxWindow2T::CreateControlLic

Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata.

```
HRESULT CreateControlLic(
    DWORD dwResID,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL,
    BSTR bstrLicKey = NULL);

HRESULT CreateControlLic(
    LPCOLESTR lpszName,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL,
    BSTR bstrLicKey = NULL);
```

### <a name="parameters"></a>Parametri

*bstrLicKey*<br/>
La chiave di licenza per il controllo; NULL se la creazione di un controllo privo di licenza.

### <a name="remarks"></a>Note

Visualizzare [CAxWindow::CreateControl](../../atl/reference/caxwindow-class.md#createcontrol) per una descrizione dei parametri restanti e il valore restituito.

### <a name="example"></a>Esempio

Visualizzare [Hosting ActiveX controlli tramite AXHost di ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che usa `CAxWindow2T::CreateControlLic`.

##  <a name="createcontrollicex"></a>  CAxWindow2T::CreateControlLicEx

Crea un controllo ActiveX con licenza, lo inizializza, lo ospita nella finestra specificata e recupera un puntatore di interfaccia (o puntatori) dal controllo.

```
HRESULT CreateControlLicEx(
    LPCOLESTR lpszName,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL,
    IUnknown** ppUnkControl = NULL,
    REFIID iidSink = IID_NULL,
    IUnknown* punkSink = NULL,
    BSTR bstrLicKey = NULL);

    HRESULT CreateControlLicEx(
    DWORD dwResID,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL,
    IUnknown** ppUnkControl = NULL,
    REFIID iidSink = IID_NULL,
    IUnknown* punkSink = NULL,
    BSTR bstrLickey = NULL);
```

### <a name="parameters"></a>Parametri

*bstrLicKey*<br/>
La chiave di licenza per il controllo; NULL se la creazione di un controllo privo di licenza.

### <a name="remarks"></a>Note

Visualizzare [CAxWindow::CreateControlEx](../../atl/reference/caxwindow-class.md#createcontrolex) per una descrizione dei parametri restanti e il valore restituito.

### <a name="example"></a>Esempio

Visualizzare [Hosting ActiveX controlli tramite AXHost di ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che usa `CAxWindow2T::CreateControlLicEx`.

##  <a name="getwndclassname"></a>  CAxWindow2T::GetWndClassName

Recupera il nome della classe della finestra.

```
static LPCTSTR GetWndClassName();
```

### <a name="return-value"></a>Valore restituito

Un puntatore a una stringa contenente il nome della classe della finestra (`AtlAxWinLic80`) che può ospitare controlli ActiveX con licenza e privo di licenza.

##  <a name="operator_eq"></a>  CAxWindow2T::operator =

Assegna un oggetto HWND esistente `CAxWindow2T` oggetto.

```
CAxWindow2T<TBase>& operator= (HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
Handle di una finestra esistente.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Domande frequenti sul contenimento di controllo](../../atl/atl-control-containment-faq.md)
