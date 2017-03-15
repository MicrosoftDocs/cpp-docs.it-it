---
title: "TN064: threading di modello di apartment nei controlli ActiveX | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.controls.activex"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "threading di modello di apartment"
  - "contenitori [C++], multithreading"
  - "contenitore multithread"
  - "OLE (controlli), supporto contenitore"
  - "TN064"
ms.assetid: b2ab4c88-6954-48e2-9a74-01d4a60df073
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# TN064: threading di modello di apartment nei controlli ActiveX
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online.  Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati.  Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota tecnica viene illustrato come abilitare il threading è basata del modello in un controllo ActiveX.  Si noti che il threading del modello è basata è supportato solo in versioni 4,2 di Visual C\+\+ o in avanti.  
  
## Qual è la gestione è basata modello?  
 Il modello di apartment è un approccio a supportare gli oggetti incorporati, come controlli ActiveX, in un'applicazione contenitore multithreading.  Anche se l'applicazione può avere più thread, ogni istanza di un oggetto incorporato verrà assegnata a un apartment "," che verrà eseguito su un solo thread.  Ovvero tutte le chiamate in un'istanza di un controllo si verificano nello stesso thread.  
  
 Tuttavia, le istanze diverse dello stesso tipo di controllo è possibile assegnare agli apartment diversi.  Quindi, se più istanze di un controllo condividono i dati in comune, ad esempio dati statici o globale\), quindi accedere a tali dati condivisi devono essere protetti da un oggetto di sincronizzazione, ad esempio una sezione critica.  
  
 Per informazioni dettagliate sul modello di threading apartment, vedere [Processi e thread](http://msdn.microsoft.com/library/windows/desktop/ms684841)*nel riferimento del programmatore OLE*.  
  
## Poiché supporta il threading del modello è basata?  
 I controlli che supportano il threading è basata del modello possono essere utilizzati nelle applicazioni multithreading contenitori che supportano inoltre il modello apartment.  Se non si abilita il threading del modello è basata, si limiterà il potenziale impostato contenitori in cui il controllo può essere utilizzato.  
  
 Abilitare il threading del modello è basata è semplice per la maggior parte dei controlli, in particolare se che presentano poche o nessun dati condivisi.  
  
## Protezione dei dati condivisi  
 Se il controllo utilizza i dati condivisi, come una variabile membro statico, l'accesso a quello i dati devono essere protette con una sezione critica per impedire più di un thread di modificare i dati contemporaneamente.  Per installare una sezione critica a questo scopo, dichiarare una variabile membro statico della classe `CCriticalSection` nella classe del controllo.  Utilizzare le funzioni membro di **Sblocca** e di `Lock` di questo oggetto sezione critica nel quale accede al codice i dati condivisi.  
  
 Si consideri, ad esempio, una classe del controllo che deve gestire una stringa che è condivisa da tutte le istanze.  Questa stringa può essere gestita in una variabile membro statico ed essere protetta da una sezione critica.  La dichiarazione della classe del controllo contiene quanto segue:  
  
```  
class CSampleCtrl : public COleControl  
{  
    ...  
    static CString _strShared;  
    static CCriticalSection _critSect;  
};  
```  
  
 L'implementazione della classe include le definizioni di queste variabili:  
  
```  
int CString CSampleCtrl::_strShared;  
CCriticalSection CSampleCtrl::_critSect;  
```  
  
 Per accedere al membro static di `_strShared` può quindi essere protetto dalla sezione critica:  
  
```  
void CSampleCtrl::SomeMethod()  
{  
    _critSect.Lock();  
    if (_strShared.Empty())  
        _strShared = "<text>";  
    _critSect.Unlock();  
    ...  
}  
```  
  
## Registrare un controllo Apartment\-Modello\- presente  
 I controlli che supportano il threading del modello è basata forniscano questa funzionalità nel Registro di sistema, aggiungendo il valore denominato "ThreadingModel" con un valore dell'apartment" nella rispettiva voce del Registro di sistema ID della classe dell'*ID della classe*\\ chiave di**InprocServer32**.  Per impedire questa chiave automaticamente a essere registrato per il controllo, passare il flag di `afxRegApartmentThreading` nel sesto parametro a `AfxOleRegisterControlClass`:  
  
```  
BOOL CSampleCtrl::CSampleCtrlFactory::UpdateRegistry(BOOL bRegister)  
{  
    if (bRegister)  
        return AfxOleRegisterControlClass(  
            AfxGetInstanceHandle(),  
            m_clsid,  
            m_lpszProgID,  
            IDS_SAMPLE,  
            IDB_SAMPLE,  
            afxRegApartmentThreading,  
            _dwSampleOleMisc,  
            _tlid,  
            _wVerMajor,  
            _wVerMinor);  
    else  
        return AfxOleUnregisterClass(m_clsid, m_lpszProgID);  
}  
```  
  
 Se il progetto di controllo è stato generato da ControlWizard versioni in 4,1 di Visual C\+\+ o in avanti, questo flag sarà già presente nel codice.  Non sono presenti modifiche da registrare il modello di threading.  
  
 Se il progetto è stato generato da una versione precedente di ControlWizard, il codice esistente avrà un valore boolean il sesto parametro.  Se il parametro esistente è impostato su TRUE, impostarlo su `afxRegInsertable | afxRegApartmentThreading`.  Se il parametro esistente è FALSE, impostarlo su `afxRegApartmentThreading`.  
  
 Se il controllo non segue le regole per la gestione di modello è basata, non è necessario passare `afxRegApartmentThreading` in questo parametro.  
  
## Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)