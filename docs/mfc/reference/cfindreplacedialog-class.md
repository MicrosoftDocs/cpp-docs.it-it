---
title: Classe CFindReplaceDialog. | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CFindReplaceDialog
- AFXDLGS/CFindReplaceDialog
- AFXDLGS/CFindReplaceDialog::CFindReplaceDialog
- AFXDLGS/CFindReplaceDialog::Create
- AFXDLGS/CFindReplaceDialog::FindNext
- AFXDLGS/CFindReplaceDialog::GetFindString
- AFXDLGS/CFindReplaceDialog::GetNotifier
- AFXDLGS/CFindReplaceDialog::GetReplaceString
- AFXDLGS/CFindReplaceDialog::IsTerminating
- AFXDLGS/CFindReplaceDialog::MatchCase
- AFXDLGS/CFindReplaceDialog::MatchWholeWord
- AFXDLGS/CFindReplaceDialog::ReplaceAll
- AFXDLGS/CFindReplaceDialog::ReplaceCurrent
- AFXDLGS/CFindReplaceDialog::SearchDown
- AFXDLGS/CFindReplaceDialog::m_fr
dev_langs:
- C++
helpviewer_keywords:
- CFindReplaceDialog [MFC], CFindReplaceDialog
- CFindReplaceDialog [MFC], Create
- CFindReplaceDialog [MFC], FindNext
- CFindReplaceDialog [MFC], GetFindString
- CFindReplaceDialog [MFC], GetNotifier
- CFindReplaceDialog [MFC], GetReplaceString
- CFindReplaceDialog [MFC], IsTerminating
- CFindReplaceDialog [MFC], MatchCase
- CFindReplaceDialog [MFC], MatchWholeWord
- CFindReplaceDialog [MFC], ReplaceAll
- CFindReplaceDialog [MFC], ReplaceCurrent
- CFindReplaceDialog [MFC], SearchDown
- CFindReplaceDialog [MFC], m_fr
ms.assetid: 610f0b5d-b398-4ef6-8c05-e9d6641e50a8
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ca1d0b5658da375c2202729e6888fa078063beb4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cfindreplacedialog-class"></a>Classe CFindReplaceDialog.
Consente di implementare le finestre di dialogo di ricerca/sostituzione di stringa standard nell'applicazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CFindReplaceDialog : public CCommonDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFindReplaceDialog::CFindReplaceDialog](#cfindreplacedialog)|Chiamare questa funzione per costruire un `CFindReplaceDialog` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFindReplaceDialog::Create](#create)|Crea e visualizza un `CFindReplaceDialog` la finestra di dialogo.|  
|[CFindReplaceDialog::FindNext](#findnext)|Chiamare questa funzione per determinare se l'utente desidera trovare l'occorrenza successiva della stringa di ricerca.|  
|[CFindReplaceDialog::GetFindString](#getfindstring)|Chiamare questa funzione per recuperare la stringa di ricerca corrente.|  
|[CFindReplaceDialog::GetNotifier](#getnotifier)|Chiamare questa funzione per recuperare il **FINDREPLACE** struttura nel gestore di messaggi registrati.|  
|[CFindReplaceDialog::GetReplaceString](#getreplacestring)|Chiamare questa funzione per recuperare la stringa di sostituzione corrente.|  
|[CFindReplaceDialog::IsTerminating](#isterminating)|Chiamare questa funzione per determinare se la finestra di dialogo viene terminato.|  
|[CFindReplaceDialog::MatchCase](#matchcase)|Chiamare questa funzione per determinare se l'utente desidera corrispondere esattamente a quello della stringa di ricerca.|  
|[CFindReplaceDialog::MatchWholeWord](#matchwholeword)|Chiamare questa funzione per determinare se l'utente desidera individuare solo parole intere.|  
|[CFindReplaceDialog::ReplaceAll](#replaceall)|Chiamare questa funzione per determinare se l'utente desidera tutte le occorrenze della stringa da sostituire.|  
|[CFindReplaceDialog::ReplaceCurrent](#replacecurrent)|Chiamare questa funzione per determinare se l'utente richiede la parola corrente da sostituire.|  
|[CFindReplaceDialog::SearchDown](#searchdown)|Chiamare questa funzione per determinare se l'utente desidera eseguire verso il basso la ricerca.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFindReplaceDialog::m_fr](#m_fr)|Una struttura utilizzata per personalizzare un `CFindReplaceDialog` oggetto.|  
  
## <a name="remarks"></a>Note  
 A differenza di altre comuni finestre di dialogo, `CFindReplaceDialog` gli oggetti sono non modali, che consente agli utenti di interagire con altre finestre mentre si trovano sullo schermo. Esistono due tipi di `CFindReplaceDialog` oggetti: trovare le finestre di dialogo e finestre di dialogo Trova e sostituisci. Anche se le finestre di dialogo consentono all'utente di ricerca di input e le stringhe di ricerca e sostituzione, non viene eseguita la ricerca o sostituzione di funzioni. È necessario aggiungerli all'applicazione.  
  
 Per costruire un `CFindReplaceDialog` dell'oggetto, utilizzare il costruttore fornito (che non dispone di argomenti). Poiché si tratta di una finestra di dialogo non modale, allocare l'oggetto sull'heap utilizzando il **nuova** operatore, piuttosto che nello stack.  
  
 Una volta un `CFindReplaceDialog` oggetto è stato creato, è necessario chiamare il [crea](#create) funzione membro per creare e visualizzare la finestra di dialogo.  
  
 Utilizzare il [m_fr](#m_fr) struttura per inizializzare la finestra di dialogo prima di chiamare **crea**. Il `m_fr` struttura è di tipo [FINDREPLACE](http://msdn.microsoft.com/library/windows/desktop/ms646835). Per ulteriori informazioni su tale struttura, vedi il Windows SDK.  
  
 Affinché la finestra padre ricevere una notifica di richieste di ricerca e sostituzione, è necessario utilizzare le finestre [RegisterWindowMessage](http://msdn.microsoft.com/library/windows/desktop/ms644947) funzione e utilizzare il [ON_REGISTERED_MESSAGE](message-map-macros-mfc.md#on_registered_message) macro della mappa messaggi del frame finestra che gestisce il messaggio registrato.  
  
 È possibile determinare se l'utente ha deciso di terminare la finestra di dialogo con la `IsTerminating` funzione membro.  
  
 `CFindReplaceDialog`si basa sul COMMDLG. File DLL che viene fornito con Windows 3.1 e versioni successive.  
  
 Per personalizzare la finestra di dialogo, derivare una classe da `CFindReplaceDialog`, fornire un modello di finestra di dialogo personalizzata e aggiungere una mappa messaggi per elaborare i messaggi di notifica da controlli estesi. Eventuali messaggi non elaborati devono essere passati alla classe di base.  
  
 La funzione hook di personalizzazione non è necessaria.  
  
 Per ulteriori informazioni sull'utilizzo `CFindReplaceDialog`, vedere [classi di finestre di dialogo comuni](../../mfc/common-dialog-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `CFindReplaceDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdlgs. h  
  
##  <a name="cfindreplacedialog"></a>CFindReplaceDialog::CFindReplaceDialog  
 Costruisce un oggetto `CFindReplaceDialog`.  
  
```  
CFindReplaceDialog();
```  
  
### <a name="remarks"></a>Note  
 Poiché il `CFindReplaceDialog` oggetto è una finestra di dialogo non modale, è necessario costruire nell'heap tramite il `new` operatore.  
  
 Durante l'eliminazione, il framework tenta di eseguire un `delete this` sul puntatore per la finestra di dialogo. Se la finestra di dialogo è stato creato nello stack, il `this` puntatore non esiste e potrebbe causare un comportamento indefinito.  
  
 Per ulteriori informazioni sulla costruzione di `CFindReplaceDialog` degli oggetti, vedere il [CFindReplaceDialog](../../mfc/reference/cfindreplacedialog-class.md) Panoramica. Utilizzare il [CFindReplaceDialog::Create](#create) funzione membro per visualizzare la finestra di dialogo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#170](../../mfc/codesnippet/cpp/cfindreplacedialog-class_1.cpp)]  
  
##  <a name="create"></a>CFindReplaceDialog::Create  
 Crea e visualizza una ricerca o ricerca/sostituzione oggetto finestra di dialogo, a seconda del valore di `bFindDialogOnly`.  
  
```  
virtual BOOL Create(
    BOOL bFindDialogOnly,  
    LPCTSTR lpszFindWhat,  
    LPCTSTR lpszReplaceWith = NULL,  
    DWORD dwFlags = FR_DOWN,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `bFindDialogOnly`  
 Impostare questo parametro su `TRUE` per visualizzare un **trovare** la finestra di dialogo. Impostarla su `FALSE` per visualizzare un **ricerca/sostituzione** la finestra di dialogo.  
  
 `lpszFindWhat`  
 Puntatore alla stringa di ricerca predefinito quando viene visualizzata la finestra di dialogo. Se `NULL`, la finestra di dialogo non contiene una stringa di ricerca predefinito.  
  
 `lpszReplaceWith`  
 Puntatore alla stringa di sostituzione predefinito quando viene visualizzata la finestra di dialogo. Se `NULL`, la finestra di dialogo non contiene una stringa di sostituzione predefinito.  
  
 `dwFlags`  
 Uno o più flag che è possibile utilizzare per personalizzare le impostazioni nella finestra di dialogo, combinati utilizzando l'operatore OR bit per bit. Il valore predefinito è `FR_DOWN`, che indica che la ricerca per procedere verso il basso. Vedere il [FINDREPLACE](http://msdn.microsoft.com/library/windows/desktop/ms646835) struttura in Windows SDK per ulteriori informazioni su questi flag.  
  
 `pParentWnd`  
 Puntatore alla finestra padre o proprietaria della finestra di dialogo. Questa è la finestra che verrà visualizzato il messaggio speciale che indica che è richiesta un'azione di ricerca e sostituzione. Se `NULL`, viene utilizzata la finestra principale dell'applicazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto finestra di dialogo è stato creato correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Affinché la finestra padre ricevere una notifica di richieste di ricerca e sostituzione, è necessario utilizzare le finestre [RegisterWindowMessage](http://msdn.microsoft.com/library/windows/desktop/ms644947) funzione il cui valore restituito è un numero di messaggio univoco per l'istanza dell'applicazione. La finestra cornice deve avere una voce della mappa messaggi che dichiara la funzione di callback ( `OnFindReplace` nell'esempio che segue) che gestisce il messaggio registrato. Frammento di codice seguente è riportato un esempio di come eseguire questa operazione per una classe della finestra cornice denominata `CMyRichEditView`:  
  
 [!code-cpp[NVC_MFCDocView#171](../../mfc/codesnippet/cpp/cfindreplacedialog-class_2.h)]  
  
 [!code-cpp[NVC_MFCDocView#172](../../mfc/codesnippet/cpp/cfindreplacedialog-class_3.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#173](../../mfc/codesnippet/cpp/cfindreplacedialog-class_4.cpp)]  
  
 All'interno del `OnFindReplace` funzione, interpretare le intenzioni dell'utente utilizzando il [CFindReplaceDialog::FindNext](#findnext) e [CFindReplaceDialog::IsTerminating](#isterminating) metodi e si crea il codice per le operazioni di ricerca e sostituzione.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFindReplaceDialog::CFindReplaceDialog](#cfindreplacedialog).  
  
##  <a name="findnext"></a>CFindReplaceDialog::FindNext  
 Chiamare questa funzione dalla funzione di callback per determinare se l'utente desidera trovare l'occorrenza successiva della stringa di ricerca.  
  
```  
BOOL FindNext() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente desidera trovare l'occorrenza successiva della stringa di ricerca; in caso contrario 0.  
  
##  <a name="getfindstring"></a>CFindReplaceDialog::GetFindString  
 Chiamare questa funzione dalla funzione di callback per recuperare la stringa predefinita da trovare.  
  
```  
CString GetFindString() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La stringa predefinita da trovare.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#69](../../mfc/codesnippet/cpp/cfindreplacedialog-class_5.cpp)]  
  
##  <a name="getnotifier"></a>CFindReplaceDialog::GetNotifier  
 Chiamare questa funzione per recuperare un puntatore a corrente Sostituisci la finestra di dialogo.  
  
```  
static CFindReplaceDialog* PASCAL GetNotifier(LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 `lParam`  
 Il **lparam** valore passato alla finestra cornice **OnFindReplace** funzione membro.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla finestra di dialogo corrente.  
  
### <a name="remarks"></a>Note  
 E deve essere usato per accedere alla finestra di dialogo, chiamare il relativo membro, funzioni e l'accesso all'interno della funzione di callback di `m_fr` struttura.  
  
### <a name="example"></a>Esempio  
 Vedere [CFindReplaceDialog::Create](#create) per un esempio di come registrare il gestore OnFindReplace per ricevere le notifiche nella finestra di dialogo Sostituisci.  
  
 [!code-cpp[NVC_MFCDocView#69](../../mfc/codesnippet/cpp/cfindreplacedialog-class_5.cpp)]  
  
##  <a name="getreplacestring"></a>CFindReplaceDialog::GetReplaceString  
 Chiamare questa funzione per recuperare la stringa di sostituzione corrente.  
  
```  
CString GetReplaceString() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La stringa predefinita con cui sostituire le stringhe trovate.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFindReplaceDialog::GetFindString](#getfindstring).  
  
##  <a name="isterminating"></a>CFindReplaceDialog::IsTerminating  
 Chiamare questa funzione all'interno della funzione di callback per determinare se l'utente ha deciso di terminare la finestra di dialogo.  
  
```  
BOOL IsTerminating() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente ha deciso di terminare la finestra di dialogo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se questa funzione viene restituito diverso da zero, è necessario chiamare il `DestroyWindow` funzione membro di corrente finestra di dialogo e set di qualsiasi finestra di dialogo variabile puntatore **NULL**. Facoltativamente, è possibile archiviare il testo di ricerca/sostituzione ultima immesso e viene utilizzato per inizializzare la finestra di dialogo di ricerca/sostituzione successiva.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFindReplaceDialog::GetFindString](#getfindstring).  
  
##  <a name="m_fr"></a>CFindReplaceDialog::m_fr  
 Usato per personalizzare un `CFindReplaceDialog` oggetto.  
  
```  
FINDREPLACE m_fr;  
```  
  
### <a name="remarks"></a>Note  
 `m_fr`è una struttura di tipo [FINDREPLACE](http://msdn.microsoft.com/library/windows/desktop/ms646835). I membri di archiviare le caratteristiche dell'oggetto finestra di dialogo. Al termine della creazione un `CFindReplaceDialog` dell'oggetto, è possibile utilizzare `m_fr` per modificare vari valori nella finestra di dialogo.  
  
 Per ulteriori informazioni su tale struttura, vedere il **FINDREPLACE** struttura in Windows SDK.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CFindReplaceDialog::CFindReplaceDialog](#cfindreplacedialog).  
  
##  <a name="matchcase"></a>CFindReplaceDialog::MatchCase  
 Chiamare questa funzione per determinare se l'utente desidera corrispondere esattamente a quello della stringa di ricerca.  
  
```  
BOOL MatchCase() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente desidera individuare le occorrenze della stringa di ricerca che corrispondono esattamente il case della stringa di ricerca; in caso contrario 0.  
  
##  <a name="matchwholeword"></a>CFindReplaceDialog::MatchWholeWord  
 Chiamare questa funzione per determinare se l'utente desidera individuare solo parole intere.  
  
```  
BOOL MatchWholeWord() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente desidera individuare solo le parole intere della stringa di ricerca; in caso contrario 0.  
  
##  <a name="replaceall"></a>CFindReplaceDialog::ReplaceAll  
 Chiamare questa funzione per determinare se l'utente desidera tutte le occorrenze della stringa da sostituire.  
  
```  
BOOL ReplaceAll() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente ha richiesto che tutte le stringhe corrispondenti alla stringa di sostituzione sostituito; in caso contrario 0.  
  
##  <a name="replacecurrent"></a>CFindReplaceDialog::ReplaceCurrent  
 Chiamare questa funzione per determinare se l'utente richiede la parola corrente da sostituire.  
  
```  
BOOL ReplaceCurrent() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente ha richiesto che la stringa attualmente selezionata deve essere sostituita con la stringa di sostituzione. in caso contrario 0.  
  
##  <a name="searchdown"></a>CFindReplaceDialog::SearchDown  
 Chiamare questa funzione per determinare se l'utente desidera eseguire verso il basso la ricerca.  
  
```  
BOOL SearchDown() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente desidera eseguire verso il basso; la ricerca 0 se l'utente desidera eseguire in una direzione verso l'alto la ricerca.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)  
