---
title: Classe CWinFormsControl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CWinFormsControl
- AFXWINFORMS/CWinFormsControl
- AFXWINFORMS/CWinFormsControl::CWinFormsControl
- AFXWINFORMS/CWinFormsControl::CreateManagedControl
- AFXWINFORMS/CWinFormsControl::GetControl
- AFXWINFORMS/CWinFormsControl::GetControlHandle
dev_langs:
- C++
helpviewer_keywords:
- CWinFormsControl [MFC], CWinFormsControl
- CWinFormsControl [MFC], CreateManagedControl
- CWinFormsControl [MFC], GetControl
- CWinFormsControl [MFC], GetControlHandle
ms.assetid: 6406dd7b-fb89-4a18-ac3a-c010d6b6289a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f2e6bf46cf28c3bca3d71f85cdd681745a0379bd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cwinformscontrol-class"></a>Classe CWinFormsControl
Fornisce la funzionalità di base per l'hosting di un controllo Windows Form.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template<class TManagedControl>  
class CWinFormsControl : public CWnd  
```  
  
#### <a name="parameters"></a>Parametri  
 `TManagedControl`  
 Un controllo Windows Form di .NET Framework da visualizzare nell'applicazione MFC.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinFormsControl::CWinFormsControl](#cwinformscontrol)|Costruisce un oggetto wrapper di controllo Windows Form di MFC.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinFormsControl::CreateManagedControl](#createmanagedcontrol)|Crea un controllo Windows Form in un contenitore di MFC.|  
|[CWinFormsControl::GetControl](#getcontrol)|Recupera un puntatore per il controllo Windows Form.|  
|[CWinFormsControl::GetControlHandle](#getcontrolhandle)|Recupera un handle per il controllo Windows Form.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinFormsControl::operator-&gt;](#operator_-_gt)|Sostituisce [CWinFormsControl::GetControl](#getcontrol) nelle espressioni.|  
|[CWinFormsControl::operator TManagedControl ^](#operator_tmanagedcontrol)|Esegue il cast di un tipo come un puntatore a un controllo Windows Form.|  
  
## <a name="remarks"></a>Note  
 La `CWinFormsControl` classe fornisce la funzionalità di base per l'hosting di un controllo Windows Form.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
 Il codice MFC deve essere memorizzati gli handle di finestra (in genere archiviati in `m_hWnd`). Alcune proprietà dei controlli Windows Form richiedono che Win32 sottostante `Window` eliminato e ricreato utilizzando `DestroyWindow` e `CreateWindow`. Gli handle di implementazione MFC Windows Form di `Destroy` e `Create` eventi dei controlli per aggiornare il `m_hWnd` membro.  
  
> [!NOTE]
>  Integrazione di Windows Form MFC funziona solo nei progetti di collegano in modo dinamico con MFC (in cui è definito AFXDLL).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinforms. h  
  
##  <a name="createmanagedcontrol"></a>CWinFormsControl::CreateManagedControl  
 Crea un controllo Windows Form in un contenitore di MFC.  
  
```  
inline BOOL CreateManagedControl(
    System::Type^ pType,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    int nID)  
inline BOOL CreateManagedControl(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    int nID);

 
inline BOOL CreateManagedControl(
    DWORD dwStyle,  
    int nPlaceHolderID,  
    CWnd* pParentWnd);

 
inline BOOL CreateManagedControl(
    typename TManagedControl^ pControl,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    int nID);
