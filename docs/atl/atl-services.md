---
title: "Servizi ATL | Microsoft Docs"
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
  - "CServiceModule"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ATL (servizi)"
  - "oggetti COM, ATL"
  - "CServiceModule (classe)"
  - "servizi, ATL"
ms.assetid: 8c09d1a8-7548-4d2c-947c-9d795a81659b
caps.latest.revision: 12
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Servizi ATL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per creare il COM ATL oggetto in modo che funzioni in un servizio, servizio semplicemente ristretto \(EXE\) dall'elenco di opzioni server nella creazione guidata progetto ATL.  La procedura guidata quindi creerà una classe derivata da `CAtlServiceModuleT` per implementare il servizio.  
  
 Quando l'oggetto COM ATL viene compilato come servizio, verrà registrato solo come server locale e non visualizzato nell'elenco dei servizi nel Pannello di controllo.  Questo perché è più facile eseguire il debug del servizio come server locale che come servizio.  Per installarlo come servizio, effettuare quanto segue al prompt dei comandi:  
  
 `YourEXE` `.exe /Service`  
  
 Per disinstallare l'estensione, eseguire le operazioni seguenti:  
  
 `YourEXE` `.exe /UnregServer`  
  
 I primi quattro argomenti di questa sezione vengono illustrate le azioni eseguite durante l'esecuzione delle funzioni membro `CAtlServiceModuleT`.  In questi argomenti vengono visualizzati nella stessa sequenza come funzioni in genere vengono chiamate.  Per migliorare la comprensione di questi casi, è consigliabile utilizzare il codice sorgente generato dalla creazione guidata progetto ATL come riferimento.  I primi quattro argomenti sono:  
  
-   [La funzione di CAtlServiceModuleT::Start](../atl/catlservicemodulet-start-function.md)  
  
-   [La funzione di CAtlServiceModuleT::ServiceMain](../atl/catlservicemodulet-servicemain-function.md)  
  
-   [La funzione di CAtlServiceModuleT::Run](../atl/catlservicemodulet-run-function.md)  
  
-   [La funzione di CAtlServiceModuleT::Handler](../atl/catlservicemodulet-handler-function.md)  
  
 Gli ultimi tre argomenti vengono descritti i concetti relativi a compilare un servizio:  
  
-   [Voci del Registro di sistema](../atl/registry-entries.md) per i servizi ATL  
  
-   [DCOMCNFG](../atl/dcomcnfg.md)  
  
-   [suggerimenti di debug](../atl/debugging-tips.md) per i servizi ATL  
  
## Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)