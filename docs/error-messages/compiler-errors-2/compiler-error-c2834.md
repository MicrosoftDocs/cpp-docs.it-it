---
title: Errore del compilatore C2834 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2834
dev_langs: C++
helpviewer_keywords: C2834
ms.assetid: 28f9f6eb-ab2a-4e64-aaaa-9d14f955de41
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 616bb6fe351c7575bf04f319390d0a3cfcd3cc8a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2834"></a>Errore del compilatore C2834
'operatore' deve essere qualificato a livello globale  
  
 Il `new` e `delete` gli operatori sono associati alla classe in cui si trovano. La risoluzione dell'ambito non può essere utilizzata per selezionare una versione di `new` o `delete` da una classe diversa. Per implementare più forme del `new` o `delete` (operatore), creare una versione dell'operatore con parametri formali aggiuntivi.