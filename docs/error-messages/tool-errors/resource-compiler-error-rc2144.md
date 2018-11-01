---
title: Errore del compilatore di risorse RC2144
ms.date: 11/04/2016
f1_keywords:
- RC2144
helpviewer_keywords:
- RC2144
ms.assetid: 1b3ff39a-92cd-4a04-b1a3-b1fa6a805813
ms.openlocfilehash: deabd639e04d5b78b398cda9245e9726e2124740
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50642923"
---
# <a name="resource-compiler-error-rc2144"></a>Errore del compilatore di risorse RC2144

PRIMARY LANGUAGE ID non è un numero

PRIMARY LANGUAGE ID deve essere un ID di lingua in formato esadecimale. Per un elenco di ID lingua validi, vedere [Stringhe relative a lingue e paesi](../../c-runtime-library/locale-names-languages-and-country-region-strings.md) in *Riferimenti alla libreria di runtime* .

Questo errore può verificarsi anche se sono state aggiunte risorse ed eliminate dal File RC usando uno strumento. Per risolvere questo problema, aprire il file RC in un editor di testo ed eliminare le risorse inutilizzate manualmente.