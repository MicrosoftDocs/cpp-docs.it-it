---
title: Classe CFontDialog
ms.date: 11/04/2016
f1_keywords:
- CFontDialog
- AFXDLGS/CFontDialog
- AFXDLGS/CFontDialog::CFontDialog
- AFXDLGS/CFontDialog::DoModal
- AFXDLGS/CFontDialog::GetCharFormat
- AFXDLGS/CFontDialog::GetColor
- AFXDLGS/CFontDialog::GetCurrentFont
- AFXDLGS/CFontDialog::GetFaceName
- AFXDLGS/CFontDialog::GetSize
- AFXDLGS/CFontDialog::GetStyleName
- AFXDLGS/CFontDialog::GetWeight
- AFXDLGS/CFontDialog::IsBold
- AFXDLGS/CFontDialog::IsItalic
- AFXDLGS/CFontDialog::IsStrikeOut
- AFXDLGS/CFontDialog::IsUnderline
- AFXDLGS/CFontDialog::m_cf
helpviewer_keywords:
- CFontDialog [MFC], CFontDialog
- CFontDialog [MFC], DoModal
- CFontDialog [MFC], GetCharFormat
- CFontDialog [MFC], GetColor
- CFontDialog [MFC], GetCurrentFont
- CFontDialog [MFC], GetFaceName
- CFontDialog [MFC], GetSize
- CFontDialog [MFC], GetStyleName
- CFontDialog [MFC], GetWeight
- CFontDialog [MFC], IsBold
- CFontDialog [MFC], IsItalic
- CFontDialog [MFC], IsStrikeOut
- CFontDialog [MFC], IsUnderline
- CFontDialog [MFC], m_cf
ms.assetid: 6228d500-ed0f-4156-81e5-ab0d57d1dcf4
ms.openlocfilehash: 3dea0f2ba358582b49de107c234a66a751e8f0b0
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57267186"
---
# <a name="cfontdialog-class"></a>Classe CFontDialog

Consente di incorporare una finestra di dialogo di selezione del carattere nell'applicazione.

## <a name="syntax"></a>Sintassi

