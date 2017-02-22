---
title: "Struttura AFX_EXTENSION_MODULE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "AFX_EXTENSION_MODULE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AFX_EXTENSION_MODULE (struttura)"
ms.assetid: b85a989c-d0c5-4b28-b53c-dad45b75704e
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Struttura AFX_EXTENSION_MODULE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`AFX_EXTENSION_MODULE` viene utilizzato durante l'inizializzazione delle DLL di estensione MFC per utilizzare lo stato del modulo DLL di estensione.  
  
## Sintassi  
  
```  
  
      struct AFX_EXTENSION_MODULE  
{  
   BOOL bInitialized;  
   HMODULE hModule;  
   HMODULE hResource;  
   CRuntimeClass* pFirstSharedClass;  
   COleObjectFactory* pFirstSharedFactory;  
};  
```  
  
#### Parametri  
 *bInitialized*  
 **TRUE** se il modulo DLL è stato inizializzato con `AfxInitExtensionModule`.  
  
 `hModule`  
 Specifica gli handle del modulo DLL.  
  
 *hResource*  
 Specifica gli handle del modulo di risorse personalizzate di DLL.  
  
 *pFirstSharedClass*  
 Un puntatore a informazioni \(la struttura di `CRuntimeClass` \) sulla prima classe di runtime del modulo DLL.  Utilizzato per fornire l'inizio dell'elenco classe di runtime.  
  
 *pFirstSharedFactory*  
 Un puntatore al modulo DLL innanzitutto oggetti la factory \(un oggetto di `COleObjectFactory` \).  Utilizzato per fornire l'inizio dell'elenco di class factory.  
  
## Note  
 Le DLL di estensione MFC necessario eseguire due operazioni nella funzione di `DllMain` :  
  
-   Chiamare [AfxInitExtensionModule](../Topic/AfxInitExtensionModule.md) e controllare il valore restituito.  
  
-   Creare un oggetto di **CDynLinkLibrary** se la DLL esporterà gli oggetti di [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) o dispone di propri metodi personalizzati.  
  
 La struttura di `AFX_EXTENSION_MODULE` viene utilizzata per utilizzare una copia dello stato del modulo DLL di estensione, inclusa una copia degli oggetti della classe di runtime che sono stati inizializzati dalla DLL di estensione come parte della costruzione di un oggetto static normale eseguita prima di `DllMain` essere inserito.  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_MFC_DLL#2](../../atl-mfc-shared/codesnippet/CPP/afx-extension-module-structure_1.cpp)]  
  
 Le informazioni del modulo archiviate nella struttura di `AFX_EXTENSION_MODULE` possono essere copiate nell'oggetto di **CDynLinkLibrary**.  Di seguito è riportato un esempio.  
  
 [!code-cpp[NVC_MFC_DLL#5](../../atl-mfc-shared/codesnippet/CPP/afx-extension-module-structure_2.cpp)]  
  
## Requisiti  
 **Intestazione:** afx.h  
  
## Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [AfxInitExtensionModule](../Topic/AfxInitExtensionModule.md)   
 [AfxTermExtensionModule](../Topic/AfxTermExtensionModule.md)