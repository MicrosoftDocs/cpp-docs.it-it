---
title: 'Guida al porting: COM Spy'
ms.date: 11/04/2016
ms.assetid: 24aa0d52-4014-4acb-8052-f4e2e4bbc3bb
ms.openlocfilehash: 791b2e88166caae39c3b8e645ca1cc053f0b9379
ms.sourcegitcommit: 28eae422049ac3381c6b1206664455dbb56cbfb6
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/31/2019
ms.locfileid: "66451178"
---
# <a name="porting-guide-com-spy"></a>Guida al porting: COM Spy

Questo argomento è il secondo di una serie di articoli che illustrano il processo di aggiornamento di progetti Visual Studio C++ creati con versioni precedenti alla versione più recente di Visual Studio. Il codice di esempio usato in questo argomento è stato compilato per l'ultima volta con Visual Studio 2005.

## <a name="comspy"></a>COM Spy

COM Spy è un programma che monitora e registra l'attività dei componenti serviti su un computer. I componenti serviti sono componenti COM+ che vengono eseguiti in un sistema e possono essere usati dai computer nella stessa rete. Vengono gestiti dalla funzionalità di Servizi componenti nel Pannello di controllo di Windows.

### <a name="step-1-converting-the-project-file"></a>Passaggio 1. Conversione del file di progetto
Il file di progetto viene convertito facilmente e produce un report di migrazione contenente alcune voci che informano sui possibili problemi da affrontare. Ecco uno dei problemi segnalati (notare che in questo argomento i messaggi di errore vengono talvolta abbreviati per migliorare la leggibilità, ad esempio rimuovendo i percorsi completi):

```Output
ComSpyAudit\ComSpyAudit.vcproj: MSB8012: $(TargetPath) ('C:\Users\UserName\Desktop\spy\spy\ComSpyAudit\.\XP32_DEBUG\ComSpyAudit.dll') does not match the Librarian's OutputFile property value '.\XP32_DEBUG\ComSpyAudit.dll' ('C:\Users\UserName\Desktop\spy\spy\XP32_DEBUG\ComSpyAudit.dll') in project configuration 'Unicode Debug|Win32'. This may cause your project to build incorrectly. To correct this, please make sure that $(TargetPath) property value matches the value specified in %(Lib.OutputFile).
```

Uno dei problemi frequenti riscontrati durante l'aggiornamento di progetti è che può essere necessario esaminare l'impostazione **Linker OutputFile** (OutputFile del linker) nella finestra di dialogo delle proprietà del progetto. Per i progetti creati con versioni precedenti a Visual Studio 2010, OutputFile è un'impostazione che, se impostata su un valore non standard, crea problemi con la procedura guidata di conversione automatica. In questo caso i percorsi dei file di output sono stati impostati su una cartella non standard, ovvero XP32_DEBUG. Altre informazioni su questo errore sono reperibili in un [post di blog](https://devblogs.microsoft.com/cppblog/visual-studio-2010-c-project-upgrade-guide/) relativo all'aggiornamento del progetto Visual Studio 2010, l'aggiornamento che include l'importante passaggio da vcbuild a msbuild. In base a queste informazioni, il valore predefinito per l'impostazione **File di output** quando si crea un nuovo progetto è `$(OutDir)$(TargetName)$(TargetExt)`, che però non viene impostato durante la conversione perché nei progetti convertiti non è possibile verificare che tutto sia corretto. Provare comunque a specificare questo valore per OutputFile e verificare se funziona.  In caso affermativo, sarà possibile procedere. Se non esistono motivi specifici per usare una cartella di output non standard, è consigliabile usare il percorso standard. In questo caso, è stato scelto di mantenere il percorso di output non standard durante il processo di portabilità e di aggiornamento. `$(OutDir)` risolve la cartella XP32_DEBUG nella configurazione di **Debug** e la cartella ReleaseU per la configurazione **Versione**.

### <a name="step-2-getting-it-to-build"></a>Passaggio 2. Preparazione della compilazione
Durante la compilazione del progetto di cui è stato eseguito il porting si verifica un certo numero di errori e di avvisi.

`ComSpyCtl` non viene compilato a causa di questo errore del compilatore:

```Output
atlcom.h(611): error C2664: 'HRESULT CComSpy::IPersistStreamInit_Save(LPSTREAM,BOOL,ATL::ATL_PROPMAP_ENTRY *)': cannot convert argument 3 from 'const ATL::ATL_PROPMAP_ENTRY *' to 'ATL::ATL_PROPMAP_ENTRY *'atlcom.h(611): note: Conversion loses qualifiersatlcom.h(608): note: while compiling class template member function 'HRESULT ATL::IPersistStreamInitImpl<CComSpy>::Save(LPSTREAM,BOOL)'\spy\spy\comspyctl\ccomspy.h(28): note: see reference to class template instantiation 'ATL::IPersistStreamInitImpl<CComSpy>' being compiled
```

L'errore fa riferimento al metodo `Save` nella classe `IPersistStreamInitImpl` in atlcom.h.

