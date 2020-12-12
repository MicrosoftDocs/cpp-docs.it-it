---
description: 'Altre informazioni su: classe CMFCEditBrowseCtrl'
title: Classe CMFCEditBrowseCtrl
ms.date: 11/04/2016
f1_keywords:
- CMFCEditBrowseCtrl
- AFXEDITBROWSECTRL/CMFCEditBrowseCtrl
- AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::EnableBrowseButton
- AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::EnableFileBrowseButton
- AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::EnableFolderBrowseButton
- AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::GetMode
- AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::OnAfterUpdate
- AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::OnBrowse
- AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::OnChangeLayout
- AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::OnDrawBrowseButton
- AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::OnIllegalFileName
- AFXEDITBROWSECTRL/CMFCEditBrowseCtrl::SetBrowseButtonImage
helpviewer_keywords:
- CMFCEditBrowseCtrl [MFC], EnableBrowseButton
- CMFCEditBrowseCtrl [MFC], EnableFileBrowseButton
- CMFCEditBrowseCtrl [MFC], EnableFolderBrowseButton
- CMFCEditBrowseCtrl [MFC], GetMode
- CMFCEditBrowseCtrl [MFC], OnAfterUpdate
- CMFCEditBrowseCtrl [MFC], OnBrowse
- CMFCEditBrowseCtrl [MFC], OnChangeLayout
- CMFCEditBrowseCtrl [MFC], OnDrawBrowseButton
- CMFCEditBrowseCtrl [MFC], OnIllegalFileName
- CMFCEditBrowseCtrl [MFC], SetBrowseButtonImage
ms.assetid: 69cfd886-3d35-4bee-8901-7c88fcf9520f
ms.openlocfilehash: f63ab87207678cca87db84b73e49fba571634f3b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97293891"
---
# <a name="cmfceditbrowsectrl-class"></a>Classe CMFCEditBrowseCtrl

La `CMFCEditBrowseCtrl` classe supporta il controllo Edit browse, ovvero una casella di testo modificabile che contiene facoltativamente un pulsante Sfoglia. Quando l'utente fa clic sul pulsante Sfoglia, il controllo esegue un'azione personalizzata o visualizza una finestra di dialogo standard che contiene un visualizzatore file o un visualizzatore cartelle.

## <a name="syntax"></a>Sintassi

