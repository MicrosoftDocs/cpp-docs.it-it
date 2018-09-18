---
title: Limitazioni ai gestori di eccezioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- restrictions, exception handlers
- exception handling [C++], exception handlers
ms.assetid: 31d63524-0e8c-419f-b87c-061f4c0ea470
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 29a462f83bff3bab158e9bcf9fa7947efb56a79b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46074474"
---
# <a name="restrictions-on-exception-handlers"></a>Limitazioni ai gestori di eccezioni

La limitazione principale nell'utilizzo di gestori di eccezioni nel codice è che è possibile utilizzare un **goto** istruzione di passare in un **try** blocco di istruzioni. È tuttavia necessario inserire il blocco di istruzioni attraverso il normale flusso di controllo. È possibile passare direttamente su un **try** istruzione blocca e annidare i gestori di eccezioni che vuoi.

## <a name="see-also"></a>Vedere anche

[Scrittura di un gestore di eccezioni](../cpp/writing-an-exception-handler.md)<br/>
[Gestione strutturata delle eccezioni (C/C++)](../cpp/structured-exception-handling-c-cpp.md)