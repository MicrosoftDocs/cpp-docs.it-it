---
title: "CDataSource::OpenWithPromptFileName | Microsoft Docs"
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
  - "CDataSource.OpenWithPromptFileName"
  - "OpenWithPromptFileName"
  - "ATL::CDataSource::OpenWithPromptFileName"
  - "ATL.CDataSource.OpenWithPromptFileName"
  - "CDataSource::OpenWithPromptFileName"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OpenWithPromptFileName (metodo)"
ms.assetid: 89460504-1aaf-4412-aa7b-fa5a4b39ada3
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDataSource::OpenWithPromptFileName
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questo metodo visualizza all'utente una richiesta con una finestra di dialogo, quindi apre un'origine dati usando il file specificato dall'utente.  
  
## Sintassi  
  
```  
  
        HRESULT OpenWithPromptFileName(   
   HWND hWnd = GetActiveWindow(   
   ),   
   DBPROMPTOPTIONS dwPromptOptions = DBPROMPTOPTIONS_NONE,   
   LPCOLESTR szInitialDirectory = NULL    
) throw( );  
```  
  
#### Parametri  
 `hWnd`  
 \[in\] Handle per la finestra che deve essere l'elemento padre della finestra di dialogo.  
  
 `dwPromptOptions`  
 \[in\] Determina lo stile della finestra di dialogo del localizzatore da visualizzare.  Per i possibili valori, vedere Msdasc.h.  
  
 *szInitialDirectory*  
 \[in\] Directory iniziale per la visualizzazione della finestra di dialogo del localizzatore.  
  
## Valore restituito  
 `HRESULT` standard.  
  
## Note  
 Questo metodo apre un oggetto origine dati usando i componenti del servizio in oledb32.dll. Questa DLL contiene l'implementazione delle funzionalità dei componenti del servizio, come il pool di risorse, l'inserimento automatico delle transazioni e così via.  Per altre informazioni, vedere "Servizi OLE DB" nelle informazioni di riferimento per programmatori OLE DB all'indirizzo [http:\/\/msdn.microsoft.com\/library\/default.asp?url\=\/library\/oledb\/htm\/oledbole\_db\_services.asp?frame\=true](http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDataSource](../../data/oledb/cdatasource-class.md)