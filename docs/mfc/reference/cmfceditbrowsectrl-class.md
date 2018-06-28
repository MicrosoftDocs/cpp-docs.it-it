---
title: Classe CMFCEditBrowseCtrl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 495f6360601fc41493f68bd4fdd7ac769b9a634c
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37037974"
---
# <a name="cmfceditbrowsectrl-class"></a>Classe CMFCEditBrowseCtrl
Il `CMFCEditBrowseCtrl` classe supporta il controllo di visualizzazione modifica, ovvero casella di testo modificabile che contiene facoltativamente un pulsante Sfoglia. Quando l'utente fa clic sul pulsante Sfoglia, il controllo esegue un'azione personalizzata o visualizza una finestra di dialogo standard che contiene un visualizzatore file o un visualizzatore cartelle.  
  
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
|[CMFCEditBrowseCtrl::EnableFileBrowseButton](#enablefilebrowsebutton)|Abilita il pulsante Sfoglia e attiva il controllo di visualizzazione di modifica *Sfoglia file* modalità.|  
|[CMFCEditBrowseCtrl::EnableFolderBrowseButton](#enablefolderbrowsebutton)|Abilita il pulsante Sfoglia e attiva il controllo di visualizzazione di modifica *Sfoglia cartella* modalità.|  
|[CMFCEditBrowseCtrl::GetMode](#getmode)|Restituisce la modalità di visualizzazione corrente.|  
|[CMFCEditBrowseCtrl::OnAfterUpdate](#onafterupdate)|Chiamato dal framework dopo il controllo di visualizzazione di modifica viene aggiornato con il risultato dell'azione di esplorazione.|  
|[CMFCEditBrowseCtrl::OnBrowse](#onbrowse)|Chiamato dal framework dopo che l'utente fa clic sul pulsante Sfoglia.|  
|[CMFCEditBrowseCtrl::OnChangeLayout](#onchangelayout)|Ridisegna il controllo di visualizzazione di modifica corrente.|  
|[CMFCEditBrowseCtrl::OnDrawBrowseButton](#ondrawbrowsebutton)|Chiamato dal framework per disegnare il pulsante Sfoglia.|  
|[CMFCEditBrowseCtrl::OnIllegalFileName](#onillegalfilename)|Chiamato dal framework quando è stato immesso un nome di file non valido nel controllo di modifica.|  
|`CMFCEditBrowseCtrl::PreTranslateMessage`|Converte i messaggi della finestra prima che vengano inviati per la [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) funzioni di Windows. Per la sintassi e altre informazioni, vedere [CWnd:: PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).|  
|[CMFCEditBrowseCtrl::SetBrowseButtonImage](#setbrowsebuttonimage)|Imposta un'immagine personalizzata per il pulsante Sfoglia.|  
  
## <a name="remarks"></a>Note  
 Utilizzare un controllo di modifica Sfoglia per selezionare un nome file o cartella. Facoltativamente, utilizzare il controllo per eseguire un'azione personalizzata, ad esempio per visualizzare una finestra di dialogo. È possibile visualizzare o non visualizzare sul pulsante Sfoglia e sul pulsante, è possibile applicare un'immagine o etichetta personalizzata.  
  
 Il *modalità browse* della esaminare Modifica controllo determina se viene visualizzato un pulsante Sfoglia e quale azione si verifica quando si fa clic sul pulsante. Per altre informazioni, vedere la [GetMode](#getmode) metodo.  
  
 Il `CMFCEditBrowseCtrl` classe supporta le modalità seguenti.  
  
 `custom mode`  
 Un'azione personalizzata viene eseguita quando l'utente fa clic sul pulsante Sfoglia. Ad esempio, è possibile visualizzare la finestra di dialogo specifica dell'applicazione.  
  
 `file mode`  
 Una finestra di dialogo di selezione file standard viene visualizzata quando l'utente fa clic sul pulsante Sfoglia.  
  
 `folder mode`  
 Una finestra di dialogo Selezione cartella standard viene visualizzata quando l'utente fa clic sul pulsante Sfoglia.  
  
## <a name="how-to-specify-an-edit-browse-control"></a>Procedura: Specificare un controllo di visualizzazione di modifica  
 Eseguire la procedura seguente per incorporare un controllo di visualizzazione di modifica nell'applicazione in uso:  
  
1.  Se si desidera implementare la modalità di visualizzazione personalizzato, derivare la propria classe dal `CMFCEditBrowseCtrl` classe e quindi eseguire l'override di [CMFCEditBrowseCtrl::OnBrowse](#onbrowse) metodo. Nel metodo sottoposto a override, eseguire un'azione di esplorazione personalizzata e aggiorna il controllo di visualizzazione di modifica con il risultato.  
  
2.  Incorporare una il `CMFCEditBrowseCtrl` oggetto oppure l'oggetto di controllo modifica derivata Sfoglia nell'oggetto finestra padre.  
  
3.  Se si utilizza il **Creazione guidata classe** per creare una finestra di dialogo, aggiungere un controllo di modifica ( `CEdit`) per il modulo di finestra di dialogo. Inoltre, aggiungere una variabile per accedere al controllo nel file di intestazione. Nel file di intestazione, modificare il tipo della variabile dal `CEdit` a `CMFCEditBrowseCtrl`. Il controllo di visualizzazione di modifica verrà creato automaticamente. Se non si utilizza il **Creazione guidata classe**, aggiungere un `CMFCEditBrowseCtrl` variabile al file di intestazione e quindi chiamare il relativo `Create` metodo.  
  
4.  Se si aggiunge un controllo di visualizzazione di modifica a una finestra di dialogo, usare il **ClassWizard** strumento per configurare lo scambio di dati.  
  
5.  Chiamare il [EnableFolderBrowseButton](#enablefolderbrowsebutton), [EnableFileBrowseButton](#enablefilebrowsebutton), o [EnableBrowseButton](#enablebrowsebutton) metodo per impostare la modalità browse e visualizzare il pulsante Sfoglia. Chiamare il [GetMode](#getmode) metodo per ottenere la modalità di visualizzazione corrente.  
  
6.  Per fornire un'immagine personalizzata per il pulsante Sfoglia, chiamare il [SetBrowseButtonImage](#setbrowsebuttonimage) metodo o ignorare il [OnDrawBrowseButton](#ondrawbrowsebutton) (metodo).  
  
7.  Per rimuovere il pulsante Sfoglia dal controllo di visualizzazione di modifica, chiamare il [EnableBrowseButton](#enablebrowsebutton) metodo con il *bAttivare il* parametro impostato su `FALSE`.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CEdit](../../mfc/reference/cedit-class.md)  
  
 [CMFCEditBrowseCtrl](../../mfc/reference/cmfceditbrowsectrl-class.md)  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare due metodi di `CMFCEditBrowseCtrl` classe: `EnableFolderBrowseButton` e `EnableFileBrowseButton`. In questo esempio fa parte il [esempio di nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#6](../../mfc/reference/codesnippet/cpp/cmfceditbrowsectrl-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#7](../../mfc/reference/codesnippet/cpp/cmfceditbrowsectrl-class_2.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxeditbrowsectrl. h  
  
##  <a name="enablebrowsebutton"></a>  CMFCEditBrowseCtrl::EnableBrowseButton  
 Consente di visualizzare o non vengono visualizzate sul pulsante Sfoglia sul controllo di visualizzazione di modifica corrente.  
  
```  
void EnableBrowseButton(
    BOOL bEnable=TRUE,  
    LPCTSTR szLabel=_T("..."));
```  
  
### <a name="parameters"></a>Parametri  
 *bAttivare il*  
 `TRUE` Per visualizzare il pulsante Sfoglia; `FALSE` non venga visualizzata sul pulsante Sfoglia. Il valore predefinito è `TRUE`.  
  
 *szLabel*  
 L'etichetta che viene visualizzato sul pulsante Sfoglia. Il valore predefinito è " **...** ".  
  
### <a name="remarks"></a>Note  
 Se il *bAttivare il* parametro `TRUE`, implementare un'azione personalizzata da eseguire quando fa clic sul pulsante Sfoglia. Per implementare un'azione personalizzata, derivare una classe dal `CMFCEditBrowseCtrl` classe e quindi eseguire l'override relativi [OnBrowse](#onbrowse) metodo.  
  
 Se il `bEnable` parametro `TRUE`, la modalità di visualizzazione del controllo viene `BrowseMode_Default`; in caso contrario, la modalità browse non è `BrowseMode_None`. Per ulteriori informazioni sulle modalità di visualizzazione, vedere la [GetMode](#getmode) metodo.  
  
##  <a name="enablefilebrowsebutton"></a>  CMFCEditBrowseCtrl::EnableFileBrowseButton  
 Visualizza il pulsante Sfoglia nel controllo di visualizzazione di modifica corrente e inserisce il controllo *Sfoglia file* modalità.  
  
```  
void EnableFileBrowseButton(
    LPCTSTR lpszDefExt=NULL,  
    LPCTSTR lpszFilter=NULL,  
    DWORD dwFlags = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszDefExt*  
 Specifica l'estensione di file predefinita usata nella finestra di dialogo di selezione file. Il valore predefinito è `NULL`.  
  
 *lpszFilter*  
 Specifica la stringa di filtro predefinita usata nella finestra di dialogo di selezione file. Il valore predefinito è `NULL`.  
  
 *dwFlags*  
 Flag di finestra di dialogo. Il valore predefinito è una combinazione bit per bit (OR) di OFN_HIDEREADONLY e OFN_OVERWRITEPROMPT.  
  
### <a name="remarks"></a>Note  
 Quando il controllo di modifica con pulsante sfoglia è in modalità di visualizzazione di file e l'utente fa clic sul pulsante Sfoglia, il controllo visualizza la finestra di dialogo di selezione file standard.  
  
 Per un elenco completo dei flag, vedere [struttura OPENFILENAME](https://msdn.microsoft.com/library/ms646839.aspx).  
  
##  <a name="enablefolderbrowsebutton"></a>  CMFCEditBrowseCtrl::EnableFolderBrowseButton  
 Visualizza il pulsante Sfoglia nel controllo di visualizzazione di modifica corrente e inserisce il controllo *Sfoglia cartella* modalità.  
  
```  
void EnableFolderBrowseButton();
```  
  
### <a name="remarks"></a>Note  
 Quando il controllo di visualizzazione di modifica è in modalità browse cartella e l'utente fa clic sul pulsante Sfoglia, il controllo Visualizza la finestra di dialogo Selezione cartella standard.  
  
##  <a name="getmode"></a>  CMFCEditBrowseCtrl::GetMode  
 Recupera la modalità di visualizzazione del controllo di visualizzazione di modifica corrente.  
  
```  
CMFCEditBrowseCtrl::BrowseMode GetMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di enumerazione che specifica la modalità corrente della modifica Sfoglia controllo. La modalità browse determina se il framework Visualizza il pulsante Sfoglia e quale azione si verifica quando un utente fa clic sul pulsante.  
  
 Nella tabella seguente sono elencati i valori restituiti possibili.  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|`BrowseMode_Default`|`custom mode`. Verrà eseguita un'azione definita dal programmatore.|  
|`BrowseMode_File`|`file mode`. Viene visualizzata la finestra di dialogo browser di file standard.|  
|`BrowseMode_Folder`|`folder mode`. Viene visualizzata la finestra di dialogo del browser cartella standard.|  
|`BrowseMode_None`|Non viene visualizzato il pulsante Sfoglia.|  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, un `CMFCEditBrowseCtrl` viene inizializzato in `BrowseMode_None` modalità. Modificare la modalità browse con le [CMFCEditBrowseCtrl::EnableBrowseButton](#enablebrowsebutton), [CMFCEditBrowseCtrl::EnableFileBrowseButton](#enablefilebrowsebutton), e [CMFCEditBrowseCtrl::EnableFolderBrowseButton ](#enablefolderbrowsebutton) metodi.  
  
##  <a name="onafterupdate"></a>  CMFCEditBrowseCtrl::OnAfterUpdate  
 Chiamato dal framework dopo il controllo di visualizzazione di modifica viene aggiornato con il risultato dell'azione di esplorazione.  
  
```  
virtual void OnAfterUpdate();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in una classe derivata per implementare un'azione personalizzata.  
  
##  <a name="onbrowse"></a>  CMFCEditBrowseCtrl::OnBrowse  
 Chiamato dal framework dopo che l'utente fa clic sul pulsante Sfoglia del controllo di visualizzazione di modifica.  
  
```  
virtual void OnBrowse();
```  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per eseguire codice personalizzato quando l'utente fa clic sul pulsante Sfoglia di controllo di visualizzazione di modifica. Derivare la propria classe dal `CMFCEditBrowseCtrl` classe ed eseguire l'override relativo `OnBrowse` metodo. In tale metodo, implementare un'azione di esplorazione personalizzata e, facoltativamente, aggiornare la casella di testo del controllo di visualizzazione di modifica. Nell'applicazione, usare il [EnableBrowseButton](#enablebrowsebutton) metodo per inserire il controllo di visualizzazione di modifica nella *esplorazione personalizzata* modalità.  
  
##  <a name="onchangelayout"></a>  CMFCEditBrowseCtrl::OnChangeLayout  
 Ridisegna il controllo di visualizzazione di modifica corrente.  
  
```  
virtual void OnChangeLayout();
```  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando la modalità di visualizzazione di modifica Sfoglia controllare le modifiche. Per altre informazioni, vedere [CMFCEditBrowseCtrl::GetMode](#getmode).  
  
##  <a name="ondrawbrowsebutton"></a>  CMFCEditBrowseCtrl::OnDrawBrowseButton  
 Chiamato dal framework per disegnare il pulsante Sfoglia nel controllo di visualizzazione di modifica.  
  
```  
virtual void OnDrawBrowseButton(
    CDC* pDC,  
    CRect rect,  
    BOOL bIsButtonPressed,  
    BOOL bIsButtonHot);
```  
  
### <a name="parameters"></a>Parametri  
 *pDC*  
 Puntatore a un contesto di dispositivo.  
  
 *Rect*  
 Il rettangolo di delimitazione del pulsante Sfoglia.  
  
 *bIsButtonPressed*  
 `TRUE` Se viene premuto il pulsante; in caso contrario, `FALSE`.  
  
 *bIsButtonHot*  
 `TRUE` Se il pulsante è evidenziato. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione in una classe derivata per personalizzare l'aspetto del pulsante Sfoglia.  
  
##  <a name="setbrowsebuttonimage"></a>  CMFCEditBrowseCtrl::SetBrowseButtonImage  
 Imposta un'immagine personalizzata sul pulsante di ricerca del controllo di visualizzazione di modifica.  
  
```  
void SetBrowseButtonImage(
    HICON hIcon,  
    BOOL bAutoDestroy= TRUE);

 
void SetBrowseButtonImage(
    HBITMAP hBitmap,  
    BOOL bAutoDestroy= TRUE);  
  
void SetBrowseButtonImage(UINT uiBmpResId);
```  
  
### <a name="parameters"></a>Parametri  
 *Icona*  
 L'handle di un'icona.  
  
 *hBitmap*  
 L'handle di una bitmap.  
  
 *uiBmpResId*  
 L'ID risorsa della bitmap.  
  
 *flag bAutoDestroy*  
 `TRUE` Per eliminare le bitmap di icona specificata quando questo metodo termina; in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per applicare un'immagine personalizzata per il pulsante Sfoglia. Per impostazione predefinita, il framework Ottiene un'immagine standard quando il controllo di visualizzazione di modifica si trova in *Sfoglia file* oppure *Sfoglia cartella* modalità.  
  
##  <a name="onillegalfilename"></a>  CMFCEditBrowseCtrl::OnIllegalFileName  
 Chiamato dal framework quando è stato immesso un nome di file non valido nel controllo di modifica.  
  
```  
virtual BOOL OnIllegalFileName(CString& strFileName);
```  
  
### <a name="parameters"></a>Parametri  
 *strFileName*  
 Specifica il nome di file non valido.  
  
### <a name="return-value"></a>Valore restituito  
 Deve restituire `FALSE` se il nome del file non può essere passata per la finestra di dialogo file. In questo caso, lo stato attivo è impostato il controllo di modifica e l'utente deve continuare la modifica. L'implementazione predefinita viene visualizzato un messaggio che informa l'utente relativo al nome di file non valido e restituisce `FALSE`. È possibile eseguire l'override di questo metodo, correggere il nome del file e restituire `TRUE` per un'ulteriore elaborazione.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)
