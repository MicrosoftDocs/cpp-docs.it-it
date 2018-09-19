---
title: Errore del compilatore di risorse RC2144 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RC2144
dev_langs:
- C++
helpviewer_keywords:
- RC2144
ms.assetid: 1b3ff39a-92cd-4a04-b1a3-b1fa6a805813
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 62f9eb2b25919a2336c36a459ef41eece447a490
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46080493"
---
# <a name="resource-compiler-error-rc2144"></a>Errore del compilatore di risorse RC2144

PRIMARY LANGUAGE ID non è un numero

PRIMARY LANGUAGE ID deve essere un ID di lingua in formato esadecimale. Visualizzare [stringhe di paese/area geografica e lingua](../../c-runtime-library/locale-names-languages-and-country-region-strings.md) nel *Run-Time Library Reference* per un elenco di ID lingua validi.

Questo errore può verificarsi anche se sono state aggiunte risorse ed eliminate dal File RC usando uno strumento. Per risolvere questo problema, aprire il file RC in un editor di testo ed eliminare le risorse inutilizzate manualmente.