```cpp
STDMETHOD(Save)(_Inout_ LPSTREAM pStm, _In_ BOOL fClearDirty)
{
     T* pT = static_cast<T*>(this);
     ATLTRACE(atlTraceCOM, 2, _T("IPersistStreamInitImpl::Save\n"));
     return pT->IPersistStreamInit_Save(pStm, fClearDirty, T::GetPropertyMap());
}
```

Il problema è che una conversione accettata in una versione precedente del compilatore non è più valida. Per garantire la conformità allo standard C++, una parte del codice consentito in precedenza non è più consentita. In questo caso, è preferibile non passare un puntatore di tipo non const a una funzione che prevede un puntatore di tipo const.  La soluzione consiste nell'individuare la dichiarazione di `IPersistStreamInit_Save` nella classe `CComSpy` e aggiungere il modificatore const al terzo parametro.

```cpp
HRESULT CComSpy::IPersistStreamInit_Save(LPSTREAM pStm, BOOL /* fClearDirty */, const ATL_PROPMAP_ENTRY* pMap)
```

Una modifica simile a `IPersistStreamInit_Load`.

```cpp
HRESULT IPersistStreamInit_Load(LPSTREAM pStm, const ATL_PROPMAP_ENTRY* pMap);
```

L'errore successivo riguarda la registrazione.

```Output
error MSB3073: The command "regsvr32 /s /c "C:\Users\username\Desktop\spy\spy\ComSpyCtl\.\XP32_DEBUG\ComSpyCtl.lib"error MSB3073: echo regsvr32 exec. time > ".\XP32_DEBUG\regsvr32.trg"error MSB3073:error MSB3073: :VCEnd" exited with code 3.
```

Questo comando di registrazione post-compilazione non è più necessario. È invece sufficiente rimuovere il comando di compilazione personalizzato e specificare di registrare l'output nelle impostazioni **Linker**.

### <a name="dealing-with-warnings"></a>Gestione degli avvisi
Il progetto genera l'avviso seguente del linker.

```Output
warning LNK4075: ignoring '/EDITANDCONTINUE' due to '/SAFESEH' specification
```

L'opzione del compilatore `/SAFESEH` non è utile in modalità debug, mentre lo è `/EDITANDCONTINUE`, di conseguenza in questo caso la correzione consiste nel disattivare `/SAFESEH` solo per le configurazioni di tipo **Debug**. A questo scopo, aprire la finestra di dialogo delle proprietà relativa al progetto che ha generato l'errore e impostare innanzitutto **Configurazione** su **Debug**, ovvero su **Debug Unicode**(Unicode debug), quindi nella sezione **Linker Advanced** (Impostazioni avanzate del linker), reimpostare la proprietà **Immagine con gestori eccezioni sicuri** su **No** (`/SAFESEH:NO`).

Il compilatore avverte che `PROP_ENTRY_EX` è deprecato, di conseguenza non è sicuro e deve essere sostituito con `PROP_ENTRY_TYPE_EX`.

```cpp
BEGIN_PROPERTY_MAP(CComSpy)
     PROP_ENTRY_EX( "LogFile", DISPID_LOGFILE, CLSID_ComSpyPropPage, IID_IComSpy)
     PROP_ENTRY_EX( "ShowGridLines", DISPID_GRIDLINES, CLSID_ComSpyPropPage, IID_IComSpy)
     PROP_ENTRY_EX( "Audit", DISPID_AUDIT, CLSID_ComSpyPropPage, IID_IComSpy)
     PROP_ENTRY_EX( "ColWidth", DISPID_COLWIDTH, CLSID_ComSpyPropPage, IID_IComSpy)
     PROP_PAGE(CLSID_StockFontPage)
END_PROPERTY_MAP()
```

Il codice in ccomspy.h è stato modificato di conseguenza, aggiungendo se necessario i tipi COM.

```cpp
BEGIN_PROPERTY_MAP(CComSpy)
     PROP_ENTRY_TYPE_EX( "LogFile", DISPID_LOGFILE, CLSID_ComSpyPropPage, IID_IComSpy, VT_BSTR)
     PROP_ENTRY_TYPE_EX( "ShowGridLines", DISPID_GRIDLINES, CLSID_ComSpyPropPage, IID_IComSpy, VT_BOOL)
     PROP_ENTRY_TYPE_EX( "Audit", DISPID_AUDIT, CLSID_ComSpyPropPage, IID_IComSpy, VT_BOOL)
     PROP_ENTRY_TYPE_EX( "ColWidth", DISPID_COLWIDTH, CLSID_ComSpyPropPage, IID_IComSpy, VT_UINT)
     PROP_PAGE(CLSID_StockFontPage)
END_PROPERTY_MAP()
```

Ed ecco finalmente gli ultimi avvisi, che sono anche quelli causati da controlli di conformità più stringenti del compilatore:

```Output
\spy\comspyctl\usersub.h(70): warning C4457: declaration of 'var' hides function parameter\spy\comspyctl\usersub.h(48): note: see declaration of 'var'\spy\comspyctl\usersub.h(94): warning C4018: '<': signed/unsigned mismatch  ComSpy.cpp\spy\comspyctl\comspy.cpp(186): warning C4457: declaration of 'bHandled' hides function parameter\spy\spy\comspyctl\comspy.cpp(177): note: see declaration of 'bHandled'
```

