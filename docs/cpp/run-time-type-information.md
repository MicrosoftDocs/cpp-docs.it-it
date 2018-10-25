---
title: Informazioni sul tipo di runtime | Microsoft Docs
ms.custom: index-page
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- RTTI compiler option
- run-time type information
- run time, type checking
- type information, run-time type checking
- run-time checks, type checking
ms.assetid: becbd0e5-0439-4c61-854f-8a74f7160c54
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9f9ce0094bce1f8e7590cef0cbe3bfe85f35158d
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50056061"
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