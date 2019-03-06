---
title: DLL di estensione
ms.date: 11/04/2016
f1_keywords:
- afxdll
helpviewer_keywords:
- memory [C++], DLLs
- MFC extension DLLs [C++]
- AFXDLL library
- shared resources [C++]
- MFC DLLs [C++], MFC extension DLLs
- DLLs [C++], extension
- shared DLL versions [C++]
- resource sharing [C++]
- extension DLLs [C++]
- extension DLLs [C++], about MFC extension DLLs
ms.assetid: f69ac3d4-e474-4b1c-87a1-6738843a135c
ms.openlocfilehash: 28954ff1c77b7dcc530392fce095ed9df5c29cbf
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57414564"
---
# <a name="mfc-extension-dlls"></a>DLL di estensione MFC

Un'estensione MFC DLL è una DLL che implementano generalmente classi riutilizzabili derivate dalle classi esistenti della libreria Microsoft Foundation Class.

Una DLL di estensione MFC presenta le funzionalità e i requisiti seguenti:

- L'eseguibile del client deve essere un'applicazione MFC, compilata con `_AFXDLL` definito.

- Una DLL di estensione MFC è anche utilizzabile da una DLL MFC regolare collegata in modo dinamico a MFC.

- DLL di estensione MFC deve essere compilata con `_AFXEXT` definito. In tal modo `_AFXDLL` anche essere definiti e garantisce che le dichiarazioni appropriate vengano recuperate dai file di intestazione MFC. Inoltre garantisce `AFX_EXT_CLASS` viene definito come `__declspec(dllexport)` durante la compilazione della DLL, che è necessario se si usa questa macro per dichiarare le classi nella DLL di estensione MFC.

- DLL estensione MFC consigliabile non creare un'istanza di una classe derivata da `CWinApp`, ma il affidamento sull'applicazione client (o DLL) per fornire questo oggetto.

- DLL di estensione MFC deve, tuttavia, fornire un `DllMain` funzione ed effettuare qualsiasi inizializzazione necessaria non esiste.

DLL di estensione vengono compilate usando la versione di libreria a collegamento dinamico di MFC (noto anche come la versione di MFC condivisa). Solo file eseguibili MFC (applicazioni o DLL MFC regolari) compilati con la versione condivisa di MFC è possono utilizzare una DLL di estensione MFC. L'applicazione client e la DLL di estensione MFC deve usare la stessa versione di MFCx0.dll. Con una DLL di estensione MFC, è possibile derivare nuove classi personalizzate da MFC e quindi fornire questa versione estesa di MFC per le applicazioni che chiamano la DLL.

DLL di estensione sono anche utilizzabile per il passaggio di oggetti derivati da MFC tra l'applicazione e la DLL. Le funzioni membro associate l'oggetto passato è presente nel modulo in cui è stato creato l'oggetto. Poiché queste funzioni vengono esportate in modo corretto quando si usa la versione DLL condivisa di MFC, è possibile passare liberamente MFC o puntatori a oggetti derivati da MFC tra un'applicazione e l'estensione MFC DLL viene caricato.

Una DLL di estensione MFC Usa una versione condivisa di MFC nello stesso modo che un'applicazione usa la versione DLL condivisa di MFC, con alcune considerazioni aggiuntive:

- Non dispone di un `CWinApp`-oggetto derivato. È necessario collaborare con il `CWinApp`-derivato l'oggetto dell'applicazione client. Ciò significa che l'applicazione client proprietario principale message pump, il ciclo inattivo e così via.

- Viene chiamato `AfxInitExtensionModule` nel relativo `DllMain` (funzione). Il valore restituito di questa funzione deve essere verificato. Se un valore pari a zero viene restituito da `AfxInitExtensionModule`, restituiscono 0 dal `DllMain` (funzione).

- Crea una **CDynLinkLibrary** durante l'inizializzazione dell'oggetto se l'estensione MFC DLL intende esportare `CRuntimeClass` oggetti o le risorse per l'applicazione.

