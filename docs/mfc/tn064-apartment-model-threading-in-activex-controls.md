---
title: 'TN064: Threading del modello di Apartment nei controlli ActiveX'
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
ms.openlocfilehash: 2c6b9dd3ed244f7169e5055eebe7a34e3345e841
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69513333"
---
# <a name="tn064-apartment-model-threading-in-activex-controls"></a>TN064: Threading del modello di Apartment nei controlli ActiveX

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota tecnica spiega come abilitare il threading del modello di Apartment in un controllo ActiveX. Si noti che il threading del modello di Apartment è supportato C++ solo nelle versioni di Visual 4,2 o successive.

## <a name="what-is-apartment-model-threading"></a>Informazioni sul threading del modello di Apartment

Il modello di Apartment è un approccio per supportare gli oggetti incorporati, ad esempio i controlli ActiveX, all'interno di un'applicazione contenitore multithread. Sebbene l'applicazione possa avere più thread, ogni istanza di un oggetto incorporato verrà assegnata a un "Apartment", che verrà eseguito su un solo thread. In altre parole, tutte le chiamate in un'istanza di un controllo si verificheranno nello stesso thread.

Tuttavia, le istanze diverse dello stesso tipo di controllo possono essere assegnate a diversi Apartment. Pertanto, se più istanze di un controllo condividono dati in comune (ad esempio, dati statici o globali), l'accesso a questi dati condivisi dovrà essere protetto da un oggetto di sincronizzazione, ad esempio una sezione critica.

Per informazioni complete sul modello di threading dell'Apartment, vedere [processi e thread](/windows/win32/ProcThread/processes-and-threads) nella Guida *di riferimento per programmatori OLE*.

## <a name="why-support-apartment-model-threading"></a>Perché supportare il threading del modello di Apartment

I controlli che supportano il threading del modello di Apartment possono essere utilizzati in applicazioni contenitore multithread che supportano anche il modello di Apartment. Se non si Abilita il threading del modello di Apartment, sarà possibile limitare il potenziale set di contenitori in cui è possibile usare il controllo.

L'abilitazione del threading del modello di Apartment è facile per la maggior parte dei controlli, soprattutto se hanno dati condivisi poco o nessuno.

## <a name="protecting-shared-data"></a>Protezione dei dati condivisi

Se il controllo utilizza dati condivisi, ad esempio una variabile membro statica, l'accesso a tali dati deve essere protetto con una sezione critica per impedire a più thread di modificare i dati contemporaneamente. Per configurare una sezione critica a questo scopo, dichiarare una variabile membro statica della classe `CCriticalSection` nella classe del controllo. Usare le `Lock` funzioni `Unlock` membro e di questo oggetto sezione critica ogni volta che il codice accede ai dati condivisi.

Si consideri, ad esempio, una classe di controlli che deve mantenere una stringa condivisa da tutte le istanze. Questa stringa può essere mantenuta in una variabile membro statica e protetta da una sezione critica. La dichiarazione di classe del controllo conterrà quanto segue:

```
class CSampleCtrl : public COleControl
{
...
    static CString _strShared;
    static CCriticalSection _critSect;
};
```

L'implementazione per la classe includerà le definizioni per le variabili seguenti:

```
int CString CSampleCtrl::_strShared;
CCriticalSection CSampleCtrl::_critSect;
```

L'accesso al `_strShared` membro statico può quindi essere protetto dalla sezione critica:

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

## <a name="registering-an-apartment-model-aware-control"></a>Registrazione di un controllo compatibile con il modello di Apartment

I controlli che supportano il threading del modello di Apartment devono indicare questa funzionalità nel registro di sistema, aggiungendo il valore denominato "ThreadingModel" con un valore "Apartment" nella voce del registro di sistema ID classe nell' *ID* \\ **classe.** Chiave di InprocServer32. Per far sì che questa chiave venga registrata automaticamente per il controllo, passare il flag *afxRegApartmentThreading* nel sesto parametro a `AfxOleRegisterControlClass`:

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

Se il progetto di controllo è stato generato da ControlWizard C++ in Visual versione 4,1 o successiva, questo flag sarà già presente nel codice. Non sono necessarie modifiche per registrare il modello di Threading.

Se il progetto è stato generato da una versione precedente di ControlWizard, il codice esistente avrà un valore booleano come sesto parametro. Se il parametro esistente è TRUE, impostarlo su *afxRegInsertable | afxRegApartmentThreading*. Se il parametro esistente è FALSE, modificarlo in *afxRegApartmentThreading*.

Se il controllo non segue le regole per il threading del modello di Apartment, non è necessario passare *afxRegApartmentThreading* in questo parametro.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
