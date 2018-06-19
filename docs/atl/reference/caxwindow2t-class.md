---
title: Classe CAxWindow2T | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CAxWindow2T
- ATLWIN/ATL::CAxWindow2T
- ATLWIN/ATL::CAxWindow2T::CAxWindow2T
- ATLWIN/ATL::CAxWindow2T::Create
- ATLWIN/ATL::CAxWindow2T::CreateControlLic
- ATLWIN/ATL::CAxWindow2T::CreateControlLicEx
- ATLWIN/ATL::CAxWindow2T::GetWndClassName
dev_langs:
- C++
helpviewer_keywords:
- CAxWindow2 class
ms.assetid: b87bc943-7991-4537-b902-2138d7f4d837
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 077ecfe36e1ddf6c319f02bdabb89d660a5f22d8
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32360758"
---
# <a name="caxwindow2t-class"></a>Classe CAxWindow2T
Questa classe fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX, è inoltre supportata l'hosting di controlli ActiveX con licenza.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class TBase = CWindow>
    class CAxWindow2T :
    public CAxWindowT<TBase>
```  
  
#### <a name="parameters"></a>Parametri  
 *TBase*  
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
|[CAxWindow2T::CreateControlLicEx](#createcontrollicex)|Crea un controllo ActiveX con licenza, che viene inizializzato, ospita nella finestra specificata e recupera un puntatore a interfaccia (o puntatori) dal controllo.|  
|[CAxWindow2T::GetWndClassName](#getwndclassname)|Metodo statico che recupera il nome della classe della finestra.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAxWindow2T::operator =](#operator_eq)|Assegna un `HWND` esistente `CAxWindow2T` oggetto.|  
  
## <a name="remarks"></a>Note  
 `CAxWindow2T` fornisce metodi per la modifica di una finestra che ospita un controllo ActiveX. `CAxWindow2T` è inoltre supportata per l'hosting di controlli ActiveX con licenza. L'hosting viene fornito da " **Atlaxwin80**", che è stato eseguito il wrapping `CAxWindow2T`.  
  
 Classe `CAxWindow2` viene implementato come una specializzazione del `CAxWindow2T` classe. Questa specializzazione è dichiarata come:  
  
 `typedef CAxWindow2T <CWindow> CAxWindow2;`  
  
> [!NOTE]
> `CAxWindowT` i membri sono documentati in [CAxWindow](../../atl/reference/caxwindow-class.md).  
  
 Vedere [Hosting ActiveX controlli tramite ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che usa i membri di questa classe.  
  
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
 `hWnd`  
 Un handle di una finestra esistente.  
  
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
 `CAxWindow2T::Create` le chiamate [CWindow::Create](../../atl/reference/cwindow-class.md#create) con il `LPCTSTR lpstrWndClass` parametro impostato su classe della finestra che fornisce hosting di controlli ( **Atlaxwin80**).  
  
 Vedere `CWindow::Create` per una descrizione dei parametri e valore restituito.  
  
 **Nota** se si usa 0 come valore per il `MenuOrID` parametro, deve essere specificato come 0U (valore predefinito) per evitare un errore del compilatore.  
  
### <a name="example"></a>Esempio  
 Vedere [Hosting ActiveX controlli tramite ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che utilizza `CAxWindow2T::Create`.  
  
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
 `bstrLicKey`  
 Il codice di licenza per il controllo. NULL se la creazione di un controllo in licenza.  
  
### <a name="remarks"></a>Note  
 Vedere [CAxWindow::CreateControl](../../atl/reference/caxwindow-class.md#createcontrol) per una descrizione dei parametri restanti e il valore restituito.  
  
### <a name="example"></a>Esempio  
 Vedere [Hosting ActiveX controlli tramite ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che utilizza `CAxWindow2T::CreateControlLic`.  
  
##  <a name="createcontrollicex"></a>  CAxWindow2T::CreateControlLicEx  
 Crea un controllo ActiveX con licenza, che viene inizializzato, ospita nella finestra specificata e recupera un puntatore a interfaccia (o puntatori) dal controllo.  
  
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
 `bstrLicKey`  
 Il codice di licenza per il controllo. NULL se la creazione di un controllo in licenza.  
  
### <a name="remarks"></a>Note  
 Vedere [CAxWindow::CreateControlEx](../../atl/reference/caxwindow-class.md#createcontrolex) per una descrizione dei parametri restanti e il valore restituito.  
  
### <a name="example"></a>Esempio  
 Vedere [Hosting ActiveX controlli tramite ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che utilizza `CAxWindow2T::CreateControlLicEx`.  
  
##  <a name="getwndclassname"></a>  CAxWindow2T::GetWndClassName  
 Recupera il nome della classe della finestra.  
  
```
static LPCTSTR GetWndClassName();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una stringa contenente il nome della classe di finestra ( **Atlaxwin80**) che possono ospitare controlli ActiveX con licenza e privo di licenza.  
  
##  <a name="operator_eq"></a>  CAxWindow2T::operator =  
 Assegna un `HWND` esistente `CAxWindow2T` oggetto.  
  
```
CAxWindow2T<TBase>& operator= (HWND hWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 Un handle di una finestra esistente.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [Domande frequenti sul contenimento di controllo](../../atl/atl-control-containment-faq.md)
