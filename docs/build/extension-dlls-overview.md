---
title: 'DLL di estensione: cenni preliminari'
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
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65221366"
---
# <a name="mfc-extension-dlls-overview"></a>Panoramica delle DLL MFC di estensione

Una DLL di estensione MFC è una DLL che in genere implementa classi riutilizzabili derivate da classi di libreria Microsoft Foundation Class esistenti. Le DLL dell'estensione MFC vengono compilate utilizzando la versione della libreria a collegamento dinamico di MFC, nota anche come versione condivisa di MFC. Solo i file eseguibili MFC, ovvero applicazioni o DLL MFC regolari, compilati con la versione condivisa di MFC possono utilizzare una DLL di estensione MFC. Con una DLL di estensione MFC, è possibile derivare nuove classi personalizzate da MFC, quindi offrire questa versione estesa di MFC alle applicazioni che chiamano la DLL.

Le DLL di estensione possono essere utilizzate anche per passare oggetti derivati da MFC tra l'applicazione e la DLL. Le funzioni membro associate all'oggetto passato sono disponibili nel modulo in cui è stato creato l'oggetto. Poiché queste funzioni vengono esportate correttamente quando si utilizza la versione DLL condivisa di MFC, è possibile passare liberamente i puntatori a oggetti derivati da MFC o MFC tra un'applicazione e le DLL dell'estensione MFC caricate.

Per un esempio di una DLL che soddisfi i requisiti di base di una DLL di estensione MFC, vedere l'esempio MFC [DLLHUSK](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/dllhusk). In particolare, esaminare i file Testdll1. cpp e Testdll2. cpp.

## <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Inizializzare una DLL di estensione MFC](run-time-library-behavior.md#initializing-extension-dlls)

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [MFC (DLL di estensione)](extension-dlls.md)

- [Utilizzo di dll di estensione MFC per database, OLE e Sockets nelle normali DLL MFC](using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)

- [DLL non MFC: cenni preliminari](non-mfc-dlls-overview.md)

- [DLL MFC regolari collegate a MFC in modo statico](regular-dlls-statically-linked-to-mfc.md)

- [DLL MFC regolari collegate a MFC in modo dinamico](regular-dlls-dynamically-linked-to-mfc.md)

- [Creazione di una DLL MFC](../mfc/reference/mfc-dll-wizard.md)

## <a name="see-also"></a>Vedere anche

[Tipi di DLL](kinds-of-dlls.md)
