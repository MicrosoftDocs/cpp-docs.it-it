---
title: "Registry Entries | Microsoft Docs"
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
  - "Registro di sistema, application IDs"
  - "Registro di sistema, ATL services entries"
ms.assetid: 881989b7-61bb-459a-a13e-3bfcb33e184e
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Registry Entries
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

DCOM viene introdotto il concetto dell'applicazione \(ID AppIDs\), che raggruppano le opzioni di configurazione per uno o più oggetti DCOM in una posizione centralizzata nel Registro di sistema.  Specificare un AppID indica il valore in AppID denominato valore nel CLSID dell'oggetto.  
  
 Per impostazione predefinita, un servizio ATL\- generato utilizza il CLSID come il GUID dell'AppID.  In `HKEY_CLASSES_ROOT\AppID`, è possibile specificare le voci DCOM\- specifiche.  Inizialmente, due voci presenti:  
  
-   `LocalService`, con un valore uguale al nome del servizio.  Se questo valore è presente, viene utilizzato al posto della chiave `LocalServer32` nel CLSID.  
  
-   `ServiceParameters`, con un valore uguale a `–Service`.  Questo valore specifica i parametri che vengono passati al servizio quando vengono avviati.  Notare che questi parametri vengono passati alla funzione `ServiceMain` del servizio, non `WinMain`.  
  
 Ogni servizio DCOM inoltre necessario creare un'altra chiave in `HKEY_CLASSES_ROOT\AppID`.  Questa chiave è uguale al nome del file EXE e funge da riferimento incrociato, poiché contiene un valore di AppID che punta a l le voci di AppID.  
  
## Vedere anche  
 [Servizi](../atl/atl-services.md)