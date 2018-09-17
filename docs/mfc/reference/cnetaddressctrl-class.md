---
title: Classe CNetAddressCtrl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CNetAddressCtrl [MFC], CNetAddressCtrl
- CNetAddressCtrl [MFC], Create
- CNetAddressCtrl [MFC], CreateEx
- CNetAddressCtrl [MFC], DisplayErrorTip
- CNetAddressCtrl [MFC], GetAddress
- CNetAddressCtrl [MFC], GetAllowType
- CNetAddressCtrl [MFC], SetAllowType
ms.assetid: cb4c6aca-3f49-4b52-b76c-65f57096155b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b035f496a8daf34334d6e3a6690046c862795dc9
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45714558"
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
|[CNetAddressCtrl::Create](#create)|Crea un controllo di indirizzo di rete con gli stili specificati e lo collega all'oggetto corrente `CNetAddressCtrl` oggetto.|  
|[CNetAddressCtrl::CreateEx](#createex)|Crea un controllo di indirizzo di rete con gli stili estesi e la collega all'oggetto corrente `CNetAddressCtrl` oggetto.|  
|[CNetAddressCtrl::DisplayErrorTip](#displayerrortip)|Visualizza un fumetto suggerimento di errore quando l'utente immette un indirizzo di rete non supportata nel controllo di indirizzo di rete corrente.|  
|[CNetAddressCtrl::GetAddress](#getaddress)|Recupera una rappresentazione convalidata e analizzata dell'indirizzo di rete associato al controllo indirizzo di rete corrente.|  
|[CNetAddressCtrl::GetAllowType](#getallowtype)|Recupera il tipo di indirizzo di rete in grado di supportare il controllo di indirizzo di rete corrente.|  
|[CNetAddressCtrl::SetAllowType](#setallowtype)|Imposta il tipo di indirizzo di rete in grado di supportare il controllo di indirizzo di rete corrente.|  
  
## <a name="remarks"></a>Note  
 Il controllo di indirizzo di rete consente di verificare che il formato dell'indirizzo che immesso sia corretto. Il controllo in realtà non si connette all'indirizzo di rete. Il [CNetAddressCtrl::SetAllowType](#setallowtype) metodo consente di specificare uno o più tipi di indirizzo che il [CNetAddressCtrl::GetAddress](#getaddress) metodo può analizzare e verificare. Un indirizzo può essere sotto forma di un IPv4, IPv6 o indirizzo denominato per un server, rete, host o destinazione dei messaggi trasmessi. Se il formato dell'indirizzo non è corretto, è possibile usare la [CNetAddressCtrl::DisplayErrorTip](#displayerrortip) metodo per visualizzare una finestra di messaggio popup che punta alla casella di testo del controllo indirizzo rete graficamente e visualizza un oggetto predefinito messaggio di errore.  
  
 Il `CNetAddressCtrl` classe è derivata dal [CEdit](../../mfc/reference/cedit-class.md) classe. Di conseguenza, il controllo di indirizzo di rete fornisce accesso a tutti i messaggi di controllo di modifica di Windows.  
  
 La figura seguente rappresenta una finestra di dialogo contenente un controllo di indirizzo di rete. Il testo casella (1) per il controllo di indirizzo di rete contiene un indirizzo di rete non è valida. Se l'indirizzo di rete non è valido, viene visualizzato il messaggio finestra popup (2).  
  
 ![Finestra di dialogo con un controllo dell'indirizzo di rete e una finestra popup. ](../../mfc/reference/media/cnetaddctrl.png "cnetaddctrl")  
  
## <a name="example"></a>Esempio  
 Esempio di codice seguente è una parte di una finestra di dialogo che consente di convalidare un indirizzo di rete. I gestori eventi per tre pulsanti di opzione specifica che l'indirizzo di rete può essere uno dei tre tipi di indirizzo. L'utente immette un indirizzo nella casella di testo del controllo di rete, quindi preme un pulsante per convalidare l'indirizzo. Se l'indirizzo è valido, viene visualizzato un messaggio di esito positivo; in caso contrario, viene visualizzato il messaggio di errore infotip predefiniti.  
  
 [!code-cpp[NVC_MFC_CNetAddressCtrl_s1#1](../../mfc/reference/codesnippet/cpp/cnetaddressctrl-class_1.cpp)]  
  
## <a name="example"></a>Esempio  
 L'esempio di codice seguente dal file di intestazione dialogo definisce la [NC_ADDRESS](/windows/desktop/api/shellapi/ns-shellapi-tagnc_address) e [NET_ADDRESS_INFO](https://msdn.microsoft.com/library/windows/desktop/bb773346) variabili necessarie per il [CNetAddressCtrl::GetAddress](#getaddress)metodo.  
  
 [!code-cpp[NVC_MFC_CNetAddressCtrl_s1#2](../../mfc/reference/codesnippet/cpp/cnetaddressctrl-class_2.h)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CEdit](../../mfc/reference/cedit-class.md)  
  
 `CNetAddressCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
 Questa classe è supportata in Windows Vista e versioni successive.  
  
 Requisiti aggiuntivi per questa classe sono descritte nel [compilare i requisiti per Windows Vista controlli comuni](../../mfc/build-requirements-for-windows-vista-common-controls.md).  
  
##  <a name="cnetaddressctrl"></a>  CNetAddressCtrl::CNetAddressCtrl  
 Costruisce un oggetto `CNetAddressCtrl`.  
  
```  
CNetAddressCtrl();
```  
  
### <a name="remarks"></a>Note  
 Usare la [CNetAddressCtrl::Create](#create) o [CNetAddressCtrl::CreateEx](#createex) per creare un controllo di rete e associarlo al `CNetAddressCtrl` oggetto.  
  
##  <a name="create"></a>  CNetAddressCtrl::Create  
 Crea un controllo di indirizzo di rete con gli stili specificati e lo collega all'oggetto corrente `CNetAddressCtrl` oggetto.  
  
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
|*dwStyle*|[in] Combinazione bit per bit di stili da applicare al controllo. Per altre informazioni, vedere [modifica stili](../../mfc/reference/styles-used-by-mfc.md#edit-styles).|  
|*Rect*|[in] Un riferimento a un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che contiene la posizione e dimensioni del controllo.|  
|*pParentWnd*|[in] Un puntatore non null a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto, ovvero la finestra padre del controllo.|  
|*nID*|[in] L'ID del controllo.|  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.  
  
##  <a name="createex"></a>  CNetAddressCtrl::CreateEx  
 Crea un controllo di indirizzo di rete con gli stili estesi e la collega all'oggetto corrente `CNetAddressCtrl` oggetto.  
  
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
|*dwExStyle*|[in] Una combinazione bit per bit (OR) di stili estesi da applicare al controllo. Per altre informazioni, vedere la *dwExStyle* parametro delle [CreateWindowEx](/windows/desktop/api/winuser/nf-winuser-createwindowexa) (funzione).|  
|*dwStyle*|[in] Una combinazione bit per bit (OR) di stili da applicare al controllo. Per altre informazioni, vedere [modifica stili](../../mfc/reference/styles-used-by-mfc.md#edit-styles).|  
|*Rect*|[in] Un riferimento a un [RECT](https://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che contiene la posizione e dimensioni del controllo.|  
|*pParentWnd*|[in] Un puntatore non null a un [CWnd](../../mfc/reference/cwnd-class.md) oggetto, ovvero la finestra padre del controllo.|  
|*nID*|[in] L'ID del controllo.|  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se questo metodo ha esito positivo; in caso contrario, FALSE.  
  
##  <a name="displayerrortip"></a>  CNetAddressCtrl::DisplayErrorTip  
 Visualizza un messaggio di errore nel fumetto suggerimento associato con il controllo di indirizzo di rete corrente.  
  
```  
HRESULT DisplayErrorTip();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore `S_OK` se questo metodo ha esito positivo; in caso contrario, un codice di errore.  
  
### <a name="remarks"></a>Note  
 Usare la [CNetAddressCtrl::SetAllowType](#setallowtype) metodo per specificare i tipi di indirizzi in grado di supportare il controllo di indirizzo di rete corrente. Usare la [CNetAddressCtrl::GetAddress](#getaddress) metodo per convalidare e analizzare l'indirizzo di rete immessi dall'utente. Usare la [CNetAddressCtrl::DisplayErrorTip](#displayerrortip) metodo per visualizzare una finestra popup messaggio di errore se il [CNetAddressCtrl::GetAddress](#getaddress) metodo ha esito negativo.  
  
 Questo messaggio richiama il [NetAddr_DisplayErrorTip](/windows/desktop/api/shellapi/nf-shellapi-netaddr_displayerrortip) (macro), che è descritti nel SDK di Windows. Invia tale macro di `NCM_DISPLAYERRORTIP` messaggio.  
  
##  <a name="getaddress"></a>  CNetAddressCtrl::GetAddress  
 Recupera una rappresentazione convalidata e analizzata dell'indirizzo di rete è associato il controllo di indirizzo di rete corrente.  
  
```  
HRESULT GetAddress(PNC_ADDRESS pAddress) const;  
```  
  
### <a name="parameters"></a>Parametri  

*pAddress*<br/>
[in, out] Puntatore a un [NC_ADDRESS](/windows/desktop/api/shellapi/ns-shellapi-tagnc_address) struttura.  Impostare il *pAddrInfo* membro della struttura all'indirizzo di un [NET_ADDRESS_INFO](https://msdn.microsoft.com/library/windows/desktop/bb773346) struttura prima di chiamare il metodo GetAddress.
  
### <a name="return-value"></a>Valore restituito  
 Il valore S_OK se questo metodo ha esito positivo; in caso contrario, un codice di errore COM. Per altre informazioni sui possibili codici di errore, vedere la sezione di valore restituito del [NetAddr_GetAddress](/windows/desktop/api/shellapi/nf-shellapi-netaddr_getaddress) macro.  
  
### <a name="remarks"></a>Note  
 Se questo metodo ha esito positivo, il [NET_ADDRESS_INFO](https://msdn.microsoft.com/library/windows/desktop/bb773346) struttura contiene informazioni aggiuntive sull'indirizzo di rete.  
  
 Usare la [CNetAddressCtrl::SetAllowType](#setallowtype) metodo per specificare i tipi di indirizzi può supportare il controllo di indirizzo di rete corrente. Usare la [CNetAddressCtrl::GetAddress](#getaddress) metodo per convalidare e analizzare l'indirizzo di rete immessi dall'utente. Usare la [CNetAddressCtrl::DisplayErrorTip](#displayerrortip) metodo per visualizzare una finestra popup messaggio di errore se il [CNetAddressCtrl::GetAddress](#getaddress) metodo ha esito negativo.  
  
 Questo metodo richiama il [NetAddr_GetAddress](/windows/desktop/api/shellapi/nf-shellapi-netaddr_getaddress) (macro), che è descritti nel SDK di Windows. Tale macro invia il messaggio NCM_GETADDRESS.  
  
##  <a name="getallowtype"></a>  CNetAddressCtrl::GetAllowType  
 Recupera il tipo di indirizzo di rete in grado di supportare il controllo di indirizzo di rete corrente.  
  
```  
DWORD GetAllowType() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Una combinazione bit per bit (OR) di flag che specifica i tipi di indirizzi può supportare il controllo di indirizzo di rete. Per altre informazioni, vedere [NET_STRING](https://msdn.microsoft.com/library/windows/desktop/bb762586).  
  
### <a name="remarks"></a>Note  
 Questo messaggio richiama il [NetAddr_GetAllowType](/windows/desktop/api/shellapi/nf-shellapi-netaddr_getallowtype) (macro), che è descritti nel SDK di Windows. Tale macro invia il messaggio NCM_GETALLOWTYPE.  
  
##  <a name="setallowtype"></a>  CNetAddressCtrl::SetAllowType  
 Imposta il tipo di indirizzo di rete in grado di supportare il controllo di indirizzo di rete corrente.  
  
```  
HRESULT SetAllowType(DWORD dwAddrMask);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|*dwAddrMask*|[in] Una combinazione bit per bit (OR) di flag che specifica i tipi di indirizzi può supportare il controllo di indirizzo di rete. Per altre informazioni, vedere [NET_STRING](https://msdn.microsoft.com/library/windows/desktop/bb762586).|  
  
### <a name="return-value"></a>Valore restituito  
 S_OK se questo metodo ha esito positivo; in caso contrario, un codice di errore COM.  
  
### <a name="remarks"></a>Note  
 Usare la [CNetAddressCtrl::SetAllowType](#setallowtype) metodo per specificare i tipi di indirizzi in grado di supportare il controllo di indirizzo di rete corrente. Usare la [CNetAddressCtrl::GetAddress](#getaddress) metodo per convalidare e analizzare l'indirizzo di rete immessi dall'utente. Usare la [CNetAddressCtrl::DisplayErrorTip](#displayerrortip) metodo per visualizzare una finestra popup messaggio di errore se il [CNetAddressCtrl::GetAddress](#getaddress) metodo ha esito negativo.  
  
 Questo messaggio richiama il [NetAddr_SetAllowType](/windows/desktop/api/shellapi/nf-shellapi-netaddr_setallowtype) (macro), che è descritti nel SDK di Windows. Tale macro invia il messaggio NCM_SETALLOWTYPE.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CNetAddressCtrl](../../mfc/reference/cnetaddressctrl-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CEdit](../../mfc/reference/cedit-class.md)
