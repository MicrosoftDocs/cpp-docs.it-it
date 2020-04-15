---
title: Tipi di DLL
ms.date: 05/06/2019
helpviewer_keywords:
- MFC DLLs [C++], types
- DLLs [C++], types
- DLLs [C++], MFC
ms.assetid: f6a30db9-6138-4b2c-90cc-a17855e499a6
ms.openlocfilehash: dae44d2dd39597420ce2a2c4e1642e8a7f0784e2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328495"
---
# <a name="kinds-of-dlls"></a>Tipi di DLL

In questo argomento vengono fornite informazioni che consentono di determinare il tipo di DLL da compilare.

## <a name="different-kinds-of-dlls-available"></a><a name="_core_the_different_kinds_of_dlls_available_with_visual_c.2b2b"></a>Diversi tipi di DLL disponibili

Utilizzando Visual Studio, è possibile compilare le DLL Win32 in C o in C, che non utilizzano la libreria Mfc (Microsoft Foundation Class). È possibile creare un progetto DLL non MFC con la Creazione guidata applicazione Win32.You can create a non-MFC DLL project with the Win32 Application Wizard.

La libreria MFC stessa è disponibile, in librerie a collegamento statico o in numerose DLL, con la Creazione guidata DLL MFC. Se la DLL utilizza MFC, Visual Studio supporta tre diversi scenari di sviluppo di DLL:

- Compilazione di una DLL MFC regolare collegata in modo statico a MFC

- Compilazione di una DLL MFC regolare che collega dinamicamente MFC

- Compilazione di una DLL di estensione MFC, che collega sempre in modo dinamico MFCBuilding an MFC extension DLL, which always dynamically link MFC

### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [DLL non MFC: cenni preliminari](non-mfc-dlls-overview.md)

- [DLL MFC regolari collegate a MFC in modo statico](regular-dlls-statically-linked-to-mfc.md)

- [DLL MFC regolari collegate a MFC in modo dinamico](regular-dlls-dynamically-linked-to-mfc.md)

- [Panoramica delle DLL MFC di estensione](extension-dlls-overview.md)

- [Che tipo di DLL utilizzare](#_core_which_kind_of_dll_to_use)

## <a name="deciding-which-kind-of-dll-to-use"></a><a name="_core_which_kind_of_dll_to_use"></a>Decidere il tipo di DLL da utilizzare

Se la DLL non utilizza MFC, utilizzare Visual Studio per compilare una DLL Win32 non MFC. Il collegamento della DLL a MFC (in modo statico o dinamico) occupa spazio su disco e memoria significativi. È consigliabile non collegarsi a MFC a meno che la DLL non utilizzi effettivamente MFC.

Se la DLL utilizzerà MFC e verrà utilizzata da MFC o da applicazioni non MFC, è necessario compilare una DLL MFC regolare collegata a MFC in modo dinamico o una DLL MFC regolare collegata a MFC in modo statico. Nella maggior parte dei casi, è probabile che si desideri utilizzare una DLL MFC regolare che collega in modo dinamico a MFC perché la dimensione del file della DLL sarà molto più piccola e il risparmio in memoria dall'utilizzo della versione condivisa di MFC può essere significativo. Se si esegue il collegamento statico a MFC, la dimensione del file della DLL sarà maggiore e potenzialmente occupare memoria aggiuntiva perché carica la propria copia privata del codice della libreria MFC.

La compilazione di una DLL collegata in modo dinamico a MFC è più veloce rispetto alla creazione di una DLL collegata in modo statico a MFC perché non è necessario collegare MFC stesso. Ciò è particolarmente vero nelle build di debug in cui il linker deve compattare le informazioni di debug. Tramite il collegamento con una DLL che contiene già le informazioni di debug, sono presenti meno informazioni di debug da compattare all'interno della DLL.

Uno svantaggio del collegamento dinamico a MFC è che è necessario distribuire le DLL condivise Mfcx0.dll e Msvcrxx.dll (o file simili) con la DLL. Le DLL MFC sono liberamente ridistribuibili, ma è comunque necessario installare le DLL nel programma di installazione. Inoltre, è necessario spedire il File Msvcrxx.dll, che contiene la libreria di runtime del linguaggio C utilizzata sia dal programma che dalle DLL MFC stesse.

Se la DLL verrà utilizzata solo da eseguibili MFC, è possibile scegliere tra la compilazione di una DLL MFC regolare o una DLL di estensione MFC. Se la DLL implementa classi riutilizzabili derivate dalle classi MFC esistenti o è necessario passare oggetti derivati da MFC tra l'applicazione e la DLL, è necessario compilare una DLL di estensione MFC.

Se la DLL si collega in modo dinamico a MFC, le DLL MFC potrebbero essere ridistribuite con la DLL. Questa architettura è particolarmente utile per condividere la libreria di classi tra più file eseguibili per risparmiare spazio su disco e ridurre al minimo l'utilizzo della memoria.

### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [DLL non MFC: cenni preliminari](non-mfc-dlls-overview.md)

- [DLL MFC regolari collegate a MFC in modo statico](regular-dlls-statically-linked-to-mfc.md)

- [DLL MFC regolari collegate a MFC in modo dinamico](regular-dlls-dynamically-linked-to-mfc.md)

- [Panoramica delle DLL MFC di estensione](extension-dlls-overview.md)

## <a name="see-also"></a>Vedere anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)
