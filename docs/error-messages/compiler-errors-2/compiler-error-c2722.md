---
description: 'Altre informazioni su: errore del compilatore C2722'
title: Errore del compilatore C2722
ms.date: 11/04/2016
f1_keywords:
- C2722
helpviewer_keywords:
- C2722
ms.assetid: 4cc2c7fa-cb12-4bcf-9df1-6d627ef62973
ms.openlocfilehash: 10d1af61f0b82621469f2d6e91d97296c59f22cf
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97155592"
---
# <a name="compiler-error-c2722"></a>Errore del compilatore C2722

':: operator ': comando dell'operatore seguente non valido; USA ' operatore operator '

Un' `operator` istruzione ridefinisce `::new` o `::delete` . Gli `new` `delete` operatori e sono globali, quindi l'operatore di risoluzione dell'ambito ( `::` ) non è significativo. Rimuovere l'operatore `::` .
