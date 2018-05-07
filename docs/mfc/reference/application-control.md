---
title: Controllo dell'applicazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.mfc.macros
dev_langs:
- C++
helpviewer_keywords:
- application control [MFC]
ms.assetid: c1f69f15-e0fe-4515-9f36-d63d31869deb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 76d8ec079a7c3534211118e60c1d9d95a3a8510a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="application-control"></a>Controllo Application
OLE richiede un controllo significativo sulle applicazioni e i relativi oggetti. Il sistema OLE DLL deve essere in grado di avviare e rilasciare automaticamente le applicazioni, coordinare la produzione e la modifica degli oggetti e così via. Le funzioni in questo argomento soddisfano tali requisiti. Oltre a essere chiamata dalla DLL del sistema ol, queste funzioni devono essere chiamate a volte anche applicazioni. 
  
### <a name="application-control"></a>Controllo Application  
  
|||  
|-|-|  
|[AfxOleCanExitApp](#afxolecanexitapp)|Indica se l'applicazione può terminare.|  
|[AfxOleGetMessageFilter](#afxolegetmessagefilter)|Recupera il filtro messaggi corrente dell'applicazione.|  
|[AfxOleGetUserCtrl](#afxolegetuserctrl)|Recupera il flag corrente del controllo utente.|  
|[AfxOleSetUserCtrl](#afxolesetuserctrl)|Imposta o Cancella il flag di controllo utente.|  
|[AfxOleLockApp](#afxolelockapp)|Incrementa conteggio globale del framework del numero di oggetti attivi in un'applicazione.|  
|[AfxOleLockControl](#afxolelockcontrol)| Blocca la class factory del controllo specificato. |
|[AfxOleUnlockApp](#afxoleunlockapp)|Decrementa il conteggio del framework del numero di oggetti attivi in un'applicazione.| 
|[AfxOleUnlockControl](#afxoleunlockcontrol)| Sblocca la class factory del controllo specificato. |
|[AfxOleRegisterServerClass](#afxoleregisterserverclass)|Registra un server nel Registro di sistema OLE.|  
|[AfxOleSetEditMenu](#afxoleseteditmenu)|Implementa l'interfaccia utente per il *typename* oggetto comando.|  

  
##  <a name="afxolecanexitapp"></a>  AfxOleCanExitApp  
 Indica se l'applicazione può terminare.  
  
```   
BOOL AFXAPI AfxOleCanExitApp(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'applicazione può essere chiusa; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Un'applicazione non deve terminare se sono presenti riferimenti a oggetti in attesa. Le funzioni globali `AfxOleLockApp` e `AfxOleUnlockApp` rispettivamente incrementano e decrementano un contatore di riferimenti agli oggetti dell'applicazione. L'applicazione non deve terminare quando questo contatore è diverso da zero. Se il contatore è diverso da zero, quando l'utente sceglie Chiudi dal menu di sistema o Esci dal menu File la finestra principale dell'applicazione viene nascosta (non eliminata definitivamente). Il framework chiama questa funzione **CFrameWnd:: OnClose**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCAutomation#2](../../mfc/codesnippet/cpp/application-control_1.cpp)]  

## <a name="requirements"></a>Requisiti  
 **Intestazione**: afxdisp. h 

##  <a name="afxolegetmessagefilter"></a>  AfxOleGetMessageFilter  
 Recupera il filtro messaggi corrente dell'applicazione.  
  
```   
COleMessageFilter* AFXAPI AfxOleGetMessageFilter(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al filtro messaggi corrente.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per accedere all'oggetto derivato da `COleMessageFilter` corrente, in modo analogo a come si utilizza `AfxGetApp` per accedere all'oggetto applicazione corrente.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCAutomation#3](../../mfc/codesnippet/cpp/application-control_2.cpp)]  
  
 [!code-cpp[NVC_MFCAutomation#4](../../mfc/codesnippet/cpp/application-control_3.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: AFXWIN. h 

##  <a name="afxolegetuserctrl"></a>  AfxOleGetUserCtrl  
 Recupera il flag corrente del controllo utente.  
  
```   
BOOL AFXAPI AfxOleGetUserCtrl(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'utente controlla l'applicazione; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'utente controlla l'applicazione quando apre o crea in modo esplicito un nuovo documento. L'utente controlla inoltre l'applicazione se l'applicazione non è stata avviata dalle DLL del sistema OL, in altre parole se l'utente ha avviato l'applicazione con la shell di sistema.  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: afxdisp. h

##  <a name="afxolesetuserctrl"></a>  AfxOleSetUserCtrl  
 Imposta o Cancella il flag di controllo utente, è illustrato negli argomenti di riferimento per `AfxOleGetUserCtrl`.  
  
```  
void AFXAPI AfxOleSetUserCtrl(BOOL bUserCtrl); 
```  
  
### <a name="parameters"></a>Parametri  
 *bUserCtrl*  
 Specifica se il flag di controllo utente deve essere impostato o cancellato.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questa funzione quando l'utente crea o carica un documento, ma non quando un documento viene caricato o creato tramite un'azione indiretta, ad esempio il caricamento di un oggetto incorporato da un'applicazione contenitore.  
  
 Chiamare questa funzione se altre azioni nell'applicazione devono mettere l'utente nel controllo dell'applicazione.  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: afxdisp. h

##  <a name="afxolelockapp"></a>  AfxOleLockApp  
 Incrementa conteggio globale del framework del numero di oggetti attivi nell'applicazione.  
  
```   
void AFXAPI AfxOleLockApp(); 
```  
  
### <a name="remarks"></a>Note  
 Il framework mantiene un conteggio del numero di oggetti attivo in un'applicazione. Il `AfxOleLockApp` e `AfxOleUnlockApp` funzioni, rispettivamente, incrementa e decrementa il conteggio.  
  
 Quando l'utente tenta di chiudere un'applicazione che dispone di oggetti attivi, un'applicazione per cui il numero di oggetti attivi è diverso da zero, il framework nasconde l'applicazione dalla vista dell'utente anziché completamente all'arresto. Il `AfxOleCanExitApp` funzione indica se l'applicazione può terminare.  
  
 Chiamare `AfxOleLockApp` da qualsiasi oggetto che espone le interfacce OLE, se ne fosse indesiderabile per un oggetto di essere eliminate mentre ancora in uso da un'applicazione client. Chiamare anche `AfxOleUnlockApp` nel distruttore di qualsiasi oggetto che chiama `AfxOleLockApp` nel costruttore. Per impostazione predefinita, `COleDocument` (e le classi derivate) automaticamente bloccare e sbloccare l'applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCAutomation#5](../../mfc/codesnippet/cpp/application-control_4.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: afxdisp. h

##  <a name="afxoleunlockapp"></a>  AfxOleUnlockApp  
 Decrementa il conteggio del framework di oggetti attivi nell'applicazione.  
  
```   
void AFXAPI AfxOleUnlockApp(); 
```  
  
### <a name="remarks"></a>Note  
 Vedere `AfxOleLockApp` per ulteriori informazioni.  
  
 Quando il numero di oggetti attivi raggiunge lo zero, **AfxOleOnReleaseAllObjects** viene chiamato.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [AfxOleLockApp](#afxolelockapp).  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: afxdisp. h  

 ## <a name="afxolelockcontrol"></a>AfxOleLockControl
Blocca la class factory del controllo specificato in modo che i dati creati dinamicamente associati al controllo rimangano in memoria.  
   
### <a name="syntax"></a>Sintassi    
```
BOOL AFXAPI AfxOleLockControl(  REFCLSID clsid  );  
BOOL AFXAPI AfxOleLockControl( LPCTSTR lpszProgID );  
```
### <a name="parameters"></a>Parametri  
 `clsid`  
 ID univoco della classe del controllo.  
  
 `lpszProgID`  
 ID univoco del programma del controllo.  
   
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la class factory del controllo è stata bloccata con successo; in caso contrario, 0.  
   
### <a name="remarks"></a>Note  
 Ciò può accelerare notevolmente la visualizzazione dei comandi. Ad esempio, una volta creato un controllo in una finestra di dialogo e bloccato il controllo con `AfxOleLockControl`, non è necessario crearlo e interromperne l'esecuzione ogni volta che la finestra di dialogo viene visualizzata o viene eliminata in modo permanente. Se l'utente apre e chiude una finestra di dialogo ripetutamente, il blocco dei controlli può migliorare significativamente le prestazioni. Quando si è pronti per eliminare il controllo in modo permanente, chiamare `AfxOleUnlockControl`.  
   
### <a name="example"></a>Esempio  
```cpp
// Starts and locks control's (Microsoft Calendar) class factory. 
// Control will remain in memory for lifetime of
// application or until AfxOleUnlockControl() is called.

AfxOleLockControl(_T("MSCAL.Calendar"));
```
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** < AFXWIN. h >  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [AfxOleUnlockControl](#afxoleunlockcontrol)
 
##  <a name="afxoleregisterserverclass"></a>  AfxOleRegisterServerClass  
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
 Riferimento all'ID di classe OLE. del server  
  
 `lpszClassName`  
 Puntatore a una stringa contenente il nome della classe di oggetti del server.  
  
 *lpszShortTypeName*  
 Puntatore a una stringa contenente il nome breve del tipo di oggetto del server, ad esempio "Grafico".  
  
 *lpszLongTypeName*  
 Puntatore a una stringa contenente il nome lungo del tipo di oggetto del server, ad esempio "Grafico di Microsoft Excel 5.0".  
  
 `nAppType`  
 Un valore, derivato dal **OLE_APPTYPE** enumerazione che specifica il tipo di applicazione OLE. I valori possibili sono i seguenti:  
  
- `OAT_INPLACE_SERVER` Server con interfaccia utente di server completo.  
  
- `OAT_SERVER` Il server supporta solo durante l'incorporamento.  
  
- `OAT_CONTAINER` Contenitore supporta collegamenti a incorporamenti.  
  
- `OAT_DISPATCH_OBJECT` `IDispatch`-oggetto in grado di supportare.  
  
 `rglpszRegister`  
 Matrice di puntatori a stringhe che rappresentano le chiavi e valori da aggiungere al Registro di sistema OLE se non vengono trovati alcun valore per le chiavi esistenti.  
  
 `rglpszOverwrite`  
 Matrice di puntatori a stringhe che rappresentano le chiavi e valori da aggiungere al Registro di sistema OLE se il Registro di sistema contiene i valori esistenti per le chiavi specificate.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la classe del server è registrata. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 La maggior parte delle applicazioni possono utilizzare **COleTemplateServer::Register** per registrare i tipi di documento dell'applicazione. Se il formato del Registro di sistema dell'applicazione non rientra al tipico modello, è possibile utilizzare `AfxOleRegisterServerClass` per un maggiore controllo.  
  
 Il Registro di sistema è costituito da un set di chiavi e valori. Il `rglpszRegister` e `rglpszOverwrite` gli argomenti sono matrici di puntatori alle stringhe, ognuna costituita da una chiave e un valore separate da un **NULL** carattere ( `'\0'`). Ognuna di queste stringhe può avere parametri sostituibili i cui percorsi sono contrassegnate con le sequenze di caratteri `%1` tramite `%5`.  
  
 I simboli vengono compilati come indicato di seguito:  
  
|Simbolo|Valore|  
|------------|-----------|  
|%1|ID di classe, formattato come stringa|  
|%2|Nome di classe|  
|%3|Percorso file eseguibile|  
|%4|Nome breve del tipo|  
|%5|Nome di tipo Long|  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: afxdisp. h

##  <a name="afxoleseteditmenu"></a>  AfxOleSetEditMenu  
 Implementa l'interfaccia utente per il *typename* oggetto comando.  
  
```   
void AFXAPI AfxOleSetEditMenu(
    COleClientItem* pClient,  
    CMenu* pMenu,  
    UINT iMenuItem,  
    UINT nIDVerbMin,  
    UINT nIDVerbMax = 0,  
    UINT nIDConvert = 0); 
```  
  
### <a name="parameters"></a>Parametri  
 `pClient`  
 Un puntatore all'elemento client OLE.  
  
 `pMenu`  
 Un puntatore all'oggetto menu da aggiornare.  
  
 *iMenuItem*  
 Indice della voce di menu da aggiornare.  
  
 `nIDVerbMin`  
 L'ID di comando che corrisponde al verbo primario.  
  
 *nIDVerbMax*  
 L'ID di comando che corrisponde all'ultimo verbo.  
  
 *nIDConvert*  
 ID della voce di menu Converti.  
  
### <a name="remarks"></a>Note  
 Se il server riconosce solo un verbo primario, la voce di menu diventa "verbo *typename* oggetto" e `nIDVerbMin` comando viene inviato quando l'utente sceglie il comando. Se il server riconosce numerosi verbi, la voce di menu diventa quindi " *typename* oggetto" e viene visualizzato un elenco di tutti i verbi di sottomenu quando l'utente sceglie il comando. Quando l'utente sceglie un verbo dal sottomenu `nIDVerbMin` viene inviato se viene selezionato il primo verbo, `nIDVerbMin` + 1 viene inviato se il secondo verbo viene scelto e così via. Il valore predefinito `COleDocument` implementazione gestisce automaticamente questa funzionalità.  
  
 È la seguente istruzione nello script di risorsa di applicazione del client (. File RC):  
  
 **#include \<afxolecl.rc >**  

### <a name="requirements"></a>Requisiti  
 **Intestazione**: AFXOLE. h 

## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

## <a name="afxoleunlockcontrol"></a> AfxOleUnlockControl
Sblocca la class factory del controllo specificato.  
   
### <a name="syntax"></a>Sintassi  
  ```
BOOL AFXAPI AfxOleUnlockControl( REFCLSID clsid );  
BOOL AFXAPI AfxOleUnlockControl( LPCTSTR lpszProgID );  
```
### <a name="parameters"></a>Parametri  
 `clsid`  
 ID univoco della classe del controllo.  
  
 `lpszProgID`  
 ID univoco del programma del controllo.  
   
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la class factory del controllo è stata sbloccata; in caso contrario 0.  
   
### <a name="remarks"></a>Note  
 Un controllo è bloccato con `AfxOleLockControl`, in modo che i dati creati dinamicamente associati con il controllo rimangono in memoria. Ciò può accelerare notevolmente la visualizzazione del controllo, poiché il controllo non debba essere creato ed eliminato ogni volta che viene visualizzato. Quando si è pronti per eliminare il controllo in modo permanente, chiamare `AfxOleUnlockControl`.  
   
### <a name="example"></a>Esempio  
 ```cpp
// Unlock control's (Microsoft Calendar Control) class factory.

AfxOleUnlockControl(_T("MSCAL.Calendar"));

```
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** < AFXWIN. h >  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)  
 [AfxOleLockControl](#afxolelockcontrol)

