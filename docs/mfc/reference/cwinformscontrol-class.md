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
ms.openlocfilehash: 91691203f88f07f597aaad6a5db32b03e7ad11c4
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57289312"
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
Un controllo Windows Form di .NET Framework da visualizzare nell'applicazione MFC.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinFormsControl::CWinFormsControl](#cwinformscontrol)|Costruisce un oggetto wrapper del controllo Form di Windows di MFC.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinFormsControl::CreateManagedControl](#createmanagedcontrol)|Crea un controllo Windows Form in un contenitore di MFC.|
|[CWinFormsControl::GetControl](#getcontrol)|Recupera un puntatore al controllo Windows Form.|
|[CWinFormsControl::GetControlHandle](#getcontrolhandle)|Recupera un handle per il controllo Windows Form.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinFormsControl::operator-&gt;](#operator_-_gt)|Sostituisce [CWinFormsControl::GetControl](#getcontrol) nelle espressioni.|
|[CWinFormsControl::operator TManagedControl ^](#operator_tmanagedcontrol)|Esegue il cast di un tipo come un puntatore a un controllo Windows Form.|

## <a name="remarks"></a>Note

Il `CWinFormsControl` classe fornisce la funzionalità di base per l'hosting di un controllo Windows Form.

Per altre informazioni sull'uso di Windows Form, vedere [usando un controllo utente di Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

Il codice MFC non deve memorizzare nella cache gli handle di finestra (in genere archiviati in `m_hWnd`). Alcune proprietà dei controlli Windows Form richiedono che Win32 sottostante `Window` essere eliminata e ricreata usando `DestroyWindow` e `CreateWindow`. Gli handle di implementazione MFC Windows Forms i `Destroy` e `Create` degli eventi dei controlli per aggiornare il `m_hWnd` membro.

> [!NOTE]
>  Integrazione dei moduli di Windows di MFC funziona solo nei progetti che si collegano in modo dinamico con MFC (in cui è definita AFXDLL).

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms. h

##  <a name="createmanagedcontrol"></a>  CWinFormsControl::CreateManagedControl

Crea un controllo Windows Form in un contenitore di MFC.

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
Il tipo di dati del controllo da creare. Deve essere un [tipo](https://msdn.microsoft.com/library/system.type) tipo di dati.

*dwStyle*<br/>
Lo stile della finestra da applicare al controllo. Specificare una combinazione di [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles). Attualmente sono supportati solo gli stili seguenti: WS_TABSTOP, WS_VISIBLE, WS_DISABLED e WS_GROUP.

*rect*<br/>
Oggetto [struttura RECT](/windows/desktop/api/windef/ns-windef-tagrect) che definisce le coordinate degli angoli superiore sinistro e inferiore destro del controllo (innanzitutto eseguire l'overload solo).

*nPlaceHolderID*<br/>
L'handle del controllo statico titolare inserito nell'Editor di risorse. Il controllo Windows Form appena creato sostituisce il controllo statico, presupponendo che la posizione, nell'ordine z e stili (in secondo luogo eseguire l'overload solo).

*pParentWnd*<br/>
Puntatore alla finestra padre.

*nID*<br/>
Il numero di ID di risorsa deve essere assegnato al controllo appena creato.

*pControl*<br/>
Un'istanza di un controllo Windows Form può essere associato il [CWinFormsControl](../../mfc/reference/cwinformscontrol-class.md) (solo per il quarto overload) dell'oggetto.

### <a name="return-value"></a>Valore restituito

Se l'operazione riesce, restituisce un valore diverso da zero. In caso contrario, restituisce zero.

### <a name="remarks"></a>Note

Questo metodo crea un'istanza di un controllo Windows Form di .NET Framework in un contenitore di MFC.

Il primo overload del metodo accetta un tipo di dati .NET Framework *PDigitare* in modo che MFC può creare un'istanza di un nuovo oggetto di questo tipo. *PDigitare* deve essere un [tipo](https://msdn.microsoft.com/library/system.type) tipo di dati.

Il secondo overload del metodo crea un controllo Windows Form in base il `TManagedControl` parametro di modello del `CWinFormsControl` classe. Le dimensioni e posizione del controllo si basa sul `RECT` struttura passato al metodo. Solo *dwStyle* è importante per gli stili.

Il terzo overload del metodo crea un controllo Windows Form che sostituisce un controllo statico, eliminarlo e supponendo che la posizione, nell'ordine z e stili. Il controllo statico viene utilizzato solo come segnaposto per il controllo Windows Form. Quando si crea il controllo, questo overload combina gli stili dal *dwStyle* con stili di risorse del controllo statico.

Il quarto overload del metodo consente di passare in un controllo Windows Form già creato *pControl* MFC eseguire il wrapping. Deve essere dello stesso tipo di `TManagedControl` parametro di modello del `CWinFormsControl` classe.

Visualizzare [usando un controllo utente di Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md) per esempi sull'uso di Windows Form consente di controllare.

##  <a name="cwinformscontrol"></a>  CWinFormsControl::CWinFormsControl

Costruisce un oggetto wrapper del controllo Form di Windows di MFC.

```
CWinFormsControl();
```

### <a name="remarks"></a>Note

Il controllo Windows Form viene creata un'istanza quando si chiama [CWinFormsControl::CreateManagedControl](#createmanagedcontrol).

##  <a name="getcontrol"></a>  CWinFormsControl::GetControl

Recupera un puntatore al controllo Windows Form.

```
inline TManagedControl^ GetControl() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore al controllo Windows Form.

### <a name="example"></a>Esempio

  Visualizzare [CWinFormsControl::CreateManagedControl](#createmanagedcontrol).

##  <a name="getcontrolhandle"></a>  CWinFormsControl::GetControlHandle

Recupera un handle per il controllo Windows Form.

```
inline HWND GetControlHandle() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle per il controllo Windows Form.

### <a name="remarks"></a>Note

`GetControlHandle` è un metodo helper che restituisce l'handle di finestra memorizzata nelle proprietà del controllo .NET Framework. Il valore di handle di finestra viene copiato [CWnd::m_hWnd](../../mfc/reference/cwnd-class.md#m_hwnd) durante la chiamata a [CWnd::Attach](../../mfc/reference/cwnd-class.md#attach).

##  <a name="operator_-_gt"></a>  CWinFormsControl::operator-&gt;

Sostituisce [CWinFormsControl::GetControl](#getcontrol) nelle espressioni.

```
inline TManagedControl^  operator->() const;
```

### <a name="remarks"></a>Note

Questo operatore offre una comoda sintassi che sostituisce `GetControl` nelle espressioni.

Per altre informazioni sui moduli di Windows, vedere [usando un controllo utente di Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

##  <a name="operator_tmanagedcontrol"></a>  CWinFormsControl::operator TManagedControl ^

Esegue il cast di un tipo come un puntatore a un controllo Windows Form.

```
inline operator TManagedControl^() const;
```

### <a name="remarks"></a>Note

Questo operatore passa `CWinFormsControl<TManagedControl>` alle funzioni che accettano un puntatore a un controllo Windows Form.

## <a name="see-also"></a>Vedere anche

[Classe CWinFormsDialog](../../mfc/reference/cwinformsdialog-class.md)<br/>
[Classe CWinFormsView](../../mfc/reference/cwinformsview-class.md)