```
class CFontDialog : public CCommonDialog
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFontDialog::CFontDialog](#cfontdialog)|Costruisce un oggetto `CFontDialog`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFontDialog::DoModal](#domodal)|Visualizza la finestra di dialogo e consente all'utente di effettuare una selezione.|
|[CFontDialog::GetCharFormat](#getcharformat)|Recupera la formattazione dei caratteri del tipo di carattere selezionato.|
|[CFontDialog::GetColor](#getcolor)|Restituisce il colore del tipo di carattere selezionato.|
|[CFontDialog::GetCurrentFont](#getcurrentfont)|Assegna le caratteristiche del tipo di carattere correntemente selezionato a un `LOGFONT` struttura.|
|[CFontDialog::GetFaceName](#getfacename)|Restituisce il nome del tipo di carattere selezionato.|
|[CFontDialog::GetSize](#getsize)|Restituisce la dimensione del tipo di carattere selezionato.|
|[CFontDialog::GetStyleName](#getstylename)|Restituisce il nome dello stile di carattere selezionato.|
|[CFontDialog::GetWeight](#getweight)|Restituisce lo spessore del tipo di carattere selezionato.|
|[CFontDialog::IsBold](#isbold)|Determina se il tipo di carattere è in grassetto.|
|[CFontDialog::IsItalic](#isitalic)|Determina se il tipo di carattere è in corsivo.|
|[CFontDialog::IsStrikeOut](#isstrikeout)|Determina se il tipo di carattere viene visualizzato con barrato.|
|[CFontDialog::IsUnderline](#isunderline)|Determina se il tipo di carattere è sottolineato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFontDialog::m_cf](#m_cf)|Una struttura utilizzata per personalizzare un `CFontDialog` oggetto.|

## <a name="remarks"></a>Note

Oggetto `CFontDialog` oggetto è una finestra di dialogo con un elenco di tipi di carattere attualmente installati nel sistema. L'utente può selezionare un particolare tipo di carattere dall'elenco e questa selezione viene quindi segnalata nuovamente all'applicazione.

Per costruire un `CFontDialog` dell'oggetto, usare il costruttore fornito o derivare una nuova sottoclasse e usare il proprio costruttore personalizzato.

Una volta una `CFontDialog` oggetto è stato costruito, è possibile usare il `m_cf` struttura per inizializzare i valori o degli stati dei controlli nella finestra di dialogo. Il [m_cf](#m_cf) struttura è di tipo [CHOOSEFONT](/windows/desktop/api/commdlg/ns-commdlg-tagchoosefonta). Per altre informazioni su questa struttura, vedere il SDK di Windows.

Dopo l'inizializzazione i controlli dell'oggetto finestra di dialogo, chiamare il `DoModal` funzione membro per visualizzare la finestra di dialogo e consentire all'utente di selezionare un tipo di carattere. `DoModal` Restituisce se l'utente ha selezionato il pulsante OK (IDOK) o annullare (IDCANCEL).

Se `DoModal` restituisce IDOK, è possibile usare uno dei `CFontDialog`di funzioni membro per recuperare le informazioni di input dall'utente.

È possibile utilizzare il Windows [CommDlgExtendedError](/windows/desktop/api/commdlg/nf-commdlg-commdlgextendederror) funzione per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per altre informazioni sull'errore. Per altre informazioni su questa funzione, vedere il SDK di Windows.

`CFontDialog` si basa sul COMMDLG. File DLL che viene fornito con Windows 3.1 e versioni successive.

Per personalizzare la finestra di dialogo, derivare una classe da `CFontDialog`, offrono un modello di finestra di dialogo personalizzata e aggiungere una mappa messaggi per elaborare i messaggi di notifica da controlli estesi. Eventuali messaggi non elaborati devono essere passati alla classe di base.

La funzione hook di personalizzazione non è obbligatorio.

Per altre informazioni sull'uso `CFontDialog`, vedere [classi di finestra di dialogo comuni](../../mfc/common-dialog-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CDialog](../../mfc/reference/cdialog-class.md)

[CCommonDialog](../../mfc/reference/ccommondialog-class.md)

`CFontDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdlgs. h

##  <a name="cfontdialog"></a>  CFontDialog::CFontDialog

Costruisce un oggetto `CFontDialog`.

```
CFontDialog(
    LPLOGFONT lplfInitial = NULL,
    DWORD dwFlags = CF_EFFECTS | CF_SCREENFONTS,
    CDC* pdcPrinter = NULL,
    CWnd* pParentWnd = NULL);

CFontDialog(
    const CHARFORMAT& charformat,
    DWORD dwFlags = CF_SCREENFONTS,
    CDC* pdcPrinter = NULL,
    CWnd* pParentWnd = NULL);
```

### <a name="parameters"></a>Parametri

*plfInitial*<br/>
Un puntatore a un [LOGFONT](/windows/desktop/api/wingdi/ns-wingdi-taglogfonta) struttura dei dati che consente di impostare alcune delle caratteristiche del tipo di carattere.

*charFormat*<br/>
Un puntatore a un [CHARFORMAT](/windows/desktop/api/richedit/ns-richedit-_charformat) controllo di modifica con struttura di dati che consente di impostare alcune delle caratteristiche del tipo di carattere in un formato RTF.

*dwFlags*<br/>
Specifica uno o più flag di scelta del tipo di carattere. È possibile combinare valori preimpostati usando l'operatore OR bit per bit. Se si modifica il membro della struttura `m_cf.Flag`s, verificare di usare un operatore OR bit per bit nelle modifiche per mantenere l'integrità del comportamento predefinito. Per informazioni dettagliate su ciascuno di questi flag, vedere la descrizione del [CHOOSEFONT](/windows/desktop/api/commdlg/ns-commdlg-tagchoosefonta) struttura nel SDK di Windows.

