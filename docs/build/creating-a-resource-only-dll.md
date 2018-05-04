---
title: Creazione di una DLL di sole risorse | Documenti Microsoft
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
ms.openlocfilehash: 5249f4528038771162bb96b714524ed751ff39a7
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="creating-a-resource-only-dll"></a>Creazione di una DLL di sole risorse  
  
Una DLL di sole risorse è una DLL che contiene unicamente delle risorse, ad esempio le icone, bitmap, stringhe e finestre di dialogo. Uso di una DLL di sole risorse è un buon metodo per condividere lo stesso set di risorse tra più programmi. È anche un buon metodo per fornire un'applicazione con le risorse localizzate per più lingue (vedere [risorse localizzate in applicazioni MFC: DLL Satellite](../build/localized-resources-in-mfc-applications-satellite-dlls.md)).  
  
Per creare una DLL di sole risorse, si crea un nuovo progetto di DLL Win32 (non MFC) e aggiungere le risorse del progetto.  
  
-   Selezionare il progetto Win32 nel **nuovo progetto** finestra di dialogo e specificare un tipo di progetto DLL nella creazione guidata progetto Win32.  
  
-   Creare un nuovo script di risorsa che contiene le risorse (ad esempio, un menu o una stringa) per la DLL e salvare il file RC.  
  
-   Nel **progetto** menu, fare clic su **Aggiungi elemento esistente**e quindi inserire il nuovo file RC nel progetto.  
  
-   Specificare il [/NOENTRY](../build/reference/noentry-no-entry-point.md) l'opzione del linker. /NOENTRY impedisce che il linker collegato un riferimento a `_main` nella DLL; questa opzione è necessaria per creare una DLL di sole risorse.  
  
-   Compilare la DLL.  
  
L'applicazione che utilizza la DLL di sole risorse deve chiamare [LoadLibrary](../build/loadlibrary-and-afxloadlibrary.md) per il collegamento esplicito della DLL. Per accedere alle risorse, chiamare le funzioni generiche `FindResource` e `LoadResource`, che funziona con qualsiasi tipo di risorsa oppure chiamare una delle seguenti funzioni specifiche delle risorse:  
  
-   `FormatMessage`  
  
-   `LoadAccelerators`  
  
-   `LoadBitmap`  
  
-   `LoadCursor`  
  
-   `LoadIcon`  
  
-   `LoadMenu`  
  
-   `LoadString`  
  
L'applicazione deve chiamare `FreeLibrary` quando ha terminato usando le risorse.  
  
## <a name="see-also"></a>Vedere anche  
  
[Uso di file di risorse](../windows/working-with-resource-files.md)  
[DLL in Visual C++](../build/dlls-in-visual-cpp.md)