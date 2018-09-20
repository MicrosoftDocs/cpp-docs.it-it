---
title: 2.7.2.7 copyin | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 76cfb9f8-bf65-4585-adbf-fd933f5606b4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 94b4c529b7ad6fd717be1e1dee0edd3ff9ac3ff5
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46426887"
---
# <a name="2727-copyin"></a>2.7.2.7 copyin

Il **copyin** clausola fornisce un meccanismo per assegnare lo stesso valore per **threadprivate** variabili per ogni thread del team l'esecuzione di tale area. Per ogni variabile specificata una **copyin** clausola, il valore della variabile nel thread master del team a cui viene copiato, come se fosse assegnazione, per le copie di thread privato all'inizio dell'area parallela. La sintassi del **copyin** clausola è il seguente:

```

copyin(
variable-list
)

```

Le restrizioni per il **copyin** clausola sono i seguenti:

- Una variabile specificata nella **copyin** clausola deve avere un operatore di assegnazione copia accessibile e non ambigua.

- Una variabile specificata nella **copyin** clausola deve essere un **threadprivate** variabile.