---
title: Classe CWinFormsDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CWinFormsDialog
dev_langs:
- C++
helpviewer_keywords:
- MFC [C++], Windows Forms support
- CWinFormsDialog class
- Windows Forms [C++], MFC support
ms.assetid: e3cec000-a578-448e-b06a-8af256312f61
caps.latest.revision: 26
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
ms.openlocfilehash: 86768a849b0112f7c4f8b6b2a694b80065169575
ms.lasthandoff: 02/24/2017

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
 Il controllo utente di .NET Framework da visualizzare nell'applicazione MFC.  
  
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
  
|Name||  
|----------|-|  
|[CWinFormsDialog::operator-&gt;](#operator_-_gt)|Sostituisce [CWinFormsDialog::GetControl](#getcontrol) nelle espressioni.|  
|[CWinFormsDialog::operator TManagedControl ^](#operator_tmanagedcontrol)|Esegue il cast di un tipo come un riferimento a un controllo utente Windows Form.|  
  
## <a name="remarks"></a>Note  
 `CWinFormsDialog`è un wrapper per una classe di finestra di dialogo MFC ( [CDialog](../../mfc/reference/cdialog-class.md)) che ospita un controllo utente Windows Form. In questo modo la visualizzazione dei controlli di .NET Framework in una finestra di dialogo MFC modale o non modale.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md) e [ospita un controllo utente Windows Form come una finestra di dialogo MFC](../../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinforms. h  
  
##  <a name="a-namecwinformsdialoga--cwinformsdialogcwinformsdialog"></a><a name="cwinformsdialog"></a>CWinFormsDialog::CWinFormsDialog  
 Costruisce un oggetto `CWinFormsDialog`.  
  
```  
CWinFormsDialog(UINT nIDTemplate = IDD);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDTemplate`  
 Contiene l'ID di una risorsa di modello finestra di dialogo. Utilizzare l'editor della finestra di dialogo per creare il modello di finestra di dialogo e archiviarlo nel file di script di risorsa dell'applicazione. Per ulteriori informazioni sui modelli di finestra di dialogo, vedere [CDialog (classe)](../../mfc/reference/cdialog-class.md).  
  
##  <a name="a-namegetcontrola--cwinformsdialoggetcontrol"></a><a name="getcontrol"></a>CWinFormsDialog::GetControl  
 Recupera un riferimento al controllo utente Windows Form.  
  
```  
inline TManagedControl^ GetControl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un riferimento al controllo Windows Form nella finestra di dialogo MFC.  
  
##  <a name="a-namegetcontrolhandlea--cwinformsdialoggetcontrolhandle"></a><a name="getcontrolhandle"></a>CWinFormsDialog::GetControlHandle  
 Recupera un handle di finestra per il controllo utente Windows Form.  
  
```  
inline HWND GetControlHandle() const throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un handle di finestra per il controllo utente Windows Form.  
  
##  <a name="a-nameoninitdialoga--cwinformsdialogoninitdialog"></a><a name="oninitdialog"></a>CWinFormsDialog::OnInitDialog  
 Inizializza la finestra di dialogo MFC mediante la creazione e l'hosting di un controllo utente Windows Form su di esso.  
  
```  
virtual BOOL OnInitDialog();
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore booleano che specifica se l'applicazione ha impostato lo stato attivo su uno dei controlli nella finestra di dialogo. Se `OnInitDialog` restituisce un valore diverso da zero, Windows imposta lo stato attivo al primo controllo nella finestra di dialogo. Questo metodo può restituire 0 solo se l'applicazione ha impostato in modo esplicito lo stato attivo su uno dei controlli nella finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 Quando viene creata la finestra di dialogo MFC (utilizzando il [crea](../../mfc/reference/cdialog-class.md#create), [CreateIndirect](../../mfc/reference/cdialog-class.md#createindirect), o [DoModal](../../mfc/reference/cdialog-class.md#domodal) metodo ereditato da [CDialog](../../mfc/reference/cdialog-class.md)), un `WM_INITDIALOG` messaggio viene inviato e viene chiamato questo metodo. Crea un'istanza di un controllo Windows Form nella finestra di dialogo e regola le dimensioni della finestra di dialogo per accettare le dimensioni del controllo utente. Quindi ospita il nuovo controllo nella finestra di dialogo MFC.  
  
 Eseguire l'override di questa funzione membro se è necessario eseguire un'elaborazione speciale quando la finestra di dialogo viene inizializzata. Per ulteriori informazioni sull'utilizzo di questo metodo, vedere [CDialog](../../mfc/reference/cdialog-class.md#oninitdialog).  
  
##  <a name="a-nameoperator-gta--cwinformsdialogoperator--gt"></a><a name="operator_-_gt"></a>CWinFormsDialog::operator-&gt;  
 Sostituisce [CWinFormsDialog::GetControl](#getcontrol) nelle espressioni.  
  
```  
inline TManagedControl^  operator->() const throw();
```  
  
### <a name="remarks"></a>Note  
 Questo operatore offre una sintassi efficiente che sostituisce `GetControl` nelle espressioni.  
  
 Per informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
##  <a name="a-nameoperatortmanagedcontrolxora--cwinformsdialogoperator-tmanagedcontrol"></a><a name="operator_tmanagedcontrol_xor"></a>CWinFormsDialog::operator TManagedControl ^  
 Esegue il cast di un tipo come un riferimento a un controllo utente Windows Form.  
  
```  
inline operator TManagedControl^() const throw();
```  
  
### <a name="remarks"></a>Note  
 Questo operatore esegue il cast di un tipo come un riferimento a un controllo Windows Form. Viene utilizzato per passare un `CWinFormsDialog<``TManagedControl``>` la finestra di dialogo per le funzioni che accettano un puntatore a un oggetto di controllo utente Windows Form.  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Classe CWinFormsView](../../mfc/reference/cwinformsview-class.md)   
 [CDialog (classe)](../../mfc/reference/cdialog-class.md)

