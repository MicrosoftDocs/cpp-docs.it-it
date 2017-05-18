---
title: Classe CKeyboardManager | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CKeyboardManager
- AFXKEYBOARDMANAGER/CKeyboardManager
- AFXKEYBOARDMANAGER/CKeyboardManager::CKeyboardManager
- AFXKEYBOARDMANAGER/CKeyboardManager::CleanUp
- AFXKEYBOARDMANAGER/CKeyboardManager::FindDefaultAccelerator
- AFXKEYBOARDMANAGER/CKeyboardManager::IsKeyHandled
- AFXKEYBOARDMANAGER/CKeyboardManager::IsKeyPrintable
- AFXKEYBOARDMANAGER/CKeyboardManager::IsShowAllAccelerators
- AFXKEYBOARDMANAGER/CKeyboardManager::LoadState
- AFXKEYBOARDMANAGER/CKeyboardManager::ResetAll
- AFXKEYBOARDMANAGER/CKeyboardManager::SaveState
- AFXKEYBOARDMANAGER/CKeyboardManager::ShowAllAccelerators
- AFXKEYBOARDMANAGER/CKeyboardManager::TranslateCharToUpper
- AFXKEYBOARDMANAGER/CKeyboardManager::UpdateAccelTable
dev_langs:
- C++
helpviewer_keywords:
- CKeyboardManager class
ms.assetid: 4809ece6-89df-4479-8b53-9bf476ee107b
caps.latest.revision: 33
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: bbe12d2bf4af0008233df25e09f09008c402ee7f
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ckeyboardmanager-class"></a>Classe CKeyboardManager
Gestisce le tabelle di tasti di scelta rapida per la finestra cornice principale e le finestre cornice figlio.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CKeyboardManager : public CObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CKeyboardManager::CKeyboardManager](#ckeyboardmanager)|Costruisce un oggetto `CKeyboardManager`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CKeyboardManager::CleanUp](#cleanup)|Cancella le tabelle di tasti di scelta rapida.|  
|[CKeyboardManager::FindDefaultAccelerator](#finddefaultaccelerator)|Recupera il tasto di scelta rapida predefiniti per la finestra di comando specificato.|  
|[CKeyboardManager::IsKeyHandled](#iskeyhandled)|Determina se una chiave viene gestita dalla tabella di tasti di scelta rapida.|  
|[CKeyboardManager::IsKeyPrintable](#iskeyprintable)|Indica se un carattere stampabile.|  
|[CKeyboardManager::IsShowAllAccelerators](#isshowallaccelerators)|Indica se i menu mostrano tutti i tasti di scelta rapida per un comando o solo il tasto di scelta rapida predefiniti.|  
|[CKeyboardManager::LoadState](#loadstate)|Carica le tabelle di tasti di scelta rapida dal Registro di sistema.|  
|[CKeyboardManager::ResetAll](#resetall)|Ricarica le tabelle di tasti di scelta rapida dalla risorsa di applicazione.|  
|[CKeyboardManager::SaveState](#savestate)|Salva il collegamento tabelle chiave del Registro di sistema.|  
|[CKeyboardManager::ShowAllAccelerators](#showallaccelerators)|Specifica se il framework Visualizza tutti i tasti di scelta rapida per tutti i comandi o una singola combinazione di tasti per ogni comando. Questo metodo non influisce sui comandi che hanno un solo tasto di scelta rapida.|  
|[CKeyboardManager::TranslateCharToUpper](#translatechartoupper)|Converte un carattere per il proprio registro superiore.|  
|[CKeyboardManager::UpdateAccelTable](#updateacceltable)|Aggiorna una tabella di tasti di scelta rapida con una nuova tabella di tasti di scelta rapida.|  
  
## <a name="remarks"></a>Note  
 I membri di questa classe consentono di salvare e caricare le tabelle di tasti di scelta rapida per il Registro di sistema di Windows, utilizzare un modello per aggiornare le tabelle di tasti di scelta rapida e individuare il tasto di scelta rapida predefiniti per un comando in una finestra cornice. Inoltre, il `CKeyboardManager` oggetto consente di controllare la modalità di visualizzazione di tasti di scelta rapida per l'utente.  
  
 Non è necessario creare un `CKeyboardManager` oggetto manualmente. Verrà creato automaticamente dal framework dell'applicazione. Tuttavia, è necessario chiamare [CWinAppEx::InitKeyboardManager](../../mfc/reference/cwinappex-class.md#initkeyboardmanager) durante il processo di inizializzazione dell'applicazione. Per ottenere un puntatore al gestore della tastiera per l'applicazione, chiamare [CWinAppEx::GetKeyboardManager](../../mfc/reference/cwinappex-class.md#getkeyboardmanager).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come recuperare un puntatore a un `CKeyboardManager` dell'oggetto da un `CWinAppEx` classe e come visualizzare tutti i tasti di scelta rapida associati i comandi di menu. Questo frammento di codice fa parte di [esempio pagine personalizzate](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_CustomPages n.&5;](../../mfc/reference/codesnippet/cpp/ckeyboardmanager-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxkeyboardmanager.h  
  
##  <a name="ckeyboardmanager"></a>CKeyboardManager::CKeyboardManager  
 Costruisce un oggetto `CKeyboardManager`.  
  
```  
CKeyboardManager();
```  
  
### <a name="remarks"></a>Note  
 Nella maggior parte dei casi, non è necessario creare un `CKeyboardManager` direttamente. Per impostazione predefinita, il framework crea uno. Per ottenere un puntatore per il `CKeyboardManager`, chiamare [CWinAppEx::GetKeyboardManager](../../mfc/reference/cwinappex-class.md#getkeyboardmanager). Se si crea uno manualmente, è necessario inizializzarlo con il metodo [CWinAppEx::InitKeyboardManager](../../mfc/reference/cwinappex-class.md#initkeyboardmanager).  
  
##  <a name="cleanup"></a>CKeyboardManager::CleanUp  
 Libera la `CKeyboardManager` risorse e Cancella tutti i mapping dei tasti di scelta rapida.  
  
```  
static void CleanUp();
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sui tasti di scelta rapida, vedere [personalizzazione di tastiera e Mouse](../../mfc/keyboard-and-mouse-customization.md).  
  
 Non è necessario chiamare questa funzione alla chiusura dell'applicazione perché il framework chiama automaticamente durante la chiusura dell'applicazione.  
  
##  <a name="finddefaultaccelerator"></a>CKeyboardManager::FindDefaultAccelerator  
 Recupera il tasto di scelta rapida predefiniti per la finestra di comando specificato.  
  
```  
static BOOL FindDefaultAccelerator(
    UINT uiCmd,  
    CString& str,  
    CFrameWnd* pWndFrame,  
    BOOL bIsDefaultFrame);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 ID di comando.  
  
 [out] `str`  
 Riferimento a un oggetto `CString`.  
  
 [in] `pWndFrame`  
 Un puntatore a una finestra cornice.  
  
 [in] `bIsDefaultFrame`  
 Specifica se la finestra cornice è la finestra cornice predefinito.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se viene trovato lo scelta rapida. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo cerca il comando specificato da `uiCmd` e recupera il tasto di scelta rapida predefiniti. Quindi il metodo accetta la stringa associata a questo tasto di scelta rapida e scrive il valore per il `str` parametro.  
  
##  <a name="iskeyhandled"></a>CKeyboardManager::IsKeyHandled  
 Determina se la chiave specificata è gestita mediante il [CKeyboardManager classe](../../mfc/reference/ckeyboardmanager-class.md).  
  
```  
static BOOL __stdcall IsKeyHandled(
    WORD nKey,  
    BYTE fVirt,  
    CFrameWnd* pWndFrame,  
    BOOL bIsDefaultFrame);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] `nKey`|Tasto da controllare.|  
|[in] `fVirt`|Specifica il comportamento del tasto di scelta rapida. Per un elenco di valori possibili, vedere [acceleratore struttura](http://msdn.microsoft.com/library/windows/desktop/ms646340).|  
|[in] `pWndFrame`|Una finestra cornice. Questo metodo determina se un tasto di scelta rapida è gestito nel frame.|  
|[in] `bIsDefaultFrame`|Un parametro booleano che indica se `pWndFrame` è la finestra cornice predefinito.|  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se viene gestito il tasto di scelta rapida. `FALSE`Se la chiave non è gestita o `pWndFrame` è `NULL`.  
  
### <a name="remarks"></a>Note  
 I parametri di input devono corrispondere alla voce nella relativa tabella sia per `nKey` e `fVirt` per determinare se un tasto di scelta rapida viene gestito in `pWndFrame`.  
  
##  <a name="iskeyprintable"></a>CKeyboardManager::IsKeyPrintable  
 Indica se un carattere stampabile.  
  
```  
static BOOL __stdcall IsKeyPrintable(const UINT nChar);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] `nChar`|Il carattere che questo metodo controlla.|  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il carattere è stampabile, zero se non lo è.  
  
### <a name="remarks"></a>Note  
 Questo metodo non riesce se una chiamata a [GetKeyboardState](http://msdn.microsoft.com/library/windows/desktop/ms646299) ha esito negativo.  
  
##  <a name="isshowallaccelerators"></a>CKeyboardManager::IsShowAllAccelerators  
 Indica se i menu mostrano tutti i tasti di scelta rapida associati i comandi di menu o solo i tasti di scelta rapida predefiniti.  
  
```  
static BOOL IsShowAllAccelerators();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'applicazione sono elencati tutti i tasti di scelta rapida per i comandi di menu; 0 se l'applicazione visualizza solo i tasti di scelta rapida predefiniti.  
  
### <a name="remarks"></a>Note  
 L'applicazione sono elencati i tasti di scelta rapida per i comandi di menu nella barra dei menu. Utilizzare la funzione [CKeyboardManager::ShowAllAccelerators](#showallaccelerators) per controllare se l'applicazione elenca tutti i tasti di scelta rapida o solo i tasti di scelta rapida predefiniti.  
  
##  <a name="loadstate"></a>CKeyboardManager::LoadState  
 Carica le tabelle di tasti di scelta rapida dal Registro di sistema.  
  
```  
BOOL LoadState(
    LPCTSTR lpszProfileName = NULL,  
    CFrameWnd* pDefaultFrame = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 Il percorso del Registro di sistema in cui `CKeyboardManager` i dati vengono salvati.  
  
 [in] `pDefaultFrame`  
 Un puntatore a una finestra cornice da utilizzare come finestra predefinita.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se lo stato è stato caricato correttamente o 0.  
  
### <a name="remarks"></a>Note  
 Se il `lpszProfileName` parametro `NULL`, questo metodo controlla il percorso del Registro di sistema predefinito `CKeyboardManager` dati. Viene specificato il percorso del Registro di sistema predefinito per il [CWinAppEx Class](../../mfc/reference/cwinappex-class.md). I dati devono essere scritti in precedenza con il metodo [CKeyboardManager::SaveState](#savestate).  
  
 Se non si specifica una finestra predefinita, verrà utilizzata la finestra cornice principale dell'applicazione.  
  
##  <a name="resetall"></a>CKeyboardManager::ResetAll  
 Ricarica le tabelle di tasti di scelta rapida dalla risorsa di applicazione.  
  
```  
void ResetAll();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione Cancella i collegamenti memorizzati nel `CKeyboardManager` istanza. Quindi ricaricherà lo stato del gestore della tastiera dalla risorsa di applicazione.  
  
##  <a name="savestate"></a>CKeyboardManager::SaveState  
 Salva il collegamento tabelle chiave del Registro di sistema.  
  
```  
BOOL SaveState(
    LPCTSTR lpszProfileName = NULL,  
    CFrameWnd* pDefaultFrame = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszProfileName`  
 Il percorso del Registro di sistema per il salvataggio di `CKeyboardManager` dello stato.  
  
 [in] `pDefaultFrame`  
 Un puntatore a una finestra cornice che diventa la finestra predefinita.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è stato salvato correttamente, lo stato di gestione della tastiera o 0 in caso contrario.  
  
### <a name="remarks"></a>Note  
 Se il `lpszProfileName` parametro `NULL`, scriverà questo metodo il `CKeyboardManager` dello stato per il percorso predefinito specificato per il [CWinAppEx Class](../../mfc/reference/cwinappex-class.md). Se si specifica un percorso, è possibile caricare i dati in un secondo momento utilizzando il metodo [CKeyboardManager::LoadState](#loadstate).  
  
 Se non si specifica una finestra predefinita, la finestra cornice principale verrà utilizzata come finestra predefinita.  
  
##  <a name="showallaccelerators"></a>CKeyboardManager::ShowAllAccelerators  
 Mostra tutti i tasti di scelta rapida associati i comandi di menu.  
  
```  
static void ShowAllAccelerators(
    BOOL bShowAll = TRUE,  
    LPCTSTR lpszDelimiter = _afxDefaultAcceleratorDelimiter);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bShowAll`  
 Se `true`, verranno visualizzati tutti i tasti di scelta rapida. Se `false`, verrà visualizzato solo il primo tasto di scelta rapida.  
  
 [in] `lpszDelimiter`  
 Stringa da inserire tra i tasti di scelta rapida. Il delimitatore non ha alcun effetto se un tasto di scelta rapida viene visualizzato solo una.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, se un comando è associato più di un tasto di scelta rapida verrà visualizzato solo il primo tasto di scelta rapida. Questa funzione consente di elencare tutti i tasti di scelta rapida associati a tutti i comandi.  
  
 Verranno elencati i tasti di scelta rapida accanto al comando nella barra dei menu. Se vengono visualizzati tutti i tasti di scelta rapida, la stringa fornita da `lpszDelimiter` per separare i tasti di scelta rapida singoli.  
  
##  <a name="translatechartoupper"></a>CKeyboardManager::TranslateCharToUpper  
 Converte un carattere per il proprio registro superiore.  
  
```  
static UINT TranslateCharToUpper(const UINT nChar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nChar`  
 Carattere da convertire.  
  
### <a name="return-value"></a>Valore restituito  
 Il carattere che è il registro superiore del parametro di input.  
  
##  <a name="updateacceltable"></a>CKeyboardManager::UpdateAccelTable  
 Aggiorna una tabella di tasti di scelta rapida con una nuova tabella di tasti di scelta rapida.  
  
```  
BOOL UpdateAccelTable(
    CMultiDocTemplate* pTemplate,  
    LPACCEL lpAccel,  
    int nSize,  
    CFrameWnd* pDefaultFrame = NULL);

 
BOOL UpdateAccelTable(
    CMultiDocTemplate* pTemplate,  
    HACCEL hAccelNew,  
    CFrameWnd* pDefaultFrame = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pTemplate`  
 Un puntatore a un modello di documento.  
  
 [in] `lpAccel`  
 Puntatore al nuovo tasto di scelta rapida.  
  
 [in] `nSize`  
 Le dimensioni della nuova tabella di collegamento.  
  
 [in] `pDefaultFrame`  
 Puntatore alla finestra cornice predefinito.  
  
 [in] `hAccelNew`  
 Handle per la nuova tabella di collegamento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per sostituire la tabella di collegamento esistente con nuovi tasti di scelta rapida per più oggetti della finestra cornice. La funzione riceve un modello di documento come parametro per ottenere l'accesso a tutti gli oggetti di finestra cornice connesso al modello di documento specificato.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CWinAppEx](../../mfc/reference/cwinappex-class.md)   
 [CWinAppEx::InitKeyboardManager](../../mfc/reference/cwinappex-class.md#initkeyboardmanager)   
 [Personalizzazione di tastiera e Mouse](../../mfc/keyboard-and-mouse-customization.md)




