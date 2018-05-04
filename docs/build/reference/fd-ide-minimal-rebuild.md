---
title: -FD (ricompilazione minima IDE) | Documenti Microsoft
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
ms.openlocfilehash: 18e31955b131e4ca22d23013565e53f83493275d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="fd-ide-minimal-rebuild"></a>/FD (Ricompilazione minima IDE)
**/FD** non è esposta per gli utenti tranne il [riga di comando](../../ide/command-line-property-pages.md) pagina delle proprietà di un progetto C++ **pagine delle proprietà** della finestra di dialogo se e solo se [/Gm (Abilita ricompilazione minima)](../../build/reference/gm-enable-minimal-rebuild.md) non è stata selezionata. **/FD** non ha alcun effetto diverso dall'ambiente di sviluppo. **/FD** non è esposta nell'output del **cl /?**.  
  
 Se non si abilita **/Gm** nell'ambiente di sviluppo, **/FD** verrà utilizzato. **/FD** assicura che il file con estensione IDB disponga di sufficienti informazioni di dipendenza. **/FD** viene utilizzata solo dall'ambiente di sviluppo, e non deve essere utilizzata dalla riga di comando o uno script di compilazione.  
  
## <a name="see-also"></a>Vedere anche  
 [File di output (/ F) opzioni](../../build/reference/output-file-f-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)