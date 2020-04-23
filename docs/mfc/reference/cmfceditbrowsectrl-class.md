---
title: CMFCEditBrowseCtrl (classe)
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
ms.openlocfilehash: d542af4a87b6f0a33c0344d1d3da76980f8c1a91
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752372"
---
# <a name="cmfceditbrowsectrl-class"></a>CMFCEditBrowseCtrl (classe)

La `CMFCEditBrowseCtrl` classe supporta il controllo di visualizzazione di modifica, ovvero una casella di testo modificabile che contiene facoltativamente un pulsante Sfoglia. Quando l'utente fa clic sul pulsante Sfoglia, il controllo esegue un'azione personalizzata o visualizza una finestra di dialogo standard che contiene un visualizzatore file o un visualizzatore cartelle.

## <a name="syntax"></a>Sintassi

```
class CMFCEditBrowseCtrl : public CEdit
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|`CMFCEditBrowseCtrl::CMFCEditBrowseCtrl`|Costruttore predefinito.|
|`CMFCEditBrowseCtrl::~CMFCEditBrowseCtrl`|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMFCEditBrowseCtrl::EnableBrowseButton](#enablebrowsebutton)|Attiva o disattiva (nasconde) il pulsante Sfoglia.|
|[CMFCEditBrowseCtrl::EnableFileBrowseButton](#enablefilebrowsebutton)|Abilita il pulsante Sfoglia e attiva la modalità *di esplorazione* dei file per la modifica.|
|[CMFCEditBrowseCtrl::EnableFolderBrowseButton](#enablefolderbrowsebutton)|Abilita il pulsante Sfoglia e attiva la modalità *di esplorazione* delle cartelle per il controllo di modifica.|
|[CMFCEditBrowseCtrl::GetMode](#getmode)|Restituisce la modalità di esplorazione corrente.|
|[CMFCEditBrowseCtrl::OnAfterUpdate](#onafterupdate)|Chiamato dal framework dopo l'aggiornamento del controllo di esplorazione di modifica con il risultato di un'azione di esplorazione.|
|[CMFCEditBrowseCtrl::OnBrowse](#onbrowse)|Chiamato dal framework dopo che l'utente fa clic sul pulsante Sfoglia.|
|[CMFCEditBrowseCtrl::OnChangeLayout](#onchangelayout)|Ridisegna il controllo di visualizzazione di modifica corrente.|
|[CMFCEditBrowseCtrl::OnDrawBrowseButton](#ondrawbrowsebutton)|Chiamato dal framework per disegnare il pulsante Sfoglia.|
|[CMFCEditBrowseCtrl::OnIllegalFileName](#onillegalfilename)|Chiamato dal framework quando è stato immesso un nome di file non valido nel controllo di modifica.|
|`CMFCEditBrowseCtrl::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage.](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Per ulteriori informazioni sulla sintassi e ulteriori informazioni, vedere [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|
|[CMFCEditBrowseCtrl::SetBrowseButtonImage](#setbrowsebuttonimage)|Imposta un'immagine personalizzata per il pulsante Sfoglia.|

## <a name="remarks"></a>Osservazioni

Utilizzare un controllo Sfoglia modifica per selezionare il nome di un file o di una cartella. Facoltativamente, utilizzare il controllo per eseguire un'azione personalizzata, ad esempio per visualizzare una finestra di dialogo. È possibile visualizzare o meno il pulsante Sfoglia e applicare un'etichetta o un'immagine personalizzata al pulsante.

La *modalità browse* del controllo di esplorazione di modifica determina se viene visualizzato un pulsante Sfoglia e quale azione si verifica quando si fa clic sul pulsante. Per altre informazioni, vedere il metodo [GetMode.For](#getmode) more information, see the GetMode method.

La `CMFCEditBrowseCtrl` classe supporta le seguenti modalità.

- **modalità personalizzata**

   Un'azione personalizzata viene eseguita quando l'utente fa clic sul pulsante Sfoglia. Ad esempio, è possibile visualizzare una finestra di dialogo specifica dell'applicazione.

- **modalità file**

   Quando l'utente fa clic sul pulsante Sfoglia, viene visualizzata una finestra di dialogo standard per la selezione dei file.

- **modalità cartella**

   Quando l'utente fa clic sul pulsante Sfoglia, viene visualizzata una finestra di dialogo standard per la selezione delle cartelle.

## <a name="how-to-specify-an-edit-browse-control"></a>Procedura: specificare un controllo Sfoglia modifica

Eseguire la procedura seguente per incorporare un controllo di esplorazione di modifica nell'applicazione:

1. Se si desidera implementare una modalità di `CMFCEditBrowseCtrl` esplorazione personalizzata, derivare la propria classe dalla classe e quindi eseguire l'override di [CMFCEditBrowseCtrl::OnBrowse](#onbrowse) metodo. Nel metodo sottoposto a override, eseguire un'azione di esplorazione personalizzata e aggiornare il controllo di esplorazione di modifica con il risultato.

1. Incorporare `CMFCEditBrowseCtrl` l'oggetto o l'oggetto del controllo di visualizzazione di modifica derivato nell'oggetto finestra padre.

1. Se si utilizza la **Creazione guidata classe** per creare `CEdit`una finestra di dialogo, aggiungere un controllo di modifica ( ) al form della finestra di dialogo. Aggiungere inoltre una variabile per accedere al controllo nel file di intestazione. Nel file di intestazione modificare il `CEdit` `CMFCEditBrowseCtrl`tipo della variabile da a . Il controllo di esplorazione di modifica verrà creato automaticamente. Se non si utilizza la **Creazione guidata classe**, aggiungere una `CMFCEditBrowseCtrl` variabile al file di intestazione e quindi chiamare il relativo `Create` metodo .

1. Se si aggiunge un controllo Sfoglia modifica a una finestra di dialogo, utilizzare lo strumento **ClassWizard** per impostare lo scambio di dati.

1. Chiamare il metodo [EnableFolderBrowseButton](#enablefolderbrowsebutton), [EnableFileBrowseButton](#enablefilebrowsebutton)o [EnableBrowseButton](#enablebrowsebutton) per impostare la modalità browse e visualizzare il pulsante Sfoglia. Chiamare il [GetMode](#getmode) metodo per ottenere la modalità di esplorazione corrente.

1. Per fornire un'immagine personalizzata per il pulsante Sfoglia, chiamare il [SetBrowseButtonImage](#setbrowsebuttonimage) metodo o eseguire l'override di [OnDrawBrowseButton](#ondrawbrowsebutton) metodo.

1. Per rimuovere il pulsante Sfoglia dal controllo di esplorazione di modifica, chiamare il [metodo EnableBrowseButton](#enablebrowsebutton) con il parametro *bEnable* impostato su FALSE.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

[CEdit](../../mfc/reference/cedit-class.md)

[CMFCEditBrowseCtrl](../../mfc/reference/cmfceditbrowsectrl-class.md)

## <a name="example"></a>Esempio

Nell'esempio riportato di seguito `CMFCEditBrowseCtrl` viene `EnableFolderBrowseButton` illustrato `EnableFileBrowseButton`come utilizzare due metodi nella classe : e . Questo esempio fa parte [dell'esempio New Controls](../../overview/visual-cpp-samples.md).

[!code-cpp[NVC_MFC_NewControls#6](../../mfc/reference/codesnippet/cpp/cmfceditbrowsectrl-class_1.h)]
[!code-cpp[NVC_MFC_NewControls#7](../../mfc/reference/codesnippet/cpp/cmfceditbrowsectrl-class_2.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afxeditbrowsectrl.h

## <a name="cmfceditbrowsectrlenablebrowsebutton"></a><a name="enablebrowsebutton"></a>CMFCEditBrowseCtrl::EnableBrowseButton

Visualizza o non visualizza il pulsante Sfoglia nel controllo di ricerca di modifica corrente.

```cpp
void EnableBrowseButton(
    BOOL bEnable=TRUE,
    LPCTSTR szLabel=_T("..."));
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
TRUE per visualizzare il pulsante Sfoglia; FALSE per non visualizzare il pulsante Sfoglia. Il valore predefinito è TRUE.

*szLabel (etichetta)*<br/>
Etichetta visualizzata sul pulsante Sfoglia. Il valore predefinito è " **...**".

### <a name="remarks"></a>Osservazioni

Se il parametro *bEnable* è TRUE, implementare un'azione personalizzata da eseguire quando si fa clic sul pulsante Sfoglia. Per implementare un'azione personalizzata, derivare una classe dalla `CMFCEditBrowseCtrl` classe e quindi eseguire l'override del relativo [OnBrowse](#onbrowse) metodo.

Se il parametro *bEnable* è TRUE, `BrowseMode_Default`la modalità di esplorazione del controllo è ; in caso contrario, la modalità browse è `BrowseMode_None`. Per altre informazioni sulle modalità di esplorazione, vedere il metodo [GetMode.For](#getmode) more information about browse modes, see the GetMode method.

## <a name="cmfceditbrowsectrlenablefilebrowsebutton"></a><a name="enablefilebrowsebutton"></a>CMFCEditBrowseCtrl::EnableFileBrowseButton

Visualizza il pulsante Sfoglia nel controllo di visualizzazione di modifica corrente e attiva la modalità *di esplorazione dei file.*

```cpp
void EnableFileBrowseButton(
    LPCTSTR lpszDefExt=NULL,
    LPCTSTR lpszFilter=NULL,
    DWORD dwFlags = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT);
```

### <a name="parameters"></a>Parametri

*lpszDefExt (informazioni in netto*<br/>
Specifica l'estensione di file predefinita usata nella finestra di dialogo di selezione file. Il valore predefinito è NULL.

*Filtro di lpsz*<br/>
Specifica la stringa di filtro predefinita usata nella finestra di dialogo di selezione file. Il valore predefinito è NULL.

*dwFlags*<br/>
Flag di finestra di dialogo. Il valore predefinito è una combinazione bit per bit (OR) di OFN_HIDEREADONLY e OFN_OVERWRITEPROMPT.

### <a name="remarks"></a>Osservazioni

Quando il controllo di modifica con pulsante sfoglia è in modalità di visualizzazione di file e l'utente fa clic sul pulsante Sfoglia, il controllo visualizza la finestra di dialogo di selezione file standard.

Per un elenco completo dei flag disponibili, vedere [Struttura OPENFILENAME](/windows/win32/api/commdlg/ns-commdlg-openfilenamew).

## <a name="cmfceditbrowsectrlenablefolderbrowsebutton"></a><a name="enablefolderbrowsebutton"></a>CMFCEditBrowseCtrl::EnableFolderBrowseButton

Visualizza il pulsante Sfoglia nel controllo di visualizzazione di modifica corrente e attiva la modalità *di esplorazione delle cartelle.*

```cpp
void EnableFolderBrowseButton();
```

### <a name="remarks"></a>Osservazioni

Quando il controllo di esplorazione di modifica è in modalità di esplorazione delle cartelle e l'utente fa clic sul pulsante Sfoglia, il controllo visualizza la finestra di dialogo standard per la selezione delle cartelle.

## <a name="cmfceditbrowsectrlgetmode"></a><a name="getmode"></a>CMFCEditBrowseCtrl::GetMode

Recupera la modalità browse del controllo di esplorazione di modifica corrente.

```
CMFCEditBrowseCtrl::BrowseMode GetMode() const;
```

### <a name="return-value"></a>Valore restituito

Uno dei valori di enumerazione che specifica la modalità corrente del controllo di esplorazione di modifica. La modalità browse determina se il framework visualizza il pulsante Sfoglia e quale azione si verifica quando un utente fa clic su tale pulsante.

Nella tabella seguente sono elencati i valori restituiti possibili.

|valore|Descrizione|
|-----------|-----------------|
|`BrowseMode_Default`|**modalità personalizzata**. Viene eseguita un'azione definita dal programmatore.|
|`BrowseMode_File`|**modalità file**. Viene visualizzata la finestra di dialogo standard del browser dei file.|
|`BrowseMode_Folder`|**modalità cartella**. Viene visualizzata la finestra di dialogo browser cartelle standard.|
|`BrowseMode_None`|Il pulsante Sfoglia non viene visualizzato.|

### <a name="remarks"></a>Osservazioni

Per impostazione `CMFCEditBrowseCtrl` predefinita, un `BrowseMode_None` oggetto viene inizializzato in modalità. Modificare la modalità browse con i metodi [CMFCEditBrowseCtrl::EnableBrowseButton](#enablebrowsebutton), [CMFCEditBrowseCtrl::EnableFileBrowseButton](#enablefilebrowsebutton)e [CMFCEditBrowseCtrl::EnableFolderBrowseButton](#enablefolderbrowsebutton) .

## <a name="cmfceditbrowsectrlonafterupdate"></a><a name="onafterupdate"></a>CMFCEditBrowseCtrl::OnAfterUpdate

Chiamato dal framework dopo l'aggiornamento del controllo di esplorazione di modifica con il risultato di un'azione di esplorazione.

```
virtual void OnAfterUpdate();
```

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare un'azione personalizzata.

## <a name="cmfceditbrowsectrlonbrowse"></a><a name="onbrowse"></a>CMFCEditBrowseCtrl::OnBrowse

Chiamato dal framework dopo che l'utente fa clic sul pulsante Sfoglia del controllo di esplorazione di modifica.

```
virtual void OnBrowse();
```

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per eseguire codice personalizzato quando l'utente fa clic sul pulsante Sfoglia del controllo di esplorazione di modifica. Derivare la propria `CMFCEditBrowseCtrl` classe dalla `OnBrowse` classe ed eseguire l'override del relativo metodo. In questo metodo, implementare un'azione di esplorazione personalizzata e, facoltativamente, aggiornare la casella di testo del controllo di esplorazione di modifica. Nell'applicazione, utilizzare il [EnableBrowseButton](#enablebrowsebutton) metodo per attivare il controllo di visualizzazione di modifica in modalità *di esplorazione personalizzata.*

## <a name="cmfceditbrowsectrlonchangelayout"></a><a name="onchangelayout"></a>CMFCEditBrowseCtrl::OnChangeLayout

Ridisegna il controllo di visualizzazione di modifica corrente.

```
virtual void OnChangeLayout();
```

### <a name="remarks"></a>Osservazioni

Il framework chiama questo metodo quando cambia la modalità browse del controllo di visualizzazione di modifica. Per ulteriori informazioni, vedere [CMFCEditBrowseCtrl::GetMode](#getmode).

## <a name="cmfceditbrowsectrlondrawbrowsebutton"></a><a name="ondrawbrowsebutton"></a>CMFCEditBrowseCtrl::OnDrawBrowseButton

Chiamato dal framework per disegnare il pulsante Sfoglia nel controllo di ricerca di modifica.

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
TRUESe il pulsante viene premuto; in caso contrario, FALSE.

*bIsButtonHot (in questo modo)*<br/>
TRUESe il pulsante è evidenziato; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione in una classe derivata per personalizzare l'aspetto del pulsante Sfoglia.

## <a name="cmfceditbrowsectrlsetbrowsebuttonimage"></a><a name="setbrowsebuttonimage"></a>CMFCEditBrowseCtrl::SetBrowseButtonImage

Imposta un'immagine personalizzata sul pulsante Sfoglia del controllo di ricerca di modifica.

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

*Hbitmap*<br/>
Handle di una bitmap.

*uiBmpResId (informazioni in questo stato in stato in stato in stato in stato in*<br/>
ID risorsa di una bitmap.

*bAutoDistruggi*<br/>
TRUE per eliminare l'icona o la bitmap specificata alla chiusura di questo metodo; in caso contrario, FALSE. Il valore predefinito è TRUE.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per applicare un'immagine personalizzata al pulsante Sfoglia. Per impostazione predefinita, il framework ottiene un'immagine standard quando il controllo di esplorazione di modifica è in modalità *di esplorazione file* o *cartella.*

## <a name="cmfceditbrowsectrlonillegalfilename"></a><a name="onillegalfilename"></a>CMFCEditBrowseCtrl::OnIllegalFileName

Chiamato dal framework quando è stato immesso un nome di file non valido nel controllo di modifica.

```
virtual BOOL OnIllegalFileName(CString& strFileName);
```

### <a name="parameters"></a>Parametri

*strFileName (nome file str)*<br/>
Specifica il nome file non valido.

### <a name="return-value"></a>Valore restituito

Deve restituire FALSE se questo nome di file non può essere passato ulteriormente alla finestra di dialogo del file. In questo caso, lo stato attivo viene impostato nuovamente sul controllo di modifica e l'utente deve continuare la modifica. L'implementazione predefinita visualizza una finestra di messaggio che informa l'utente sul nome di file non valido e restituisce FALSE. È possibile eseguire l'override di questo metodo, correggere il nome del file e restituire TRUE per un'ulteriore elaborazione.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi](../../mfc/reference/mfc-classes.md)
