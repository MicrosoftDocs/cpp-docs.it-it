---
title: DLL di estensione
ms.date: 05/06/2019
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
ms.openlocfilehash: 55b1e55a9c7bdf6daaff98a7fe3f1a2a55f68334
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65220770"
---
# <a name="mfc-extension-dlls"></a>MFC (DLL di estensione)

Una DLL di estensione MFC è una DLL che in genere implementa classi riutilizzabili derivate dalle classi di libreria Microsoft Foundation Class esistenti.

Una DLL di estensione MFC presenta le caratteristiche e i requisiti seguenti:

- Il file eseguibile del client deve essere un'applicazione `_AFXDLL` MFC compilata con definito.

- Una DLL di estensione MFC può essere utilizzata anche da una DLL MFC normale collegata a MFC in modo dinamico.

- Le DLL dell'estensione MFC devono essere `_AFXEXT` compilate con definito. Questa operazione `_AFXDLL` impone anche la definizione di e assicura che le dichiarazioni appropriate vengano estratte dai file di intestazione MFC. Garantisce inoltre che `AFX_EXT_CLASS` sia definito come `__declspec(dllexport)` durante la compilazione della dll, operazione necessaria se si utilizza questa macro per dichiarare le classi nella DLL dell'estensione MFC.

- Le DLL dell'estensione MFC non devono creare un'istanza di `CWinApp`una classe derivata da, ma devono basarsi sull'applicazione client (o dll) per fornire questo oggetto.

- Le DLL dell'estensione MFC devono, tuttavia, `DllMain` fornire una funzione ed eseguire tutte le operazioni di inizializzazione necessarie.

Le DLL di estensione vengono compilate utilizzando la versione della libreria a collegamento dinamico di MFC, nota anche come versione condivisa di MFC. Solo i file eseguibili MFC, ovvero applicazioni o DLL MFC regolari, compilati con la versione condivisa di MFC possono utilizzare una DLL di estensione MFC. Sia l'applicazione client che la DLL dell'estensione MFC devono usare la stessa versione di MFCx0. dll. Con una DLL di estensione MFC, è possibile derivare nuove classi personalizzate da MFC, quindi offrire questa versione estesa di MFC alle applicazioni che chiamano la DLL.

Le DLL di estensione possono essere utilizzate anche per passare oggetti derivati da MFC tra l'applicazione e la DLL. Le funzioni membro associate all'oggetto passato sono disponibili nel modulo in cui è stato creato l'oggetto. Poiché queste funzioni vengono esportate correttamente quando si utilizza la versione DLL condivisa di MFC, è possibile passare liberamente i puntatori a oggetti derivati da MFC o MFC tra un'applicazione e le DLL dell'estensione MFC caricate.

Una DLL di estensione MFC utilizza una versione condivisa di MFC nello stesso modo in cui un'applicazione utilizza la versione DLL condivisa di MFC, con alcune considerazioni aggiuntive:

- Non dispone di un oggetto `CWinApp`derivato da. Deve funzionare con l' `CWinApp`oggetto derivato da dell'applicazione client. Ciò significa che l'applicazione client possiede il pump principale del messaggio, il ciclo inattivo e così via.

- Chiama `AfxInitExtensionModule` nella `DllMain` funzione. Il valore restituito di questa funzione deve essere verificato. Se viene restituito un valore zero da `AfxInitExtensionModule`, restituire 0 dalla `DllMain` funzione.

- Viene creato un oggetto **CDynLinkLibrary** durante l'inizializzazione se la DLL dell'estensione MFC `CRuntimeClass` desidera esportare oggetti o risorse nell'applicazione.

Prima della versione 4,0 di MFC, questo tipo di DLL veniva chiamato AFXDLL. AFXDLL fa riferimento al `_AFXDLL` simbolo del preprocessore definito durante la compilazione della dll.

