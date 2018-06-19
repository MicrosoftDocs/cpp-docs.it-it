---
title: Modifiche generali del linguaggio (C + + CLI) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 79a70768-225c-4ae2-84d1-178b20a9b042
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: aede6cc0d4bd8e50d8662f301ffdfb7b6179a230
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33109138"
---
# <a name="general-language-changes-ccli"></a>Modifiche generali del linguaggio (C++/CLI)
Numero di funzionalità del linguaggio CLR modificato dalle estensioni gestite per C++ in Visual C++.  
  
 Le modifiche descritte in questa sezione sono una sorta di vario. Include una modifica nella gestione di valori letterali stringa, una modifica nella risoluzione dell'overload tra i puntini di sospensione e `Param` attributo, la modifica di `typeof` a `typeid`, una modifica nella chiamata di elenchi di inizializzatori di costruttore e introduzione di nuove notazioni di cast che di `safe_cast`.  
  
 [Valore letterale stringa](../dotnet/string-literal.md)  
 Viene illustrato come è stata modificata la gestione di valori letterali stringa.  
  
 [Matrice di parametri e puntini di sospensione](../dotnet/param-array-and-ellipsis.md)  
 Viene descritto come `ParamArray` è ora assegnata la precedenza sui puntini di sospensione (`...`) per la risoluzione di chiamate di funzione con un numero variabile di argomenti.  
  
 [typeof passa a T::typeid](../dotnet/typeof-goes-to-t-typeid.md)  
 Viene illustrato come la `typeof` operatore è stato sostituito da `typeid`.  
  
 [Elenchi di inizializzatori](../dotnet/initializer-lists.md)  
 Illustra le modifiche nell'ordine di chiamata di elenchi di inizializzatori.  
  
 [Notazione cast e introduzione di safe_cast<>](../dotnet/cast-notation-and-introduction-of-safe-cast-angles.md)  
 Vengono illustrate le modifiche apportate alla notazione cast e in particolare l'introduzione di `safe_cast`.  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni di base della migrazione in C++/CLI](../dotnet/cpp-cli-migration-primer.md)