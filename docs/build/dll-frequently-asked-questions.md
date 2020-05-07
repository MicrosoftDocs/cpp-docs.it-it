---
title: Domande frequenti sulle DLL MFC
ms.date: 05/06/2019
helpviewer_keywords:
- troubleshooting [C++], DLLs
- DLLs [C++], frequently asked questions
- FAQs [C++], DLLs
ms.assetid: 09dd068e-fc33-414e-82f7-289c70680256
ms.openlocfilehash: 9108aaf3fcface847b0391455a2aecd4d45658c4
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79417348"
---
# <a name="dll-frequently-asked-questions"></a>Domande frequenti relative alle DLL

Di seguito sono riportate alcune domande frequenti sulle dll.

- [Una DLL MFC può creare più thread?](#mfc_multithreaded_1)

- [Un'applicazione multithread può accedere a una DLL MFC in diversi thread?](#mfc_multithreaded_2)

- [Esistono funzioni o classi MFC che non è possibile utilizzare in una DLL MFC?](#mfc_prohibited_classes)

- [Quali tecniche di ottimizzazione è necessario utilizzare per migliorare le prestazioni dell'applicazione client durante il caricamento?](#mfc_optimization)

- [Si è verificata una perdita di memoria nella normale DLL MFC, ma il mio codice sembra corretto. Come è possibile individuare la perdita di memoria?](#memory_leak)

## <a name="can-an-mfc-dll-create-multiple-threads"></a><a name="mfc_multithreaded_1"></a>Una DLL MFC può creare più thread?

Eccetto durante l'inizializzazione, una DLL MFC può creare in modo sicuro più thread, purché utilizzi le funzioni TLS (thread local storage) Win32, ad esempio **TlsAlloc** per allocare l'archiviazione locale dei thread. Tuttavia, se una DLL MFC utilizza **__declspec (thread)** per allocare l'archiviazione locale di thread, l'applicazione client deve essere collegata in modo implicito alla dll. Se l'applicazione client si collega in modo esplicito alla DLL, la chiamata a **LoadLibrary** non caricherà correttamente la dll. Per ulteriori informazioni sulle variabili locali di thread nelle DLL, vedere [thread](../cpp/thread.md).

Una DLL MFC che crea un nuovo thread MFC durante l'avvio smetterà di rispondere quando viene caricata da un'applicazione. Ciò include ogni volta che un thread viene creato `AfxBeginThread` chiamando `CWinThread::CreateThread` o all'interno di:

- `InitInstance` Di un `CWinApp`oggetto derivato da in una normale DLL MFC.

- Funzione specificata `DllMain` o **RawDllMain** in una normale DLL MFC.

- Funzione specificata `DllMain` o **RAWDLLMAIN** in una DLL di estensione MFC.

## <a name="can-a-multithreaded-application-access-an-mfc-dll-in-different-threads"></a><a name="mfc_multithreaded_2"></a>Un'applicazione multithread può accedere a una DLL MFC in thread diversi?

Le applicazioni multithread possono accedere a DLL MFC regolari che si collegano dinamicamente alle DLL di estensione MFC e MFC da thread diversi. Un'applicazione può accedere a DLL MFC regolari che si collegano in modo statico a MFC da più thread creati nell'applicazione.

## <a name="are-there-any-mfc-classes-or-functions-that-cannot-be-used-in-an-mfc-dll"></a><a name="mfc_prohibited_classes"></a>Esistono classi o funzioni MFC che non possono essere utilizzate in una DLL MFC?

Le DLL di estensione `CWinApp`usano la classe derivata da dell'applicazione client. Non devono avere una propria `CWinApp`classe derivata da.

Le normali DLL MFC devono avere `CWinApp`una classe derivata da e un singolo oggetto della classe dell'applicazione, così come un'applicazione MFC. Diversamente dall' `CWinApp` oggetto di un'applicazione, l' `CWinApp` oggetto della dll non dispone di un message pump principale.

Si noti che poiché `CWinApp::Run` il meccanismo non è applicabile a una dll, l'applicazione è proprietaria del pump principale del messaggio. Se la DLL apre finestre di dialogo non modali o ha una finestra cornice principale, il pump del messaggio principale dell'applicazione deve chiamare una routine esportata dalla DLL, che a sua volta chiama `CWinApp::PreTranslateMessage` la funzione membro dell'oggetto applicazione della dll.

## <a name="what-optimization-techniques-should-i-use-to-improve-the-client-application39s-performance-when-loading"></a><a name="mfc_optimization"></a>Quali tecniche di ottimizzazione è consigliabile utilizzare per migliorare l'applicazione client&#39;le prestazioni durante il caricamento?

Se la DLL è una normale DLL MFC collegata in modo statico a MFC, la relativa modifica in una normale DLL MFC collegata a MFC riduce le dimensioni del file.

Se la DLL include un numero elevato di funzioni esportate, utilizzare un file def per esportare le funzioni (anziché utilizzare **__declspec (dllexport)**) e utilizzare l'attributo. def file [NoName](exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md) in ogni funzione esportata. L'attributo NONAME causa solo il valore ordinale e non il nome della funzione da archiviare nella tabella di esportazione della DLL, riducendo così le dimensioni del file.

Le DLL collegate in modo implicito a un'applicazione vengono caricate quando viene caricata l'applicazione. Per migliorare le prestazioni durante il caricamento, provare a dividere la DLL in dll diverse. Inserire tutte le funzioni necessarie per l'applicazione chiamante subito dopo il caricamento in un'unica DLL e fare in modo che l'applicazione chiamante si colleghi a tale DLL. Inserire le altre funzioni che l'applicazione chiamante non ha bisogno immediatamente in un'altra DLL e fare in modo che l'applicazione si colleghi a tale DLL. Per ulteriori informazioni, vedere [collegare un eseguibile a una dll](linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use).

## <a name="there39s-a-memory-leak-in-my-regular-mfc-dll-but-my-code-looks-fine-how-can-i-find-the-memory-leak"></a><a name="memory_leak"></a>Si&#39;una perdita di memoria nella normale DLL MFC, ma il codice è corretto. Come è possibile individuare la perdita di memoria?

Una possibile causa della perdita di memoria è che MFC crea oggetti temporanei utilizzati all'interno delle funzioni del gestore di messaggi. Nelle applicazioni MFC questi oggetti temporanei vengono puliti automaticamente nella funzione chiamata `CWinApp::OnIdle()` tra l'elaborazione dei messaggi. Tuttavia, nelle librerie a collegamento dinamico (dll) MFC, la `OnIdle()` funzione non viene chiamata automaticamente. Di conseguenza, gli oggetti temporanei non vengono puliti automaticamente. Per pulire gli oggetti temporanei, la DLL deve chiamare `OnIdle(1)` in modo esplicito periodicamente.

## <a name="see-also"></a>Vedere anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)
