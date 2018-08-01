---
title: Funzione Abort | Microsoft Docs
ms.custom: ''
ms.date: 12/01/2017
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- abort function
ms.assetid: 3352bcc4-1a8a-4e1f-8dcc-fe30f6b50f2d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3e5679ce718c564ee40fb07b676756ef79344a99
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39403622"
---
# <a name="abort-function"></a>Funzione abort

Il **abort** funzione, dichiarata anche nel file di inclusione standard \<STDLIB. h >, termina un programma C++. La differenza tra `exit` e **abort** è che `exit` consentirà l'elaborazione di terminazione di runtime di C++ per l'implementazione (oggetto globale distruttori verranno chiamati), mentre **abort** Termina il programma immediatamente. Per altre informazioni, vedere [abort](../c-runtime-library/reference/abort.md) nel *Run-Time Library Reference*.

## <a name="see-also"></a>Vedere anche
[Chiusura del programma](../cpp/program-termination.md)