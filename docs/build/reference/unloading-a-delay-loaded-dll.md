---
title: "Scaricamento di una DLL a caricamento ritardato | Microsoft Docs"
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
  - "__FUnloadDelayLoadedDLL2"
  - "caricamento ritardato di DLL, scaricamento"
ms.assetid: 6463bc71-020e-4aff-a4ca-90360411c54e
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Scaricamento di una DLL a caricamento ritardato
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Mediante il supporto del caricamento ritardato predefinito è possibile verificare se i descrittori per il caricamento ritardato dispongono di un puntatore e di una copia della tabella di indirizzi di importazione \(IAT\) originale nel campo pUnloadIAT.  In tal caso, un puntatore al descrittore di caricamento ritardato delle importazioni verrà salvato in un elenco.  In questo modo, la funzione di supporto consente di individuare la DLL mediante il nome e di effettuarne lo scaricamento esplicito.  
  
 Di seguito sono indicate le strutture e le funzioni associate per lo scaricamento esplicito di una DLL a caricamento ritardato.  
  
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
  
 La struttura UnloadInfo viene implementata mediante una classe C\+\+ per la quale è previsto l'utilizzo delle implementazioni **LocalAlloc** e **LocalFree** rispettivamente come operatori **new** e **delete**.  Queste opzioni sono conservate in un elenco collegato standard con intestazione \_\_puiHead.  
  
 Quando viene chiamata la funzione \_\_FUnloadDelayLoadedDLL, viene effettuato un tentativo di ricerca del nome fornito nell'elenco delle DLL caricate \(è necessaria una corrispondenza esatta\).  Se la ricerca ha esito positivo, la copia della tabella IAT in pUnloadIAT viene sovrapposta alla tabella IAT in esecuzione per ripristinare i puntatori ai thunk, la libreria viene liberata mediante **FreeLibrary**, il record **UnloadInfo** corrispondente viene scollegato dall'elenco ed eliminato e infine viene restituito TRUE.  
  
 Per l'argomento della funzione \_\_FUnloadDelayLoadedDLL2 viene applicata la distinzione fra maiuscole e minuscole.  È possibile, ad esempio, specificare:  
  
```  
__FUnloadDelayLoadedDLL2("user32.DLL");  
```  
  
 e non:  
  
```  
__FUnloadDelayLoadedDLL2("User32.DLL");.  
```  
  
## Vedere anche  
 [Understanding the Helper Function](http://msdn.microsoft.com/it-it/6279c12c-d908-4967-b0b3-cabfc3e91d3d)