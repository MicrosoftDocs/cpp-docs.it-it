---
title: DLL di estensione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: afxdll
dev_langs: C++
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
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 45e94997dbeb2c6413ffcdc1272a3a46a7e220ac
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mfc-extension-dlls"></a>DLL di estensione MFC
Un'estensione MFC DLL è una DLL che implementano generalmente classi riutilizzabili derivate dalle classi esistenti della libreria Microsoft Foundation Class.  
  
 Una DLL di estensione MFC presenta i requisiti e le funzionalità seguenti:  
  
-   L'eseguibile del client deve essere un'applicazione MFC compilata con `_AFXDLL` definito.  
  
-   Una DLL di estensione MFC può essere utilizzato anche da una DLL MFC regolare collegata in modo dinamico a MFC.  
  
-   DLL di estensione MFC deve essere compilata con `_AFXEXT` definito. In questo modo `_AFXDLL` sia definito anche e assicura che le dichiarazioni appropriate vengano recuperate dai file di intestazione MFC. Assicura inoltre che `AFX_EXT_CLASS` è definito come `__declspec(dllexport)` durante la compilazione della DLL, che è necessario se si utilizza questa macro per dichiarare le classi nella DLL di estensione MFC.  
  
-   DLL di estensione MFC non deve creare una classe derivata da `CWinApp`, ma basarsi sull'applicazione client (o DLL) per fornire questo oggetto.  
  
-   DLL di estensione MFC deve, tuttavia, fornire un `DllMain` funzione e di effettuare qualsiasi inizializzazione necessarie.  
  
 DLL di estensione vengono compilate utilizzando la versione di libreria a collegamento dinamico di MFC (noto anche come la versione di MFC condivisa). Solo gli eseguibili MFC (applicazioni o le DLL regolari MFC) che vengono compilati con la versione condivisa di MFC è possono utilizzare una DLL di estensione MFC. L'applicazione client e la DLL di estensione MFC è necessario utilizzare la stessa versione di MFCx0. Con una DLL di estensione MFC, è possibile derivare nuove classi personalizzate da MFC e quindi fornire questa versione estesa di MFC per le applicazioni che chiamano la DLL.  
  
 DLL di estensione utilizzabili per il passaggio di oggetti derivati da MFC tra l'applicazione e la DLL. Le funzioni membro associate all'oggetto passato esistono nel modulo in cui è stato creato l'oggetto. Poiché queste funzioni vengono esportate correttamente quando si utilizza la versione DLL condivisa di MFC, è possibile passare liberamente MFC o puntatori a oggetti derivati da MFC tra un'applicazione e le DLL il caricamento di estensione MFC.  
  
 Una DLL di estensione MFC Usa una versione di MFC condivisa nello stesso modo che un'applicazione utilizza la versione DLL condivisa di MFC, con alcune considerazioni aggiuntive:  
  
-   Non è un `CWinApp`-oggetto derivato. È necessario collaborare con il `CWinApp`-oggetto dell'applicazione client derivato. Ciò significa che l'applicazione client possiede il message pump principale, il ciclo inattivo e così via.  
  
-   Chiama `AfxInitExtensionModule` nel relativo `DllMain` (funzione). Il valore restituito di questa funzione deve essere verificato. Se viene restituito un valore zero da `AfxInitExtensionModule`, restituiscono 0 dal `DllMain` (funzione).  
  
-   Crea un **CDynLinkLibrary** durante l'inizializzazione dell'oggetto se l'estensione MFC DLL intende esportare `CRuntimeClass` oggetti o le risorse all'applicazione.  
  
 Prima versione 4.0 di MFC, questo tipo di DLL era denominato AFXDLL. Nome che si intende il `_AFXDLL` simbolo del preprocessore che viene definito quando si compila la DLL.  
  
 Le librerie di importazione per la versione di MFC condivisa vengono denominate in base alla convenzione descritta [convenzioni di denominazione per le DLL MFC](../build/naming-conventions-for-mfc-dlls.md). Visual C++ fornisce versioni predefinite delle DLL MFC, oltre a un numero di DLL non MFC che è possibile utilizzare e distribuire con le applicazioni. Questi scenari sono documentati in Redist.txt, che viene installato nella cartella Programmi\Microsoft Visual Studio.  
  
 Se si sta esportando un file def, inserire il codice seguente all'inizio e alla fine del file di intestazione:  
  
```cpp  
#undef AFX_DATA  
#define AFX_DATA AFX_EXT_DATA  
// <body of your header file>  
#undef AFX_DATA  
#define AFX_DATA  
```  
  
 Queste righe assicurano che il codice viene compilato correttamente per una DLL di estensione MFC. Escludendo le quattro righe può causare la DLL per la compilazione o il collegamento errato.  
  
 Se è necessario passare un MFC o derivati da MFC oggetto puntatore a una o da una DLL di MFC, la DLL deve essere una DLL di estensione MFC. Le funzioni membro associate all'oggetto passato esistono nel modulo in cui è stato creato l'oggetto. Poiché queste funzioni vengono esportate correttamente quando si utilizza la versione DLL condivisa di MFC, è possibile passare liberamente MFC o puntatori a oggetti derivati da MFC tra un'applicazione e le DLL il caricamento di estensione MFC.  
  
 A causa di problemi di esportazione e di denominazione di nome C++, l'elenco di esportazione di un'estensione MFC DLL potrebbero essere diversi tra versioni di debug e finale della stessa DLL e DLL per diverse piattaforme. Vendita al dettaglio MFCx0 è circa 2.000 esportato punti di ingresso; debug MFCx0D. dll è circa 3.000 esportato i punti di ingresso.  
  
