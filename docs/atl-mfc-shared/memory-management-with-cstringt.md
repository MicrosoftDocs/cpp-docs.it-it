---
title: Gestione della memoria con CStringT
ms.date: 11/04/2016
f1_keywords:
- CStringT
- ATL::CStringT
- ATL.CStringT
helpviewer_keywords:
- CString objects, memory management
- memory [C++], usage
- IAtlStringMgr class, using
- strings [C++], custom memory management
- CFixedStringT class, description of
- strings [C++], memory management
- CStringT class, memory management
ms.assetid: 88b8342d-19b5-48c4-9cf6-e4c44cece21e
ms.openlocfilehash: f45aac11f0c42aecf8c72cf6f7d1630d50b780f3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50598019"
---
# <a name="memory-management-with-cstringt"></a>Gestione della memoria con CStringT

Classe [CStringT](../atl-mfc-shared/reference/cstringt-class.md) è una classe di modello utilizzata per modificare le stringhe di caratteri di lunghezza variabile. La memoria per contenere queste stringhe viene allocata e rilasciata tramite un oggetto di gestione di stringa, associato a ogni istanza di `CStringT`. MFC e ATL fornisce creazioni di istanze predefinite di `CStringT`, denominato `CString`, `CStringA`, e `CStringW`, la quale modificare le stringhe di diversi tipi di carattere. Questi tipi di carattere sono di tipo, TCHAR **char**, e `wchar_t`, rispettivamente. Questi tipi di stringa predefinita usano una gestione stringhe che alloca la memoria dall'heap del processo (in ATL) o nell'heap CRT (in MFC). Per le applicazioni tipiche, questo schema di allocazione della memoria è sufficiente. Tuttavia, per la creazione con utilizzo intensivo del codice usano di stringhe (o codice multithreading) i gestori di memoria predefinita non è possono eseguire in modo ottimale. In questo argomento descrive come sostituire il comportamento di gestione della memoria predefinito di `CStringT`, creando in modo specifico gli allocatori ottimizzato per l'attività in questione.

- [Implementazione di una gestione stringhe personalizzata (metodo di base)](../atl-mfc-shared/implementation-of-a-custom-string-manager-basic-method.md)

- [Prevenzione dei conflitti dell'Heap](../atl-mfc-shared/avoidance-of-heap-contention.md)

- [Implementazione di una gestione stringhe personalizzata (metodo avanzato)](../atl-mfc-shared/implementation-of-a-custom-string-manager-advanced-method.md)

- [CFixedStringT: Esempio di una gestione stringhe personalizzata](../atl-mfc-shared/cfixedstringt-example-of-a-custom-string-manager.md)

## <a name="see-also"></a>Vedere anche

[Esempio CustomString](../visual-cpp-samples.md)

