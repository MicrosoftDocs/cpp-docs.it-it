---
title: Errore irreversibile C1900 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1900
dev_langs:
- C++
helpviewer_keywords:
- C1900
ms.assetid: 3aaa583b-4c1a-45de-aa34-527d806f2cb5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b2211b4243ddf44194959a263fd90ec1a615ea0a
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43220281"
---
# <a name="fatal-error-c1900"></a>Errore irreversibile C1900

> Errata corrispondenza tra '*tool1*'version'*number1*"e"*tool2*'version'*numero2*'

Gli strumenti eseguiti nei vari passaggi del compilatore non corrispondono. *number1* e *numero2* fare riferimento alle date nei file. Nella fase 1, ad esempio, viene eseguito il front end del compilatore (c1.dll) mentre nella fase 2 viene eseguito il back end (c2.dll). È necessario che le date dei file corrispondano.

Per risolvere questo problema, assicurarsi che tutti gli aggiornamenti siano stati applicati a Visual Studio. Se il problema persiste, usare **programmi e funzionalità** nel Pannello di controllo di Windows per ripristinare o reinstallare Visual Studio.