---
title: "Classe CAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CAccessor<T>"
  - "ATL::CAccessor"
  - "CAccessor"
  - "ATL::CAccessor<T>"
  - "ATL.CAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAccessor (classe)"
ms.assetid: b2ba959f-a686-46f3-8837-176248aef748
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Classe CAccessor
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta uno dei tipi di funzioni di accesso.  
  
## Sintassi  
  
```  
  
      template < class   
      T  
       >  
class CAccessor : public CAccessorBase, public T  
```  
  
#### Parametri  
 `T`  
 La classe di record utente.  
  
## Note  
 Viene utilizzata quando un record in modo statico associato a un'origine dati.  Il record contiene il buffer.  Questa classe supporta più più funzioni di accesso per un rowset.  
  
 Utilizzare questo tipo di funzione di accesso quando si conosce la struttura e il tipo del database.  
  
 Se la funzione di accesso contiene i campi che indicano la memoria \(ad esempio `BSTR` o un'interfaccia\) che deve essere liberata, chiamare la funzione membro [CAccessorRowset::FreeRecordMemory](../../data/oledb/caccessorrowset-freerecordmemory.md) prima che il record successivo venga letto.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)