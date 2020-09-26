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
ms.openlocfilehash: e29c30e95116ad68d3498f3f8d3231a63c92c0a7
ms.sourcegitcommit: d9c94dcabd94537e304be0261b3263c2071b437b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/25/2020
ms.locfileid: "91353064"
---
# <a name="caxwindow2t-class"></a>Classe CAxWindow2T

Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX e dispone anche del supporto per l'hosting di controlli ActiveX con licenza.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class TBase = CWindow>
    class CAxWindow2T :
    public CAxWindowT<TBase>
```

#### <a name="parameters"></a>Parametri

*TBase*<br/>
Classe da cui `CAxWindowT` deriva.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAxWindow2T:: CAxWindow2T](#caxwindow2t)|Costruisce un oggetto `CAxWindow2T`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAxWindow2T:: create](#create)|Crea una finestra host.|
|[CAxWindow2T:: CreateControlLic](#createcontrollic)|Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata.|
|[CAxWindow2T:: CreateControlLicEx](#createcontrollicex)|Crea un controllo ActiveX con licenza, lo inizializza, lo ospita nella finestra specificata e recupera un puntatore a interfaccia (o puntatori) dal controllo.|
|[CAxWindow2T:: GetWndClassName](#getwndclassname)|Metodo statico che recupera il nome della classe della finestra.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAxWindow2T:: operator =](#operator_eq)|Assegna un HWND a un oggetto esistente `CAxWindow2T` .|

## <a name="remarks"></a>Osservazioni

`CAxWindow2T` fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX. `CAxWindow2T` dispone anche del supporto per l'hosting di controlli ActiveX con licenza. L'hosting viene fornito da " **AtlAxWinLic80**", che è incluso in `CAxWindow2T` .

`CAxWindow2`La classe viene implementata come specializzazione della `CAxWindow2T` classe. Questa specializzazione viene dichiarata come:

`typedef CAxWindow2T <CWindow> CAxWindow2;`

> [!NOTE]
> `CAxWindowT` i membri sono documentati in [CAxWindow](../../atl/reference/caxwindow-class.md).

Per un esempio che usa i membri di questa classe, vedere [hosting di controlli ActiveX con ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`TBase`

`CAxWindowT`

`CAxWindow2T`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

## <a name="caxwindow2tcaxwindow2t"></a><a name="caxwindow2t"></a> CAxWindow2T:: CAxWindow2T

Costruisce un oggetto `CAxWindow2T`.

```
CAxWindow2T(HWND  hWnd = NULL) : CAxWindowT<TBase>(hWnd)
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
Handle di una finestra esistente.

## <a name="caxwindow2tcreate"></a><a name="create"></a> CAxWindow2T:: create

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

### <a name="remarks"></a>Osservazioni

`CAxWindow2T::Create` chiama [CWindow:: create](../../atl/reference/cwindow-class.md#create) con il parametro LPCTSTR *lpstrWndClass* impostato sulla classe della finestra che fornisce l'hosting del controllo ( `AtlAxWinLic80` ).

`CWindow::Create`Per una descrizione dei parametri e del valore restituito, vedere.

**Nota** Se viene usato 0 come valore per il parametro *MenuOrID* , deve essere specificato come 0U (valore predefinito) per evitare un errore del compilatore.

### <a name="example"></a>Esempio

Per un esempio che usa, vedere [hosting di controlli ActiveX con ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) `CAxWindow2T::Create` .

## <a name="caxwindow2tcreatecontrollic"></a><a name="createcontrollic"></a> CAxWindow2T:: CreateControlLic

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
Codice di licenza per il controllo; NULL se si crea un controllo senza licenza.

### <a name="remarks"></a>Osservazioni

Per una descrizione dei parametri rimanenti e del valore restituito, vedere [CAxWindow:: CreateControl](../../atl/reference/caxwindow-class.md#createcontrol) .

### <a name="example"></a>Esempio

Per un esempio che usa, vedere [hosting di controlli ActiveX con ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) `CAxWindow2T::CreateControlLic` .

## <a name="caxwindow2tcreatecontrollicex"></a><a name="createcontrollicex"></a> CAxWindow2T:: CreateControlLicEx

Crea un controllo ActiveX con licenza, lo inizializza, lo ospita nella finestra specificata e recupera un puntatore a interfaccia (o puntatori) dal controllo.

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
Codice di licenza per il controllo; NULL se si crea un controllo senza licenza.

### <a name="remarks"></a>Osservazioni

Per una descrizione dei parametri rimanenti e del valore restituito, vedere [CAxWindow:: CreateControlEx](../../atl/reference/caxwindow-class.md#createcontrolex) .

### <a name="example"></a>Esempio

Per un esempio che usa, vedere [hosting di controlli ActiveX con ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) `CAxWindow2T::CreateControlLicEx` .

## <a name="caxwindow2tgetwndclassname"></a><a name="getwndclassname"></a> CAxWindow2T:: GetWndClassName

Recupera il nome della classe della finestra.

```
static LPCTSTR GetWndClassName();
```

### <a name="return-value"></a>Valore restituito

Puntatore a una stringa che contiene il nome della classe della finestra ( `AtlAxWinLic80` ) che può ospitare controlli ActiveX con licenza e senza licenza.

## <a name="caxwindow2toperator-"></a><a name="operator_eq"></a> CAxWindow2T:: operator =

Assegna un HWND a un oggetto esistente `CAxWindow2T` .

```
CAxWindow2T<TBase>& operator= (HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
Handle di una finestra esistente.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Domande frequenti sul contenimento di controlli](../../atl/atl-control-containment-faq.md)
