---
title: 'DLL di estensione: Panoramica'
ms.date: 05/06/2019
helpviewer_keywords:
- AFXDLL library
- MFC DLLs [C++], MFC extension DLLs
- DLLs [C++], extension
- shared DLL versions [C++]
- extension DLLs [C++], about MFC extension DLLs
ms.assetid: eb5e10b7-d615-4bc7-908d-e3e99b7b1d5f
ms.openlocfilehash: ea8e950e28907ea1a4a85c1f39392d5505f08c49
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65221366"
---
# <a name="mfc-extension-dlls-overview"></a>DLL di estensione MFC: Panoramica

Un'estensione MFC DLL è una DLL che implementa generalmente classi riutilizzabili derivate dalle classi esistenti libreria Microsoft Foundation Class. Le DLL estensione MFC vengono compilate usando la versione di libreria a collegamento dinamico di MFC (noto anche come la versione di MFC condivisa). Solo file eseguibili MFC (applicazioni o DLL MFC regolari) compilati con la versione condivisa di MFC è possono utilizzare una DLL di estensione MFC. Con una DLL di estensione MFC, è possibile derivare nuove classi personalizzate da MFC e quindi fornire questa versione estesa di MFC per le applicazioni che chiamano la DLL.

DLL di estensione sono anche utilizzabile per il passaggio di oggetti derivati da MFC tra l'applicazione e la DLL. Le funzioni membro associate l'oggetto passato è presente nel modulo in cui è stato creato l'oggetto. Poiché queste funzioni vengono esportate in modo corretto quando si usa la versione DLL condivisa di MFC, è possibile passare liberamente MFC o puntatori a oggetti derivati da MFC tra un'applicazione e l'estensione MFC DLL viene caricato.

Per un esempio di una DLL che soddisfa i requisiti di base di una DLL di estensione MFC, vedere l'esempio MFC [DLLHUSK](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/dllhusk). In particolare, esaminare i file Testdll1.cpp e Testdll2.

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Inizializzare una DLL di estensione MFC](run-time-library-behavior.md#initializing-extension-dlls)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [MFC (DLL di estensione)](extension-dlls.md)

- [Uso di DLL MFC di estensione per database, OLE e Sockets nelle DLL MFC regolari](using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)

- [DLL non MFC: panoramica](non-mfc-dlls-overview.md)

- [DLL MFC regolari collegate in modo statico a MFC](regular-dlls-statically-linked-to-mfc.md)

- [DLL MFC regolari collegate in modo dinamico a MFC](regular-dlls-dynamically-linked-to-mfc.md)

- [Creazione di una DLL MFC](../mfc/reference/mfc-dll-wizard.md)

## <a name="see-also"></a>Vedere anche

[Tipi di DLL](kinds-of-dlls.md)
