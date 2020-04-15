---
title: Classe COleChangeIconDialog
ms.date: 11/04/2016
f1_keywords:
- COleChangeIconDialog
- AFXODLGS/COleChangeIconDialog
- AFXODLGS/COleChangeIconDialog::COleChangeIconDialog
- AFXODLGS/COleChangeIconDialog::DoChangeIcon
- AFXODLGS/COleChangeIconDialog::DoModal
- AFXODLGS/COleChangeIconDialog::GetIconicMetafile
- AFXODLGS/COleChangeIconDialog::m_ci
helpviewer_keywords:
- COleChangeIconDialog [MFC], COleChangeIconDialog
- COleChangeIconDialog [MFC], DoChangeIcon
- COleChangeIconDialog [MFC], DoModal
- COleChangeIconDialog [MFC], GetIconicMetafile
- COleChangeIconDialog [MFC], m_ci
ms.assetid: 8d6e131b-ddbb-4dff-a432-f239efda8e3d
ms.openlocfilehash: 6cdc0ed6bfa4765817de8b7628f339db5e7e5bf5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369627"
---
# <a name="colechangeicondialog-class"></a>Classe COleChangeIconDialog

Utilizzato per la finestra di dialogo di modifica dell'icona OLE.

## <a name="syntax"></a>Sintassi

```
class COleChangeIconDialog : public COleDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleChangeIconDialog::COleChangeIconDialog](#colechangeicondialog)|Costruisce un oggetto `COleChangeIconDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleChangeIconDialog::DochangeIcon](#dochangeicon)|Esegue la modifica specificata nella finestra di dialogo.|
|[COleChangeIconDialog::DoModal](#domodal)|Visualizza la finestra di dialogo Cambia icona OLE 2.|
|[COleChangeIconDialog::GetIconicMetafile](#geticonicmetafile)|Ottiene un handle per il metafile associato al form iconico di questo elemento.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleChangeIconDialog::m_ci](#m_ci)|Struttura che controlla il comportamento della finestra di dialogo.|

## <a name="remarks"></a>Osservazioni

Creare un oggetto `COleChangeIconDialog` di classe quando si desidera chiamare questa finestra di dialogo. Dopo `COleChangeIconDialog` aver costruito un oggetto, è possibile utilizzare la struttura [m_ci](#m_ci) per inizializzare i valori o gli stati dei controlli nella finestra di dialogo. La `m_ci` struttura è di tipo OLEUICHANGEICON. Per altre informazioni sull'uso di questa classe di finestre di dialogo, vedere la funzione membro [DoModal.For](#domodal) more information about using this dialog class, see the DoModal member function.

Per ulteriori informazioni, vedere la struttura [OLEUICHANGEICON](/windows/win32/api/oledlg/ns-oledlg-oleuichangeiconw) in Windows SDK.

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo [Finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COleChangeIconDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs.h

## <a name="colechangeicondialogcolechangeicondialog"></a><a name="colechangeicondialog"></a>COleChangeIconDialog::COleChangeIconDialog

Questa funzione costruisce `COleChangeIconDialog` solo un oggetto.

```
explicit COleChangeIconDialog(
    COleClientItem* pItem,
    DWORD dwFlags = CIF_SELECTCURRENT,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*pItem (elemento)*<br/>
Punta all'elemento da convertire.

*dwFlags*<br/>
Flag di creazione, che contiene un numero qualsiasi dei seguenti valori combinati utilizzando l'operatore or bit per bit:

- CIF_SELECTCURRENT specifica che il pulsante di opzione Corrente verrà selezionato inizialmente quando viene chiamata la finestra di dialogo. Questa è la modalità predefinita.

- CIF_SELECTDEFAULT specifica che il pulsante di opzione Predefinito verrà selezionato inizialmente quando viene chiamata la finestra di dialogo.

- CIF_SELECTFROMFILE specifica che il pulsante di opzione Da file verrà selezionato inizialmente quando viene chiamata la finestra di dialogo.

- CIF_SHOWHELP specifica che il pulsante ?da un messaggio di posta elettronica verrà visualizzato quando viene chiamata la finestra di dialogo.

- CIF_USEICONEXE Specifica che l'icona deve essere estratta `szIconExe` dall'eseguibile specificato nel campo di [m_ci](#m_ci) anziché essere recuperata dal tipo. Ciò è utile per l'incorporamento o il collegamento a file non OLE.

*pParentWnd (informazioni in due)*<br/>
Punta all'oggetto finestra padre o `CWnd`proprietario (di tipo ) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo verrà impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Osservazioni

Per visualizzare la finestra di dialogo, chiamare la funzione [DoModal](#domodal) .

Per ulteriori informazioni, vedere la struttura [OLEUICHANGEICON](/windows/win32/api/oledlg/ns-oledlg-oleuichangeiconw) in Windows SDK.

## <a name="colechangeicondialogdochangeicon"></a><a name="dochangeicon"></a>COleChangeIconDialog::DochangeIcon

Chiamare questa funzione per modificare l'icona che rappresenta l'elemento a quello selezionato nella finestra di dialogo dopo [DoModal](#domodal) restituisce IDOK.

```
BOOL DoChangeIcon(COleClientItem* pItem);
```

### <a name="parameters"></a>Parametri

*pItem (elemento)*<br/>
Punta all'elemento la cui icona sta cambiando.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la modifica ha esito positivo; in caso contrario 0.

## <a name="colechangeicondialogdomodal"></a><a name="domodal"></a>COleChangeIconDialog::DoModal

Chiamare questa funzione per visualizzare la finestra di dialogo Modifica icona OLE.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo è stata visualizzata correttamente.

- IDCANCEL se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, `COleDialog::GetLastError` chiamare la funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco dei possibili errori, vedere la funzione [OleUIChangeIcon](/windows/win32/api/oledlg/nf-oledlg-oleuichangeiconw) in Windows SDK.

### <a name="remarks"></a>Osservazioni

Se si desidera inizializzare i vari controlli della finestra di dialogo `DoModal`impostando i membri della [struttura m_ci,](#m_ci) è necessario eseguire questa operazione prima di chiamare , ma dopo la costruzione dell'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare altre funzioni membro per recuperare le impostazioni o le informazioni immesse dall'utente nella finestra di dialogo.

## <a name="colechangeicondialoggeticonicmetafile"></a><a name="geticonicmetafile"></a>COleChangeIconDialog::GetIconicMetafile

Chiamare questa funzione per ottenere un handle per il metafile che contiene l'aspetto iconico dell'elemento selezionato.

```
HGLOBAL GetIconicMetafile() const;
```

### <a name="return-value"></a>Valore restituito

Handle del metafile contenente l'aspetto iconico della nuova icona, se la finestra di dialogo è stata chiusa scegliendo **OK;** in caso contrario, l'icona così com'era prima della visualizzazione della finestra di dialogo.

## <a name="colechangeicondialogm_ci"></a><a name="m_ci"></a>COleChangeIconDialog::m_ci

Struttura di tipo OLEUICHANGEICON utilizzata per controllare il comportamento della finestra di dialogo Cambia icona.

```
OLEUICHANGEICON m_ci;
```

### <a name="remarks"></a>Osservazioni

I membri di questa struttura possono essere modificati direttamente o tramite funzioni membro.

Per ulteriori informazioni, vedere la struttura [OLEUICHANGEICON](/windows/win32/api/oledlg/ns-oledlg-oleuichangeiconw) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
