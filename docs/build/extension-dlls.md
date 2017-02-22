---
title: "DLL di estensione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "afxdll"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AFXDLL (libreria)"
  - "DLL [C++], estensione"
  - "DLL di estensione [C++]"
  - "DLL di estensione [C++], informazioni"
  - "memoria [C++], DLL"
  - "DLL MFC [C++], DLL di estensione"
  - "MFC (DLL di estensione) [C++]"
  - "condivisione di risorse [C++]"
  - "versioni DLL condivise [C++]"
  - "risorse condivise [C++]"
ms.assetid: f69ac3d4-e474-4b1c-87a1-6738843a135c
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# DLL di estensione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una DLL di estensione di MFC implementa generalmente delle classi riutilizzabili derivate da quelle presenti nella libreria MFC.  
  
 Una DLL di questo tipo presenta le funzionalità e i requisiti descritti di seguito.  
  
-   L'eseguibile del client deve essere un'applicazione MFC compilata con il simbolo **\_AFXDLL** definito.  
  
-   Una DLL di estensione può anche essere utilizzata da una DLL regolare collegata in modo dinamico a MFC.  
  
-   Le DLL di estensione devono essere compilate con il simbolo `_AFXEXT` definito.  Questo impone che sia definito anche il simbolo **\_AFXDLL** e assicura che le dichiarazioni appropriate vengano recuperate dai file di intestazione MFC  e che **AFX\_EXT\_CLASS** venga definito come **\_\_declspec\(dllexport\)** durante la compilazione della DLL. Questa condizione è necessaria se si utilizza questa macro per dichiarare le classi nella DLL di estensione.  
  
-   Le DLL di estensione non devono creare un'istanza di una classe derivata da `CWinApp`, ma basarsi sull'applicazione, o DLL, client per fornire questo oggetto.  
  
-   Le DLL di estensione devono tuttavia fornire una funzione `DllMain` ed effettuare qui le operazioni di inizializzazione necessarie.  
  
 Questo tipo di DLL viene compilato mediante la versione a collegamento dinamico della libreria MFC, anche detta versione condivisa di MFC.  Solo gli eseguibili MFC, applicazioni o DLL regolari, compilati con la versione condivisa di MFC possono utilizzare una DLL di estensione.  L'applicazione client e la DLL di estensione devono utilizzare la stessa versione di MFCx0.dll.  Questa DLL consente di derivare nuove classi personalizzate da MFC e di fornire quindi questa versione estesa di MFC alle applicazioni che chiamano la DLL.  
  
 Le DLL di estensione possono anche essere utilizzate per passare oggetti derivati da MFC tra l'applicazione e la DLL.  Le funzioni membro associate all'oggetto passato sono presenti nel modulo in cui è stato creato l'oggetto.  Poiché queste funzioni vengono esportate correttamente quando si utilizza la versione della DLL condivisa di MFC, è possibile passare liberamente puntatori a oggetti MFC o derivati da MFC tra un'applicazione e le relative DLL di estensione caricate.  
  
 Una DLL di estensione di MFC utilizza una versione condivisa di MFC allo stesso modo in cui un'applicazione utilizza la versione di DLL condivisa di MFC, con alcune considerazioni aggiuntive.  
  
-   Non dispone di un oggetto derivato da `CWinApp`.  Deve utilizzare l'oggetto derivato da `CWinApp` dell'applicazione client.  Ciò significa che l'applicazione client è proprietaria del message pump principale, del ciclo inattivo e così via.  
  
-   Chiama `AfxInitExtensionModule` nella propria funzione `DllMain`.  Il valore restituito di questa funzione deve essere controllato.  Se viene restituito un valore zero da `AfxInitExtensionModule`, restituire 0 dalla funzione `DllMain`.  
  
