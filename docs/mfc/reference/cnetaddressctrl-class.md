---
title: Classe CNetAddressCtrl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CNetAddressCtrl
- AFXCMN/CNetAddressCtrl
- AFXCMN/CNetAddressCtrl::CNetAddressCtrl
- AFXCMN/CNetAddressCtrl::Create
- AFXCMN/CNetAddressCtrl::CreateEx
- AFXCMN/CNetAddressCtrl::DisplayErrorTip
- AFXCMN/CNetAddressCtrl::GetAddress
- AFXCMN/CNetAddressCtrl::GetAllowType
- AFXCMN/CNetAddressCtrl::SetAllowType
dev_langs:
- C++
helpviewer_keywords:
- CNetAddressCtrl class
ms.assetid: cb4c6aca-3f49-4b52-b76c-65f57096155b
caps.latest.revision: 32
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
ms.openlocfilehash: 03b08d13a9e456c5533b4dddce7f389a63a69c6d
ms.lasthandoff: 02/24/2017

---
# <a name="cnetaddressctrl-class"></a>Classe CNetAddressCtrl
La classe `CNetAddressCtrl` rappresenta il controllo indirizzo di rete, che è possibile utilizzare per immettere e convalidare il formato di indirizzi IPv4, IPv6 e DNS denominati.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CNetAddressCtrl : public CEdit  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CNetAddressCtrl::CNetAddressCtrl](#cnetaddressctrl)|Costruisce un oggetto `CNetAddressCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CNetAddressCtrl::Create](#create)|Crea un controllo indirizzo di rete con gli stili specificati e lo collega a corrente `CNetAddressCtrl` oggetto.|  
|[CNetAddressCtrl::CreateEx](#createex)|Crea un controllo indirizzo di rete con stili estesi specificati e lo collega a corrente `CNetAddressCtrl` oggetto.|  
|[CNetAddressCtrl::DisplayErrorTip](#displayerrortip)|Visualizza un fumetto suggerimento di errore quando l'utente immette un indirizzo di rete non supportata nel controllo di indirizzo di rete corrente.|  
|[CNetAddressCtrl::GetAddress](#getaddress)|Recupera una rappresentazione convalidata e analizzata dell'indirizzo di rete associato al controllo indirizzo di rete corrente.|  
|[CNetAddressCtrl::GetAllowType](#getallowtype)|Recupera il tipo di indirizzo di rete in grado di supportare il controllo indirizzo di rete corrente.|  
|[CNetAddressCtrl::SetAllowType](#setallowtype)|Imposta il tipo di indirizzo di rete in grado di supportare il controllo indirizzo di rete corrente.|  
  
## <a name="remarks"></a>Note  
 Il controllo indirizzo di rete verifica che il formato dell'indirizzo che immesso sia corretto. Il controllo non sono effettivamente connesse all'indirizzo di rete. Il [CNetAddressCtrl::SetAllowType](#setallowtype) metodo specifica uno o più tipi di indirizzo che il [CNetAddressCtrl::GetAddress](#getaddress) metodo può analizzare e verificare. Un indirizzo può essere sotto forma di un IPv4, IPv6 o indirizzo denominato per un server, rete, host o destinazione dei messaggi broadcast. Se il formato dell'indirizzo è corretto, è possibile utilizzare il [CNetAddressCtrl::DisplayErrorTip](#displayerrortip) metodo per visualizzare una finestra di messaggio popup che punta alla casella di testo del controllo indirizzo di rete e viene visualizzato un messaggio di errore predefinite graficamente.  
  
 Il `CNetAddressCtrl` viene derivata dal [CEdit](../../mfc/reference/cedit-class.md) (classe). Di conseguenza, il controllo indirizzo di rete consente di accedere a tutti i messaggi di controllo modifica di Windows.  
  
 Nella figura seguente viene illustrata una finestra di dialogo contenente un controllo indirizzo di rete. Il testo casella (1) per il controllo indirizzo di rete contiene un indirizzo di rete non valido. Se l'indirizzo di rete non è valido, viene visualizzato il messaggio popup (2).  
  
 ![Finestra di dialogo con un controllo indirizzo di rete e finestra popup. ] (../../mfc/reference/media/cnetaddctrl.png "cnetaddctrl")  
  
## <a name="example"></a>Esempio  
 Esempio di codice seguente costituisce una parte di una finestra di dialogo che consente di convalidare un indirizzo di rete. I gestori eventi per tre pulsanti di opzione specifica che l'indirizzo di rete può essere uno dei tre tipi di indirizzo. L'utente immette un indirizzo nella casella di testo del controllo di rete, quindi preme un pulsante per convalidare l'indirizzo. Se l'indirizzo è valido, viene visualizzato un messaggio di conferma. in caso contrario, viene visualizzato il messaggio di errore predefiniti finestra popup.  
  
 [!code-cpp[NVC_MFC_CNetAddressCtrl_s1 n.&1;](../../mfc/reference/codesnippet/cpp/cnetaddressctrl-class_1.cpp)]  
  
## <a name="example"></a>Esempio  
 L'esempio di codice seguente dal file di intestazione della finestra di dialogo definisce il [NC_ADDRESS](http://msdn.microsoft.com/library/windows/desktop/bb773345) e [NET_ADDRESS_INFO](http://msdn.microsoft.com/library/windows/desktop/bb773346) le variabili che sono necessarie per il [CNetAddressCtrl::GetAddress](#getaddress) metodo.  
  
 [!code-cpp[NVC_MFC_CNetAddressCtrl_s1 n.&2;](../../mfc/reference/codesnippet/cpp/cnetaddressctrl-class_2.h)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CEdit](../../mfc/reference/cedit-class.md)  
  
 `CNetAddressCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
 Questa classe è supportata in [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] e versioni successive.  
  
 Requisiti aggiuntivi per questa classe sono descritti [creare requisiti per Windows Vista controlli comuni](../../mfc/build-requirements-for-windows-vista-common-controls.md).  
  
##  <a name="cnetaddressctrl"></a>CNetAddressCtrl::CNetAddressCtrl  
 Costruisce un oggetto `CNetAddressCtrl`.  
  
```  
CNetAddressCtrl();
```  
  
### <a name="remarks"></a>Note  
 Utilizzare il [CNetAddressCtrl::Create](#create) o [CNetAddressCtrl::CreateEx](#createex) per creare un controllo di rete e associarlo al `CNetAddressCtrl` oggetto.  
  
##  <a name="create"></a>CNetAddressCtrl::Create  
 Crea un controllo indirizzo di rete con gli stili specificati e lo collega a corrente `CNetAddressCtrl` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,   
    const RECT& rect,   
    CWnd* pParentWnd,   
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `dwStyle`|Combinazione bit per bit degli stili da applicare al controllo. Per ulteriori informazioni, vedere [modifica stili](../../mfc/reference/edit-styles.md).|  
|[in] `rect`|Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che contiene la posizione e le dimensioni del controllo.|  
|[in] `pParentWnd`|Un puntatore non null a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto finestra padre del controllo.|  
|[in] `nID`|L'ID del controllo.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
##  <a name="createex"></a>CNetAddressCtrl::CreateEx  
 Crea un controllo indirizzo di rete con stili estesi specificati e lo collega a corrente `CNetAddressCtrl` oggetto.  
  
```  
virtual BOOL CreateEx(
    DWORD dwExStyle,   
    DWORD dwStyle,   
    const RECT& rect,   
    CWnd* pParentWnd,   
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `dwExStyle`|Combinazione bit per bit (OR) degli stili estesi da applicare al controllo. Per ulteriori informazioni, vedere il `dwExStyle` parametro il [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) (funzione).|  
|[in] `dwStyle`|Combinazione bit per bit (OR) di stili da applicare al controllo. Per ulteriori informazioni, vedere [modifica stili](../../mfc/reference/edit-styles.md).|  
|[in] `rect`|Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che contiene la posizione e le dimensioni del controllo.|  
|[in] `pParentWnd`|Un puntatore non null a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto finestra padre del controllo.|  
|[in] `nID`|L'ID del controllo.|  
  
### <a name="return-value"></a>Valore restituito  
 `true` se questo metodo dà esito positivo; in caso contrario, `false`.  
  
##  <a name="displayerrortip"></a>CNetAddressCtrl::DisplayErrorTip  
 Visualizza un messaggio di errore nel fumetto suggerimento è associato il controllo indirizzo di rete corrente.  
  
```  
HRESULT DisplayErrorTip();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore `S_OK` se questo metodo dà esito positivo; in caso contrario, un codice di errore.  
  
### <a name="remarks"></a>Note  
 Utilizzare il [CNetAddressCtrl::SetAllowType](#setallowtype) per specificare i tipi di indirizzi in grado di supportare il controllo indirizzo di rete corrente. Utilizzare il [CNetAddressCtrl::GetAddress](#getaddress) metodo per convalidare e analizzare l'indirizzo di rete immesso dall'utente. Utilizzare il [CNetAddressCtrl::DisplayErrorTip](#displayerrortip) metodo per visualizzare una finestra popup messaggio di errore se il [CNetAddressCtrl::GetAddress](#getaddress) metodo ha esito negativo.  
  
 Questo messaggio richiama il [NetAddr_DisplayErrorTip](http://msdn.microsoft.com/library/windows/desktop/bb774314) (macro), descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Macro invia il `NCM_DISPLAYERRORTIP` messaggio.  
  
##  <a name="getaddress"></a>CNetAddressCtrl::GetAddress  
 Recupera una rappresentazione convalidata e analizzata dell'indirizzo di rete che è associato il controllo indirizzo di rete corrente.  
  
```  
HRESULT GetAddress(PNC_ADDRESS pAddress) const;  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in, out] `pAddress`|Puntatore a un [NC_ADDRESS](http://msdn.microsoft.com/library/windows/desktop/bb773345) struttura.  Impostare il `pAddrInfo` membro della struttura all'indirizzo di un [NET_ADDRESS_INFO](http://msdn.microsoft.com/library/windows/desktop/bb773346) struttura prima di chiamare il metodo GetAddress.|  
  
### <a name="return-value"></a>Valore restituito  
 Il valore `S_OK` se questo metodo dà esito positivo; in caso contrario, un codice di errore COM. Per ulteriori informazioni sui codici di errore possibili, vedere la sezione di valore restituito di [NetAddr_GetAddress](http://msdn.microsoft.com/library/windows/desktop/bb774316) (macro).  
  
### <a name="remarks"></a>Note  
 Se questo metodo dà esito positivo, il [NET_ADDRESS_INFO](http://msdn.microsoft.com/library/windows/desktop/bb773346) struttura contiene informazioni aggiuntive sull'indirizzo di rete.  
  
 Utilizzare il [CNetAddressCtrl::SetAllowType](#setallowtype) per specificare i tipi di indirizzi in grado di supportare il controllo indirizzo di rete corrente. Utilizzare il [CNetAddressCtrl::GetAddress](#getaddress) metodo per convalidare e analizzare l'indirizzo di rete immesso dall'utente. Utilizzare il [CNetAddressCtrl::DisplayErrorTip](#displayerrortip) metodo per visualizzare una finestra popup messaggio di errore se il [CNetAddressCtrl::GetAddress](#getaddress) metodo ha esito negativo.  
  
 Questo metodo richiama il [NetAddr_GetAddress](http://msdn.microsoft.com/library/windows/desktop/bb774316) (macro), descritto il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Macro invia il `NCM_GETADDRESS` messaggio.  
  
##  <a name="getallowtype"></a>CNetAddressCtrl::GetAllowType  
 Recupera il tipo di indirizzo di rete in grado di supportare il controllo indirizzo di rete corrente.  
  
```  
DWORD GetAllowType() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Una combinazione bit per bit (OR) di flag che specifica i tipi di indirizzi può supportare il controllo indirizzo di rete. Per ulteriori informazioni, vedere [NET_STRING](http://msdn.microsoft.com/library/windows/desktop/bb762586).  
  
### <a name="remarks"></a>Note  
 Questo messaggio richiama il [NetAddr_GetAllowType](http://msdn.microsoft.com/library/windows/desktop/bb774318) (macro), descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Macro invia il `NCM_GETALLOWTYPE` messaggio.  
  
##  <a name="setallowtype"></a>CNetAddressCtrl::SetAllowType  
 Imposta il tipo di indirizzo di rete in grado di supportare il controllo indirizzo di rete corrente.  
  
```  
HRESULT SetAllowType(DWORD dwAddrMask);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `dwAddrMask`|Una combinazione bit per bit (OR) di flag che specifica i tipi di indirizzi può supportare il controllo indirizzo di rete. Per ulteriori informazioni, vedere [NET_STRING](http://msdn.microsoft.com/library/windows/desktop/bb762586).|  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se questo metodo dà esito positivo. in caso contrario, un codice di errore COM.  
  
### <a name="remarks"></a>Note  
 Utilizzare il [CNetAddressCtrl::SetAllowType](#setallowtype) per specificare i tipi di indirizzi in grado di supportare il controllo indirizzo di rete corrente. Utilizzare il [CNetAddressCtrl::GetAddress](#getaddress) metodo per convalidare e analizzare l'indirizzo di rete immesso dall'utente. Utilizzare il [CNetAddressCtrl::DisplayErrorTip](#displayerrortip) metodo per visualizzare una finestra popup messaggio di errore se il [CNetAddressCtrl::GetAddress](#getaddress) metodo ha esito negativo.  
  
 Questo messaggio richiama il [NetAddr_SetAllowType](http://msdn.microsoft.com/library/windows/desktop/bb774320) (macro), descritto nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Macro invia il `NCM_SETALLOWTYPE` messaggio.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CNetAddressCtrl](../../mfc/reference/cnetaddressctrl-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CEdit](../../mfc/reference/cedit-class.md)

