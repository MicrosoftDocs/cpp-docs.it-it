---
title: Gestione della memoria con CStringT | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CStringT
- ATL::CStringT
- ATL.CStringT
dev_langs: C++
helpviewer_keywords:
- CString objects, memory management
- memory [C++], usage
- IAtlStringMgr class, using
- strings [C++], custom memory management
- CFixedStringT class, description of
- strings [C++], memory management
- CStringT class, memory management
ms.assetid: 88b8342d-19b5-48c4-9cf6-e4c44cece21e
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: bbf623344ec52abce28a08670e7f3cd09140563b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="memory-management-with-cstringt"></a>Gestione della memoria con CStringT
Classe [CStringT](../atl-mfc-shared/reference/cstringt-class.md) è una classe di modello utilizzata per modificare le stringhe di caratteri di lunghezza variabile. La memoria per queste stringhe viene allocata e rilasciata tramite gestione, un oggetto stringa associato a ogni istanza di `CStringT`. MFC e ATL forniscono creazioni di istanze predefinite di `CStringT`, denominato `CString`, `CStringA`, e `CStringW`, la quale modificare le stringhe di diversi tipi di carattere. Questi tipi di carattere sono di tipo **TCHAR**, `char`, e `wchar_t`, rispettivamente. Questi tipi di stringa del valore predefinito è utilizzare un gestore di stringhe che alloca la memoria dall'heap del processo (in ATL) o l'heap CRT (in MFC). Per applicazioni tipiche, questo schema di allocazione della memoria è sufficiente. Tuttavia, per il codice con utilizzo intensivo di rendere l'utilizzo di stringhe (o codice multithreading) i gestori di memoria predefinita potrebbero non essere ottimali. In questo argomento viene descritto come eseguire l'override del comportamento di gestione della memoria predefinito di `CStringT`, creando allocatori appositamente ottimizzato per l'attività in questione.  
  
-   [Implementazione di una gestione stringhe personalizzata (metodo di base)](../atl-mfc-shared/implementation-of-a-custom-string-manager-basic-method.md)  
  
-   [Prevenzione dei conflitti dell'Heap](../atl-mfc-shared/avoidance-of-heap-contention.md)  
  
-   [Implementazione di una gestione stringhe personalizzata (metodo avanzato)](../atl-mfc-shared/implementation-of-a-custom-string-manager-advanced-method.md)  
  
-   [CFixedStringT: Esempio di una gestione stringa personalizzata](../atl-mfc-shared/cfixedstringt-example-of-a-custom-string-manager.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio CustomString](../visual-cpp-samples.md)

