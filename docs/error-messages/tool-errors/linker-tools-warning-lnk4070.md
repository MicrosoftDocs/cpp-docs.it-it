---
title: Strumenti del linker LNK4070 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4070
dev_langs:
- C++
helpviewer_keywords:
- LNK4070
ms.assetid: f95f179a-fff9-427e-bd51-466b3934517f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9cfb4ae1c5440742c491d9615a2b4929a9b04f66
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46106960"
---
# <a name="linker-tools-warning-lnk4070"></a>Avviso degli strumenti del linker LNK4070

Direttiva /out: in. EXP differisce dal nome file di output 'filename'; direttiva ignorata

Il `filename` specificato nella [NAME](../../build/reference/name-c-cpp.md) o [libreria](../../build/reference/library.md) istruzione quando è stato creato il file EXP differisce dall'output `filename` che è stato impostato per impostazione predefinita o specificato con il [/Out](../../build/reference/out-output-file-name.md) opzione.

Verrà visualizzato questo avviso se si modifica il nome di un file di output nell'ambiente di sviluppo e in cui non è stato aggiornato il file del progetto con estensione def. Aggiornare manualmente il file con estensione def per risolvere il problema.

Un programma client che usa la DLL risulta potrebbe verificarsi problemi.