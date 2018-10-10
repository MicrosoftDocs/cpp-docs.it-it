---
title: Domande frequenti su DLL MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- troubleshooting [C++], DLLs
- DLLs [C++], frequently asked questions
- FAQs [C++], DLLs
ms.assetid: 09dd068e-fc33-414e-82f7-289c70680256
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9a68a0ae6392c2a9a64c9ff6c567451c2672c861
ms.sourcegitcommit: d3c41b16bf05af2149090e996d8e71cd6cd55c7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/09/2018
ms.locfileid: "48890192"
---
# <a name="dll-frequently-asked-questions"></a>Domande frequenti relative alle DLL

Seguenti sono alcune domande frequenti (FAQ) sulle DLL.

- [Una DLL MFC possono creare più thread?](#mfc_multithreaded_1)

- [Un'applicazione multithreading può accedere a una DLL MFC in diversi thread?](#mfc_multithreaded_2)

- [Esistono funzioni che non possono essere utilizzate in una DLL MFC o classi MFC?](#mfc_prohibited_classes)

- [Quali tecniche di ottimizzazione è necessario usare per migliorare le prestazioni dell'applicazione client durante il caricamento?](#mfc_optimization)

- [Si verifica una perdita di memoria la DLL MFC regolare, ma il codice sembra corretto. Come è possibile reperire la perdita di memoria?](#memory_leak)

## <a name="mfc_multithreaded_1"></a> Una DLL MFC possono creare più thread?

Tranne che durante l'inizializzazione, una DLL MFC può creare in modo sicuro più thread, purché utilizza il thread Win32, ad esempio le funzioni di archiviazione-local (TLS) **TlsAlloc** allocare l'archiviazione thread-local. Tuttavia, se viene utilizzata una DLL MFC **declspec** per allocare l'archiviazione thread-local, l'applicazione client deve essere collegato in modo implicito alla DLL. Se l'applicazione client si collega in modo esplicito alla DLL, la chiamata a **LoadLibrary** non vengono caricati correttamente la DLL. Per altre informazioni sulle variabili locali del thread nelle DLL, vedere [thread](../cpp/thread.md).

Una DLL MFC che crea un nuovo thread MFC durante l'avvio smetterà di rispondere quando viene caricato da un'applicazione. Ciò include ogni volta che viene creato un thread chiamando `AfxBeginThread` o `CWinThread::CreateThread` all'interno di:

- Il `InitInstance` di un `CWinApp`-oggetto in una DLL MFC regolari derivato.

- Una classe fornita `DllMain` oppure **RawDllMain** funzione in una DLL MFC regolari.

- Una classe fornita `DllMain` oppure **RawDllMain** funzione in una DLL di estensione MFC.

## <a name="mfc_multithreaded_2"></a> Un'applicazione multithreading può accedere a una DLL MFC in diversi thread?

Applicazioni multithreading possono accedere a DLL di estensione MFC e DLL MFC regolari collegate a MFC in modo dinamico da thread diversi. E, a partire da Visual C++ versione 4.2, un'applicazione può accedere a DLL MFC regolari collegate a MFC in modo statico da più thread creati nell'applicazione.

Prima della versione 4.2, solo un thread esterno è stato possibile collegare a una DLL MFC regolare collegata a MFC in modo statico.

Si noti che il termine USRDLL non sono non è più utilizzato nella documentazione di Visual C++. Una DLL MFC regolare collegata in modo statico a MFC ha le stesse caratteristiche di USRDLL.

## <a name="mfc_prohibited_classes"></a> Esistono funzioni che non possono essere utilizzate in una DLL MFC o classi MFC?

Uso di DLL di estensione di `CWinApp`-classe dell'applicazione client derivata. Non devono disporre di proprie `CWinApp`-classe derivata.

DLL MFC regolari devono avere un `CWinApp`-classe derivata e un singolo oggetto della classe di applicazioni, come le applicazioni MFC. A differenza di `CWinApp` oggetto di un'applicazione, il `CWinApp` oggetto della DLL è privo di un message pump principale.

Si noti che poiché il `CWinApp::Run` meccanismo non è applicabile a una DLL, l'applicazione possiede il message pump principale. Se la DLL verrà visualizzata la finestra di dialogo non modale o dispone di un proprio una finestra cornice principale, dell'applicazione principale message pump deve chiamare una routine esportata dalla DLL, che a sua volta chiama il `CWinApp::PreTranslateMessage` funzione membro dell'oggetto di applicazione della DLL.

## <a name="mfc_optimization"></a> Quali tecniche di ottimizzazione è necessario utilizzare per migliorare l'applicazione client&#39;prestazioni s durante il caricamento?

Se la DLL è una DLL MFC regolare collegata in modo statico a MFC, modificandolo in una normale DLL MFC collegato in modo dinamico a MFC riduce le dimensioni del file.

Se la DLL include un numero elevato di funzioni esportate, usare un file con estensione def per esportare le funzioni (invece di usare **dllexport**) e utilizzare il file con estensione def [NONAME (attributo)](../build/exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md) su ogni funzione esportata. Questo attributo fa sì che solo il valore ordinale e non il nome della funzione da archiviare nella tabella di esportazione della DLL, che riduce le dimensioni del file.

DLL collegate in modo implicito a un'applicazione vengono caricate quando il caricamento dell'applicazione. Per migliorare le prestazioni durante il caricamento, provare a dividere la DLL in DLL diverse. Inserire tutte le funzioni che l'applicazione chiamante deve immediatamente dopo il caricamento in un'unica DLL e l'applicazione chiamante in modo implicito il collegamento a tale DLL. Inserire le altre funzioni che l'applicazione chiamante non necessita di immediatamente in un'altra DLL e l'applicazione in modo esplicito collegare alla DLL. Per altre informazioni, vedere [determinare il metodo di collegamento da usare](../build/linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use).

## <a name="memory_leak"></a> Sono&#39;s una perdita di memoria nella mio DLL MFC regolari, ma il mio codice sembra corretto. Come è possibile reperire la perdita di memoria?

Una delle possibili cause di perdita di memoria è che MFC crea oggetti temporanei che vengono usati all'interno di funzioni gestore messaggi. Nelle applicazioni MFC, questi oggetti temporanei vengono cancellati automaticamente nel `CWinApp::OnIdle()` funzione chiamata tra l'elaborazione dei messaggi. Tuttavia, in librerie a collegamento dinamico (DLL), MFC la `OnIdle()` funzione non viene chiamata automaticamente. Di conseguenza, gli oggetti temporanei non vengono automaticamente eliminati. Per pulire gli oggetti temporanei, è necessario chiamare esplicitamente la DLL `OnIdle(1)` periodicamente.

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](../build/dlls-in-visual-cpp.md)