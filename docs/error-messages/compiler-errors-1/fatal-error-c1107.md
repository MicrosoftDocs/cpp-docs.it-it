---
title: Errore irreversibile C1107 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1107
dev_langs:
- C++
helpviewer_keywords:
- C1107
ms.assetid: 541a4d9f-10bc-4dd8-b68e-15e548f3dc0a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bc896f08ac161cae4e4fab5e991da810f3faf195
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46016637"
---
# <a name="fatal-error-c1107"></a>Errore irreversibile C1107

Impossibile trovare l'assembly 'file': specificare il percorso di ricerca assembly usando /AI o impostando la variabile di ambiente LIBPATH

Un file di metadati è stato passato a un [#using](../../preprocessor/hash-using-directive-cpp.md) direttiva per il compilatore non è riuscito a individuare.

LIBPATH, che è descritti nell'argomento relativo `#using`e il [/AI](../../build/reference/ai-specify-metadata-directories.md) opzione del compilatore consentono di specificare le directory in cui verranno cercati i file di metadati di riferimento.