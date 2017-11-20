---
title: Classe CWinFormsDialog | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CWinFormsDialog
- AFXWINFORMS/CWinFormsDialog
- AFXWINFORMS/CWinFormsDialog::CWinFormsDialog
- AFXWINFORMS/CWinFormsDialog::GetControl
- AFXWINFORMS/CWinFormsDialog::GetControlHandle
- AFXWINFORMS/CWinFormsDialog::OnInitDialog
dev_langs: C++
helpviewer_keywords:
- CWinFormsDialog [MFC], CWinFormsDialog
- CWinFormsDialog [MFC], GetControl
- CWinFormsDialog [MFC], GetControlHandle
- CWinFormsDialog [MFC], OnInitDialog
ms.assetid: e3cec000-a578-448e-b06a-8af256312f61
caps.latest.revision: "26"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 2b749e825563ef9a7e2686a923eb0931ed8d5405
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cwinformsdialog-class"></a>Classe CWinFormsDialog
Wrapper per una classe finestra di dialogo MFC che ospita un controllo utente Windows Form.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <typename TManagedControl>  
class CWinFormsDialog :   
    public CDialog  
```  
  
#### <a name="parameters"></a>Parametri  
 `TManagedControl`  
 Il controllo utente .NET Framework da visualizzare nell'applicazione MFC.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinFormsDialog::CWinFormsDialog](#cwinformsdialog)|Costruisce un oggetto `CWinFormsDialog`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinFormsDialog::GetControl](#getcontrol)|Recupera un riferimento al controllo utente Windows Form.|  
|[CWinFormsDialog::GetControlHandle](#getcontrolhandle)|Recupera un handle di finestra per il controllo utente Windows Form.|  
|[CWinFormsDialog::OnInitDialog](#oninitdialog)|Inizializza la finestra di dialogo MFC mediante la creazione e l'hosting di un controllo utente Windows Form su di esso.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome||  
|----------|-|  
|[CWinFormsDialog::operator-&gt;](#operator_-_gt)|Sostituisce [CWinFormsDialog::GetControl](#getcontrol) nelle espressioni.|  
|[CWinFormsDialog::operator TManagedControl ^](#operator_tmanagedcontrol)|Esegue il cast di un tipo come un riferimento a un controllo utente Windows Form.|  
  
## <a name="remarks"></a>Note  
 `CWinFormsDialog`è un wrapper per una classe di finestra di dialogo MFC ( [CDialog](../../mfc/reference/cdialog-class.md)) che ospita un controllo utente Windows Form. In questo modo la visualizzazione di controlli di .NET Framework nella finestra di dialogo MFC modale o non modale.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md) e [ospita un controllo utente Windows Form come una finestra di dialogo MFC](../../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinforms. h  
  
##  <a name="cwinformsdialog"></a>CWinFormsDialog::CWinFormsDialog  
 Costruisce un oggetto `CWinFormsDialog`.  
  
```  
CWinFormsDialog(UINT nIDTemplate = IDD);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDTemplate`  
 Contiene l'ID di una risorsa modello di finestra di dialogo. Utilizzare l'editor finestre per creare il modello di finestra di dialogo e archiviarlo nel file di script di risorsa dell'applicazione. Per ulteriori informazioni sui modelli di finestra di dialogo, vedere [CDialog (classe)](../../mfc/reference/cdialog-class.md).  
  
##  <a name="getcontrol"></a>CWinFormsDialog::GetControl  
 Recupera un riferimento al controllo utente Windows Form.  
  
```  
inline TManagedControl^ GetControl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento al controllo Windows Form nella finestra di dialogo MFC.  
  
##  <a name="getcontrolhandle"></a>CWinFormsDialog::GetControlHandle  
 Recupera un handle di finestra per il controllo utente Windows Form.  
  
```  
inline HWND GetControlHandle() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un handle di finestra per il controllo utente Windows Form.  
  
##  <a name="oninitdialog"></a>CWinFormsDialog::OnInitDialog  
 Inizializza la finestra di dialogo MFC mediante la creazione e l'hosting di un controllo utente Windows Form su di esso.  
  
```  
virtual BOOL OnInitDialog();
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore booleano che specifica se l'applicazione ha impostato lo stato attivo di input a uno dei controlli nella finestra di dialogo. Se `OnInitDialog` restituisce un valore diverso da zero, Windows imposta lo stato attivo di input del primo controllo nella finestra di dialogo. Questo metodo può restituire 0 solo se l'applicazione è impostato in modo esplicito lo stato attivo su uno dei controlli nella finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 Quando viene creata la finestra di dialogo MFC (utilizzando la [crea](../../mfc/reference/cdialog-class.md#create), [CreateIndirect](../../mfc/reference/cdialog-class.md#createindirect), o [DoModal](../../mfc/reference/cdialog-class.md#domodal) metodo ereditato da [CDialog](../../mfc/reference/cdialog-class.md)), un `WM_INITDIALOG` messaggio viene inviato e questo metodo viene chiamato. Crea un'istanza di un controllo Windows Form nella finestra di dialogo e regola le dimensioni della finestra di dialogo per contenere per le dimensioni del controllo utente. Quindi ospita il nuovo controllo nella finestra di dialogo MFC.  
  
 Eseguire l'override di questa funzione membro se è necessario eseguire un'elaborazione speciale quando viene inizializzata nella finestra di dialogo. Per ulteriori informazioni sull'utilizzo di questo metodo, vedere [CDialog](../../mfc/reference/cdialog-class.md#oninitdialog).  
  
##  <a name="operator_-_gt"></a>CWinFormsDialog::operator-&gt;  
 Sostituisce [CWinFormsDialog::GetControl](#getcontrol) nelle espressioni.  
  
```  
inline TManagedControl^  operator->() const throw();
```  
  
### <a name="remarks"></a>Note  
 Questo operatore offre una sintassi efficiente che sostituisce `GetControl` nelle espressioni.  
  
 Per informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
##  <a name="operator_tmanagedcontrol_xor"></a>CWinFormsDialog::operator TManagedControl ^  
 Esegue il cast di un tipo come un riferimento a un controllo utente Windows Form.  
  
```  
inline operator TManagedControl^() const throw();
```  
  
### <a name="remarks"></a>Note  
 Questo operatore esegue il cast di un tipo come un riferimento a un controllo Windows Form. Viene utilizzato per passare un `CWinFormsDialog<TManagedControl>` finestra di dialogo per le funzioni che accettano un puntatore a un oggetto di controllo utente Windows Form.  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Classe CWinFormsView](../../mfc/reference/cwinformsview-class.md)   
 [Classe CDialog](../../mfc/reference/cdialog-class.md)
