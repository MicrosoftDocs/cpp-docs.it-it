---
title: Classe COleChangeSourceDialog
ms.date: 11/04/2016
f1_keywords:
- COleChangeSourceDialog
- AFXODLGS/COleChangeSourceDialog
- AFXODLGS/COleChangeSourceDialog::COleChangeSourceDialog
- AFXODLGS/COleChangeSourceDialog::DoModal
- AFXODLGS/COleChangeSourceDialog::GetDisplayName
- AFXODLGS/COleChangeSourceDialog::GetFileName
- AFXODLGS/COleChangeSourceDialog::GetFromPrefix
- AFXODLGS/COleChangeSourceDialog::GetItemName
- AFXODLGS/COleChangeSourceDialog::GetToPrefix
- AFXODLGS/COleChangeSourceDialog::IsValidSource
- AFXODLGS/COleChangeSourceDialog::m_cs
helpviewer_keywords:
- COleChangeSourceDialog [MFC], COleChangeSourceDialog
- COleChangeSourceDialog [MFC], DoModal
- COleChangeSourceDialog [MFC], GetDisplayName
- COleChangeSourceDialog [MFC], GetFileName
- COleChangeSourceDialog [MFC], GetFromPrefix
- COleChangeSourceDialog [MFC], GetItemName
- COleChangeSourceDialog [MFC], GetToPrefix
- COleChangeSourceDialog [MFC], IsValidSource
- COleChangeSourceDialog [MFC], m_cs
ms.assetid: d0e08be7-21ef-45e1-97af-fe27d99e3bac
ms.openlocfilehash: 78da0a495de6ea951deab984550756a2d6f3e2bd
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81321865"
---
# <a name="colechangesourcedialog-class"></a>Classe COleChangeSourceDialog

Utilizzato per la finestra di dialogo di modifica dell'origine OLE.

## <a name="syntax"></a>Sintassi

