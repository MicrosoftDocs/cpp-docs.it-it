---
title: Scaricamento di una DLL a caricamento ritardato | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- __FUnloadDelayLoadedDLL2
- delayed loading of DLLs, unloading
ms.assetid: 6463bc71-020e-4aff-a4ca-90360411c54e
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8b47969da4c560f28c07ac09caef83873e362ddc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="unloading-a-delay-loaded-dll"></a>Scaricamento di una DLL a caricamento ritardato
L'helper di caricamento ritardato predefinito consente di verificare se i descrittori di caricamento ritardato di disporre di un puntatore e una copia della tabella di indirizzi di importazione (IAT) originale nel campo pUnloadIAT. In questo caso, salverà un puntatore in un elenco al descrittore di ritardo di importazione. In questo modo la funzione di supporto trovare la DLL in base al nome di supportare lo scaricamento di DLL in modo esplicito.  
  
 Ecco le funzioni per lo scaricamento esplicito di una DLL a caricamento ritardato e strutture associate:  
  
```  
//  
// Unload support from delayimp.h  
//  
  
// routine definition; takes a pointer to a name to unload  
  
ExternC  
BOOL WINAPI  
__FUnloadDelayLoadedDLL2(LPCSTR szDll);  
  
// structure definitions for the list of unload records  
typedef struct UnloadInfo * PUnloadInfo;  
typedef struct UnloadInfo {  
    PUnloadInfo     puiNext;  
    PCImgDelayDescr pidd;  
    } UnloadInfo;  
  
// from delayhlp.cpp  
// the default delay load helper places the unloadinfo records in the   
// list headed by the following pointer.  
ExternC  
PUnloadInfo __puiHead;  
```  
  
 La struttura UnloadInfo viene implementata utilizzando una classe C++ che utilizza **LocalAlloc** e **LocalFree** implementazioni come proprio operatore **nuova** e operatore  **eliminare** rispettivamente. Queste opzioni vengono mantenute in un elenco collegato standard utilizzando puiHead dell'elemento head dell'elenco.  
  
 Chiamata di FUnloadDelayLoadedDLL tenterà di trovare il nome è fornito nell'elenco delle DLL caricate (è necessaria una corrispondenza esatta). Se viene trovato, la copia di IAT nel pUnloadIAT viene copiata nella parte superiore della tabella IAT in esecuzione per ripristinare i puntatori ai thunk, la libreria viene liberata con **FreeLibrary**, la corrispondenza **UnloadInfo** record è stato scollegato da l'elenco eliminato e viene restituito TRUE.  
  
 L'argomento di funzione FUnloadDelayLoadedDLL2 viene fatta distinzione tra maiuscole e minuscole. Ad esempio, è necessario specificare:  
  
```  
__FUnloadDelayLoadedDLL2("user32.DLL");  
```  
  
 e non:  
  
```  
__FUnloadDelayLoadedDLL2("User32.DLL");.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Informazioni sulla funzione di supporto](understanding-the-helper-function.md)