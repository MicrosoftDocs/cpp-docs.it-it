---
title: "Risorse localizzate in applicazioni MFC: DLL satellite | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DLL [C++], localizzazione di MFC"
  - "localizzazione [C++], MFC (risorse)"
  - "risorse localizzate [C++]"
  - "DLL MFC [C++], localizzazione"
  - "supporto multilingue [C++]"
  - "DLL di sole risorse [C++]"
  - "DLL di sole risorse [C++], MFC (applicazioni)"
  - "risorse [MFC], localizzazione"
  - "DLL satellite [C++]"
ms.assetid: 3a1100ae-a9c8-47b5-adbd-cbedef5992ef
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Risorse localizzate in applicazioni MFC: DLL satellite
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Grazie al supporto potenziato di MFC 7.0 e versioni successive per le DLL satellite, è possibile creare applicazioni localizzate per più lingue.  Una DLL satellite è una [DLL di sole risorse](../build/creating-a-resource-only-dll.md) contenente le risorse di un'applicazione localizzate per una particolare lingua.  All'esecuzione dell'applicazione, MFC carica automaticamente la risorsa localizzata più appropriata per l'ambiente.  Potrebbe esserci, ad esempio, un'applicazione con risorse in lingua inglese con due DLL satellite, una contenente la traduzione francese delle risorse e l'altra la traduzione tedesca.  Quando viene eseguita in un sistema di lingua inglese, l'applicazione utilizza le risorse inglesi;  in un sistema francese utilizza le risorse francesi e in un sistema tedesco le risorse tedesche.  
  
 Per supportare le risorse localizzate in un'applicazione MFC, MFC tenta di caricare una DLL satellite contenente le risorse localizzate per una lingua specifica.  Le DLL satellite sono denominate *NomeApplicazioneXXX*.dll, dove *NomeApplicazione* è il nome del file EXE o DLL che utilizza MFC e *XXX* è il codice di tre lettere per la lingua delle risorse, ad esempio, "ENU" o "DEU".  
  
 MFC tenta di caricare, nell'ordine, la DLL delle risorse per ognuna delle lingue indicate di seguito fermandosi quando ne trova una.  
  
1.  Windows 2000 o versioni successive: la lingua UI predefinita dell'utente corrente, restituita dall'API Win32 GetUserDefaultUILanguage\(\).  
  
2.  Solo Windows 2000 o versioni successive: la lingua dell'interfaccia utente predefinita dell'utente corrente, senza alcuna sottolingua specifica, ovvero ENC \[Inglese \(Canada\)\] diventa ENU \[Inglese  \(Stati Uniti\)\].  
  
3.  La lingua predefinita UI del sistema.  In Windows 2000 o versioni successive l'impostazione viene restituita dall'API GetSystemDefaultUILanguage\(\).  In altre piattaforme, questa è la lingua del sistema operativo stesso.  
  
4.  La lingua UI predefinita del sistema, senza alcuna sottolingua specifica.  
  
5.  Una lingua fittizia con il codice di 3 lettere LOC.  
  
 Se MFC non trova nessuna DLL satellite, utilizzerà qualsiasi risorsa sia contenuta nell'applicazione stessa.  
  
 Si supponga, ad esempio, che un'applicazione LangExample.exe utilizzi MFC e sia eseguita in un sistema Windows 2000 con più interfacce utente; la lingua dell'interfaccia utente del sistema è ENU \[Inglese  \(Stati Uniti\)\] e la lingua dell'interfaccia utente dell'utente corrente è impostata su FRC \[Francese \(Canada\)\].  MFC cercherà le seguenti DLL nell'ordine elencato.  
  
1.  EsempioLinguaFRC.dll \(lingua UI dell'utente\).  
  
2.  EsempioLinguaFRA.dll \(lingua UI dell'utente senza la sottolingua, in questo esempio il Francese \(Francia\).  
  
3.  EsempioLinguaENU.dll \(lingua UI del sistema\).  
  
4.  EsempioLinguaLOC.dll.  
  
 Se non trova nessuna di queste DLL, MFC utilizzerà le risorse in EsempioLingua.exe.  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)   
 [TN057: localizzazione di componenti MFC](../mfc/tn057-localization-of-mfc-components.md)