---
title: Errore irreversibile C1014 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1014
dev_langs:
- C++
helpviewer_keywords:
- C1014
ms.assetid: 4c01ef70-e765-4d07-a3fe-a11c19fb610b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7c85cff5895326b9a96e9254cebb27fc267550f4
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46103971"
---
# <a name="fatal-error-c1014"></a>Errore irreversibile C1014

troppi file di inclusione: profondità = level

Le direttive `#include` sono eccessivamente annidate. Le direttive annidate possono includere file aperti. Il file di origine che contiene la direttiva viene conteggiato come file singolo.