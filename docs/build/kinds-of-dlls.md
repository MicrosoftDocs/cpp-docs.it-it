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

## <a name="different-kinds-of-dlls-available"></a><a name="_core_the_different_kinds_of_dlls_available_with_visual_c.2b2b"></a>Tipi diversi di dll disponibili

Utilizzando Visual Studio, è possibile compilare DLL Win32 in C o C++ che non utilizzano la libreria MFC (Microsoft Foundation Class). È possibile creare un progetto DLL non MFC con la creazione guidata applicazione Win32.

La libreria MFC è disponibile, in librerie a collegamento statico o in una serie di dll, con la creazione guidata DLL MFC. Se la DLL Usa MFC, Visual Studio supporta tre diversi scenari di sviluppo di DLL:

- Compilazione di una normale DLL MFC collegata in modo statico a MFC

- Compilazione di una normale DLL MFC che collega in modo dinamico MFC

- Compilazione di una DLL di estensione MFC, che collega sempre in modo dinamico MFC

### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [DLL non MFC: cenni preliminari](non-mfc-dlls-overview.md)

- [DLL MFC regolari collegate a MFC in modo statico](regular-dlls-statically-linked-to-mfc.md)

- [DLL MFC regolari collegate a MFC in modo dinamico](regular-dlls-dynamically-linked-to-mfc.md)

- [Panoramica delle DLL MFC di estensione](extension-dlls-overview.md)

- [Tipo di DLL da usare](#_core_which_kind_of_dll_to_use)

## <a name="deciding-which-kind-of-dll-to-use"></a><a name="_core_which_kind_of_dll_to_use"></a>Scelta del tipo di DLL da utilizzare

Se la DLL non Usa MFC, usare Visual Studio per compilare una DLL Win32 non MFC. Il collegamento della DLL a MFC (in modo statico o dinamico) occupa spazio su disco e memoria significative. Non è consigliabile eseguire il collegamento a MFC, a meno che la DLL non usi effettivamente MFC.

Se la DLL utilizzerà MFC e verrà utilizzata da applicazioni MFC o non MFC, è necessario compilare una normale DLL MFC che si collega in modo dinamico a MFC o a una normale DLL MFC collegata in modo statico a MFC. Nella maggior parte dei casi, è probabile che si desideri usare una DLL MFC normale che si collega dinamicamente a MFC perché le dimensioni del file della DLL saranno molto più piccole e il risparmio di memoria nell'uso della versione condivisa di MFC può essere significativo. Se si collegano in modo statico a MFC, le dimensioni del file della DLL saranno maggiori e potrebbero richiedere memoria aggiuntiva perché caricano una propria copia privata del codice della libreria MFC.

La compilazione di una DLL dinamicamente collegata a MFC è più veloce rispetto alla compilazione di una DLL che si collega in modo statico a MFC perché non è necessario collegare MFC. Questa operazione è particolarmente valida nelle build di debug in cui il linker deve compattare le informazioni di debug. Tramite il collegamento a una DLL che contiene già le informazioni di debug, sono disponibili meno informazioni di debug da compattare all'interno della DLL.

Uno svantaggio per il collegamento dinamico a MFC è che è necessario distribuire le DLL condivise MFCx0. dll e Msvcrt. dll (o file simili) con la DLL. Le DLL MFC possono essere ridistribuite liberamente, ma è comunque necessario installare le dll nel programma di installazione. Inoltre, è necessario inviare il file Msvcrt. dll, che contiene la libreria di runtime del linguaggio C utilizzata sia dal programma che dalle DLL MFC.

Se la DLL verrà utilizzata solo da file eseguibili MFC, è possibile scegliere tra la compilazione di una DLL MFC normale o una DLL di estensione MFC. Se la DLL implementa classi riutilizzabili derivate dalle classi MFC esistenti o se è necessario passare oggetti derivati da MFC tra l'applicazione e la DLL, è necessario compilare una DLL di estensione MFC.

Se la DLL si collega a MFC in modo dinamico, le DLL MFC possono essere ridistribuite con la DLL. Questa architettura è particolarmente utile per condividere la libreria di classi tra più file eseguibili per risparmiare spazio su disco e ridurre al minimo l'utilizzo della memoria.

### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [DLL non MFC: cenni preliminari](non-mfc-dlls-overview.md)

- [DLL MFC regolari collegate a MFC in modo statico](regular-dlls-statically-linked-to-mfc.md)

- [DLL MFC regolari collegate a MFC in modo dinamico](regular-dlls-dynamically-linked-to-mfc.md)

- [Panoramica delle DLL MFC di estensione](extension-dlls-overview.md)

## <a name="see-also"></a>Vedere anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)
