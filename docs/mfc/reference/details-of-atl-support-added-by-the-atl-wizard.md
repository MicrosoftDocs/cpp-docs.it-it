---
title: "Informazioni dettagliate sul supporto ATL aggiunto dalla procedura guidata | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.codewiz.atl.support"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL, MFC (progetti)"
  - "MFC, ATL (supporto)"
ms.assetid: aa66bad0-008f-4886-94c1-2a0a0d04bce4
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Informazioni dettagliate sul supporto ATL aggiunto dalla procedura guidata
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando si [aggiunge il supporto ATL a una DLL o a un eseguibile MFC esistente](../../mfc/reference/adding-atl-support-to-your-mfc-project.md), vengono apportate le modifiche descritte di seguito al progetto MFC esistente. In questo esempio, il progetto è denominato `MFCEXE`.  
  
-   Vengono aggiunti due nuovi file, un file IDL e un file RGS, utilizzati per registrare il server.  
  
-   Nei file di intestazione e di implementazione \(Mfcexe.h e Mfcexe.cpp\) dell'applicazione principale, viene aggiunta una nuova classe derivata da **CAtlMFCModule**.  Inoltre, viene aggiunto codice a `InitInstance` per la registrazione  e alla funzione `ExitInstance` per rilasciare l'oggetto classe.  Infine, due nuovi file di intestazione \(Initguid.h e Mfcexe\_i.c\) vengono inclusi nel file di implementazione per dichiarare e inizializzare i nuovi GUID per la classe derivata da **CAtlMFCModule**.  
  
-   Per registrare correttamente il server viene aggiunta una voce per il nuovo file RGS al file di risorsa del progetto.  
  
## Note relative ai progetti DLL  
 Quando si aggiunge il supporto ATL a un progetto DLL MFC è possibile notare alcune differenze.  Il codice viene aggiunto alle funzioni **DLLRegisterServer** e **DLLUnregisterServer**, per la registrazione e l'annullamento della registrazione della DLL,  e a [DllCanUnloadNow](../Topic/CAtlDllModuleT::DllCanUnloadNow.md) e [DllGetClassObject](../Topic/CAtlDllModuleT::DllGetClassObject.md).  
  
## Vedere anche  
 [Supporto ATL in un progetto MFC](../../mfc/reference/adding-atl-support-to-your-mfc-project.md)   
 [Aggiunta di funzionalità con creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di una classe](../../ide/adding-a-class-visual-cpp.md)   
 [Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)   
 [Aggiunta di una variabile membro](../../ide/adding-a-member-variable-visual-cpp.md)   
 [Override di una funzione virtual](../../ide/overriding-a-virtual-function-visual-cpp.md)   
 [Gestore messaggi MFC](../../mfc/reference/adding-an-mfc-message-handler.md)   
 [Esplorazione della struttura delle classi](../../ide/navigating-the-class-structure-visual-cpp.md)