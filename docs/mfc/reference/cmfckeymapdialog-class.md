---
description: 'Altre informazioni su: classe CMFCKeyMapDialog'
title: Classe CMFCKeyMapDialog
ms.date: 11/04/2016
f1_keywords:
- CMFCKeyMapDialog
- AFXKEYMAPDIALOG/CMFCKeyMapDialog
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::CMFCKeyMapDialog
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::DoModal
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::FormatItem
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::GetCommandKeys
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::OnInsertItem
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::OnPrintHeader
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::OnPrintItem
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::OnSetColumns
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::PrintKeyMap
- AFXKEYMAPDIALOG/CMFCKeyMapDialog::SetColumnsWidth
helpviewer_keywords:
- CMFCKeyMapDialog [MFC], CMFCKeyMapDialog
- CMFCKeyMapDialog [MFC], DoModal
- CMFCKeyMapDialog [MFC], FormatItem
- CMFCKeyMapDialog [MFC], GetCommandKeys
- CMFCKeyMapDialog [MFC], OnInsertItem
- CMFCKeyMapDialog [MFC], OnPrintHeader
- CMFCKeyMapDialog [MFC], OnPrintItem
- CMFCKeyMapDialog [MFC], OnSetColumns
- CMFCKeyMapDialog [MFC], PrintKeyMap
- CMFCKeyMapDialog [MFC], SetColumnsWidth
ms.assetid: 5feb4942-d636-462d-a162-0104dd320f4e
ms.openlocfilehash: e339edb54b9c381dd2b27c9ee3ec7566308ae434
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97265233"
---
# <a name="cmfckeymapdialog-class"></a>Classe CMFCKeyMapDialog

La `CMFCKeyMapDialog` classe supporta un controllo che esegue il mapping dei comandi alle chiavi sulla tastiera.

## <a name="syntax"></a>Sintassi

