---
title: "Funzioni di accesso e rowset | Microsoft Docs"
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
  - "funzioni di accesso [C++]"
  - "funzioni di accesso [C++], rowset"
  - "rowset di matrici"
  - "rowset di massa"
  - "CAccessorBase (classe)"
  - "CAccessorRowset (classe), tipi di funzioni di accesso"
  - "CArrayRowset (classe), funzioni di accesso"
  - "CBulkRowset (classe), funzioni di accesso"
  - "CRowset (classe), funzioni di accesso e rowset"
  - "OLE DB (modelli consumer), funzioni di accesso"
  - "OLE DB (modelli consumer), supporto rowset"
  - "rowset [C++], accesso"
  - "rowset [C++], tipi supportati"
  - "rowset singoli"
ms.assetid: edc9c8b3-1a2d-4c2d-869f-7e058c631042
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzioni di accesso e rowset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per impostare e recuperare dati, i modelli OLE DB utilizzano una funzione di accesso e un rowset tramite la classe [CAccessorRowset](../../data/oledb/caccessorrowset-class.md).  Questa classe è in grado di gestire più funzioni di accesso di tipi diversi.  
  
## Tipi di funzioni di accesso  
 Tutte le funzioni di accesso derivano da [CAccessorBase](../../data/oledb/caccessorbase-class.md).  `CAccessorBase` fornisce sia l'associazione di parametro che di colonna.  
  
 Nella figura riportata di seguito sono illustrati i tipi di funzioni di accesso.  
  
 ![Tipi di funzioni di accesso](../../data/oledb/media/vcaccessortypes.gif "vcAccessorTypes")  
Classi delle funzioni di accesso  
  
-   [CAccessor](../../data/oledb/caccessor-class.md) Utilizzare questa funzione di accesso quando si conosce la struttura dell'origine del database in fase di progettazione.  `CAccessor` associa staticamente all'origine dati un record del database che contiene il buffer.  
  
-   [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) Utilizzare questa funzione di accesso quando non si conosce la struttura dell'origine del database in fase di progettazione.  `CDynamicAccessor` chiama `IColumnsInfo::GetColumnInfo` per ottenere le informazioni sulle colonne del database.  Questa classe crea e gestisce una funzione di accesso e il buffer.  
  
-   [CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md) Funzione di accesso da utilizzare per gestire tipi di comandi sconosciuti.  Quando si preparano i comandi, `CDynamicParameterAccessor` è in grado di ottenere informazioni sui parametri dall'interfaccia `ICommandWithParameters`, se il provider supporta `ICommandWithParameters`.  
  
-   [CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md), [CDynamicStringAccessorA](../../data/oledb/cdynamicstringaccessora-class.md) e [CDynamicStringAccessorW](../../data/oledb/cdynamicstringaccessorw-class.md) Utilizzare queste classi quando non si ha alcuna conoscenza dello schema del database.  `CDynamicStringAccessorA` recupera dati come stringhe ANSI; `CDynamicStringAccessorW` recupera dati come stringhe Unicode.  
  
-   [CManualAccessor](../../data/oledb/cmanualaccessor-class.md) Con questa classe è possibile utilizzare tutti i tipi di dati, se il provider è in grado di effettuare la conversione dei tipi.  Questa classe gestisce sia le colonne di risultati che i parametri dei comandi.  
  
 Nella tabella riportata di seguito sono riepilogate le caratteristiche di supporto delle funzioni di accesso dei modelli OLE DB.  
  
|Tipo di funzione di accesso|Dynamic|Gestione parametri|Buffer|Più funzioni di accesso|  
|---------------------------------|-------------|------------------------|------------|-----------------------------|  
|`CAccessor`|No|Yes|Utente|Yes|  
|`CDynamicAccessor`|Yes|No|Modelli OLE DB|No|  
|`CDynamicParameterAccessor`|Yes|Yes|Modelli OLE DB|No|  
|`CDynamicStringAccessor[A,W]`|Yes|No|Modelli OLE DB|No|  
|`CManualAccessor`|Yes|Yes|Utente|Yes|  
  
## Tipi di rowset  
 I modelli OLE DB supportano tre tipi di rowset, come si può vedere nella figura precedente: i rowset singoli, implementati da [CRowset](../../data/oledb/crowset-class.md), i rowset di massa, implementati da [CBulkRowset](../../data/oledb/cbulkrowset-class.md), e i rowset matrice, implementati da [CArrayRowset](../../data/oledb/carrayrowset-class.md).  I rowset singoli recuperano un solo handle di riga quando si chiama `MoveNext`.  I rowset di massa possono recuperare più handle di riga.  I rowset matrice sono rowset a cui è possibile accedere tramite la sintassi delle matrici.  
  
 Nella figura riportata di seguito sono illustrati i tipi di rowset.  
  
 ![Grafica RowsetType](../../data/oledb/media/vcrowsettypes.png "vcRowsetTypes")  
Classi dei rowset  
  
 I [rowset dello schema](../../data/oledb/obtaining-metadata-with-schema-rowsets.md) non accedono ai dati nell'archivio dati, ma alle informazioni sull'archivio dati stesso, denominate metadati.  I rowset dello schema vengono in genere utilizzati in situazioni in cui la struttura del database non è conosciuta in fase di compilazione e deve essere recuperata in fase di esecuzione.  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)