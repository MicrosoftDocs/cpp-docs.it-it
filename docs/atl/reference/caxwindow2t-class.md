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
ms.openlocfilehash: 14080b624132979df533135bc1eef108dc793398
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318703"
---
# <a name="caxwindow2t-class"></a>Classe CAxWindow2T

Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX e dispone anche del supporto per l'hosting di controlli ActiveX con licenza.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <class TBase = CWindow>
    class CAxWindow2T :
    public CAxWindowT<TBase>
```

#### <a name="parameters"></a>Parametri

*TBase (informazioni in stato di base*<br/>
La classe `CAxWindowT` da cui deriva.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAxWindow2T::CAxWindow2T](#caxwindow2t)|Costruisce un oggetto `CAxWindow2T`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAxWindow2T::Creare](#create)|Crea una finestra host.|
|[CAxWindow2T::CreateControlLic](#createcontrollic)|Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata.|
|[CAxWindow2T::CreateControlLicEx](#createcontrollicex)|Crea un controllo ActiveX con licenza, lo inizializza, lo ospita nella finestra specificata e recupera un puntatore a interfaccia (o puntatori) dal controllo.|
|[CAxWindow2T::GetWndClassName](#getwndclassname)|Metodo statico che recupera il nome della classe finestra.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CAxWindow2T::operatore](#operator_eq)|Assegna un HWND a `CAxWindow2T` un oggetto esistente.|

## <a name="remarks"></a>Osservazioni

`CAxWindow2T`fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX. `CAxWindow2T`ha anche il supporto per l'hosting di controlli ActiveX con licenza. L'hosting è fornito da " **AtlAxWinLic80**", che è avvolto da `CAxWindow2T`.

La `CAxWindow2` classe viene implementata `CAxWindow2T` come specializzazione della classe. Questa specializzazione è dichiarata come:

`typedef CAxWindow2T <CWindow> CAxWindow2;`

> [!NOTE]
> `CAxWindowT`membri sono documentati in [CAxWindow](../../atl/reference/caxwindow-class.md).

Per un esempio che utilizza i membri di questa classe, vedere Hosting di [controlli ActiveX mediante ATL AXHost.](../../atl/hosting-activex-controls-using-atl-axhost.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`TBase`

`CAxWindowT`

`CAxWindow2T`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="caxwindow2tcaxwindow2t"></a><a name="caxwindow2t"></a>CAxWindow2T::CAxWindow2T

Costruisce un oggetto `CAxWindow2T`.

```
CAxWindow2T(HWND  hWnd = NULL) : CAxWindowT<TBase>(hWnd)
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
Handle di una finestra esistente.

## <a name="caxwindow2tcreate"></a><a name="create"></a>CAxWindow2T::Creare

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

`CAxWindow2T::Create`chiama [CWindow::Create](../../atl/reference/cwindow-class.md#create) con il parametro LPCTSTR *lpstrWndClass* impostato`AtlAxWinLic80`sulla classe window che fornisce l'hosting dei controlli ( ).

Vedere `CWindow::Create` per una descrizione dei parametri e il valore restituito.

**Nota:** Se 0 viene utilizzato come valore per il parametro *MenuOrID,* è necessario specificarlo come 0U (valore predefinito) per evitare un errore del compilatore.

### <a name="example"></a>Esempio

Per [Hosting ActiveX Controls Using ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) un esempio che utilizza `CAxWindow2T::Create`.

## <a name="caxwindow2tcreatecontrollic"></a><a name="createcontrollic"></a>CAxWindow2T::CreateControlLic

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

*BstrLicKey (chiave bstrLicKey)*<br/>
La chiave di licenza per il controllo; NULL se si crea un controllo senza licenza.

### <a name="remarks"></a>Osservazioni

Vedere [CAxWindow::CreateControl](../../atl/reference/caxwindow-class.md#createcontrol) per una descrizione dei parametri rimanenti e il valore restituito.

### <a name="example"></a>Esempio

Per [Hosting ActiveX Controls Using ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) un esempio che utilizza `CAxWindow2T::CreateControlLic`.

## <a name="caxwindow2tcreatecontrollicex"></a><a name="createcontrollicex"></a>CAxWindow2T::CreateControlLicEx

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

*BstrLicKey (chiave bstrLicKey)*<br/>
La chiave di licenza per il controllo; NULL se si crea un controllo senza licenza.

### <a name="remarks"></a>Osservazioni

Vedere [CAxWindow::CreateControlEx](../../atl/reference/caxwindow-class.md#createcontrolex) per una descrizione dei parametri rimanenti e il valore restituito.

### <a name="example"></a>Esempio

Per [Hosting ActiveX Controls Using ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) un esempio che utilizza `CAxWindow2T::CreateControlLicEx`.

## <a name="caxwindow2tgetwndclassname"></a><a name="getwndclassname"></a>CAxWindow2T::GetWndClassName

Recupera il nome della classe finestra.

```
static LPCTSTR GetWndClassName();
```

### <a name="return-value"></a>Valore restituito

Puntatore a una stringa contenente il`AtlAxWinLic80`nome della classe finestra ( ) che può ospitare controlli ActiveX con licenza e senza licenza.

## <a name="caxwindow2toperator-"></a><a name="operator_eq"></a>CAxWindow2T::operatore

Assegna un HWND a `CAxWindow2T` un oggetto esistente.

```
CAxWindow2T<TBase>& operator= (HWND hWnd);
```

### <a name="parameters"></a>Parametri

*hWnd*<br/>
Handle di una finestra esistente.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Domande frequenti sul contenimento di controlli](../../atl/atl-control-containment-faq.md)
