---
title: Errore del compilatore C2834 | Documenti Microsoft
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
ms.openlocfilehash: 4eb4fb992f9213c4a4b456f786fd8f81308cec12
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c2834"></a>Errore del compilatore C2834
'operatore' deve essere qualificato a livello globale  
  
 Il `new` e `delete` gli operatori sono associati alla classe in cui si trovano. La risoluzione dell'ambito non può essere utilizzata per selezionare una versione di `new` o `delete` da una classe diversa. Per implementare più forme del `new` o `delete` (operatore), creare una versione dell'operatore con parametri formali aggiuntivi.