---
title: Errore del compilatore C2667 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2667
dev_langs:
- C++
helpviewer_keywords:
- C2667
ms.assetid: 3c91d9d1-18fa-4e0d-a9ba-984d38980ca3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5d6d14cf04ae399b10cbaa393d9e9fcc7133f274
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46095248"
---
# <a name="compiler-error-c2667"></a>Errore del compilatore C2667

'function': nessuno dei numeri overload presenta una conversione ottimale

Una chiamata di funzione in overload è ambigua e non può essere risolto.

La conversione richiesta corrispondente ai parametri effettivi nella chiamata di funzione a una delle funzioni in overload deve essere rigorosamente meglio le conversioni necessarie per tutte le altre funzioni in overload.

Vedere l'articolo della Knowledge Base Q240869 per altre informazioni sull'ordinamento parziale dei modelli di funzione.