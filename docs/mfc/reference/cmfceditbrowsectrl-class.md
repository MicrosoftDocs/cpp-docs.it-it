---
title: Classe CMFCEditBrowseCtrl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: de1e30e6ca9f404199c6db43837f35d612a02b69
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmfceditbrowsectrl-class"></a>Classe CMFCEditBrowseCtrl
La `CMFCEditBrowseCtrl` classe supporta il controllo di visualizzazione di modifica, è una casella di testo modificabile che contiene facoltativamente un pulsante Sfoglia. Quando l'utente fa clic sul pulsante Sfoglia, il controllo esegue un'azione personalizzata o visualizza una finestra di dialogo standard che contiene un visualizzatore file o un visualizzatore cartelle.  
  
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
 Utilizzare un controllo di modifica Sfoglia per selezionare un nome file o cartella. Facoltativamente, è possibile utilizzare il controllo per eseguire un'azione personalizzata, ad esempio per visualizzare una finestra di dialogo. È possibile visualizzare o non visualizzare sul pulsante Sfoglia e sul pulsante, è possibile applicare un'immagine o un'etichetta personalizzata.  
  
 Il *modalità browse* di Sfoglia Modifica controllo determina se viene visualizzato un pulsante Sfoglia e quale azione si verifica quando si fa clic sul pulsante. Per ulteriori informazioni, vedere il [GetMode](#getmode) metodo.  
  
 La `CMFCEditBrowseCtrl` classe supporta le modalità seguenti.  
  
 `custom mode`  
 Un'azione personalizzata viene eseguita quando l'utente fa clic sul pulsante Sfoglia. Ad esempio, è possibile visualizzare la finestra di dialogo specifica dell'applicazione.  
  
 `file mode`  
 Quando l'utente fa clic sul pulsante Sfoglia, viene visualizzata una finestra di dialogo di selezione file standard.  
  
 `folder mode`  
 Una finestra di dialogo di selezione cartella standard viene visualizzata quando l'utente fa clic sul pulsante Sfoglia.  
  
## <a name="how-to-specify-an-edit-browse-control"></a>Procedura: Specificare un controllo di visualizzazione di modifica  
 Per incorporare un controllo di visualizzazione di modifica nell'applicazione, procedere come segue:  
  
1.  Se si desidera implementare la modalità di visualizzazione personalizzato, derivare la propria classe dal `CMFCEditBrowseCtrl` classe e quindi eseguire l'override di [CMFCEditBrowseCtrl::OnBrowse](#onbrowse) metodo. Nel metodo sottoposto a override, eseguire un'azione di esplorazione personalizzata e aggiorna il controllo di visualizzazione di modifica con il risultato.  
  
2.  Incorporare una il `CMFCEditBrowseCtrl` oggetto o l'oggetto di controllo di modifica derivata Sfoglia nell'oggetto finestra padre.  
  
3.  Se si utilizza il **Creazione guidata classe** per creare una finestra di dialogo, aggiungere un controllo di modifica ( `CEdit`) per il form di finestra di dialogo. Inoltre, aggiungere una variabile per accedere al controllo nel file di intestazione. Nel file di intestazione, modificare il tipo della variabile da `CEdit` a `CMFCEditBrowseCtrl`. Verrà creato automaticamente il controllo di visualizzazione di modifica. Se non si utilizza il **Creazione guidata classe**, aggiungere un `CMFCEditBrowseCtrl` variabile al file di intestazione e quindi chiamare il relativo `Create` metodo.  
  
4.  Se si aggiunge un controllo di visualizzazione di modifica a una finestra di dialogo, utilizzare il **ClassWizard** strumento per impostare i dati exchange.  
  
5.  Chiamare il [EnableFolderBrowseButton](#enablefolderbrowsebutton), [EnableFileBrowseButton](#enablefilebrowsebutton), o [EnableBrowseButton](#enablebrowsebutton) metodo per impostare la modalità browse e visualizzare sul pulsante Sfoglia. Chiamare il [GetMode](#getmode) per ottenere la modalità di visualizzazione corrente.  
  
6.  Per fornire un'immagine personalizzata per il pulsante Sfoglia, chiamare il [SetBrowseButtonImage](#setbrowsebuttonimage) metodo o la sostituzione di [OnDrawBrowseButton](#ondrawbrowsebutton) metodo.  
  
7.  Per rimuovere il pulsante Sfoglia dal controllo di visualizzazione di modifica, chiamare il [EnableBrowseButton](#enablebrowsebutton) metodo con il `bEnable` parametro impostato su `FALSE`.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CEdit](../../mfc/reference/cedit-class.md)  
  
 [CMFCEditBrowseCtrl](../../mfc/reference/cmfceditbrowsectrl-class.md)  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare due metodi di `CMFCEditBrowseCtrl` classe: `EnableFolderBrowseButton` e `EnableFileBrowseButton`. In questo esempio fa parte di [esempio nuovi controlli](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#6](../../mfc/reference/codesnippet/cpp/cmfceditbrowsectrl-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#7](../../mfc/reference/codesnippet/cpp/cmfceditbrowsectrl-class_2.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxeditbrowsectrl. h  
  
##  <a name="enablebrowsebutton"></a>CMFCEditBrowseCtrl::EnableBrowseButton  
 Visualizza o sul pulsante Sfoglia non visualizzare nel controllo di ricerca di modifica corrente.  
  
```  
void EnableBrowseButton(
    BOOL bEnable=TRUE,  
    LPCTSTR szLabel=_T("..."));
```  
  
### <a name="parameters"></a>Parametri  
 `bEnable`  
 `TRUE`Per visualizzare il pulsante Sfoglia. `FALSE` per non visualizzare sul pulsante Sfoglia. Il valore predefinito è `TRUE`.  
  
 `szLabel`  
 L'etichetta che viene visualizzato sul pulsante Sfoglia. Il valore predefinito è " **...** ".  
  
### <a name="remarks"></a>Note  
 Se il `bEnable` parametro `TRUE`, implementare un'azione personalizzata da eseguire quando si fa clic sul pulsante Sfoglia. Per implementare un'azione personalizzata, derivare una classe dalla classe di `CMFCEditBrowseCtrl` classe e quindi eseguire l'override relativo [OnBrowse](#onbrowse) metodo.  
  
 Se il `bEnable` parametro `TRUE`, la modalità di visualizzazione del controllo è `BrowseMode_Default`; in caso contrario, la modalità browse non è `BrowseMode_None`. Per ulteriori informazioni sulle modalità di visualizzazione, vedere il [GetMode](#getmode) metodo.  
  
##  <a name="enablefilebrowsebutton"></a>CMFCEditBrowseCtrl::EnableFileBrowseButton  
 Visualizza il pulsante Sfoglia nel controllo di visualizzazione di modifica corrente e inserisce il controllo *Sfoglia file* modalità.  
  
```  
void EnableFileBrowseButton(
    LPCTSTR lpszDefExt=NULL,  
    LPCTSTR lpszFilter=NULL,  
    DWORD dwFlags = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszDefExt`  
 Specifica l'estensione di file predefinita usata nella finestra di dialogo di selezione file. Il valore predefinito è `NULL`.  
  
 `lpszFilter`  
 Specifica la stringa di filtro predefinita usata nella finestra di dialogo di selezione file. Il valore predefinito è `NULL`.  
  
 `dwFlags`  
 Flag di finestra di dialogo. Il valore predefinito è una combinazione bit per bit (OR) di OFN_HIDEREADONLY e OFN_OVERWRITEPROMPT.  
  
### <a name="remarks"></a>Note  
 Quando il controllo di modifica con pulsante sfoglia è in modalità di visualizzazione di file e l'utente fa clic sul pulsante Sfoglia, il controllo visualizza la finestra di dialogo di selezione file standard.  
  
 Per un elenco completo dei flag, vedere [struttura OPENFILENAME](https://msdn.microsoft.com/library/ms646839.aspx).  
  
##  <a name="enablefolderbrowsebutton"></a>CMFCEditBrowseCtrl::EnableFolderBrowseButton  
 Visualizza il pulsante Sfoglia nel controllo di visualizzazione di modifica corrente e inserisce il controllo *Sfoglia cartella* modalità.  
  
```  
void EnableFolderBrowseButton();
```  
  
### <a name="remarks"></a>Note  
 Quando il controllo di visualizzazione di modifica è in modalità di visualizzazione cartella e l'utente fa clic sul pulsante Sfoglia, il controllo Visualizza la finestra di dialogo di selezione cartella standard.  
  
##  <a name="getmode"></a>CMFCEditBrowseCtrl::GetMode  
 Recupera la modalità di visualizzazione del controllo di visualizzazione di modifica corrente.  
  
```  
CMFCEditBrowseCtrl::BrowseMode GetMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori di enumerazione che specifica la modalità di modifica selezionare controllo. La modalità browse determina se il framework Visualizza il pulsante Sfoglia e quale azione si verifica quando un utente fa clic sul pulsante.  
  
 Nella tabella seguente sono elencati i valori restituiti possibili.  
  
|Valore|Descrizione|  
|-----------|-----------------|  
|`BrowseMode_Default`|`custom mode`. Viene eseguita un'azione definita dal programmatore.|  
|`BrowseMode_File`|`file mode`. Viene visualizzato nella finestra di dialogo del browser di file standard.|  
|`BrowseMode_Folder`|`folder mode`. Viene visualizzato nella finestra di dialogo del browser di cartella standard.|  
|`BrowseMode_None`|Non viene visualizzato sul pulsante Sfoglia.|  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, un `CMFCEditBrowseCtrl` oggetto viene inizializzato su `BrowseMode_None` modalità. Modificare la modalità browse con le [CMFCEditBrowseCtrl::EnableBrowseButton](#enablebrowsebutton), [CMFCEditBrowseCtrl::EnableFileBrowseButton](#enablefilebrowsebutton), e [CMFCEditBrowseCtrl::EnableFolderBrowseButton ](#enablefolderbrowsebutton) metodi.  
  
##  <a name="onafterupdate"></a>CMFCEditBrowseCtrl::OnAfterUpdate  
 Chiamato dal framework dopo il controllo di visualizzazione di modifica viene aggiornato con il risultato dell'azione di esplorazione.  
  
```  
virtual void OnAfterUpdate();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo in una classe derivata per implementare un'azione personalizzata.  
  
##  <a name="onbrowse"></a>CMFCEditBrowseCtrl::OnBrowse  
 Chiamato dal framework dopo che l'utente fa clic sul pulsante Sfoglia del controllo di visualizzazione di modifica.  
  
```  
virtual void OnBrowse();
```  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per eseguire codice personalizzato quando l'utente fa clic sul pulsante Sfoglia del controllo di visualizzazione di modifica. Derivare la propria classe dal `CMFCEditBrowseCtrl` classe ed eseguire l'override relativo `OnBrowse` metodo. In quel metodo, implementare un'azione di esplorazione personalizzata e, facoltativamente, aggiornare la casella di testo del controllo di visualizzazione di modifica. Nell'applicazione, utilizzare il [EnableBrowseButton](#enablebrowsebutton) metodo per inserire il controllo di visualizzazione di modifica in *esplorazione personalizzata* modalità.  
  
##  <a name="onchangelayout"></a>CMFCEditBrowseCtrl::OnChangeLayout  
 Ridisegna il controllo di visualizzazione di modifica corrente.  
  
```  
virtual void OnChangeLayout();
```  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando la modalità di visualizzazione di modifica Sfoglia controllare le modifiche. Per ulteriori informazioni, vedere [CMFCEditBrowseCtrl::GetMode](#getmode).  
  
##  <a name="ondrawbrowsebutton"></a>CMFCEditBrowseCtrl::OnDrawBrowseButton  
 Chiamato dal framework per disegnare sul pulsante Sfoglia in controllo di visualizzazione di modifica.  
  
```  
virtual void OnDrawBrowseButton(
    CDC* pDC,  
    CRect rect,  
    BOOL bIsButtonPressed,  
    BOOL bIsButtonHot);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore a un contesto di dispositivo.  
  
 `Rect`  
 Il rettangolo di delimitazione del pulsante Sfoglia.  
  
 `bIsButtonPressed`  
 `TRUE`Se viene premuto il pulsante; in caso contrario, `FALSE`.  
  
 `bIsButtonHot`  
 `TRUE`Se il pulsante è evidenziato. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione in una classe derivata per personalizzare l'aspetto del pulsante Sfoglia.  
  
##  <a name="setbrowsebuttonimage"></a>CMFCEditBrowseCtrl::SetBrowseButtonImage  
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
 `hIcon`  
 L'handle di un'icona.  
  
 `hBitmap`  
 L'handle di una bitmap.  
  
 `uiBmpResId`  
 L'ID risorsa della bitmap.  
  
 `bAutoDestroy`  
 `TRUE`Per eliminare l'icona specificata o bitmap quando questo metodo termina; in caso contrario, `FALSE`. Il valore predefinito è `TRUE`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per applicare un'immagine personalizzata per il pulsante Sfoglia. Per impostazione predefinita, il framework Ottiene un'immagine standard quando il controllo di visualizzazione di modifica è in *Sfoglia file* o *Sfoglia cartella* modalità.  
  
##  <a name="onillegalfilename"></a>CMFCEditBrowseCtrl::OnIllegalFileName  
 Chiamato dal framework quando è stato immesso un nome di file non valido nel controllo di modifica.  
  
```  
virtual BOOL OnIllegalFileName(CString& strFileName);
```  
  
### <a name="parameters"></a>Parametri  
 `strFileName`  
 Specifica il nome di file non valido.  
  
### <a name="return-value"></a>Valore restituito  
 Deve restituire `FALSE` se il nome del file non può essere passata ulteriormente la finestra di dialogo file. In questo caso, lo stato attivo è impostato il controllo di modifica e l'utente deve continuare la modifica. L'implementazione predefinita viene visualizzato un messaggio che indica all'utente il nome di file non valido e restituisce `FALSE`. È possibile eseguire l'override di questo metodo, correggere il nome di file e restituire `TRUE` per un'ulteriore elaborazione.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)
