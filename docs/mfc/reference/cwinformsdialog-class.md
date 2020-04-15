---
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
ms.openlocfilehash: 3772033df59e065cedca61012cd479c812cf5b66
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367436"
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
Controllo utente .NET Framework da visualizzare nell'applicazione MFC.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinFormsDialog::CWinFormsDialog](#cwinformsdialog)|Costruisce un oggetto `CWinFormsDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinFormsDialog::GetControl](#getcontrol)|Recupera un riferimento al controllo utente Windows Form.|
|[CWinFormsDialog::GetControlHandle](#getcontrolhandle)|Recupera un handle di finestra per il controllo utente Windows Form.|
|[CWinFormsDialog::OnInitDialog](#oninitdialog)|Inizializza la finestra di dialogo MFC creando e ospitando un controllo utente Windows Form su di essa.|

### <a name="public-operators"></a>Operatori pubblici

|Nome||
|----------|-|
|[CWinFormsDialog::operatore -&gt;](#operator_-_gt)|Sostituisce [CWinFormsDialog::GetControl](#getcontrol) nelle espressioni.|
|[CWinFormsDialog::operatore TManagedControl](#operator-tmanagedcontrol-hat)|Esegue il cast di un tipo come riferimento a un controllo utente Windows Form.|

## <a name="remarks"></a>Osservazioni

`CWinFormsDialog`è un wrapper per una classe di finestre di dialogo MFC ( [CDialog](../../mfc/reference/cdialog-class.md)) che ospita un controllo utente Windows Form. In questo modo la visualizzazione dei controlli .NET Framework in una finestra di dialogo MFC modale o non modale.

Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md) e Hosting di un controllo utente Windows Form come finestra di [dialogo MFC](../../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms.h

## <a name="cwinformsdialogcwinformsdialog"></a><a name="cwinformsdialog"></a>CWinFormsDialog::CWinFormsDialog

Costruisce un oggetto `CWinFormsDialog`.

```
CWinFormsDialog(UINT nIDTemplate = IDD);
```

### <a name="parameters"></a>Parametri

*NIDTemplate (modello)*<br/>
Contiene l'ID di una risorsa modello di finestra di dialogo. Utilizzare l'editor finestre per creare il modello di finestra di dialogo e archiviarlo nel file di script di risorsa dell'applicazione. Per ulteriori informazioni sui modelli di finestra di dialogo, vedere [Classe CDialog](../../mfc/reference/cdialog-class.md).

## <a name="cwinformsdialoggetcontrol"></a><a name="getcontrol"></a>CWinFormsDialog::GetControl

Recupera un riferimento al controllo utente Windows Form.

```
inline TManagedControl^ GetControl() const;
```

### <a name="return-value"></a>Valore restituito

Restituisce un riferimento al controllo Windows Form nella finestra di dialogo MFC.

## <a name="cwinformsdialoggetcontrolhandle"></a><a name="getcontrolhandle"></a>CWinFormsDialog::GetControlHandle

Recupera un handle di finestra per il controllo utente Windows Form.

```
inline HWND GetControlHandle() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce un handle di finestra per il controllo utente Windows Form.

## <a name="cwinformsdialogoninitdialog"></a><a name="oninitdialog"></a>CWinFormsDialog::OnInitDialog

Inizializza la finestra di dialogo MFC creando e ospitando un controllo utente Windows Form su di essa.

```
virtual BOOL OnInitDialog();
```

### <a name="return-value"></a>Valore restituito

Valore booleano che specifica se l'applicazione ha impostato lo stato attivo per l'input su uno dei controlli nella finestra di dialogo. Se `OnInitDialog` restituisce un valore diverso da zero, Windows imposta lo stato attivo per l'input sul primo controllo nella finestra di dialogo. Questo metodo può restituire 0 solo se l'applicazione ha impostato in modo esplicito lo stato attivo per l'input su uno dei controlli nella finestra di dialogo.

### <a name="remarks"></a>Osservazioni

Quando viene creata la finestra di dialogo MFC (utilizzando il metodo [Create](../../mfc/reference/cdialog-class.md#create), [CreateIndirect](../../mfc/reference/cdialog-class.md#createindirect)o [DoModal](../../mfc/reference/cdialog-class.md#domodal) ereditato da [CDialog](../../mfc/reference/cdialog-class.md)), viene inviato un messaggio WM_INITDIALOG e viene chiamato questo metodo . Crea un'istanza di un controllo Windows Form nella finestra di dialogo e regola le dimensioni della finestra di dialogo in modo da contenere le dimensioni del controllo utente. Quindi ospita il nuovo controllo nella finestra di dialogo MFC.

Eseguire l'override di questa funzione membro se è necessario eseguire un'elaborazione speciale quando viene inizializzata la finestra di dialogo. Per ulteriori informazioni sull'utilizzo di questo metodo, vedere [CDialog::OnInitDialog](../../mfc/reference/cdialog-class.md#oninitdialog).

## <a name="cwinformsdialogoperator--gt"></a><a name="operator_-_gt"></a>CWinFormsDialog::operatore -&gt;

Sostituisce [CWinFormsDialog::GetControl](#getcontrol) nelle espressioni.

```
inline TManagedControl^  operator->() const throw();
```

### <a name="remarks"></a>Osservazioni

Questo operatore fornisce una `GetControl` sintassi comoda che sostituisce nelle espressioni.

Per informazioni sull'utilizzo di Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="cwinformsdialogoperator-tmanagedcontrol"></a><a name="operator-tmanagedcontrol-hat"></a>CWinFormsDialog::operatore TManagedControl

Esegue il cast di un tipo come riferimento a un controllo utente Windows Form.

```
inline operator TManagedControl^() const throw();
```

### <a name="remarks"></a>Osservazioni

Questo operatore esegue il cast di un tipo come riferimento a un controllo Windows Form.This operator casts a type as a reference to a Windows Forms control. Viene utilizzato per `CWinFormsDialog<TManagedControl>` passare una finestra di dialogo alle funzioni che accettano un puntatore a un oggetto controllo utente Windows Form.

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CWinFormsView](../../mfc/reference/cwinformsview-class.md)<br/>
[Classe CDialog](../../mfc/reference/cdialog-class.md)
