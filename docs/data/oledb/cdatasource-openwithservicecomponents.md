---
title: "CDataSource::OpenWithServiceComponents | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDataSource::OpenWithServiceComponents"
  - "OpenWithServiceComponents"
  - "CDataSource.OpenWithServiceComponents"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OpenWithServiceComponents (metodo)"
ms.assetid: 49c1d037-36ae-4fde-8e54-ced623abe1a9
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDataSource::OpenWithServiceComponents
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Apre un oggetto origine dati usando i componenti del servizio in oledb32.dll.  
  
## Sintassi  
  
```  
  
        HRESULT OpenWithServiceComponents (  
   const CLSID clsid,  
   DBPROPSET* pPropset = NULL,  
   ULONG ulPropSets = 1   
);  
HRESULT OpenWithServiceComponents (  
   LPCSTR szProgID,  
   DBPROPSET* pPropset = NULL,  
   ULONG ulPropSets = 1   
);  
```  
  
#### Parametri  
 `clsid`  
 \[in\] **CLSID** di un provider di dati.  
  
 `szProgID`  
 \[in\] ID programma di un provider di dati.  
  
 `pPropset`  
 \[in\] Puntatore a una matrice di strutture [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) che contiene le proprietà e i valori da impostare.  Vedere [Set di proprietà e gruppi di proprietà](https://msdn.microsoft.com/en-us/library/ms713696.aspx) nelle *informazioni di riferimento per programmatori OLE DB* in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  Se l'oggetto origine dati viene inizializzato, le proprietà devono appartenere al gruppo di proprietà Data Source.  Se si specifica la stessa proprietà più di una volta in `pPropset`, il valore usato dipende dal provider.  Se `ulPropSets` è zero, questo parametro viene ignorato.  
  
 `ulPropSets`  
 \[in\] Numero di strutture [DBPROPSET](https://msdn.microsoft.com/en-us/library/ms714367.aspx) passate nell'argomento *pPropSet*.  Se è zero, il provider ignora `pPropset`.  
  
## Valore restituito  
 `HRESULT` standard.  
  
## Note  
 Questo metodo apre un oggetto origine dati usando i componenti del servizio in oledb32.dll. Questa DLL contiene l'implementazione delle funzionalità dei componenti del servizio, come il pool di risorse, l'inserimento automatico delle transazioni e così via.  Per altre informazioni, vedere "Servizi OLE DB" nelle informazioni di riferimento per programmatori OLE DB all'indirizzo [http:\/\/msdn.microsoft.com\/library\/default.asp?url\=\/library\/oledb\/htm\/oledbole\_db\_services.asp?frame\=true](http://msdn.microsoft.com/library/default.asp?url=/library/oledb/htm/oledbole_db_services.asp?frame=true).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDataSource](../../data/oledb/cdatasource-class.md)