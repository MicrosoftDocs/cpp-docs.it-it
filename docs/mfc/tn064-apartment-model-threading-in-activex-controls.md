---
title: 'TN064: Threading di modello di Apartment nei controlli ActiveX | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.controls.activex
dev_langs:
- C++
helpviewer_keywords:
- OLE controls [MFC], container support
- containers [MFC], multithreaded
- TN064 [MFC]
- multithread container [MFC]
- apartment model threading [MFC]
ms.assetid: b2ab4c88-6954-48e2-9a74-01d4a60df073
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 07730d6c078dcc8fcd7ea1406f8cff6f665c9919
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tn064-apartment-model-threading-in-activex-controls"></a>TN064: threading di modello di apartment nei controlli ActiveX
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota tecnica viene illustrato come attivare threading di modello di apartment di un controllo ActiveX. Si noti che il threading di modello di apartment è supportato solo nelle versioni di Visual C++ 4.2 o versioni successive.  
  
## <a name="what-is-apartment-model-threading"></a>Che cos'è il Threading Apartment modello  
 Il modello di apartment è un approccio per gli oggetti incorporati, ad esempio i controlli ActiveX, all'interno di un'applicazione contenitore multithread. Anche se l'applicazione può avere più thread, ogni istanza di un oggetto incorporato verrà assegnato a uno "apartment," che verrà eseguito in un solo thread. In altre parole, tutte le chiamate a un'istanza di un controllo verranno eseguito sullo stesso thread.  
  
 Tuttavia, le istanze diverse dello stesso tipo di controllo possono essere assegnate a diversi apartment. In tal caso, se più istanze di un controllo condividono tutti i dati comuni (ad esempio, i dati globali o statici), quindi accedere ai dati condivisi dovrà essere protetto da un oggetto di sincronizzazione, ad esempio una sezione critica.  
  
 Per informazioni dettagliate sul modello di threading apartment, vedere [processi e thread](http://msdn.microsoft.com/library/windows/desktop/ms684841) nel *riferimento per programmatori OLE*.  
  
## <a name="why-support-apartment-model-threading"></a>Perché supporta il Threading di modello di Apartment  
 I controlli che supportano il threading apartment modello possono essere utilizzati nelle applicazioni multithreading contenitore che supportano il modello di apartment. Se non si abilita il threading di modello di apartment, si limiterà il set potenziale di contenitori in cui è possibile utilizzare il controllo.  
  
 L'abilitazione di threading di modello di apartment è semplice per la maggior parte dei controlli, in particolare se hanno senza dati condivisi.  
  
## <a name="protecting-shared-data"></a>La protezione dei dati condivisa  
 Se il controllo utilizza dati condivisi, ad esempio una variabile membro statico, l'accesso a che i dati devono essere protetti con una sezione critica per impedire che la modifica dei dati contemporaneamente più thread. Per impostare una sezione critica per questo scopo, dichiarare una variabile membro statico della classe `CCriticalSection` nella classe del controllo. Utilizzare il `Lock` e **Unlock** funzioni membro di questa sezione critica oggetto ogni volta che il codice accede a dati condivisi.  
  
 Si consideri, ad esempio, una classe del controllo che deve disporre di una stringa che viene condiviso da tutte le istanze. Questa stringa può essere gestita in una variabile membro statica e protetto da una sezione critica. Dichiarazione di classe del controllo dovrebbe contenere le operazioni seguenti:  
  
```  
class CSampleCtrl : public COleControl  
{  
 ...  
    static CString _strShared;  
    static CCriticalSection _critSect;  
};  
```  
  
 L'implementazione per la classe potrebbe includere definizioni di queste variabili:  
  
```  
int CString CSampleCtrl::_strShared;  
CCriticalSection CSampleCtrl::_critSect;  
```  
  
 L'accesso al `_strShared` membro statico può quindi essere protetto da sezione critica:  
  
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
  
## <a name="registering-an-apartment-model-aware-control"></a>La registrazione di un controllo Apartment-con supporto del modello  
 Controlli che supportano il modello di apartment threading devono indicare questa funzionalità nel Registro di sistema, aggiungendo il valore denominato "ThreadingModel" con un valore di "Apartment" nella voce del Registro di sistema di ID di classe nel *id classe* \\ **InprocServer32** chiave. Affinché questa chiave per essere registrati automaticamente per il controllo, passare il `afxRegApartmentThreading` flag nel sesto parametro `AfxOleRegisterControlClass`:  
  
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
    return AfxOleUnregisterClass(m_clsid,
    m_lpszProgID);

}  
```  
  
 Se il progetto di controllo è stato generato per la creazione guidata controllo in Visual C++ 4.1 o versione successiva, questo flag sarà già presente nel codice. Non sono necessarie modifiche per registrare il modello di threading.  
  
 Se il progetto è stato generato da una versione precedente della creazione guidata controllo, il codice esistente avrà un valore booleano come sesto parametro. Se il parametro esistente è TRUE, modificarla in modo che `afxRegInsertable | afxRegApartmentThreading`. Se il parametro esistente è FALSE, modificarla in modo che `afxRegApartmentThreading`.  
  
 Se il controllo non segue le regole di threading di modello di apartment, non è necessario passare `afxRegApartmentThreading` in questo parametro.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