Prima della versione 4.0 di MFC, questo tipo di DLL è stato chiamato un AFXDLL. Nome che si intende il `_AFXDLL` simbolo del preprocessore definita durante la compilazione della DLL.

Le librerie di importazione per la versione condivisa di MFC sono denominate secondo la convenzione descritto nella [convenzioni di denominazione per le DLL MFC](../mfc/mfc-library-versions.md#mfc-static-library-naming-conventions). Visual C++ fornisce le versioni predefinite delle DLL MFC, oltre a un numero di DLL non MFC che è possibile usare e distribuire con le applicazioni. Questi scenari sono documentati in Redist. txt, che viene installato nella cartella Program Files\Microsoft Visual Studio.

Se si sta esportando un file def, inserire il codice seguente all'inizio e alla fine del file di intestazione:

```cpp
#undef AFX_DATA
#define AFX_DATA AFX_EXT_DATA
// <body of your header file>
#undef AFX_DATA
#define AFX_DATA
```

Queste quattro righe assicurano che il codice viene compilato in modo corretto per una DLL di estensione MFC. Omissione di queste quattro righe può causare la DLL per la compilazione o il collegamento in modo non corretto.

Se è necessario passare un MFC o puntatore all'oggetto derivati da MFC a o da una DLL MFC, la DLL deve essere una DLL di estensione MFC. Le funzioni membro associate l'oggetto passato è presente nel modulo in cui è stato creato l'oggetto. Poiché queste funzioni vengono esportate in modo corretto quando si usa la versione DLL condivisa di MFC, è possibile passare liberamente MFC o puntatori a oggetti derivati da MFC tra un'applicazione e l'estensione MFC DLL viene caricato.

A causa di problemi di esportazione e di denominazione di nome C++, l'elenco di esportazione da un'estensione MFC DLL potrebbe essere diversa tra versioni di debug e delle vendite al dettaglio della stessa DLL e le DLL per diverse piattaforme. La vendita al dettaglio MFCx0.dll è circa 2.000 esportato i punti di ingresso; il debug MFCx0D. dll ha circa 3.000 punti di ingresso esportato.

## <a name="memory-management"></a>Gestione della memoria

MFCx0.dll e MFC di estensione tutte che le DLL caricate nello spazio degli indirizzi di un'applicazione client usa la stessa allocatore di memoria, il caricamento delle risorse e altri stati globali MFC come se fossero nella stessa applicazione. Ciò è importante perché le librerie DLL non MFC e le DLL MFC regolari è l'esatto opposto e avere ogni allocazione di DLL all'esterno di un proprio pool di memoria.

Se una DLL di estensione MFC alloca la memoria, tale memoria può liberamente confuso con qualsiasi altro oggetto allocato dall'applicazione. Inoltre, se un'applicazione che si collega in modo dinamico a MFC non riesce, la protezione del sistema operativo mantenendo così l'integrità di qualsiasi altra applicazione MFC che condivide la DLL.

Allo stesso modo altri stati MFC globali, ad esempio il file eseguibile corrente per caricare le risorse, vengono condivisi tra l'applicazione client e tutte le DLL estensione MFC nonché MFCx0.dll stesso.

## <a name="sharing-resources-and-classes"></a>Condivisione di risorse e le classi

Esportazione di risorse viene eseguita tramite un elenco di risorse. Ogni applicazione contiene un elenco di oggetti collegato singolarmente **CDynLinkLibrary** oggetti. Quando si cerca una risorsa, la maggior parte delle implementazioni che caricano le risorse MFC standard cerca innanzitutto nel modulo di risorsa corrente (`AfxGetResourceHandle`) e se la risorsa non viene trovata scorrere l'elenco dei **CDynLinkLibrary** oggetti è stato effettuato un tentativo di caricare la risorsa richiesta.

Scorrere l'elenco presenta gli svantaggi che è leggermente più lenta e richiede la gestione degli intervalli di ID di risorsa. Il vantaggio è che un'applicazione client che include collegamenti a diverse DLL di estensione MFC è possibile usare qualsiasi risorsa fornita dalla DLL senza dover specificare l'handle di istanza DLL. `AfxFindResourceHandle` è un'API utilizzata per scorrere l'elenco di risorse per cercare una corrispondenza specificata. Accetta il nome e il tipo di una risorsa e restituisce l'handle di risorsa in cui è stato trovato prima di tutto (o NULL).

Se non vuoi scorrere l'elenco e caricare solo le risorse da una posizione specifica, usare le funzioni `AfxGetResourceHandle` e `AfxSetResourceHandle` per salvare l'handle precedente e impostare il nuovo handle. Prestare attenzione a ripristinare l'handle di risorsa precedente prima di tornare all'applicazione client. Per un esempio dell'utilizzo di questo approccio per caricare in modo esplicito un menu, vedere il file cpp Testdll2 nell'esempio di MFC [DLLHUSK](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/dllhusk).

La creazione dinamica di oggetti MFC riceve un nome di MFC è simile. Il meccanismo di deserializzazione di oggetti MFC deve avere tutti la `CRuntimeClass` gli oggetti registrati in modo che è possibile ricostruire creando dinamicamente gli oggetti di C++ del tipo richiesto in base a ciò che è stato memorizzato in precedenza.

Nel caso dell'esempio MFC [DLLHUSK](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/dllhusk), l'elenco simile al seguente:

```
head ->   DLLHUSK.EXE   - or -   DLLHUSK.EXE
               |                      |
          TESTDLL2.DLL           TESTDLL2.DLL
               |                      |
          TESTDLL1.DLL           TESTDLL1.DLL
               |                      |
           MFCOxxD.DLL                |
               |                      |
           MFCDxxD.DLL                |
               |                      |
            MFCxxD.DLL            MFCxx.DLL
```

in cui *xx* è il numero di versione, ad esempio, 42 rappresenta la versione 4.2.

MFCxx. dll è generalmente l'ultimo la risorsa e un elenco di classi. Questo file include tutte le risorse MFC standard, tra cui le stringhe di richiesta per tutti gli ID di comando standard. Se viene posizionato alla fine dell'elenco consente di DLL e l'applicazione client non dispone di una copia delle risorse MFC standard, ma si basano su risorse condivise MFCxx invece.

Unione delle risorse e i nomi delle classi di tutte le DLL nello spazio dei nomi dell'applicazione client ha lo svantaggio di che sia necessario prestare attenzione alle quali gli ID o nomi scelto.

Il [DLLHUSK](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/dllhusk) esempio gestisce lo spazio dei nomi di risorsa condivisa con più file di intestazione.

Se la DLL di estensione MFC deve mantenere dati aggiuntivi per ogni applicazione, è possibile derivare una nuova classe da **CDynLinkLibrary** e creare in `DllMain`. Durante l'esecuzione, la DLL può controllare l'elenco dell'applicazione corrente dei **CDynLinkLibrary** oggetti per trovare quella per quel particolare DLL di estensione MFC.

### <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Inizializzare una DLL di estensione MFC](../build/run-time-library-behavior.md#initializing-extension-dlls)

### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Suggerimenti sull'uso di file di risorse condivise](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md)

- [Versione DLL di MFC](../mfc/tn033-dll-version-of-mfc.md)

- [DLL MFC regolari collegate in modo statico a MFC](../build/regular-dlls-statically-linked-to-mfc.md)

- [DLL MFC regolari collegate in modo dinamico a MFC](../build/regular-dlls-dynamically-linked-to-mfc.md)

- [Uso di DLL MFC di estensione per database, OLE e Sockets nelle DLL MFC regolari](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](../build/dlls-in-visual-cpp.md)
