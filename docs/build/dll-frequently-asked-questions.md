---
title: Domande frequenti sulla DLL MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- troubleshooting [C++], DLLs
- DLLs [C++], frequently asked questions
- FAQs [C++], DLLs
ms.assetid: 09dd068e-fc33-414e-82f7-289c70680256
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 39c3a36f697527c7e133409f49656e4415f86a7f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dll-frequently-asked-questions"></a>Domande frequenti relative alle DLL  
  
Seguenti sono riportate alcune domande frequenti (FAQ) sulle DLL.  
    
-   [Una DLL MFC può creare più thread?](#mfc_multithreaded_1)  

-   [Un'applicazione multithread può accedere una DLL MFC in diversi thread?](#mfc_multithreaded_2)  
  
-   [Esistono classi MFC o funzioni non possono essere utilizzati in una DLL MFC?](#mfc_prohibited_classes)  
  
-   [Quali tecniche di ottimizzazione è necessario utilizzare per migliorare le prestazioni dell'applicazione client durante il caricamento?](#mfc_optimization)  
  
-   [È presente una perdita di memoria la DLL di MFC regolare, ma il codice sembra corretto. Come è possibile trovare la perdita di memoria?](#memory_leak)  

## <a name="mfc_multithreaded_1"></a>Una DLL MFC può creare più thread?  
  
Eccezione durante l'inizializzazione, una DLL MFC può creare in modo sicuro più thread, purché utilizza il thread di Win32, ad esempio le funzioni di archiviazione locale (TLS) **TlsAlloc** allocare spazio di archiviazione locale di thread. Tuttavia, se una DLL MFC utilizza **declspec** per allocare l'archiviazione locale di thread, l'applicazione client deve essere collegata in modo implicito alla DLL. Se l'applicazione client è collegata in modo esplicito alla DLL, la chiamata a **LoadLibrary** non caricherà correttamente la DLL. Per ulteriori informazioni sulla creazione di più thread nelle DLL di MFC, vedere l'articolo della Knowledge Base, "PRB: Calling LoadLibrary al carico una DLL che è statico TLS" (Q118816). Per ulteriori informazioni sulle variabili locali del thread nelle DLL, vedere [thread](../cpp/thread.md).
  
 DLL MFC che crea un nuovo thread MFC durante l'avvio smetterà di rispondere quando viene caricato da un'applicazione. Ciò include ogni volta che viene creato un thread chiamando `AfxBeginThread` o `CWinThread::CreateThread` all'interno di:  
  
-   Il `InitInstance` di un `CWinApp`-oggetto in una DLL MFC regolare derivato.  
  
-   Una classe fornita `DllMain` o **RawDllMain** funzione nella DLL regolare MFC.  
  
-   Una classe fornita `DllMain` o **RawDllMain** funzione in una DLL di estensione MFC.  
  
 Per ulteriori informazioni sulla creazione di thread durante l'inizializzazione, vedere l'articolo della Knowledge Base, "PRB: non è possibile creare un MFC Thread durante l'avvio di DLL" (Q142243).  
  
## <a name="mfc_multithreaded_2"></a>Un'applicazione multithread può accedere una DLL MFC in diversi thread?
Applicazioni multithreading è possono accedere DLL MFC regolari collegate in modo dinamico a MFC e DLL di estensione MFC da thread diversi. E, a partire da Visual C++ versione 4.2, un'applicazione può accedere DLL MFC regolari collegate in modo statico a MFC da più thread creati nell'applicazione.  
  
 Prima della versione 4.2, è possibile associare solo un thread esterno in una DLL MFC regolare collegata a MFC in modo statico. Per ulteriori informazioni sulle restrizioni di accesso alle DLL MFC regolari collegate in modo statico a MFC da più thread (prima di Visual C++ versione 4.2), vedere l'articolo della Knowledge Base, "più thread e MFC USRDLL" (Q122676).  
  
 Si noti che il termine USRDLL non sono più utilizzato nella documentazione di Visual C++. Una DLL MFC regolare collegata in modo statico a MFC ha le stesse caratteristiche di USRDLL.  


## <a name="mfc_prohibited_classes"></a>Esistono classi MFC o funzioni non possono essere utilizzati in una DLL MFC?
Utilizzo di DLL di estensione di `CWinApp`-derivata dell'applicazione client. Non devono disporre di proprie `CWinApp`-classe derivata.  
  
le DLL regolare MFC devono avere un `CWinApp`-classe derivata e un singolo oggetto della classe di applicazione, come le applicazioni MFC. A differenza di `CWinApp` oggetto di un'applicazione, il `CWinApp` oggetto della DLL non esiste un message pump principale.  
  
 Si noti che poiché il `CWinApp::Run` meccanismo non è applicabile a una DLL, l'applicazione possiede il message pump principale. Se la DLL verrà visualizzata la finestra di dialogo non modali o dispone di un proprio una finestra cornice principale, message pump principale dell'applicazione deve chiamare una routine esportata dalla DLL, che a sua volta chiama il `CWinApp::PreTranslateMessage` funzione membro dell'oggetto di applicazione della DLL.  

## <a name="mfc_optimization"></a>Quali tecniche di ottimizzazione è necessario utilizzare per migliorare l'applicazione client &#39; prestazioni durante il caricamento?
Se la DLL è una DLL MFC regolare collegata in modo statico a MFC, modificarlo in una normale DLL MFC collegato in modo dinamico a MFC riduce le dimensioni del file.  
  
 Se la DLL è un numero elevato di funzioni esportate, utilizzare un file. def per esportare le funzioni (anziché **dllexport**) e utilizzare il file con estensione def [NONAME (attributo)](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md) in ogni funzione esportata. Questo attributo fa sì che solo il valore ordinale e non il nome della funzione da archiviare nella tabella di esportazione della DLL, che consente di ridurre le dimensioni del file.  
  
 DLL collegate in modo implicito a un'applicazione vengono caricate al caricamento dell'applicazione. Per migliorare le prestazioni durante il caricamento, suddividere la DLL in DLL diverse. Inserire tutte le funzioni che l'applicazione chiamante deve immediatamente dopo il caricamento in una DLL e l'applicazione chiamante in modo implicito il collegamento a tale DLL. Inserire le altre funzioni che l'applicazione chiamante non è necessario immediatamente in un'altra DLL e l'applicazione in modo esplicito collegare tale DLL. Per ulteriori informazioni, vedere [determinare quale metodo di collegamento](../build/linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use).  

## <a name="memory_leak"></a>Vi &#39; s una perdita di memoria la DLL MFC regolare, ma il codice è corretto. Come è possibile trovare la perdita di memoria?  
  
Una delle possibili cause della perdita di memoria è che MFC crea oggetti temporanei vengono utilizzati all'interno di funzioni gestore messaggi. Nelle applicazioni MFC, questi oggetti temporanei vengono automaticamente eliminati nel `CWinApp::OnIdle()` funzione chiamata tra l'elaborazione dei messaggi. Tuttavia, nelle librerie di collegamento dinamico MFC (DLL), il `OnIdle()` funzione non viene chiamata automaticamente. Di conseguenza, gli oggetti temporanei non vengono automaticamente eliminati. Per pulire gli oggetti temporanei, è necessario chiamare esplicitamente la DLL `OnIdle(1)` periodicamente.  
  
## <a name="see-also"></a>Vedere anche  
 [DLL in Visual C++](../build/dlls-in-visual-cpp.md)