```  
  
### <a name="parameters"></a>Parametri  
 `pType`  
 Il tipo di dati del controllo da creare. Deve essere un [tipo](https://msdn.microsoft.com/en-us/library/system.type) tipo di dati.  
  
 `dwStyle`  
 Lo stile della finestra da applicare al controllo. Specificare una combinazione di [stili finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles). Attualmente, sono supportati solo gli stili seguenti: WS_TABSTOP, WS_VISIBLE, WS_DISABLED e WS_GROUP.  
  
 `rect`  
 Oggetto [struttura RECT](../../mfc/reference/rect-structure1.md) che definisce le coordinate degli angoli superiore sinistro e in basso a destra del controllo (innanzitutto eseguire l'overload solo).  
  
 `nPlaceHolderID`  
 L'handle del controllo sul posto statico titolare inserito nell'Editor di risorse. Il controllo Windows Form appena creato sostituisce il controllo statico, presupponendo che la posizione, l'ordine z e stili (secondo overload solo).  
  
 `pParentWnd`  
 Puntatore alla finestra padre.  
  
 `nID`  
 Il numero di ID di risorsa da assegnare al controllo appena creato.  
  
 `pControl`  
 Un'istanza di un controllo Windows Form può essere associato il [CWinFormsControl](../../mfc/reference/cwinformscontrol-class.md) (solo per il quarto overload) dell'oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, restituisce un valore diverso da zero. In caso contrario, restituisce zero.  
  
### <a name="remarks"></a>Note  
 Questo metodo crea un'istanza di un controllo Windows Form di .NET Framework in un contenitore di MFC.  
  
 Il primo overload del metodo accetta un tipo di dati .NET Framework `pType` in modo che MFC può creare un'istanza di un nuovo oggetto di questo tipo. `pType`deve essere un [tipo](https://msdn.microsoft.com/en-us/library/system.type) tipo di dati.  
  
 Il secondo overload del metodo crea un controllo Windows Form in base il `TManagedControl` parametro del modello del `CWinFormsControl` classe. Le dimensioni e la posizione del controllo si basa sul `RECT` struttura passata al metodo. Solo `dwStyle` è importante per gli stili.  
  
 Il terzo overload del metodo crea un controllo Windows Form che sostituisce un controllo statico, eliminarlo e presupponendo che la posizione, l'ordine z e stili. Il controllo statico viene utilizzato solo come un segnaposto per il controllo Windows Form. Quando si crea il controllo, questo overload combina gli stili di `dwStyle` con stili di risorse del controllo statico.  
  
 Il quarto overload del metodo consente di passare in un controllo Windows Form già creato `pControl` che esegua il wrapping MFC. Deve essere dello stesso tipo di `TManagedControl` parametro del modello del `CWinFormsControl` classe.  
  
 Vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md) per esempi sull'utilizzo di Windows Form i controlli.  
  
##  <a name="cwinformscontrol"></a>CWinFormsControl::CWinFormsControl  
 Costruisce un oggetto wrapper di controllo Windows Form di MFC.  
  
```  
CWinFormsControl();
```  
  
### <a name="remarks"></a>Note  
 Il controllo Windows Form viene creata un'istanza quando si chiama [CWinFormsControl::CreateManagedControl](#createmanagedcontrol).  
  
##  <a name="getcontrol"></a>CWinFormsControl::GetControl  
 Recupera un puntatore per il controllo Windows Form.  
  
```  
inline TManagedControl^ GetControl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore per il controllo Windows Form.  
  
### <a name="example"></a>Esempio  
  Vedere [CWinFormsControl::CreateManagedControl](#createmanagedcontrol).  
  
##  <a name="getcontrolhandle"></a>CWinFormsControl::GetControlHandle  
 Recupera un handle per il controllo Windows Form.  
  
```  
inline HWND GetControlHandle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un handle per il controllo Windows Form.  
  
### <a name="remarks"></a>Note  
 `GetControlHandle`è un metodo helper che restituisce l'handle di finestra archiviato nelle proprietà del controllo di .NET Framework. Il valore di handle di finestra viene copiato per [CWnd::m_hWnd](../../mfc/reference/cwnd-class.md#m_hwnd) durante la chiamata a [CWnd::Attach](../../mfc/reference/cwnd-class.md#attach).  
  
##  <a name="operator_-_gt"></a>CWinFormsControl::operator-&gt;  
 Sostituisce [CWinFormsControl::GetControl](#getcontrol) nelle espressioni.  
  
```  
inline TManagedControl^  operator->() const;  
```  
  
### <a name="remarks"></a>Note  
 Questo operatore offre una sintassi efficiente che sostituisce `GetControl` nelle espressioni.  
  
 Per ulteriori informazioni su Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
##  <a name="operator_tmanagedcontrol"></a>CWinFormsControl::operator TManagedControl ^  
 Esegue il cast di un tipo come un puntatore a un controllo Windows Form.  
  
```  
inline operator TManagedControl^() const;  
```  
  
### <a name="remarks"></a>Note  
 Questo operatore passa `CWinFormsControl<TManagedControl>` alle funzioni che accettano un puntatore a un controllo Windows Form.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CWinFormsDialog](../../mfc/reference/cwinformsdialog-class.md)   
 [Classe CWinFormsView](../../mfc/reference/cwinformsview-class.md)
