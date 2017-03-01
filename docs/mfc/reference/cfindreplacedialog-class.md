---
title: Classe CFindReplaceDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CFindReplaceDialog
dev_langs:
- C++
helpviewer_keywords:
- text searches, replacing text
- text searches, CFindReplaceDialog class
- Find/Replace dialog box
- replacing text, CFindReplaceDialog class
- CFindReplaceDialog class
- replacing text
ms.assetid: 610f0b5d-b398-4ef6-8c05-e9d6641e50a8
caps.latest.revision: 25
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 510f6a763dbacb7d4e1b14ea808a4baaaf3d6bf3
ms.lasthandoff: 02/24/2017

---
# <a name="cfindreplacedialog-class"></a>Classe CFindReplaceDialog.
Consente di implementare le finestre di dialogo Trova/Sostituisci stringhe standard in un'applicazione.  
  
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
|[CFindReplaceDialog::IsTerminating](#isterminating)|Chiamare questa funzione per determinare se la finestra di dialogo sta terminando.|  
|[CFindReplaceDialog::MatchCase](#matchcase)|Chiamare questa funzione per determinare se l'utente desidera corrispondere esattamente a quello della stringa di ricerca.|  
|[CFindReplaceDialog::MatchWholeWord](#matchwholeword)|Chiamare questa funzione per determinare se l'utente desidera individuare solo parole intere.|  
|[CFindReplaceDialog::ReplaceAll](#replaceall)|Chiamare questa funzione per determinare se l'utente desidera tutte le occorrenze della stringa da sostituire.|  
|[CFindReplaceDialog::ReplaceCurrent](#replacecurrent)|Chiamare questa funzione per determinare se l'utente richiede la parola da sostituire.|  
|[CFindReplaceDialog::SearchDown](#searchdown)|Chiamare questa funzione per determinare se l'utente desidera eseguire verso il basso la ricerca.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFindReplaceDialog::m_fr](#m_fr)|Una struttura utilizzata per personalizzare un `CFindReplaceDialog` oggetto.|  
  
## <a name="remarks"></a>Note  
 A differenza di altri comuni finestre di dialogo, `CFindReplaceDialog` gli oggetti sono non modali, consentendo agli utenti di interagire con altre finestre mentre si trovano sullo schermo. Esistono due tipi di `CFindReplaceDialog` oggetti: trovare le finestre di dialogo e finestre di dialogo Trova e sostituisci. Sebbene le finestre di dialogo consentono all'utente di input di ricerca e le stringhe di ricerca e sostituzione, non viene eseguita la ricerca o sostituzione di funzioni. È necessario aggiungerli all'applicazione.  
  
 Per costruire un `CFindReplaceDialog` dell'oggetto, utilizzare il costruttore fornito (che non dispone di argomenti). Poiché si tratta di una finestra di dialogo non modale, allocare l'oggetto heap utilizzando il **nuova** operatore, piuttosto che nello stack.  
  
 Una volta un `CFindReplaceDialog` oggetto è stato costruito, è necessario chiamare il [crea](#create) funzione membro per creare e visualizzare la finestra di dialogo.  
  
 Utilizzare il [m_fr](#m_fr) struttura per inizializzare la finestra di dialogo prima di chiamare **crea**. Il `m_fr` struttura è di tipo [FINDREPLACE](http://msdn.microsoft.com/library/windows/desktop/ms646835). Per ulteriori informazioni su tale struttura, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Affinché la finestra padre ricevere una notifica di richieste di ricerca e sostituzione, è necessario utilizzare Windows [RegisterWindowMessage](http://msdn.microsoft.com/library/windows/desktop/ms644947) funzione e utilizzare il [ON_REGISTERED_MESSAGE](http://msdn.microsoft.com/library/93c1c068-ae8c-4e04-8a60-a603800ab57d) macro della mappa messaggi nella finestra del frame che gestisce il messaggio registrato.  
  
 È possibile determinare se l'utente ha deciso di terminare la finestra di dialogo con il `IsTerminating` funzione membro.  
  
 `CFindReplaceDialog`si basa sul COMMDLG. File DLL fornito con Windows 3.1 e versioni successive.  
  
 Per personalizzare la finestra di dialogo, derivare una classe da `CFindReplaceDialog`, fornire un modello di finestra di dialogo personalizzata e aggiungere una mappa messaggi per elaborare i messaggi di notifica da controlli estesi. Eventuali messaggi non elaborati devono essere passati alla classe di base.  
  
 Personalizzare la funzione hook non è necessaria.  
  
 Per ulteriori informazioni sull'utilizzo di `CFindReplaceDialog`, vedere [classi di finestre di dialogo comuni](../../mfc/common-dialog-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `CFindReplaceDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdlgs. h  
  
##  <a name="a-namecfindreplacedialoga--cfindreplacedialogcfindreplacedialog"></a><a name="cfindreplacedialog"></a>CFindReplaceDialog::CFindReplaceDialog  
 Costruisce un oggetto `CFindReplaceDialog`.  
  
```  
CFindReplaceDialog();
```  
  
### <a name="remarks"></a>Note  
 Poiché il `CFindReplaceDialog` oggetto è una finestra di dialogo non modale, è necessario creare nell'heap mediante il `new` operatore.  
  
 Durante l'eliminazione, il framework tenta di eseguire un `delete this` sul puntatore per la finestra di dialogo. Se è stata creata la finestra di dialogo nello stack, il `this` non esiste alcun puntatore e causare un comportamento non definito.  
  
 Per ulteriori informazioni sulla costruzione di `CFindReplaceDialog` degli oggetti, vedere il [CFindReplaceDialog](../../mfc/reference/cfindreplacedialog-class.md) Panoramica. Utilizzare il [CFindReplaceDialog::Create](#create) funzione membro per visualizzare la finestra di dialogo.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#170;](../../mfc/codesnippet/cpp/cfindreplacedialog-class_1.cpp)]  
  
##  <a name="a-namecreatea--cfindreplacedialogcreate"></a><a name="create"></a>CFindReplaceDialog::Create  
 Crea e visualizza una ricerca o Trova/Sostituisci oggetto finestra di dialogo, a seconda del valore di `bFindDialogOnly`.  
  
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
 Impostare questo parametro su `TRUE` per visualizzare un **trovare** la finestra di dialogo. Impostarlo su `FALSE` per visualizzare un **Trova/Sostituisci** la finestra di dialogo.  
  
 `lpszFindWhat`  
 Puntatore alla stringa di ricerca predefinito quando viene visualizzata la finestra di dialogo. Se `NULL`, la finestra di dialogo non contiene una stringa di ricerca predefinito.  
  
 `lpszReplaceWith`  
 Puntatore alla stringa di sostituzione predefinito quando viene visualizzata la finestra di dialogo. Se `NULL`, la finestra di dialogo non contiene una stringa di sostituzione predefinito.  
  
 `dwFlags`  
 Uno o più flag che è possibile utilizzare per personalizzare le impostazioni nella finestra di dialogo, combinati utilizzando l'operatore OR bit per bit. Il valore predefinito è `FR_DOWN`, che indica che la ricerca deve procedere verso il basso. Vedere il [FINDREPLACE](http://msdn.microsoft.com/library/windows/desktop/ms646835) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)] per ulteriori informazioni su questi flag.  
  
 `pParentWnd`  
 Puntatore alla finestra padre o proprietaria della finestra di dialogo. Si tratta della finestra che verrà visualizzato il messaggio speciale che indica che è richiesta un'azione di ricerca e sostituzione. Se `NULL`, viene utilizzata la finestra principale dell'applicazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto finestra di dialogo è stato creato correttamente; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Affinché la finestra padre ricevere una notifica di richieste di ricerca e sostituzione, è necessario utilizzare Windows [RegisterWindowMessage](http://msdn.microsoft.com/library/windows/desktop/ms644947) funzione il cui valore restituito è un numero di messaggio univoco per l'istanza dell'applicazione. La finestra cornice deve avere una voce della mappa messaggi che dichiara la funzione di callback ( `OnFindReplace` nell'esempio riportato di seguito) che gestisce il messaggio registrato. Nel frammento di codice seguente è riportato un esempio di come eseguire questa operazione per una classe finestra cornice denominata `CMyRichEditView`:  
  
 [!code-cpp[NVC_MFCDocView&#171;](../../mfc/codesnippet/cpp/cfindreplacedialog-class_2.h)]  
  
 [!code-cpp[&#172; NVC_MFCDocView](../../mfc/codesnippet/cpp/cfindreplacedialog-class_3.cpp)]  
  
 [!code-cpp[&#173; NVC_MFCDocView](../../mfc/codesnippet/cpp/cfindreplacedialog-class_4.cpp)]  
  
 All'interno di `OnFindReplace` funzione, interpretare le intenzioni dell'utente utilizzando il [CFindReplaceDialog::FindNext](#findnext) e [CFindReplaceDialog::IsTerminating](#isterminating) metodi e per creare il codice per le operazioni di ricerca e sostituzione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFindReplaceDialog::CFindReplaceDialog](#cfindreplacedialog).  
  
##  <a name="a-namefindnexta--cfindreplacedialogfindnext"></a><a name="findnext"></a>CFindReplaceDialog::FindNext  
 Chiamare questa funzione dalla funzione di callback per determinare se l'utente desidera trovare l'occorrenza successiva della stringa di ricerca.  
  
```  
BOOL FindNext() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente desidera trovare l'occorrenza successiva della stringa di ricerca; in caso contrario 0.  
  
##  <a name="a-namegetfindstringa--cfindreplacedialoggetfindstring"></a><a name="getfindstring"></a>CFindReplaceDialog::GetFindString  
 Chiamare questa funzione dalla funzione di callback per recuperare la stringa predefinita da trovare.  
  
```  
CString GetFindString() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La stringa predefinita da trovare.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#69;](../../mfc/codesnippet/cpp/cfindreplacedialog-class_5.cpp)]  
  
##  <a name="a-namegetnotifiera--cfindreplacedialoggetnotifier"></a><a name="getnotifier"></a>CFindReplaceDialog::GetNotifier  
 Chiamare questa funzione per recuperare un puntatore alla finestra corrente finestra di dialogo Sostituisci.  
  
```  
static CFindReplaceDialog* PASCAL GetNotifier(LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 `lParam`  
 Il **lparam** valore passato alla finestra cornice **OnFindReplace** funzione membro.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla finestra di dialogo corrente.  
  
### <a name="remarks"></a>Note  
 E deve essere utilizzato per accedere alla finestra di dialogo, chiamare il relativo membro funzioni e l'accesso all'interno della funzione di callback di `m_fr` struttura.  
  
### <a name="example"></a>Esempio  
 Vedere [CFindReplaceDialog::Create](#create) per un esempio di come registrare il gestore OnFindReplace per ricevere le notifiche nella finestra di dialogo Sostituisci.  
  
 [!code-cpp[NVC_MFCDocView&#69;](../../mfc/codesnippet/cpp/cfindreplacedialog-class_5.cpp)]  
  
##  <a name="a-namegetreplacestringa--cfindreplacedialoggetreplacestring"></a><a name="getreplacestring"></a>CFindReplaceDialog::GetReplaceString  
 Chiamare questa funzione per recuperare la stringa di sostituzione corrente.  
  
```  
CString GetReplaceString() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 La stringa predefinita da utilizzare per sostituire le stringhe trovate.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFindReplaceDialog::GetFindString](#getfindstring).  
  
##  <a name="a-nameisterminatinga--cfindreplacedialogisterminating"></a><a name="isterminating"></a>CFindReplaceDialog::IsTerminating  
 Chiamare questa funzione all'interno della funzione di callback per determinare se l'utente ha deciso di terminare la finestra di dialogo.  
  
```  
BOOL IsTerminating() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente ha deciso di terminare la finestra di dialogo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se questa funzione restituisce zero, è necessario chiamare il `DestroyWindow` funzione membro la finestra di dialogo e impostare qualsiasi della finestra di dialogo variabile puntatore a **NULL**. Facoltativamente, è possibile archiviare il testo di ricerca e sostituzione ultima immesso e viene utilizzato per inizializzare la finestra di dialogo Trova/Sostituisci successivo.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFindReplaceDialog::GetFindString](#getfindstring).  
  
##  <a name="a-namemfra--cfindreplacedialogmfr"></a><a name="m_fr"></a>CFindReplaceDialog::m_fr  
 Utilizzato per personalizzare un `CFindReplaceDialog` oggetto.  
  
```  
FINDREPLACE m_fr;  
```  
  
### <a name="remarks"></a>Note  
 `m_fr`è una struttura di tipo [FINDREPLACE](http://msdn.microsoft.com/library/windows/desktop/ms646835). I relativi membri memorizzano le caratteristiche dell'oggetto finestra di dialogo. Al termine della creazione un `CFindReplaceDialog` dell'oggetto, è possibile utilizzare `m_fr` per modificare vari valori nella finestra di dialogo.  
  
 Per ulteriori informazioni su tale struttura, vedere il **FINDREPLACE** nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFindReplaceDialog::CFindReplaceDialog](#cfindreplacedialog).  
  
##  <a name="a-namematchcasea--cfindreplacedialogmatchcase"></a><a name="matchcase"></a>CFindReplaceDialog::MatchCase  
 Chiamare questa funzione per determinare se l'utente desidera corrispondere esattamente a quello della stringa di ricerca.  
  
```  
BOOL MatchCase() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente desidera individuare le occorrenze della stringa di ricerca che corrispondono esattamente nel caso della stringa di ricerca; in caso contrario 0.  
  
##  <a name="a-namematchwholeworda--cfindreplacedialogmatchwholeword"></a><a name="matchwholeword"></a>CFindReplaceDialog::MatchWholeWord  
 Chiamare questa funzione per determinare se l'utente desidera individuare solo parole intere.  
  
```  
BOOL MatchWholeWord() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente desidera individuare solo le parole intere della stringa di ricerca; in caso contrario 0.  
  
##  <a name="a-namereplacealla--cfindreplacedialogreplaceall"></a><a name="replaceall"></a>CFindReplaceDialog::ReplaceAll  
 Chiamare questa funzione per determinare se l'utente desidera tutte le occorrenze della stringa da sostituire.  
  
```  
BOOL ReplaceAll() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente ha richiesto che sostituite tutte le stringhe corrispondenti alla stringa di sostituzione; in caso contrario 0.  
  
##  <a name="a-namereplacecurrenta--cfindreplacedialogreplacecurrent"></a><a name="replacecurrent"></a>CFindReplaceDialog::ReplaceCurrent  
 Chiamare questa funzione per determinare se l'utente richiede la parola da sostituire.  
  
```  
BOOL ReplaceCurrent() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente ha richiesto che la stringa selezionata deve essere sostituita con la stringa di sostituzione. in caso contrario 0.  
  
##  <a name="a-namesearchdowna--cfindreplacedialogsearchdown"></a><a name="searchdown"></a>CFindReplaceDialog::SearchDown  
 Chiamare questa funzione per determinare se l'utente desidera eseguire verso il basso la ricerca.  
  
```  
BOOL SearchDown() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente richiede la ricerca per procedere verso il basso; 0 se l'utente richiede la ricerca per procedere verso l'alto.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)  

