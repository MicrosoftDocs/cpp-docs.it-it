---
title: Errore del compilatore C3398 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C3398
dev_langs: C++
helpviewer_keywords: C3398
ms.assetid: 26f8c8a4-526f-415b-8047-155c5cd4f180
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4b332346dd8e8b7e906e961c86805ad0564f0f79
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3398"></a>Errore del compilatore C3398
'operator': non è possibile convertire da 'function_signature' a 'function_pointer'. L'espressione di origine deve essere un simbolo funzione  
  
 Quando la convenzione di chiamata [__clrcall](../../cpp/clrcall.md) non viene specificata durante la compilazione **/clr**, il compilatore genera due punti di ingresso (indirizzo) per ogni funzione, un punto di ingresso nativo e un punto di ingresso gestito.  
  
 Per impostazione predefinita il compilatore restituisce il punto di ingresso nativo, ma ci sono casi in cui è preferibile il punto di ingresso gestito (ad esempio quando si assegna l'indirizzo da un puntatore a funzione `__clrcall` ). Affinché il compilatore scelga in modo affidabile il punto di ingresso gestito in un'assegnazione, il lato destro deve essere un simbolo della funzione.