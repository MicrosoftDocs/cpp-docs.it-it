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

- [Un'applicazione multithread può accedere a una DLL MFC in thread diversi?](#mfc_multithreaded_2)

- [Esistono classi o funzioni MFC che non possono essere utilizzate in una DLL MFC?](#mfc_prohibited_classes)

- [Quali tecniche di ottimizzazione è consigliabile utilizzare per migliorare le prestazioni dell'applicazione client durante il caricamento?](#mfc_optimization)

- [Si è verificata una perdita di memoria nella normale DLL MFC, ma il mio codice sembra corretto. Come è possibile individuare la perdita di memoria?](#memory_leak)

## <a name="mfc_multithreaded_1"></a>Una DLL MFC può creare più thread?

Eccetto durante l'inizializzazione, una DLL MFC può creare in modo sicuro più thread, purché utilizzi le funzioni TLS (thread local storage) Win32, ad esempio **TlsAlloc** per allocare l'archiviazione locale dei thread. Tuttavia, se una DLL MFC utilizza **__declspec (thread)** per allocare l'archiviazione locale di thread, l'applicazione client deve essere collegata in modo implicito alla dll. Se l'applicazione client si collega in modo esplicito alla DLL, la chiamata a **LoadLibrary** non caricherà correttamente la dll. Per ulteriori informazioni sulle variabili locali di thread nelle DLL, vedere [thread](../cpp/thread.md).

Una DLL MFC che crea un nuovo thread MFC durante l'avvio smetterà di rispondere quando viene caricata da un'applicazione. Questo include ogni volta che viene creato un thread chiamando `AfxBeginThread` o `CWinThread::CreateThread` all'interno di:

- `InitInstance` di un oggetto derivato da `CWinApp`in una DLL MFC normale.

- Una funzione `DllMain` o **RawDllMain** fornita in una normale DLL MFC.

- Una funzione `DllMain` o **RawDllMain** fornita in una DLL di estensione MFC.

## <a name="mfc_multithreaded_2"></a>Un'applicazione multithread può accedere a una DLL MFC in thread diversi?

Le applicazioni multithread possono accedere a DLL MFC regolari che si collegano dinamicamente alle DLL di estensione MFC e MFC da thread diversi. Un'applicazione può accedere a DLL MFC regolari che si collegano in modo statico a MFC da più thread creati nell'applicazione.

## <a name="mfc_prohibited_classes"></a>Esistono classi o funzioni MFC che non possono essere utilizzate in una DLL MFC?

Le DLL di estensione usano la classe derivata da `CWinApp`dell'applicazione client. Non devono avere una propria classe derivata da `CWinApp`.

Le normali DLL MFC devono avere una classe derivata da `CWinApp`e un singolo oggetto della classe dell'applicazione, così come un'applicazione MFC. A differenza dell'oggetto `CWinApp` di un'applicazione, l'oggetto `CWinApp` della DLL non dispone di un message pump principale.

Si noti che poiché il meccanismo di `CWinApp::Run` non è applicabile a una DLL, l'applicazione è proprietaria del pump principale del messaggio. Se la DLL apre finestre di dialogo non modali o ha una finestra cornice principale, il pump del messaggio principale dell'applicazione deve chiamare una routine esportata dalla DLL, che a sua volta chiama la funzione membro `CWinApp::PreTranslateMessage` dell'oggetto applicazione della DLL.

## <a name="mfc_optimization"></a>Quali tecniche di ottimizzazione è consigliabile utilizzare per migliorare le prestazioni&#39;dell'applicazione client durante il caricamento?

Se la DLL è una normale DLL MFC collegata in modo statico a MFC, la relativa modifica in una normale DLL MFC collegata a MFC riduce le dimensioni del file.

Se la DLL include un numero elevato di funzioni esportate, utilizzare un file def per esportare le funzioni (anziché utilizzare **__declspec (dllexport)** ) e utilizzare l'attributo. def file [NoName](exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md) in ogni funzione esportata. L'attributo NONAME causa solo il valore ordinale e non il nome della funzione da archiviare nella tabella di esportazione della DLL, riducendo così le dimensioni del file.

Le DLL collegate in modo implicito a un'applicazione vengono caricate quando viene caricata l'applicazione. Per migliorare le prestazioni durante il caricamento, provare a dividere la DLL in dll diverse. Inserire tutte le funzioni necessarie per l'applicazione chiamante subito dopo il caricamento in un'unica DLL e fare in modo che l'applicazione chiamante si colleghi a tale DLL. Inserire le altre funzioni che l'applicazione chiamante non ha bisogno immediatamente in un'altra DLL e fare in modo che l'applicazione si colleghi a tale DLL. Per ulteriori informazioni, vedere [collegare un eseguibile a una dll](linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use).

## <a name="memory_leak"></a>Si&#39;è verificata una perdita di memoria nella normale DLL MFC, ma il mio codice sembra corretto. Come è possibile individuare la perdita di memoria?

Una possibile causa della perdita di memoria è che MFC crea oggetti temporanei utilizzati all'interno delle funzioni del gestore di messaggi. Nelle applicazioni MFC questi oggetti temporanei vengono puliti automaticamente nella funzione `CWinApp::OnIdle()` chiamata tra l'elaborazione dei messaggi. Tuttavia, nelle librerie a collegamento dinamico (dll) MFC, la funzione `OnIdle()` non viene chiamata automaticamente. Di conseguenza, gli oggetti temporanei non vengono puliti automaticamente. Per pulire gli oggetti temporanei, è necessario che la DLL chiami in modo esplicito `OnIdle(1)` periodicamente.

## <a name="see-also"></a>Vedere anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)
