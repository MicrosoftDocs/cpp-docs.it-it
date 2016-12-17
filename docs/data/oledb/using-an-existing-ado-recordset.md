---
title: "Utilizzo di un recordset ADO esistente | Microsoft Docs"
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
  - "ADO (recordset) [C++]"
  - "OLE DB (modelli consumer), recordset ADO"
  - "recordset [C++], utilizzo in OLE DB"
ms.assetid: a9b1de8a-d379-49b1-a26e-578741e9f6a8
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo di un recordset ADO esistente
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per utilizzare i modelli consumer OLE DB con Active Data Objects \(ADO\), servirsi di ADO per aprire un recordset. Un recordset corrisponde a un rowset nei modelli consumer OLE DB.  Dopo aver aperto il recordset, eseguire le operazioni descritte di seguito per connettersi a un rowset OLE DB.  
  
1.  Chiamare `QueryInterface` per i puntatori a `IRowset` e `IAccessor`.  
  
    ```  
    IRowset* lpRowset = NULL;  
    IAccessor* lpAccessor = NULL;  
    lpUnk->QueryInterface(IID_IRowset, (void**)&lpRowset);  
    lpUnk->QueryInterface(IID_IAccessor, (void**)&lpAccessor);  
    ```  
  
    > [!NOTE]
    >  *lpUnk* fa riferimento all'oggetto **IUnknown** del recordset ADO.  
  
2.  Associare la funzione di accesso e il rowset alle classi appropriate del modello consumer OLE DB.  
  
    ```  
    CRowset rs;  
    CAccessor accessor;  
  
    accessor.AddAccessorInfo(0ul);      // 0 is the ordinal of an ADO accessor  
    rs.m_spRowset.Attach(lpRowset);      // use the Attach method of CComPtr<>  
    rs.SetAccessor(accessor);  
    ```  
  
## Vedere anche  
 [Utilizzo delle funzioni di accesso](../../data/oledb/using-accessors.md)