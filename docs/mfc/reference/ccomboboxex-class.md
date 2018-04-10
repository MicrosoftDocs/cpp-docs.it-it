---
title: CComboBoxEx (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- CComboBoxEx
- AFXCMN/CComboBoxEx
- AFXCMN/CComboBoxEx::CComboBoxEx
- AFXCMN/CComboBoxEx::Create
- AFXCMN/CComboBoxEx::CreateEx
- AFXCMN/CComboBoxEx::DeleteItem
- AFXCMN/CComboBoxEx::GetComboBoxCtrl
- AFXCMN/CComboBoxEx::GetEditCtrl
- AFXCMN/CComboBoxEx::GetExtendedStyle
- AFXCMN/CComboBoxEx::GetImageList
- AFXCMN/CComboBoxEx::GetItem
- AFXCMN/CComboBoxEx::HasEditChanged
- AFXCMN/CComboBoxEx::InsertItem
- AFXCMN/CComboBoxEx::SetExtendedStyle
- AFXCMN/CComboBoxEx::SetImageList
- AFXCMN/CComboBoxEx::SetItem
- AFXCMN/CComboBoxEx::SetWindowTheme
dev_langs:
- C++
helpviewer_keywords:
- CComboBoxEx [MFC], CComboBoxEx
- CComboBoxEx [MFC], Create
- CComboBoxEx [MFC], CreateEx
- CComboBoxEx [MFC], DeleteItem
- CComboBoxEx [MFC], GetComboBoxCtrl
- CComboBoxEx [MFC], GetEditCtrl
- CComboBoxEx [MFC], GetExtendedStyle
- CComboBoxEx [MFC], GetImageList
- CComboBoxEx [MFC], GetItem
- CComboBoxEx [MFC], HasEditChanged
- CComboBoxEx [MFC], InsertItem
- CComboBoxEx [MFC], SetExtendedStyle
- CComboBoxEx [MFC], SetImageList
- CComboBoxEx [MFC], SetItem
- CComboBoxEx [MFC], SetWindowTheme
ms.assetid: 33ca960a-2409-478c-84a4-a2ee8ecfe8f7
caps.latest.revision: 26
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3aecbb168316b3d6416d3a41a6f6a56b04aeb990
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ccomboboxex-class"></a>CComboBoxEx (classe)
Estende il controllo della casella combinata fornendo il supporto per elenchi di immagini.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CComboBoxEx : public CComboBox  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComboBoxEx::CComboBoxEx](#ccomboboxex)|Costruisce un oggetto `CComboBoxEx`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComboBoxEx::Create](#create)|Crea la casella combinata e lo collega al `CComboBoxEx` oggetto.|  
|[CComboBoxEx::CreateEx](#createex)|Crea una casella combinata con gli stili estesi di Windows specificati e lo collega a un **ComboBoxEx** oggetto.|  
|[CComboBoxEx::DeleteItem](#deleteitem)|Rimuove un elemento da un **ComboBoxEx** controllo.|  
|[CComboBoxEx::GetComboBoxCtrl](#getcomboboxctrl)|Recupera un puntatore per il controllo casella combinata figlio.|  
|[CComboBoxEx::GetEditCtrl](#geteditctrl)|Recupera l'handle per la parte del controllo di modifica di un **ComboBoxEx** controllo.|  
|[CComboBoxEx::GetExtendedStyle](#getextendedstyle)|Recupera gli stili estesi vengono utilizzati per un **ComboBoxEx** controllo.|  
|[CComboBoxEx::GetImageList](#getimagelist)|Recupera un puntatore all'elenco di immagini assegnato a un **ComboBoxEx** controllo.|  
|[CComboBoxEx:: GetItem](#getitem)|Recupera informazioni per un determinato **ComboBoxEx** elemento.|  
|[CComboBoxEx::HasEditChanged](#haseditchanged)|Determina se l'utente ha modificato il contenuto del **ComboBoxEx** controllo edit digitando.|  
|[CComboBoxEx:: InsertItem](#insertitem)|Inserisce un nuovo elemento in un **ComboBoxEx** controllo.|  
|[CComboBoxEx::SetExtendedStyle](#setextendedstyle)|Imposta gli stili estesi all'interno di un **ComboBoxEx** controllo.|  
|[CComboBoxEx:: SetImageList](#setimagelist)|Imposta un elenco di immagini per un **ComboBoxEx** controllo.|  
|[CComboBoxEx:: SetItem](#setitem)|Imposta gli attributi per un elemento in un **ComboBoxEx** controllo.|  
|[CComboBoxEx::SetWindowTheme](#setwindowtheme)|Imposta lo stile di visualizzazione della casella combinata estesa casella di controllo.|  
  
## <a name="remarks"></a>Note  
 Utilizzando `CComboBoxEx` per creare controlli casella combinata di, non è necessario implementare la propria immagine del codice di disegno. Utilizzare invece `CComboBoxEx` alle immagini di accesso da un elenco di immagini.  
  
## <a name="image-list-support"></a>Supporto di elenchi immagini  
 In una casella combinata standard, il proprietario della casella combinata è responsabile della creazione di un'immagine mediante la creazione della casella combinata come un controllo creato dal proprietario. Quando si utilizza `CComboBoxEx`, non è necessario impostare gli stili di disegno **CBS_OWNERDRAWFIXED** e **CBS_HASSTRINGS** perché perché sono implicite. In caso contrario, è necessario scrivere codice per eseguire operazioni di disegno. Oggetto `CComboBoxEx` controllo supporta fino a tre immagini per ogni elemento: uno per uno stato selezionato, uno per uno stato deselezionato e uno per l'immagine sovrapposta.  
  
## <a name="styles"></a>Stili  
 `CComboBoxEx`supporta gli stili **CBS_SIMPLE**, **CBS_DROPDOWN**, **CBS_DROPDOWNLIST**, e **WS_CHILD**. Tutti gli altri stili passati quando si crea la finestra vengono ignorati dal controllo. Dopo la creazione della finestra, è possibile specificare altri combinata stili casella chiamando il `CComboBoxEx` funzione membro [SetExtendedStyle](#setextendedstyle). Con questi stili, è possibile:  
  
-   Ricerche di stringhe di set nell'elenco per essere tra maiuscole e minuscole.  
  
-   Creare un controllo casella combinata che utilizza la barra ('/'), barra rovesciata ('\\') e punto ('. ') caratteri come delimitatori di parola. Ciò consente agli utenti di passare da word a word, utilizzando il tasto di scelta rapida CTRL + freccia.  
  
-   Impostare la casella combinata casella di controllo per visualizzare o non visualizzare un'immagine. Se viene visualizzata alcuna immagine, casella combinata può rimuovere il rientro del testo che supporta un'immagine.  
  
-   Creare un controllo casella combinata "narrow", tra cui ridimensionamento in modo che Ritaglia più ampia casella combinata che contiene.  
  
 Questi flag di stile sono descritti dettagliatamente in [CComboBoxEx utilizzando](../../mfc/using-ccomboboxex.md).  
  
## <a name="item-retention-and-callback-item-attributes"></a>Il mantenimento degli elementi e attributi di elemento di Callback  
 Informazioni sull'elemento, ad esempio gli indici per gli elementi e le immagini, i valori del rientro e le stringhe di testo viene archiviati nella struttura di Win32 [COMBOBOXEXITEM](http://msdn.microsoft.com/library/windows/desktop/bb775746), come descritto in Windows SDK. La struttura contiene anche i membri che corrispondono ai flag di callback.  
  
 Per informazioni dettagliate, concettuale, vedere [CComboBoxEx utilizzando](../../mfc/using-ccomboboxex.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CComboBox](../../mfc/reference/ccombobox-class.md)  
  
 `CComboBoxEx`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="ccomboboxex"></a>CComboBoxEx::CComboBoxEx  
 Chiamare questa funzione membro per creare un `CComboBoxEx` oggetto.  
  
```  
CComboBoxEx();
```  
  
##  <a name="create"></a>CComboBoxEx::Create  
 Crea la casella combinata e lo collega al `CComboBoxEx` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Specifica la combinazione degli stili casella combinata applicato alla casella combinata. Vedere **osservazioni** seguito per ulteriori informazioni sugli stili.  
  
 `rect`  
 Un riferimento a un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura, ovvero la posizione e le dimensioni della casella combinata.  
  
 `pParentWnd`  
 Un puntatore a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto finestra padre della casella combinata (in genere un `CDialog`). Non deve essere **NULL**.  
  
 `nID`  
 Specifica l'ID del controllo. della casella combinata  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'oggetto è stato creato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Creare un `CComboBoxEx` oggetto in due passaggi:  
  
1.  Chiamare [CComboBoxEx](#ccomboboxex) per costruire un `CComboBoxEx` oggetto.  
  
2.  Chiamare questa funzione membro, che crea la casella combinata estesa di Windows e lo collega al `CComboBoxEx` oggetto.  
  
 Quando si chiama **crea**, MFC consente di inizializzare i controlli comuni.  
  
 Quando si crea la casella combinata, è possibile specificare uno o tutti i seguenti stili casella combinata:  
  
- **CBS_SIMPLE**  
  
- **CBS_DROPDOWN**  
  
- **CBS_DROPDOWNLIST**  
  
- **CBS_AUTOHSCROLL**  
  
- **WS_CHILD**  
  
 Vengono ignorati tutti gli altri stili passati quando si crea la finestra. Il **ComboBoxEx** controllo supporta inoltre gli stili estesi che forniscono funzionalità aggiuntive. Questi stili sono descritti in [ComboBoxEx controllo stili estesi](http://msdn.microsoft.com/library/windows/desktop/bb775742), in Windows SDK. Impostare gli stili chiamando [SetExtendedStyle](#setextendedstyle).  
  
 Se si desidera utilizzare gli stili estesi windows con il controllo, chiamare [CreateEx](#createex) anziché **crea**.  
  
##  <a name="createex"></a>CComboBoxEx::CreateEx  
 Chiamare questa funzione per creare un controllo casella combinata estesa (una finestra figlio) e associarlo con il `CComboBoxEx` oggetto.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwExStyle`  
 Specifica lo stile esteso del controllo da creare. Per un elenco di stili estesi di Windows, vedere il `dwExStyle` parametro per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in Windows SDK.  
  
 `dwStyle`  
 Stile del controllo casella combinata. Vedere [crea](#create) per un elenco di stili.  
  
 `rect`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che descrive le dimensioni e la posizione della finestra deve essere creata, nelle coordinate del client di `pParentWnd`.  
  
 `pParentWnd`  
 Puntatore alla finestra padre del controllo.  
  
 `nID`  
 ID di finestra figlio. del controllo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare `CreateEx` anziché **crea** per applicare stili estesi di Windows, specificati per il prefisso di stile esteso di Windows **WS_EX _**.  
  
 `CreateEx`Crea il controllo con gli stili estesi di Windows specificati da `dwExStyle`. È necessario impostare gli stili estesi specifici su un controllo casella combinata estesa utilizzando [SetExtendedStyle](#setextendedstyle). Ad esempio, utilizzare `CreateEx` per impostare questi stili come **WS_EX_CONTEXTHELP**, ma utilizzare `SetExtendedStyle` per impostare questi stili come **CBES_EX_CASESENSITIVE**. Per ulteriori informazioni, vedere gli stili descritti nell'argomento [stili estesi dei controlli ComboBoxEx](http://msdn.microsoft.com/library/windows/desktop/bb775742) in Windows SDK.  
  
##  <a name="deleteitem"></a>CComboBoxEx::DeleteItem  
 Rimuove un elemento da un **ComboBoxEx** controllo.  
  
```  
int DeleteItem(int iIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `iIndex`  
 Indice in base zero dell'elemento da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di elementi rimanenti del controllo. Se `iIndex` non è valido, la funzione restituisce **CB_ERR**.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa la funzionalità del messaggio [CBEM_DELETEITEM](http://msdn.microsoft.com/library/windows/desktop/bb775768), come descritto in Windows SDK. Quando si chiama DeleteItem, un [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583) dei messaggi con **CBEN_DELETEITEM** notifica verrà inviata alla finestra padre.  
  
##  <a name="getcomboboxctrl"></a>CComboBoxEx::GetComboBoxCtrl  
 Chiamare questa funzione membro per ottenere un puntatore a un controllo casella combinata all'interno di un `CComboBoxEx` oggetto.  
  
```  
CComboBox* GetComboBoxCtrl();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CComboBox` oggetto.  
  
### <a name="remarks"></a>Note  
 Il `CComboBoxEx` controllo è costituito da una finestra padre, che incapsula un `CComboBox`.  
  
 Il `CComboBox` oggetto a cui fa riferimento il valore restituito è un oggetto temporaneo e viene eliminato durante il tempo di elaborazione successivo inattivo.  
  
##  <a name="geteditctrl"></a>CComboBoxEx::GetEditCtrl  
 Chiamare questa funzione membro per ottenere un puntatore per il controllo di modifica per una casella combinata.  
  
```  
CEdit* GetEditCtrl();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CEdit](../../mfc/reference/cedit-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Oggetto `CComboBoxEx` controllo utilizza una casella di modifica quando viene creato con il **CBS_DROPDOWN** stile.  
  
 Il `CEdit` oggetto a cui fa riferimento il valore restituito è un oggetto temporaneo e viene eliminato durante il tempo di elaborazione successivo inattivo.  
  
##  <a name="getextendedstyle"></a>CComboBoxEx::GetExtendedStyle  
 Chiamare questa funzione membro per gli stili estesi utilizzati per ottenere un `CComboBoxEx` controllo.  
  
```  
DWORD GetExtendedStyle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `DWORD` valore contenente gli stili estesi utilizzati per il controllo casella combinata.  
  
### <a name="remarks"></a>Note  
 Vedere [stili estesi dei controlli ComboBoxEx](http://msdn.microsoft.com/library/windows/desktop/bb775742) in Windows SDK per ulteriori informazioni su questi stili.  
  
##  <a name="getimagelist"></a>CComboBoxEx::GetImageList  
 Chiamare questa funzione membro per ottenere un puntatore all'elenco di immagini utilizzato da un `CComboBoxEx` controllo.  
  
```  
CImageList* GetImageList() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto. Se ha esito negativo, la funzione membro restituisce **NULL**.  
  
### <a name="remarks"></a>Note  
 Il `CImageList` oggetto a cui fa riferimento il valore restituito è un oggetto temporaneo e viene eliminato durante il tempo di elaborazione successivo inattivo.  
  
##  <a name="getitem"></a>CComboBoxEx:: GetItem  
 Recupera informazioni per un determinato **ComboBoxEx** elemento.  
  
```  
BOOL GetItem(COMBOBOXEXITEM* pCBItem);
```  
  
### <a name="parameters"></a>Parametri  
 `pCBItem`  
 Un puntatore a un [COMBOBOXEXITEM](http://msdn.microsoft.com/library/windows/desktop/bb775746) struttura che riceverà le informazioni sull'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa la funzionalità del messaggio [CBEM_GETITEM](http://msdn.microsoft.com/library/windows/desktop/bb775779), come descritto in Windows SDK.  
  
##  <a name="haseditchanged"></a>CComboBoxEx::HasEditChanged  
 Determina se l'utente ha modificato il contenuto del **ComboBoxEx** controllo edit digitando.  
  
```  
BOOL HasEditChanged();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente ha digitato nella casella di modifica del controllo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa la funzionalità del messaggio [CBEM_HASEDITCHANGED](http://msdn.microsoft.com/library/windows/desktop/bb775782), come descritto in Windows SDK.  
  
##  <a name="insertitem"></a>CComboBoxEx:: InsertItem  
 Inserisce un nuovo elemento in un **ComboBoxEx** controllo.  
  
```  
int InsertItem(const COMBOBOXEXITEM* pCBItem);
```  
  
### <a name="parameters"></a>Parametri  
 `pCBItem`  
 Un puntatore a un [COMBOBOXEXITEM](http://msdn.microsoft.com/library/windows/desktop/bb775746) struttura che riceverà le informazioni sull'elemento. Questa struttura contiene valori di flag di callback per l'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 L'indice in corrispondenza del quale è stato inserito il nuovo elemento se ha esito positivo. in caso contrario-1.  
  
### <a name="remarks"></a>Note  
 Quando si chiama `InsertItem`, [WM_NOTIFY](http://msdn.microsoft.com/library/windows/desktop/bb775583) dei messaggi con [CBEN_INSERTITEM](http://msdn.microsoft.com/library/windows/desktop/bb775764) notifica verrà inviata alla finestra padre.  
  
##  <a name="setextendedstyle"></a>CComboBoxEx::SetExtendedStyle  
 Chiamare questa funzione membro per impostare gli stili estesi utilizzati per una casella combinata estesa di controllo.  
  
```  
DWORD SetExtendedStyle(
    DWORD dwExMask,  
    DWORD dwExStyles);
```  
  
### <a name="parameters"></a>Parametri  
 `dwExMask`  
 Oggetto `DWORD` valore che indica gli stili in `dwExStyles` sono interessate. Solo gli stili estesi in `dwExMask` verranno modificate. Come verranno mantenuti tutti gli altri stili. Se questo parametro è zero, tutti gli stili in `dwExStyles` saranno interessate.  
  
 `dwExStyles`  
 Oggetto `DWORD` valore contenente la casella combinata controllo stili estesi da impostare per il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `DWORD` valore contenente gli stili estesi utilizzati in precedenza per il controllo.  
  
### <a name="remarks"></a>Note  
 Vedere [stili estesi dei controlli ComboBoxEx](http://msdn.microsoft.com/library/windows/desktop/bb775742) in Windows SDK per ulteriori informazioni su questi stili.  
  
 Per creare una casella combinata estesa con stili di visualizzazione estesa di windows, utilizzare [CreateEx](#createex).  
  
##  <a name="setimagelist"></a>CComboBoxEx:: SetImageList  
 Imposta un elenco di immagini per un **ComboBoxEx** controllo.  
  
```  
CImageList* SetImageList(CImageList* pImageList);
```  
  
### <a name="parameters"></a>Parametri  
 `pImageList`  
 Un puntatore a un `CImageList` oggetto contenente le immagini da utilizzare con il `CComboBoxEx` controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CImageList](../../mfc/reference/cimagelist-class.md) oggetto contenente le immagini utilizzate in precedenza per il `CComboBoxEx` controllo. **NULL** se in precedenza è non stato impostato alcun elenco di immagini.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa la funzionalità del messaggio [CBEM_SETIMAGELIST](http://msdn.microsoft.com/library/windows/desktop/bb775787), come descritto in Windows SDK. Se si modifica l'altezza del controllo di modifica predefinito, chiamare la funzione Win32 [SetWindowPos](http://msdn.microsoft.com/library/windows/desktop/ms633545) per ridimensionare il controllo dopo aver chiamato `SetImageList`, o non viene visualizzato correttamente.  
  
 Il `CImageList` oggetto a cui fa riferimento il valore restituito è un oggetto temporaneo e viene eliminato durante il tempo di elaborazione successivo inattivo.  
  
##  <a name="setitem"></a>CComboBoxEx:: SetItem  
 Imposta gli attributi per un elemento in un **ComboBoxEx** controllo.  
  
```  
BOOL SetItem(const COMBOBOXEXITEM* pCBItem);
```  
  
### <a name="parameters"></a>Parametri  
 `pCBItem`  
 Un puntatore a un [COMBOBOXEXITEM](http://msdn.microsoft.com/library/windows/desktop/bb775746) struttura che riceverà le informazioni sull'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'operazione ha esito positivo. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa la funzionalità del messaggio [CBEM_SETITEM](http://msdn.microsoft.com/library/windows/desktop/bb775788), come descritto in Windows SDK.  
  
##  <a name="setwindowtheme"></a>CComboBoxEx::SetWindowTheme  
 Imposta lo stile di visualizzazione della casella combinata estesa casella di controllo.  
  
```  
HRESULT SetWindowTheme(LPCWSTR pszSubAppName);
```  
  
### <a name="parameters"></a>Parametri  
 `pszSubAppName`  
 Un puntatore a una stringa Unicode contenente lo stile di visualizzazione di casella combinata estesa da impostare.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito non è stato utilizzato.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro emula la funzionalità del [CBEM_SETWINDOWTHEME](http://msdn.microsoft.com/library/windows/desktop/bb775790) del messaggio, come descritto in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFCIE di MFC](../../visual-cpp-samples.md)   
 [CComboBox (classe)](../../mfc/reference/ccombobox-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CComboBox](../../mfc/reference/ccombobox-class.md)
