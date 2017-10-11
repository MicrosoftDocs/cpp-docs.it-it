---
title: Errore del compilatore C2834 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2834
dev_langs:
- C++
helpviewer_keywords:
- C2834
ms.assetid: 28f9f6eb-ab2a-4e64-aaaa-9d14f955de41
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 5b85b01fa832b0d14d01b6b7cbb5ef65107177ef
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2834"></a>Errore del compilatore C2834
'operatore' deve essere qualificato a livello globale  
  
 Il `new` e `delete` gli operatori sono associati alla classe in cui si trovano. La risoluzione dell'ambito non può essere utilizzata per selezionare una versione di `new` o `delete` da una classe diversa. Per implementare più forme del `new` o `delete` (operatore), creare una versione dell'operatore con parametri formali aggiuntivi.
