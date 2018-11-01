---
title: Errore del compilatore C2834
ms.date: 11/04/2016
f1_keywords:
- C2834
helpviewer_keywords:
- C2834
ms.assetid: 28f9f6eb-ab2a-4e64-aaaa-9d14f955de41
ms.openlocfilehash: fb4a0e6f3f6ec227b978ae0b7d3864b2134de986
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50677604"
---
# <a name="compiler-error-c2834"></a>Errore del compilatore C2834

'operator operator' deve essere qualificato a livello globale

Il `new` e `delete` gli operatori sono associati alla classe in cui si trovano. Risoluzione dell'ambito non può essere usata per selezionare una versione di `new` o `delete` da una classe diversa. Per più forme di implementare il `new` o `delete` (operatore), creare una versione dell'operatore con i parametri formali aggiuntivi.