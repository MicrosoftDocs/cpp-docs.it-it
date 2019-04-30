---
title: Tipi di DLL
ms.date: 11/04/2016
helpviewer_keywords:
- MFC DLLs [C++], types
- DLLs [C++], types
- DLLs [C++], MFC
ms.assetid: f6a30db9-6138-4b2c-90cc-a17855e499a6
ms.openlocfilehash: f4aa8b1be7cd9ad32b10f12c5d1dfd3ae86adc1d
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64341782"
---
# <a name="kinds-of-dlls"></a>Tipi di DLL

In questo argomento fornisce informazioni utili per determinare il tipo di DLL compilare.

##  <a name="_core_the_different_kinds_of_dlls_available_with_visual_c.2b2b"></a> Diversi tipi di DLL disponibili

Utilizzo di Visual C++, è possibile compilare DLL Win32 in C o C++ che non usano la libreria di classi MFC (Microsoft Foundation). È possibile creare un progetto di DLL non MFC con la creazione guidata applicazione Win32.

La libreria MFC stessa è disponibile, in librerie a collegamento statico o in alcune DLL, con la creazione guidata DLL MFC. Se la DLL utilizza MFC, Visual C++ supporta tre diversi scenari di sviluppo delle DLL:

- Creazione di una normale DLL MFC che staticamente collegata a MFC

- Creazione di una normale DLL MFC che dinamicamente collegata a MFC

- Creazione di una DLL di estensione MFC, collegata a MFC sempre in modo dinamico

### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [DLL non MFC: panoramica](non-mfc-dlls-overview.md)

- [DLL MFC regolari collegate in modo statico a MFC](regular-dlls-statically-linked-to-mfc.md)

- [DLL MFC regolari collegate in modo dinamico a MFC](regular-dlls-dynamically-linked-to-mfc.md)

- [MFC (DLL di estensione): panoramica](extension-dlls-overview.md)

- [Delle DLL da usare](#_core_which_kind_of_dll_to_use)

##  <a name="_core_which_kind_of_dll_to_use"></a> Scelta delle DLL da utilizzare

Se la DLL non utilizza MFC, è possibile usare Visual C++ per compilare una DLL Win32 non MFC. Il collegamento della DLL a MFC (statico o dinamico) occupa dalla memoria e spazio su disco significativo. Non effettuare questo collegamento a MFC, a meno che la DLL non utilizzi realmente MFC.

Se la DLL userà MFC e verrà usata da applicazioni MFC e non MFC, è necessario compilare una DLL MFC regolare collegata a MFC in modo dinamico o una DLL MFC regolare collegata a MFC in modo statico. Nella maggior parte dei casi, consigliabile utilizzare una DLL MFC regolare collegata a MFC in modo dinamico perché le dimensioni del file della DLL saranno molto più piccola e il risparmio di memoria da usare la versione condivisa di MFC può essere significativo. Se si collega in modo statico a MFC, le dimensioni del file della DLL saranno maggiori e occorrerà potenzialmente memoria aggiuntiva perché carica la propria copia privata del codice della libreria MFC.

Compilazione di una DLL collegata in modo dinamico a MFC è più veloce rispetto alla creazione di una DLL collegata a MFC in modo statico perché non è necessario collegare la libreria MFC. Ciò è particolarmente evidente nelle build di debug in cui il linker deve comprimere le informazioni di debug. Tramite il collegamento con una DLL che già contiene le informazioni di debug, è meno informazioni di debug da comprimere nella DLL.

Uno svantaggio del collegamento dinamico a MFC è che è necessario distribuire le DLL condivise Mfcx0.dll e MSVCRT. dll (o file simili) con la DLL. Le DLL MFC possono essere liberamente ridistribuite, ma è comunque necessario installare le DLL nel programma di installazione. Inoltre, è necessario fornire il file Msvcrxx. dll, che contiene la libreria di runtime C utilizzata sia per il programma e DLL MFC.

Se la DLL verrà usata solo dagli eseguibili MFC, è possibile scegliere tra la creazione di una DLL MFC regolare o una DLL di estensione MFC. Se la DLL implementa classi riutilizzabili derivate dalle classi MFC esistenti o è necessario passare oggetti derivati da MFC tra l'applicazione e la DLL, è necessario compilare una DLL di estensione MFC.

Se la DLL si collega in modo dinamico a MFC, le DLL MFC possono essere ridistribuite con la DLL. Questa architettura è particolarmente utile per la condivisione di libreria di classi tra più file eseguibili per risparmiare spazio su disco e ridurre al minimo la quantità di memoria.

Prima della versione 4.0, Visual C++ supporta solo due tipi di DLL che utilizzavano MFC: Denominate USRDLL e AFXDLL. DLL MFC regolari collegate in modo statico a MFC hanno le stesse caratteristiche di USRDLL. Le DLL estensione MFC hanno le stesse caratteristiche di AFXDLL.

### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [DLL non MFC: panoramica](non-mfc-dlls-overview.md)

- [DLL MFC regolari collegate in modo statico a MFC](regular-dlls-statically-linked-to-mfc.md)

- [DLL MFC regolari collegate in modo dinamico a MFC](regular-dlls-dynamically-linked-to-mfc.md)

- [MFC (DLL di estensione): panoramica](extension-dlls-overview.md)

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](dlls-in-visual-cpp.md)