```
class COleChangeSourceDialog : public COleDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleChangeSourceDialog::COleChangeSourceDialog](#colechangesourcedialog)|Costruisce un oggetto `COleChangeSourceDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleChangeSourceDialog::DoModal](#domodal)|Visualizza la finestra di dialogo Modifica origine OLE.|
|[COleChangeSourceDialog::GetDisplayName](#getdisplayname)|Ottiene il nome visualizzato di origine completo.|
|[COleChangeSourceDialog::NomeFile](#getfilename)|Ottiene il nome del file dal nome di origine.|
|[COleChangeSourceDialog::GetFromPrefix](#getfromprefix)|Ottiene il prefisso dell'origine precedente.|
|[COleChangeSourceDialog::GetItemName](#getitemname)|Ottiene il nome dell'elemento dal nome di origine.|
|[COleChangeSourceDialog::GetToPrefix](#gettoprefix)|Ottiene il prefisso della nuova origine|
|[COleChangeSourceDialog::IsValidSource](#isvalidsource)|Indica se l'origine è valida.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[COleChangeSourceDialog::m_cs](#m_cs)|Struttura che controlla il comportamento della finestra di dialogo.|

## <a name="remarks"></a>Osservazioni

Creare un oggetto `COleChangeSourceDialog` di classe quando si desidera chiamare questa finestra di dialogo. Dopo `COleChangeSourceDialog` aver costruito un oggetto, è possibile utilizzare la [struttura m_cs](#m_cs) per inizializzare i valori o gli stati dei controlli nella finestra di dialogo. La `m_cs` struttura è di tipo [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew). Per altre informazioni sull'uso di questa classe di finestre di dialogo, vedere la funzione membro [DoModal.For](#domodal) more information about using this dialog class, see the DoModal member function.

Per ulteriori informazioni, vedere la struttura [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) in Windows SDK.

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo [Finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COleChangeSourceDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs.h

## <a name="colechangesourcedialogcolechangesourcedialog"></a><a name="colechangesourcedialog"></a>COleChangeSourceDialog::COleChangeSourceDialog

Questa funzione costruisce `COleChangeSourceDialog` un oggetto.

```
explicit COleChangeSourceDialog(
    COleClientItem* pItem,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*pItem (elemento)*<br/>
Puntatore all'oggetto collegato [COleClientItem](../../mfc/reference/coleclientitem-class.md) la cui origine deve essere aggiornata.

*pParentWnd (informazioni in due)*<br/>
Punta all'oggetto finestra padre o `CWnd`proprietario (di tipo ) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo verrà impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Osservazioni

Per visualizzare la finestra di dialogo, chiamare la funzione [DoModal](#domodal) .

Per ulteriori informazioni, vedere la struttura [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) e la funzione [OleUIChangeSource](/windows/win32/api/oledlg/nf-oledlg-oleuichangesourcew) in Windows SDK.

## <a name="colechangesourcedialogdomodal"></a><a name="domodal"></a>COleChangeSourceDialog::DoModal

Chiamare questa funzione per visualizzare la finestra di dialogo Modifica origine OLE.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo è stata visualizzata correttamente.

- IDCANCEL se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare il [COleDialog::GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco dei possibili errori, vedere la funzione [OleUIChangeSource](/windows/win32/api/oledlg/nf-oledlg-oleuichangesourcew) in Windows SDK.

### <a name="remarks"></a>Osservazioni

Se si desidera inizializzare i vari controlli della finestra di dialogo `DoModal`impostando i membri della [struttura m_cs,](#m_cs) è necessario eseguire questa operazione prima di chiamare , ma dopo la costruzione dell'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare le funzioni membro per recuperare le impostazioni o le informazioni immesse dall'utente dalla finestra di dialogo. Nell'elenco seguente vengono elencati i nomi delle funzioni di query tipiche:

- [GetFileName](#getfilename)

- [Nome utenteGetDisplayName](#getdisplayname)

- [NomeElementoGetItemName](#getitemname)

## <a name="colechangesourcedialoggetdisplayname"></a><a name="getdisplayname"></a>COleChangeSourceDialog::GetDisplayName

Chiamare questa funzione per recuperare il nome visualizzato completo per l'elemento client collegato.

```
CString GetDisplayName();
```

### <a name="return-value"></a>Valore restituito

Nome visualizzato di origine completo (moniker) per [cOleClientItem](../../mfc/reference/coleclientitem-class.md) specificato nel costruttore.

## <a name="colechangesourcedialoggetfilename"></a><a name="getfilename"></a>COleChangeSourceDialog::NomeFile

Chiamare questa funzione per recuperare la parte del moniker del nome visualizzato per l'elemento client collegato.

```
CString GetFileName();
```

### <a name="return-value"></a>Valore restituito

Parte del moniker del nome visualizzato di origine per [COleClientItem](../../mfc/reference/coleclientitem-class.md) specificato nel costruttore.

### <a name="remarks"></a>Osservazioni

Il moniker di file insieme al moniker dell'elemento fornisce il nome visualizzato completo.

## <a name="colechangesourcedialoggetfromprefix"></a><a name="getfromprefix"></a>COleChangeSourceDialog::GetFromPrefix

Chiamare questa funzione per ottenere la stringa di prefisso precedente per l'origine.

```
CString GetFromPrefix();
```

### <a name="return-value"></a>Valore restituito

Stringa del prefisso precedente dell'origine.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione solo dopo DoModal restituisce IDOK.Call this function only after [DoModal](#domodal) returns IDOK.

Questo valore proviene `lpszFrom` direttamente dal membro della struttura [OLEUICHANGESOURCE.](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew)

Per ulteriori informazioni, vedere la struttura [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) in Windows SDK.

## <a name="colechangesourcedialoggetitemname"></a><a name="getitemname"></a>COleChangeSourceDialog::GetItemName

Chiamare questa funzione per recuperare la parte del moniker dell'elemento del nome visualizzato per l'elemento client collegato.

```
CString GetItemName();
```

### <a name="return-value"></a>Valore restituito

Parte del moniker dell'elemento del nome visualizzato di origine per [COleClientItem](../../mfc/reference/coleclientitem-class.md) specificato nel costruttore.

### <a name="remarks"></a>Osservazioni

Il moniker di file insieme al moniker dell'elemento fornisce il nome visualizzato completo.

## <a name="colechangesourcedialoggettoprefix"></a><a name="gettoprefix"></a>COleChangeSourceDialog::GetToPrefix

Chiamare questa funzione per ottenere la nuova stringa di prefisso per l'origine.

```
CString GetToPrefix();
```

### <a name="return-value"></a>Valore restituito

Nuova stringa di prefisso dell'origine.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione solo dopo DoModal restituisce IDOK.Call this function only after [DoModal](#domodal) returns IDOK.

Questo valore proviene `lpszTo` direttamente dal membro della struttura [OLEUICHANGESOURCE.](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew)

Per ulteriori informazioni, vedere la struttura [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) in Windows SDK.

## <a name="colechangesourcedialogm_cs"></a><a name="m_cs"></a>COleChangeSourceDialog::m_cs

Questo membro dati è una struttura di tipo [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew).

```
OLEUICHANGESOURCE m_cs;
```

### <a name="remarks"></a>Osservazioni

`OLEUICHANGESOURCE`viene utilizzato per controllare il comportamento della finestra di dialogo Modifica origine OLE. I membri di questa struttura possono essere modificati direttamente.

Per ulteriori informazioni, vedere la struttura [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) in Windows SDK.

## <a name="colechangesourcedialogisvalidsource"></a><a name="isvalidsource"></a>COleChangeSourceDialog::IsValidSource

Chiamare questa funzione per determinare se la nuova origine è valida.

```
BOOL IsValidSource();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la nuova origine è valida, in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione solo dopo DoModal restituisce IDOK.Call this function only after [DoModal](#domodal) returns IDOK.

Per ulteriori informazioni, vedere la struttura [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