```
class CMFCEditBrowseCtrl : public CEdit
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|`CMFCEditBrowseCtrl::CMFCEditBrowseCtrl`|Costruttore predefinito.|
|`CMFCEditBrowseCtrl::~CMFCEditBrowseCtrl`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMFCEditBrowseCtrl:: EnableBrowseButton](#enablebrowsebutton)|Abilita o Disabilita (nasconde) il pulsante Sfoglia.|
|[CMFCEditBrowseCtrl:: EnableFileBrowseButton](#enablefilebrowsebutton)|Abilita il pulsante Sfoglia e inserisce il controllo modifica visualizzazione in modalità di *visualizzazione file* .|
|[CMFCEditBrowseCtrl:: EnableFolderBrowseButton](#enablefolderbrowsebutton)|Abilita il pulsante Sfoglia e inserisce il controllo Edit Browse in modalità *Browse Folder* .|
|[CMFCEditBrowseCtrl:: GetMode](#getmode)|Restituisce la modalità di esplorazione corrente.|
|[CMFCEditBrowseCtrl:: OnAfterUpdate](#onafterupdate)|Chiamata eseguita dal Framework dopo che il controllo Edit Browse viene aggiornato con il risultato di un'azione browse.|
|[CMFCEditBrowseCtrl:: OnBrowse](#onbrowse)|Chiamata eseguita dal Framework dopo che l'utente fa clic sul pulsante Sfoglia.|
|[CMFCEditBrowseCtrl:: OnChangeLayout](#onchangelayout)|Riestrae il controllo di modifica Sfoglia corrente.|
|[CMFCEditBrowseCtrl:: OnDrawBrowseButton](#ondrawbrowsebutton)|Chiamato dal Framework per creare il pulsante Sfoglia.|
|[CMFCEditBrowseCtrl:: OnIllegalFileName](#onillegalfilename)|Chiamata eseguita dal framework quando un nome di file non valido è stato immesso nel controllo di modifica.|
|`CMFCEditBrowseCtrl::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) . Per la sintassi e altre informazioni, vedere [CWnd::P retranslatemessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|
|[CMFCEditBrowseCtrl:: SetBrowseButtonImage](#setbrowsebuttonimage)|Imposta un'immagine personalizzata per il pulsante Sfoglia.|

## <a name="remarks"></a>Commenti

Utilizzare un controllo modifica Sfoglia per selezionare un nome di file o cartella. Facoltativamente, utilizzare il controllo per eseguire un'azione personalizzata, ad esempio per visualizzare una finestra di dialogo. È possibile visualizzare o non visualizzare il pulsante Sfoglia ed è possibile applicare un'etichetta o un'immagine personalizzata sul pulsante.

La *modalità browse* del controllo Edit browse determina se viene visualizzato un pulsante Sfoglia e quale azione si verifica quando si fa clic sul pulsante. Per ulteriori informazioni, vedere il metodo [GetMode](#getmode) .

La `CMFCEditBrowseCtrl` classe supporta le modalità seguenti.

- **modalità personalizzata**

   Quando l'utente fa clic sul pulsante Sfoglia, viene eseguita un'azione personalizzata. Ad esempio, è possibile visualizzare una finestra di dialogo specifica dell'applicazione.

- **modalità file**

   Quando l'utente fa clic sul pulsante Sfoglia, viene visualizzata una finestra di dialogo di selezione file standard.

- **modalità cartella**

   Quando l'utente fa clic sul pulsante Sfoglia, viene visualizzata una finestra di dialogo di selezione di cartelle standard.

## <a name="how-to-specify-an-edit-browse-control"></a>Procedura: specificare un controllo Edit browse

Per incorporare un controllo Edit Browse nell'applicazione, seguire questa procedura:

1. Se si desidera implementare una modalità browse personalizzata, derivare la propria classe dalla `CMFCEditBrowseCtrl` classe e quindi eseguire l'override del metodo [CMFCEditBrowseCtrl:: OnBrowse](#onbrowse) . Nel metodo sottoposto a override eseguire un'azione browse personalizzata e aggiornare il controllo Edit Browse con il risultato.

1. Incorporare l'oggetto `CMFCEditBrowseCtrl` o l'oggetto controllo Sfoglia di modifica derivato nell'oggetto finestra padre.

1. Se si utilizza la **creazione guidata classe** per creare una finestra di dialogo, aggiungere un controllo `CEdit` di modifica () al form della finestra di dialogo. Aggiungere inoltre una variabile per accedere al controllo nel file di intestazione. Nel file di intestazione modificare il tipo della variabile da `CEdit` a `CMFCEditBrowseCtrl` . Il controllo Edit browse verrà creato automaticamente. Se non si utilizza la **creazione guidata classe**, aggiungere una `CMFCEditBrowseCtrl` variabile al file di intestazione e quindi chiamare il relativo `Create` metodo.

1. Se si aggiunge un controllo modifica visualizzazione a una finestra di dialogo, usare lo strumento **ClassWizard** per configurare lo scambio di dati.

1. Chiamare il metodo [EnableFolderBrowseButton](#enablefolderbrowsebutton), [EnableFileBrowseButton](#enablefilebrowsebutton)o [EnableBrowseButton](#enablebrowsebutton) per impostare la modalità browse e visualizzare il pulsante Sfoglia. Chiamare il metodo [GetMode](#getmode) per ottenere la modalità di visualizzazione corrente.

1. Per fornire un'immagine personalizzata per il pulsante Sfoglia, chiamare il metodo [SetBrowseButtonImage](#setbrowsebuttonimage) o eseguire l'override del metodo [OnDrawBrowseButton](#ondrawbrowsebutton) .

1. Per rimuovere il pulsante Sfoglia dal controllo Edit browse, chiamare il metodo [EnableBrowseButton](#enablebrowsebutton) con il parametro *BENABLE* impostato su false.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CEdit](../../mfc/reference/cedit-class.md)

[CMFCEditBrowseCtrl](../../mfc/reference/cmfceditbrowsectrl-class.md)

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare due metodi nella `CMFCEditBrowseCtrl` classe: `EnableFolderBrowseButton` e `EnableFileBrowseButton` . Questo esempio fa parte dell'esempio relativo ai [nuovi controlli](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#6](../../mfc/reference/codesnippet/cpp/cmfceditbrowsectrl-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#7](../../mfc/reference/codesnippet/cpp/cmfceditbrowsectrl-class_2.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxeditbrowsectrl. h

## <a name="cmfceditbrowsectrlenablebrowsebutton"></a><a name="enablebrowsebutton"></a> CMFCEditBrowseCtrl:: EnableBrowseButton

Visualizza o non Visualizza il pulsante Sfoglia nel controllo di modifica Sfoglia corrente.

```cpp
void EnableBrowseButton(
    BOOL bEnable=TRUE,
    LPCTSTR szLabel=_T("..."));
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
TRUE per visualizzare il pulsante Sfoglia; FALSE per non visualizzare il pulsante Sfoglia. Il valore predefinito è TRUE.

*szLabel*<br/>
Etichetta visualizzata sul pulsante Sfoglia. Il valore predefinito è " **...**".

### <a name="remarks"></a>Commenti

Se il parametro *bEnable* è true, implementare un'azione personalizzata da eseguire quando si fa clic sul pulsante Sfoglia. Per implementare un'azione personalizzata, derivare una classe dalla `CMFCEditBrowseCtrl` classe e quindi eseguire l'override del relativo metodo [OnBrowse](#onbrowse) .

Se il parametro *bEnable* è true, la modalità browse del controllo è `BrowseMode_Default` ; in caso contrario, la modalità Browse è `BrowseMode_None` . Per ulteriori informazioni sulle modalità di esplorazione, vedere il metodo [GetMode](#getmode) .

## <a name="cmfceditbrowsectrlenablefilebrowsebutton"></a><a name="enablefilebrowsebutton"></a> CMFCEditBrowseCtrl:: EnableFileBrowseButton

Consente di visualizzare il pulsante Sfoglia nel controllo modifica visualizzazione corrente e di inserire il controllo in modalità di *visualizzazione file* .

```cpp
void EnableFileBrowseButton(
    LPCTSTR lpszDefExt=NULL,
    LPCTSTR lpszFilter=NULL,
    DWORD dwFlags = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT);
```

### <a name="parameters"></a>Parametri

*lpszDefExt*<br/>
Specifica l'estensione di file predefinita usata nella finestra di dialogo di selezione file. Il valore predefinito è NULL.

*lpszFilter*<br/>
Specifica la stringa di filtro predefinita usata nella finestra di dialogo di selezione file. Il valore predefinito è NULL.

*dwFlags*<br/>
Flag di finestra di dialogo. Il valore predefinito è una combinazione bit per bit (OR) di OFN_HIDEREADONLY e OFN_OVERWRITEPROMPT.

### <a name="remarks"></a>Commenti

Quando il controllo di modifica con pulsante sfoglia è in modalità di visualizzazione di file e l'utente fa clic sul pulsante Sfoglia, il controllo visualizza la finestra di dialogo di selezione file standard.

Per un elenco completo dei flag disponibili, vedere [struttura OPENFILENAME](/windows/win32/api/commdlg/ns-commdlg-openfilenamew).

## <a name="cmfceditbrowsectrlenablefolderbrowsebutton"></a><a name="enablefolderbrowsebutton"></a> CMFCEditBrowseCtrl:: EnableFolderBrowseButton

Consente di visualizzare il pulsante Sfoglia nel controllo modifica visualizzazione corrente e di inserire il controllo nella modalità *Browse Folder* .

```cpp
void EnableFolderBrowseButton();
```

### <a name="remarks"></a>Commenti

Quando il controllo Edit Browse è in modalità Browse Folder e l'utente fa clic sul pulsante Browse, il controllo Visualizza la finestra di dialogo standard Folder Selection.

## <a name="cmfceditbrowsectrlgetmode"></a><a name="getmode"></a> CMFCEditBrowseCtrl:: GetMode

Recupera la modalità browse del controllo di modifica Sfoglia corrente.

```
CMFCEditBrowseCtrl::BrowseMode GetMode() const;
```

### <a name="return-value"></a>Valore restituito

Uno dei valori di enumerazione che specifica la modalità corrente del controllo modifica visualizzazione. La modalità browse determina se il Framework Visualizza il pulsante Sfoglia e quale azione si verifica quando un utente fa clic su tale pulsante.

Nella tabella seguente sono elencati i valori restituiti possibili.

|Valore|Description|
|-----------|-----------------|
|`BrowseMode_Default`|**modalità personalizzata**. Viene eseguita un'azione definita dal programmatore.|
|`BrowseMode_File`|**modalità file**. Verrà visualizzata la finestra di dialogo Visualizzatore file standard.|
|`BrowseMode_Folder`|**modalità cartella**. Verrà visualizzata la finestra di dialogo visualizzatore cartelle standard.|
|`BrowseMode_None`|Il pulsante Sfoglia non viene visualizzato.|

### <a name="remarks"></a>Commenti

Per impostazione predefinita, un `CMFCEditBrowseCtrl` oggetto viene inizializzato in `BrowseMode_None` modalità. Modificare la modalità browse con i metodi [CMFCEditBrowseCtrl:: EnableBrowseButton](#enablebrowsebutton), [CMFCEditBrowseCtrl:: EnableFileBrowseButton](#enablefilebrowsebutton)e [CMFCEditBrowseCtrl:: EnableFolderBrowseButton](#enablefolderbrowsebutton) .

## <a name="cmfceditbrowsectrlonafterupdate"></a><a name="onafterupdate"></a> CMFCEditBrowseCtrl:: OnAfterUpdate

Chiamata eseguita dal Framework dopo che il controllo Edit Browse viene aggiornato con il risultato di un'azione browse.

```
virtual void OnAfterUpdate();
```

### <a name="remarks"></a>Commenti

Eseguire l'override di questo metodo in una classe derivata per implementare un'azione personalizzata.

## <a name="cmfceditbrowsectrlonbrowse"></a><a name="onbrowse"></a> CMFCEditBrowseCtrl:: OnBrowse

Chiamata eseguita dal Framework dopo che l'utente fa clic sul pulsante Sfoglia del controllo Edit browse.

```
virtual void OnBrowse();
```

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per eseguire codice personalizzato quando l'utente fa clic sul pulsante Sfoglia del controllo modifica visualizzazione. Derivare la propria classe dalla `CMFCEditBrowseCtrl` classe ed eseguire l'override del relativo `OnBrowse` metodo. In questo metodo implementare un'azione browse personalizzata ed eventualmente aggiornare la casella di testo del controllo Edit browse. Nell'applicazione usare il metodo [EnableBrowseButton](#enablebrowsebutton) per inserire il controllo Edit Browse in modalità *Browse personalizzata* .

## <a name="cmfceditbrowsectrlonchangelayout"></a><a name="onchangelayout"></a> CMFCEditBrowseCtrl:: OnChangeLayout

Riestrae il controllo di modifica Sfoglia corrente.

```
virtual void OnChangeLayout();
```

### <a name="remarks"></a>Commenti

Questo metodo viene chiamato dal framework quando viene modificata la modalità browse del controllo Edit browse. Per altre informazioni, vedere [CMFCEditBrowseCtrl:: GetMode](#getmode).

## <a name="cmfceditbrowsectrlondrawbrowsebutton"></a><a name="ondrawbrowsebutton"></a> CMFCEditBrowseCtrl:: OnDrawBrowseButton

Chiamato dal Framework per creare il pulsante Sfoglia nel controllo Edit browse.

```
virtual void OnDrawBrowseButton(
    CDC* pDC,
    CRect rect,
    BOOL bIsButtonPressed,
    BOOL bIsButtonHot);
```

### <a name="parameters"></a>Parametri

*pDC*<br/>
Puntatore a un contesto di dispositivo.

*Rect*<br/>
Rettangolo di delimitazione del pulsante Sfoglia.

*bIsButtonPressed*<br/>
TRUE se il pulsante è premuto; in caso contrario, FALSE.

*bIsButtonHot*<br/>
TRUE se il pulsante è evidenziato; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Eseguire l'override di questa funzione in una classe derivata per personalizzare l'aspetto del pulsante Sfoglia.

## <a name="cmfceditbrowsectrlsetbrowsebuttonimage"></a><a name="setbrowsebuttonimage"></a> CMFCEditBrowseCtrl:: SetBrowseButtonImage

Imposta un'immagine personalizzata nel pulsante Sfoglia del controllo modifica visualizzazione.

```cpp
void SetBrowseButtonImage(
    HICON hIcon,
    BOOL bAutoDestroy= TRUE);

void SetBrowseButtonImage(
    HBITMAP hBitmap,
    BOOL bAutoDestroy= TRUE);

void SetBrowseButtonImage(UINT uiBmpResId);
```

### <a name="parameters"></a>Parametri

*hIcon*<br/>
Handle di un'icona.

*hBitmap*<br/>
Handle di una bitmap.

*uiBmpResId*<br/>
ID risorsa di una bitmap.

*bAutoDestroy*<br/>
TRUE per eliminare l'icona o la bitmap specificata quando il metodo viene chiuso; in caso contrario, FALSE. Il valore predefinito è TRUE.

### <a name="remarks"></a>Commenti

Utilizzare questo metodo per applicare un'immagine personalizzata al pulsante Sfoglia. Per impostazione predefinita, il Framework ottiene un'immagine standard quando il controllo modifica visualizzazione si trova nella modalità *Sfoglia file* o *Sfoglia cartella* .

## <a name="cmfceditbrowsectrlonillegalfilename"></a><a name="onillegalfilename"></a> CMFCEditBrowseCtrl:: OnIllegalFileName

Chiamata eseguita dal framework quando un nome di file non valido è stato immesso nel controllo di modifica.

```
virtual BOOL OnIllegalFileName(CString& strFileName);
```

### <a name="parameters"></a>Parametri

*strFileName*<br/>
Specifica il nome file non valido.

### <a name="return-value"></a>Valore restituito

Deve restituire FALSE se il nome file non può essere passato ulteriormente alla finestra di dialogo file. In questo caso, lo stato attivo viene impostato di nuovo sul controllo di modifica e l'utente deve continuare la modifica. L'implementazione predefinita Visualizza una finestra di messaggio che informa l'utente del nome file non valido e restituisce FALSE. È possibile eseguire l'override di questo metodo, correggere il nome del file e restituire TRUE per un'ulteriore elaborazione.

### <a name="remarks"></a>Commenti

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
