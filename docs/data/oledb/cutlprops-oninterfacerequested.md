---
title: "CUtlProps::OnInterfaceRequested | Microsoft Docs"
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
  - "CUtlProps"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OnInterfaceRequested (metodo)"
ms.assetid: a5e1a879-cff3-4e01-b902-2249a152984f
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CUtlProps::OnInterfaceRequested
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gestisce le richieste per un'interfaccia facoltativa quando un consumer chiama un metodo su una delle interfacce della creazione di un oggetto.  
  
## Sintassi  
  
```  
  
      virtual HRESULT CUtlPropsBase::OnInterfaceRequested(  
   REFIID riid  
);  
```  
  
#### Parametri  
 `riid`  
 \[in\] l'iid per l'interfaccia richiesta.  Per ulteriori informazioni, vedere la descrizione del parametro di `riid` di `ICommand::Execute`*in OLE DB Programmer's Reference* in *microsoft data access SDK*\).  
  
## Note  
 **OnInterfaceRequested** gestisce le richieste di tipo consumer di un'interfaccia facoltativa quando un consumer chiama un metodo su una delle interfacce di creazione di oggetti \(ad esempio **IDBCreateSession**, **IDBCreateCommand**, `IOpenRowset`, o `ICommand`\).  Impostare la proprietà corrispondente di OLE DB per l'interfaccia richiesta.  Ad esempio, se il consumer richiede **IID\_IRowsetLocate**, **OnInterfaceRequested** imposta l'interfaccia di **DBPROP\_IRowsetLocate**.  Usare mantiene lo stato corretto durante la creazione del rowset.  
  
 Questo metodo viene chiamato quando il consumer chiama **IOpenRowset::OpenRowset** o `ICommand::Execute`.  
  
 Se un consumer apre un oggetto e richiede un'interfaccia facoltativa, il provider deve impostare la proprietà associata a quell'interfaccia a `VARIANT_TRUE`.  Per consentire l'elaborazione di proprietà specifica, **OnInterfaceRequested** viene chiamato prima che il metodo di **Esegui** provider venga chiamato.  Per impostazione predefinita, **OnInterfaceRequested** gestisce le seguenti interfacce:  
  
-   `IRowsetLocate`  
  
-   `IRowsetChange`  
  
-   `IRowsetUpdate`  
  
-   **IConnectionPointContainer**  
  
-   `IRowsetScroll`  
  
 Se si desidera gestire altre interfacce, l'override della funzione nell'origine dati, sessione, comando, o classe del rowset elaborare le funzioni.  Le override dovranno esaminare lo set normale\/get le interfacce delle proprietà di garantire che impostare le proprietà impostare inoltre tutte le proprietà concatenate \(vedere [OnPropertyChanged](../../data/oledb/cutlprops-onpropertychanged.md)\).  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe CUtlProps](../../data/oledb/cutlprops-class.md)