L'avviso C4018 proviene dal codice seguente:

```cpp
for (i=0;i<lCount;i++)
    CoTaskMemFree(pKeys[i]);
```

Il problema è che `i` è dichiarato come `UINT` e `lCount` è dichiarato come **long**, da cui deriva l'errata corrispondenza tra signed e unsigned. Modificare il tipo di `lCount` in `UINT` sarebbe scomodo perché questo ottiene il relativo valore da `IMtsEventInfo::get_Count`, che usa il tipo **long** e non è incluso nel codice utente. A questo punto viene aggiunto un cast al codice. In un cast numerico come questo è corretto anche un cast di stile C, ma lo stile consigliato è **static_cast**.

```cpp
for (i=0;i<static_cast<UINT>(lCount);i++)
    CoTaskMemFree(pKeys[i]);
```

Questi avvisi si verificano in casi in cui una variabile è stata dichiarata in una funzione che contiene un parametro con lo stesso nome e questo causa codice potenzialmente poco chiaro. Per risolvere il problema, sono stati modificati i nomi delle variabili locali.

### <a name="step-3-testing-and-debugging"></a>Passaggio 3. Test e debug
Per testare l'app, sono stati prima esaminati tutti i vari menu e comandi e quindi è stata chiusa l'applicazione. L'unico problema riscontrato è stata un'asserzione di debug alla chiusura dell'app. Il problema si è presentato nel distruttore di `CWindowImpl`, una classe di base dell'oggetto `CSpyCon`, ovvero il componente COM principale dell'applicazione. L'errore di asserzione si è verificato nel codice seguente in atlwin.h.

```cpp
virtual ~CWindowImplRoot()
{
     #ifdef _DEBUG
     if(m_hWnd != NULL)// should be cleared in WindowProc
     {
          ATLTRACE(atlTraceWindowing, 0, _T("ERROR - Object deleted before window was destroyed\n"));
          ATLASSERT(FALSE);
     }
     #endif //_DEBUG
}
```

`hWnd` è in genere impostato su zero nella funzione `WindowProc`, ma questo non si è verificato perché invece della funzione `WindowProc` predefinita è stato chiamato un gestore personalizzato per il messaggio Windows (WM_SYSCOMMAND) che chiude la finestra e tale gestore non ha impostato `hWnd` su zero. Dando un'occhiata al codice simile nella classe `CWnd` di MFC è possibile notare che durante l'eliminazione di una finestra viene chiamato `OnNcDestroy` e, in MFC, la documentazione consiglia che durante l'override di `CWnd::OnNcDestroy`, è necessario chiamare la versione di base di `NcDestroy` per garantire l'esecuzione delle operazioni di pulizia corrette, tra cui la separazione del punto di controllo dalla finestra, vale a dire l'impostazione di `hWnd` su zero. È possibile che questa asserzione sia stata attivata anche nella versione originale dell'esempio, dal momento che lo stesso codice dell'asserzione era presente nella versione precedente di atlwin.h.

Per testare la funzionalità dell'app, è stato creato un **componente servito** che usa il modello di progetto ATL e si è scelto di aggiungere il supporto COM+ nella Creazione guidata progetto ATL. Anche se non si è mai lavorato prima con componenti serviti, non è difficile crearne uno e registrarne uno nel sistema o nella rete per renderlo disponibile per altre app. L'app COM Spy viene usata per monitorare l'attività di componenti servizi per finalità diagnostiche.

È stata quindi aggiunta una classe, è stato scelto Oggetto ATL ed è stato specificato `Dog` come nome dell'oggetto. aggiungendo l'implementazione in dog.h e dog.cpp.

```cpp
STDMETHODIMP CDog::Wag(LONG* lDuration)
{
    // TODO: Add your implementation code here
    *lDuration = 100l;
    return S_OK;
}
```

In seguito l'oggetto è stato compilato e registrato eseguendo Visual Studio come amministratore e infine attivato nel Pannello di controllo di Windows tramite l'applicazione **Componente servito**. È stato creato un progetto Windows Forms C#, è stato trascinato un pulsante nel form dalla casella degli strumenti ed è stato fatto doppio clic su di esso per un gestore eventi clic. È stato aggiunto il codice seguente per creare un'istanza del componente `Dog`.

```cpp
private void button1_Click(object sender, EventArgs e)
{
    ATLProjectLib.Dog dog1 = new ATLProjectLib.Dog();
    dog1.Wag();
}
```

Il codice è stato eseguito senza problemi e, con COM Spy in esecuzione e configurato per il monitoraggio del componente `Dog`, sono apparsi numerosi dati relativi all'attività.

## <a name="see-also"></a>Vedere anche

[Porting e aggiornamento: esempi e case study](../porting/porting-and-upgrading-examples-and-case-studies.md)<br/>
[Esempio successivo: Spy++](../porting/porting-guide-spy-increment.md)<br/>
[Esempio precedente: MFC Scribble](../porting/porting-guide-mfc-scribble.md)
