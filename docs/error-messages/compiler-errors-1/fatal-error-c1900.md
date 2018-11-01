---
title: Errore irreversibile C1900
ms.date: 11/04/2016
f1_keywords:
- C1900
helpviewer_keywords:
- C1900
ms.assetid: 3aaa583b-4c1a-45de-aa34-527d806f2cb5
ms.openlocfilehash: c4622dd4552f7bfcc822a3aab4d5783146d68ac7
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50581857"
---
# <a name="fatal-error-c1900"></a>Errore irreversibile C1900

> Errata corrispondenza tra '*tool1*'version'*number1*"e"*tool2*'version'*numero2*'

Gli strumenti eseguiti nei vari passaggi del compilatore non corrispondono. *number1* e *numero2* fare riferimento alle date nei file. Nella fase 1, ad esempio, viene eseguito il front end del compilatore (c1.dll) mentre nella fase 2 viene eseguito il back end (c2.dll). È necessario che le date dei file corrispondano.

Per risolvere questo problema, assicurarsi che tutti gli aggiornamenti siano stati applicati a Visual Studio. Se il problema persiste, usare **programmi e funzionalità** nel Pannello di controllo di Windows per ripristinare o reinstallare Visual Studio.