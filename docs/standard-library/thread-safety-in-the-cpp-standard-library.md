---
title: Thread safety nella libreria standard C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- thread safety
- C++ Standard Library, thread safety
- thread safety, C++ Standard Library
ms.assetid: 9351c8fb-4539-4728-b0e9-226e2ac4284b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: fc39fd944c035c0e8dfa5f5b66cc045a115185ed
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33855234"
---
# <a name="thread-safety-in-the-c-standard-library"></a>Thread safety nella libreria standard C++

Le regole di thread safety seguenti sono applicabili a tutte le classi della libreria standard C++, inclusa `shared_ptr`, come illustrato di seguito.  Sono a volte disponibili maggiori garanzie, ad esempio gli oggetti iostream standard illustrati di seguito, e tipi destinati in modo specifico al multithreading, come quelli disponibili in [\<atomic>](../standard-library/atomic.md).

Un oggetto è is thread-safe per la lettura da più thread. Ad esempio, dato un oggetto A, è possibile leggere in modo sicuro A contemporaneamente dal thread 1 e dal thread 2.

Se un thread scrive in un oggetto, tutte le operazioni di lettura e scrittura in quell'oggetto nello stesso thread o in altri thread dovranno essere protette. Ad esempio, dato un oggetto A, se il thread 1 scrive in A, sarà necessario impedire al thread 2 di leggere o scrivere in A.

È possibile leggere e scrivere in modo sicuro nell'istanza di un tipo anche se un altro thread sta leggendo o scrivendo in un'istanza diversa dello stesso tipo. Ad esempio, dati gli oggetti A e B dello stesso tipo, le operazioni di scrittura in A nel thread 1 e le operazioni di lettura di B nel thread 2 saranno sicure.

## <a name="sharedptr"></a>shared_ptr

Più thread possono leggere e scrivere contemporaneamente in diversi oggetti [shared_ptr](../standard-library/shared-ptr-class.md), anche se tali oggetti sono copie che condividono la proprietà.

## <a name="iostream"></a>iostream

Gli oggetti iostream standard `cin`, `cout`, `cerr`, `clog`, `wcin`, `wcout`, `wcerr` e `wclog` seguono le stesse regole specificate per le altre classi, con l'eccezione seguente: è possibile scrivere in modo sicuro in un oggetto da più thread. Ad esempio, il thread 1 può scrivere in [cout](../standard-library/iostream.md#cout) contemporaneamente al thread 2. Ciò può tuttavia provocare una mescolanza nell'output dei due thread.

> [!NOTE]
> La lettura da un buffer del flusso non è considerata un'operazione di lettura, ma un'operazione di scrittura, poiché lo stato della classe viene modificato.

## <a name="see-also"></a>Vedere anche

[Panoramica sulla libreria standard C++](../standard-library/cpp-standard-library-overview.md)<br/>
