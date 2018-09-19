---
title: Errore del compilatore C2834 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2834
dev_langs:
- C++
helpviewer_keywords:
- C2834
ms.assetid: 28f9f6eb-ab2a-4e64-aaaa-9d14f955de41
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b94e1a3fba9bc3589af020340651b4546347cf1a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46089346"
---
# <a name="compiler-error-c2834"></a>Errore del compilatore C2834

'operator operator' deve essere qualificato a livello globale

Il `new` e `delete` gli operatori sono associati alla classe in cui si trovano. Risoluzione dell'ambito non può essere usata per selezionare una versione di `new` o `delete` da una classe diversa. Per più forme di implementare il `new` o `delete` (operatore), creare una versione dell'operatore con i parametri formali aggiuntivi.