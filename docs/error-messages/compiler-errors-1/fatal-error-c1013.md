---
title: Errore irreversibile C1013 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1013
dev_langs:
- C++
helpviewer_keywords:
- C1013
ms.assetid: 5514a679-efe7-4055-bdd3-5693ca0c332f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 33c10062cac83984fb1c68835780497b89c4cbc1
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46050520"
---
# <a name="fatal-error-c1013"></a>Errore irreversibile C1013

limite del compilatore: troppe parentesi aperte

Un'espressione contiene troppi livelli di parentesi in un'unica espressione. Semplificare l'espressione o suddividerla in più istruzioni.

Prima di Visual C++ 6.0 Service Pack 3 il limite per le parentesi annidate in un'unica espressione era 59. Attualmente il limite per le parentesi annidate è 256.