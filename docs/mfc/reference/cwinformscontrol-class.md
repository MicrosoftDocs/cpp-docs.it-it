---
description: 'Altre informazioni su: classe CWinFormsControl'
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
ms.openlocfilehash: 32daf5f1bf9efcd5d5b17d134dc8deaee7e32527
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318442"
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
.NET Framework Windows Forms controllo da visualizzare nell'applicazione MFC.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CWinFormsControl:: CWinFormsControl](#cwinformscontrol)|Costruisce un oggetto wrapper di controllo Windows Forms MFC.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CWinFormsControl:: CreateManagedControl](#createmanagedcontrol)|Crea un controllo Windows Forms in un contenitore MFC.|
|[CWinFormsControl:: GetControl](#getcontrol)|Recupera un puntatore al controllo Windows Forms.|
|[CWinFormsControl:: GetControlHandle](#getcontrolhandle)|Recupera un handle per il controllo Windows Forms.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[Operatore CWinFormsControl:: operator-&gt;](#operator_-_gt)|Sostituisce [CWinFormsControl:: GetControl](#getcontrol) nelle espressioni.|
|[CWinFormsControl:: operator TManagedControl ^](#operator_tmanagedcontrol)|Esegue il cast di un tipo come puntatore a un controllo Windows Forms.|

## <a name="remarks"></a>Commenti

La `CWinFormsControl` classe fornisce la funzionalità di base per l'hosting di un controllo Windows Forms.

Per ulteriori informazioni sull'utilizzo di Windows Forms, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

Il codice MFC non deve memorizzare nella cache gli handle di finestra (in genere archiviati in `m_hWnd` ). Per alcune proprietà del controllo Windows Forms è necessario che l'oggetto Win32 sottostante `Window` venga eliminato e ricreato utilizzando `DestroyWindow` e `CreateWindow` . L'implementazione di Windows Forms MFC gestisce `Destroy` gli `Create` eventi e dei controlli per aggiornare il `m_hWnd` membro.

> [!NOTE]
> L'integrazione di MFC Windows Forms funziona solo nei progetti che si collegano dinamicamente a MFC (in cui è definito AFXDLL).

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms. h

## <a name="cwinformscontrolcreatemanagedcontrol"></a><a name="createmanagedcontrol"></a> CWinFormsControl:: CreateManagedControl

Crea un controllo Windows Forms in un contenitore MFC.

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

*pType*<br/>
Tipo di dati del controllo da creare. Deve essere un tipo di dati di [tipo](/dotnet/api/system.type) .

*dwStyle*<br/>
Stile della finestra da applicare al controllo. Specificare una combinazione di [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles). Attualmente sono supportati solo gli stili seguenti: WS_TABSTOP, WS_VISIBLE, WS_DISABLED e WS_GROUP.

*Rect*<br/>
[Struttura Rect](/windows/win32/api/windef/ns-windef-rect) che definisce le coordinate degli angoli superiore sinistro e inferiore destro del controllo (solo primo overload).

*nPlaceHolderID*<br/>
Handle del controllo segnaposto statico inserito nell'editor risorse. Il controllo Windows Forms appena creato sostituisce il controllo statico, presumendo la posizione, l'ordine z e gli stili (solo secondo overload).

*pParentWnd*<br/>
Puntatore alla finestra padre.

*nID*<br/>
Numero di ID della risorsa da assegnare al controllo appena creato.

*pControl*<br/>
Istanza di un controllo Windows Forms da associare all'oggetto [CWinFormsControl](../../mfc/reference/cwinformscontrol-class.md) (solo quarto overload).

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, restituisce un valore diverso da zero. Se ha esito negativo, restituisce zero.

### <a name="remarks"></a>Commenti

Questo metodo crea un'istanza di un controllo .NET Framework Windows Forms in un contenitore MFC.

Il primo overload del metodo accetta un .NET Framework tipo di dati *pType* in modo che MFC possa creare un'istanza di un nuovo oggetto di questo tipo. *pType* deve essere un tipo di dati [Type](/dotnet/api/system.type) .

Il secondo overload del metodo crea un controllo Windows Forms in base al `TManagedControl` parametro di modello della `CWinFormsControl` classe. Le dimensioni e la posizione del controllo sono basate sulla `RECT` struttura passata al metodo. Solo *dwStyle* è importante per gli stili.

Il terzo overload del metodo crea un controllo Windows Forms che sostituisce un controllo statico, lo distrugge e suppone la posizione, l'ordine z e gli stili. Il controllo statico funge solo da segnaposto per il controllo Windows Forms. Quando si crea il controllo, questo overload combina gli stili di *dwStyle* con gli stili delle risorse del controllo statico.

Il quarto overload del metodo consente di passare un Windows Forms *di controllo di cui è già* stata creata un'istanza di MFC a capo. Deve essere dello stesso tipo del `TManagedControl` parametro di modello della `CWinFormsControl` classe.

Vedere [uso di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md) per esempi sull'uso dei controlli Windows Form.

## <a name="cwinformscontrolcwinformscontrol"></a><a name="cwinformscontrol"></a> CWinFormsControl:: CWinFormsControl

Costruisce un oggetto wrapper di controllo Windows Forms MFC.

```
CWinFormsControl();
```

### <a name="remarks"></a>Commenti

Viene creata un'istanza del controllo Windows Forms quando si chiama [CWinFormsControl:: CreateManagedControl](#createmanagedcontrol).

## <a name="cwinformscontrolgetcontrol"></a><a name="getcontrol"></a> CWinFormsControl:: GetControl

Recupera un puntatore al controllo Windows Forms.

```
inline TManagedControl^ GetControl() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al controllo Windows Forms.

### <a name="example"></a>Esempio

  Vedere [CWinFormsControl:: CreateManagedControl](#createmanagedcontrol).

## <a name="cwinformscontrolgetcontrolhandle"></a><a name="getcontrolhandle"></a> CWinFormsControl:: GetControlHandle

Recupera un handle per il controllo Windows Forms.

```
inline HWND GetControlHandle() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle per il controllo Windows Forms.

### <a name="remarks"></a>Commenti

`GetControlHandle` è un metodo di supporto che restituisce l'handle della finestra archiviato nelle proprietà del controllo .NET Framework. Il valore dell'handle della finestra viene copiato in [CWnd:: m_hWnd](../../mfc/reference/cwnd-class.md#m_hwnd) durante la chiamata a [CWnd:: Connetti](../../mfc/reference/cwnd-class.md#attach).

## <a name="cwinformscontroloperator--gt"></a><a name="operator_-_gt"></a> Operatore CWinFormsControl:: operator-&gt;

Sostituisce [CWinFormsControl:: GetControl](#getcontrol) nelle espressioni.

```
inline TManagedControl^  operator->() const;
```

### <a name="remarks"></a>Commenti

Questo operatore fornisce una sintassi pratica che sostituisce `GetControl` nelle espressioni.

Per ulteriori informazioni su Windows Forms, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="cwinformscontroloperator-tmanagedcontrol"></a><a name="operator_tmanagedcontrol"></a> CWinFormsControl:: operator TManagedControl ^

Esegue il cast di un tipo come puntatore a un controllo Windows Forms.

```
inline operator TManagedControl^() const;
```

### <a name="remarks"></a>Commenti

Questo operatore passa `CWinFormsControl<TManagedControl>` a funzioni che accettano un puntatore a un controllo Windows Forms.

## <a name="see-also"></a>Vedi anche

[Classe CWinFormsDialog](../../mfc/reference/cwinformsdialog-class.md)<br/>
[Classe CWinFormsView](../../mfc/reference/cwinformsview-class.md)
