---
title: Avviso U4001 di NMAKE | Microsoft Docs
ms.custom: ''
ms.date: 09/05/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U4001
dev_langs:
- C++
helpviewer_keywords:
- U4001
ms.assetid: ed3b4068-2ad8-4ffc-b7c7-33897d2a55d7
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5b34cf70a43bf1beee6daf636ae44840d75b0d63
ms.sourcegitcommit: d10a2382832373b900b1780e1190ab104175397f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2018
ms.locfileid: "43894629"
---
# <a name="nmake-warning-u4001"></a>Avviso U4001 di NMAKE 

> file di comando può essere richiamato solo dalla riga di comando

Un file di comando richiamato utilizzando il simbolo di chiocciola (**\@**) identificatore, non possono contenere specifiche di un altro file di comando. Questo tipo l'annidamento non è consentito. La specifica è stata ignorata.