---
title: -FD (ricompilazione minima IDE) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /FD
dev_langs:
- C++
helpviewer_keywords:
- /FD compiler option [C++]
- -FD compiler option [C++]
- FD compiler option [C++]
ms.assetid: 7ef21b8c-a448-4bb4-9585-a2a870028e17
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 74fb35ec25bed808e2165498c00b65723aba5bac
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45702442"
---
# <a name="fd-ide-minimal-rebuild"></a>/FD (Ricompilazione minima IDE)

**/FD** non è esposta agli utenti solo nella [della riga di comando](../../ide/command-line-property-pages.md) pagina delle proprietà di un progetto C++ **pagine delle proprietà** della finestra di dialogo se e solo se [/Gm (Abilita ricompilazione minima)](../../build/reference/gm-enable-minimal-rebuild.md) non è stata selezionata. **/FD** non ha alcun effetto diverso dall'ambiente di sviluppo. **/FD** non viene esposto nell'output di **cl /?**.

Se non si abilita **/Gm** nell'ambiente di sviluppo **/FD** verrà utilizzato. **/FD** garantisce che il file con estensione IDB disponga di sufficienti informazioni sulle dipendenze. **/FD** viene usato solo dall'ambiente di sviluppo, e non deve essere usato dalla riga di comando o uno script di compilazione.

## <a name="see-also"></a>Vedere anche

[File di output (/ F) le opzioni](../../build/reference/output-file-f-options.md)
[opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)