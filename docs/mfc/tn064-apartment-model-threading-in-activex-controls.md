---
title: 'TN064: Modello di apartment nei controlli ActiveX di Threading'
ms.date: 11/04/2016
f1_keywords:
- vc.controls.activex
helpviewer_keywords:
- OLE controls [MFC], container support
- containers [MFC], multithreaded
- TN064 [MFC]
- multithread container [MFC]
- apartment model threading [MFC]
ms.assetid: b2ab4c88-6954-48e2-9a74-01d4a60df073
ms.openlocfilehash: d6f02b2106693226f6380e935a54e04e10d5b4f8
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57261167"
---
# <a name="tn064-apartment-model-threading-in-activex-controls"></a>TN064: Modello di apartment nei controlli ActiveX di Threading

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota tecnica viene illustrato come abilitare il threading di modello di apartment in un controllo ActiveX. Si noti che il threading di modello di apartment è supportato solo nelle versioni di Visual C++ 4.2 o versione successive.

## <a name="what-is-apartment-model-threading"></a>Che cos'è il Threading di modello di Apartment

Il modello di apartment è un approccio per gli oggetti incorporati, ad esempio i controlli ActiveX, all'interno di un'applicazione contenitore multithread. Anche se l'applicazione può avere più thread, ogni istanza di un oggetto incorporato verrà assegnato a una "apartment," che verrà eseguita in un solo thread. In altre parole, tutte le chiamate in un'istanza di un controllo verranno eseguito sullo stesso thread.

Tuttavia, è possibile assegnare diverse istanze dello stesso tipo di controllo per diversi apartment. Pertanto, se più istanze di un controllo condividono tutti i dati in comune (ad esempio, i dati globali o statici), quindi accedere ai dati condivisi sarà necessario essere protetti da un oggetto di sincronizzazione, ad esempio una sezione critica.

Per informazioni dettagliate sul modello di threading apartment, vedi [Processes and Threads](/windows/desktop/ProcThread/processes-and-threads) nel *riferimento per programmatori OLE*.

## <a name="why-support-apartment-model-threading"></a>Il motivo per cui il supporto del Threading di modello di Apartment

I controlli che supportano il threading di modello di apartment sono utilizzabile in applicazioni contenitore multithread che supportano il modello di apartment. Se non si abilita il threading di modello di apartment, si limiterà il set potenziale di contenitori in cui è possibile utilizzare il controllo.

L'abilitazione di threading di modello di apartment è facile per la maggior parte dei controlli, in particolare se hanno pochi o nessun dato condiviso.

## <a name="protecting-shared-data"></a>La protezione dei dati condivisa

Se il controllo Usa i dati condivisi, ad esempio una variabile membro statica, l'accesso a che i dati devono essere protetti con una sezione critica per evitare che più thread possano modificare i dati nello stesso momento. Per impostare una sezione critica a tale scopo, dichiarare una variabile membro statico della classe `CCriticalSection` nella classe del controllo. Usare la `Lock` e `Unlock` funzioni membro di questa sezione critica dell'oggetto ogni volta che il codice accede ai dati condivisi.

Si consideri, ad esempio, una classe del controllo che deve gestire una stringa che è condiviso da tutte le istanze. Questa stringa può essere gestita in una variabile membro statica e protetto da una sezione critica. Dichiarazione di classe del controllo contiene quanto segue:

```
class CSampleCtrl : public COleControl
{
...
    static CString _strShared;
    static CCriticalSection _critSect;
};
```

L'implementazione per la classe includerà le definizioni per tali variabili:

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

I controlli che supportano il threading di modello di apartment devono indicare questa funzionalità nel Registro di sistema, aggiungendo il valore denominato "ThreadingModel" con il valore "Apartment" nel loro voce del Registro di sistema ID classe sotto il *id classe* \\ **InprocServer32** chiave. Affinché questa chiave per essere registrato automaticamente per il controllo, passare il *afxRegApartmentThreading* flag nel sesto parametro `AfxOleRegisterControlClass`:

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

Se il progetto di controllo è stato generato per la creazione guidata controllo in Visual C++ 4.1 o versioni successive, questo flag sarà già presente nel codice. Non sono necessarie modifiche per registrare il modello di threading.

Se il progetto è stato generato da una versione precedente della creazione guidata controllo, il codice esistente avrà un valore booleano il sesto parametro. Se il parametro esistente è TRUE, modificarla in modo che *afxRegInsertable | afxRegApartmentThreading*. Se il parametro esistente è FALSE, modificarla in modo che *afxRegApartmentThreading*.

Se il controllo non segue le regole di threading di modello di apartment, non è necessario passare *afxRegApartmentThreading* in questo parametro.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
