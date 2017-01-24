---
title: "Creazione di una DLL di sole risorse | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLL [C++], creazione"
  - "DLL di sole risorse [C++], creazione"
ms.assetid: e6b1d4da-7275-467f-a58c-a0a8a5835199
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Creazione di una DLL di sole risorse
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una DLL di sole risorse contiene unicamente delle risorse, come icone, bitmap, stringhe e finestre di dialogo.  L'utilizzo di una DLL di sole risorse è consigliabile per condividere lo stesso insieme di risorse tra più programmi  e per fornire a un'applicazione le risorse localizzate per più lingue \(vedere [Risorse localizzate in applicazioni MFC: DLL satellite](../build/localized-resources-in-mfc-applications-satellite-dlls.md)\).  
  
 Per creare una DLL di questo tipo, occorre creare un nuovo progetto DLL Win32 \(non MFC\) al quale aggiungere le risorse.  
  
-   Selezionare Progetto Win32 nella finestra di dialogo **Nuovo progetto** e specificare un tipo di progetto DLL nella Creazione guidata progetto Win32.  
  
-   Creare un nuovo script di risorse contenente le risorse, ad esempio una stringa o un menu, per la DLL e salvare il file rc.  
  
-   Dal menu **Progetto** scegliere **Aggiungi elemento esistente**, quindi inserire il nuovo file rc nel progetto.  
  
-   Specificare l'opzione del linker [\/NOENTRY](../build/reference/noentry-no-entry-point.md). \/NOENTRY evita che il linker colleghi un riferimento a \_main nella DLL. Questa opzione è necessaria per creare una DLL di sole risorse.  
  
-   Compilare la DLL.  
  
 L'applicazione che utilizza la DLL di sole risorse deve chiamare **LoadLibrary** per [collegarsi in modo esplicito alla DLL](../build/loadlibrary-and-afxloadlibrary.md).  Per accedere alle risorse, chiamare le funzioni generiche **FindResource** e **LoadResource**, che funzionano con ogni tipo di risorsa, oppure chiamare una delle seguenti funzioni specifiche delle risorse:  
  
-   `FormatMessage`  
  
-   **LoadAccelerators**  
  
-   `LoadBitmap`  
  
-   `LoadCursor`  
  
-   `LoadIcon`  
  
-   `LoadMenu`  
  
-   `LoadString`  
  
 L'applicazione deve chiamare **FreeLibrary** dopo avere utilizzato le risorse.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [DELETE\_PENDING\_Editing Resources](http://msdn.microsoft.com/it-it/c29d31c7-2d94-40ca-8aa0-c7262883529c)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)