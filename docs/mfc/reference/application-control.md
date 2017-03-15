---
title: Controllo delle applicazioni | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros
dev_langs:
- C++
helpviewer_keywords:
- application control
ms.assetid: c1f69f15-e0fe-4515-9f36-d63d31869deb
caps.latest.revision: 12
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
ms.sourcegitcommit: 17a158366f94d27b7a46917282425d652e6b9042
ms.openlocfilehash: 81eb0bcdd8c9d154f62635e7f306cefcf7a15c1b
ms.lasthandoff: 02/24/2017

---
# <a name="application-control"></a>Controllo Application
OLE è necessario esercitare un controllo su applicazioni e i relativi oggetti. Il sistema OLE DLL deve essere in grado di avviare e rilasciare automaticamente le applicazioni, coordinare la produzione e modifica degli oggetti e così via. Le funzioni in questo argomento soddisfano tali requisiti. Oltre a essere chiamata dalla DLL del sistema ol, queste funzioni in alcuni casi devono essere chiamate dalle applicazioni nonché.  
  
### <a name="application-control"></a>Controllo Application  
  
|||  
|-|-|  
|[AfxOleCanExitApp](#afxolecanexitapp)|Indica se l'applicazione può terminare.|  
|[AfxOleGetMessageFilter](#afxolegetmessagefilter)|Recupera il filtro messaggi corrente dell'applicazione.|  
|[AfxOleGetUserCtrl](#afxolegetuserctrl)|Recupera il flag corrente del controllo utente.|  
|[AfxOleSetUserCtrl](#afxolesetuserctrl)|Imposta o Cancella il flag di controllo utente.|  
|[AfxOleLockApp](#afxolelockapp)|Incrementa conteggio globale del framework del numero di oggetti attivi in un'applicazione.|  
|[AfxOleUnlockApp](#afxoleunlockapp)|Decrementa il conteggio del framework del numero di oggetti attivi in un'applicazione.|  
|[AfxOleRegisterServerClass](#afxoleregisterserverclass)|Registra un server nel Registro di sistema OLE.|  
|[AfxOleSetEditMenu](#afxoleseteditmenu)|Implementa l'interfaccia utente per il *typename* oggetto comando.|  
  
##  <a name="a-nameafxolecanexitappa--afxolecanexitapp"></a><a name="afxolecanexitapp"></a>AfxOleCanExitApp  
 Indica se l'applicazione può terminare.  
  
```   
BOOL AFXAPI AfxOleCanExitApp(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'applicazione può essere chiusa; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Un'applicazione non deve terminare se sono presenti riferimenti a oggetti in attesa. Le funzioni globali `AfxOleLockApp` e `AfxOleUnlockApp` rispettivamente incrementano e decrementano un contatore di riferimenti agli oggetti dell'applicazione. L'applicazione non deve terminare quando questo contatore è diverso da zero. Se il contatore è diverso da zero, quando l'utente sceglie Chiudi dal menu di sistema o Esci dal menu File la finestra principale dell'applicazione viene nascosta (non eliminata definitivamente). Il framework chiama questa funzione **CFrameWnd:: OnClose**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCAutomation n.&2;](../../mfc/codesnippet/cpp/application-control_1.cpp)]  

## <a name="requirements"></a>Requisiti  
 **Intestazione**: afxdisp. h 

##  <a name="a-nameafxolegetmessagefiltera--afxolegetmessagefilter"></a><a name="afxolegetmessagefilter"></a>AfxOleGetMessageFilter  
 Recupera il filtro messaggi corrente dell'applicazione.  
  
```   
COleMessageFilter* AFXAPI  AfxOleGetMessageFilter(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al filtro messaggi corrente.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per accedere all'oggetto derivato da `COleMessageFilter` corrente, in modo analogo a come si utilizza `AfxGetApp` per accedere all'oggetto applicazione corrente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCAutomation n.&3;](../../mfc/codesnippet/cpp/application-control_2.cpp)]  
  
 [!code-cpp[NVC_MFCAutomation n.&4;](../../mfc/codesnippet/cpp/application-control_3.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: AFXWIN. h 

##  <a name="a-nameafxolegetuserctrla--afxolegetuserctrl"></a><a name="afxolegetuserctrl"></a>AfxOleGetUserCtrl  
 Recupera il flag corrente del controllo utente.  
  
```   
BOOL  AFXAPI AfxOleGetUserCtrl(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente controlla l'applicazione; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'utente controlla l'applicazione quando apre o crea in modo esplicito un nuovo documento. L'utente controlla inoltre l'applicazione se l'applicazione non è stata avviata dalle DLL del sistema OL, in altre parole se l'utente ha avviato l'applicazione con la shell di sistema.  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: afxdisp. h

##  <a name="a-nameafxolesetuserctrla--afxolesetuserctrl"></a><a name="afxolesetuserctrl"></a>AfxOleSetUserCtrl  
 Imposta o Cancella il flag di controllo utente, descritte negli argomenti di riferimento per `AfxOleGetUserCtrl`.  
  
```  
void  AFXAPI AfxOleSetUserCtrl(BOOL bUserCtrl); 
```  
  
### <a name="parameters"></a>Parametri  
 *bUserCtrl*  
 Specifica se il flag di controllo utente deve essere impostato o cancellato.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione quando l'utente crea o carica un documento, ma non quando un documento viene caricato o creato tramite un'azione indiretta, ad esempio il caricamento di un oggetto incorporato da un'applicazione contenitore.  
  
 Chiamare questa funzione se altre azioni nell'applicazione è necessario inserire l'utente nel controllo dell'applicazione.  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: afxdisp. h

##  <a name="a-nameafxolelockappa--afxolelockapp"></a><a name="afxolelockapp"></a>AfxOleLockApp  
 Incrementa conteggio globale del framework del numero di oggetti attivi nell'applicazione.  
  
```   
void  AFXAPI  AfxOleLockApp(); 
```  
  
### <a name="remarks"></a>Note  
 Il framework mantiene un conteggio del numero di oggetti attivo in un'applicazione. Il `AfxOleLockApp` e `AfxOleUnlockApp` funzioni, rispettivamente, incrementare o decrementare il conteggio.  
  
 Quando l'utente tenta di chiudere un'applicazione che dispone di oggetti attivi, un'applicazione per il quale il conteggio degli oggetti attivi è diverso da zero, il framework nasconde l'applicazione dalla vista dell'utente anziché completamente all'arresto. Il `AfxOleCanExitApp` funzione indica se l'applicazione può terminare.  
  
 Chiamare `AfxOleLockApp` da qualsiasi oggetto che espone le interfacce OLE, se è desiderabile che l'oggetto di essere eliminati durante ancora utilizzato da un'applicazione client. Chiamare anche `AfxOleUnlockApp` nel distruttore di qualsiasi oggetto che chiama `AfxOleLockApp` nel costruttore. Per impostazione predefinita, `COleDocument` (e le classi derivate) automaticamente bloccare e sbloccare l'applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCAutomation n.&5;](../../mfc/codesnippet/cpp/application-control_4.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: afxdisp. h

##  <a name="a-nameafxoleunlockappa--afxoleunlockapp"></a><a name="afxoleunlockapp"></a>AfxOleUnlockApp  
 Decrementa il conteggio del framework di oggetti attivi nell'applicazione.  
  
```   
void AFXAPI AfxOleUnlockApp(); 
```  
  
### <a name="remarks"></a>Note  
 Vedere `AfxOleLockApp` per ulteriori informazioni.  
  
 Quando il numero di oggetti attivi raggiunge lo zero, **AfxOleOnReleaseAllObjects** viene chiamato.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [AfxOleLockApp](#afxolelockapp).  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: afxdisp. h  

##  <a name="a-nameafxoleregisterserverclassa--afxoleregisterserverclass"></a><a name="afxoleregisterserverclass"></a>AfxOleRegisterServerClass  
 Questa funzione consente di registrare il server nel Registro di sistema OLE.  
  
```   
BOOL AFXAPI AfxOleRegisterServerClass(
    REFCLSID clsid,  
    LPCTSTR lpszClassName,  
    LPCTSTR lpszShortTypeName,  
    LPCTSTR lpszLongTypeName,  
    OLE_APPTYPE nAppType = OAT_SERVER,  
    LPCTSTR* rglpszRegister = NULL,  
    LPCTSTR* rglpszOverwrite = NULL); 
```  
  
### <a name="parameters"></a>Parametri  
 `clsid`  
 Riferimento all'ID di classe del server OLE  
  
 `lpszClassName`  
 Puntatore a una stringa contenente il nome della classe di oggetti del server.  
  
 *lpszShortTypeName*  
 Puntatore a una stringa contenente il nome breve del tipo di oggetto del server, ad esempio "Grafico".  
  
 *lpszLongTypeName*  
 Puntatore a una stringa contenente il nome lungo del tipo di oggetto del server, ad esempio "Microsoft Excel 5.0 grafico".  
  
 `nAppType`  
 Un valore, derivato dal **OLE_APPTYPE** enumerazione che specifica il tipo di applicazione OLE. I valori possibili sono i seguenti:  
  
- `OAT_INPLACE_SERVER`Server dispone di server completo dell'interfaccia utente.  
  
- `OAT_SERVER`Il server supporta solo l'incorporamento.  
  
- `OAT_CONTAINER`Contenitore supporta collegamenti a incorporamenti.  
  
- `OAT_DISPATCH_OBJECT``IDispatch`-oggetto in grado di supportare.  
  
 `rglpszRegister`  
 Matrice di puntatori a stringhe che rappresentano le chiavi e valori da aggiungere al Registro di sistema OLE se non vengono individuati valori esistenti per le chiavi.  
  
 `rglpszOverwrite`  
 Matrice di puntatori a stringhe che rappresentano le chiavi e valori da aggiungere al Registro di sistema OLE se il Registro di sistema contiene i valori esistenti per i tasti indicati.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la classe del server viene registrata. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La maggior parte delle applicazioni possono utilizzare **COleTemplateServer::Register** per registrare i tipi di documento dell'applicazione. Se non si adatta il modello tipico formato del Registro di sistema dell'applicazione, è possibile utilizzare `AfxOleRegisterServerClass` per un maggiore controllo.  
  
 Il Registro di sistema è costituito da un set di chiavi e valori. Il `rglpszRegister` e `rglpszOverwrite` gli argomenti sono matrici di puntatori alle stringhe, ognuna costituita da una chiave e il valore separati da un **NULL** caratteri ( `'\0'`). Ognuna di queste stringhe può avere parametri sostituibili cui posizioni sono contrassegnate con le sequenze di caratteri `%1` tramite `%5`.  
  
 I simboli sono compilati nel modo seguente:  
  
|Simbolo|Valore|  
|------------|-----------|  
|%1|ID di classe, formattato come stringa|  
|%2|Nome di classe|  
|%3|Percorso file eseguibile|  
|%4|Nome breve del tipo|  
|%5|Nome di tipo Long|  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: afxdisp. h

##  <a name="a-nameafxoleseteditmenua--afxoleseteditmenu"></a><a name="afxoleseteditmenu"></a>AfxOleSetEditMenu  
 Implementa l'interfaccia utente per il *typename* oggetto comando.  
  
```   
void  AFXAPI  AfxOleSetEditMenu(
    COleClientItem* pClient,  
    CMenu* pMenu,  
    UINT iMenuItem,  
    UINT nIDVerbMin,  
    UINT nIDVerbMax = 0,  
    UINT nIDConvert = 0); 
```  
  
### <a name="parameters"></a>Parametri  
 `pClient`  
 Puntatore all'elemento client OLE.  
  
 `pMenu`  
 Puntatore all'oggetto menu da aggiornare.  
  
 *iMenuItem*  
 L'indice della voce di menu da aggiornare.  
  
 `nIDVerbMin`  
 L'ID di comando che corrisponde al verbo primario.  
  
 *nIDVerbMax*  
 L'ID di comando che corrisponde all'ultimo verbo.  
  
 *nIDConvert*  
 ID della voce di menu Converti.  
  
### <a name="remarks"></a>Note  
 Se il server riconosce solo un verbo primario, la voce di menu diventa "verbo *typename* oggetto" e il `nIDVerbMin` comando viene inviato quando l'utente sceglie il comando. Se il server riconosce numerosi verbi, quindi la voce di menu diventa " *typename* oggetto" e un sottomenu che elenca tutti i verbi viene visualizzato quando l'utente sceglie il comando. Quando l'utente sceglie un verbo dal sottomenu `nIDVerbMin` viene inviato se viene scelto il primo verbo, `nIDVerbMin` + 1 viene inviato se il secondo verbo è selezionata e così via. Il valore predefinito `COleDocument` implementazione gestisce automaticamente questa funzionalità.  
  
 È la seguente istruzione nello script di risorsa dell'applicazione del client (. File RC):  
  
 **#include \<afxolecl.rc >**  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: AFXOLE. h 

## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

