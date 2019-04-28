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
ms.openlocfilehash: 1d11ee3ea472f935120c59f0faefee905361ee97
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62267402"
---
# <a name="run-time-type-information"></a>Informazioni sui tipi di runtime

Le informazioni sui tipi in fase di esecuzione (RTTI) sono un meccanismo che consente di determinare il tipo di un oggetto durante l'esecuzione del programma. RTTI è stato aggiunto al linguaggio C++ perché molti fornitori di librerie di classi stavano implementando questa funzionalità per conto proprio. Questa situazione ha provocato incompatibilità tra le librerie. Pertanto, è diventato evidente che erano necessario fornire supporto per le informazioni sui tipi in fase di esecuzione a livello di linguaggio.

Per maggiore chiarezza, la discussione di RTTI si limita quasi completamente ai puntatori. Tuttavia, i concetti illustrati sono applicabili anche ai riferimenti.

Esistono tre elementi principali del linguaggio C++ per eseguire informazioni sui tipi in fase di esecuzione:

- Il [dynamic_cast](../cpp/dynamic-cast-operator.md) operatore.

   Utilizzato per la conversione dei tipi polimorfici.

- Il [typeid](../cpp/typeid-operator.md) operatore.

   Utilizzato per l'identificazione del tipo esatto di un oggetto.

- Il [type_info](../cpp/type-info-class.md) classe.

   Usato per contenere le informazioni sul tipo restituiti per il **typeid** operatore.

## <a name="see-also"></a>Vedere anche

[Cast](../cpp/casting.md)