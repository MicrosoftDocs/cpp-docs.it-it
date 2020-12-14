---
description: 'Altre informazioni su: errore irreversibile C1900'
title: Errore irreversibile C1900
ms.date: 11/04/2016
f1_keywords:
- C1900
helpviewer_keywords:
- C1900
ms.assetid: 3aaa583b-4c1a-45de-aa34-527d806f2cb5
ms.openlocfilehash: e7bcd44846f34b3d3910d4c1aac292ee6414b439
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97276114"
---
# <a name="fatal-error-c1900"></a>Errore irreversibile C1900

> Mancata corrispondenza tra'*strumento1*' versione '*number1*' è *Tool2*' versione '*number2*'

Gli strumenti eseguiti nei vari passaggi del compilatore non corrispondono. *number1* e *number2* fanno riferimento alle date dei file. Nella fase 1, ad esempio, viene eseguito il front end del compilatore (c1.dll) mentre nella fase 2 viene eseguito il back end (c2.dll). È necessario che le date dei file corrispondano.

Per risolvere questo problema, assicurarsi che tutti gli aggiornamenti siano stati applicati a Visual Studio. Se il problema persiste, utilizzare **programmi e funzionalità** nel pannello di controllo di Windows per ripristinare o reinstallare Visual Studio.