-   Durante l'inizializzazione viene creato un oggetto **CDynLinkLibrary** se la DLL di estensione intende esportare risorse o oggetti `CRuntimeClass` nell'applicazione.  
  
 Nelle versioni di MFC precedenti alla 4.0, questo tipo di DLL era denominato AFXDLL,  nome che fa riferimento al simbolo del preprocessore **\_AFXDLL** che viene definito quando si compila la DLL.  
  
 Le librerie di importazione per la versione condivisa di MFC sono denominate in base alla convenzione descritta in [Convenzioni di denominazione per le DLL MFC](../build/naming-conventions-for-mfc-dlls.md).  Visual C\+\+ fornisce versioni già generate delle DLL MFC, oltre a varie DLL non MFC che è possibile utilizzare e distribuire con le applicazioni.  Queste DLL sono documentate nel file Redist.txt, installato nella cartella Programmi\\Microsoft Visual Studio.  
  
 Se si sta eseguendo l'esportazione mediante un file def, inserire il seguente codice all'inizio e alla fine del file di intestazione:  
  
```  
#undef AFX_DATA  
#define AFX_DATA AFX_EXT_DATA  
// <body of your header file>  
#undef AFX_DATA  
#define AFX_DATA  
```  
  
 Queste righe assicurano la corretta compilazione del codice per una DLL di estensione.  Il mancato inserimento di queste righe può causare la compilazione o il collegamento errato della DLL.  
  
 Se è necessario passare un puntatore a un oggetto MFC o derivato da MFC a o da una DLL MFC, questa deve essere una DLL di estensione.  Le funzioni membro associate all'oggetto passato sono presenti nel modulo in cui è stato creato l'oggetto.  Poiché queste funzioni vengono esportate correttamente quando si utilizza la versione della DLL condivisa di MFC, è possibile passare liberamente puntatori a oggetti MFC o derivati da MFC tra un'applicazione e le relative DLL di estensione caricate.  
  
 A causa dei problemi relativi all'esportazione e alla gestione dei nomi in C\+\+, l'elenco di esportazione da una DLL di estensione può variare tra la versione finale e quella di debug della stessa DLL e tra le DLL di piattaforme differenti.  Il file MFCx0.dll finale ha circa 2.000 punti di ingresso esportati, mentre il file MFCx0D.dll di debug ne ha circa 3.000.  
  
## Gestione della memoria  
 MFCx0.dll e tutte le DLL di estensione caricate nello spazio degli indirizzi di un'applicazione client utilizzano lo stesso allocatore di memoria, lo stesso meccanismo di caricamento delle risorse e altri stati globali MFC, come se si trovassero nella stessa applicazione.  Questo fatto è significativo poiché le librerie DLL non MFC e le DLL regolari si comportano in modo esattamente opposto e ciascuna effettua l'assegnazione al di fuori del proprio pool di memoria.  
  
 Se una DLL di estensione alloca memoria, quest'ultima può liberamente mescolarsi con qualsiasi altro oggetto allocato dall'applicazione.  Inoltre, se si verifica un errore in un'applicazione collegata a MFC in modo dinamico, la protezione del sistema operativo mantiene l'integrità di qualsiasi altra applicazione MFC che condivide la DLL.  
  
 In modo analogo, altri stati globali MFC, ad esempio il file eseguibile corrente da cui caricare le risorse, vengono condivisi tra l'applicazione client e tutte le DLL di estensione MFC nonché il file MFCx0.dll stesso.  
  
