---
title: "Memory Management with CStringT | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CStringT"
  - "ATL::CStringT"
  - "ATL.CStringT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFixedStringT class, description of"
  - "CString objects, gestione della memoria"
  - "CStringT class, gestione della memoria"
  - "IAtlStringMgr class, utilizzo"
  - "memoria [C++], utilizzo"
  - "stringhe [C++], custom memory management"
  - "stringhe [C++], gestione della memoria"
ms.assetid: 88b8342d-19b5-48c4-9cf6-e4c44cece21e
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Memory Management with CStringT
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe [CStringT](../atl-mfc-shared/reference/cstringt-class.md) è una classe modello utilizzata per modificare le stringhe di caratteri a lunghezza variabile.  La memoria per utilizzare queste stringhe viene allocata e rilasciati attraverso un oggetto di gestione della stringa, collegato a ogni istanza `CStringT`.  MFC e ATL forniscono le creazioni di istanze predefinite `CStringT`, chiamare `CString`, `CStringA`e `CStringW`, che modificano le serie di caratteri diversi.  Questi tipi di carattere sono di tipo **TCHAR**, `char`e `wchar_t`, rispettivamente.  I tipi predefiniti della stringa utilizzano un amministratore di stringa che alloca memoria dall'heap processo \(in ATL\) o dall'heap CRT \(in MFC\).  Per le applicazioni tipiche, questa combinazione di allocazione della memoria è sufficiente.  Tuttavia, per motivi di codice che esegue utilizzo intensivo di stringhe \(o codice con multithreading che i gestori di memoria predefiniti non possono eseguire in maniera ottimale.  In questo argomento viene descritto come eseguire l'override del comportamento predefinito di gestione della memoria `CStringT`, creando di allocatori specificamente ottimizzati per l'attività corrente.  
  
-   [Implementazione di un gestore personalizzato di stringa \(metodo di base\)](../atl-mfc-shared/implementation-of-a-custom-string-manager-basic-method.md)  
  
-   [Evitare conflitti dell'heap](../atl-mfc-shared/avoidance-of-heap-contention.md)  
  
-   [Implementazione di un gestore personalizzato di stringa \(metodo avanzato\)](../atl-mfc-shared/implementation-of-a-custom-string-manager-advanced-method.md)  
  
-   [CFixedStringT: Un amministratore alla stringa personalizzata](../atl-mfc-shared/cfixedstringt-example-of-a-custom-string-manager.md)  
  
## Vedere anche  
 [Esempio CustomString](../top/visual-cpp-samples.md)