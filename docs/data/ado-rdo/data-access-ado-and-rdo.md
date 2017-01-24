---
title: "Accesso ai dati: ADO e RDO | Microsoft Docs"
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
  - "controlli con associazione [C++], ADO"
  - "controlli con associazione [C++], RDO"
  - "controlli [C++], associazione dati"
  - "accesso ai dati [C++], controlli dati RDO"
  - "associazione dati [C++], ADO"
  - "associazione dati [C++], RDO"
  - "controlli dati [C++]"
  - "controlli con associazione a dati [C++], ADO"
  - "controlli con associazione a dati [C++], RDO"
ms.assetid: 92da8f1e-144b-4605-ac0a-43c25bdc14a7
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Accesso ai dati: ADO e RDO
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nella tabella riportata di seguito sono riportate due tecnologie sottostanti che supportano controlli associati a dati o a origini dati:  
  
 **ADO**  
 ADO è un wrapper COM di OLE DB che facilita la scrittura di applicazioni per l'accesso ai dati \(consumer\).  OLE DB è una tecnologia universale per l'accesso ai dati basata su COM, che consente di utilizzare qualsiasi origine dati, non solo database basati su SQL o metodi ISAM per l'accesso sequenziale indicizzato.  
  
 I provider OLE DB sono in grado di accedere ai dati da diverse origini dati e per il recupero dei dati non sono limitati alle query SQL, ma possono utilizzare le query definite nel provider.  
  
 **RDO**  
 RDO è il wrapper COM di ODBC.  ODBC, un'API basata su C, consente un accesso ai dati di tipo generico e quindi eterogeneo.  RDO si basa su SQL come linguaggio di comandi per l'accesso ai dati.  
  
 Per questo motivo per l'accesso ai dati può essere preferibile ricorrere ai controlli basati su ADO anziché ai controlli RDO.  
  
 Nella tabella riportata di seguito sono illustrate le principali differenze tra i controlli dati ADO e RDO.  
  
 **Controlli associati ai dati**  
 I controlli RDO associati a dati utilizzano le interfacce **ICursor**, mentre i controlli ADO utilizzano l'interfaccia OLE DB `IRowset`.  In entrambi i casi le interfacce utilizzate dai controlli restituiscono un rowset.  
  
 I controlli associati a dati basati su RDO sono stati ottimizzati per Visual Basic.  Di conseguenza alcune funzionalità di questi controlli, specialmente nell'ambito della formattazione, non sono disponibili nelle applicazioni Visual C\+\+.  Questo problema non sussiste per i controlli ADO per l'associazione dati.  
  
 **Controlli dati**  
 I controlli dati ADO implementano l'interfaccia **IDataSource**, mentre i controlli dati RDO implementano l'interfaccia **IVBDSC**.  È possibile chiamare un metodo **IDataSource** per ricevere un puntatore all'interfaccia `IRowset`.  Analogamente, è possibile chiamare un metodo IVBDSC per ottenere un puntatore all'interfaccia **ICursor**.  
  
## Vedere anche  
 [Associazione dati con controlli ActiveX in Visual C\+\+](../../data/ado-rdo/databinding-with-activex-controls-in-visual-cpp.md)