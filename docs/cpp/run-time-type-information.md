---
title: Informazioni sui tipi di runtime
ms.custom: index-page
ms.date: 11/04/2016
helpviewer_keywords:
- RTTI compiler option
- run-time type information
- run time, type checking
- type information, run-time type checking
- run-time checks, type checking
ms.assetid: becbd0e5-0439-4c61-854f-8a74f7160c54
ms.openlocfilehash: b6d3652539572f094d0e7139e6672402341c956d
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87232235"
---
# <a name="run-time-type-information"></a>Informazioni sui tipi di runtime

Le informazioni sui tipi in fase di esecuzione (RTTI) sono un meccanismo che consente di determinare il tipo di un oggetto durante l'esecuzione del programma. RTTI è stato aggiunto al linguaggio C++ perché molti fornitori di librerie di classi stavano implementando questa funzionalità per conto proprio. Questa situazione ha provocato incompatibilità tra le librerie. Pertanto, è diventato evidente che erano necessario fornire supporto per le informazioni sui tipi in fase di esecuzione a livello di linguaggio.

Per maggiore chiarezza, la discussione di RTTI si limita quasi completamente ai puntatori. Tuttavia, i concetti illustrati sono applicabili anche ai riferimenti.

Esistono tre elementi principali del linguaggio C++ per eseguire informazioni sui tipi in fase di esecuzione:

- Operatore [dynamic_cast](../cpp/dynamic-cast-operator.md) .

   Utilizzato per la conversione dei tipi polimorfici.

- Operatore [typeid](../cpp/typeid-operator.md) .

   Utilizzato per l'identificazione del tipo esatto di un oggetto.

- Classe [type_info](../cpp/type-info-class.md) .

   Utilizzato per conservare le informazioni sul tipo restituite dall' **`typeid`** operatore.

## <a name="see-also"></a>Vedere anche

[Cast](../cpp/casting.md)
