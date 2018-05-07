---
title: Errore del compilatore di risorse RC2144 | Documenti Microsoft
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
ms.openlocfilehash: 8b6f83f937e881cdee16c22120e6ac1839f7ad76
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="resource-compiler-error-rc2144"></a>Errore del compilatore di risorse RC2144
PRIMARY LANGUAGE ID non è un numero  
  
 PRIMARY LANGUAGE ID deve essere un ID di lingua in formato esadecimale. Vedere [lingua e paese/area geografica stringhe](../../c-runtime-library/locale-names-languages-and-country-region-strings.md) nel *riferimenti alla libreria di Run-Time* per un elenco di ID lingua validi.  
  
 Questo errore può verificarsi anche se sono state aggiunte risorse ed eliminate dal File RC usando uno strumento. Per risolvere questo problema, aprire il file RC in un editor di testo ed eliminare le risorse inutilizzate manualmente.