## Condivisione di risorse e classi  
 L'esportazione delle risorse viene effettuata tramite un elenco di risorse.  Ogni applicazione contiene un elenco di oggetti **CDynLinkLibrary** collegato singolarmente.  Nella ricerca di una risorsa, la maggior parte delle implementazioni MFC standard che caricano le risorse cerca innanzitutto nel modulo di risorsa corrente \(`AfxGetResourceHandle`\) e, se non trova la risorsa, scorre l'elenco di oggetti **CDynLinkLibrary** nel tentativo di caricare la risorsa richiesta.  
  
 La consultazione dell'elenco è un'operazione lenta e richiede la gestione degli intervalli di ID delle risorse.  Offre il vantaggio che un'applicazione client che si collega a diverse DLL di estensione può utilizzare una qualsiasi risorsa fornita dalla DLL senza dover specificare l'handle di istanza della DLL.  `AfxFindResourceHandle` è un'API utilizzata per scorrere l'elenco di risorse allo scopo di individuare una data corrispondenza.  Utilizza il nome e il tipo di una risorsa e restituisce l'handle della risorsa nella posizione in cui viene trovato la prima volta oppure il valore NULL.  
  
 Se non si desidera scorrere l'elenco e caricare solo le risorse da una posizione specifica, utilizzare le funzioni `AfxGetResourceHandle` e `AfxSetResourceHandle` per salvare l'handle precedente e impostare quello nuovo.  Assicurarsi di ripristinare l'handle di risorsa precedente prima di tornare all'applicazione client.  Per un esempio sull'utilizzo di questo metodo per il caricamento esplicito di un menu, vedere il file Testdll2 .cpp nell'esempio MFC [DLLHUSK](http://msdn.microsoft.com/it-it/dfcaa6ff-b8e2-4efd-8100-ee3650071f90).  
  
 La creazione dinamica di oggetti MFC specificando un nome MFC è simile.  Il meccanismo di deserializzazione degli oggetti MFC richiede la registrazione di tutti gli oggetti `CRuntimeClass` in modo da effettuare la ricostruzione mediante la creazione dinamica di oggetti C\+\+ del tipo richiesto in base a quanto memorizzato in precedenza.  
  
 Nel caso dell'esempio [DLLHUSK](http://msdn.microsoft.com/it-it/dfcaa6ff-b8e2-4efd-8100-ee3650071f90) MFC, l'elenco è simile al seguente:  
  
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
  
 dove *xx* è il numero della versione. Ad esempio, 42 rappresenta la versione 4.2.  
  
 MFCxx.dll è in genere l'ultimo file nell'elenco delle risorse e delle classi.  Questo file include tutte le risorse MFC standard, comprese le stringhe di richiesta per tutti gli ID di comando standard.  Se viene posizionato alla fine dell'elenco, non è necessario che le DLL e l'applicazione client dispongano di una propria copia delle risorse MFC standard, poiché potranno utilizzare le risorse condivise nel file MFCxx.dll.  
  
 L'unione delle risorse e dei nomi di classe di tutte le DLL nello spazio dei nomi dell'applicazione client richiede una maggiore attenzione nella selezione degli ID o dei nomi.  
  
 Nell'esempio [DLLHUSK](http://msdn.microsoft.com/it-it/dfcaa6ff-b8e2-4efd-8100-ee3650071f90) viene illustrata la gestione dello spazio dei nomi di risorse condiviso mediante più file di intestazione.  
  
 Se la DLL di estensione di MFC deve mantenere dati aggiuntivi per ciascuna applicazione, è possibile derivare una nuova classe da **CDynLinkLibrary** e crearla in `DllMain`.  Durante l'esecuzione, la DLL può cercare nell'elenco di oggetti **CDynLinkLibrary** dell'applicazione corrente quello relativo alla DLL di estensione specifica.  
  
### Scegliere l'argomento con cui si desidera procedere  
  
-   [Inizializzazione di DLL di estensione](../build/initializing-extension-dlls.md)  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Suggerimenti sull'utilizzo dei file di risorse condivisi](../mfc/tn035-using-multiple-resource-files-and-header-files-with-visual-cpp.md)  
  
-   [Versione DLL di MFC](../mfc/tn033-dll-version-of-mfc.md)  
  
-   [DLL regolari collegate a MFC in modo statico](../build/regular-dlls-statically-linked-to-mfc.md)  
  
-   [DLL regolari collegate a MFC in modo dinamico](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [Utilizzo di DLL di estensione per database, OLE e Sockets nelle DLL regolari](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)