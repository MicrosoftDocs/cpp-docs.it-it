---
title: Errore del compilatore C2834
ms.date: 11/04/2016
f1_keywords:
- C2834
helpviewer_keywords:
- C2834
ms.assetid: 28f9f6eb-ab2a-4e64-aaaa-9d14f955de41
ms.openlocfilehash: a6a7bc0591fd51c808c303e94eeaaffd6111ffcd
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80201925"
---
# <a name="compiler-error-c2834"></a>Errore del compilatore C2834

' operator Operator ' deve essere qualificato a livello globale

Gli operatori `new` e `delete` sono collegati alla classe in cui risiedono. Non è possibile usare la risoluzione dell'ambito per selezionare una versione di `new` o `delete` da un'altra classe. Per implementare più forme dell'operatore `new` o `delete`, creare una versione dell'operatore con parametri formali aggiuntivi.
