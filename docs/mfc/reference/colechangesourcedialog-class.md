---
description: 'Altre informazioni su: classe COleChangeSourceDialog'
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
ms.openlocfilehash: 2962534b5c1e85e274d134a347821a94d646b66d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97209932"
---
# <a name="colechangesourcedialog-class"></a>Classe COleChangeSourceDialog

Utilizzato per la finestra di dialogo di modifica dell'origine OLE.

## <a name="syntax"></a>Sintassi

```
class COleChangeSourceDialog : public COleDialog
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[COleChangeSourceDialog:: COleChangeSourceDialog](#colechangesourcedialog)|Costruisce un oggetto `COleChangeSourceDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COleChangeSourceDialog::D oModal](#domodal)|Consente di visualizzare la finestra di dialogo Modifica origine OLE.|
|[COleChangeSourceDialog:: GetDisplayName](#getdisplayname)|Ottiene il nome visualizzato dell'origine completo.|
|[COleChangeSourceDialog:: GetFileName](#getfilename)|Ottiene il nome del file dal nome di origine.|
|[COleChangeSourceDialog:: GetFromPrefix](#getfromprefix)|Ottiene il prefisso dell'origine precedente.|
|[COleChangeSourceDialog:: GetItemName](#getitemname)|Ottiene il nome dell'elemento dal nome dell'origine.|
|[COleChangeSourceDialog:: GetToPrefix](#gettoprefix)|Ottiene il prefisso della nuova origine|
|[COleChangeSourceDialog:: IsValidSource](#isvalidsource)|Indica se l'origine è valida.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[COleChangeSourceDialog:: m_cs](#m_cs)|Struttura che controlla il comportamento della finestra di dialogo.|

## <a name="remarks"></a>Commenti

Creare un oggetto della classe `COleChangeSourceDialog` quando si desidera chiamare questa finestra di dialogo. Dopo la `COleChangeSourceDialog` costruzione di un oggetto, è possibile utilizzare la struttura [m_cs](#m_cs) per inizializzare i valori o gli Stati dei controlli nella finestra di dialogo. La `m_cs` struttura è di tipo [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew). Per ulteriori informazioni sull'utilizzo di questa classe della finestra di dialogo, vedere la funzione membro [DoModal](#domodal) .

Per ulteriori informazioni, vedere la struttura [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) in Windows SDK.

Per ulteriori informazioni sulle finestre di dialogo specifiche di OLE, vedere l'articolo finestre [di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

[COleDialog](../../mfc/reference/coledialog-class.md)

`COleChangeSourceDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxodlgs. h

## <a name="colechangesourcedialogcolechangesourcedialog"></a><a name="colechangesourcedialog"></a> COleChangeSourceDialog:: COleChangeSourceDialog

Questa funzione costruisce un `COleChangeSourceDialog` oggetto.

```
explicit COleChangeSourceDialog(
    COleClientItem* pItem,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*pItem*<br/>
Puntatore all'oggetto [COleClientItem](../../mfc/reference/coleclientitem-class.md) collegato la cui origine deve essere aggiornata.

*pParentWnd*<br/>
Punta all'oggetto padre o alla finestra proprietaria (di tipo `CWnd` ) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo verrà impostata sulla finestra principale dell'applicazione.

### <a name="remarks"></a>Commenti

Per visualizzare la finestra di dialogo, chiamare la funzione [DoModal](#domodal) .

Per ulteriori informazioni, vedere la struttura [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) e la funzione [OLEUICHANGESOURCE](/windows/win32/api/oledlg/nf-oledlg-oleuichangesourcew) in Windows SDK.

## <a name="colechangesourcedialogdomodal"></a><a name="domodal"></a> COleChangeSourceDialog::D oModal

Chiamare questa funzione per visualizzare la finestra di dialogo di modifica dell'origine OLE.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Stato di completamento della finestra di dialogo. Uno dei valori seguenti:

- IDOK se la finestra di dialogo è stata visualizzata correttamente.

- IDCANCEL se l'utente ha annullato la finestra di dialogo.

- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare la funzione membro [COleDialog:: GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco di possibili errori, vedere la funzione [OLEUICHANGESOURCE](/windows/win32/api/oledlg/nf-oledlg-oleuichangesourcew) in Windows SDK.

### <a name="remarks"></a>Commenti

Se si desidera inizializzare i vari controlli della finestra di dialogo impostando i membri della struttura [m_cs](#m_cs) , è necessario eseguire questa operazione prima di chiamare `DoModal` , ma dopo la costruzione dell'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare le funzioni membro per recuperare le impostazioni immesse dall'utente o le informazioni dalla finestra di dialogo. Di seguito sono elencati i nomi delle funzioni di query tipiche:

- [GetFileName](#getfilename)

- [GetDisplayName](#getdisplayname)

- [GetItemName](#getitemname)

## <a name="colechangesourcedialoggetdisplayname"></a><a name="getdisplayname"></a> COleChangeSourceDialog:: GetDisplayName

Chiamare questa funzione per recuperare il nome visualizzato completo per l'elemento del client collegato.

```
CString GetDisplayName();
```

### <a name="return-value"></a>Valore restituito

Nome visualizzato dell'origine completo (moniker) per il [COleClientItem](../../mfc/reference/coleclientitem-class.md) specificato nel costruttore.

## <a name="colechangesourcedialoggetfilename"></a><a name="getfilename"></a> COleChangeSourceDialog:: GetFileName

Chiamare questa funzione per recuperare la parte del moniker del file del nome visualizzato per l'elemento del client collegato.

```
CString GetFileName();
```

### <a name="return-value"></a>Valore restituito

Porzione del moniker del file del nome visualizzato di origine per il [COleClientItem](../../mfc/reference/coleclientitem-class.md) specificato nel costruttore.

### <a name="remarks"></a>Commenti

Il moniker del file insieme al moniker dell'elemento fornisce il nome visualizzato completo.

## <a name="colechangesourcedialoggetfromprefix"></a><a name="getfromprefix"></a> COleChangeSourceDialog:: GetFromPrefix

Chiamare questa funzione per ottenere la stringa di prefisso precedente per l'origine.

```
CString GetFromPrefix();
```

### <a name="return-value"></a>Valore restituito

Stringa di prefisso precedente dell'origine.

### <a name="remarks"></a>Commenti

Chiamare questa funzione solo dopo che [DoModal](#domodal) restituisce IDOK.

Questo valore deriva direttamente dal `lpszFrom` membro della struttura [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) .

Per ulteriori informazioni, vedere la struttura [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) in Windows SDK.

## <a name="colechangesourcedialoggetitemname"></a><a name="getitemname"></a> COleChangeSourceDialog:: GetItemName

Chiamare questa funzione per recuperare la parte del moniker dell'elemento del nome visualizzato per l'elemento del client collegato.

```
CString GetItemName();
```

### <a name="return-value"></a>Valore restituito

Parte del moniker dell'elemento del nome visualizzato di origine per il [COleClientItem](../../mfc/reference/coleclientitem-class.md) specificato nel costruttore.

### <a name="remarks"></a>Commenti

Il moniker del file insieme al moniker dell'elemento fornisce il nome visualizzato completo.

## <a name="colechangesourcedialoggettoprefix"></a><a name="gettoprefix"></a> COleChangeSourceDialog:: GetToPrefix

Chiamare questa funzione per ottenere la nuova stringa di prefisso per l'origine.

```
CString GetToPrefix();
```

### <a name="return-value"></a>Valore restituito

Nuova stringa di prefisso dell'oggetto di origine.

### <a name="remarks"></a>Commenti

Chiamare questa funzione solo dopo che [DoModal](#domodal) restituisce IDOK.

Questo valore deriva direttamente dal `lpszTo` membro della struttura [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) .

Per ulteriori informazioni, vedere la struttura [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) in Windows SDK.

## <a name="colechangesourcedialogm_cs"></a><a name="m_cs"></a> COleChangeSourceDialog:: m_cs

Questo membro dati è una struttura di tipo [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew).

```
OLEUICHANGESOURCE m_cs;
```

### <a name="remarks"></a>Commenti

`OLEUICHANGESOURCE` viene utilizzato per controllare il comportamento della finestra di dialogo di modifica dell'origine OLE. I membri di questa struttura possono essere modificati direttamente.

Per ulteriori informazioni, vedere la struttura [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) in Windows SDK.

## <a name="colechangesourcedialogisvalidsource"></a><a name="isvalidsource"></a> COleChangeSourceDialog:: IsValidSource

Chiamare questa funzione per determinare se la nuova origine è valida.

```
BOOL IsValidSource();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se la nuova origine è valida; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Chiamare questa funzione solo dopo che [DoModal](#domodal) restituisce IDOK.

Per ulteriori informazioni, vedere la struttura [OLEUICHANGESOURCE](/windows/win32/api/oledlg/ns-oledlg-oleuichangesourcew) in Windows SDK.

## <a name="see-also"></a>Vedi anche

[Classe COleDialog](../../mfc/reference/coledialog-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleDialog](../../mfc/reference/coledialog-class.md)