*pdcPrinter*<br/>
Un puntatore a un contesto di dispositivo stampante. Se fornito, questo parametro punta a un contesto di dispositivo stampante per la stampante in cui devono essere selezionati i tipi di carattere.

*pParentWnd*<br/>
Un puntatore alla finestra padre o proprietaria della finestra di dialogo del tipo di carattere.

### <a name="remarks"></a>Note

Si noti che il costruttore riempie automaticamente i membri della struttura `CHOOSEFONT`, che devono essere modificati solo se la finestra di dialogo del tipo di carattere deve essere diversa da quella predefinita.

> [!NOTE]
>  La prima versione di questa funzione esiste solo quando non è presente alcun supporto del controllo Rich Edit.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#78](../../mfc/codesnippet/cpp/cfontdialog-class_1.cpp)]

##  <a name="domodal"></a>  CFontDialog::DoModal

Chiamare questa funzione per visualizzare la finestra di dialogo Windows comune del tipo di carattere e consentire all'utente di scegliere un tipo di carattere.

```
virtual INT_PTR DoModal();
```

### <a name="return-value"></a>Valore restituito

IDOK o IDCANCEL. Se viene restituito IDCANCEL, chiamare il Windows [CommDlgExtendedError](/windows/desktop/api/commdlg/nf-commdlg-commdlgextendederror) funzione per determinare se si è verificato un errore.

IDOK e IDCANCEL sono le costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.

### <a name="remarks"></a>Note

