---
title: "Inizializzazione di DLL non MFC | Microsoft Docs"
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
  - "DLL [C++], non MFC"
  - "inizializzazione di DLL"
  - "DLL non MFC [C++]"
ms.assetid: 2622b32a-28f9-4d61-9e46-6c19aaf8b7ad
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Inizializzazione di DLL non MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per inizializzare le DLL non MFC, il codice sorgente della DLL deve contenere una funzione denominata `DllMain`.  Il codice riportato di seguito presenta uno schema di base che illustra la definizione della funzione `DllMain`.  
  
```  
BOOL APIENTRY DllMain(HANDLE hModule,   
                      DWORD  ul_reason_for_call,   
                      LPVOID lpReserved)  
{  
    switch( ul_reason_for_call ) {  
    case DLL_PROCESS_ATTACH:  
    ...  
    case DLL_THREAD_ATTACH:  
    ...  
    case DLL_THREAD_DETACH:  
    ...  
    case DLL_PROCESS_DETACH:  
    ...  
    }  
    return TRUE;  
}  
```  
  
> [!NOTE]
>  Nella documentazione di [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)] per **DllEntryPoint** viene dichiarato che occorre specificare il nome effettivo della funzione di punto di ingresso nella riga di comando del linker con l'opzione \/ENTRY.  In Visual C\+\+ non occorre utilizzare l'opzione \/ENTRY se il nome della funzione di punto di ingresso è `DllMain`.  Se si utilizza l'opzione \/ENTRY e si assegna un nome diverso da `DllMain` alla funzione di punto di ingresso, infatti, la libreria di runtime C non verrà inizializzata correttamente.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [\<caps:sentence id\="tgt7" sentenceid\="58bb7328659bda9ffb73a1dcd39da06b" class\="tgtSentence"\>Specifiche di funzione per DllMain \(Windows SDK\)\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/ms682583)  
  
-   [\<caps:sentence id\="tgt8" sentenceid\="f29344705c59343b34b642944921cbdf" class\="tgtSentence"\>Dynamic\-link library entry\-point function \(Windows SDK\)\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/ms682596)  
  
-   [Librerie di runtime del linguaggio C e \_DllMainCRTStartup](../build/run-time-library-behavior.md)  
  
## Vedere anche  
 [Inizializzazione di una DLL](../build/initializing-a-dll.md)