---
title: 'TN064: threading di modello di apartment nei controlli ActiveX'
ms.date: 11/04/2016
helpviewer_keywords:
- OLE controls [MFC], container support
- containers [MFC], multithreaded
- TN064 [MFC]
- multithread container [MFC]
- apartment model threading [MFC]
ms.assetid: b2ab4c88-6954-48e2-9a74-01d4a60df073
ms.openlocfilehash: 0c6a42124b4b2b03ae7cd9277fa14d43eac7a2bb
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366064"
---
# <a name="tn064-apartment-model-threading-in-activex-controls"></a>TN064: threading di modello di apartment nei controlli ActiveX

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota tecnica spiega come abilitare il threading del modello di apartment in un controllo ActiveX.This technical note explains how to enable apartment-model threading in an ActiveX control. Si noti che il threading del modello di apartment è supportato solo in Visual C, versioni 4.2 o successive.

## <a name="what-is-apartment-model-threading"></a>Che cos'è il threading del modello di appartamentoWhat Is Apartment-Model Threading

Il modello di apartment è un approccio al supporto di oggetti incorporati, ad esempio controlli ActiveX, all'interno di un'applicazione contenitore multithreading. Anche se l'applicazione può avere più thread, ogni istanza di un oggetto incorporato verrà assegnata a un "appartamento", che verrà eseguito su un solo thread. In altre parole, tutte le chiamate in un'istanza di un controllo verranno eseguite sullo stesso thread.

Tuttavia, istanze diverse dello stesso tipo di controllo possono essere assegnate ad appartamenti diversi. Pertanto, se più istanze di un controllo condividono dati in comune (ad esempio, dati statici o globali), l'accesso a questi dati condivisi dovrà essere protetto da un oggetto di sincronizzazione, ad esempio una sezione critica.

Per informazioni [dettagliate](/windows/win32/ProcThread/processes-and-threads) sul modello di threading dell'apartment, vedere Processi e thread in *OLE Programmer's Reference*.

## <a name="why-support-apartment-model-threading"></a>Perché supportare il threading del modello apartment

I controlli che supportano il threading del modello di apartment possono essere utilizzati in applicazioni contenitore multithreading che supportano anche il modello di apartment. Se non si abilita il threading del modello di apartment, si limiterà il potenziale set di contenitori in cui è possibile utilizzare il controllo.

L'abilitazione del threading del modello di apartment è semplice per la maggior parte dei controlli, in particolare se dispongono di pochi o nessun dato condiviso.

## <a name="protecting-shared-data"></a>Protezione dei dati condivisi

Se il controllo utilizza dati condivisi, ad esempio una variabile membro statica, l'accesso a tali dati deve essere protetto con una sezione critica per impedire a più thread di modificare i dati contemporaneamente. Per impostare una sezione critica per questo scopo, `CCriticalSection` dichiarare una variabile membro statica di classe nella classe del controllo. Utilizzare `Lock` le `Unlock` funzioni membro e di questo oggetto sezione critica ogni volta che il codice accede ai dati condivisi.

Si consideri, ad esempio, una classe di controllo che deve mantenere una stringa condivisa da tutte le istanze. Questa stringa può essere mantenuta in una variabile membro statica e protetta da una sezione critica. La dichiarazione di classe del controllo conterrà quanto segue:

```cpp
class CSampleCtrl : public COleControl
{
...
    static CString _strShared;
    static CCriticalSection _critSect;
};
```

L'implementazione per la classe includerà le definizioni per queste variabili:The implementation for the class would include definitions for these variables:

```cpp
int CString CSampleCtrl::_strShared;
CCriticalSection CSampleCtrl::_critSect;
```

L'accesso `_strShared` al membro statico può quindi essere protetto dalla sezione critica:

```cpp
void CSampleCtrl::SomeMethod()
{
    _critSect.Lock();
if (_strShared.Empty())
    _strShared = "<text>";
    _critSect.Unlock();

...
}
```

## <a name="registering-an-apartment-model-aware-control"></a>Registrazione di un controllo in grado di riconoscere il modello apartmentRegistering an Apartment-Model-Aware Control

I controlli che supportano il threading del modello di apartment devono indicare questa funzionalità nel Registro di sistema, aggiungendo il valore denominato "ThreadingModel" con il valore "Apartment" nella voce del Registro di sistema dell'ID di classe nella chiave\\**InprocServer32** dell'ID di *classe.* Per fare in modo che questa chiave venga registrata automaticamente per il controllo, passare il flag *afxRegApartmentThreading* nel sesto parametro a `AfxOleRegisterControlClass`:

```cpp
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

Se il progetto di controllo è stato generato da ControlWizard in Visual C , versione 4.1 o successiva, questo flag sarà già presente nel codice. Non sono necessarie modifiche per registrare il modello di threading.

Se il progetto è stato generato da una versione precedente di ControlWizard, il codice esistente avrà un valore booleano come sesto parametro. Se il parametro esistente è TRUE, modificarlo in *afxRegInsertable , afxRegApartmentThreading*. Se il parametro esistente è FALSE, modificarlo in *afxRegApartmentThreading*.

Se il controllo non segue le regole per il threading del modello di apartment, non è necessario passare *afxRegApartmentThreading* in questo parametro.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