## <a name="memory-management"></a>Gestione della memoria  
 MFCx0 e tutte le DLL caricate nello spazio degli indirizzi di un'applicazione client di estensione MFC utilizzano la stessa allocatore di memoria, il caricamento delle risorse e altri stati globali MFC come se fossero nella stessa applicazione. Questo è importante perché le librerie DLL non MFC e DLL regolare MFC l'esatto opposto e avere ogni allocazione DLL fuori il proprio pool di memoria.  
  
 Se una DLL di estensione MFC alloca memoria, che la memoria può combinare liberamente con qualsiasi altro oggetto allocato di applicazione. Inoltre, se un'applicazione collegata in modo dinamico a MFC non riesce, la protezione del sistema operativo gestisce l'integrità di qualsiasi altra applicazione MFC che condivide la DLL.  
  
 Allo stesso modo altri stati globali MFC, ad esempio il file eseguibile corrente per caricare le risorse, vengono condivisi tra l'applicazione client e tutte le DLL di estensione MFC nonché MFCx0 stesso.  
  
## <a name="sharing-resources-and-classes"></a>La condivisione delle risorse e le classi  
 Esportazione di risorse viene eseguita tramite un elenco di risorse. Ogni applicazione contiene un elenco collegato singolarmente di **CDynLinkLibrary** oggetti. Quando si cerca una risorsa, la maggior parte delle implementazioni MFC standard che caricano le risorse cerca innanzitutto nel modulo della risorsa corrente (`AfxGetResourceHandle`) e se la risorsa non viene trovata scorrere l'elenco di **CDynLinkLibrary** oggetti il tentativo di caricare la risorsa richiesta.  
  
 Scorrere l'elenco presenta gli svantaggi che è leggermente più lenta e richiede la gestione degli intervalli di ID di risorsa. Offre il vantaggio che un'applicazione client che si collega a diverse DLL di estensione MFC è possibile utilizzare qualsiasi risorsa fornita dalla DLL senza dover specificare l'handle di istanza DLL. `AfxFindResourceHandle`è un'API utilizzata per scorrere l'elenco di risorse per cercare una corrispondenza specificata. Accetta il nome e il tipo di una risorsa e restituisce l'handle di risorsa in cui è stato rilevato prima (o NULL).  
  
 Se si desidera scorrere l'elenco e caricare solo le risorse da una posizione specifica, utilizzare le funzioni `AfxGetResourceHandle` e `AfxSetResourceHandle` per salvare l'handle precedente e impostare il nuovo handle. Prestare attenzione a ripristinare l'handle di risorsa precedente prima di tornare all'applicazione client. Per un esempio di utilizzo di questo approccio per caricare in modo esplicito un menu, vedere il file cpp Testdll2 nell'esempio MFC [DLLHUSK](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/dllhusk).  
  
 La creazione dinamica di oggetti MFC specificato un nome MFC è simile. Il meccanismo di deserializzazione di oggetti MFC deve disporre di tutti i `CRuntimeClass` gli oggetti registrati in modo che è possibile ricostruire mediante la creazione dinamica di oggetti C++ del tipo richiesto in base a ciò che è stato memorizzato in precedenza.  
  
 Nel caso dell'esempio MFC [DLLHUSK](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/dllhusk), l'elenco ha un aspetto simile:  
  
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
  
 dove *xx* è il numero di versione, ad esempio, 42 rappresenta la versione 4.2.  
  
 Il MFCxx.dll è generalmente l'ultimo la risorsa e un elenco di classi. Questo file include tutte le risorse MFC standard, tra cui le stringhe di richiesta per tutti gli ID di comando standard. Se viene posizionato alla fine dell'elenco consente DLL e l'applicazione client non dispone di una copia delle risorse MFC standard, ma per cui si basano invece sulle risorse condivise nel MFCxx.dll.  
  
 Unione delle risorse e i nomi delle classi di tutte le DLL nello spazio dei nomi dell'applicazione client presenta uno svantaggio che sia necessario prestare attenzione ai quali gli ID o nomi scelto.  
  
 Il [DLLHUSK](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/dllhusk) esempio gestisce lo spazio dei nomi di risorsa condivisa utilizzando più file di intestazione.  
  
 Se la DLL di estensione MFC deve mantenere dati aggiuntivi per ogni applicazione, è possibile derivare una nuova classe da **CDynLinkLibrary** e crearla in `DllMain`. Quando si esegue, la DLL può cercare elenco dell'applicazione corrente di **CDynLinkLibrary** oggetti da trovare quello più DLL di estensione MFC specifica.  
  
### <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Inizializzazione di DLL estensione MFC](../build/run-time-library-behavior.md#initializing-extension-dlls)  
  
### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Suggerimenti sull'utilizzo dei file di risorse condivise](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md)  
  
-   [Versione DLL di MFC](../mfc/tn033-dll-version-of-mfc.md)  
  
-   [DLL MFC regolari collegate in modo statico a MFC](../build/regular-dlls-statically-linked-to-mfc.md)  
  
-   [DLL MFC regolari collegate in modo dinamico a MFC](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [Uso di DLL MFC di estensione per database, OLE e Sockets nelle DLL MFC regolari](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)  
  
## <a name="see-also"></a>Vedere anche  
 [DLL in Visual C++](../build/dlls-in-visual-cpp.md)