---
title: Classe CPageSetupDialog | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CPageSetupDialog
- AFXDLGS/CPageSetupDialog
- AFXDLGS/CPageSetupDialog::CPageSetupDialog
- AFXDLGS/CPageSetupDialog::CreatePrinterDC
- AFXDLGS/CPageSetupDialog::DoModal
- AFXDLGS/CPageSetupDialog::GetDeviceName
- AFXDLGS/CPageSetupDialog::GetDevMode
- AFXDLGS/CPageSetupDialog::GetDriverName
- AFXDLGS/CPageSetupDialog::GetMargins
- AFXDLGS/CPageSetupDialog::GetPaperSize
- AFXDLGS/CPageSetupDialog::GetPortName
- AFXDLGS/CPageSetupDialog::OnDrawPage
- AFXDLGS/CPageSetupDialog::PreDrawPage
- AFXDLGS/CPageSetupDialog::m_psd
dev_langs:
- C++
helpviewer_keywords:
- CPageSetupDialog [MFC], CPageSetupDialog
- CPageSetupDialog [MFC], CreatePrinterDC
- CPageSetupDialog [MFC], DoModal
- CPageSetupDialog [MFC], GetDeviceName
- CPageSetupDialog [MFC], GetDevMode
- CPageSetupDialog [MFC], GetDriverName
- CPageSetupDialog [MFC], GetMargins
- CPageSetupDialog [MFC], GetPaperSize
- CPageSetupDialog [MFC], GetPortName
- CPageSetupDialog [MFC], OnDrawPage
- CPageSetupDialog [MFC], PreDrawPage
- CPageSetupDialog [MFC], m_psd
ms.assetid: 049c0ac8-f254-4854-9414-7a8271d1447a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1cffe2d337d611dff0387805c99965c3c2e9ef87
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33374649"
---
# <a name="cpagesetupdialog-class"></a>Classe CPageSetupDialog
Incapsula i servizi forniti dalla finestra di dialogo di impostazione pagina OLE comune di Windows con supporto aggiuntivo per l'impostazione e la modifica dei margini di stampa.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CPageSetupDialog : public CCommonDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPageSetupDialog::CPageSetupDialog](#cpagesetupdialog)|Costruisce un oggetto `CPageSetupDialog`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPageSetupDialog::CreatePrinterDC](#createprinterdc)|Crea un contesto di dispositivo per la stampa.|  
|[CPageSetupDialog::DoModal](#domodal)|Consente di visualizzare la finestra di dialogo e utente effettua una selezione.|  
|[CPageSetupDialog::GetDeviceName](#getdevicename)|Restituisce il nome del dispositivo della stampante.|  
|[CPageSetupDialog::GetDevMode](#getdevmode)|Restituisce l'attuale `DEVMODE` della stampante.|  
|[CPageSetupDialog::GetDriverName](#getdrivername)|Restituisce il driver utilizzato dalla stampante.|  
|[CPageSetupDialog::GetMargins](#getmargins)|Restituisce le impostazioni correnti della stampante.|  
|[CPageSetupDialog::GetPaperSize](#getpapersize)|Restituisce il formato carta della stampante.|  
|[CPageSetupDialog::GetPortName](#getportname)|Restituisce il nome di porta di output.|  
|[CPageSetupDialog::OnDrawPage](#ondrawpage)|Chiamato dal framework per eseguire il rendering di un'immagine della schermata di una pagina stampata.|  
|[CPageSetupDialog::PreDrawPage](#predrawpage)|Chiamato dal framework prima del rendering di un'immagine della schermata di una pagina stampata.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPageSetupDialog::m_psd](#m_psd)|Una struttura utilizzata per personalizzare un `CPageSetupDialog` oggetto.|  
  
## <a name="remarks"></a>Note  
 Questa classe è progettata al posto della finestra di dialogo Impostazioni di stampa.  
  
 Per utilizzare un `CPageSetupDialog` oggetto, creare innanzitutto l'oggetto utilizzando il `CPageSetupDialog` costruttore. Una volta la finestra di dialogo è stata creata, è possibile impostare o modificare i valori di `m_psd` membro dati per inizializzare i valori dei controlli della finestra di dialogo. Il [m_psd](#m_psd) struttura è di tipo **PAGESETUPDLG**.  
  
 Dopo l'inizializzazione di controlli di finestra di dialogo, chiamare il `DoModal` funzione membro per visualizzare la finestra di dialogo e consentire all'utente di selezionare le opzioni di stampa. `DoModal` indica se l'utente selezionato OK ( **IDOK**) o su Annulla ( **IDCANCEL**) pulsante.  
  
 Se `DoModal` restituisce **IDOK**, è possibile usare diversi `CPageSetupDialog`dell'accesso o le funzioni membro il `m_psd` membro dati, per recuperare informazioni input dall'utente.  
  
> [!NOTE]
>  Quando viene chiusa la finestra di dialogo di impostazione pagina OLE comune, non tutte le modifiche apportate dall'utente verranno salvate dal framework. È compito dell'applicazione per salvare tutti i valori da questa finestra di dialogo in una posizione permanente, ad esempio membro del documento dell'applicazione o una classe di applicazione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `CPageSetupDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdlgs. h  
  
##  <a name="cpagesetupdialog"></a>  CPageSetupDialog::CPageSetupDialog  
 Chiamare questa funzione per costruire un `CPageSetupDialog` oggetto.  
  
```  
CPageSetupDialog(
    DWORD dwFlags = PSD_MARGINS | PSD_INWININIINTLMEASURE,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `dwFlags`  
 Uno o più flag che è possibile utilizzare per personalizzare le impostazioni della finestra di dialogo. I valori possono essere combinati utilizzando l'operatore OR bit per bit. Questi valori hanno il significato seguente:  
  
- **PSD_DEFAULTMINMARGINS** imposta la larghezza minima consentita per i margini di pagina a coincidere con i valori minimi della stampante. Questo flag viene ignorato se la **PSD_MARGINS** e **PSD_MINMARGINS** flag vengono inoltre specificati.  
  
- **PSD_INWININIINTLMEASURE** non implementato.  
  
- **PSD_MINMARGINS** , il sistema userà i valori specificati nel **rtMinMargin** membro come gli spessori minimi consentiti per sinistro, superiore, destro e margini inferiore. Il sistema impedisce all'utente di immettere una larghezza che è inferiore al minimo specificato. Se **PSD_MINMARGINS** non viene specificato, il sistema imposta la larghezza minima consentita a quelle consentite dalla stampante.  
  
- **PSD_MARGINS** attiva l'area di controllo dei margini.  
  
- **PSD_INTHOUSANDTHSOFINCHES** fa sì che le unità della finestra di dialogo essere misurato in 1/1000 di pollice.  
  
- **PSD_INHUNDREDTHSOFMILLIMETERS** fa sì che le unità della finestra di dialogo essere misurato in 1/100 di millimetro.  
  
- **PSD_DISABLEMARGINS** disabilita i controlli di finestra di dialogo margini.  
  
- **PSD_DISABLEPRINTER** disabilita il pulsante stampante.  
  
- **PSD_NOWARNING** impedisce che il messaggio di avviso visualizzato quando è presente alcuna stampante predefinita.  
  
- **PSD_DISABLEORIENTATION** disabilita il controllo di finestra di dialogo orientamento di pagina.  
  
- **PSD_RETURNDEFAULT** provoca `CPageSetupDialog` per restituire [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) e [DEVNAMES](../../mfc/reference/devnames-structure.md) strutture che vengono inizializzate per la stampante predefinita di sistema senza visualizzare una finestra di dialogo. Si presuppone che entrambi **hDevNames** e **hDevMode** sono **NULL**; in caso contrario, la funzione restituisce un errore. Se la stampante predefinita di sistema è supportata da un vecchio driver della stampante (precedente a Windows versione 3.0), solo **hDevNames** verrà restituito. **hDevMode** è **NULL**.  
  
- **PSD_DISABLEPAPER** disabilita il controllo di selezione di carta.  
  
- **PSD_SHOWHELP** fa sì che la finestra di dialogo visualizzare il pulsante?. Il **hwndOwner** membro non deve essere **NULL** se questo flag è specificato.  
  
- **PSD_ENABLEPAGESETUPHOOK** abilita la funzione hook specificata in **lpfnSetupHook**.  
  
- **PSD_ENABLEPAGESETUPTEMPLATE** fa sì che il sistema operativo creare la finestra di dialogo utilizzando la finestra di dialogo modello identificata da **hInstance** e **lpSetupTemplateName**.  
  
- **PSD_ENABLEPAGESETUPTEMPLATEHANDLE** indica che **hInstance** identifica un blocco di dati che contiene un modello di finestra di dialogo precaricati. Ignora il sistema **lpSetupTemplateName** se questo flag è specificato.  
  
- **PSD_ENABLEPAGEPAINTHOOK** abilita la funzione hook specificata in **lpfnPagePaintHook**.  
  
- **PSD_DISABLEPAGEPAINTING** disabilita l'area di disegno della finestra di dialogo.  
  
 `pParentWnd`  
 Puntatore all'elemento padre o il proprietario della finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 Utilizzare il [DoModal](../../mfc/reference/cdialog-class.md#domodal) funzione per visualizzare la finestra di dialogo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#94](../../mfc/codesnippet/cpp/cpagesetupdialog-class_1.cpp)]  
  
##  <a name="createprinterdc"></a>  CPageSetupDialog::CreatePrinterDC  
 Crea un contesto di dispositivo stampante dal [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) e [DEVNAMES](../../mfc/reference/devnames-structure.md) strutture.  
  
```  
HDC CreatePrinterDC();
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle per il contesto di dispositivo stampante appena creato (DC).  
  
##  <a name="domodal"></a>  CPageSetupDialog::DoModal  
 Chiamare questa funzione per visualizzare la finestra di dialogo Impostazione pagina OLE comune Windows e consentire all'utente di selezionare varie opzioni di stampa, ad esempio i margini di stampa, dimensioni e l'orientamento del documento e stampante di destinazione.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 **IDOK** oppure **IDCANCEL**. Se **IDCANCEL** viene restituito, chiamare il Windows [CommDlgExtendedError](http://msdn.microsoft.com/library/windows/desktop/ms646916) funzione per determinare se si è verificato un errore.  
  
 **IDOK** e **IDCANCEL** sono costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.  
  
### <a name="remarks"></a>Note  
 Inoltre, l'utente può accedere le opzioni di installazione della stampante, ad esempio percorso di rete e le proprietà specifiche per la stampante selezionata.  
  
 Se si desidera inizializzare le varie opzioni della finestra di dialogo Imposta pagina impostando i membri del `m_psd` struttura, è consigliabile farlo prima di chiamare `DoModal`, e dopo l'oggetto finestra di dialogo. Dopo la chiamata `DoModal`, chiamare le funzioni per recuperare le impostazioni o input informazioni dall'utente nella finestra di dialogo altro membro.  
  
 Se si desidera propagare le impostazioni correnti immesse dall'utente, effettuare una chiamata a [CWinApp::SelectPrinter](../../mfc/reference/cwinapp-class.md#selectprinter). Questa funzione utilizza le informazioni dal `CPageSetupDialog` dell'oggetto e inizializza e seleziona una stampante nuovo controller di dominio con gli attributi appropriati.  
  
 [!code-cpp[NVC_MFCDocView#95](../../mfc/codesnippet/cpp/cpagesetupdialog-class_2.cpp)]  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CPageSetupDialog::CPageSetupDialog](#cpagesetupdialog).  
  
##  <a name="getdevicename"></a>  CPageSetupDialog::GetDeviceName  
 Chiamare questa funzione dopo `DoModal` per recuperare il nome della stampante attualmente selezionata.  
  
```  
CString GetDeviceName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nome del dispositivo utilizzato per il **CPageSetupDialog** oggetto.  
  
##  <a name="getdevmode"></a>  CPageSetupDialog::GetDevMode  
 Chiamare questa funzione dopo la chiamata `DoModal` per recuperare informazioni sul contesto di dispositivo stampante il `CPageSetupDialog` oggetto.  
  
```  
LPDEVMODE GetDevMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) struttura dei dati, che contiene informazioni sull'inizializzazione di dispositivo e l'ambiente di un driver di stampato. È necessario sbloccare la memoria utilizzata da questa struttura con Windows [GlobalUnlock](http://msdn.microsoft.com/library/windows/desktop/aa366595) funzione, come descritto in Windows SDK.  
  
##  <a name="getdrivername"></a>  CPageSetupDialog::GetDriverName  
 Chiamare questa funzione dopo la chiamata [DoModal](../../mfc/reference/cprintdialog-class.md#domodal) per recuperare il nome del driver di dispositivo stampante definita dal sistema.  
  
```  
CString GetDriverName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` specificando il nome del driver definiti dal sistema.  
  
### <a name="remarks"></a>Note  
 Utilizzare un puntatore al `CString` oggetto restituito da `GetDriverName` come valore di `lpszDriverName` in una chiamata a [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).  
  
##  <a name="getmargins"></a>  CPageSetupDialog::GetMargins  
 Chiamare questa funzione dopo una chiamata a `DoModal` per recuperare i margini del driver di dispositivo stampante.  
  
```  
void GetMargins(
    LPRECT lpRectMargins,  
    LPRECT lpRectMinMargins) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *lpRectMargins*  
 Puntatore a un [RECT](https://www.microsoftonedoc.com/#/organizations/e6f6a65cf14f462597b64ac058dbe1d0/projects/3fedad16-eaf1-41a6-8f96-0c1949c68f32/containers/a3daf831-1c5f-4bbe-964d-503870caf874/tocpaths/18113766-3975-4369-bc07-92e34cba712e/locales/en-us) struttura o [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che descrive (in pollici 1/1000 o 1/100 mm) i margini di stampa per la stampante selezionata. Passare **NULL** per questo parametro, se non si è interessati in questo rettangolo.  
  
 *lpRectMinMargins*  
 Puntatore a un `RECT` struttura o `CRect` oggetto che descrive (in pollici 1/1000 o 1/100 mm) i margini di stampa minimi per la stampante selezionata. Passare **NULL** per questo parametro, se non si è interessati in questo rettangolo.  
  
##  <a name="getpapersize"></a>  CPageSetupDialog::GetPaperSize  
 Chiamare questa funzione per recuperare il formato della carta selezionato per la stampa.  
  
```  
CSize GetPaperSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CSize](../../atl-mfc-shared/reference/csize-class.md) oggetto contenente le dimensioni della carta (1/1000 pollici o 1/100 mm) selezionata per la stampa.  
  
##  <a name="getportname"></a>  CPageSetupDialog::GetPortName  
 Chiamare questa funzione dopo la chiamata `DoModal` per recuperare il nome della porta di stampante selezionata.  
  
```  
CString GetPortName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nome della porta di stampante selezionata.  
  
##  <a name="m_psd"></a>  CPageSetupDialog::m_psd  
 Una struttura di tipo **PAGESETUPDLG**, i cui membri archiviano le caratteristiche dell'oggetto finestra di dialogo.  
  
```  
PAGESETUPDLG m_psd;  
```  
  
### <a name="remarks"></a>Note  
 Al termine della creazione un `CPageSetupDialog` dell'oggetto, è possibile utilizzare `m_psd` per impostare i vari aspetti della finestra di dialogo prima di chiamare il `DoModal` funzione membro.  
  
 Se si modifica il `m_psd` (membro dati) direttamente, si eseguirà l'override di alcun comportamento predefinito.  
  
 Per ulteriori informazioni sul [PAGESETUPDLG](http://msdn.microsoft.com/library/windows/desktop/ms646842) struttura, vedi il Windows SDK.  
  
 Per vedere l'esempio [CPageSetupDialog::CPageSetupDialog](#cpagesetupdialog).  
  
##  <a name="ondrawpage"></a>  CPageSetupDialog::OnDrawPage  
 Chiamato dal framework per disegnare un'immagine della schermata di una pagina stampata.  
  
```  
virtual UINT OnDrawPage(
    CDC* pDC,  
    UINT nMessage,  
    LPRECT lpRect);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore al contesto di dispositivo stampante.  
  
 `nMessage`  
 Specifica un messaggio, che indica l'area della pagina da disegnare. Può essere uno dei seguenti:  
  
- **WM_PSD_FULLPAGERECT** area della pagina intera.  
  
- **WM_PSD_MINMARGINRECT** margini minimi correnti.  
  
- **WM_PSD_MARGINRECT** margini correnti.  
  
- **WM_PSD_GREEKTEXTRECT** contenuto della pagina.  
  
- **WM_PSD_ENVSTAMPRECT** Area riservata per una rappresentazione di indicatore spese postali è ragionevole.  
  
- **WM_PSD_YAFULLPAGERECT** Area per una rappresentazione in forma di indirizzo del mittente. Quest'area si estende per i bordi dell'area della pagina di esempio.  
  
 `lpRect`  
 Puntatore a un [CRect](../../atl-mfc-shared/reference/crect-class.md) o [RECT](https://www.microsoftonedoc.com/#/organizations/e6f6a65cf14f462597b64ac058dbe1d0/projects/3fedad16-eaf1-41a6-8f96-0c1949c68f32/containers/a3daf831-1c5f-4bbe-964d-503870caf874/tocpaths/18113766-3975-4369-bc07-92e34cba712e/locales/en-us) che contiene le coordinate dell'area di disegno.  
  
### <a name="return-value"></a>Valore restituito  
 Valore diverso da zero se gestito; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa immagine viene quindi visualizzata come parte della finestra di dialogo di impostazione pagina OLE comune. L'implementazione predefinita consente di disegnare un'immagine di una pagina di testo.  
  
 Eseguire l'override di questa funzione per personalizzare la creazione di un'area specifica dell'immagine o l'intera immagine. È possibile farlo tramite un `switch` istruzione con **case** istruzioni controllando il valore di `nMessage`. Per personalizzare il rendering del contenuto dell'immagine della pagina, ad esempio, è possibile utilizzare l'esempio di codice seguente:  
  
 [!code-cpp[NVC_MFCDocView#96](../../mfc/codesnippet/cpp/cpagesetupdialog-class_3.cpp)]  
  
 Si noti che non è necessario gestire tutti i casi di `nMessage`. È possibile scegliere di gestire un componente dell'immagine, diversi componenti per l'immagine o l'intera area.  
  
##  <a name="predrawpage"></a>  CPageSetupDialog::PreDrawPage  
 Chiamato dal framework prima di disegnare l'immagine di una pagina stampata.  
  
```  
virtual UINT PreDrawPage(
    WORD wPaper,  
    WORD wFlags,  
    LPPAGESETUPDLG pPSD);
```  
  
### <a name="parameters"></a>Parametri  
 *wPaper*  
 Specifica un valore che indica il formato della carta. Questo valore può essere uno del **DMPAPER_** valori elencati nella descrizione del [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) struttura.  
  
 `wFlags`  
 Indica l'orientamento della carta o di busta, e se la stampante è una matrice di punti o di un dispositivo HPPCL Caricamento (Hewlett Packard Printer Control Language). Per il parametro è possibile specificare uno dei valori riportati di seguito:  
  
-   0x001 carta in modalità orizzontale (ad aghi)  
  
-   0x003 carta in modalità orizzontale (HPPCL caricamento)  
  
-   0x005 carta in modalità verticale (ad aghi)  
  
-   0x007 carta in modalità verticale (HPPCL caricamento)  
  
-   0x00b busta in modalità orizzontale (HPPCL caricamento)  
  
-   0x00d busta con orientamento verticale (ad aghi)  
  
-   0x019 busta con orientamento orizzontale (ad aghi)  
  
-   0x01f busta con orientamento verticale (ad aghi)  
  
 `pPSD`  
 Puntatore a un **PAGESETUPDLG** struttura. Per ulteriori informazioni su [PAGESETUPDLG](http://msdn.microsoft.com/library/windows/desktop/ms646842), vedi il Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Valore diverso da zero se gestito; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per personalizzare il disegno dell'immagine. Se si esegue l'override di questa funzione e restituire **TRUE**, è necessario disegnare l'intera immagine. Se si esegue l'override di questa funzione e restituire **FALSE**, l'immagine predefinita intera viene disegnato dal framework.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC WORDPAD](../../visual-cpp-samples.md)   
 [Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



