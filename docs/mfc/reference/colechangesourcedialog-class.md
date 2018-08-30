---
title: Classe COleChangeSourceDialog | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleChangeSourceDialog
- AFXODLGS/COleChangeSourceDialog
- AFXODLGS/COleChangeSourceDialog::COleChangeSourceDialog
- AFXODLGS/COleChangeSourceDialog::DoModal
- AFXODLGS/COleChangeSourceDialog::GetDisplayName
- AFXODLGS/COleChangeSourceDialog::GetFileName
- AFXODLGS/COleChangeSourceDialog::GetFromPrefix
- AFXODLGS/COleChangeSourceDialog::GetItemName
- AFXODLGS/COleChangeSourceDialog::GetToPrefix
- AFXODLGS/COleChangeSourceDialog::IsValidSource
- AFXODLGS/COleChangeSourceDialog::m_cs
dev_langs:
- C++
helpviewer_keywords:
- COleChangeSourceDialog [MFC], COleChangeSourceDialog
- COleChangeSourceDialog [MFC], DoModal
- COleChangeSourceDialog [MFC], GetDisplayName
- COleChangeSourceDialog [MFC], GetFileName
- COleChangeSourceDialog [MFC], GetFromPrefix
- COleChangeSourceDialog [MFC], GetItemName
- COleChangeSourceDialog [MFC], GetToPrefix
- COleChangeSourceDialog [MFC], IsValidSource
- COleChangeSourceDialog [MFC], m_cs
ms.assetid: d0e08be7-21ef-45e1-97af-fe27d99e3bac
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a8b2ca6ebbc0201a3c56c9239b665c55ccd9eb13
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43202745"
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
|[COleChangeSourceDialog::DoModal](#domodal)|Consente di visualizzare la finestra di dialogo di modifica dell'origine OLE.|  
|[COleChangeSourceDialog::GetDisplayName](#getdisplayname)|Ottiene il nome visualizzato di origine completo.|  
|[COleChangeSourceDialog::GetFileName](#getfilename)|Ottiene il nome del file dal nome di origine.|  
|[COleChangeSourceDialog::GetFromPrefix](#getfromprefix)|Ottiene il prefisso di origine precedente.|  
|[COleChangeSourceDialog::GetItemName](#getitemname)|Ottiene il nome dell'elemento dal nome di origine.|  
|[COleChangeSourceDialog::GetToPrefix](#gettoprefix)|Ottiene il prefisso della nuova origine|  
|[COleChangeSourceDialog::IsValidSource](#isvalidsource)|Indica se l'origine è valida.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleChangeSourceDialog::m_cs](#m_cs)|Struttura che controlla il comportamento della finestra di dialogo.|  
  
## <a name="remarks"></a>Note  
 Creare un oggetto della classe `COleChangeSourceDialog` quando si desidera chiamare questa finestra di dialogo. Dopo una `COleChangeSourceDialog` oggetto è stato costruito, è possibile usare il [m_cs](#m_cs) struttura per inizializzare i valori o degli stati dei controlli nella finestra di dialogo. Il `m_cs` struttura JE typu [OLEUICHANGESOURCE](/windows/desktop/api/oledlg/ns-oledlg-tagoleuichangesourcea). Per altre informazioni sull'uso di questa classe di finestra di dialogo, vedere la [DoModal](#domodal) funzione membro.  
  
 Per altre informazioni, vedere la [OLEUICHANGESOURCE](/windows/desktop/api/oledlg/ns-oledlg-tagoleuichangesourcea) struttura in Windows SDK.  
  
 Per altre informazioni sulle finestre di dialogo OLE specifici, vedere l'articolo [finestre di dialogo in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
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
  
##  <a name="colechangesourcedialog"></a>  COleChangeSourceDialog::COleChangeSourceDialog  
 Questa funzione costruisce un `COleChangeSourceDialog` oggetto.  
  
```  
explicit COleChangeSourceDialog(
    COleClientItem* pItem,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *pItem*  
 Puntatore all'oggetto collegato [COleClientItem](../../mfc/reference/coleclientitem-class.md) la cui origine deve essere aggiornato.  
  
 *pParentWnd*  
 Punta all'oggetto finestra padre o proprietaria (di tipo `CWnd`) a cui appartiene l'oggetto finestra di dialogo. Se è NULL, la finestra padre della finestra di dialogo verrà impostata nella finestra principale dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Per visualizzare la finestra di dialogo, chiamare il [DoModal](#domodal) (funzione).  
  
 Per altre informazioni, vedere la [OLEUICHANGESOURCE](/windows/desktop/api/oledlg/ns-oledlg-tagoleuichangesourcea) struttura e [OleUIChangeSource](/windows/desktop/api/oledlg/nf-oledlg-oleuichangesourcea) (funzione) in Windows SDK.  
  
##  <a name="domodal"></a>  COleChangeSourceDialog::DoModal  
 Chiamare questa funzione per visualizzare la finestra di dialogo di modifica dell'origine OLE.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 Stato di completamento della finestra di dialogo. Uno dei valori seguenti:  
  
- IDOK se la finestra di dialogo viene visualizzata correttamente.  
  
- IDCANCEL, se l'utente ha annullato la finestra di dialogo.  
  
- IDABORT se si è verificato un errore. Se viene restituito IDABORT, chiamare il [COleDialog:: GetLastError](../../mfc/reference/coledialog-class.md#getlasterror) funzione membro per ottenere altre informazioni sul tipo di errore che si sono verificati. Per un elenco dei possibili errori, vedere la [OleUIChangeSource](/windows/desktop/api/oledlg/nf-oledlg-oleuichangesourcea) (funzione) in Windows SDK.  
  
### <a name="remarks"></a>Note  
 Se si desidera inizializzare i vari controlli di finestra di dialogo impostando i membri del [m_cs](#m_cs) struttura, è necessario eseguire questa operazione prima di chiamare `DoModal`, ma dopo che viene costruito l'oggetto finestra di dialogo.  
  
 Se `DoModal` restituisce IDOK, è possibile chiamare funzioni per recuperare le impostazioni immesse dall'utente o le informazioni dalla finestra di dialogo membro. Nel seguente elenco presenti funzioni di query tipici:  
  
- [GetFileName](#getfilename)  
  
- [GetDisplayName](#getdisplayname)  
  
- [GetItemName](#getitemname)  
  
##  <a name="getdisplayname"></a>  COleChangeSourceDialog::GetDisplayName  
 Chiamare questa funzione per recuperare il nome visualizzato completo per l'elemento collegato client.  
  
```  
CString GetDisplayName();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nome visualizzato completo di origine (moniker) per il [COleClientItem](../../mfc/reference/coleclientitem-class.md) specificato nel costruttore.  
  
##  <a name="getfilename"></a>  COleChangeSourceDialog::GetFileName  
 Chiamare questa funzione per recuperare la parte di moniker del file del nome visualizzato per l'elemento collegato client.  
  
```  
CString GetFileName();
```  
  
### <a name="return-value"></a>Valore restituito  
 La parte di moniker del file del nome visualizzato dell'origine per il [COleClientItem](../../mfc/reference/coleclientitem-class.md) specificato nel costruttore.  
  
### <a name="remarks"></a>Note  
 Il moniker del file con il moniker dell'elemento fornisce il nome visualizzato completo.  
  
##  <a name="getfromprefix"></a>  COleChangeSourceDialog::GetFromPrefix  
 Chiamare questa funzione per ottenere la stringa di prefisso precedente per l'origine.  
  
```  
CString GetFromPrefix();
```  
  
### <a name="return-value"></a>Valore restituito  
 La stringa di prefisso precedente dell'origine.  
  
### <a name="remarks"></a>Note  
 Questa funzione solo dopo la chiamata [DoModal](#domodal) restituisce IDOK.  
  
 Questo valore proviene direttamente dai `lpszFrom` membro della [OLEUICHANGESOURCE](/windows/desktop/api/oledlg/ns-oledlg-tagoleuichangesourcea) struttura.  
  
 Per altre informazioni, vedere la [OLEUICHANGESOURCE](/windows/desktop/api/oledlg/ns-oledlg-tagoleuichangesourcea) struttura in Windows SDK.  
  
##  <a name="getitemname"></a>  COleChangeSourceDialog::GetItemName  
 Chiamare questa funzione per recuperare la parte di elemento moniker del nome visualizzato per l'elemento collegato client.  
  
```  
CString GetItemName();
```  
  
### <a name="return-value"></a>Valore restituito  
 La parte di elemento moniker del nome visualizzato dell'origine per il [COleClientItem](../../mfc/reference/coleclientitem-class.md) specificato nel costruttore.  
  
### <a name="remarks"></a>Note  
 Il moniker del file con il moniker dell'elemento fornisce il nome visualizzato completo.  
  
##  <a name="gettoprefix"></a>  COleChangeSourceDialog::GetToPrefix  
 Chiamare questa funzione per ottenere la nuova stringa di prefisso per l'origine.  
  
```  
CString GetToPrefix();
```  
  
### <a name="return-value"></a>Valore restituito  
 La nuova stringa di prefisso dell'origine.  
  
### <a name="remarks"></a>Note  
 Questa funzione solo dopo la chiamata [DoModal](#domodal) restituisce IDOK.  
  
 Questo valore proviene direttamente dai `lpszTo` membro della [OLEUICHANGESOURCE](/windows/desktop/api/oledlg/ns-oledlg-tagoleuichangesourcea) struttura.  
  
 Per altre informazioni, vedere la [OLEUICHANGESOURCE](/windows/desktop/api/oledlg/ns-oledlg-tagoleuichangesourcea) struttura in Windows SDK.  
  
##  <a name="m_cs"></a>  COleChangeSourceDialog::m_cs  
 Questo membro dati è una struttura di tipo [OLEUICHANGESOURCE](/windows/desktop/api/oledlg/ns-oledlg-tagoleuichangesourcea).  
  
```  
OLEUICHANGESOURCE m_cs;  
```  
  
### <a name="remarks"></a>Note  
 `OLEUICHANGESOURCE` viene usato per controllare il comportamento della finestra di dialogo Modifica dell'origine OLE. I membri di questa struttura possono essere modificati direttamente.  
  
 Per altre informazioni, vedere la [OLEUICHANGESOURCE](/windows/desktop/api/oledlg/ns-oledlg-tagoleuichangesourcea) struttura in Windows SDK.  
  
##  <a name="isvalidsource"></a>  COleChangeSourceDialog::IsValidSource  
 Chiamare questa funzione per determinare se la nuova origine è valida.  
  
```  
BOOL IsValidSource();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la nuova origine è valida, in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione solo dopo la chiamata [DoModal](#domodal) restituisce IDOK.  
  
 Per altre informazioni, vedere la [OLEUICHANGESOURCE](/windows/desktop/api/oledlg/ns-oledlg-tagoleuichangesourcea) struttura in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDialog](../../mfc/reference/coledialog-class.md)