Le librerie di importazione per la versione condivisa di MFC sono denominate in base alla convenzione descritta in [convenzioni di denominazione per le DLL MFC](../mfc/mfc-library-versions.md#mfc-static-library-naming-conventions). Visual Studio fornisce versioni predefinite delle DLL MFC, oltre a una serie di dll non MFC che è possibile usare e distribuire con le applicazioni. Questi sono documentati in Redist. txt, installato nella cartella Programmi\Microsoft Visual Studio.

Se si sta esportando usando un file def, inserire il codice seguente all'inizio e alla fine del file di intestazione:

```cpp
#undef AFX_DATA
#define AFX_DATA AFX_EXT_DATA
// <body of your header file>
#undef AFX_DATA
#define AFX_DATA
```

Queste quattro righe assicurano che il codice venga compilato correttamente per una DLL di estensione MFC. Se si lasciano queste quattro righe, la DLL potrebbe essere compilata o collegata in modo errato.

Se è necessario passare un puntatore a un oggetto derivato da MFC o MFC a o da una DLL MFC, la DLL deve essere una DLL di estensione MFC. Le funzioni membro associate all'oggetto passato sono disponibili nel modulo in cui è stato creato l'oggetto. Poiché queste funzioni vengono esportate correttamente quando si utilizza la versione DLL condivisa di MFC, è possibile passare liberamente i puntatori a oggetti derivati da MFC o MFC tra un'applicazione e le DLL dell'estensione MFC caricate.

A causa dei problemi relativi all'esportazione e all'esportazione dei nomi in C++, l'elenco di esportazione da una DLL di estensione MFC potrebbe essere diverso tra le versioni di debug e finale della stessa DLL e delle stesse DLL per piattaforme diverse. MFCx0. dll per la vendita al dettaglio contiene circa 2.000 punti di ingresso esportati. il file MFCx0D. dll di debug contiene circa 3.000 punti di ingresso esportati.

## <a name="memory-management"></a>Gestione della memoria

MFCx0. dll e tutte le DLL di estensione MFC caricate nello spazio degli indirizzi di un'applicazione client utilizzano lo stesso allocatore di memoria, il caricamento delle risorse e altri Stati globali MFC come se si trovassero nella stessa applicazione. Questa operazione è significativa perché le librerie DLL non MFC e le normali DLL MFC eseguono l'esatto opposto e hanno ogni DLL che alloca fuori dal proprio pool di memoria.

Se una DLL di estensione MFC alloca memoria, tale memoria può alterando liberamente con qualsiasi altro oggetto allocato dall'applicazione. Inoltre, se un'applicazione che si collega dinamicamente a MFC ha esito negativo, la protezione del sistema operativo mantiene l'integrità di qualsiasi altra applicazione MFC che condivide la DLL.

Analogamente, gli altri Stati MFC globali, ad esempio il file eseguibile corrente da cui caricare le risorse, vengono condivisi anche tra l'applicazione client e tutte le DLL dell'estensione MFC, oltre a MFCx0. dll.

## <a name="sharing-resources-and-classes"></a>Condivisione di risorse e classi

L'esportazione delle risorse viene eseguita tramite un elenco di risorse. Ogni applicazione contiene un elenco collegato singolarmente di oggetti **CDynLinkLibrary** . Per la ricerca di una risorsa, la maggior parte delle implementazioni MFC standard che caricano risorse esaminano prima di tutto`AfxGetResourceHandle`il modulo della risorsa corrente () e, se la risorsa non viene trovata, scorre l'elenco di oggetti **CDynLinkLibrary** che tentano di caricare la risorsa richiesta.

La visualizzazione dell'elenco presenta gli svantaggi che è leggermente più lenta e richiede la gestione degli intervalli di ID risorsa. Il vantaggio è che un'applicazione client che si collega a diverse DLL di estensione MFC può utilizzare qualsiasi risorsa fornita dalla DLL senza dover specificare l'handle dell'istanza della DLL. `AfxFindResourceHandle`è un'API usata per scorrere l'elenco di risorse per cercare una corrispondenza specificata. Accetta il nome e il tipo di una risorsa e restituisce l'handle di risorsa in cui è stato trovato per la prima volta (o NULL).

Se non si vuole scorrere l'elenco e caricare solo le risorse da una posizione specifica, usare le funzioni `AfxGetResourceHandle` e `AfxSetResourceHandle` per salvare il vecchio handle e impostare il nuovo handle. Assicurarsi di ripristinare il vecchio handle di risorsa prima di tornare all'applicazione client. Per un esempio di utilizzo di questo approccio per caricare in modo esplicito un menu, vedere Testdll2. cpp nell' [DLLHUSK](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/dllhusk)di esempio MFC.

La creazione dinamica di oggetti MFC in base a un nome MFC è simile. Il meccanismo di deserializzazione di oggetti MFC deve avere tutti gli `CRuntimeClass` oggetti registrati in modo che possa essere ricostruito creando dinamicamente oggetti C++ del tipo richiesto in base a quanto archiviato in precedenza.

Nel caso di [DLLHUSK](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/dllhusk)di esempio MFC, l'elenco ha un aspetto simile al seguente:

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

dove *XX* è il numero di versione; 42, ad esempio, rappresenta la versione 4,2.

MFCxx. dll è in genere l'ultimo nell'elenco delle risorse e delle classi. MFCxx. dll include tutte le risorse MFC standard, incluse le stringhe di richiesta per tutti gli ID di comando standard. Inserendola alla fine dell'elenco, le dll e l'applicazione client non devono avere una propria copia delle risorse MFC standard, ma si basano invece sulle risorse condivise in MFCxx. dll.

L'Unione delle risorse e dei nomi di classe di tutte le dll nello spazio dei nomi dell'applicazione client presenta lo svantaggio di richiedere di prestare attenzione agli ID o ai nomi scelti.

L'esempio [DLLHUSK](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/dllhusk) gestisce lo spazio dei nomi delle risorse condivise usando più file di intestazione.

Se la DLL di estensione MFC deve gestire dati aggiuntivi per ogni applicazione, è possibile derivare una nuova classe da **CDynLinkLibrary** e crearla `DllMain`in. Quando è in esecuzione, la DLL può controllare l'elenco di oggetti **CDynLinkLibrary** dell'applicazione corrente per trovare quello per la dll di estensione MFC specifica.

### <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Inizializzare una DLL di estensione MFC](run-time-library-behavior.md#initializing-extension-dlls)

### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Suggerimenti sull'uso di file di risorse condivise](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md)

- [Versione DLL di MFC](../mfc/tn033-dll-version-of-mfc.md)

- [DLL MFC regolari collegate a MFC in modo statico](regular-dlls-statically-linked-to-mfc.md)

- [DLL MFC regolari collegate a MFC in modo dinamico](regular-dlls-dynamically-linked-to-mfc.md)

- [Utilizzo di dll di estensione MFC per database, OLE e Sockets nelle normali DLL MFC](using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)

## <a name="see-also"></a>Vedere anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)
