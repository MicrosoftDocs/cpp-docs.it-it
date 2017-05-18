---
title: Classe CLinkCtrl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CLinkCtrl
- AFXCMN/CLinkCtrl
- AFXCMN/CLinkCtrl::CLinkCtrl
- AFXCMN/CLinkCtrl::Create
- AFXCMN/CLinkCtrl::CreateEx
- AFXCMN/CLinkCtrl::GetIdealHeight
- AFXCMN/CLinkCtrl::GetIdealSize
- AFXCMN/CLinkCtrl::GetItem
- AFXCMN/CLinkCtrl::GetItemID
- AFXCMN/CLinkCtrl::GetItemState
- AFXCMN/CLinkCtrl::GetItemUrl
- AFXCMN/CLinkCtrl::HitTest
- AFXCMN/CLinkCtrl::SetItem
- AFXCMN/CLinkCtrl::SetItemID
- AFXCMN/CLinkCtrl::SetItemState
- AFXCMN/CLinkCtrl::SetItemUrl
dev_langs:
- C++
helpviewer_keywords:
- CLinkCtrl class
- Web pages, link control
- controls [MFC], links
- links [C++], link control
- SysLink control
ms.assetid: d1cd876a-ecca-42db-8ac4-9cd327df0cd4
caps.latest.revision: 23
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
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 710fef79306c906e13e99beac15401835422ecbe
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="clinkctrl-class"></a>Classe CLinkCtrl
Fornisce la funzionalità del controllo SysLink comune di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CLinkCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CLinkCtrl::CLinkCtrl](#clinkctrl)|Costruisce un oggetto `CLinkCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CLinkCtrl::Create](#create)|Crea un controllo di collegamento e lo collega a un `CLinkCtrl` oggetto.|  
|[CLinkCtrl::CreateEx](#createex)|Crea un controllo di collegamento con stili estesi e lo collega a un `CLinkCtrl` oggetto.|  
|[CLinkCtrl::GetIdealHeight](#getidealheight)|Recupera l'altezza ideale del controllo di collegamento.|  
|[CLinkCtrl::GetIdealSize](#getidealsize)|Calcola l'altezza preferenziale del testo del collegamento per il controllo collegamento corrente, a seconda della larghezza specificata del collegamento.|  
|[CLinkCtrl::GetItem](#getitem)|Recupera gli Stati e gli attributi di un elemento di controllo di collegamento.|  
|[CLinkCtrl::GetItemID](#getitemid)|Recupera l'ID di un elemento di controllo di collegamento.|  
|[CLinkCtrl::GetItemState](#getitemstate)|Recupera lo stato dell'elemento del controllo di collegamento.|  
|[CLinkCtrl::GetItemUrl](#getitemurl)|Recupera l'URL rappresentata dall'elemento di controllo di collegamento.|  
|[CLinkCtrl::HitTest](#hittest)|Determina se l'utente fa clic sul collegamento specificato.|  
|[CLinkCtrl::SetItem](#setitem)|Imposta gli Stati e gli attributi di un elemento di controllo di collegamento.|  
|[CLinkCtrl::SetItemID](#setitemid)|Imposta l'ID di un elemento di controllo di collegamento.|  
|[CLinkCtrl::SetItemState](#setitemstate)|Imposta lo stato dell'elemento del controllo di collegamento.|  
|[CLinkCtrl::SetItemUrl](#setitemurl)|Imposta l'URL rappresentata dall'elemento di controllo di collegamento.|  
  
## <a name="remarks"></a>Note  
 Un "controllo link" fornisce un modo pratico per incorporare collegamenti ipertestuali in una finestra. Il controllo effettivo è una finestra che esegue il rendering contrassegnato il testo e avvia le applicazioni appropriate quando l'utente fa clic su un collegamento incorporato. Più collegamenti sono supportati all'interno di un controllo e sono accessibili da un indice in base zero.  
  
 Questo controllo (e pertanto la `CLinkCtrl` classe) è disponibile solo per i programmi in esecuzione in Windows XP e versioni successive.  
  
 Per ulteriori informazioni, vedere [controllo SysLink](http://msdn.microsoft.com/library/windows/desktop/bb760706) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CLinkCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="clinkctrl"></a>CLinkCtrl::CLinkCtrl  
 Costruisce un oggetto `CLinkCtrl`.  
  
```  
CLinkCtrl();
```  
  
##  <a name="create"></a>CLinkCtrl::Create  
 Crea un controllo di collegamento e lo collega a un `CLinkCtrl` oggetto.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszLinkMarkup,   
    DWORD dwStyle,   
    const RECT& rect,   
    CWnd* pParentWnd,   
    UINT nID);

 
virtual BOOL Create(DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszLinkMarkup`  
 Puntatore a una stringa con terminazione zero che contiene il contrassegnato il testo da visualizzare. Per ulteriori informazioni, vedere la sezione "Markup e collegamento di accesso" nell'argomento [panoramica dei controlli SysLink](http://msdn.microsoft.com/library/windows/desktop/bb760706) nel [MSDN Library](http://go.microsoft.com/fwlink/linkid=556).  
  
 `dwStyle`  
 Specifica lo stile del controllo di collegamento. Applicare qualsiasi combinazione di stili del controllo. Vedere [comuni degli stili del controllo](http://msdn.microsoft.com/library/windows/desktop/bb775498) nel `Windows SDK` per ulteriori informazioni.  
  
 `rect`  
 Specifica le dimensioni e posizione del controllo di collegamento. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](../../mfc/reference/rect-structure1.md) struttura.  
  
 `pParentWnd`  
 Finestra padre del controllo di collegamento. Non deve essere `NULL`.  
  
 `nID`  
 Specifica l'ID. del controllo di collegamento  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se l'inizializzazione è stata completata. in caso contrario `false`.  
  
### <a name="remarks"></a>Note  
 Costruire un `CLinkCtrl` oggetto in due passaggi. In primo luogo, chiamare il costruttore, quindi `Create`, che crea il controllo di collegamento e lo collega a di `CLinkCtrl` oggetto. Se si desidera utilizzare gli stili estesi con il controllo, chiamare [CLinkCtrl::CreateEx](#createex) anziché `Create`.  
  
 La seconda forma del `Create` metodo è obsoleto. Eseguire il primo che specifica il `lpszLinkMarkup` parametro.  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente definisce due variabili, denominate `m_Link1` e `m_Link2`, che vengono utilizzati per accedere a due controlli dei collegamenti.  
  
 [!code-cpp[NVC_MFC_CLinkCtrl_s1 n.&2;](../../mfc/reference/codesnippet/cpp/clinkctrl-class_1.h)]  
  
### <a name="example"></a>Esempio  
 Esempio di codice seguente crea un controllo di collegamento in base alla posizione di un altro controllo di collegamento. Il caricatore di risorse crea il primo controllo di collegamento all'avvio dell'applicazione. Quando l'applicazione passa OnInitDialog (metodo), si crea il secondo controllo collegamento relativo alla posizione del primo controllo di collegamento. Si ridimensiona il secondo controllo di collegamento per adattarsi al testo che viene visualizzato.  
  
 [!code-cpp[NVC_MFC_CLinkCtrl_s1 n.&1;](../../mfc/reference/codesnippet/cpp/clinkctrl-class_2.cpp)]  
  
##  <a name="createex"></a>CLinkCtrl::CreateEx  
 Crea un controllo di collegamento con stili estesi e lo collega a un `CLinkCtrl` oggetto.  
  
```  
virtual BOOL CreateEx(
    LPCTSTR lpszLinkMarkup,   
    DWORD dwExStyle,  
    DWORD dwStyle,   
    const RECT& rect,   
    CWnd* pParentWnd,   
    UINT nID);

 
virtual BOOL CreateEx(DWORD  dwExStyle,
    DWORD  dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT  nID);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszLinkMarkup`  
 Puntatore a una stringa con terminazione zero che contiene il contrassegnato il testo da visualizzare. Per ulteriori informazioni, vedere la sezione "Markup e collegamento di accesso" nell'argomento [panoramica dei controlli SysLink](http://msdn.microsoft.com/library/windows/desktop/bb760706) nel [MSDN Library](http://go.microsoft.com/fwlink/linkid=556).  
  
 `dwExStyle`  
 Specifica lo stile esteso di controllo di collegamento. Per un elenco degli stili estesi di Windows, vedere il `dwExStyle` parametro per [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwStyle`  
 Specifica lo stile del controllo di collegamento. Applicare qualsiasi combinazione di stili del controllo. Per ulteriori informazioni, vedere [comuni degli stili del controllo](http://msdn.microsoft.com/library/windows/desktop/bb775498) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `rect`  
 Specifica le dimensioni e posizione del controllo di collegamento. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](../../mfc/reference/rect-structure1.md) struttura.  
  
 `pParentWnd`  
 Finestra padre del controllo di collegamento. Non deve essere `NULL`.  
  
 `nID`  
 Specifica l'ID. del controllo di collegamento  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se l'inizializzazione è stata completata. in caso contrario `false`.  
  
### <a name="remarks"></a>Note  
 Utilizzare `CreateEx` anziché [crea](#create) per applicare le costanti di stile estese Windows.  
  
 La seconda forma del `CreateEx` metodo è obsoleto. Eseguire il primo che specifica il `lpszLinkMarkup` parametro.  
  
##  <a name="getidealheight"></a>CLinkCtrl::GetIdealHeight  
 Recupera l'altezza ideale del controllo di collegamento.  
  
```  
int GetIdealHeight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza ideale del controllo, in pixel.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [LM_GETIDEALHEIGHT](http://msdn.microsoft.com/library/windows/desktop/bb760716), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getidealsize"></a>CLinkCtrl::GetIdealSize  
 Calcola l'altezza preferenziale del testo del collegamento per il controllo collegamento corrente, a seconda della larghezza specificata del collegamento.  
  
```  
int GetIdealSize(
    int cxMaxWidth,   
    SIZE* pSize) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `cxMaxWidth`|La larghezza massima del collegamento, in pixel.|  
|[out] *`pSize`|Un puntatore a un Windows [dimensioni](http://msdn.microsoft.com/library/windows/desktop/dd145106) struttura. Quando termina, questo metodo il `cy` membro del `SIZE` struttura contiene l'altezza del testo collegamento ideale per la larghezza di testo di collegamento specificato da `cxMaxWidth`. Il `cx` membro della struttura contiene la larghezza di testo di collegamento che è effettivamente necessario.|  
  
### <a name="return-value"></a>Valore restituito  
 L'altezza preferenziale del testo del collegamento, in pixel. Il valore restituito è identico al valore di `cy` membro del `SIZE` struttura.  
  
### <a name="remarks"></a>Note  
 Per un esempio di `GetIdealSize` metodo, vedere l'esempio in [CLinkCtrl::Create](#create).  
  
 Questo metodo invia il [LM_GETIDEALSIZE](http://msdn.microsoft.com/library/windows/desktop/bb760718) messaggio, che è descritta nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getitem"></a>CLinkCtrl::GetItem  
 Recupera gli Stati e gli attributi di un elemento di controllo di collegamento.  
  
```  
BOOL GetItem(PLITEM pItem) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Un puntatore a un [LITEM](http://msdn.microsoft.com/library/windows/desktop/bb760710) struttura per ricevere informazioni sull'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** esito positivo, **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [LM_GETITEM](http://msdn.microsoft.com/library/windows/desktop/bb760720), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getitemid"></a>CLinkCtrl::GetItemID  
 Recupera l'ID di un elemento di controllo di collegamento.  
  
```  
BOOL GetItemID(
    int iLink,  
    CString& strID) const;  
  
BOOL GetItemID(
    int iLink,  
    LPWSTR szID,  
    UINT cchID) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `iLink`  
 L'indice di un elemento di controllo di collegamento.  
  
 *strID*  
 Oggetto [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente l'ID dell'elemento specificato.  
  
 *IDdm*  
 Una stringa con terminazione null che contiene l'ID dell'elemento specificato.  
  
 *cchID*  
 La dimensione in caratteri di *IDdm* buffer.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** esito positivo, **FALSE** in caso di errore.  
  
> [!NOTE]
>  Questa funzione restituisce inoltre **FALSE** se il buffer di *IDdm o strID* è minore di **MAX_LINKID_TEXT**.  
  
### <a name="remarks"></a>Note  
 Recupera l'ID di un elemento di controllo di collegamento specifici. Per ulteriori informazioni, vedere il messaggio Win32 [LM_GETITEM](http://msdn.microsoft.com/library/windows/desktop/bb760720) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getitemstate"></a>CLinkCtrl::GetItemState  
 Recupera lo stato dell'elemento del controllo di collegamento.  
  
```  
BOOL GetItemState(
    int iLink,  
    UINT* pnState,  
    UINT stateMask = LIS_FOCUSED | LIS_ENABLED | LIS_VISITED) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `iLink`  
 L'indice di un elemento di controllo di collegamento.  
  
 `pnState`  
 Il valore dell'elemento dello stato specificato.  
  
 `stateMask`  
 Combinazione di flag che indica quale elemento di stato per ottenere. Per un elenco di valori, vedere la descrizione del **stato** membro il [LITEM](http://msdn.microsoft.com/library/windows/desktop/bb760710) struttura. Elementi consentiti sono identici a quelli consentiti in **stato**.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** esito positivo, **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Recupera il valore dell'elemento di stato specificato un collegamento specifico dell'elemento del controllo. Per ulteriori informazioni, vedere il messaggio Win32 [LM_GETITEM](http://msdn.microsoft.com/library/windows/desktop/bb760720) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getitemurl"></a>CLinkCtrl::GetItemUrl  
 Recupera l'URL rappresentata dall'elemento di controllo di collegamento.  
  
```  
BOOL GetItemUrl(
    int iLink,  
    CString& strUrl) const;  
  
BOOL GetItemUrl(
    int iLink,  
    LPWSTR szUrl,  
    UINT cchUrl) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `iLink`  
 L'indice di un elemento di controllo di collegamento.  
  
 `strUrl`  
 Oggetto [CStringT](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente l'URL rappresentato dall'elemento specificato  
  
 `szUrl`  
 Una stringa con terminazione null contenente l'URL rappresentato dall'elemento specificato  
  
 *cchUrl*  
 La dimensione in caratteri di *szURL* buffer.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** esito positivo, **FALSE** in caso di errore.  
  
> [!NOTE]
>  Questa funzione restituisce inoltre **FALSE** se il buffer di *szUrl o strUrl* è minore di **MAX_LINKID_TEXT**.  
  
### <a name="remarks"></a>Note  
 Recupera l'URL rappresentata dall'elemento di controllo di collegamento specificato. Per ulteriori informazioni, vedere il messaggio Win32 [LM_GETITEM](http://msdn.microsoft.com/library/windows/desktop/bb760720) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="hittest"></a>CLinkCtrl::HitTest  
 Determina se l'utente fa clic sul collegamento specificato.  
  
```  
BOOL HitTest(PLHITTESTINFO phti) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *phti*  
 Puntatore a un **LHITTESTINFO** struttura contenente le informazioni relative al collegamento selezionato dall'utente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** esito positivo, **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [LM_HITTEST](http://msdn.microsoft.com/library/windows/desktop/bb760722), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="setitem"></a>CLinkCtrl::SetItem  
 Imposta gli Stati e gli attributi di un elemento di controllo di collegamento.  
  
```  
BOOL SetItem(PLITEM pItem);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Un puntatore a un [LITEM](http://msdn.microsoft.com/library/windows/desktop/bb760710) struttura contenente le informazioni da impostare.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** esito positivo, **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [LM_SETITEM](http://msdn.microsoft.com/library/windows/desktop/bb760724), come descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="setitemid"></a>CLinkCtrl::SetItemID  
 Recupera l'ID di un elemento di controllo di collegamento.  
  
```  
BOOL SetItemID(
    int iLink,  
    LPCWSTR szID);
```  
  
### <a name="parameters"></a>Parametri  
 `iLink`  
 L'indice di un elemento di controllo di collegamento.  
  
 *IDdm*  
 Una stringa con terminazione null che contiene l'ID dell'elemento specificato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** esito positivo, **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Imposta l'ID di un elemento di controllo di collegamento specifici. Per ulteriori informazioni, vedere il messaggio Win32 [LM_SETITEM](http://msdn.microsoft.com/library/windows/desktop/bb760724) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="setitemstate"></a>CLinkCtrl::SetItemState  
 Recupera lo stato dell'elemento del controllo di collegamento.  
  
```  
BOOL SetItemState(
    int iLink,  
    UINT state,  
    UINT stateMask = LIS_FOCUSED | LIS_ENABLED | LIS_VISITED);
```  
  
### <a name="parameters"></a>Parametri  
 `iLink`  
 L'indice di un elemento di controllo di collegamento.  
  
 `pnState`  
 Il valore dell'elemento specificato lo stato viene impostato.  
  
 `stateMask`  
 Combinazione di flag che descrivono l'elemento dello stato da impostare. Per un elenco di valori, vedere la descrizione del **stato** membro il [LITEM](http://msdn.microsoft.com/library/windows/desktop/bb760710) struttura. Elementi consentiti sono identici a quelli consentiti in **stato**.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** esito positivo, **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Imposta il valore dell'elemento di stato specificato un collegamento specifico dell'elemento del controllo. Per ulteriori informazioni, vedere il messaggio Win32 [LM_SETITEM](http://msdn.microsoft.com/library/windows/desktop/bb760724) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="setitemurl"></a>CLinkCtrl::SetItemUrl  
 Imposta l'URL rappresentata dall'elemento di controllo di collegamento.  
  
```  
BOOL SetItemUrl(
    int iLink,  
    LPCWSTR szUrl);
```  
  
### <a name="parameters"></a>Parametri  
 `iLink`  
 L'indice di un elemento di controllo di collegamento.  
  
 `szUrl`  
 Una stringa con terminazione null contenente l'URL rappresentato dall'elemento specificato  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** esito positivo, **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Imposta l'URL rappresentata dall'elemento di controllo di collegamento specificato. Per ulteriori informazioni, vedere il messaggio Win32 [LM_SETITEM](http://msdn.microsoft.com/library/windows/desktop/bb760724) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)

