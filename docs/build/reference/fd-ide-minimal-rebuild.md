---
title: /FD (Ricompilazione minima IDE)
ms.date: 11/04/2016
f1_keywords:
- /FD
helpviewer_keywords:
- /FD compiler option [C++]
- -FD compiler option [C++]
- FD compiler option [C++]
ms.assetid: 7ef21b8c-a448-4bb4-9585-a2a870028e17
ms.openlocfilehash: a902096bf13105e6a6a66b7bd3ccc56b8f7cf624
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50433592"
---
# <a name="fd-ide-minimal-rebuild"></a>/FD (Ricompilazione minima IDE)

**/FD** non è esposta agli utenti solo nella [della riga di comando](../../ide/command-line-property-pages.md) pagina delle proprietà di un progetto C++ **pagine delle proprietà** della finestra di dialogo se e solo se [/Gm (Abilita ricompilazione minima)](../../build/reference/gm-enable-minimal-rebuild.md) non è stata selezionata. **/FD** non ha alcun effetto diverso dall'ambiente di sviluppo. **/FD** non viene esposto nell'output di **cl /?**.

Se non si abilita **/Gm** nell'ambiente di sviluppo **/FD** verrà utilizzato. **/FD** garantisce che il file con estensione IDB disponga di sufficienti informazioni sulle dipendenze. **/FD** viene usato solo dall'ambiente di sviluppo, e non deve essere usato dalla riga di comando o uno script di compilazione.

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](../../build/reference/output-file-f-options.md)<br/>
[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)