---
title: Classe CWinFormsControl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CWinFormsControl
dev_langs:
- C++
helpviewer_keywords:
- MFC [C++], Windows Forms support
- CWinFormsControl class
- Windows Forms [C++], MFC support
ms.assetid: 6406dd7b-fb89-4a18-ac3a-c010d6b6289a
caps.latest.revision: 28
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
ms.openlocfilehash: 49e24c04deda3df5683908fa9ca485cf7802214b
ms.lasthandoff: 02/24/2017

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
|[CWinFormsControl::CWinFormsControl](#cwinformscontrol)|Costruisce un oggetto wrapper del controllo Windows Form di MFC.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinFormsControl::CreateManagedControl](#createmanagedcontrol)|Crea un controllo Windows Form in un contenitore di MFC.|  
|[CWinFormsControl::GetControl](#getcontrol)|Recupera un puntatore al controllo Windows Form.|  
|[CWinFormsControl::GetControlHandle](#getcontrolhandle)|Recupera un handle per il controllo Windows Form.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinFormsControl::operator-&gt;](#operator_-_gt)|Sostituisce [CWinFormsControl::GetControl](#getcontrol) nelle espressioni.|  
|[CWinFormsControl::operator TManagedControl ^](#operator_tmanagedcontrol)|Esegue il cast di un tipo come un puntatore a un controllo Windows Form.|  
  
## <a name="remarks"></a>Note  
 La `CWinFormsControl` classe fornisce la funzionalità di base per l'hosting di un controllo Windows Form.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
 Il codice MFC deve essere memorizzati gli handle di finestra (in genere archiviati in `m_hWnd`). Alcune proprietà dei controlli Windows Form richiedono che Win32 sottostante `Window` essere eliminati e ricreati utilizzando `DestroyWindow` e `CreateWindow`. Gli handle di implementazione di Windows Form di MFC la `Destroy` e `Create` eventi dei controlli per aggiornare il `m_hWnd` membro.  
  
> [!NOTE]
>  L'integrazione di Windows Form MFC funziona solo nei progetti collegano in modo dinamico a MFC (in cui è definito AFXDLL).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinforms. h  
  
##  <a name="a-namecreatemanagedcontrola--cwinformscontrolcreatemanagedcontrol"></a><a name="createmanagedcontrol"></a>CWinFormsControl::CreateManagedControl  
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
 Lo stile di finestra da applicare al controllo. Specificare una combinazione di [stili finestra](../../mfc/reference/window-styles.md). Attualmente sono supportati i seguenti stili: WS_TABSTOP, WS_VISIBLE, WS_DISABLED e WS_GROUP.  
  
 `rect`  
 Oggetto [struttura RECT](../../mfc/reference/rect-structure1.md) che definisce le coordinate degli angoli in alto a sinistra e in basso a destra del controllo (primo overload solo).  
  
 `nPlaceHolderID`  
 L'handle del controllo sul posto statico titolare inserito nell'Editor di risorse. Il controllo Windows Form appena creato sostituisce il controllo statico, presupponendo che la posizione, l'ordine z e stili (secondo overload solo).  
  
 `pParentWnd`  
 Puntatore alla finestra padre.  
  
 `nID`  
 Il numero di ID di risorsa da assegnare al controllo appena creato.  
  
 `pControl`  
 Un'istanza di un controllo Windows Form può essere associato il [CWinFormsControl](../../mfc/reference/cwinformscontrol-class.md) (quarto overload solo) dell'oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, restituisce un valore diverso da zero. In caso contrario, restituisce zero.  
  
### <a name="remarks"></a>Note  
 Questo metodo crea un'istanza di un controllo Windows Form di .NET Framework in un contenitore di MFC.  
  
 Il primo overload del metodo accetta un tipo di dati .NET Framework `pType` in modo che MFC può creare un'istanza di un nuovo oggetto di questo tipo. `pType`deve essere un [tipo](https://msdn.microsoft.com/en-us/library/system.type) tipo di dati.  
  
 Il secondo overload del metodo crea un controllo Windows Form in base il `TManagedControl` parametro di modello della `CWinFormsControl` classe. Le dimensioni e posizione del controllo si basa sul `RECT` struttura passata al metodo. Solo `dwStyle` è importante per gli stili.  
  
 Il terzo overload del metodo crea un controllo Windows Form che sostituisce un controllo statico, eliminarlo e supponendo che la posizione, l'ordine z e stili. Il controllo statico viene utilizzato solo come segnaposto per il controllo Windows Form. Quando si crea il controllo, questo overload combina gli stili di `dwStyle` con stili di risorse del controllo statico.  
  
 Il quarto overload del metodo consente di passare in un controllo Windows Form già creato `pControl` che sarà eseguito il wrapping di MFC. Deve essere dello stesso tipo di `TManagedControl` parametro di modello della `CWinFormsControl` classe.  
  
 Vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md) per gli esempi sull'utilizzo di Windows Form controlla.  
  
##  <a name="a-namecwinformscontrola--cwinformscontrolcwinformscontrol"></a><a name="cwinformscontrol"></a>CWinFormsControl::CWinFormsControl  
 Costruisce un oggetto wrapper del controllo Windows Form di MFC.  
  
```  
CWinFormsControl();
```  
  
### <a name="remarks"></a>Note  
 Il controllo Windows Form viene creata un'istanza quando si chiama [CWinFormsControl::CreateManagedControl](#createmanagedcontrol).  
  
##  <a name="a-namegetcontrola--cwinformscontrolgetcontrol"></a><a name="getcontrol"></a>CWinFormsControl::GetControl  
 Recupera un puntatore al controllo Windows Form.  
  
```  
inline TManagedControl^ GetControl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore al controllo Windows Form.  
  
### <a name="example"></a>Esempio  
  Vedere [CWinFormsControl::CreateManagedControl](#createmanagedcontrol).  
  
##  <a name="a-namegetcontrolhandlea--cwinformscontrolgetcontrolhandle"></a><a name="getcontrolhandle"></a>CWinFormsControl::GetControlHandle  
 Recupera un handle per il controllo Windows Form.  
  
```  
inline HWND GetControlHandle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un handle per il controllo Windows Form.  
  
### <a name="remarks"></a>Note  
 `GetControlHandle`è un metodo helper che restituisce l'handle di finestra memorizzato nelle proprietà del controllo .NET Framework. Il valore di handle di finestra viene copiato per [CWnd::m_hWnd](../../mfc/reference/cwnd-class.md#m_hwnd) durante la chiamata a [CWnd::Attach](../../mfc/reference/cwnd-class.md#attach).  
  
##  <a name="a-nameoperator-gta--cwinformscontroloperator--gt"></a><a name="operator_-_gt"></a>CWinFormsControl::operator-&gt;  
 Sostituisce [CWinFormsControl::GetControl](#getcontrol) nelle espressioni.  
  
```  
inline TManagedControl^  operator->() const;  
```  
  
### <a name="remarks"></a>Note  
 Questo operatore offre una sintassi efficiente che sostituisce `GetControl` nelle espressioni.  
  
 Per ulteriori informazioni su Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
##  <a name="a-nameoperatortmanagedcontrola--cwinformscontroloperator-tmanagedcontrol"></a><a name="operator_tmanagedcontrol"></a>CWinFormsControl::operator TManagedControl ^  
 Esegue il cast di un tipo come un puntatore a un controllo Windows Form.  
  
```  
inline operator TManagedControl^() const;  
```  
  
### <a name="remarks"></a>Note  
 Questo operatore passa `CWinFormsControl<``TManagedControl``>` alle funzioni che accettano un puntatore a un controllo Windows Form.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CWinFormsDialog](../../mfc/reference/cwinformsdialog-class.md)   
 [Classe CWinFormsView](../../mfc/reference/cwinformsview-class.md)

