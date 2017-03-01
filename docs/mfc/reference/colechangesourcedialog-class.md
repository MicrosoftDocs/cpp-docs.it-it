---
title: Classe COleChangeSourceDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleChangeSourceDialog
- OLEUICHANGESOURCE
dev_langs:
- C++
helpviewer_keywords:
- OLE Change Source dialog box
- COleChangeSourceDialog class
- dialog boxes, OLE
- OLE dialog boxes, Change Source
- OleUIChangeSource structure
ms.assetid: d0e08be7-21ef-45e1-97af-fe27d99e3bac
caps.latest.revision: 22
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 4a1af032b9a10a0262f0267056b675eed7da509c
ms.lasthandoff: 02/24/2017

---
# <a name="colechangesourcedialog-class"></a>Classe COleChangeSourceDialog
Utilizzato per la finestra di dialogo di modifica dell'origine OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleChangeSourceDialog : public COleDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleChangeSourceDialog::COleChangeSourceDialog](#colechangesourcedialog)|Costruisce un oggetto `COleChangeSourceDialog`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleChangeSourceDialog::DoModal](#domodal)|Visualizza la finestra di dialogo Modifica dell'origine OLE.|  
|[COleChangeSourceDialog::GetDisplayName](#getdisplayname)|Ottiene il nome visualizzato di origine completo.|  
|[COleChangeSourceDialog::GetFileName](#getfilename)|Ottiene il nome del file dal nome di origine.|  
|[COleChangeSourceDialog::GetFromPrefix](#getfromprefix)|Ottiene il prefisso dell'origine precedente.|  
|[COleChangeSourceDialog::GetItemName](#getitemname)|Ottiene il nome dell'elemento dal nome di origine.|  
|[COleChangeSourceDialog::GetToPrefix](#gettoprefix)|Ottiene il prefisso della nuova origine|  
|[COleChangeSourceDialog::IsValidSource](#isvalidsource)|Indica se l'origine è valida.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleChangeSourceDialog::m_cs](#m_cs)|Struttura che controlla il comportamento della finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
 Creare un oggetto della classe `COleChangeSourceDialog` quando si desidera chiamare questa finestra di dialogo. Dopo un `COleChangeSourceDialog` oggetto è stato costruito, è possibile utilizzare il [m_cs](#m_cs) struttura per inizializzare i valori o gli stati dei controlli nella finestra di dialogo. Il `m_cs` struttura è di tipo [OLEUICHANGESOURCE](http://msdn.microsoft.com/library/windows/desktop/ms682160). Per ulteriori informazioni sull'utilizzo di questa classe di finestra di dialogo, vedere il [DoModal](#domodal) funzione membro.  
  
 Per ulteriori informazioni, vedere il [OLEUICHANGESOURCE](http://msdn.microsoft.com/library/windows/desktop/ms682160) struttura [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Per ulteriori informazioni sulle finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 `COleChangeSourceDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxodlgs. h  
  
##  <a name="a-namecolechangesourcedialoga--colechangesourcedialogcolechangesourcedialog"></a><a name="colechangesourcedialog"></a>COleChangeSourceDialog::COleChangeSourceDialog  
 Questa funzione crea un `COleChangeSourceDialog` oggetto.  
  
```  
explicit COleChangeSourceDialog(
    COleClientItem* pItem,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pItem`  
 Puntatore all'oggetto collegato [COleClientItem](../../mfc/reference/coleclientitem-class.md) la cui origine è da aggiornare.  
  
 `pParentWnd`  
 Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. In questo caso **NULL**, la finestra padre della finestra di dialogo verrà impostata nella finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Per visualizzare la finestra di dialogo, chiamare il [DoModal](#domodal) (funzione).  
  
 Per ulteriori informazioni, vedere il [OLEUICHANGESOURCE](http://msdn.microsoft.com/library/windows/desktop/ms682160) struttura e [OleUIChangeSource](http://msdn.microsoft.com/library/windows/desktop/ms682497) funzionare in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namedomodala--colechangesourcedialogdomodal"></a><a name="domodal"></a>COleChangeSourceDialog::DoModal  
 Chiamare questa funzione per visualizzare la finestra di dialogo Modifica dell'origine OLE.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Stato di completamento per la finestra di dialogo. Uno dei valori seguenti:  
  
- **IDOK** se è stata visualizzata correttamente nella finestra di dialogo.  
  
- **IDCANCEL** se l'utente ha annullato la finestra di dialogo.  
  
- **IDABORT** se si è verificato un errore. Se **IDABORT** viene restituito, chiamare il [COleDialog:: GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) funzione membro per ottenere ulteriori informazioni sul tipo di errore che si è verificato. Per un elenco dei possibili errori, vedere il [OleUIChangeSource](http://msdn.microsoft.com/library/windows/desktop/ms682497) funzionare in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Se si desidera inizializzare i vari controlli della finestra di dialogo impostando i membri di [m_cs](#m_cs) struttura, è consigliabile farlo prima di chiamare `DoModal`, ma dopo che l'oggetto finestra di dialogo.  
  
 Se `DoModal` restituisce **IDOK**, è possibile chiamare funzioni per recuperare le impostazioni immesse dall'utente o informazioni nella finestra di dialogo membro. L'elenco seguente vengono riportati funzioni query tipica:  
  
- [GetFileName](#getfilename)  
  
- [GetDisplayName](#getdisplayname)  
  
- [GetItemName](#getitemname)  
  
##  <a name="a-namegetdisplaynamea--colechangesourcedialoggetdisplayname"></a><a name="getdisplayname"></a>COleChangeSourceDialog::GetDisplayName  
 Chiamare questa funzione per recuperare il nome visualizzato completo per l'elemento del client collegato.  
  
```  
CString GetDisplayName();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nome visualizzato completo origine (moniker) per il [COleClientItem](../../mfc/reference/coleclientitem-class.md) specificato nel costruttore.  
  
##  <a name="a-namegetfilenamea--colechangesourcedialoggetfilename"></a><a name="getfilename"></a>COleChangeSourceDialog::GetFileName  
 Chiamare questa funzione per recuperare la parte di moniker del file del nome visualizzato per l'elemento del client collegato.  
  
```  
CString GetFileName();
```  
  
### <a name="return-value"></a>Valore restituito  
 La parte di moniker del file del nome visualizzato dell'origine per il [COleClientItem](../../mfc/reference/coleclientitem-class.md) specificato nel costruttore.  
  
### <a name="remarks"></a>Note  
 Il moniker del file con il moniker dell'elemento fornisce il nome visualizzato completo.  
  
##  <a name="a-namegetfromprefixa--colechangesourcedialoggetfromprefix"></a><a name="getfromprefix"></a>COleChangeSourceDialog::GetFromPrefix  
 Chiamare questa funzione per ottenere la stringa di prefisso precedente per l'origine.  
  
```  
CString GetFromPrefix();
```  
  
### <a name="return-value"></a>Valore restituito  
 La stringa di prefisso precedente dell'origine.  
  
### <a name="remarks"></a>Note  
 Questa funzione solo dopo la chiamata [DoModal](#domodal) restituisce **IDOK**.  
  
 Questo valore proviene direttamente il **lpszFrom** membro del [OLEUICHANGESOURCE](http://msdn.microsoft.com/library/windows/desktop/ms682160) struttura.  
  
 Per ulteriori informazioni, vedere il [OLEUICHANGESOURCE](http://msdn.microsoft.com/library/windows/desktop/ms682160) struttura [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namegetitemnamea--colechangesourcedialoggetitemname"></a><a name="getitemname"></a>COleChangeSourceDialog::GetItemName  
 Chiamare questa funzione per recuperare la parte del moniker di elemento del nome visualizzato per l'elemento del client collegato.  
  
```  
CString GetItemName();
```  
  
### <a name="return-value"></a>Valore restituito  
 La parte del moniker di elemento del nome visualizzato dell'origine per il [COleClientItem](../../mfc/reference/coleclientitem-class.md) specificato nel costruttore.  
  
### <a name="remarks"></a>Note  
 Il moniker del file con il moniker dell'elemento fornisce il nome visualizzato completo.  
  
##  <a name="a-namegettoprefixa--colechangesourcedialoggettoprefix"></a><a name="gettoprefix"></a>COleChangeSourceDialog::GetToPrefix  
 Chiamare questa funzione per ottenere la nuova stringa di prefisso per l'origine.  
  
```  
CString GetToPrefix();
```  
  
### <a name="return-value"></a>Valore restituito  
 La nuova stringa di prefisso dell'origine.  
  
### <a name="remarks"></a>Note  
 Questa funzione solo dopo la chiamata [DoModal](#domodal) restituisce **IDOK**.  
  
 Questo valore proviene direttamente il **lpszTo** membro del [OLEUICHANGESOURCE](http://msdn.microsoft.com/library/windows/desktop/ms682160) struttura.  
  
 Per ulteriori informazioni, vedere il [OLEUICHANGESOURCE](http://msdn.microsoft.com/library/windows/desktop/ms682160) struttura [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namemcsa--colechangesourcedialogmcs"></a><a name="m_cs"></a>COleChangeSourceDialog::m_cs  
 Questo membro dati è una struttura di tipo [OLEUICHANGESOURCE](http://msdn.microsoft.com/library/windows/desktop/ms682160).  
  
```  
OLEUICHANGESOURCE m_cs;  
```  
  
### <a name="remarks"></a>Note  
 `OLEUICHANGESOURCE`viene utilizzato per controllare il comportamento della finestra di dialogo Modifica dell'origine OLE. I membri di questa struttura possono essere modificati direttamente.  
  
 Per ulteriori informazioni, vedere il [OLEUICHANGESOURCE](http://msdn.microsoft.com/library/windows/desktop/ms682160) struttura [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-nameisvalidsourcea--colechangesourcedialogisvalidsource"></a><a name="isvalidsource"></a>COleChangeSourceDialog::IsValidSource  
 Chiamare questa funzione per determinare se la nuova origine è valida.  
  
```  
BOOL IsValidSource();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la nuova origine sia valida, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione solo dopo la chiamata [DoModal](#domodal) restituisce **IDOK**.  
  
 Per ulteriori informazioni, vedere il [OLEUICHANGESOURCE](http://msdn.microsoft.com/library/windows/desktop/ms682160) struttura [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)

