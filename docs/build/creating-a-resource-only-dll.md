---
title: Creazione di una DLL di sole risorse | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- resource-only DLLs [C++], creating
- DLLs [C++], creating
ms.assetid: e6b1d4da-7275-467f-a58c-a0a8a5835199
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8ea6590a57a336740be0a9439c959ebe32239d4e
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45703459"
---
# <a name="creating-a-resource-only-dll"></a>Creazione di una DLL di sole risorse

Una DLL di sole risorse è una DLL che contiene unicamente delle risorse, ad esempio icone, bitmap, stringhe e finestre di dialogo. Uso di una DLL di sole risorse è un buon metodo per condividere lo stesso set di risorse tra più programmi. È anche un buon metodo per fornire a un'applicazione con le risorse localizzate per più lingue (vedere [risorse localizzate in applicazioni MFC: DLL Satellite](../build/localized-resources-in-mfc-applications-satellite-dlls.md)).

Per creare una DLL di sole risorse, si crea un nuovo progetto di DLL Win32 (non MFC) e aggiungere le risorse al progetto.

- Selezionare il progetto Win32 nel **nuovo progetto** finestra dialogo e specificare un tipo di progetto DLL in Creazione guidata progetto Win32.

- Creare un nuovo script di risorsa che contiene le risorse (ad esempio una stringa o un menu di scelta) per la DLL e salvare il file RC.

- Nel **Project** menu, fare clic su **Aggiungi elemento esistente**e quindi inserire il nuovo file RC nel progetto.

- Specificare il [/NOENTRY](../build/reference/noentry-no-entry-point.md) l'opzione del linker. /NOENTRY impedisce al linker di collegamento di un riferimento a `_main` nella DLL; questa opzione è necessaria per creare una DLL di sole risorse.

- Compilare la DLL.

L'applicazione che usa la DLL di sole risorse deve chiamare [LoadLibrary](../build/loadlibrary-and-afxloadlibrary.md) per il collegamento esplicito della DLL. Per accedere alle risorse, chiamare le funzioni generiche `FindResource` e `LoadResource`, che funzionano con ogni tipo di risorsa oppure chiamare una delle seguenti funzioni specifici della risorsa:

- `FormatMessage`

- `LoadAccelerators`

- `LoadBitmap`

- `LoadCursor`

- `LoadIcon`

- `LoadMenu`

- `LoadString`

L'applicazione deve chiamare `FreeLibrary` termine, usare le risorse.

## <a name="see-also"></a>Vedere anche

[Uso di file di risorse](../windows/working-with-resource-files.md)<br/>
[DLL in Visual C++](../build/dlls-in-visual-cpp.md)