---
description: 'Altre informazioni su: classe COleChangeIconDialog'
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
ms.openlocfilehash: 5ec6113bbcf63462380f18c4ac52abbb8706c8d5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97209958"
---
# <a name="colechangeicondialog-class"></a>Classe COleChangeIconDialog

Utilizzato per la finestra di dialogo di modifica dell'icona OLE.

## <a name="syntax"></a>Sintassi

```
class COleChangeIconDialog : public COleDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleChangeIconDialog:: COleChangeIconDialog](#colechangeicondialog)|Costruisce un oggetto `COleChangeIconDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleChangeIconDialog::D oChangeIcon](#dochangeicon)|Esegue la modifica specificata nella finestra di dialogo.|
|[COleChangeIconDialog::D oModal](#domodal)|Consente di visualizzare la finestra di dialogo icona modifica OLE 2.|
|[COleChangeIconDialog:: GetIconicMetafile](#geticonicmetafile)|Ottiene un handle per il Metafile associato alla forma iconica di questo elemento.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[COleChangeIconDialog:: m_ci](#m_ci)|Struttura che controlla il comportamento della finestra di dialogo.|

## <a name="remarks"></a>Commenti

Creare un oggetto della classe `COleChangeIconDialog` quando si desidera chiamare questa finestra di dialogo. Dopo la `COleChangeIconDialog` costruzione di un oggetto, è possibile utilizzare la struttura [m_ci](#m_ci) per inizializzare i valori o gli Stati dei controlli nella finestra di dialogo. La `m_ci` struttura è di tipo OLEUICHANGEICON. Per ulteriori informazioni sull'utilizzo di questa classe della finestra di dialogo, vedere la funzione membro [DoModal](#domodal) .

Per ulteriori informazioni, vedere la struttura [OleUIChangeIcon](/windows/win32/api/oledlg/ns-oledlg-oleuichangeiconw) nel Windows SDK.

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo finestre [di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COleChangeIconDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs. h

## <a name="colechangeicondialogcolechangeicondialog"></a><a name="colechangeicondialog"></a> COleChangeIconDialog:: COleChangeIconDialog

Questa funzione costruisce solo un `COleChangeIconDialog` oggetto.

```
explicit COleChangeIconDialog(
    COleClientItem* pItem,
    DWORD dwFlags = CIF_SELECTCURRENT,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Punta all'elemento da convertire.

*dwFlags*<br/>
Flag di creazione, che contiene un numero qualsiasi dei valori seguenti combinati tramite l'operatore OR bit per bit:

- CIF_SELECTCURRENT specifica che il pulsante di opzione corrente verrà selezionato inizialmente quando viene chiamata la finestra di dialogo. Questo è il valore predefinito.

- CIF_SELECTDEFAULT specifica che il pulsante di opzione predefinito verrà selezionato inizialmente quando viene chiamata la finestra di dialogo.

- CIF_SELECTFROMFILE specifica che il pulsante di opzione da file verrà selezionato inizialmente quando viene chiamata la finestra di dialogo.

- CIF_SHOWHELP specifica che il pulsante della guida viene visualizzato quando viene chiamata la finestra di dialogo.

- CIF_USEICONEXE specifica che l'icona deve essere estratta dall'eseguibile specificato nel `szIconExe` campo di [m_ci](#m_ci) anziché recuperato dal tipo. Questa operazione è utile per l'incorporamento o il collegamento a file non OLE.

*pParentWnd*<br/>
Punta all'oggetto padre o alla finestra proprietaria (di tipo `CWnd` ) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo verrà impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Commenti

Per visualizzare la finestra di dialogo, chiamare la funzione [DoModal](#domodal) .

Per ulteriori informazioni, vedere la struttura [OleUIChangeIcon](/windows/win32/api/oledlg/ns-oledlg-oleuichangeiconw) nel Windows SDK.

## <a name="colechangeicondialogdochangeicon"></a><a name="dochangeicon"></a> COleChangeIconDialog::D oChangeIcon

Chiamare questa funzione per modificare l'icona che rappresenta l'elemento in quello selezionato nella finestra di dialogo dopo che [DoModal](#domodal) restituisce IDOK.

```
BOOL DoChangeIcon(COleClientItem* pItem);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Punta all'elemento di cui è in corso la modifica dell'icona.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la modifica ha esito positivo; in caso contrario, 0.

## <a name="colechangeicondialogdomodal"></a><a name="domodal"></a> COleChangeIconDialog::D oModal

Chiamare questa funzione per visualizzare la finestra di dialogo icona di modifica OLE.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento della finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo è stata visualizzata correttamente.

- IDCANCEL se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare la `COleDialog::GetLastError` funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco di possibili errori, vedere la funzione [OleUIChangeIcon](/windows/win32/api/oledlg/nf-oledlg-oleuichangeiconw) nella Windows SDK.

### <a name="remarks"></a>Commenti

Se si desidera inizializzare i vari controlli della finestra di dialogo impostando i membri della struttura [m_ci](#m_ci) , è necessario eseguire questa operazione prima di chiamare `DoModal` , ma dopo la costruzione dell'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare altre funzioni membro per recuperare le impostazioni o le informazioni che sono state inserite dall'utente nella finestra di dialogo.

## <a name="colechangeicondialoggeticonicmetafile"></a><a name="geticonicmetafile"></a> COleChangeIconDialog:: GetIconicMetafile

Chiamare questa funzione per ottenere un handle per il metafile che contiene l'aspetto iconico dell'elemento selezionato.

```
HGLOBAL GetIconicMetafile() const;
```

### <a name="return-value"></a>Valore restituito

Handle per il metafile contenente l'aspetto iconico della nuova icona, se la finestra di dialogo è stata annullata scegliendo **OK**; in caso contrario, l'icona era prima che venisse visualizzata la finestra di dialogo.

## <a name="colechangeicondialogm_ci"></a><a name="m_ci"></a> COleChangeIconDialog:: m_ci

Struttura di tipo OLEUICHANGEICON utilizzata per controllare il comportamento della finestra di dialogo Cambia icona.

```
OLEUICHANGEICON m_ci;
```

### <a name="remarks"></a>Commenti

I membri di questa struttura possono essere modificati direttamente o tramite le funzioni membro.

Per ulteriori informazioni, vedere la struttura [OleUIChangeIcon](/windows/win32/api/oledlg/ns-oledlg-oleuichangeiconw) nel Windows SDK.

## <a name="see-also"></a>Vedi anche

[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