Se si desidera inizializzare i vari controlli di finestra di dialogo tipo di carattere impostando i membri del [m_cf](#m_cf) struttura, è necessario eseguire questa operazione prima di chiamare `DoModal`, ma dopo che viene costruito l'oggetto finestra di dialogo.

Se `DoModal` restituisce IDOK, è possibile chiamare altri membri funzioni per recuperare le impostazioni o input di informazioni dall'utente nella finestra di dialogo.

### <a name="example"></a>Esempio

  Per vedere gli esempi [CFontDialog::CFontDialog](#cfontdialog) e [CFontDialog::GetColor](#getcolor).

##  <a name="getcharformat"></a>  CFontDialog::GetCharFormat

Recupera la formattazione dei caratteri del tipo di carattere selezionato.

```
void GetCharFormat(CHARFORMAT& cf) const;
```

### <a name="parameters"></a>Parametri

*cf*<br/>
Oggetto [CHARFORMAT](/windows/desktop/api/richedit/ns-richedit-_charformat) struttura che contiene informazioni sulla formattazione carattere di tipo di carattere selezionato.

##  <a name="getcolor"></a>  CFontDialog::GetColor

Chiamare questa funzione per recuperare il colore del tipo di carattere selezionato.

```
COLORREF GetColor() const;
```

### <a name="return-value"></a>Valore restituito

Colore del tipo di carattere selezionato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#79](../../mfc/codesnippet/cpp/cfontdialog-class_2.cpp)]

##  <a name="getcurrentfont"></a>  CFontDialog::GetCurrentFont

Chiamare questa funzione per assegnare le caratteristiche del tipo di carattere attualmente selezionato ai membri di un [LOGFONT](/windows/desktop/api/wingdi/ns-wingdi-taglogfonta) struttura.

```
void GetCurrentFont(LPLOGFONT lplf);
```

### <a name="parameters"></a>Parametri

*lplf*<br/>
Un puntatore a un `LOGFONT` struttura.

### <a name="remarks"></a>Note

Altri `CFontDialog` per accedere ai singoli caratteristiche del tipo di carattere corrente sono disponibili funzioni di membro.

Se questa funzione viene chiamata durante una chiamata a [DoModal](#domodal), restituisce la selezione corrente al momento (quali l'utente vede o è stato modificato nella finestra di dialogo). Se questa funzione viene chiamata dopo una chiamata a `DoModal` (solo se `DoModal` restituisce IDOK), viene restituito quello che l'utente effettivamente selezionato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#80](../../mfc/codesnippet/cpp/cfontdialog-class_3.cpp)]

##  <a name="getfacename"></a>  CFontDialog::GetFaceName

Chiamare questa funzione per recuperare il nome del tipo di carattere selezionato.

```
CString GetFaceName() const;
```

### <a name="return-value"></a>Valore restituito

Il nome del tipo di carattere selezionato nel `CFontDialog` nella finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#81](../../mfc/codesnippet/cpp/cfontdialog-class_4.cpp)]

##  <a name="getsize"></a>  CFontDialog::GetSize

Chiamare questa funzione per recuperare la dimensione del tipo di carattere selezionato.

```
int GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Le dimensioni del carattere, in decimi di un punto.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#82](../../mfc/codesnippet/cpp/cfontdialog-class_5.cpp)]

##  <a name="getstylename"></a>  CFontDialog::GetStyleName

Chiamare questa funzione per recuperare il nome dello stile di carattere selezionato.

```
CString GetStyleName() const;
```

### <a name="return-value"></a>Valore restituito

Il nome di stile del tipo di carattere.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#83](../../mfc/codesnippet/cpp/cfontdialog-class_6.cpp)]

##  <a name="getweight"></a>  CFontDialog::GetWeight

Chiamare questa funzione per recuperare lo spessore del tipo di carattere selezionato.

```
int GetWeight() const;
```

### <a name="return-value"></a>Valore restituito

Lo spessore del tipo di carattere selezionato.

### <a name="remarks"></a>Note

Per altre informazioni sul peso di un tipo di carattere, vedere [CFont::](../../mfc/reference/cfont-class.md#createfont).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#84](../../mfc/codesnippet/cpp/cfontdialog-class_7.cpp)]

##  <a name="isbold"></a>  CFontDialog::IsBold

Chiamare questa funzione per determinare se il tipo di carattere selezionato è in grassetto.

```
BOOL IsBold() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il tipo di carattere selezionato presenta la caratteristica grassetto abilitata. in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#85](../../mfc/codesnippet/cpp/cfontdialog-class_8.cpp)]

##  <a name="isitalic"></a>  CFontDialog::IsItalic

Chiamare questa funzione per determinare se il tipo di carattere selezionato è in corsivo.

```
BOOL IsItalic() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il tipo di carattere selezionato presenta la caratteristica corsivo abilitata. in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#86](../../mfc/codesnippet/cpp/cfontdialog-class_9.cpp)]

##  <a name="isstrikeout"></a>  CFontDialog::IsStrikeOut

Chiamare questa funzione per determinare se il tipo di carattere selezionato viene visualizzato con barrato.

```
BOOL IsStrikeOut() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il tipo di carattere selezionato è la caratteristica di barrato abilitata. in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#87](../../mfc/codesnippet/cpp/cfontdialog-class_10.cpp)]

##  <a name="isunderline"></a>  CFontDialog::IsUnderline

Chiamare questa funzione per determinare se il tipo di carattere selezionato è sottolineato.

```
BOOL IsUnderline() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il tipo di carattere selezionato è la caratteristica di sottolineatura abilitata. in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#88](../../mfc/codesnippet/cpp/cfontdialog-class_11.cpp)]

##  <a name="m_cf"></a>  CFontDialog::m_cf

Struttura i cui membri memorizzare le caratteristiche dell'oggetto finestra di dialogo.

```
CHOOSEFONT m_cf;
```

### <a name="remarks"></a>Note

Dopo la costruzione di un `CFontDialog` dell'oggetto, è possibile usare `m_cf` per modificare vari aspetti della finestra di dialogo prima di chiamare il `DoModal` funzione membro. Per altre informazioni su questa struttura, vedere [CHOOSEFONT](/windows/desktop/api/commdlg/ns-commdlg-tagchoosefonta) nel SDK di Windows.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#89](../../mfc/codesnippet/cpp/cfontdialog-class_12.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC HIERSVR](../../visual-cpp-samples.md)<br/>
[Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
