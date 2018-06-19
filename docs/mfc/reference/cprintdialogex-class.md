---
title: Classe CPrintDialogEx | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CPrintDialogEx
- AFXDLGS/CPrintDialogEx
- AFXDLGS/CPrintDialogEx::CPrintDialogEx
- AFXDLGS/CPrintDialogEx::CreatePrinterDC
- AFXDLGS/CPrintDialogEx::DoModal
- AFXDLGS/CPrintDialogEx::GetCopies
- AFXDLGS/CPrintDialogEx::GetDefaults
- AFXDLGS/CPrintDialogEx::GetDeviceName
- AFXDLGS/CPrintDialogEx::GetDevMode
- AFXDLGS/CPrintDialogEx::GetDriverName
- AFXDLGS/CPrintDialogEx::GetPortName
- AFXDLGS/CPrintDialogEx::GetPrinterDC
- AFXDLGS/CPrintDialogEx::PrintAll
- AFXDLGS/CPrintDialogEx::PrintCollate
- AFXDLGS/CPrintDialogEx::PrintCurrentPage
- AFXDLGS/CPrintDialogEx::PrintRange
- AFXDLGS/CPrintDialogEx::PrintSelection
- AFXDLGS/CPrintDialogEx::m_pdex
dev_langs:
- C++
helpviewer_keywords:
- CPrintDialogEx [MFC], CPrintDialogEx
- CPrintDialogEx [MFC], CreatePrinterDC
- CPrintDialogEx [MFC], DoModal
- CPrintDialogEx [MFC], GetCopies
- CPrintDialogEx [MFC], GetDefaults
- CPrintDialogEx [MFC], GetDeviceName
- CPrintDialogEx [MFC], GetDevMode
- CPrintDialogEx [MFC], GetDriverName
- CPrintDialogEx [MFC], GetPortName
- CPrintDialogEx [MFC], GetPrinterDC
- CPrintDialogEx [MFC], PrintAll
- CPrintDialogEx [MFC], PrintCollate
- CPrintDialogEx [MFC], PrintCurrentPage
- CPrintDialogEx [MFC], PrintRange
- CPrintDialogEx [MFC], PrintSelection
- CPrintDialogEx [MFC], m_pdex
ms.assetid: 1d506703-ee1c-44cc-b4ce-4e778fec26b8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7f511eb1414a5cd5e22b9a3e05f81caef15b908e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33376646"
---
# <a name="cprintdialogex-class"></a>Classe CPrintDialogEx
Incapsula i servizi forniti dalla finestra delle proprietà di stampa Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CPrintDialogEx : public CCommonDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrintDialogEx::CPrintDialogEx](#cprintdialogex)|Costruisce un oggetto `CPrintDialogEx`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrintDialogEx::CreatePrinterDC](#createprinterdc)|Crea un contesto di dispositivo stampante senza visualizzare la finestra di dialogo Stampa.|  
|[CPrintDialogEx::DoModal](#domodal)|Visualizza la finestra di dialogo e consente all'utente di effettuare selezioni.|  
|[CPrintDialogEx::GetCopies](#getcopies)|Recupera il numero di copie richieste.|  
|[CPrintDialogEx::GetDefaults](#getdefaults)|Recupera impostazioni predefinite del dispositivo senza visualizzare una finestra di dialogo.|  
|[CPrintDialogEx::GetDeviceName](#getdevicename)|Recupera il nome del dispositivo stampante selezionata.|  
|[CPrintDialogEx::GetDevMode](#getdevmode)|Recupera il `DEVMODE` struttura.|  
|[CPrintDialogEx::GetDriverName](#getdrivername)|Recupera il nome del driver di dispositivo stampante definita dal sistema.|  
|[CPrintDialogEx::GetPortName](#getportname)|Recupera il nome della porta di stampante selezionata.|  
|[CPrintDialogEx::GetPrinterDC](#getprinterdc)|Recupera un handle per il contesto di dispositivo stampante.|  
|[CPrintDialogEx::PrintAll](#printall)|Determina se stampare tutte le pagine del documento.|  
|[CPrintDialogEx::PrintCollate](#printcollate)|Determina se confrontati copie sono richiesti.|  
|[CPrintDialogEx::PrintCurrentPage](#printcurrentpage)|Determina se stampare la pagina corrente del documento.|  
|[CPrintDialogEx::PrintRange](#printrange)|Determina se stampare solo un intervallo di pagine specificato.|  
|[CPrintDialogEx::PrintSelection](#printselection)|Determina se stampare solo gli elementi attualmente selezionati.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPrintDialogEx::m_pdex](#m_pdex)|Una struttura utilizzata per personalizzare un `CPrintDialogEx` oggetto.|  
  
## <a name="remarks"></a>Note  
 È possibile basarsi su framework per gestire molti aspetti del processo di stampa per l'applicazione. Per ulteriori informazioni sull'utilizzo di framework per gestire le attività di stampa, vedere l'articolo [stampa](../../mfc/printing.md).  
  
 Se si desidera l'applicazione per gestire la stampa senza coinvolgere del framework, è possibile utilizzare il `CPrintDialogEx` con il costruttore fornito "così com'è", oppure è possibile derivare la propria classe di finestra di dialogo da `CPrintDialogEx` e scrivere un costruttore in base alle esigenze. In entrambi i casi, queste finestre di dialogo si comportano come finestre di dialogo MFC standard perché vengono derivati dalla classe `CCommonDialog`.  
  
 Per utilizzare un `CPrintDialogEx` oggetto, creare innanzitutto l'oggetto utilizzando il `CPrintDialogEx` costruttore. Una volta la finestra di dialogo è stata creata, è possibile impostare o modificare i valori di [m_pdex](#m_pdex) struttura per inizializzare i valori dei controlli della finestra di dialogo. Il `m_pdex` struttura è di tipo [PRINTDLGEX](http://msdn.microsoft.com/library/windows/desktop/ms646844). Per ulteriori informazioni su tale struttura, vedi il Windows SDK.  
  
 Se non si fornisce i proprio handle `m_pdex` per il **hDevMode** e **hDevNames** membri, assicurarsi di chiamare la funzione Windows **GlobalFree** per i punti di controllo al termine con la finestra di dialogo.  
  
 Dopo l'inizializzazione di controlli di finestra di dialogo, chiamare il `DoModal` funzione membro per visualizzare la finestra di dialogo e consentire all'utente di selezionare le opzioni di stampa. Quando `DoModal` viene restituito, è possibile determinare se l'utente ha selezionato il pulsante OK, applica o Annulla.  
  
 Se l'utente ha premuto OK, è possibile utilizzare `CPrintDialogEx`di funzioni membro per recuperare le informazioni di input dall'utente.  
  
 Il `CPrintDialogEx::GetDefaults` membro funzione è utile per recuperare le impostazioni predefinite della stampante senza visualizzare una finestra di dialogo. Questo metodo è necessario alcun intervento dell'utente.  
  
 È possibile utilizzare le finestre **CommDlgExtendedError** funzione per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per ulteriori informazioni sull'errore. Per ulteriori informazioni su questa funzione, vedi il Windows SDK.  
  
 Per ulteriori informazioni sull'utilizzo `CPrintDialogEx`, vedere [classi di finestre di dialogo comuni](../../mfc/common-dialog-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 `IObjectWithSite`  
  
 `IPrintDialogCallback`  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `CPrintDialogEx`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdlgs. h  
  
##  <a name="cprintdialogex"></a>  CPrintDialogEx::CPrintDialogEx  
 Costruisce una finestra delle proprietà di stampa Windows.  
  
```  
CPrintDialogEx(
    DWORD dwFlags = PD_ALLPAGES | PD_USEDEVMODECOPIES | PD_NOPAGENUMS       | PD_HIDEPRINTTOFILE | PD_NOSELECTION | PD_NOCURRENTPAGE,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `dwFlags`  
 Uno o più flag che è possibile utilizzare per personalizzare le impostazioni nella finestra di dialogo, combinati utilizzando l'operatore OR bit per bit. Ad esempio, il **PD_ALLPAGES** flag imposta l'intervallo di stampa predefinite per tutte le pagine del documento. Vedere il [PRINTDLGEX](http://msdn.microsoft.com/library/windows/desktop/ms646844) struttura in Windows SDK per ulteriori informazioni su questi flag.  
  
 `pParentWnd`  
 Puntatore alla finestra padre o proprietaria della finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro solo costruisce l'oggetto. Utilizzare il `DoModal` funzione membro per visualizzare la finestra di dialogo.  
  
##  <a name="createprinterdc"></a>  CPrintDialogEx::CreatePrinterDC  
 Crea un contesto di dispositivo stampante (DC) dal [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) e [DEVNAMES](../../mfc/reference/devnames-structure.md) strutture.  
  
```  
HDC CreatePrinterDC();
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle per il contesto di dispositivo stampante appena creato.  
  
### <a name="remarks"></a>Note  
 Il controller di dominio restituito viene archiviato nel **hDC** membro di [m_pdex](#m_pdex).  
  
 Si presuppone che il controller di dominio sia la stampante corrente controller di dominio e qualsiasi altro ottenuto in precedenza stampante che i controller di dominio deve essere eliminato. Questa funzione può essere chiamata e il controller di dominio risultante utilizzato, senza visualizzare mai la finestra di dialogo Stampa.  
  
##  <a name="domodal"></a>  CPrintDialogEx::DoModal  
 Chiamare questa funzione per visualizzare la finestra delle proprietà di stampa di Windows e consentire all'utente di selezionare varie opzioni di stampa, ad esempio il numero di copie, intervallo di pagine, e se devono essere collazionate copie.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il INT_PTR valore restituito è effettivamente un valore HRESULT. Vedere la sezione valori restituiti in [PrintDlgEx](http://msdn.microsoft.com/library/windows/desktop/ms646942) in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Se si desidera inizializzare le varie opzioni della finestra di dialogo Stampa impostando i membri del `m_pdex` struttura, è consigliabile farlo prima di chiamare `DoModal`, ma dopo che l'oggetto finestra di dialogo.  
  
 Dopo la chiamata `DoModal`, è possibile chiamare le funzioni per recuperare le impostazioni o input informazioni dall'utente nella finestra di dialogo altri membri.  
  
 Se il **PD_RETURNDC** flag viene utilizzato quando si chiama `DoModal`, verrà restituita una controller di dominio della stampante il **hDC** membro di [m_pdex](#m_pdex). Il controller di dominio deve essere liberata con una chiamata a [DeleteDC](http://msdn.microsoft.com/library/windows/desktop/dd183533) dal chiamante di `CPrintDialogEx`.  
  
##  <a name="getcopies"></a>  CPrintDialogEx::GetCopies  
 Chiamare questa funzione dopo la chiamata `DoModal` per recuperare il numero di copie richieste.  
  
```  
int GetCopies() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di copie richieste.  
  
##  <a name="getdefaults"></a>  CPrintDialogEx::GetDefaults  
 Chiamare questa funzione per recuperare le impostazioni predefinite del dispositivo della stampante predefinita senza visualizzare una finestra di dialogo.  
  
```  
BOOL GetDefaults();
```  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se l'operazione riesce, in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Crea un contesto di dispositivo stampante (DC) dal [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) e [DEVNAMES](../../mfc/reference/devnames-structure.md) strutture.  
  
 `GetDefaults` non viene visualizzata la finestra delle proprietà di stampa. Invece, viene impostato il **hDevNames** e **hDevMode** i membri di [m_pdex](#m_pdex) agli handle per il [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) e [DEVNAMES ](../../mfc/reference/devnames-structure.md) strutture che vengono inizializzate per la stampante predefinita di sistema. Entrambi **hDevNames** e **hDevMode** devono essere NULL o `GetDefaults` ha esito negativo.  
  
 Se il **PD_RETURNDC** flag è impostato, questa funzione non restituirà solo **hDevNames** e **hDevMode** (si trova **m_pdex.hDevNames** e **m_pdex.hDevMode**) al chiamante, ma restituirà anche una stampante in **m_pdex.hDC**. È responsabilità del chiamante per eliminare la stampante e chiamare Windows [GlobalFree](http://msdn.microsoft.com/library/windows/desktop/aa366579) funzione su handle quando si è concluso il `CPrintDialogEx` oggetto.  
  
##  <a name="getdevicename"></a>  CPrintDialogEx::GetDeviceName  
 Chiamare questa funzione dopo la chiamata [DoModal](#domodal) per recuperare il nome della stampante attualmente selezionata o dopo la chiamata [GetDefaults](#getdefaults) per recuperare il nome della stampante predefinita.  
  
```  
CString GetDeviceName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nome della stampante attualmente selezionata.  
  
### <a name="remarks"></a>Note  
 Utilizzare un puntatore al `CString` oggetto restituito da `GetDeviceName` come valore di `lpszDeviceName` in una chiamata a [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).  
  
##  <a name="getdevmode"></a>  CPrintDialogEx::GetDevMode  
 Chiamare questa funzione dopo la chiamata [DoModal](#domodal) o [GetDefaults](#getdefaults) per recuperare le informazioni relative al dispositivo di stampa.  
  
```  
LPDEVMODE GetDevMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) struttura dei dati, che contiene informazioni sull'inizializzazione di dispositivo e l'ambiente di un driver di stampato. È necessario sbloccare la memoria utilizzata da questa struttura con Windows [GlobalUnlock](http://msdn.microsoft.com/library/windows/desktop/aa366595) funzione, come descritto in Windows SDK.  
  
##  <a name="getdrivername"></a>  CPrintDialogEx::GetDriverName  
 Chiamare questa funzione dopo la chiamata [DoModal](#domodal) o [GetDefaults](#getdefaults) per recuperare il nome del driver di dispositivo stampante definita dal sistema.  
  
```  
CString GetDriverName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` specificando il nome del driver definiti dal sistema.  
  
### <a name="remarks"></a>Note  
 Utilizzare un puntatore al `CString` oggetto restituito da `GetDriverName` come valore di `lpszDriverName` in una chiamata a [CDC::CreateDC](../../mfc/reference/cdc-class.md#createdc).  
  
##  <a name="getportname"></a>  CPrintDialogEx::GetPortName  
 Chiamare questa funzione dopo la chiamata [DoModal](#domodal) o [GetDefaults](#getdefaults) per recuperare il nome della porta di stampante selezionata.  
  
```  
CString GetPortName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nome della porta di stampante selezionata.  
  
##  <a name="getprinterdc"></a>  CPrintDialogEx::GetPrinterDC  
 Restituisce un handle per il contesto di dispositivo stampante.  
  
```  
HDC GetPrinterDC() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle per il contesto di dispositivo stampante.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare Windows [DeleteDC](http://msdn.microsoft.com/library/windows/desktop/dd183533) funzione per eliminare il contesto di dispositivo al termine utilizzarlo.  
  
##  <a name="m_pdex"></a>  CPrintDialogEx::m_pdex  
 Struttura PRINTDLGEX i cui membri archiviano le caratteristiche dell'oggetto finestra di dialogo.  
  
```  
PRINTDLGEX m_pdex;  
```  
  
### <a name="remarks"></a>Note  
 Al termine della creazione un `CPrintDialogEx` dell'oggetto, è possibile utilizzare `m_pdex` per impostare i vari aspetti della finestra di dialogo prima di chiamare il [DoModal](#domodal) funzione membro. Per ulteriori informazioni sul `m_pdex` struttura, vedere [PRINTDLGEX](http://msdn.microsoft.com/library/windows/desktop/ms646844) in Windows SDK.  
  
 Se si modifica il `m_pdex` (membro dati) direttamente, si eseguirà l'override di alcun comportamento predefinito.  
  
##  <a name="printall"></a>  CPrintDialogEx::PrintAll  
 Chiamare questa funzione dopo la chiamata `DoModal` per determinare se stampare tutte le pagine del documento.  
  
```  
BOOL PrintAll() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se tutte le pagine del documento devono essere stampati; in caso contrario **FALSE**.  
  
##  <a name="printcollate"></a>  CPrintDialogEx::PrintCollate  
 Chiamare questa funzione dopo la chiamata `DoModal` per determinare se la stampante deve collate stampate tutte le copie del documento.  
  
```  
BOOL PrintCollate() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se l'utente seleziona la casella di controllo collate nella finestra di dialogo; in caso contrario **FALSE**.  
  
##  <a name="printcurrentpage"></a>  CPrintDialogEx::PrintCurrentPage  
 Chiamare questa funzione dopo la chiamata `DoModal` per determinare se stampare la pagina corrente nel documento.  
  
```  
BOOL PrintCurrentPage() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se **stampare pagina corrente** è selezionata nella finestra di dialogo Stampa; in caso contrario **FALSE**.  
  
##  <a name="printrange"></a>  CPrintDialogEx::PrintRange  
 Chiamare questa funzione dopo la chiamata `DoModal` per determinare se visualizzare solo un intervallo di pagine del documento.  
  
```  
BOOL PrintRange() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se solo un intervallo di pagine nel documento vengono stampate; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Gli intervalli di pagine specificato possono essere determinati da [m_pdex](#m_pdex) (vedere **nPageRanges**, **nMaxPageRanges**, e **lpPageRanges** nel [ PRINTDLGEX](http://msdn.microsoft.com/library/windows/desktop/ms646844) struttura in Windows SDK).  
  
##  <a name="printselection"></a>  CPrintDialogEx::PrintSelection  
 Chiamare questa funzione dopo la chiamata `DoModal` per determinare se visualizzare solo gli elementi attualmente selezionati.  
  
```  
BOOL PrintSelection() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se solo gli elementi selezionati devono essere stampati; in caso contrario **FALSE**.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Struttura CPrintInfo](../../mfc/reference/cprintinfo-structure.md)
