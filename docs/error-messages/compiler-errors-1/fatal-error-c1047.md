---
description: "Altre informazioni su: errore irreversibile l'errore C1047"
title: Errore irreversibile C1047
ms.date: 02/17/2021
f1_keywords:
- C1047
helpviewer_keywords:
- C1047
ms.openlocfilehash: f22d7c7591e2c2c477d09f1637641cc351eeafb5
ms.sourcegitcommit: 5efc34c2b98d4d0d3e41aec38b213f062c19d078
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2021
ms.locfileid: "101844481"
---
# <a name="fatal-error-c1047"></a>Errore irreversibile C1047

> L'oggetto o il file di libreria '*filename*' è stato creato con un compilatore precedente rispetto ad altri oggetti; Ricompila oggetti e librerie obsoleti

Questo errore può verificarsi se si usa una nuova versione del compilatore per compilare il progetto, ma non si esegue una ricompilazione pulita dei file oggetto o delle librerie esistenti.

## <a name="remarks"></a>Commenti

L'errore C1047 viene generato quando i file oggetto o le librerie compilate tramite **`/GL`** o **`/LTCG`** in versioni diverse del set di strumenti del compilatore C/C++ di Visual Studio vengono collegati insieme. Ad esempio, non è possibile collegare una **`/LTCG`** libreria compilata usando Visual studio 2019 versione 16,7 a un'app compilata con Visual studio 2019 versione 16,8. Sia il numero di aggiornamento principale che quello secondario del set di strumenti usato per compilare gli oggetti e le librerie devono corrispondere esattamente.

Per risolvere l'errore C1047, ricompilare tutti i file oggetto o le librerie usando la stessa versione del set di strumenti.

## <a name="see-also"></a>Vedi anche

[`/GL` (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md)\
[`/LTCG` (Generazione di codice in fase di collegamento)](../../build/reference/ltcg-link-time-code-generation.md)\
[Compatibilità binaria C++ 2015-2019](../../porting/binary-compat-2015-2017.md)