```
class CMFCKeyMapDialog : public CDialogEx
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCKeyMapDialog:: CMFCKeyMapDialog](#cmfckeymapdialog)|Costruisce un oggetto `CMFCKeyMapDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCKeyMapDialog::D oModal](#domodal)|Visualizza una finestra di dialogo di mappatura della tastiera.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Description|
|----------|-----------------|
|[CMFCKeyMapDialog:: FormatItem](#formatitem)|Chiamata eseguita dal Framework per compilare una stringa che descrive un mapping di chiavi. Per impostazione predefinita, la stringa contiene il nome del comando, i tasti di scelta rapida usati e la descrizione del tasto di scelta rapida.|
|[CMFCKeyMapDialog:: GetCommandKeys](#getcommandkeys)|Recupera una stringa che contiene un elenco di tasti di scelta rapida associati al comando specificato.|
|[CMFCKeyMapDialog:: OnInsertItem](#oninsertitem)|Chiamata eseguita dal Framework prima dell'inserimento di un nuovo elemento nel controllo elenco interno che supporta il controllo mappatura della tastiera.|
|[CMFCKeyMapDialog:: ontester](#onprintheader)|Chiamato dal Framework per stampare l'intestazione per la mappa della tastiera in una nuova pagina.|
|[CMFCKeyMapDialog:: OnPrintItem](#onprintitem)|Chiamata eseguita dal Framework per stampare un elemento di mappatura della tastiera.|
|[CMFCKeyMapDialog:: OnSetColumns](#onsetcolumns)|Chiamata eseguita dal Framework per impostare le didascalie per le colonne nel controllo elenco interno che supporta il controllo mappatura della tastiera.|
|[CMFCKeyMapDialog::P rintKeyMap](#printkeymap)|Chiamata eseguita dal framework quando un utente fa clic sul pulsante **stampa** .|
|[CMFCKeyMapDialog:: SetColumnsWidth](#setcolumnswidth)|Chiamata eseguita dal Framework per impostare la larghezza delle colonne nel controllo elenco interno che supporta il controllo mappatura della tastiera.|

## <a name="remarks"></a>Commenti

Utilizzare la `CMFCKeyMapDialog` classe per implementare una finestra di dialogo di mappatura della tastiera ridimensionabile. Nella finestra di dialogo viene utilizzato un controllo visualizzazione elenco per visualizzare le scelte rapide da tastiera e i relativi comandi.

Per usare la `CMFCKeyMapDialog` classe in un'applicazione, passare un puntatore alla finestra cornice principale come parametro per il `CMFCKeyMapDialog` costruttore. Chiamare quindi il `DoModal` metodo per avviare una finestra di dialogo modale.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CDialogEx](../../mfc/reference/cdialogex-class.md)

[CMFCKeyMapDialog](../../mfc/reference/cmfckeymapdialog-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** afxkeymapdialog. h

## <a name="cmfckeymapdialogcmfckeymapdialog"></a><a name="cmfckeymapdialog"></a> CMFCKeyMapDialog:: CMFCKeyMapDialog

Costruisce un oggetto `CMFCKeyMapDialog`.

```
CMFCKeyMapDialog(
    CFrameWnd* pWndParentFrame,
    BOOL bEnablePrint=FALSE);
```

### <a name="parameters"></a>Parametri

*pWndParentFrame*<br/>
in Puntatore alla finestra padre dell' `CMFCKeyMapDialog` oggetto.

*bEnablePrint*<br/>
in TRUE se è possibile stampare l'elenco di tasti di scelta rapida; in caso contrario, FALSE. Il valore predefinito è FALSE.

### <a name="remarks"></a>Commenti

### <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come costruire un oggetto della `CMFCKeyMapDialog` classe. Questo esempio fa parte dell' [esempio demo di Visual Studio](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_VisualStudioDemo#21](../../mfc/codesnippet/cpp/cmfckeymapdialog-class_1.cpp)]

## <a name="cmfckeymapdialogdomodal"></a><a name="domodal"></a> CMFCKeyMapDialog::D oModal

Visualizza una finestra di dialogo di mappatura della tastiera.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

Intero con segno, ad esempio IDOK o IDCANCEL, che viene passato al metodo [CDialog:: EndDialog](../../mfc/reference/cdialog-class.md#enddialog) . Il metodo, a sua volta, chiude la finestra di dialogo. Per ulteriori informazioni, vedere [CDialog::D omodal](../../mfc/reference/cdialog-class.md#domodal).

### <a name="remarks"></a>Commenti

La finestra di dialogo mapping tastiera consente di selezionare e assegnare tasti di scelta rapida a diverse categorie di comandi. Inoltre, è possibile copiare negli Appunti i tasti di scelta rapida selezionati e la relativa descrizione.

## <a name="cmfckeymapdialogformatitem"></a><a name="formatitem"></a> CMFCKeyMapDialog:: FormatItem

Chiamata eseguita dal Framework per compilare una stringa che descrive un mapping di chiavi. Per impostazione predefinita, la stringa contiene il nome del comando, i tasti di scelta rapida usati e la descrizione del tasto di scelta rapida.

```
virtual CString FormatItem(int nItem) const;
```

### <a name="parameters"></a>Parametri

*nIten*<br/>
in Indice in base zero di un elemento nell'elenco interno di mapping delle chiavi.

### <a name="return-value"></a>Valore restituito

`CString`Oggetto che contiene il testo dell'elemento formattato.

### <a name="remarks"></a>Commenti

## <a name="cmfckeymapdialoggetcommandkeys"></a><a name="getcommandkeys"></a> CMFCKeyMapDialog:: GetCommandKeys

Recupera un valore stringa. La stringa contiene un elenco di tasti di scelta rapida associati a un comando specificato.

```
virtual CString GetCommandKeys(UINT uiCmdID) const;
```

### <a name="parameters"></a>Parametri

*uiCmdID*<br/>
in ID di comando.

### <a name="return-value"></a>Valore restituito

Elenco di tasti di scelta rapida (';') delimitati da punti e virgola associato al comando specificato.

### <a name="remarks"></a>Commenti

## <a name="cmfckeymapdialogoninsertitem"></a><a name="oninsertitem"></a> CMFCKeyMapDialog:: OnInsertItem

Chiamata eseguita dal Framework prima dell'inserimento di un nuovo elemento in un controllo elenco interno che supporta il controllo mappatura della tastiera.

```
virtual void OnInsertItem(
    CMFCToolBarButton* pButton,
    int nItem);
```

### <a name="parameters"></a>Parametri

*p*<br/>
in Puntatore a un pulsante della barra degli strumenti utilizzato per eseguire il mapping di una combinazione di tasti di scelta rapida a un nome di comando e a una descrizione. L'elemento della mappa delle chiavi è archiviato in un controllo elenco interno.

*nIten*<br/>
in Indice in base zero che specifica la posizione in cui inserire il nuovo elemento della mappa principale nel controllo elenco interno.

### <a name="remarks"></a>Commenti

## <a name="cmfckeymapdialogonprintheader"></a><a name="onprintheader"></a> CMFCKeyMapDialog:: ontester

Chiamato dal Framework per stampare l'intestazione per la mappa della tastiera in una nuova pagina.

```
virtual int OnPrintHeader(
    CDC& dc,
    int nPage,
    int cx) const;
```

### <a name="parameters"></a>Parametri

*DC*<br/>
in Contesto di dispositivo per la stampante.

*nPage*<br/>
in Numero di pagina da stampare.

*CX*<br/>
in Offset orizzontale dell'intestazione, espresso in pixel.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, l'altezza del testo stampato. Per ulteriori informazioni, vedere la sezione valore restituito di [CDC::D rawtext](../../mfc/reference/cdc-class.md#drawtext).

### <a name="remarks"></a>Commenti

Il Framework utilizza questo metodo per stampare la mappa della tastiera. Per impostazione predefinita, questo metodo stampa il numero di pagina, il nome dell'applicazione e il titolo della finestra di dialogo.

## <a name="cmfckeymapdialogonprintitem"></a><a name="onprintitem"></a> CMFCKeyMapDialog:: OnPrintItem

Chiamata eseguita dal Framework per stampare un elemento di mappatura della tastiera.

```
virtual int OnPrintItem(
    CDC& dc,
    int nItem,
    int y,
    int cx,
    BOOL bCalcHeight) const;
```

### <a name="parameters"></a>Parametri

*DC*<br/>
in Contesto del dispositivo della stampante.

*nIten*<br/>
in Indice in base zero dell'elemento da stampare.

*y*<br/>
in Offset verticale tra la parte superiore della pagina e la posizione dell'elemento.

*CX*<br/>
in Offset orizzontale tra la parte sinistra della pagina e la posizione dell'elemento.

*bCalcHeight*<br/>
in TRUE per calcolare l'altezza migliore per l'elemento di stampa. FALSE per troncare l'elemento di stampa in modo che corrisponda allo spazio predefinito.

### <a name="return-value"></a>Valore restituito

Altezza dell'elemento stampato.

### <a name="remarks"></a>Commenti

Il Framework chiama questo metodo per stampare un elemento della finestra di dialogo della mappa delle chiavi. Per impostazione predefinita, questo metodo stampa il nome del comando dell'elemento, i tasti di scelta rapida e la descrizione del comando.

## <a name="cmfckeymapdialogonsetcolumns"></a><a name="onsetcolumns"></a> CMFCKeyMapDialog:: OnSetColumns

Chiamata eseguita dal Framework per impostare le didascalie per le colonne nel controllo elenco interno che supporta il controllo mappatura della tastiera.

```
virtual void OnSetColumns();
```

### <a name="remarks"></a>Commenti

Per impostazione predefinita, questo metodo ottiene le didascalie per le colonne da tre risorse. La didascalia della colonna di comando è da IDS_AFXBARRES_COMMAND, la didascalia della colonna chiave è da IDS_AFXBARRES_KEYS e la didascalia della colonna Descrizione è da IDS_AFXBARRES_DESCRIPTION.

## <a name="cmfckeymapdialogprintkeymap"></a><a name="printkeymap"></a> CMFCKeyMapDialog::P rintKeyMap

Chiamata eseguita dal framework quando un utente fa clic sul pulsante **stampa** .

```
virtual void PrintKeyMap();
```

### <a name="remarks"></a>Commenti

Il `PrintKeyMap` metodo stampa la mappa delle chiavi. Avvia un nuovo processo di stampa e quindi chiama ripetutamente i metodi [CMFCKeyMapDialog:: Ontester](#onprintheader) e [CMFCKeyMapDialog:: OnPrintItem](#onprintitem) fino a quando non vengono stampati tutti i mapping delle chiavi.

## <a name="cmfckeymapdialogsetcolumnswidth"></a><a name="setcolumnswidth"></a> CMFCKeyMapDialog:: SetColumnsWidth

Chiamata eseguita dal Framework per impostare la larghezza delle colonne nel controllo elenco interno che supporta il controllo mappatura della tastiera.

```
virtual void SetColumnsWidth();
```

### <a name="remarks"></a>Commenti

Questo metodo imposta le colonne del controllo elenco interno sulle larghezze predefinite. Viene innanzitutto calcolato lo spessore della colonna tasti di scelta rapida. Quindi, un terzo della larghezza rimanente viene allocato alla colonna Command e i due terzi rimanenti vengono allocati alla colonna Description.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md)
