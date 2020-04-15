---
title: Classe CWinFormsControl
ms.date: 11/04/2016
f1_keywords:
- CWinFormsControl
- AFXWINFORMS/CWinFormsControl
- AFXWINFORMS/CWinFormsControl::CWinFormsControl
- AFXWINFORMS/CWinFormsControl::CreateManagedControl
- AFXWINFORMS/CWinFormsControl::GetControl
- AFXWINFORMS/CWinFormsControl::GetControlHandle
helpviewer_keywords:
- CWinFormsControl [MFC], CWinFormsControl
- CWinFormsControl [MFC], CreateManagedControl
- CWinFormsControl [MFC], GetControl
- CWinFormsControl [MFC], GetControlHandle
ms.assetid: 6406dd7b-fb89-4a18-ac3a-c010d6b6289a
ms.openlocfilehash: c91f50be1ea30efac81ff67c43633bedd7b0ca03
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377185"
---
# <a name="cwinformscontrol-class"></a>Classe CWinFormsControl

Fornisce la funzionalità di base per l'hosting di un controllo Windows Form.

## <a name="syntax"></a>Sintassi

```
template<class TManagedControl>
class CWinFormsControl : public CWnd
```

#### <a name="parameters"></a>Parametri

*TManagedControl*<br/>
Un controllo Windows Form .NET Framework da visualizzare nell'applicazione MFC.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinFormsControl::CWinFormsControl](#cwinformscontrol)|Costruisce un oggetto wrapper del controllo Windows Form MFC.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinFormsControl::CreateManagedControl](#createmanagedcontrol)|Crea un controllo Windows Form in un contenitore MFC.|
|[CWinFormsControl::GetControl](#getcontrol)|Recupera un puntatore al controllo Windows Form.|
|[CWinFormsControl::GetControlHandle](#getcontrolhandle)|Recupera un handle per il controllo Windows Form.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinFormsControl::operatore -&gt;](#operator_-_gt)|Sostituisce [CWinFormsControl::GetControl](#getcontrol) nelle espressioni.|
|[CWinFormsControl::operatore TManagedControl](#operator_tmanagedcontrol)|Esegue il cast di un tipo come puntatore a un controllo Windows Form.|

## <a name="remarks"></a>Osservazioni

La `CWinFormsControl` classe fornisce la funzionalità di base per l'hosting di un controllo Windows Form.The class provides the basic functionality for hosting of a Windows Forms control.

Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

Il codice MFC non deve memorizzare `m_hWnd`nella cache gli handle di finestra (in genere memorizzati in ). Alcune proprietà del controllo Windows Form `Window` richiedono che il Win32 sottostante venga eliminato e ricreato utilizzando `DestroyWindow` e `CreateWindow`. L'implementazione MFC `Destroy` Windows `Create` Forms gestisce gli `m_hWnd` eventi e dei controlli per aggiornare il membro.

> [!NOTE]
> L'integrazione di Windows Form MFC funziona solo nei progetti che si collegano dinamicamente con MFC (in cui è definito AFXDLL).

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms.h

## <a name="cwinformscontrolcreatemanagedcontrol"></a><a name="createmanagedcontrol"></a>CWinFormsControl::CreateManagedControl

Crea un controllo Windows Form in un contenitore MFC.

```
inline BOOL CreateManagedControl(
    System::Type^ pType,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    int nID)
inline BOOL CreateManagedControl(
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    int nID);

inline BOOL CreateManagedControl(
    DWORD dwStyle,
    int nPlaceHolderID,
    CWnd* pParentWnd);

inline BOOL CreateManagedControl(
    typename TManagedControl^ pControl,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    int nID);
```

### <a name="parameters"></a>Parametri

*pTipo*<br/>
Tipo di dati del controllo da creare. Deve essere un tipo di dati [Type.](/dotnet/api/system.type)

*DwStyle (in stile dwStyle)*<br/>
Stile della finestra da applicare al controllo. Specificare una combinazione di stili di [finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles). Attualmente sono supportati solo i seguenti stili: WS_TABSTOP, WS_VISIBLE, WS_DISABLED e WS_GROUP.

*Rect*<br/>
Struttura [RECT](/windows/win32/api/windef/ns-windef-rect) che definisce le coordinate degli angoli superiore sinistro e inferiore destro del controllo (solo primo overload).

*nPlaceHolderID*<br/>
Handle del controllo segnaposto statico inserito nell'Editor risorse. Il controllo Windows Form appena creato sostituisce il controllo statico, presupponendo la posizione, l'ordine z e gli stili (solo overload secondo).

*pParentWnd (informazioni in due)*<br/>
Puntatore alla finestra padre.

*nID*<br/>
Numero ID risorsa da assegnare al controllo appena creato.

*pControl*<br/>
Istanza di un controllo Windows Form da associare all'oggetto [CWinFormsControl](../../mfc/reference/cwinformscontrol-class.md) (solo quarto overload).

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce un valore diverso da zero. Se non ha esito positivo, restituisce zero.

### <a name="remarks"></a>Osservazioni

Questo metodo crea un'istanza di un controllo Windows Form di .NET Framework in un contenitore MFC.

Il primo overload del metodo accetta un tipo di dati *pType* di .NET Framework in modo che MFC possa creare un'istanza di un nuovo oggetto di questo tipo. *pType* deve essere un tipo di dati [Type.](/dotnet/api/system.type)

Il secondo overload del metodo crea un `TManagedControl` controllo Windows `CWinFormsControl` Form in base al parametro di modello della classe. Le dimensioni e la posizione del `RECT` controllo si basano sulla struttura passata al metodo. Solo *dwStyle* è importante per gli stili.

Il terzo overload del metodo crea un controllo Windows Form che sostituisce un controllo statico, distruggendolo e assumarne la posizione, l'ordine z e gli stili. Il controllo statico funge solo da segnaposto per il controllo Windows Form. Quando si crea il controllo, questo overload combina gli stili da *dwStyle* con gli stili di risorsa del controllo statico.

Il quarto overload del metodo consente di passare un controllo Windows Form già istanziato *pControl* che MFC eseguirà il wrapping. Deve essere dello stesso tipo `TManagedControl` del parametro di modello della `CWinFormsControl` classe.

Vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md) per esempi sull'utilizzo di controlli Windows Form.

## <a name="cwinformscontrolcwinformscontrol"></a><a name="cwinformscontrol"></a>CWinFormsControl::CWinFormsControl

Costruisce un oggetto wrapper del controllo Windows Form MFC.

```
CWinFormsControl();
```

### <a name="remarks"></a>Osservazioni

Viene creata un'istanza del controllo Windows Form quando si chiama [CWinFormsControl::CreateManagedControl](#createmanagedcontrol).

## <a name="cwinformscontrolgetcontrol"></a><a name="getcontrol"></a>CWinFormsControl::GetControl

Recupera un puntatore al controllo Windows Form.

```
inline TManagedControl^ GetControl() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al controllo Windows Form.

### <a name="example"></a>Esempio

  Vedere [CWinFormsControl::CreateManagedControl](#createmanagedcontrol).

## <a name="cwinformscontrolgetcontrolhandle"></a><a name="getcontrolhandle"></a>CWinFormsControl::GetControlHandle

Recupera un handle per il controllo Windows Form.

```
inline HWND GetControlHandle() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle per il controllo Windows Form.

### <a name="remarks"></a>Osservazioni

`GetControlHandle`è un metodo di supporto che restituisce l'handle di finestra archiviato nelle proprietà del controllo .NET Framework. Il valore dell'handle di finestra viene copiato in [CWnd::m_hWnd](../../mfc/reference/cwnd-class.md#m_hwnd) durante la chiamata a [CWnd::Attach](../../mfc/reference/cwnd-class.md#attach).

## <a name="cwinformscontroloperator--gt"></a><a name="operator_-_gt"></a>CWinFormsControl::operatore -&gt;

Sostituisce [CWinFormsControl::GetControl](#getcontrol) nelle espressioni.

```
inline TManagedControl^  operator->() const;
```

### <a name="remarks"></a>Osservazioni

Questo operatore fornisce una `GetControl` sintassi comoda che sostituisce nelle espressioni.

Per ulteriori informazioni su Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="cwinformscontroloperator-tmanagedcontrol"></a><a name="operator_tmanagedcontrol"></a>CWinFormsControl::operatore TManagedControl

Esegue il cast di un tipo come puntatore a un controllo Windows Form.

```
inline operator TManagedControl^() const;
```

### <a name="remarks"></a>Osservazioni

Questo operatore passa alle funzioni che accettano un puntatore a un controllo Windows Form.This operator passes `CWinFormsControl<TManagedControl>` to functions that accept a pointer to a Windows Forms control.

## <a name="see-also"></a>Vedere anche

[Classe CWinFormsDialog](../../mfc/reference/cwinformsdialog-class.md)<br/>
[Classe CWinFormsView](../../mfc/reference/cwinformsview-class.md)
