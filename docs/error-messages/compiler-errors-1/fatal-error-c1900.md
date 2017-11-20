---
title: Errore irreversibile C1900 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C1900
dev_langs: C++
helpviewer_keywords: C1900
ms.assetid: 3aaa583b-4c1a-45de-aa34-527d806f2cb5
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 3b64061401189fb37f28492fbffe1e9941e8aab8
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="fatal-error-c1900"></a>Errore irreversibile C1900
errata corrispondenza tra 'strumento1' versione 'numero1' e 'strumento2' versione 'numero2'  
  
 Gli strumenti eseguiti nei vari passaggi del compilatore non corrispondono. ***number1*** e ***number2*** fare riferimento alle date nei file. Nella fase 1, ad esempio, viene eseguito il front end del compilatore (c1.dll) mentre nella fase 2 viene eseguito il back end (c2.dll). È necessario che le date dei file corrispondano.  
  
 Per risolvere questo problema, assicurarsi che tutti gli aggiornamenti siano stati applicati a Visual Studio. Se il problema persiste, utilizzare **programmi e funzionalità** nel Pannello di controllo di Windows per ripristinare o reinstallare Visual Studio.