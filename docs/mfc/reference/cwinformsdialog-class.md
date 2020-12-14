---
description: 'Altre informazioni su: classe CWinFormsDialog'
title: Classe CWinFormsDialog
ms.date: 03/27/2019
f1_keywords:
- CWinFormsDialog
- AFXWINFORMS/CWinFormsDialog
- AFXWINFORMS/CWinFormsDialog::CWinFormsDialog
- AFXWINFORMS/CWinFormsDialog::GetControl
- AFXWINFORMS/CWinFormsDialog::GetControlHandle
- AFXWINFORMS/CWinFormsDialog::OnInitDialog
helpviewer_keywords:
- CWinFormsDialog [MFC], CWinFormsDialog
- CWinFormsDialog [MFC], GetControl
- CWinFormsDialog [MFC], GetControlHandle
- CWinFormsDialog [MFC], OnInitDialog
ms.assetid: e3cec000-a578-448e-b06a-8af256312f61
ms.openlocfilehash: 501f9c354bd6f0b7a628aabb93f4680155f74a69
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342621"
---
# <a name="cwinformsdialog-class"></a>Classe CWinFormsDialog

Wrapper per una classe finestra di dialogo MFC che ospita un controllo utente Windows Form.

## <a name="syntax"></a>Sintassi

```
template <typename TManagedControl>
class CWinFormsDialog :
    public CDialog
```

#### <a name="parameters"></a>Parametri

*TManagedControl*<br/>
Il .NET Framework controllo utente da visualizzare nell'applicazione MFC.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CWinFormsDialog:: CWinFormsDialog](#cwinformsdialog)|Costruisce un oggetto `CWinFormsDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CWinFormsDialog:: GetControl](#getcontrol)|Recupera un riferimento al controllo utente Windows Forms.|
|[CWinFormsDialog:: GetControlHandle](#getcontrolhandle)|Recupera un handle di finestra per il controllo utente Windows Forms.|
|[CWinFormsDialog:: OnInitDialog](#oninitdialog)|Inizializza la finestra di dialogo MFC creando e ospitando un Windows Forms controllo utente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-|
|[Operatore CWinFormsDialog:: operator-&gt;](#operator_-_gt)|Sostituisce [CWinFormsDialog:: GetControl](#getcontrol) nelle espressioni.|
|[CWinFormsDialog:: operator TManagedControl ^](#operator-tmanagedcontrol-hat)|Esegue il cast di un tipo come riferimento a un controllo utente Windows Forms.|

## <a name="remarks"></a>Commenti

`CWinFormsDialog` è un wrapper per una classe di finestre di dialogo MFC ( [CDialog](../../mfc/reference/cdialog-class.md)) che ospita un controllo utente Windows Forms. In questo modo è possibile visualizzare i controlli .NET Framework in una finestra di dialogo MFC modale o non modale.

Per ulteriori informazioni sull'utilizzo di Windows Forms, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md) e [hosting di un controllo utente Windows Form come finestra di dialogo MFC](../../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms. h

## <a name="cwinformsdialogcwinformsdialog"></a><a name="cwinformsdialog"></a> CWinFormsDialog:: CWinFormsDialog

Costruisce un oggetto `CWinFormsDialog`.

```
CWinFormsDialog(UINT nIDTemplate = IDD);
```

### <a name="parameters"></a>Parametri

*nIDTemplate*<br/>
Contiene l'ID di una risorsa modello di finestra di dialogo. Utilizzare l'editor finestre per creare il modello di finestra di dialogo e archiviarlo nel file di script di risorsa dell'applicazione. Per ulteriori informazioni sui modelli di finestre di dialogo, vedere [classe CDialog](../../mfc/reference/cdialog-class.md).

## <a name="cwinformsdialoggetcontrol"></a><a name="getcontrol"></a> CWinFormsDialog:: GetControl

Recupera un riferimento al controllo utente Windows Forms.

```
inline TManagedControl^ GetControl() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al controllo Windows Forms nella finestra di dialogo MFC.

## <a name="cwinformsdialoggetcontrolhandle"></a><a name="getcontrolhandle"></a> CWinFormsDialog:: GetControlHandle

Recupera un handle di finestra per il controllo utente Windows Forms.

```
inline HWND GetControlHandle() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle di finestra per il controllo utente Windows Forms.

## <a name="cwinformsdialogoninitdialog"></a><a name="oninitdialog"></a> CWinFormsDialog:: OnInitDialog

Inizializza la finestra di dialogo MFC creando e ospitando un Windows Forms controllo utente.

```
virtual BOOL OnInitDialog();
```

### <a name="return-value"></a>Valore restituito

Valore booleano che specifica se l'applicazione ha impostato lo stato attivo per l'input su uno dei controlli della finestra di dialogo. Se `OnInitDialog` restituisce un valore diverso da zero, Windows imposta lo stato attivo per l'input sul primo controllo nella finestra di dialogo. Questo metodo può restituire 0 solo se l'applicazione ha impostato in modo esplicito lo stato attivo per l'input su uno dei controlli della finestra di dialogo.

### <a name="remarks"></a>Commenti

Quando viene creata la finestra di dialogo MFC (usando il metodo [create](../../mfc/reference/cdialog-class.md#create), [CreateIndirect](../../mfc/reference/cdialog-class.md#createindirect)o [DoModal](../../mfc/reference/cdialog-class.md#domodal) ereditato da [CDialog](../../mfc/reference/cdialog-class.md)), viene inviato un messaggio di WM_INITDIALOG e viene chiamato questo metodo. Viene creata un'istanza di un controllo Windows Forms nella finestra di dialogo e le dimensioni della finestra di dialogo vengono regolate in base alle dimensioni del controllo utente. Quindi ospita il nuovo controllo nella finestra di dialogo MFC.

Eseguire l'override di questa funzione membro se è necessario eseguire un'elaborazione speciale quando la finestra di dialogo è inizializzata. Per ulteriori informazioni sull'utilizzo di questo metodo, vedere [CDialog:: OnInitDialog](../../mfc/reference/cdialog-class.md#oninitdialog).

## <a name="cwinformsdialogoperator--gt"></a><a name="operator_-_gt"></a> Operatore CWinFormsDialog:: operator-&gt;

Sostituisce [CWinFormsDialog:: GetControl](#getcontrol) nelle espressioni.

```
inline TManagedControl^  operator->() const throw();
```

### <a name="remarks"></a>Commenti

Questo operatore fornisce una sintassi pratica che sostituisce `GetControl` nelle espressioni.

Per informazioni sull'utilizzo di Windows Forms, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="cwinformsdialogoperator-tmanagedcontrol"></a><a name="operator-tmanagedcontrol-hat"></a> CWinFormsDialog:: operator TManagedControl ^

Esegue il cast di un tipo come riferimento a un controllo utente Windows Forms.

```
inline operator TManagedControl^() const throw();
```

### <a name="remarks"></a>Commenti

Questo operatore esegue il cast di un tipo come riferimento a un controllo Windows Forms. Viene usato per passare una finestra `CWinFormsDialog<TManagedControl>` di dialogo a funzioni che accettano un puntatore a un oggetto Windows Forms controllo utente.

## <a name="see-also"></a>Vedi anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CWinFormsView](../../mfc/reference/cwinformsview-class.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)
