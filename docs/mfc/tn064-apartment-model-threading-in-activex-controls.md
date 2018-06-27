---
title: 'TN064: Threading di modello di Apartment nei controlli ActiveX | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a706c927a7aacaf69091d6b448e00bd7938c265f
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36950435"
---
# <a name="tn064-apartment-model-threading-in-activex-controls"></a>TN064: threading di modello di apartment nei controlli ActiveX
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 In questa nota tecnica viene illustrato come abilitare il modello di apartment threading in un controllo ActiveX. Si noti che il threading di modello di apartment è supportato solo nelle versioni di Visual C++ 4.2 o versioni successive.  
  
## <a name="what-is-apartment-model-threading"></a>Che cos'è il Threading Apartment modello  
 Il modello di apartment è un approccio per gli oggetti incorporati, ad esempio i controlli ActiveX, all'interno di un'applicazione contenitore a thread multipli. Sebbene l'applicazione può avere più thread, ogni istanza di un oggetto incorporato verrà assegnata a uno "apartment," che verrà eseguita in un solo thread. In altre parole, tutte le chiamate a un'istanza di un controllo avverrà sullo stesso thread.  
  
 Tuttavia, istanze diverse dello stesso tipo di controllo possono essere assegnate a diversi apartment. In tal caso, se più istanze di un controllo condividono tutti i dati comuni (ad esempio, i dati globali o statici), quindi accedere ai dati condivisi dovrà essere protetto da un oggetto di sincronizzazione, ad esempio una sezione critica.  
  
 Per informazioni dettagliate sul modello di threading di apartment, vedere [processi e thread](http://msdn.microsoft.com/library/windows/desktop/ms684841) nel *riferimento per programmatori OLE*.  
  
## <a name="why-support-apartment-model-threading"></a>Perché supporta il Threading di modello di Apartment  
 Controlli che supportano il modello di apartment threading possono essere utilizzati nelle applicazioni multithreading contenitore che supportano il modello di apartment. Se non si abilita il threading di modello di apartment, si limiterà il set potenziale di contenitori in cui è possibile utilizzare il controllo.  
  
 Abilitazione di threading di modello di apartment è facile per la maggior parte dei controlli, in particolare se dispongono di dati condivisi o addirittura nessuna.  
  
## <a name="protecting-shared-data"></a>La protezione dei dati condivise  
 Se il controllo utilizza dati condivisi, ad esempio una variabile membro statico, l'accesso a che i dati devono essere protetti con una sezione critica per impedire a più di un thread di modificare i dati nello stesso momento. Per impostare una sezione critica per questo scopo, dichiarare una variabile membro statico della classe `CCriticalSection` nella classe del controllo. Usare la `Lock` e `Unlock` funzioni membro di questa sezione critica oggetto ogni volta che il codice accede a dati condivisi.  
  
 Si consideri, ad esempio, una classe del controllo che deve disporre di una stringa che viene condivisa da tutte le istanze. Questa stringa può essere gestita in una variabile membro statica e protetto da una sezione critica. Dichiarazione di classe del controllo dovrebbe contenere i seguenti:  
  
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
 Controlli che supportano il modello di apartment threading devono indicare questa funzionalità nel Registro di sistema, aggiungendo il valore denominato "ThreadingModel" con un valore di "Apartment" nella voce del Registro di sistema ID classe sotto la *id classe* \\ **InprocServer32** chiave. Affinché questa chiave per essere registrati automaticamente per il controllo del codice, passare il *afxRegApartmentThreading* flag nel sesto parametro `AfxOleRegisterControlClass`:  
  
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
  
 Se il progetto è stato generato da una versione precedente della creazione guidata controllo, il codice esistente avrà un valore booleano come sesto parametro. Se il parametro esistente è TRUE, modificarla in modo che *afxRegInsertable | afxRegApartmentThreading*. Se il parametro esistente è FALSE, modificarla in modo che *afxRegApartmentThreading*.  
  
 Se il controllo non segue le regole di threading di modello di apartment, non è necessario passare *afxRegApartmentThreading* in questo parametro.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)

