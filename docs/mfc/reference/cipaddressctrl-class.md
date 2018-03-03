---
title: Classe CIPAddressCtrl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CIPAddressCtrl
- AFXCMN/CIPAddressCtrl
- AFXCMN/CIPAddressCtrl::CIPAddressCtrl
- AFXCMN/CIPAddressCtrl::ClearAddress
- AFXCMN/CIPAddressCtrl::Create
- AFXCMN/CIPAddressCtrl::CreateEx
- AFXCMN/CIPAddressCtrl::GetAddress
- AFXCMN/CIPAddressCtrl::IsBlank
- AFXCMN/CIPAddressCtrl::SetAddress
- AFXCMN/CIPAddressCtrl::SetFieldFocus
- AFXCMN/CIPAddressCtrl::SetFieldRange
dev_langs:
- C++
helpviewer_keywords:
- CIPAddressCtrl [MFC], CIPAddressCtrl
- CIPAddressCtrl [MFC], ClearAddress
- CIPAddressCtrl [MFC], Create
- CIPAddressCtrl [MFC], CreateEx
- CIPAddressCtrl [MFC], GetAddress
- CIPAddressCtrl [MFC], IsBlank
- CIPAddressCtrl [MFC], SetAddress
- CIPAddressCtrl [MFC], SetFieldFocus
- CIPAddressCtrl [MFC], SetFieldRange
ms.assetid: 9764d2f4-cb14-4ba8-b799-7f57a55a47c6
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 67c775f314cc70da1b662ca9b9c5f0a2e68eb2bc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cipaddressctrl-class"></a>Classe CIPAddressCtrl
Fornisce la funzionalità del controllo indirizzo IP comune di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CIPAddressCtrl : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CIPAddressCtrl::CIPAddressCtrl](#cipaddressctrl)|Costruisce un oggetto `CIPAddressCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CIPAddressCtrl::ClearAddress](#clearaddress)|Cancella il contenuto del controllo indirizzo IP.|  
|[CIPAddressCtrl::Create](#create)|Crea un controllo indirizzo IP e lo collega a un `CIPAddressCtrl` oggetto.|  
|[CIPAddressCtrl::CreateEx](#createex)|Crea un controllo indirizzo IP con gli stili estesi di Windows specificati e lo collega a un `CIPAddressCtrl` oggetto.|  
|[CIPAddressCtrl::GetAddress](#getaddress)|Recupera i valori di indirizzo per tutti e quattro i campi nel controllo indirizzo IP.|  
|[CIPAddressCtrl::IsBlank](#isblank)|Determina se il controllo indirizzo IP di tutti i campi sono vuoti.|  
|[CIPAddressCtrl::SetAddress](#setaddress)|Imposta i valori di indirizzo per tutti e quattro i campi nel controllo indirizzo IP.|  
|[CIPAddressCtrl::SetFieldFocus](#setfieldfocus)|Imposta lo stato attivo per il campo specificato nel controllo indirizzo IP.|  
|[CIPAddressCtrl::SetFieldRange](#setfieldrange)|Imposta l'intervallo nel campo specificato nel controllo indirizzo IP.|  
  
## <a name="remarks"></a>Note  
 Il controllo indirizzo IP, un controllo simile a un controllo di modifica, consente di immettere e modificare un indirizzo numerico in formato IP (Internet Protocol).  
  
 Questo controllo (e pertanto la `CIPAddressCtrl` classe) è disponibile solo per i programmi in esecuzione in Microsoft Internet Explorer 4.0 e versioni successive. Inoltre, saranno disponibili nelle versioni future di Windows e Windows NT.  
  
 Per ulteriori informazioni generali sul controllo indirizzo IP, vedere [controlli di indirizzo IP](http://msdn.microsoft.com/library/windows/desktop/bb761372) in Windows SDK.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CIPAddressCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcmn.h  
  
##  <a name="cipaddressctrl"></a>CIPAddressCtrl::CIPAddressCtrl  
 Crea un oggetto `CIPAddressCtrl`.  
  
```  
CIPAddressCtrl();
```  
  
##  <a name="clearaddress"></a>CIPAddressCtrl::ClearAddress  
 Cancella il contenuto del controllo indirizzo IP.  
  
```  
void ClearAddress();
```  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_CLEARADDRESS](http://msdn.microsoft.com/library/windows/desktop/bb761377), come descritto in Windows SDK.  
  
##  <a name="create"></a>CIPAddressCtrl::Create  
 Crea un controllo indirizzo IP e lo collega a un `CIPAddressCtrl` oggetto.  
  
```  
virtual BOOL Create(
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwStyle`  
 Stile del controllo indirizzo IP. Applicare una combinazione degli stili di finestra. È necessario includere il **WS_CHILD** stile perché il controllo deve essere una finestra figlio. Vedere [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) in Windows SDK per un elenco degli stili di windows.  
  
 `rect`  
 Un riferimento a dimensioni e la posizione del controllo indirizzo IP. Può essere un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto o un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura.  
  
 `pParentWnd`  
 Puntatore alla finestra padre del controllo indirizzo IP. Non deve essere **NULL.**  
  
 `nID`  
 ID. del controllo di indirizzo IP  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'inizializzazione è stata completata. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Si costruisce un `CIPAddressCtrl` oggetto in due passaggi.  
  
1.  Chiamare il costruttore, che crea il `CIPAddressCtrl` oggetto.  
  
2.  Chiamare **crea**, che consente di creare il controllo dell'indirizzo IP.  
  
 Se si desidera utilizzare gli stili estesi windows con il controllo, chiamare [CreateEx](#createex) anziché **crea**.  
  
##  <a name="createex"></a>CIPAddressCtrl::CreateEx  
 Chiamare questa funzione per creare un controllo (una finestra figlio) e associarlo con il `CIPAddressCtrl` oggetto.  
  
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
 Stile del controllo indirizzo IP. Applicare una combinazione degli stili di finestra. È necessario includere il **WS_CHILD** stile perché il controllo deve essere una finestra figlio. Vedere [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) in Windows SDK per un elenco degli stili di windows.  
  
 `rect`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che descrive le dimensioni e la posizione della finestra deve essere creata, nelle coordinate del client di `pParentWnd`.  
  
 `pParentWnd`  
 Puntatore alla finestra padre del controllo.  
  
 `nID`  
 ID di finestra figlio. del controllo  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare `CreateEx` anziché [crea](#create) per applicare stili estesi di Windows, specificati per il prefisso di stile esteso di Windows **WS_EX _**.  
  
##  <a name="getaddress"></a>CIPAddressCtrl::GetAddress  
 Recupera i valori di indirizzo per tutti e quattro i campi nel controllo indirizzo IP.  
  
```  
int GetAddress(
    BYTE& nField0,  
    BYTE& nField1,  
    BYTE& nField2,  
    BYTE& nField3);  
  
int GetAddress(DWORD& dwAddress);
```  
  
### <a name="parameters"></a>Parametri  
 `nField0`  
 Un riferimento al valore del campo 0 da un indirizzo IP compresso.  
  
 `nField1`  
 Un riferimento al valore del campo 1 da un indirizzo IP compresso.  
  
 `nField2`  
 Un riferimento al valore del campo 2 da un indirizzo IP compresso.  
  
 `nField3`  
 Un riferimento al valore del campo 3 da un indirizzo IP compresso.  
  
 `dwAddress`  
 Un riferimento all'indirizzo di un `DWORD` che riceve l'indirizzo IP. Vedere **osservazioni** per una tabella che mostra come `dwAddress` viene compilato.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di campi non vuota nel controllo indirizzo IP.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_GETADDRESS](http://msdn.microsoft.com/library/windows/desktop/bb761378), come descritto in Windows SDK. Nel primo prototipo precedente, i numeri di campi da 0 a 3 del controllo, di lettura da sinistra a destra rispettivamente, popolare i quattro parametri. Nel secondo precedente, prototipo `dwAddress` è popolato come descritto di seguito.  
  
|Campo|Contenente il valore del campo di bit|  
|-----------|-------------------------------------|  
|0|24 a 31|  
|1|16 e 23|  
|2|8 e 15|  
|3|da 0 a 7|  
  
##  <a name="isblank"></a>CIPAddressCtrl::IsBlank  
 Determina se il controllo indirizzo IP di tutti i campi sono vuoti.  
  
```  
BOOL IsBlank() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se tutti i campi del controllo indirizzo IP sono vuoti; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_ISBLANK](http://msdn.microsoft.com/library/windows/desktop/bb761379), come descritto in Windows SDK.  
  
##  <a name="setaddress"></a>CIPAddressCtrl::SetAddress  
 Imposta i valori di indirizzo per tutti e quattro i campi nel controllo indirizzo IP.  
  
```  
void SetAddress(
    BYTE nField0,  
    BYTE nField1,  
    BYTE nField2,  
    BYTE nField3);  
  
void SetAddress(DWORD dwAddress);
```  
  
### <a name="parameters"></a>Parametri  
 `nField0`  
 Il valore del campo 0 da un indirizzo IP compresso.  
  
 `nField1`  
 Il valore del campo 1 da un indirizzo IP compresso.  
  
 `nField2`  
 Il valore del campo 2 da un indirizzo IP compresso.  
  
 `nField3`  
 Il valore del campo 3 da un indirizzo IP compresso.  
  
 `dwAddress`  
 Oggetto `DWORD` valore contenente il nuovo indirizzo IP. Vedere **osservazioni** per una tabella che mostra come `DWORD` valore viene inserito.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_SETADDRESS](http://msdn.microsoft.com/library/windows/desktop/bb761380), come descritto in Windows SDK. Nel primo prototipo precedente, i numeri di campi da 0 a 3 del controllo, di lettura da sinistra a destra rispettivamente, popolare i quattro parametri. Nel secondo precedente, prototipo `dwAddress` è popolato come descritto di seguito.  
  
|Campo|Contenente il valore del campo di bit|  
|-----------|-------------------------------------|  
|0|24 a 31|  
|1|16 e 23|  
|2|8 e 15|  
|3|da 0 a 7|  
  
##  <a name="setfieldfocus"></a>CIPAddressCtrl::SetFieldFocus  
 Imposta lo stato attivo per il campo specificato nel controllo indirizzo IP.  
  
```  
void SetFieldFocus(WORD nField);
```  
  
### <a name="parameters"></a>Parametri  
 `nField`  
 Indice del campo in base zero in cui deve essere impostato lo stato attivo. Se questo valore è maggiore del numero di campi, lo stato attivo è impostato il primo campo vuoto. Se tutti i campi sono non vuoto, lo stato attivo viene impostato sul primo campo.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_SETFOCUS](http://msdn.microsoft.com/library/windows/desktop/bb761381), come descritto in Windows SDK.  
  
##  <a name="setfieldrange"></a>CIPAddressCtrl::SetFieldRange  
 Imposta l'intervallo nel campo specificato nel controllo indirizzo IP.  
  
```  
void SetFieldRange(
    int nField,  
    BYTE nLower,  
    BYTE nUpper);
```  
  
### <a name="parameters"></a>Parametri  
 `nField`  
 Indice del campo in base zero in cui verrà applicato l'intervallo.  
  
 `nLower`  
 Un riferimento a un integer che riceve il limite inferiore del campo specificato in questo controllo indirizzo IP.  
  
 `nUpper`  
 Un riferimento a un integer che riceve il limite massimo del campo specificato in questo controllo indirizzo IP.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro implementa il comportamento del messaggio Win32 [IPM_SETRANGE](http://msdn.microsoft.com/library/windows/desktop/bb761382), come descritto in Windows SDK. Utilizzare i due parametri, `nLower` e `nUpper`, per indicare i limiti superiori e inferiori del campo, anziché il *wRange* parametro utilizzato con il messaggio Win32.  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



