---
title: Operatori del preprocessore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- preprocessor operators
- operators [C++], preprocessor
ms.assetid: 884126d1-0ce2-48b6-9e06-8a2d7c4a9656
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b80c9c8ef371808fc98d0475afc00223b13194ea
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46384039"
---
# <a name="preprocessor-operators"></a>Operatori del preprocessore
Quattro operatori specifici del preprocessore vengono utilizzati nel contesto della direttiva `#define` (vedere il seguente elenco per un riepilogo di ciascun operatore). Gli operatori per la creazione di stringhe, caratteri e concatenamento dei token sono descritti nelle tre sezioni seguenti. Per informazioni sul `defined` operatore, vedere [#if, #elif, #else e #endif direttive](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md).  
  
|Operatore|Operazione|  
|--------------|------------|  
|[Creazione di stringhe operatore # (#)](../preprocessor/stringizing-operator-hash.md)|Racchiude l'argomento corrispondente tra virgolette doppie|  
|[Operatore per (#@)](../preprocessor/charizing-operator-hash-at.md)|Racchiude l'argomento corrispondente tra virgolette singole e lo considera come un carattere (Microsoft Specific)|  
|[Operatore di Incolla per token (#)](../preprocessor/token-pasting-operator-hash-hash.md)|Consente ai token utilizzati come argomenti effettivi di essere concatenati per formare altri token|  
|[operatore definito](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)|Semplifica la scrittura di espressioni composte in alcune direttive macro|  
  
## <a name="see-also"></a>Vedere anche  
 
[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)<br/>
[Macro predefinite](../preprocessor/predefined-macros.md)<br/>
[Riferimenti al preprocessore C/C++](../preprocessor/c-cpp-preprocessor-reference.md)