---
description: 'Altre informazioni su: errore del compilatore C2834'
title: Errore del compilatore C2834
ms.date: 11/04/2016
f1_keywords:
- C2834
helpviewer_keywords:
- C2834
ms.assetid: 28f9f6eb-ab2a-4e64-aaaa-9d14f955de41
ms.openlocfilehash: 6f74853f264af653988ed77ddb9a9c7935f3c542
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97194436"
---
# <a name="compiler-error-c2834"></a>Errore del compilatore C2834

' operator Operator ' deve essere qualificato a livello globale

Gli `new` `delete` operatori e sono collegati alla classe in cui risiedono. Non è possibile usare la risoluzione dell'ambito per selezionare una versione di `new` o di `delete` una classe diversa. Per implementare più forme dell' `new` operatore OR `delete` , creare una versione dell'operatore con parametri formali aggiuntivi.
