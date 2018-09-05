---
title: Classe CPropertyPage | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CPropertyPage
- AFXDLGS/CPropertyPage
- AFXDLGS/CPropertyPage::CPropertyPage
- AFXDLGS/CPropertyPage::CancelToClose
- AFXDLGS/CPropertyPage::Construct
- AFXDLGS/CPropertyPage::GetPSP
- AFXDLGS/CPropertyPage::OnApply
- AFXDLGS/CPropertyPage::OnCancel
- AFXDLGS/CPropertyPage::OnKillActive
- AFXDLGS/CPropertyPage::OnOK
- AFXDLGS/CPropertyPage::OnQueryCancel
- AFXDLGS/CPropertyPage::OnReset
- AFXDLGS/CPropertyPage::OnSetActive
- AFXDLGS/CPropertyPage::OnWizardBack
- AFXDLGS/CPropertyPage::OnWizardFinish
- AFXDLGS/CPropertyPage::OnWizardNext
- AFXDLGS/CPropertyPage::QuerySiblings
- AFXDLGS/CPropertyPage::SetModified
- AFXDLGS/CPropertyPage::m_psp
dev_langs:
- C++
helpviewer_keywords:
- CPropertyPage [MFC], CPropertyPage
- CPropertyPage [MFC], CancelToClose
- CPropertyPage [MFC], Construct
- CPropertyPage [MFC], GetPSP
- CPropertyPage [MFC], OnApply
- CPropertyPage [MFC], OnCancel
- CPropertyPage [MFC], OnKillActive
- CPropertyPage [MFC], OnOK
- CPropertyPage [MFC], OnQueryCancel
- CPropertyPage [MFC], OnReset
- CPropertyPage [MFC], OnSetActive
- CPropertyPage [MFC], OnWizardBack
- CPropertyPage [MFC], OnWizardFinish
- CPropertyPage [MFC], OnWizardNext
- CPropertyPage [MFC], QuerySiblings
- CPropertyPage [MFC], SetModified
- CPropertyPage [MFC], m_psp
ms.assetid: d9000a21-aa81-4530-85d9-f43432afb4dc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 632e8c0039dc0cac35fe46cff1fc539e534f8e20
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43757510"
---
# <a name="cpropertypage-class"></a>Classe CPropertyPage
Rappresenta singole pagine di una finestra delle proprietà, altrimenti nota come finestra di dialogo a schede.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CPropertyPage : public CDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPropertyPage::CPropertyPage](#cpropertypage)|Costruisce un oggetto `CPropertyPage`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPropertyPage::CancelToClose](#canceltoclose)|Modifica il pulsante OK per la lettura di chiusura e disabilita il pulsante Annulla, dopo una modifica nella pagina di una finestra delle proprietà modale non ripristinabile.|  
|[CPropertyPage::Construct](#construct)|Costruisce un oggetto `CPropertyPage`. Usare `Construct` se si desidera specificare i parametri in fase di esecuzione o se si usano le matrici.|  
|[CPropertyPage::GetPSP](#getpsp)|Recupera il Windows [PROPSHEETPAGE](/windows/desktop/api/prsht/ns-prsht-_propsheetpagea_v2) struttura associata la `CPropertyPage` oggetto.|  
|[CPropertyPage::OnApply](#onapply)|Chiamato dal framework quando viene selezionato il pulsante Applica.|  
|[CPropertyPage::OnCancel](#oncancel)|Chiamato dal framework quando si fa clic sul pulsante Annulla.|  
|[CPropertyPage:: OnKillActive](#onkillactive)|Chiamato dal framework quando la pagina corrente non è più la pagina attiva. Eseguire la convalida dei dati.|  
|[CPropertyPage::OnOK](#onok)|Chiamato dal framework quando viene selezionato il OK, applica o Chiudi.|  
|[CPropertyPage::OnQueryCancel](#onquerycancel)|Chiamato dal framework quando si fa clic sul pulsante Annulla e prima che l'annullamento ha avuto luogo.|  
|[CPropertyPage::OnReset](#onreset)|Chiamato dal framework quando si fa clic sul pulsante Annulla.|  
|[CPropertyPage:: OnSetActive](#onsetactive)|Chiamato dal framework quando la pagina diventa la pagina attiva.|  
|[CPropertyPage::OnWizardBack](#onwizardback)|Chiamato dal framework quando si fa clic sul pulsante Indietro durante l'utilizzo di una finestra delle proprietà associata alla procedura guidata.|  
|[CPropertyPage::OnWizardFinish](#onwizardfinish)|Chiamato dal framework quando si fa clic sul pulsante Fine durante l'utilizzo di una finestra delle proprietà associata alla procedura guidata.|  
|[CPropertyPage::OnWizardNext](#onwizardnext)|Chiamato dal framework quando si fa clic sul pulsante Avanti quando si usa una finestra delle proprietà associata alla procedura guidata.|  
|[CPropertyPage::QuerySiblings](#querysiblings)|Inoltra il messaggio a ogni pagina della finestra delle proprietà.|  
|[CPropertyPage:: SetModified](#setmodified)|Chiamare per attivare o disattivare il pulsante Applica.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPropertyPage::m_psp](#m_psp)|Il Windows [PROPSHEETPAGE](/windows/desktop/api/prsht/ns-prsht-_propsheetpagea_v2) struttura. Fornisce accesso ai parametri della pagina proprietà di base.|  
  
## <a name="remarks"></a>Note  
 Come con le finestre di dialogo standard una classe derivata da `CPropertyPage` per ogni pagina nel foglio di proprietà. Per utilizzare `CPropertyPage`-oggetti derivati, creare innanzitutto un [CPropertySheet](../../mfc/reference/cpropertysheet-class.md) dell'oggetto e quindi creare un oggetto per ogni pagina che va inserito nella finestra delle proprietà. Chiamare [CPropertySheet:: addPage](../../mfc/reference/cpropertysheet-class.md#addpage) per ogni pagina nel foglio e quindi visualizzare la finestra delle proprietà chiamando [CPropertySheet:: DoModal](../../mfc/reference/cpropertysheet-class.md#domodal) per una finestra delle proprietà modali, o [CPropertySheet:: Creare](../../mfc/reference/cpropertysheet-class.md#create) per una finestra delle proprietà non modale.  
  
 È possibile creare un tipo di finestra di dialogo scheda chiamato una procedura guidata, che consiste in una finestra delle proprietà con una sequenza di pagine delle proprietà che guidano l'utente tramite i passaggi di un'operazione, ad esempio si configura un dispositivo o la creazione di un notiziario. In una finestra di dialogo Creazione guidata tipo scheda, le pagine delle proprietà non dispongono di schede e pagina solo la proprietà è visibile alla volta. Inoltre, anziché i pulsanti OK e applicare a questo punto, una finestra di dialogo scheda associata alla procedura guidata ha un pulsante Indietro, un pulsante Avanti o fine e un pulsante Annulla.  
  
 Per altre informazioni sulla creazione di una finestra delle proprietà come una procedura guidata, vedere [CPropertySheet:: SetWizardMode](../../mfc/reference/cpropertysheet-class.md#setwizardmode). Per altre informazioni sull'uso `CPropertyPage` oggetti, vedere l'articolo [finestre delle proprietà e pagine delle proprietà](../../mfc/property-sheets-and-property-pages-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 `CPropertyPage`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdlgs. h  
  
##  <a name="canceltoclose"></a>  CPropertyPage::CancelToClose  
 Chiamare questa funzione dopo che è stata apportata una modifica non ripristinabile per i dati in una pagina di una finestra delle proprietà modale.  
  
```  
void CancelToClose();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione Cambia il pulsante OK per chiudere e disabilita il pulsante Annulla. Questa modifica non può essere annullata dall'utente che una modifica è definitiva e le modifiche degli avvisi.  
  
 Il `CancelToClose` funzione membro non esegue alcuna operazione in una finestra delle proprietà non modale, poiché una finestra delle proprietà non modale non dispone di un pulsante Annulla per impostazione predefinita.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CPropertyPage::QuerySiblings](#querysiblings).  
  
##  <a name="construct"></a>  CPropertyPage::Construct  
 Chiamare questa funzione membro per costruire un `CPropertyPage` oggetto.  
  
```  
void Construct(
    UINT nIDTemplate,  
    UINT nIDCaption = 0);

 
void Construct(
    LPCTSTR lpszTemplateName,  
    UINT nIDCaption = 0);

 
void Construct(
    UINT nIDTemplate,  
    UINT nIDCaption,  
    UINT nIDHeaderTitle,  
    UINT nIDHeaderSubTitle = 0);

 
void Construct(
    LPCTSTR lpszTemplateName,  
    UINT nIDCaption,  
    UINT nIDHeaderTitle,  
    UINT nIDHeaderSubTitle = 0);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDTemplate*  
 ID del modello usato per questa pagina.  
  
 *nIDCaption*  
 ID del nome da inserire nella scheda per questa pagina. Se è 0, il nome verrà intraprese dal modello di finestra di dialogo per questa pagina.  
  
 *lpszTemplateName*  
 Contiene una stringa con terminazione null che rappresenta il nome di una risorsa modello.  
  
 *nIDHeaderTitle*  
 ID del nome da inserire nella posizione del titolo dell'intestazione di pagina proprietà. Per impostazione predefinita, 0.  
  
 *nIDHeaderSubTitle*  
 ID del nome da inserire nel percorso sottotitolo dell'intestazione di pagina proprietà. Per impostazione predefinita, 0.  
  
### <a name="remarks"></a>Note  
 L'oggetto viene visualizzato dopo che vengono soddisfatte tutte le condizioni seguenti:  
  
-   La pagina è stato aggiunto a una finestra delle proprietà usando [CPropertySheet:: addPage](../../mfc/reference/cpropertysheet-class.md#addpage).  
  
-   La finestra delle proprietà [DoModal](../../mfc/reference/cpropertysheet-class.md#domodal) oppure [crea](../../mfc/reference/cpropertysheet-class.md#create) funzione è stata chiamata.  
  
-   L'utente ha selezionato (a schede a) in questa pagina.  
  
 Chiamare `Construct` se uno dei costruttori di classe non è stato chiamato. Il `Construct` funzione membro è flessibile poiché è possibile lasciare vuoto l'istruzione di parametro e quindi specificare più parametri e costruzione in qualsiasi punto nel codice.  
  
 È necessario utilizzare `Construct` quando si lavora con le matrici, ed è necessario chiamare `Construct` per ogni membro della matrice in modo che i membri dati vengono assegnati i valori appropriati.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#112](../../mfc/codesnippet/cpp/cpropertypage-class_1.cpp)]  
  
##  <a name="cpropertypage"></a>  CPropertyPage::CPropertyPage  
 Costruisce un oggetto `CPropertyPage`.  
  
```  
CPropertyPage();

 
explicit CPropertyPage(
    UINT nIDTemplate,  
    UINT nIDCaption = 0,  
    DWORD dwSize = sizeof(PROPSHEETPAGE));

 
explicit CPropertyPage(
    LPCTSTR lpszTemplateName,  
    UINT nIDCaption = 0,  
    DWORD dwSize = sizeof(PROPSHEETPAGE));

 
CPropertyPage(
    UINT nIDTemplate,  
    UINT nIDCaption,  
    UINT nIDHeaderTitle,  
    UINT nIDHeaderSubTitle = 0,  
    DWORD dwSize = sizeof(PROPSHEETPAGE));

 
CPropertyPage(
    LPCTSTR lpszTemplateName,  
    UINT nIDCaption,  
    UINT nIDHeaderTitle,  
    UINT nIDHeaderSubTitle = 0,  
    DWORD dwSize = sizeof(PROPSHEETPAGE));
```  
  
### <a name="parameters"></a>Parametri  
 *nIDTemplate*  
 ID del modello usato per questa pagina.  
  
 *nIDCaption*  
 ID del nome da inserire nella scheda per questa pagina. Se è 0, il nome verrà intraprese dal modello di finestra di dialogo per questa pagina.  
  
 *dwSize diverso da*  
 *lpszTemplateName*  
 Punta a una stringa contenente il nome del modello per questa pagina. Non può essere NULL.  
  
 *nIDHeaderTitle*  
 ID del nome da inserire nella posizione del titolo dell'intestazione di pagina proprietà.  
  
 *nIDHeaderSubTitle*  
 ID del nome da inserire nel percorso sottotitolo dell'intestazione di pagina proprietà.  
  
### <a name="remarks"></a>Note  
 L'oggetto viene visualizzato dopo che vengono soddisfatte tutte le condizioni seguenti:  
  
-   La pagina è stato aggiunto a una finestra delle proprietà usando [CPropertySheet:: addPage](../../mfc/reference/cpropertysheet-class.md#addpage).  
  
-   La finestra delle proprietà [DoModal](../../mfc/reference/cpropertysheet-class.md#domodal) oppure [crea](../../mfc/reference/cpropertysheet-class.md#create) funzione è stata chiamata.  
  
-   L'utente ha selezionato (a schede a) in questa pagina.  
  
 Se si dispongono di più parametri (ad esempio, se si usa una matrice), usare [CPropertySheet::Construct](../../mfc/reference/cpropertysheet-class.md#construct) invece di `CPropertyPage`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#113](../../mfc/codesnippet/cpp/cpropertypage-class_2.cpp)]  
  
##  <a name="getpsp"></a>  CPropertyPage::GetPSP  
 Recupera il Windows [PROPSHEETPAGE](/windows/desktop/api/prsht/ns-prsht-_propsheetpagea_v2) struttura associata la `CPropertyPage` oggetto.  
  
```  
const PROPSHEETPAGE& GetPSP() const;  
  
PROPSHEETPAGE& GetPSP();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento al `PROPSHEETPAGE` struttura.  
  
##  <a name="m_psp"></a>  CPropertyPage::m_psp  
 `m_psp` è una struttura i cui membri memorizzare le caratteristiche di [PROPSHEETPAGE](/windows/desktop/api/prsht/ns-prsht-_propsheetpagea_v2).  
  
```  
PROPSHEETPAGE m_psp;  
```  
  
### <a name="remarks"></a>Note  
 Usare questa struttura per inizializzare l'aspetto di una pagina delle proprietà dopo la sua creazione.  
  
 Per altre informazioni su questa struttura, incluso un elenco dei relativi membri, vedere `PROPSHEETPAGE` nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#128](../../mfc/codesnippet/cpp/cpropertypage-class_3.cpp)]  
  
##  <a name="onapply"></a>  CPropertyPage::OnApply  
 Questa funzione membro viene chiamata dal framework quando l'utente sceglie OK o il pulsante Applica.  
  
```  
virtual BOOL OnApply();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se le modifiche vengono accettate; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Quando il framework chiama questa funzione, vengono accettate le modifiche apportate a tutte le pagine delle proprietà nella finestra delle proprietà, la finestra delle proprietà mantiene lo stato attivo, e `OnApply` restituisce TRUE (valore 1). Prima di `OnApply` può essere chiamato dal framework, è necessario avere chiamato [SetModified](#setmodified) e impostare il parametro su TRUE. Non appena l'utente apporta una modifica nella pagina delle proprietà, questo verrà attivato il pulsante Applica.  
  
 Eseguire l'override di questa funzione membro per specificare le azioni che il programma ha quando l'utente fa clic sul pulsante Applica. Quando si esegue l'override, la funzione deve restituire TRUE per accettare le modifiche e FALSE per impedire che le modifiche hanno effetto.  
  
 L'implementazione predefinita di `OnApply` chiamate `OnOK`.  
  
 Per altre informazioni sui messaggi di notifica inviati quando l'utente preme applicare subito o sul pulsante OK nella finestra delle proprietà, vedere [PSN_APPLY](/windows/desktop/Controls/psn-apply) nel SDK di Windows.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CPropertyPage::OnOK](#onok).  
  
##  <a name="oncancel"></a>  CPropertyPage::OnCancel  
 Questa funzione membro viene chiamata dal framework quando si seleziona il pulsante Annulla.  
  
```  
virtual void OnCancel();
```  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per eseguire azioni sul pulsante Annulla. Il valore predefinito NOT logico di tutte le modifiche apportate.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#114](../../mfc/codesnippet/cpp/cpropertypage-class_4.cpp)]  
  
##  <a name="onkillactive"></a>  CPropertyPage:: OnKillActive  
 Questa funzione membro viene chiamata dal framework quando la pagina non è più la pagina attiva.  
  
```  
virtual BOOL OnKillActive();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se i dati è stati aggiornati correttamente, altrimenti 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per eseguire attività di convalida di dati speciali.  
  
 L'implementazione predefinita di questa funzione membro copia le impostazioni dai controlli nella pagina delle proprietà per le variabili membro della pagina delle proprietà. Se i dati non è stati aggiornati correttamente a causa di un errore di convalida (DDV) finestra di dialogo dei dati, la pagina conserva lo stato attivo.  
  
 Dopo che questa funzione membro restituisce correttamente, il framework chiamerà la pagina [OnOK](#onok) (funzione).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#115](../../mfc/codesnippet/cpp/cpropertypage-class_5.cpp)]  
  
##  <a name="onok"></a>  CPropertyPage::OnOK  
 Questa funzione membro viene chiamata dal framework quando l'utente sceglie OK o il pulsante Applica, subito dopo il framework chiama [OnKillActive](#onkillactive).  
  
```  
virtual void OnOK();
```  
  
### <a name="remarks"></a>Note  
 Quando l'utente sceglie OK o il pulsante Applica, il framework riceve la [PSN_APPLY](/windows/desktop/Controls/psn-apply) notifica dalla pagina delle proprietà. La chiamata a `OnOK` non verrà eseguita se si chiama [CPropertySheet::PressButton](../../mfc/reference/cpropertysheet-class.md#pressbutton) perché la pagina delle proprietà non invia la notifica in quel caso.  
  
 Eseguire l'override di questa funzione membro per implementare comportamenti aggiuntivi specifici per la pagina attualmente attiva quando l'utente chiude l'intera finestra delle proprietà.  
  
 L'implementazione predefinita di questa funzione membro Contrassegna pagina come "pulire" in modo da riflettere che i dati sono stati aggiornati nel `OnKillActive` (funzione).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#116](../../mfc/codesnippet/cpp/cpropertypage-class_6.cpp)]  
  
##  <a name="onquerycancel"></a>  CPropertyPage::OnQueryCancel  
 Questa funzione membro viene chiamata dal framework quando l'utente fa clic sul pulsante di annullamento e l'annullamento prima dell'azione è stata eseguita.  
  
```  
virtual BOOL OnQueryCancel();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE per consentire o FALSE per impedire l'operazione di annullamento.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per specificare un'azione che il programma accetta quando l'utente fa clic sul pulsante Annulla.  
  
 L'implementazione predefinita di `OnQueryCancel` restituisce TRUE.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#117](../../mfc/codesnippet/cpp/cpropertypage-class_7.cpp)]  
  
##  <a name="onreset"></a>  CPropertyPage::OnReset  
 Questa funzione membro viene chiamata dal framework quando l'utente sceglie il pulsante Annulla.  
  
```  
virtual void OnReset();
```  
  
### <a name="remarks"></a>Note  
 Quando il framework chiama questa funzione, le modifiche a tutte le pagine di proprietà apportate dall'utente in precedenza scegliendo il pulsante Applica ora vengono eliminate e la finestra delle proprietà mantiene lo stato attivo.  
  
 Eseguire l'override di questa funzione membro per specificare le azioni che il programma accetta quando l'utente fa clic sul pulsante Annulla.  
  
 L'implementazione predefinita di `OnReset` non esegue alcuna operazione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CPropertyPage::OnCancel](#oncancel).  
  
##  <a name="onsetactive"></a>  CPropertyPage:: OnSetActive  
 Questa funzione membro viene chiamata dal framework quando la pagina viene scelto dall'utente e diventa la pagina attiva.  
  
```  
virtual BOOL OnSetActive();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la pagina è stata impostata correttamente attiva. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per eseguire attività quando viene attivata una pagina. In genere l'override di questa funzione membro chiamare la versione predefinita dopo l'aggiornamento dei membri dati, in modo da consentirne aggiornare i controlli di pagina con i nuovi dati.  
  
 L'implementazione predefinita crea la finestra per la pagina, se non viene creato in precedenza e rende la pagina attiva.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [CPropertySheet::SetFinishText](../../mfc/reference/cpropertysheet-class.md#setfinishtext).  
  
##  <a name="onwizardback"></a>  CPropertyPage::OnWizardBack  
 Questa funzione membro viene chiamata dal framework quando l'utente fa clic sul pulsante Indietro in una procedura guidata.  
  
```  
virtual LRESULT OnWizardBack();
```  
  
### <a name="return-value"></a>Valore restituito  
 0 per passare automaticamente alla pagina successiva, -1 per impedire la pagina di modifica. Per passare a una pagina diverso da quello successivo, restituire l'identificatore della finestra di dialogo da visualizzare.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per specificare un'azione che l'utente deve eseguire quando viene premuto il pulsante Indietro.  
  
 Per altre informazioni su come effettuare una finestra delle proprietà associata alla procedura guidata, vedere [CPropertySheet:: SetWizardMode](../../mfc/reference/cpropertysheet-class.md#setwizardmode).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#118](../../mfc/codesnippet/cpp/cpropertypage-class_8.cpp)]  
  
##  <a name="onwizardfinish"></a>  CPropertyPage::OnWizardFinish  
 Questa funzione membro viene chiamata dal framework quando l'utente fa clic sul pulsante Fine in una procedura guidata.  
  
```  
virtual BOOL OnWizardFinish();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la finestra delle proprietà viene eliminato definitivamente al termine della procedura guidata; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Quando un utente sceglie il **Finish** pulsante in una procedura guidata, il framework chiama questa funzione; quando `OnWizardFinish` restituisce TRUE (valore diverso da zero), la finestra delle proprietà è in grado di essere eliminati definitivamente (ma non viene effettivamente rimosso). Chiamare `DestroyWindow` eliminare definitivamente la finestra delle proprietà. Non chiamare `DestroyWindow` da `OnWizardFinish`; in questo modo il danneggiamento dell'heap o altri errori.  
  
 È possibile eseguire l'override di questa funzione membro per specificare un'azione che l'utente deve eseguire quando viene premuto il pulsante Fine. Quando si esegue l'override di questa funzione, restituisce FALSE per impedire che la finestra delle proprietà in corso l'eliminazione.  
  
 Per altre informazioni sui messaggi di notifica inviati quando l'utente preme il pulsante Fine in una finestra delle proprietà di procedura guidata, vedere [PSN_WIZFINISH](/windows/desktop/Controls/psn-wizfinish) nel SDK di Windows.  
  
 Per altre informazioni su come effettuare una finestra delle proprietà associata alla procedura guidata, vedere [CPropertySheet:: SetWizardMode](../../mfc/reference/cpropertysheet-class.md#setwizardmode).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#119](../../mfc/codesnippet/cpp/cpropertypage-class_9.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#120](../../mfc/codesnippet/cpp/cpropertypage-class_10.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#121](../../mfc/codesnippet/cpp/cpropertypage-class_11.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#122](../../mfc/codesnippet/cpp/cpropertypage-class_12.cpp)]  
  
##  <a name="onwizardnext"></a>  CPropertyPage::OnWizardNext  
 Questa funzione membro viene chiamata dal framework quando l'utente fa clic sul pulsante Avanti nella procedura guidata.  
  
```  
virtual LRESULT OnWizardNext();
```  
  
### <a name="return-value"></a>Valore restituito  
 0 per passare automaticamente alla pagina successiva, -1 per impedire la pagina di modifica. Per passare a una pagina diverso da quello successivo, restituire l'identificatore della finestra di dialogo da visualizzare.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione membro per specificare un'azione che utente deve intraprendere quando viene premuto il pulsante Avanti.  
  
 Per altre informazioni su come effettuare una finestra delle proprietà associata alla procedura guidata, vedere [CPropertySheet:: SetWizardMode](../../mfc/reference/cpropertysheet-class.md#setwizardmode).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#123](../../mfc/codesnippet/cpp/cpropertypage-class_13.cpp)]  
  
##  <a name="querysiblings"></a>  CPropertyPage::QuerySiblings  
 Chiamare questa funzione membro per inoltrare un messaggio a ciascuna pagina nella finestra delle proprietà.  
  
```  
LRESULT QuerySiblings(
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 *wParam*  
 Specifica informazioni aggiuntive dipendente dal messaggio.  
  
 *lParam*  
 Specifica informazioni aggiuntive dipendente dal messaggio  
  
### <a name="return-value"></a>Valore restituito  
 Il valore diverso da zero da una pagina nella finestra delle proprietà, oppure 0 se tutte le pagine di restituiscono un valore pari a 0.  
  
### <a name="remarks"></a>Note  
 Se una pagina restituisce un valore diverso da zero, la finestra delle proprietà non invia il messaggio per le pagine successive.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#124](../../mfc/codesnippet/cpp/cpropertypage-class_14.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#125](../../mfc/codesnippet/cpp/cpropertypage-class_15.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#126](../../mfc/codesnippet/cpp/cpropertypage-class_16.cpp)]  
  
##  <a name="setmodified"></a>  CPropertyPage:: SetModified  
 Chiamare questa funzione membro per abilitare o disabilitare il pulsante Applica, se le impostazioni nella pagina delle proprietà devono essere applicate all'oggetto external appropriato in base.  
  
```  
void SetModified(BOOL bChanged = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *bChanged*  
 TRUE per indicare che le impostazioni della pagina proprietà sono state modificate dall'ultima volta che sono state applicate; FALSE per indicare che sono state applicate le impostazioni della pagina proprietà, oppure devono essere ignorate.  
  
### <a name="remarks"></a>Note  
 Il framework tiene traccia delle quali pagine sono "dirty", vale a dire, pagine delle proprietà per cui è stato chiamato `SetModified( TRUE )`. Il pulsante applica sempre essere abilitato se si chiama `SetModified( TRUE )` per una delle pagine. Il pulsante Applica verrà disabilitato quando si chiama `SetModified( FALSE )` per una delle pagine, ma solo se nessuna delle altre pagine è "dirty".  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#127](../../mfc/codesnippet/cpp/cpropertypage-class_17.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [CMNCTRL1 esempio MFC](../../visual-cpp-samples.md)   
 [CMNCTRL2 esempio MFC](../../visual-cpp-samples.md)   
 [Esempio MFC PROPDLG](../../visual-cpp-samples.md)   
 [Esempio MFC SNAPVW](../../visual-cpp-samples.md)   
 [Classe CDialog](../../mfc/reference/cdialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CPropertySheet](../../mfc/reference/cpropertysheet-class.md)   
 [Classe CDialog](../../mfc/reference/cdialog-class.md)
