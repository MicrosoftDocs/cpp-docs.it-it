---
title: Gestione della memoria con CStringt
ms.date: 11/04/2016
helpviewer_keywords:
- CString objects, memory management
- memory [C++], usage
- IAtlStringMgr class, using
- strings [C++], custom memory management
- CFixedStringT class, description of
- strings [C++], memory management
- CStringT class, memory management
ms.assetid: 88b8342d-19b5-48c4-9cf6-e4c44cece21e
ms.openlocfilehash: af042c80b9e3e0de872261f89255a26728b218cd
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79440497"
---
# <a name="memory-management-with-cstringt"></a>Gestione della memoria con CStringt

La classe [CStringT](../atl-mfc-shared/reference/cstringt-class.md) è una classe modello utilizzata per modificare le stringhe di caratteri a lunghezza variabile. La memoria per conservare queste stringhe viene allocata e rilasciata tramite un oggetto gestore di stringhe, associato a ogni istanza di `CStringT`. MFC e ATL forniscono creazioni di istanze predefinite di `CStringT`, denominate `CString`, `CStringA`e `CStringW`, che modificano stringhe di tipi di carattere diversi. Questi tipi di carattere sono rispettivamente di tipo TCHAR, **char**e `wchar_t`. Questi tipi di stringa predefiniti usano un gestore di stringhe che alloca memoria dall'heap del processo (in ATL) o dall'heap CRT (in MFC). Per le applicazioni tipiche, questo schema di allocazione della memoria è sufficiente. Tuttavia, per il codice che usa in modo intensivo le stringhe (o codice multithreading), i gestori di memoria predefiniti potrebbero non funzionare in modo ottimale. In questo argomento viene descritto come eseguire l'override del comportamento predefinito di gestione della memoria di `CStringT`, creando allocatori specificamente ottimizzati per l'attività.

- [Implementazione di una gestione stringhe personalizzata (metodo di base)](../atl-mfc-shared/implementation-of-a-custom-string-manager-basic-method.md)

- [Prevenzione dei conflitti dell'Heap](../atl-mfc-shared/avoidance-of-heap-contention.md)

- [Implementazione di una gestione stringhe personalizzata (metodo avanzato)](../atl-mfc-shared/implementation-of-a-custom-string-manager-advanced-method.md)

- [CFixedStringT: esempio di una gestione stringhe personalizzata](../atl-mfc-shared/cfixedstringt-example-of-a-custom-string-manager.md)

## <a name="see-also"></a>Vedere anche

[Esempio CustomString](../overview/visual-cpp-samples.md)
